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

import openfl.text.TextFormat;
import com.danielfreeman.extendedmadness.*;
import openfl.events.TimerEvent;
import openfl.display.Sprite;
import openfl.display.DisplayObject;
import com.danielfreeman.madcomponents.*;
import openfl.events.MouseEvent;
import openfl.geom.Point;
import openfl.display.InteractiveObject;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.geom.Rectangle;
import openfl.geom.Matrix;

/**
 * ScrollDatagrid component
 * <pre>
 * &lt;scrollDataGrids
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, ..."
 *    visible = "true|false"
 *    widths = "p,q,r..."
 *    alignH = "scroll|no scroll"
 *    alignV = "scroll|no scroll"
 *    editable = "true|false"
 *    widths = "i(%),j(%),k(%)…"
 *    multiline = "true|false"
 *    titleBarColour = "#rrggbb"
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    border = "true|false"
 *    autoLayout = "true|false"
 *    tapToScale = "NUMBER"
 *    auto = "true|false"
 *    fixedColumns = "n"
 *    fixedColumnsColours = "#rrggbb, #rrggbb, ..."
 *    alignGridWidths = "true|false"
 *    headerLines = "true|false"
 *    status = "TEXT"
 *    statusColour = "#rrggbb"
 *    slideFixedColumns = "true|false"
 *    lockSides = "true|false"
 *    lockTopBottom = "true|false"
 * /&gt;
 * </pre>
 */
class UIScrollDataGrids extends UIScrollDataGrid
{
    public var status(never, set) : String;
    public var selectDataGrid(never, set) : Int;
    public var dataGrids(get, never) : Array<UISimpleDataGrid>;
    public var fixheight(never, set) : Float;
    public var alignGridWidths(never, set) : Bool;

    
    private static inline var EXTRA : Float = 32.0;
    private static var STATUS_STYLE : TextFormat = new TextFormat("Arial", 13, 0xFFFFFF);
    private static inline var HEADER_NAME : String = "#header";
    
    private var _dataGrids : Array<UISimpleDataGrid> = new Array<UISimpleDataGrid>();
    private var _fixedColumnLayers : Array<Sprite> = new Array<Sprite>();
    private var _currentHeading : Int = 0;
    private var _titleSlider : Sprite = null;
    private var _headerTitleSlider : Sprite = null;
    private var _alignGridWidths : Bool = false;
    private var _statusFormat : TextFormat = STATUS_STYLE;
    private var _status : UILabel;
    private var _screen : Sprite;
    private var _gridColumns : Array<Dynamic> = [];
    private var _headerLines : Bool = false;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        _screen = screen;
    //    xml = xml.node.copy.innerData();
        _headerLines = xml.has.headerLines && xml.att.headerLines == "true";
        _alignGridWidths = xml.has.alignGridWidths && xml.att.alignGridWidths == "true";
        initialiseLayers(xml);
        if (xml.has.statusColour) {
            _statusFormat = new TextFormat(null, null, UI.toColourValue(xml.att.statusColour));
        }
        super(screen, xml, attributes);
        this.setChildIndex(_slider, 0);
        
        _status = new UILabel(this, 0, 0, xml.has.status ? xml.att.status : "", _statusFormat);
        _status.x = attributes.width - _status.width;
        doLayout();
    }
    
    
    public function gridFixedColumns(gridIndex : Int = -1, row : Int = -1) : Void{
        if (gridIndex < 0) {
            _gridColumns = [];
        }
        else {
            _gridColumns[gridIndex] = row;
        }
    }
    
/**
 * Set status label at top-right of datagrids
 */
    private function set_status(value : String) : String{
        _status.xmlText = value;
        _status.x = attributes.width - _status.width;
        return value;
    }
    
    
    private function reposition(cell : UICell) : Void{
        var globalPoint : Point = cell.localToGlobal(new Point(0, 0));
        var sliderPoint : Point = _slider.globalToLocal(globalPoint);
        cell.x = sliderPoint.x;
        cell.y = sliderPoint.y;
    }
    
/**
 *  Create all the layers which slide in different ways for scrolling the grid.
 */
    private function initialiseLayers(xml : MadXML) : Void{
        _headerSlider = new Sprite();
        _headerSlider.name = "_headerSlider";
        if (xml.has.fixedColumns) {
            _fixedColumns = Std.parseInt(xml.att.fixedColumns);
            _fixedColumnSlider = new Sprite();
            _fixedColumnSlider.name = "_fixedColumnSlider";
        }
        _titleSlider = new Sprite();
        _titleSlider.name = "_titleSlider";
        _headerFixedColumnSlider = new Sprite();
        _headerFixedColumnSlider.name = "_headerFixedColumnSlider";
        _headerTitleSlider = new Sprite();
        _headerTitleSlider.name = "_headerTitleSlider";
    }
	
	
	private function addLayers():Void {
		addChild(_headerSlider);
		if (_fixedColumnSlider != null) {
			addChild(_fixedColumnSlider);
		}
		addChild(_titleSlider);
		_headerFixedColumnSlider = new Sprite();
        _headerFixedColumnSlider.name = "_headerFixedColumnSlider";
		addChild(_headerFixedColumnSlider);
		addChild(_headerTitleSlider);
	}
    
    
    override private function set_xml(value : MadXML) : MadXML{
        _dataGridXML = value;
        clear();
        createSlider(value, _attributes);
        return value;
    }
    
    
    override private function sliceTable(dataGrid : UISimpleDataGrid) : Void{
        
    }
    
/**
 *  Put headers, fixed columns, and grid cells all within their appropriate layers
 */
    private function sliceTables(dataGrid : UISimpleDataGrid, index : Int = 0) : Void{
        var fixedColumnLayer : Sprite;
        if (_fixedColumnSlider == null) {
            addChild(_fixedColumnSlider = new Sprite());
        }
        if (_fixedColumnLayers.length == index) {
            _fixedColumnSlider.addChild(fixedColumnLayer = new Sprite());
            var dataGridGlobalPoint : Point = dataGrid.localToGlobal(new Point(0, 0));
            fixedColumnLayer.y = _slider.globalToLocal(dataGridGlobalPoint).y;
            _fixedColumnLayers.push(fixedColumnLayer);
        }
        else {
            fixedColumnLayer = _fixedColumnLayers[index];
        }
        var fixedColumns : Int = ((_gridColumns[index] != null)) ? _gridColumns[index] : _fixedColumns;
        if (fixedColumns > 0 && dataGrid.tableCells.length > 0) {
            var rowIndex : Int = 0;
            var start : Int = (dataGrid.hasHeader) ? 1 : 0;
            for (i in 0...dataGrid.tableCells.length){
                var tableRow : Array<UICell> = dataGrid.tableCells[i];
                for (j in 0...fixedColumns){
                    var cell : UICell = tableRow[j];
                    //	if (i < start) {
                    //		cell.defaultColour = dataGrid.headerColour;
                    //	}
                    //	else if (_fixedColumnColours) {
                    //		cell.defaultColour = _fixedColumnColours[(rowIndex - start) % _fixedColumnColours.length];
                    //	}
                    fixedColumnLayer.addChild(cell);
                }
                rowIndex++;
            }
        }
        colourFixedColumns(dataGrid);
        if (dataGrid.titleCell != null) {
            _titleSlider.addChild(dataGrid.titleCell);
            dataGrid.titleCell.y = fixedColumnLayer.y;
        }
        if (Std.is(dataGrid, UISpecialDataGrid)) {
            cast((dataGrid), UISpecialDataGrid).copyColumns(fixedColumnLayer, fixedColumns);
        }
    }
    
/**
 *  Put headers, fixed columns, and grid cells all within their appropriate layers
 */
    private function sliceAllTables() : Void{
        for (i in 0..._slider.numChildren){
            var child : DisplayObject = _slider.getChildAt(i);
            if (Std.is(child, UISimpleDataGrid)) {
                if (i < _fixedColumnLayers.length) {
                    _fixedColumnLayers[i].visible = cast((child), UISimpleDataGrid).includeInLayout;
                }
                if (cast((child), UISimpleDataGrid).titleCell != null) {
                    cast((child), UISimpleDataGrid).titleCell.visible = cast((child), UISimpleDataGrid).includeInLayout;
                }
                if (cast((child), UISimpleDataGrid).includeInLayout) {
                    sliceTables(cast((child), UISimpleDataGrid), i);
                }
            }
        }
        _slider.cacheAsBitmap = true;
        if (_fixedColumnSlider != null) {
            _fixedColumnSlider.cacheAsBitmap = true;
        }
        if (_headerSlider != null) {
            _headerSlider.cacheAsBitmap = true;
        }
        _headerFixedColumnSlider.cacheAsBitmap = true;
        _titleSlider.cacheAsBitmap = true;
    }
    
    
    private function copyText(parent : Sprite, source : UICell, yPosition : Float = 0, colour : Int = -1) : UICell{
        var copyText : UICell = new UICell(parent, Math.round(source.x), Math.round(yPosition), source.text, source.width, source.getTextFormat(), source.multiline, source.wordWrap, source.borderColor);
        copyText.height = source.height;
        copyText.backgroundColor = (colour < 0) ? source.backgroundColor : colour;
        copyText.background = (colour < 0) ? source.background : true;
        copyText.y = yPosition;
        copyText.borderColor = source.borderColor;
        copyText.border = source.border;
        return copyText;
    }
    
    
    private function copyRow(parent : Sprite, row : Array<UICell>, start : Int, end : Int, yPosition : Float, colour : Int) : Void{
        for (i in start...end){
            copyText(parent, row[i], yPosition, colour);
        }
    }
    
/**
 *  The top header doesn't move, and changes to row headings depending on which datagrid is
 *  beneath it.  This method pre-renders all column headers for the datagrids
 */
    private function preExtractHeadersCells() : Void{
        _headerTitleSlider.removeChildren();
        _headerFixedColumnSlider.removeChildren();
        _headerSlider.removeChildren();
        _headerTitleSlider.name = HEADER_NAME;
        _headerFixedColumnSlider.name = HEADER_NAME;
        _headerSlider.name = HEADER_NAME;
        var i : Int = 0;
        for (dataGrid in _dataGrids){
            var cellTitle : UICell = null;
            if (dataGrid.titleCell != null && dataGrid.includeInLayout) {
                cellTitle = copyText(_headerTitleSlider, dataGrid.titleCell);
                cellTitle.visible = i == 0;
            }
            if (dataGrid.hasHeader && dataGrid.tableCells.length > 0) {
                var row : Array<UICell> = dataGrid.tableCells[0];
                var fixedColumns : Int = ((_gridColumns[i] != null)) ? _gridColumns[i] : _fixedColumns;
                if (fixedColumns > 0 && _headerFixedColumnSlider != null) {
                    var spriteFixedHeader : Sprite = new Sprite();
                    copyRow(spriteFixedHeader, row, 0, fixedColumns, (cellTitle != null) ? cellTitle.height : 0, dataGrid.headerColour);
                    _headerFixedColumnSlider.addChild(spriteFixedHeader);
                    spriteFixedHeader.visible = i == 0;
                }
                var spriteHeader : Sprite = new Sprite();
                copyRow(spriteHeader, row, fixedColumns, row.length, (cellTitle != null) ? cellTitle.height : 0, dataGrid.headerColour);
                _headerSlider.addChild(spriteHeader);
                spriteHeader.visible = i == 0;
            }
            i++;
        }
    }
    
/**
 *  When the datagrid is scrolled - possibly change top column headings
 */
    private function swapCellHeaders() : Void{
        var index : Int = -1;
        if (_slider.y < 0 && _dataGrids.length > 0) {
            while (index + 1 < _fixedColumnLayers.length && index + 1 < _dataGrids.length && _dataGrids[index + 1].includeInLayout && -_slider.y + ((_currentHeading >= 0) ? _headerSlider.getBounds(this).bottom / 2 : 0) > _fixedColumnLayers[index + 1].y){
                index++;
            }
        }
        var fixedColumns : Int = ((_gridColumns[index] != null)) ? _gridColumns[index] : _fixedColumns;
        if (index >= 0 && index != _currentHeading) {
            if (_currentHeading >= 0 && _currentHeading < _headerSlider.numChildren) {
                if (_currentHeading < _headerTitleSlider.numChildren) {
                    cast((_headerTitleSlider.getChildAt(_currentHeading)), UICell).visible = false;
                }
                cast((_headerSlider.getChildAt(_currentHeading)), Sprite).visible = false;
                if (fixedColumns > 0) {
                    cast((_headerFixedColumnSlider.getChildAt(_currentHeading)), Sprite).visible = false;
                }
            }
            if (index >= 0 && index < _headerSlider.numChildren) {
                if (index < _headerTitleSlider.numChildren) {
                    cast((_headerTitleSlider.getChildAt(index)), UICell).visible = true;
                }
                cast((_headerSlider.getChildAt(index)), Sprite).visible = true;
                if (fixedColumns > 0) {
                    cast((_headerFixedColumnSlider.getChildAt(index)), Sprite).visible = true;
                }
                headerFixedColumnLine(index);
            }
            _currentHeading = index;
        }
    }
    
    
    override private function set_sliderX(value : Float) : Float{
        super.sliderX = value;
        _titleSlider.x = (value > 0) ? value : 0;
        _headerTitleSlider.x = (value > 0) ? value : 0;
        return value;
    }
    
    
    override private function set_sliderY(value : Float) : Float{
        super.sliderY = value;
        _titleSlider.y = value;
        _headerTitleSlider.y = (value > 0) ? value : 0;
        if (_status != null) {
            _status.y = _headerTitleSlider.y;
        }
        swapCellHeaders();
        return value;
    }
    
/**
 *  Create sliding parts of container
 */
    override private function createSlider(xml : MadXML, attributes : Attributes) : Void{
        addLayers();
		_slider = new UIForm(this, _dataGridXML, sliderAttributes(attributes));
        _slider.name = "-";
        adjustMaximumSlide();
        _dataGrids = [];
        for (i in 0..._slider.numChildren){
            var child : DisplayObject = _slider.getChildAt(i);
            if (Std.is(child, UISimpleDataGrid) && cast((child), UISimpleDataGrid).includeInLayout) {
                _dataGrids.push(cast((child), UISimpleDataGrid));
            }
        }
        sliceAllTables();
    }
    
    
    private function headerFixedColumnLine(index : Int) : Void{
        if (_dataGrids.length > index && _currentHeading >= 0) {
            var dataGrid : UISimpleDataGrid = _dataGrids[index];
            var fixedColumns : Int = ((_gridColumns[index] != null)) ? _gridColumns[index] : _fixedColumns;
            _headerFixedColumnSlider.graphics.clear();
            if (fixedColumns > 0 && dataGrid.includeInLayout && dataGrid.tableCells.length > 0 && dataGrid.tableCells[0].length > fixedColumns) {
                _headerFixedColumnSlider.graphics.beginFill(dataGrid.attributes.colour);
                _headerFixedColumnSlider.graphics.drawRect(dataGrid.tableCells[0][fixedColumns].x, _headerFixedColumnSlider.getBounds(this).top, 2.0, _headerFixedColumnSlider.height);
                _headerFixedColumnSlider.graphics.endFill();
            }
        }
    }
    
    
    private function set_selectDataGrid(value : Int) : Int{
        _dataGrid = _dataGrids[value];
        return value;
    }
    
    
    private function get_dataGrids() : Array<UISimpleDataGrid>{
        return _dataGrids;
    }
    
    
    private function doAlignGridWidths() : Void{
        var newWidth : Float = 0;  //_slider.getBounds(_slider).right + EXTRA;  
        var numberOfGrids : Int = 0;
        for (dataGrid0 in _dataGrids){
            if (dataGrid0.includeInLayout) {
                numberOfGrids++;
                dataGrid0.graphics.clear();
                if (dataGrid0.getBounds(dataGrid0).right > newWidth) {
                    newWidth = dataGrid0.getBounds(dataGrid0).right;
                }
            }
        }
        newWidth += EXTRA;
        for (dataGrid in _dataGrids){
            if (dataGrid.includeInLayout) {
                if (numberOfGrids > 1 && dataGrid.tableCells.length > 0) {
                    //		dataGrid.lastColumnWidth = (newWidth - dataGrid.lastColumnPosition);
                    dataGrid.fixwidth = newWidth;
                }
                dataGrid.drawBackground();
            }
        }
    }
    
    
    public function drawRowColours() : Void{
        var gridIndex : Int = 0;
        for (fixedColumnLayer in _fixedColumnLayers){
            var fixedColumns : Int = ((_gridColumns[gridIndex] != null)) ? _gridColumns[gridIndex] : _fixedColumns;
            var dataGrid : UISimpleDataGrid = _dataGrids[gridIndex++];
            var colour : Int = (dataGrid.hasHeader) ? dataGrid.headerColour : Colour.darken(dataGrid.colours[0], UIScrollDataGrid.DARKEN);
            var index : Int = (dataGrid.hasHeader) ? 0 : 1;
            fixedColumnLayer.graphics.clear();
            for (row in dataGrid.tableCells){
                if (row.length > 0) {
                    fixedColumnLayer.graphics.beginFill(colour);
                    fixedColumnLayer.graphics.drawRect(0, row[0].y, fixedColumnLayer.width, row[0].height);
                    fixedColumnLayer.graphics.endFill();
                    colour = Colour.darken(dataGrid.colours[index++ % dataGrid.colours.length], UIScrollDataGrid.DARKEN);
                }
            }
            if (fixedColumns > 0) {
                fixedColumnLayer.graphics.beginFill(dataGrid.attributes.colour);
                fixedColumnLayer.graphics.drawRect(fixedColumnLayer.width, fixedColumnLayer.getBounds(fixedColumnLayer).top, 2.0, fixedColumnLayer.height);
                fixedColumnLayer.graphics.endFill();
            }
        }
    }
    
    
    private function relayout(adjust : Bool = false) : Void{
        drawRowColours();
        if (_alignGridWidths) {
            doAlignGridWidths();
        }
        headerFixedColumnLine(_currentHeading);
        drawComponent();
        if (adjust) {
            adjustMaximumSlide();
        }
        refreshMasking();
        preExtractHeadersCells();
    }
    
    
    override private function autoScrollEnabled() : Void{
        if (_autoScrollEnabledX) {
            _scrollEnabledX = false;
            for (dataGrid in _dataGrids){
                _scrollEnabledX = _scrollEnabledX || (!dataGrid.fits && dataGrid.visible);
            }
        }
    }
    
/**
 *  Rearrange the layout to new screen dimensions
 */
    override public function layout(attributes : Attributes) : Void{
        _attributes = attributes;
        if (!_fastLayout) {  //fastLayout is yet implemented in this release  
            cast((_slider), IContainerUI).layout(sliderAttributes(attributes));
            relayout(true);
        }
        _status.x = attributes.width - _status.width;
        autoScrollEnabled();
    }
    
    
    private function set_fixheight(value : Float) : Float{
        _attributes.height = value;
        super.adjustMaximumSlide();
        return value;
    }
    
    
    private function set_alignGridWidths(value : Bool) : Bool{
        _alignGridWidths = value;
        return value;
    }
    
    
    private function realignColumnLayers() : Void{
        var index : Int = 0;
        for (dataGrid in _dataGrids){
            if (dataGrid.includeInLayout) {
                var dataGridGlobalPoint : Point = dataGrid.localToGlobal(new Point(0, 0));
                if (dataGrid.titleCell != null) {
                    _titleSlider.addChild(dataGrid.titleCell);
                    dataGrid.titleCell.y = _slider.globalToLocal(dataGridGlobalPoint).y;
                }
                if (index < _fixedColumnLayers.length) {
                    _fixedColumnLayers[index++].y = _slider.globalToLocal(dataGridGlobalPoint).y;
                }
            }
        }
    }
    
    
    override private function adjustVerticalSlide() : Void{
        var sliderHeight : Float = 0;
        
        if (_scrollerHeight > 0) {
            sliderHeight = _scrollerHeight * _scale;
        }
        else {
            for (dataGrid in _dataGrids){
                if (dataGrid.includeInLayout && dataGrid.getBounds(_slider).bottom > sliderHeight) {
                    sliderHeight = dataGrid.getBounds(_slider).bottom;
                }
            }
        }
        
        _maximumSlide = sliderHeight - _height + UIScrollVertical.PADDING * (_border == ("false") ? 0 : 1);
        if (_maximumSlide < 0) {
            _maximumSlide = 0;
        }
        if (_autoScrollEnabled) {
            _noScroll = _maximumSlide == 0;
        }
        if (sliderY < -_maximumSlide) {
            sliderY = -_maximumSlide;
        }
    }
    
    
    override private function adjustMaximumSlide() : Void{
        sliderX = 0;
        sliderY = 0;
        var index : Int = 0;
        var width : Float = 0;
        for (dataGrid in _dataGrids){
            if (dataGrid.includeInLayout) {
                if (dataGrid.getBounds(dataGrid).right > width) {
                    width = dataGrid.getBounds(dataGrid).right;
                }
            }
            else {
                dataGrid.y = 0;
                if (index < _fixedColumnLayers.length) {
                    _fixedColumnLayers[index].y = 0;
                }
                if (dataGrid.titleCell != null) {
                    dataGrid.titleCell.y = 0;
                }
            }
            index++;
        }
        adjustVerticalSlide();
        adjustHorizontalSlide(width);
        hideScrollBar();
    }
    
    
    override public function doLayout() : Void{
        _delta = 0;
        _deltaX = 0;
        var y : Float = sliderY;
        sliceAllTables();
        cast((_slider), IContainerUI).layout(sliderAttributes(attributes));
        relayout(true);
        //	_status.x = attributes.width - _status.width;
        realignColumnLayers();
        adjustMaximumSlide();
        sliderY = y;
        autoScrollEnabled();
    }
    
    /**
 * Find a particular row,column (group) inside the grid
 */
    override public function findViewById(id : String, row : Int = -1, group : Int = -1) : DisplayObject{
        if (id == "") {
            return _status;
        }
        else {
            for (dataGrid in _dataGrids){
                if (dataGrid.name == id) {
                    return ((row < 0 && group < 0)) ? dataGrid : dataGrid.findViewById(id, row, group);
                }
            }
            return null;
        }
    }
    
    
    override private function set_textSize(value : Float) : Float{
        
        for (dataGrid in _dataGrids){
            cast(dataGrid, UIFastDataGrid).textSize = value;
        }
        cast((_slider), IContainerUI).layout(sliderAttributes(attributes));
        for (layer in _fixedColumnLayers){
            _fixedColumnSlider.removeChild(layer);
        }
        if (_alignGridWidths) {
            doAlignGridWidths();
        }
        adjustMaximumSlide();
        _fixedColumnLayers = new Array<Sprite>();
        sliceAllTables();
        relayout(false);
        return value;
    }
    
    
    override public function clear() : Void{
        for (dataGrid in _dataGrids){
            dataGrid.clear();
        }
    }
    
    
    override public function destructor() : Void{
        super.destructor();
    }
}

