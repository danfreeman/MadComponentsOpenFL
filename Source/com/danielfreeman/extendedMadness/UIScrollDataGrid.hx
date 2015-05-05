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

import com.danielfreeman.extendedmadness.UIScrollXY;
import com.danielfreeman.extendedmadness.UISimpleDataGrid;
import com.danielfreeman.extendedmadness.UISpecialDataGrid;


import openfl.display.Sprite;
import openfl.display.DisplayObject;
import com.danielfreeman.madcomponents.*;
import openfl.events.MouseEvent;
import openfl.events.Event;
import openfl.events.TimerEvent;
import openfl.utils.Timer;


/**
 * The datagrid was swiped left to right (Beyond the scrolling range).
 */
@:meta(Event(name="swipeRight",type="flash.events.Event"))


/**
 * ScrollDatagrid component
 * <pre>
 * &lt;scrollDataGrid
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, ..."
 *    visible = "true|false"
 *    widths = "p,q,r..."
 *    scrollH = "true|false|auto"
 *    scrollV = "true|false|auto"
 *    editable = "true|false"
 *    widths = "i(%),j(%),k(%)…"
 *    multiline = "true|false"
 *    titleBarColour = "#rrggbb"
 *    recycle = "true|false|shared"
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    border = "true|false"
 *    autoLayout = "true|false"
 *    tapToScale = "NUMBER"
 *    auto = "true|false"
 *    fixedColumns = "n"
 *    fixedColumnsColours = "#rrggbb, #rrggbb, ..."
 *    slideFixedColumns = "true|false"
 *    lockSides = "true|false"
 *    lockTopBottom = "true|false"
 *    datagrid = "simple|fast|special"
 * /&gt;
 * </pre>
 */
class UIScrollDataGrid extends UIScrollXY
{
    public var gridData(never, set) : Array<Array<Dynamic>>;
	public var headerAndData(never, set) : Array<Array<Dynamic>>;
    public var fixedColumns(never, set) : Int;
    public var tableCells(get, never) : Array<Array<UICell>>;
    public var hasHeader(get, never) : Bool;
    public var textSize(never, set) : Float;
    public var slideFixedColumns(never, set) : Bool;
    public var title(never, set) : String;
    public var colours(get, set) : Array<Int>;
    public var dataGrid(get, never) : UISimpleDataGrid;

    
    
    public static inline var SWIPE_RIGHT : String = "swipeRight";
    private static inline var STEPS : Int = 4;
    private static inline var SWIPE_THRESHOLD : Float = 32.0;
    private static var DARKEN : Int = -16;
    
    private var _headerSlider : Sprite;
    private var _fixedColumnSlider : Sprite = null;
    private var _headerFixedColumnSlider : Sprite = null;
    private var _dataGridXML : MadXML;
    private var _fixedColumns : Int = 0;
    private var _fixedColumnColours : Array<Int> = null;
    private var _dataGrid : UISimpleDataGrid;
    private var _fixedColumnPosition : Float = 0;
    private var _columnSlideTimer : AnimationTimer;// = new Timer(50, STEPS);
    private var _slideFixedColumns : Bool = false;
    private var _fixedColumnDelta : Float = 0;
    private var _trigger0 : Bool = false;
    private var _trigger1 : Bool = true;
    private var _fastLayout : Bool = false;
    private var _autoScrollEnabledX : Bool = false;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        xml.setAttribute("border", "false");
        _dataGridXML = xml;
        _autoScrollEnabledX = !xml.has.scrollH || xml.att.scrollH != "scroll" || xml.att.scrollH != "no scroll";
        if (xml.has.fixedColumnColours) {
            _fixedColumnColours = UI.toColourVector(xml.att.fixedColumnColours);
        }  //		_fastLayout = xml.@fastLayout == "true";  
        
        super(screen, noChildren(xml), attributes);
		_columnSlideTimer = new AnimationTimer(this, STEPS);
        super.layout(attributes);
        if (xml.has.slideFixedColumns && xml.att.slideFixedColumns == "true") {
            _slideFixedColumns = true;
            _columnSlideTimer.addEventListener(TimerEvent.TIMER, columnSlideMovement);
        }
        autoScrollEnabled();
    }
    
/**
 *  Slide the fixed columns into position
 */
    private function slideFixedColumnsIn() : Void{
        if (_fixedColumnSlider != null && _fixedColumnSlider.x < 0) {
            var startPosition : Float = ((_fixedColumnSlider.x < -_fixedColumnSlider.width)) ? -_fixedColumnSlider.width : _fixedColumnSlider.x;
            _fixedColumnSlider.x = startPosition;
            _headerFixedColumnSlider.x = startPosition;
            _fixedColumnPosition = startPosition;
            _fixedColumnDelta = (0 - startPosition) / STEPS;
            _columnSlideTimer.stop();
            _columnSlideTimer.reset();
            _columnSlideTimer.start();
        }
    }
    
/**
 *  Slide the fixed columns left off the screen
 */
    private function slideFixedColumnsOut() : Void{
        _columnSlideTimer.stop();
        if (_fixedColumnSlider != null) {
            _fixedColumnPosition = 0;
            _fixedColumnDelta = -_fixedColumnSlider.width / STEPS;
        }
    }
    
/**
 *  Fixed column movement slide handler
 */
    private function columnSlideMovement(event : Event) : Void{
        if (_fixedColumnDelta > 0) {
            _fixedColumnPosition += _fixedColumnDelta;
            _fixedColumnSlider.x = _fixedColumnPosition;
            _headerFixedColumnSlider.x = _fixedColumnPosition;
        }
    }
    
    
    private function noChildren(xml : MadXML) : MadXML{
        var result : String = xml.toXMLString();
        var position : Int = result.indexOf(">");
        if (result.substr(position - 1, 1) == "/") {
            result = result.substring(0, position + 1);
        }
        else {
            result = result.substring(0, position) + "/>";
        }
        return MadXML.parse(result);
    }
    
/**
 *  Render the row background colours for fixed columns
 */
    private function colourFixedColumns(dataGrid : UISimpleDataGrid, flag : Bool = false) : Void{
        if (_fixedColumns > 0 && dataGrid.tableCells.length > 0) {
            
            //	var rowIndex:int = 0;
            //	var start:int = dataGrid.hasHeader  ? 1 : 0;
            if (flag) {
                for (i in 0...dataGrid.tableCells.length){
                    var tableRow : Array<UICell> = dataGrid.tableCells[i];
                    for (j in 0..._fixedColumns){
                        var cell : UICell = tableRow[j];
                        //	if (i >= start) {
                        //		cell.defaultColour = _fixedColumnColours ? _fixedColumnColours[(rowIndex - start) % _fixedColumnColours.length]
                        //		: Colour.darken(dataGrid.colours[(rowIndex - start) % dataGrid.colours.length], -16);
                        //	}
                        //	if (flag) {
                        _fixedColumnSlider.addChild(cell);
                    }  //	rowIndex++;  
                }
            }
        }
    }
    
/**
 *  Put headers, fixed columns, and grid cells all within their appropriate layers
 */
    private function sliceTable(dataGrid : UISimpleDataGrid) : Void{
        if (_headerSlider == null) {
            addChild(_headerSlider = new Sprite());
            _headerSlider.name = "_headerSlider";
        }
        if (xml.has.fixedColumns && _fixedColumnSlider == null) {
            _fixedColumns = Std.parseInt(xml.att.fixedColumns);
            addChild(_fixedColumnSlider = new Sprite());
            _fixedColumnSlider.name = "_fixedColumnSlider";
        }
        if (_headerFixedColumnSlider == null) {
            addChild(_headerFixedColumnSlider = new Sprite());
            _headerFixedColumnSlider.name = "_headerFixedColumnSlider";
        }
        
        colourFixedColumns(dataGrid, true);
        if (dataGrid.hasHeader) {
            var headerRow : Array<UICell> = dataGrid.tableCells[0];
            var cell : UICell;
            for (k in _fixedColumns...headerRow.length){
                _headerSlider.addChild(cell = headerRow[k]);
            }
            if (_fixedColumns > 0) {
                for (l in 0..._fixedColumns){
                    _headerFixedColumnSlider.addChild(cell = headerRow[l]);
                }
            }
        }
        if (dataGrid.titleCell != null) {
            _headerFixedColumnSlider.addChild(dataGrid.titleCell);
        }
        _slider.cacheAsBitmap = true;
    }
    
/**
 *  Create sliding parts of container
 */
    override private function createSlider(xml : MadXML, attributes : Attributes) : Void{
        var gridAttributes : Attributes = attributes.copy(_dataGridXML);
        if (xml.has.datagrid && xml.att.datagrid == "simple") {
            _slider = _dataGrid = new UISimpleDataGrid(this, _dataGridXML, gridAttributes);
        }
        else if (xml.has.datagrid && xml.att.datagrid == "special") {
            _slider = _dataGrid = new UISpecialDataGrid(this, _dataGridXML, gridAttributes);
        }
        else {
            _slider = _dataGrid = new UIFastDataGrid(this, _dataGridXML, gridAttributes);
        }
        _slider.name = "-";
        sliceTable(_dataGrid);
        adjustMaximumSlide();
    }
    
    
    override private function set_sliderX(value : Float) : Float{
        if (Math.abs(value - _slider.x) < UIScrollVertical.MAXIMUM_DY) {
            _slider.x = value;
            if (_headerSlider != null) {
                _headerSlider.x = value;
            }
            if (_fixedColumnDelta < 0) {
                _fixedColumnPosition += _fixedColumnDelta;
            }
            var threshold : Float = (_fixedColumnDelta < 0) ? -_fixedColumnSlider.width : 0;
            if (_fixedColumnSlider != null) {
                _fixedColumnSlider.x = (value > threshold) ? value : _fixedColumnPosition;
            }
            if (_headerFixedColumnSlider != null) {
                _headerFixedColumnSlider.x = (value > threshold) ? value : _fixedColumnPosition;
            }
        }
        return value;
    }
    
/**
 *  Respond to scroll gestures
 */
    override private function mouseMove(event : TimerEvent) : Void{
        if (_trigger0 && _slider.x == 0 && mouseX - _lastMouse.x > SWIPE_THRESHOLD) {
            if (_trigger1) {
                dispatchEvent(new Event(SWIPE_RIGHT));
                _trigger1 = false;
                _trigger0 = false;
                _touchTimer.stop();
                _dragTimer.stop();
            }
        }
        else {
            _trigger1 = true;
        }
        super.mouseMove(event);
    }
    
    
    override private function pressButton(show : Bool = true) : DisplayObject{
        return null;
    }
    
    
    override private function doSearchHit() : Void{
        
    }
    
    
    override private function mouseDrag(event : TimerEvent) : Void{
        
    }
    
    
    override private function mouseDown(event : MouseEvent) : Void{
        _trigger0 = _slider.x == 0;
        super.mouseDown(event);
    }
    
    
    override private function getSliderWidth() : Float{
        return (_scrollerWidth > 0) ? _scrollerWidth * _scale : _slider.width;
    }
    
    
    override private function getSliderHeight() : Float{
        return (_scrollerHeight > 0) ? _scrollerHeight * _scale : _slider.height;
    }
    
    
    override private function set_sliderY(value : Float) : Float{
		trace("sliderY=", value, Math.abs(sliderY - value));
		value = toPixelBoundaryDouble(this, 0, value).y;
		super.sliderY = value;
        if (_fixedColumnSlider != null) {
            _fixedColumnSlider.y = sliderY;
        }
        _headerFixedColumnSlider.y = (value > 0) ? value : 0;
        if (_headerSlider != null) {
            _headerSlider.y = (value > 0) ? value : 0;
        }
        return value;
    }
    
/**
 * Set datagrid data
 */
    public function set_gridData(value : Array<Array<Dynamic>>) : Array<Array<Dynamic>>{
        _dataGrid.data = value;
        sliceTable(_dataGrid);
        adjustMaximumSlide();
        return value;
    }
    
/**
 * Set column headings and datagrid data
 */
    private function set_headerAndData(value : Array<Array<Dynamic>>) : Array<Array<Dynamic>>{
        _dataGrid.headerAndData = value;
        sliceTable(_dataGrid);
        adjustMaximumSlide();
        return value;
    }
    
    ///**
    // * Refresh datagrid with new data
    // */
    //		public function set dataProvider(value:Array):void {
    //			_dataGrid.dataProvider = value;
    //		}
    
    
    override public function clear() : Void{
        _dataGrid.clear();
    }
    
/**
 * Set number of fixed columns
 */
    private function set_fixedColumns(value : Int) : Int{
        if (value != _fixedColumns) {
            clear();
        }
        _fixedColumns = value;
        return value;
    }
    
    ///**
    // * Refresh datagrid
    // */
    //		public function invalidate(readGrid:Boolean = false):void {
    //			_dataGrid.invalidate(readGrid);
    //		}
    
/**
 * Render datagrid with padding for every column
 */
    public function compact(padding : Bool = false) : Void{
        _dataGrid.compact(padding);
    }
    
    
    private function get_tableCells() : Array<Array<UICell>>{
        return _dataGrid.tableCells;
    }
    
    
    private function get_hasHeader() : Bool{
        return _dataGrid.hasHeader;
    }
    
    
    override private function get_xml() : MadXML{
        return _dataGridXML;
    }
    
    
    private function set_textSize(value : Float) : Float{
        cast((_dataGrid), UIFastDataGrid).textSize = value;
        adjustMaximumSlide();
        sliceTable(_dataGrid);
        return value;
    }
    
    
    private function fixedHeaderLine(dataGrid : UISimpleDataGrid) : Void{
        var colour : Int = (dataGrid.hasHeader) ? dataGrid.headerColour : Colour.darken(dataGrid.colours[0], DARKEN);
        var index : Int = (dataGrid.hasHeader) ? 0 : 1;
        _headerSlider.graphics.clear();
        _headerSlider.graphics.beginFill(colour);
        _headerSlider.graphics.drawRect(_headerSlider.getBounds(this).left, _headerSlider.getBounds(this).top, _headerSlider.width, _headerSlider.height);
        _headerSlider.graphics.endFill();
        if (_headerFixedColumnSlider != null && _fixedColumnSlider != null) {
            _headerFixedColumnSlider.graphics.clear();
            _headerFixedColumnSlider.graphics.beginFill(colour);
            _headerFixedColumnSlider.graphics.drawRect(0, _headerFixedColumnSlider.getBounds(this).top, _fixedColumnSlider.width, _headerFixedColumnSlider.height);
            _headerFixedColumnSlider.graphics.endFill();
            _headerFixedColumnSlider.graphics.beginFill(_dataGrid.attributes.colour);
            _headerFixedColumnSlider.graphics.drawRect(_fixedColumnSlider.width, _headerFixedColumnSlider.getBounds(this).top, 2.0, _headerFixedColumnSlider.height);
            _headerFixedColumnSlider.graphics.endFill();
        }
        if (_fixedColumnSlider != null) {
            _fixedColumnSlider.graphics.clear();
            for (row in dataGrid.tableCells){
                _fixedColumnSlider.graphics.beginFill(colour);
                _fixedColumnSlider.graphics.drawRect(0, row[0].y, _fixedColumnSlider.width, row[0].height);
                _fixedColumnSlider.graphics.endFill();
                colour = Colour.darken(dataGrid.colours[index++ % dataGrid.colours.length], DARKEN);
            }
            _fixedColumnSlider.graphics.beginFill(_dataGrid.attributes.colour);
            _fixedColumnSlider.graphics.drawRect(_fixedColumnSlider.width, _fixedColumnSlider.getBounds(this).top, 2.0, _fixedColumnSlider.height);
            _fixedColumnSlider.graphics.endFill();
        }
    }
    
    
    private function autoScrollEnabled() : Void{
        if (_autoScrollEnabledX) {
            _scrollEnabledX = !_dataGrid.fits;
        }
    }
    
/**
 *  Rearrange the layout to new screen dimensions
 */
    override public function layout(attributes : Attributes) : Void{
        _attributes = attributes;
        if (_fastLayout) {  //fastLayout is not yet implemented in this release  
            adjustMaximumSlide();
            refreshMasking();
        }
        else {
            _dataGrid.layout(attributes);
            super.layout(attributes);
            fixedHeaderLine(dataGrid);
        }
        autoScrollEnabled();
    }
    
/**
 * Find a particular row,column (group) inside the grid
 */
    override public function findViewById(id : String, row : Int = -1, group : Int = -1) : DisplayObject{
        return _dataGrid.findViewById(id, row, group);
    }
    
    
    override public function showScrollBar() : Void{
        if (!_scrollBarVisible && _slideFixedColumns && _fixedColumnSlider != null && Math.abs(_delta) < Math.abs(_deltaX)) {
            slideFixedColumnsOut();
        }
        super.showScrollBar();
    }
    
    
    override public function hideScrollBar() : Void{
        if (_scrollBarVisible && _slideFixedColumns && _fixedColumnSlider != null) {
            slideFixedColumnsIn();
        }
        super.hideScrollBar();
    }
    
    
    override private function adjustMaximumSlide() : Void{
        sliderX = 0;
        sliderY = 0;
        super.adjustMaximumSlide();
    }
    
/**
 * If set to true, a right or left scroll gesture will temporarily slide the fixed
 * columns out of the way - so you can see more data columns.
 */
    private function set_slideFixedColumns(value : Bool) : Bool{
        _slideFixedColumns = value;
        return value;
    }
    
/**
 * Set datagrid title
 */
    private function set_title(value : String) : String{
        _dataGrid.title = value;
        return value;
    }
    
/**
 * Set datagrid row colours
 */
    private function set_colours(value : Array<Int>) : Array<Int>{
        _dataGrid.colours = value;
        colourFixedColumns(_dataGrid);
        return value;
    }
    
    
    private function get_colours() : Array<Int>{
        return _dataGrid.colours;
    }
    
/**
 * Direct access to the UIFastDataGrid class
 */
    private function get_dataGrid() : UISimpleDataGrid{
        return _dataGrid;
    }
    
    
    override private function set_scrollPositionY(value : Float) : Float{
        sliderY = -value;
        return value;
    }
    
    
    override private function set_scrollPositionX(value : Float) : Float{
        sliderX = -value;
        return value;
    }
    
    
    override public function destructor() : Void{
        super.destructor();
        _dataGrid.destructor();
    }
}

