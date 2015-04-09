/**
 * <p>Original Author: Daniel Freeman</p>
 *
 * <p>Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:</p>
 *
 * <p>The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.</p>
 *
 * <p>THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS' OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.</p>
 *
 * <p>Licensed under The MIT License</p>
 * <p>Redistributions of files must retain the above copyright notice.</p>
 */

package com.danielfreeman.extendedmadness;

import openfl.geom.Rectangle;
import com.danielfreeman.madcomponents.*;

import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.text.TextFieldAutoSize;


/**
 *  Datagrid component
 * <pre>
 * &lt;simpleDataGrid
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, ..."
 *    visible = "true|false"
 *    alignH = "left|right|centre|fill"
 *    alignV = "top|bottom|centre|fill"
 *    widths = "i(%),j(%),k(%)…"
 *    titleBarColour = "#rrggbb"
 *    recycle = "true|false|shared"
 *    headerLines = "true|false"
 *    &lt;title/&gt;
 *    &lt;font/&gt;
 *    &lt;headerFont/&gt;
 *    &lt;titleFont/&gt;
 *    &lt;header/&gt;
 *    &lt;data&gt;
 *    	&lt;header/&gt;
 *    &lt;/data&gt;
 *    &lt;widths/&gt; (depreciated)
 * /&gt;
 * </pre>
 */
class UISimpleDataGrid extends MadSprite implements IComponentUI
{
    public var newData(never, set) : Array<Array<Dynamic>>;
    public var fits(get, never) : Bool;
    public var widths(never, set) : String;
    public var colours(get, set) : Array<Int>;
    public var title(never, set) : String;
    public var titleCell(get, never) : UICell;
    public var fixwidth(never, set) : Float;
    public var headerColour(get, set) : Int;
    public var pages(get, never) : Array<DisplayObject>;
    public var numberOfRows(get, never) : Int;
    public var data(get, set) : Array<Array<Dynamic>>;
    public var headerAndData(never, set) : Array<Array<Dynamic>>;
    public var tableCells(get, never) : Array<Array<UICell>>;
    public var hasHeader(get, set) : Bool;

    
    private static inline var DEFAULT_HEADER_COLOUR : Int = 0x9999AA;  //0x4481c1;  
    private static var DEFAULT_COLOURS : Array<Int> = [0xe8edf5, 0xcfd8e9];
    private static inline var TABLE_WIDTH : Float = 300.0;
    private static inline var TEXT_SIZE : Float = 13.0;
    private static inline var THRESHOLD : Float = 36.0;
    private static inline var LINE_THICKNESS : Float = 0.5;
    
//    private var HEADER_STYLE : TextFormat = 
//    private var TITLE_STYLE : TextFormat = 
//    private var DATA_STYLE : TextFormat = 
    
    
    private var _table : Array<Array<UICell>> = new Array<Array<UICell>>();
    private var _last : Float = 0;
    private var _lastWidth : Float;
    private var _cellWidths : Array<Dynamic> = null;
    private var _theWidths : Array<Dynamic> = null;
    private var _leftMargin : Float;
    private var _tableWidth : Float;
    private var _data : Array<Array<Dynamic>> = [[]];
    private var _borderColour : Int;
    private var _colours : Array<Int> = DEFAULT_COLOURS;
    
    private var _compactTable : Bool = false;
    private var _columnWidths : Array<Float> = null;
    private var _multiLine : Bool = false;
    private var _wordWrap : Bool = false;
    private var _hasHeader : Bool = false;
    private var _dataStyle : TextFormat = new TextFormat("Arial", TEXT_SIZE, 0x333333, false);
    private var _headerStyle : TextFormat = new TextFormat("Arial", TEXT_SIZE, 0xFFFFFF, false);
    private var _titleStyle : TextFormat = new TextFormat("Arial", 14, 0xFFFFFF, true);
    private var _titleBarColour : Int = DEFAULT_HEADER_COLOUR;
    private var _title : UICell = null;
    private var _headerText : Array<Dynamic>;
    private var _headerColour : Int;
    private var _recycle : Array<UICell> = null;
    private static var _sharedRecycle : Array<UICell> = [];
    private var _fastLayout : Bool = false;
    private var _border : Bool;
    private var _fits : Bool = false;
    private var _newData : Bool = false;
    
    private var _rowPositions : Array<Float>;
    private var _headerLines : Bool = false;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        super(screen, attributes);
        x = attributes.x;
        y = attributes.y;
        
        var saveBorder : Bool = _border = !xml.has.lines || xml.att.lines == "true";
        _headerLines = xml.has.headerLines && xml.att.headerLines == "true";
        _tableWidth = attributes.width;
        _leftMargin = 4.0;
        
        _borderColour = attributes.colour;
        
        if (xml.hasNode.widths) {  // Depreciated  
            _cellWidths = xml.node.widths.toString().split(",");
        }
        if (xml.has.widths) {
            _theWidths = xml.att.widths.split(",");
        }
        if (xml.hasNode.font) {
            _dataStyle = UIe.toTextFormat(xml.node.font, _dataStyle);
        }
        if (xml.hasNode.headerFont) {
            _headerStyle = UIe.toTextFormat(xml.node.headerFont, _headerStyle);
        }
        if (xml.hasNode.titleFont) {
            _titleStyle = UIe.toTextFormat(xml.node.titleFont, _titleStyle);
        }
        if (xml.has.recycle && xml.att.recycle == "shared" && _recycle == null) {
            _recycle = _sharedRecycle;
        }
        if (xml.has.recycle && xml.att.recycle == "true" && _recycle == null) {
            _recycle = new Array<UICell>();
        }
        
        customWidths();
        _compactTable = !xml.has.widths;
        //		if (xml.@multiLine.length() > 0) {  // **** Put back into subclass
        //			_multiLine = xml.@multiLine == "true";
        //		}
        //		if (xml.@wordWrap.length() > 0) {
        //			_wordWrap = xml.@wordWrap == "true";
        //		}
        
        _headerText = extractHeader(xml);
        _headerColour = ((attributes.backgroundColours.length > 0)) ? attributes.backgroundColours[0] : DEFAULT_HEADER_COLOUR;
        _titleBarColour = _headerColour;
        if (xml.has.titleBarColour) {
            _titleBarColour = UI.toColourValue(xml.att.titleBarColour);
        }
        if (xml.hasNode.title) {
            _title = new UICell(this, 0, 0, " ", 0, _titleStyle, false, false, _titleBarColour);
            _title.xmlText = xml.node.title.toString();
            _title.fixwidth = attributes.width;
            _title.defaultColour = _titleBarColour;
            _last = _title.height;
            _title.border = false;
            _title.borderColor = _borderColour;
        }
        if (_headerText != null) {
            _hasHeader = true;
            _border = _headerLines;
            makeTable([_headerText], _headerStyle);
        }
        if (attributes.backgroundColours.length > 1) {
            _colours = [];
            for (i in 1...attributes.backgroundColours.length){
                _colours.push(attributes.backgroundColours[i]);
            }
        }
        
        if (xml.hasNode.data) {
            extractData(xml.node.data);
        }
        _dataStyle.leftMargin = _leftMargin;
        _headerStyle.leftMargin = 0;
        _border = saveBorder;
        makeTable(_data, _dataStyle);
        doLayout();
    }
    
    
    private function set_newData(value : Array<Array<Dynamic>>) : Array<Array<Dynamic>>{
        _data = value;
        _newData = true;
        var saveBorder : Bool = _border;
        clear();
        if (_hasHeader) {
            _border = _headerLines;
            makeTable([value[0]], _headerStyle);
            _border = saveBorder;
            makeTable(value.slice(1), _dataStyle);
        }
        else {
            makeTable(value, _dataStyle);
        }
        doLayout();
        return value;
    }
    
    
    private function get_fits() : Bool{
        return _fits;
    }
    
    
    private function set_widths(value : String) : String{
        if (value == "") {
            _theWidths = null;
            _compactTable = true;
            _columnWidths = null;
        }
        else {
            _theWidths = value.split(",");
            calculateCustomWidths();
            _compactTable = false;
        }
        return value;
    }
    
    /**
 *  Grid row colours
 */
    private function set_colours(value : Array<Int>) : Array<Int>{
        _colours = (value != null && value.length > 0) ? value : DEFAULT_COLOURS;
        drawBackground();
        return value;
    }
    
    
    private function get_colours() : Array<Int>{
        return _colours;
    }
    
    /**
 *  Datagrid title field
 */
    private function set_title(value : String) : String{
        if (_title == null) {
            _title = new UICell(this, 0, 0, "", 0, _titleStyle, false, false, _titleBarColour);
            _title.fixwidth = _attributes.width;
            _title.defaultColour = _titleBarColour;
        }
        if (MadXML.parse("<a>" + value + "</a>").hasChildren) {
            _title.htmlText = value;
        }
        else {
            _title.xmlText = value;
            _title.setTextFormat(_titleStyle);
            _title.border = false;
        }
        return value;
    }
    
    
    private function get_titleCell() : UICell{
        return _title;
    }
    
    
    private function set_fixwidth(value : Float) : Float{
        for (i in 0..._table.length){
            var row : Array<UICell> = _table[i];
            var lastCell : UICell = row[row.length - 1];
            lastCell.width = value - lastCell.x;
        }
        return value;
    }
    
    
    /**
 *  Column headings background colour
 */
    private function set_headerColour(value : Int) : Int{
        _headerColour = value;
        drawBackground();
        return value;
    }
    
    
    private function get_headerColour() : Int{
        return _headerColour;
    }
    
    
    private function calculateCustomWidths() : Void{
        var total : Float = 0;
        for (item in _theWidths){
            if (item.lastIndexOf("%") < 0) {
                total += Std.parseInt(item);
            }
        }
        _columnWidths = new Array<Float>();
        for (width in _theWidths){
            _columnWidths.push(((width.lastIndexOf("%") > 0)) ? Std.parseFloat(width) / 100 * (_attributes.width - total) : Std.parseFloat(width));
        }
    }
    
    /**
 *  Adjust column widths
 */
    private function customWidths() : Void{
        if (_theWidths != null && _table.length > 0) {
            calculateCustomWidths();
        }
        rejig();
    }
    
    
    private function verticalGridLines() : Void{
        var sum : Float = 0;
        var offset : Float = 0;
        if (!_headerLines) {
            var lastRow : Array<UICell> = _table[_table.length - 1];
            var dataCell : UICell = lastRow[lastRow.length - 1];
            offset = Math.round(dataCell.y);
        }
        for (width in _columnWidths){
            sum += width;
            graphics.beginFill(_borderColour);
            graphics.drawRect(Math.round(sum), offset, LINE_THICKNESS, getBounds(this).bottom - offset);
            graphics.endFill();
        }
    }
    
    
    private function horizontalGridLines() : Void{
		
		//This method cannot work in Haxe, as Haxe does not support TextField.getCharBoundaries().
		
		
   //     var lastRow : Array<UICell> = _table[_table.length - 1];
   //     var dataCell : UICell = lastRow[lastRow.length - 1];
   //     var dataText : String = dataCell.text;
   //     var position : Int = 0;
   //     _rowPositions = (_title != null) ? [_title.y, dataCell.y] : [dataCell.y];
   //     while ((position = dataText.indexOf("\r", position)) > 0){
   //         position++;
   //         var firstChar : Rectangle = dataCell.getCharBoundaries(position);
   //         if (firstChar != null) {
   //             var lineTop : Float = Math.round(dataCell.y + firstChar.y - 2);
   //             _rowPositions.push(lineTop);
   //             graphics.beginFill(_borderColour);
   //             graphics.drawRect(0, lineTop, width, LINE_THICKNESS);
   //             graphics.endFill();
   //         }
   //     }
   //     _rowPositions.push(height);
    }
    
    
    /**
 *  Render row colours
 */
    public function drawBackground() : Void{
        if (_table.length == 0 || _table[0].length == 0) {
            return;
        }
        var lastRow : Array<UICell> = _table[_table.length - 1];
        var cornerCell : UICell = lastRow[lastRow.length - 1];
        var theWidth : Float = Math.max(cornerCell.x + cornerCell.width + 1, _attributes.width);
        var colour : Int = (_hasHeader) ? _headerColour : _colours[0];
        var index : Int = (_hasHeader) ? 0 : 1;
        if (_title != null) {
            _title.fixwidth = theWidth;
        }
        graphics.clear();
        for (row in _table){
            var cell : UICell = row[0];
            graphics.beginFill(colour);
            graphics.drawRect(0, cell.y, theWidth, cell.height);
            graphics.endFill();
            colour = _colours[index++ % _colours.length];
        }
        verticalGridLines();
        horizontalGridLines();
    }
    
    /**
 *  Render table cells
 */
    private function makeTable(data : Array<Array<Dynamic>>, format : TextFormat = null) : Void{
        if (format == null) {
			format = _dataStyle;
		}
        format.leftMargin = _leftMargin;
        var cellString : String = "";
        
        for (row in data){
            for (item in row){
                cellString += item + "\t";
            }
            cellString += "\n";
        }
        if (data.length > 0) {
            var cell : UICell = newCell(format);
            cell.x = 0;
            cell.y = _last;
            cell.xmlText = cellString;
            cell.autoSize = TextFieldAutoSize.LEFT;
            var tableRow : Array<UICell> = [];
            tableRow.push(cell);
            _table.push(tableRow);
            _last = cell.y + cell.height;
        }
    }
    
    
    private function get_pages() : Array<DisplayObject>{
        return [];
    }
    
    /**
 *  Extract an array of object from XML data
 */
    private function extractData(xml : MadXML) : Void{
        var rows : MadXMLList = xml.nodes.row;
        _data = new Array<Array<Dynamic>>();
        for (row in rows){
            var dataRow : Array<Dynamic> = Std.string(row).split(",");
            _data.push(dataRow);
        }
    }
    
    
    private function initialHeight(rowIndex : Int) : Float{
        return 0;
    }
    
    /**
 *  Realign and adjust the datagrid cell positions
 */
    private function rejig() : Void{
        if (_table.length == 0) {
            return;
        }
        var lastY : Float = 0;
        graphics.clear();
        if (_title != null) {
            _title.autoSize = TextFieldAutoSize.LEFT;
            lastY = _title.height;
            _title.fixwidth = _tableWidth;
        }
        var tabsTextFormat : TextFormat = new TextFormat();
        var tabStops : Array<UInt> = [];
        var sum : Float = 0;
        for (tabWidth in _columnWidths){
            sum += tabWidth;
            tabStops.push(Math.ceil(sum));
        }
        tabsTextFormat.tabStops = tabStops;
        if (!_hasHeader) {
            tabsTextFormat.leading = 4;
        }
        for (tableRow in _table){
            var cell : UICell = tableRow[0];
            cell.x = 0;
            cell.y = lastY;
            cell.setTextFormat(tabsTextFormat);
            lastY += cell.height;
            tabsTextFormat.leading = 4;
        }
    }
    
    /**
 *  Refresh datagrid layout
 */
    public function doLayout() : Void{
        _tableWidth = _attributes.width;
        if (_cellWidths != null) {
            rejig();
        }
        else if (_theWidths != null) {
            customWidths();
        }
        else if (_compactTable) {
            compact(true);
        }
        else {
            rejig();
        }
        drawBackground();
    }
    
    
    override public function layout(attributes : Attributes) : Void{
        super.layout(attributes);
        _attributes = attributes;
        x = attributes.x;
        y = attributes.y;
        if (!_fastLayout) {
            doLayout();
        }
    }
    
    
    public function drawComponent() : Void{
        
    }
    
    /**
 * Clear the data grid
 */
    public function clear() : Void{
        for (row in _table){
            for (cell in row){
                removeCell(cell);
            }
        }
        _table = new Array<Array<UICell>>();
    }
    
    /**
 * Find a particular row,column (group) inside the grid
 */
    public function findViewById(id : String, row : Int = -1, group : Int = -1) : DisplayObject{
        return ((id == "")) ? _table[row][group] : null;
    }
    
    
    private function extractHeader(xml : MadXML) : Array<String>{
        if (xml.hasNode.header) {
            return xml.node.header.toString().split(",");
        }
        else if (xml.hasNode.data && xml.node.data.hasNode.header) {
            return xml.node.data.node.header.toString().split(",");
        }
        else {
            return null;
        }
    }
    
    
    private function get_numberOfRows() : Int{
        return _rowPositions.length + ((hasHeader) ? 1 : 0) - 2;
    }
    
    /**
 *  Convert y coordinate to row index
 */
    public function yToRow(y : Float) : Int{  // Need to override  
        var result : Int = -1;
        if (numberOfRows > 0 && y > 0 && y <= theHeight) {
            result = Math.round(Math.min(Math.floor(numberOfRows * (y - _title.height) / (theHeight - _title.height)), numberOfRows - 1));
            var top : Float = rowPosition(result);
            if (y < top) {
                result--;
                top = rowPosition(result);
                while (result >= 0 && y < top){
                    result--;
                    top = rowPosition(result);
                }
            }
            else {
                var bottom : Float = top + rowHeight(result);
                if (y > bottom) {
                    result++;
                    top = rowPosition(result);
                    bottom = top + rowHeight(result);
                    while (result < numberOfRows && y > bottom){
                        result++;
                        top = rowPosition(result);
                        bottom = top + rowHeight(result);
                    }
                }
            }
        }
        return result;
    }
    
    
    private function reformatTopRow(format : TextFormat) : Void{
        if (_table.length > 0) {
            for (cell in _table[0]){
                cell.setTextFormat(format);
                cell.defaultTextFormat = format;
            }
        }
    }
    
    
    private function addHeaderToTable() : Void{
        _hasHeader = true;
        reformatTopRow(_headerStyle);
    }
    
    
    private function removeHeaderFromTable() : Void{
        _hasHeader = false;
        reformatTopRow(_dataStyle);
    }
    
    
    /**
 * Set datagrid data
 */
    private function setData(value : Array<Array<Dynamic>>, includeHeader : Bool = false) : Void{
        _hasHeader = includeHeader;
        newData = value;
        _newData = false;
    }
    
    
    private function set_data(value : Array<Array<Dynamic>>) : Array<Array<Dynamic>> {
        setData(value);
        return value;
    }
    
    
    private function get_data() : Array<Array<Dynamic>> {
        return _data;
    }
    
    
    private function set_headerAndData(value : Array<Array<Dynamic>>) : Array<Array<Dynamic>>{
        setData(value, true);
        return value;
    }
    
    /**
 *  Access datagrid cells
 */
    private function get_tableCells() : Array<Array<UICell>>{
        return _table;
    }
    
    
    public function rowPosition(value : Int) : Float{
        return _rowPositions[value];
    }
    
    
    public function rowHeight(value : Int) : Float{
        return _rowPositions[value + 1] - _rowPositions[value];
    }
    
    
    private function set_hasHeader(value : Bool) : Bool{
        _hasHeader = value;
        return value;
    }
    
    
    private function get_hasHeader() : Bool{
        return _hasHeader;
    }
    
    
    private function estimateWidth(size : Float, text : String) : Float{
        (new EReg('<[^<]+?>', "g")).replace(text, "");
		
		var characters : String = text;
		(new EReg('[^@W]', "g")).replace(characters, "");
        var extraWide : Int = characters.length;
		
		characters = text;
		(new EReg('[^a-l n-v xyzI\\s.,!|]', "g")).replace(characters, "");
        var lowerCaseAndSpaces : Int = characters.length;
		
		characters = text;
		(new EReg('[^0-9]', "g")).replace(characters, "");
        var numbers : Int = characters.length;
		
        var everythingElse : Int = text.length - lowerCaseAndSpaces - numbers - extraWide;
        return size * (1.05 * extraWide + 0.75 * everythingElse + 0.52 * lowerCaseAndSpaces + 0.6 * numbers) + 2 * _leftMargin;
    }
    
    
    private function initialiseColumnWidths() : Void{  // Need to override in subclass  
        var dataSize : Float = _dataStyle.size;
        _columnWidths = new Array<Float>();
        var estimate : Float;
        var index : Int = 0;
        if (_headerText != null) {
            var headerSize : Float = _headerStyle.size;
            for (headerItem in _headerText){
                estimate = estimateWidth(headerSize, headerItem);
                if (estimate > _columnWidths[index]) {
                    _columnWidths[index] = estimate;
                }
                index++;
            }
        }
        for (dataRow in _data){
            index = 0;
            for (dataItem in dataRow){
                estimate = estimateWidth(dataSize, dataItem);
                if (index < _columnWidths.length && estimate > _columnWidths[index]) {
                    _columnWidths[index] = estimate;
                }
                index++;
            }
        }
    }
    
    /**
 *  Attempt to make the datagrid width fits exactly the width of the screen
 */
    public function compact(padding : Bool = false) : Void{  // Don't forget to override  
        _fits = false;
        if (_table.length > 0) {
            initialiseColumnWidths();
            if (padding) {
                var sum : Float = 0;
                for (width in _columnWidths){
                    sum += width;
                }
                if (sum < _tableWidth) {
                    _fits = true;
                    var padEachCellBy : Float = (_tableWidth - sum) / _columnWidths.length;
                    for (k in 0..._columnWidths.length){
                        _columnWidths[k] += padEachCellBy;
                    }
                }
            }
            rejig();
        }
    }
    
    
    private function removeCell(cell : UICell) : Void{
        if (_recycle != null) {
            _recycle.push(cell);
        }
        cell.parent.removeChild(cell);
    }
    
    
    private function newCell(format : TextFormat) : UICell{
        _dataStyle.leftMargin = _leftMargin;
        var result : UICell;
        if (_recycle != null && _recycle.length > 0) {
            addChild(result = _recycle.pop());
            result.setTextFormat(format);
            result.defaultTextFormat = format;
            result.multiline = _multiLine;
            result.wordWrap = _wordWrap;
            result.border = _border;
        }
        else {
            result = new UICell(this, 0, 0, "", 0, format, _multiLine, _wordWrap, _borderColour, _border);
        }
        return result;
    }
    
    
    override private function get_theHeight() : Float{
        return getBounds(this).bottom;
    }
}

