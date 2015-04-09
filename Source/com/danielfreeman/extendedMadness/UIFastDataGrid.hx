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

import com.danielfreeman.madcomponents.*;

import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.text.TextFieldAutoSize;


/**
 *  Datagrid component
 * <pre>
 * &lt;fastDataGrid
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, ..."
 *    visible = "true|false"
 *    alignH = "left|right|centre|fill"
 *    alignV = "top|bottom|centre|fill"
 *    widths = "i(%),j(%),k(%)…"
 *    multiline = "true|false"
 *    wordWrap = "true|false"
 *    titleBarColour = "#rrggbb"
 *    recycle = "true|false|shared"
 *    headerLines = "true|false"
 *    colSpan = "true|false"
 *    colSpanWrap = "true|false"
 *    <title/>
 *    <font/>
 *    <headerFont/>
 *    <titleFont/>
 *    <header/>
 *    <data>
 *    	<header/>
 *    </data>
 *    <widths/> (depreciated)
 * /&gt;
 * </pre>
 */
class UIFastDataGrid extends UISimpleDataGrid
{
    private var calculateWidth(get, never) : Float;
    public var textSize(never, set) : Float;
    public var dataProvider(never, set) : Array<Array<Dynamic>>;

    
    
    private var _colSpan : Bool;
    private var _colSpanWrap : Bool;
    private var _colSpanWidths : Array<Float> = null;
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        if (xml.has.multiLine) {
            _multiLine = xml.att.multiLine == "true";
        }
        if (xml.has.wordWrap) {
            _wordWrap = xml.att.wordWrap == "true";
        }
			_colSpan = !xml.has.colspan || xml.att.colSpan != "false";
        _colSpanWrap = !xml.has.colSpanWrap || xml.att.colSpanWrap != "false";
        super(screen, xml, attributes);
    }
    
    
    override private function calculateCustomWidths() : Void{
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
 *  Render row colours
 */
    override public function drawBackground() : Void{
        graphics.clear();
        if (_table.length == 0) {
            return;
        }
        var lastRow : Array<UICell> = _table[_table.length - 1];
        if (lastRow.length == 0) {
            return;
        }
        
        var cornerCell : UICell = lastRow[lastRow.length - 1];
        //	var theWidth:Number = Math.max(cornerCell.x + cornerCell.width + 1, _attributes.height, _attributes.width);
        var theWidth : Float = Math.max(cornerCell.x + cornerCell.width + 1, _attributes.width);
        var colour : Int = (_hasHeader) ? _headerColour : _colours[0];
        var index : Int = (_hasHeader) ? 0 : 1;
        if (_title != null) {
            _title.fixwidth = theWidth;
        }
        
        for (row in _table){
            graphics.beginFill(colour);
            graphics.drawRect(0, row[0].y, theWidth, row[0].height);
            graphics.endFill();
            colour = _colours[index++ % _colours.length];
        }
    }
    
/**
 *  Render table cells
 */
    override private function makeTable(data : Array<Array<Dynamic>>, format : TextFormat = null) : Void{
		if (format == null) {
			format = _dataStyle;
		}
        format.leftMargin = _leftMargin;
        for (i in 0...data.length){
            var dataRow : Array<Dynamic> = data[i];
            var row : Array<UICell> = _table[_table.length] = new Array<UICell>();
            var wdth0 : Float = _tableWidth / dataRow.length;
            var lastX : Float = 0;
            var theWidth : Float = Math.max(getBounds(this).right, _tableWidth);
            var cell : UICell = null;
			for (j in 0...dataRow.length){
                //	var wdth:Number = (_cellWidths) ? _tableWidth*_cellWidths[Math.min(_cellWidths.length-1,j)]/100 : wdth0;
                //	var txt:UICell = new UICell(this, lastX, _last, dataRow[j], wdth, format, _border);
                var wdth : Float;
                if (j == dataRow.length - 1) {
                    wdth = Math.ceil(theWidth - lastX);
                }
                else {
                    wdth = Math.round(Math.ceil((_columnWidths != null) ? _columnWidths[j] : ((_cellWidths != null) ? _tableWidth * _cellWidths[Math.round(Math.min(_cellWidths.length - 1, j))] / 100 : wdth0)));
                }
                cell = newCell(format);
                cell.x = lastX;
                cell.y = _last;
                cell.xmlText = dataRow[j];
                cell.fixwidth = wdth;
                row.push(cell);
                cell.border = _border;
                cell.borderColor = _borderColour;
                cell.multiline = _multiLine;
                cell.wordWrap = _wordWrap;
                //	txt.setTextFormat(format);
                cell.fixwidth = wdth;
                lastX = cell.x + cell.width;
            }
            if (cell != null) {
                _last = cell.y + cell.height;
            }
        }
    }
    
/**
 *  Grid row colours
 */
    public function swapRows(rowIndexA : Int, rowIndexB : Int) : Void{
        var rowA : Array<UICell> = _table[rowIndexA];
        var rowB : Array<UICell> = _table[rowIndexB];
        _table[rowIndexA] = rowB;
        _table[rowIndexB] = rowA;
        //	var yA:Number = rowA[0].y;
        //	var yB:Number = rowB[0].y;
        //	for each (var cellA:UICell in rowA) {
        //		cellA.y = yB;
        //	}
        //	for each (var cellB:UICell in rowB) {
        //		cellB.y = yA;
        //	}
        var dataA : Array<Dynamic> = _data[rowIndexA];
        _data[rowIndexA] = _data[rowIndexB];
        _data[rowIndexB] = dataA;
        //	if (_multiLine) {
        rejig();
        drawBackground();
    }
    
    /**
 *  Shift rows up or down - utilised when inserting or deleting rows
 */
    private function shiftRows(index : Int, deltaHeight : Float) : Void{
        for (i in index..._table.length){
            var row : Array<UICell> = _table[i];
            for (cell in row){
                cell.y += deltaHeight;
            }
        }
    }
    
    /**
 *  Insert a row within the datagrid
 */
    public function insertRow(rowIndex : Int, rowData : Array<Dynamic>) : Void{
        var cell : UICell = rowIndex >= (_table.length) ? null : _table[rowIndex][0];
        var row : Array<UICell> = _table[_table.length - 1];
        var rowY : Float = (cell != null) ? cell.y : row[0].y;
        if (cell != null) {
            shiftRows(rowIndex, cell.height);
        }
        var index : Int = 0;
        var newRow : Array<UICell> = new Array<UICell>();
        for (topCell in row){
            newRow.push(cell = newCell(_dataStyle));
            cell.x = topCell.x;
            cell.y = rowY;
            cell.xmlText = rowData[index];
            cell.fixwidth = topCell.width;
            index++;
        }
   //     _table.splice(rowIndex, 0, newRow);
   //     _data.splice(rowIndex, 0, rowData);
		_table.insert(rowIndex, newRow);
        _data.insert(rowIndex, rowData);
        drawBackground();
    }
    
    /**
 *  Delete a specific row from the datagrid
 */
    public function deleteRow(rowIndex : Int) : Void{
        var row : Array<UICell> = _table[rowIndex];
        shiftRows(rowIndex, -row[0].height);
        _data.splice(rowIndex, 1);
        _table.splice(rowIndex, 1);
        for (cell in row){
            removeCell(cell);
        }
        drawBackground();
    }
    
    
    private function get_calculateWidth() : Float{
        var result : Float = 0;
        var row : Array<UICell> = _table[0];
        var wdth : Float = _tableWidth / row.length;
        for (i in 0...row.length){
            result += Math.round(Math.ceil((_columnWidths != null) ? _columnWidths[i] : ((_cellWidths != null) ? _tableWidth * _cellWidths[Math.round(Math.min(_cellWidths.length - 1, i))] / 100 : wdth)));
        }
        return result;
    }
    
    /**
 *  Realign and adjust the datagrid cell positions
 */
    override private function rejig() : Void{
        if (_table.length == 0) {
            return;
        }
        var lastY : Float = 0;
        var columns : Int = _table[0].length;
        graphics.clear();
        var wdth0 : Float = _tableWidth / columns;
        if (_title != null) {
            _title.autoSize = TextFieldAutoSize.LEFT;
            lastY = _title.height;
            _title.fixwidth = _tableWidth;
        }
        var theWidth : Float = (_fits) ? _tableWidth : Math.max(calculateWidth, _tableWidth);
        for (i in 0..._table.length){
            var row : Array<UICell> = _table[i];
            //	var wdth0:Number=_tableWidth/row.length;
            
            var position : Float = 0;
            var maxHeight : Float = initialHeight(i);
            
            for (j in 0...row.length){
                var wdth : Float;
                var colSpan : Bool = false;
                if (j == row.length - 1) {
                    wdth = Math.ceil(theWidth - position);
                    colSpan = _colSpanWrap && j < columns - 1;
                }
                else {
                    wdth = Math.round(Math.ceil((_columnWidths != null) ? _columnWidths[j] : ((_cellWidths != null)) ? _tableWidth * _cellWidths[Math.round(Math.min(_cellWidths.length - 1, j))] / 100 : wdth0));
                }
                var cell : UICell = row[j];
                cell.x = position;
                cell.y = lastY;
                cell.fixwidth = wdth;
                cell.multiline = _multiLine || colSpan;
                cell.wordWrap = _wordWrap || colSpan;
                position += wdth;
                if (_wordWrap || colSpan) {  //_multiLine  
                    cell.autoSize = TextFieldAutoSize.LEFT;
                }
                if (cell.height > maxHeight) {
                    maxHeight = cell.height;
                }
            }
            for (cell0 in row){
                cell0.fixheight = maxHeight;
            }
            lastY += maxHeight;
        }
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
    
    
    override private function get_numberOfRows() : Int{
        return _table.length;
    }
    
    
    /**
 *  Convert y coordinate to row index
 */
    override public function yToRow(y : Float) : Int{
        var result : Int = -1;
        if (_table.length > 0 && y > 0 && y <= theHeight) {
            result = Math.round(Math.min(Math.round(_table.length * y / theHeight), _table.length - 1));
            var cell : UICell = _table[result][0];
            if (y < cell.y) {
                result--;
                while (result >= 0 && y < _table[result][0].y){
                    result--;
                }
            }
            else if (y > cell.y + cell.height) {
                result++;
                while (result < _table.length && y > (cell = _table[result][0]).y + cell.height){
                    result++;
                }
            }
        }
        return result;
    }
    
    /**
 *  Reset datagrid text size
 */
    private function set_textSize(value : Float) : Float{
        _dataStyle.size = value;
        _headerStyle.size = value;
        var sizeFormat : TextFormat = new TextFormat(null, value);
        for (row in _table){
            for (cell in row){
                cell.setTextFormat(sizeFormat);
            }
        }
        rejig();
        return value;
    }
    
    /**
 * Set datagrid data
 */
    override private function setData(value : Array<Array<Dynamic>>, includeHeader : Bool = false) : Void{
        if (_newData) {
            super.setData(value, includeHeader);
        }
        else {
            _data = value;
            if (includeHeader) {
                if (!_hasHeader) {
                    addHeaderToTable();
                }
            }
            else if (_hasHeader) {
                removeHeaderFromTable();
            }
            newDimensions(value.length + (!includeHeader && (_hasHeader) ? 1 : 0), value.length > (0) ? value[0].length : 0);
            invalidate(false, includeHeader);
            doLayout();
        }
    }
    
    /**
 * Refresh datagrid with new data
 */
    private function set_dataProvider(value : Array<Array<Dynamic>>) : Array<Array<Dynamic>>{
        _data = value;
        invalidate();
        return value;
    }
    
    /**
 * Refresh datagrid
 */
    public function invalidate(readGrid : Bool = false, includeHeader : Bool = false) : Void{
        var start : Int = !includeHeader && (_hasHeader) ? 1 : 0;
        var header : Bool = includeHeader && _hasHeader;
        var format : TextFormat = (header) ? _headerStyle : _dataStyle;
        for (i in start..._table.length){
            var row : Array<UICell> = _table[i];
            for (j in 0...row.length){
                if (readGrid) {
                    _data[i - start][j] = row[j].text;
                }
                else {
                    var item : String = _data[i - start][j];
                    var cell : UICell = row[j];
                    cell.setTextFormat(format);
                    cell.defaultTextFormat = format;
                    cell.xmlText = ((item != null)) ? item : "";
                    cell.border = !header || _headerLines;
                }
            }
            format = _dataStyle;
            header = false;
        }
    }
    
    
    private function addColSpanPadding() : Void{
        if (!_colSpan || _columnWidths == null || _colSpanWidths == null) {
            return;
        }
        var sum : Float = 0;
        var maxWidth : Float = 0;
        for (i in 0..._columnWidths.length){
            var rowWidth : Float = sum + _colSpanWidths[i];
            if (rowWidth > maxWidth) {
                maxWidth = rowWidth;
            }
            sum += _columnWidths[i];
        }
        if (maxWidth > sum) {
            if (!_colSpanWrap) {
                _columnWidths[_columnWidths.length - 1] += (maxWidth - sum);
                _fits = false;
            }
        }
    }
    
    
    override private function initialiseColumnWidths() : Void{
        var columns : Int = _table[0].length;
        _colSpanWidths = new Array<Float>();
        _columnWidths = new Array<Float>();
        var hasColSpans : Bool = false;
        for (i in 0..._table.length){
            var row : Array<UICell> = _table[i];
            if (!_colSpan || row.length == columns || i < row.length - 1) {
                for (j in 0...row.length){
                    var cell : UICell = row[j];
                    cell.multiline = cell.wordWrap = false;
                    cell.autoSize = TextFieldAutoSize.LEFT;
                    if (cell.width > _columnWidths[j]) {
                        _columnWidths[j] = cell.width + 1.0;
                    }
                }
            }
            else {
                var index : Int = row.length - 1;
                var lastCell : UICell = row[index];
                lastCell.multiline = lastCell.wordWrap = false;
                lastCell.autoSize = TextFieldAutoSize.LEFT;
                var colSpanWidth : Float = lastCell.width;
                if (colSpanWidth > _colSpanWidths[index]) {
                    _colSpanWidths[index] = colSpanWidth;
                    hasColSpans = true;
                }
            }
        }
        if (!hasColSpans) {
            _colSpanWidths = null;
        }
    }
    
    /**
 *  Attempt to make the datagrid width fits exactly the width of the screen
 */
    override public function compact(padding : Bool = false) : Void{
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
                else if (_wordWrap) {  //_wordWrap  
                    var maxColumn : Int = -1;
                    var maxValue : Float = 0;
                    for (l in 0..._columnWidths.length){
                        if (_columnWidths[l] > maxValue) {
                            maxColumn = l;
                            maxValue = _columnWidths[l];
                        }
                    }
                    var indexes : Array<Dynamic> = [];
                    var minValue : Float = maxValue;
                    for (m in 0..._columnWidths.length){
                        var value : Float = _columnWidths[m];
                        if (value / maxValue > 0.7) {
                            indexes.push(m);
                            if (value < minValue) {
                                minValue = value;
                            }
                        }
                    }
                    var reduction : Float = (sum - _tableWidth) / indexes.length;
                    if (minValue - reduction > UISimpleDataGrid.THRESHOLD) {
                        for (index in indexes){
                            _columnWidths[index] -= reduction;
                        }
                    }
                }
            }
            addColSpanPadding();
            rejig();
        }
    }
    
    
    override public function rowPosition(value : Int) : Float{
        return _table[value][0].y;
    }
    
    
    override public function rowHeight(value : Int) : Float{
        return _table[value][0].height;
    }
    
    /**
 *  Add and remove rows and columns to resize the datagrid efficiently
 */
    private function newDimensions(rows : Int, columns : Int) : Void{
        var oldRows : Int = _table.length;
        var oldColumns : Int = _table.length > (0) ? _table[0].length : 0;
        var header : Bool = _hasHeader;
        if (rows < oldRows) {
            for (r0 in rows...oldRows){
                var row0 : Array<UICell> = _table[r0];
                for (cell in row0){
                    removeCell(cell);
                }
            }
            _table.splice(rows, oldRows - rows);
        }
        if (columns < oldColumns) {
            for (row1 in _table){
                if (header) {
                    for (c0 in columns...oldColumns){
                        removeCell(row1[c0]);
                    }
                    header = false;
                }
                else {
                    for (c1 in columns...oldColumns){
                        removeCell(row1[c1]);
                    }
                }
                row1.splice(columns, oldColumns - columns);
            }
        }
        if (rows > oldRows) {
            for (r1 in oldRows...rows){
                var newRow : Array<UICell> = new Array<UICell>();
                for (c2 in 0...Math.round(Math.min(columns, oldColumns))){
                    newRow.push(newCell(_dataStyle));
                }
                _table.push(newRow);
            }
        }
        if (columns > oldColumns) {
            for (row in _table){
                if (header) {
                    for (c3 in oldColumns...columns){
                        row.push(newCell(_headerStyle));
                    }
                    header = false;
                }
                else {
                    for (c4 in oldColumns...columns){
                        row.push(newCell(_dataStyle));
                    }
                }
            }
        }
    }
}

