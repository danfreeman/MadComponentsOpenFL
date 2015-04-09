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
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.</p>
 *
 * <p>Licensed under The MIT License</p>
 * <p>Redistributions of files must retain the above copyright notice.</p>
 */

package com.danielfreeman.madcomponents;

import com.danielfreeman.madcomponents.UIRefresh;
import com.danielfreeman.madcomponents.UIScrollVertical;
import com.danielfreeman.madcomponents.UISearch;
import openfl.utils.Timer;
import openfl.display.DisplayObject;
import openfl.display.InteractiveObject;
import openfl.display.Shape;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.events.TextEvent;
import openfl.events.TimerEvent;
import openfl.geom.Rectangle;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;

/**
 * A list row was initiated - although we don't yet know whether this is a click or a scroll.
 */  @:meta(Event(name="clickStart",type="openfl.events.Event"))
  /**
 * A list row was clicked.  This is a bubbling event.
 */  @:meta(Event(name="clicked",type="openfl.events.Event"))
  /**
 * A list row was clicked.
 */  @:meta(Event(name="listClickedEnd",type="openfl.events.Event"))
  /**
 * A list click was cancelled.  This was a scroll, not a click.  
 */  @:meta(Event(name="listClickCancel",type="openfl.events.Event"))
  /**
 * A list row was long-clicked.
 */  @:meta(Event(name="longClick",type="openfl.events.Event"))
  /**
 * The Pull-Down-To-Refresh header was activated
 */  @:meta(Event(name="pullRefresh",type="openfl.events.Event"))
  /**
 *  MadComponents List
 * <pre>
 * &lt;list
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, ..."
 *    visible = "true|false"
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    border = "true|false"
 *    autoLayout = "true|false"
 *    lines = "true|false"
 *    pullDownRefresh = "true|false"
 *    pullDownColour = "#rrggbb"
 *    sortBy = "IDENTIFIER"
 *    sortMode = "MODE"
 *    index = "INTEGER"
 *    highlightPressed = "true|false"
 *    showPressed = "true|false"
 *    mask = "true|false"
 *    alignV = "scroll|no scroll"
 *    labelField = "IDENTIFIER"
 *    arrows = "true|false"
 *    lineGap = "NUMBER"
 *	  style7 = "true|false"
 * /&gt;
 * </pre>
 */
	 
class UIList extends UIScrollVertical
{
    public var rendererXML(get, set) : MadXML;
  //  public var renderer(never, set) : MadXML;
    public var arrows(never, set) : Bool;
    public var header(get, set) : Int;
    public var labelField(never, set) : String;
    public var colours(never, set) : Array<Int>;
    public var index(get, set) : Int;
    public var highlightPressed(never, set) : Bool;
    public var showPressed(get, set) : Bool;
    public var xmlData(never, set) : MadXML;
    public var filteredData(get, set) : Array<Dynamic>;
    private var data0(never, set) : Array<Dynamic>;
   // public var data(get, never) : Dynamic;
    public var row(get, never) : Dynamic;
    public var clickRow(never, set) : Bool;
    public var rowContainer(get, never) : IContainerUI;
    public var length(get, never) : Int;
    public var searchVisible(never, set) : Bool;
	
    public static inline var CLICK_START : String = "clickStart";
	public static inline var CLICKED : String = "clicked";
	public static inline var CLICKED_END : String = "listClickedEnd";
	public static inline var CLICK_CANCEL : String = "listClickCancel";
	public static inline var LONG_CLICK : String = "longClick";
	public static inline var REFRESH : String = "pullRefresh";
	private static inline var ARROW : Float = 6;
	private static inline var TOP : Float = 40;
	private static inline var PULL_THRESHOLD : Float = 70;
	private var FORMAT : TextFormat = new TextFormat("Tahoma", 18);
	public static var LONG_CLICK_THRESHOLD : Int = 20;
	public static var HIGHLIGHT : Int = 0x9999FF;
	public static var PULL_DOWN_TEXT : String = "pull down to refresh";
	public static var REFRESH_TEXT : String = "refreshing...";
	public static var TOUCH_THRESHOLD : Int = 1;
	private var _renderer : MadXML;
	private var _simple : Bool;
	private var _count : Int = 0;
	private var _cellHeight : Int = -1;
	private var _pressedCell : Int = -1;
	private var _highlight : Shape;
	private var _clickRow : Bool = true;
	private var _cellTop : Int = -99999;
	private var _cellRendererLeft : Float = 0;
	private var _colours : Array<Int>;
	private var _suffix : String = "";
	private var _font : String = "";
	private var _model : Model = null;
	private var _search : UISearch = null;
	private var _top : Int = 0;
	private var _rendererAttributes : Attributes;
	private var _field : String;
	private var _begins : Bool;
 	private var _data : Array<Dynamic>;
	private var _filteredData : Array<Dynamic> = [];
	private var _sortBy : String = "";
	private var _sortMode : String = "";
	private var _row : DisplayObject;
	private var _lines : Bool = false;
	private var _cell : Dynamic;
	private var _refresh : UIRefresh = null;
	private var _refreshState : Bool = false;
	private var _showPressed : Bool = false;
	private var _textAlign : String;
	private var _highlightPressed : Bool = true;
	private var _rowClick : Bool = false;
	private var _highlightColour : Int = HIGHLIGHT;
	private var _labelField : String = "label";
	private var _highlightIsOn : Bool = false;
	private var _saveIndex : Int = -1;
	private var _header : Int = 0;
	private var _arrows : Bool;
	private var _lineGap : Float;
	private var _lastPosition : Float;
	private var _highlightTimer : Timer = new Timer(UIScrollVertical.CLICK_DURATION, 1);
	
	
	public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
		_colours = attributes.backgroundColours;
		_arrows = xml.has.arrows && xml.att.arrows == "true";
		_xml = xml;
		_lineGap = attributes.paddingH;
		if (xml.has.header) {
			_header = Std.parseInt(xml.att.header);
        }
		_highlightPressed = !xml.has.highlightPressed || xml.att.highlightPressed != "false";
		if (xml.has.labelField) {
			_labelField = xml.att.labelField;
        }
		if (xml.has.highlightColour) {
			_highlightColour = UI.toColourValue(xml.att.highlightColour);
        }
		if (xml.has.lineGap) {
			_lineGap = Std.parseFloat(xml.att.lineGap);
        }
		super(screen, xml, attributes);
		_renderer = extractRenderer(xml);
		_simple = _renderer == null;
		_autoLayout = _autoLayout && !_simple;
		if (!_simple && _rendererAttributes == null) {
			initialiseRenderAttributes(xml, attributes);
        }
		_lines = xml.has.lines && xml.att.lines == "true";
		if (xml.hasNode.font) {
			_font = xml.node.font.toXMLString();
        }
		if (xml.hasNode.search) {
			addASearch(xml);
        }
		if (xml.has.pullDownRefresh && xml.att.pullDownRefresh == "true") {
			_refresh = new UIRefresh(_slider, 0, -TOP / 2, xml.has.pullDownColour ? UI.toColourValue(xml.att.pullDownColour) : 0x333333, PULL_DOWN_TEXT);
			resizeRefresh();
        }
		if (xml.has.sortBy) {
			_sortBy = xml.att.sortBy;
        }
 		if (xml.has.sortMode) {
			_sortMode = xml.att.sortMode;
        }
		if (xml.has.showPressed) {
			_showPressed = xml.att.showPressed == "true";
        }
		if (xml.hasNode.data) {
			xmlData = xml.node.data;
        }
		if (xml.hasNode.model) {
			_model = new Model(this, xml.node.model);
        }
		buttonMode = useHandCursor = true;
		if (xml.has.index) {
			index = Std.parseInt(xml.att.index);
        }
		_highlightTimer.addEventListener(TimerEvent.TIMER, clearHighlight);
    }
	
	
	private function addASearch(xml : MadXML) : Void{
		var searchAttributes : Attributes = attributes.copy(xml.node.search);
		searchAttributes.x = searchAttributes.y = 0;
		_search = new UISearch(_slider, xml.node.search, searchAttributes);
		if (xml.node.search.has.id) {
			_search.name = xml.node.search.att.id;
        }
		_top = Math.ceil(_search.height);
		if (xml.node.search.has.field) {
			_field = xml.node.search.att.field;
			_begins = xml.node.search.has.begins && xml.node.search.att.begins == "true";
			_search.addEventListener(TextEvent.TEXT_INPUT, searchHandler);
        }
    }
	
/**
 *  Dynamically set the list renderer
 */  
	private function set_rendererXML(value : MadXML) : MadXML{
		_renderer = value;
		_simple = value == null;
		_autoLayout = !_simple && _xml.has.autoLayout && _xml.att.autoLayout == "true";
        return value;
    }


	private function set_arrows(value : Bool) : Bool{
		_arrows = value;
        return value;
    }


	private function set_header(value : Int) : Int{
        _header = value;
        return value;
    }


	private function get_header() : Int{
        return _header;
    }


	private function set_labelField(value : String) : String{
        _labelField = (value != null) ? value : "label";
        return value;
    }


	private function set_colours(value : Array<Int>) : Array<Int>{
        _colours = value;
        return value;
    }


	private function initialiseRenderAttributes(xml : MadXML, attributes : Attributes) : Void{
		_rendererAttributes = attributes.copy();
		_rendererAttributes.parse(_renderer);
		_rendererAttributes.x = _rendererAttributes.y = 0;
        _rendererAttributes.width -= (2 * _attributes.paddingH + (((_attributes.style7 && _arrows)) ? UI.PADDING : 0));
		_rendererAttributes.height -= 2 * _attributes.paddingV;
    }


	private function indexToScrollPosition(value : Int) : Float{
		return _cellHeight * value - _offset;
    }


	public function setIndex(value : Int, animate : Bool = false, move : Bool = false, highlight : Bool = false, offset : Float = 0) : Void{
        _pressedCell = value;
        if (value < 0) {
            return;
        }
        if (move) {
            var position : Float = indexToScrollPosition(value) - offset;
        //	scrollPositionY = (position < 0) ? 0 : position;  scrollPositionY = (animate) ? (((position < _attributes.height)) ? 0 : position - 128) : (((position < 0)) ? 0 : position);
        }
        else if (animate) {
        // && sliderY + _cellHeight * value < MAXIMUM_DY/2) {
            _endSlider = indexToScrollPosition(value);
            _moveTimer.start();
        }
        if (highlight) {
            illuminate(value, false);
        }
    }

/**
 *  Scroll to index
 */  
	private function set_index(value : Int) : Int{
        setIndex(value, false, false, _showPressed);
        return value;
    }


	private function get_rendererXML() : MadXML{
        return _renderer;
    }


	override private function doLayoutHandler(event : Event) : Void{
        doLayout();
        event.stopPropagation();
    }


/**
 *  Extract renderer XML from XML
 */


	private function extractRenderer(xml : MadXML) : MadXML{
        var children : MadXMLList = xml.children();
		if (children.length() == 0) {
            return null; //MadXML.parse("");
        }
        else if (!xml.hasNode.data && !xml.hasNode.font && !xml.hasNode.model && !xml.hasNode.search) {
            return children.get(0);
        }
        for (child in children){
            if (child.name != "data" && child.name != "font" && child.name != "model" && child.name != "search" && child.name != "detail") {
			return child;
            }
        }
		return null; //MadXML.parse("");
    }
		
/**
 *  If set to false, the no highlight appears
 */  
	private function set_highlightPressed(value : Bool) : Bool{
        _highlightPressed = value;
        return value;
    }

/**
 *  If set to true, the click highlight remains
 */
	private function set_showPressed(value : Bool) : Bool{
        _showPressed = value;
        return value;
    }

	private function get_showPressed() : Bool{
        return _showPressed;
    }

/**
 *  Clears the click highlight.
 */

	public function clearPressed() : Void{
        _highlight.graphics.clear();
        _highlightIsOn = false;
    }


	private function clearHighlight(event : Event) : Void{
        clearPressed();
        dispatchEvent(new Event(CLICKED_END, true));
    }


	private function dispatchClickedEnd() : Void{
		if (!_classic) {
            dispatchEvent(new Event(CLICKED, true));
			trace("index=", index);
            if (_touchTimer.currentCount < UIScrollVertical.TOUCH_DELAY) {
                illuminate(-1, false, true);
                    if (_showPressed) {
                        dispatchEvent(new Event(CLICKED_END, true));
                    }
                    else {
                        _highlightTimer.stop();
                        _highlightTimer.reset();
                        _highlightTimer.start();
                    }
					
                }
                else {
                    dispatchEvent(new Event(CLICKED_END, true));
                }
            }
            else {
                dispatchEvent(new Event(CLICKED_END, true));
            }
        }

/**
 *  Clears the click highlight. - for controlling list externally and firing CLICKED_END event.
 *  (Most developers will likely never have a need to call this).
 */

	public function endPressed(delay : Bool = false) : Void{
		if (delay) {
			_showPressed = false;
			_clickTimer.reset();
			_clickTimer.start();
        }
        else {
			clearPressed();
			dispatchClickedEnd();
        }
    }

/**
 *  Set XML data
 */ 

	private function set_xmlData(value : MadXML) : MadXML{
		var result : Array<Dynamic> = [];
		var children : MadXMLList = value.children();
		for (child in children) {
			if (!child.nodeKindIsText) {
				result.push(attributesToObject(child));
            }
        }
		data = result;
        return value;
    }
		
	
	private function attributesToObject(child : MadXML) : Dynamic {
        var attributes = child.x.attributes();
        if (!attributes.hasNext()) {
            return {label : child.name};
        }
        else {
			var result : Dynamic = {};
            for (key in attributes) {
					Reflect.setField(result, key, child.x.get(key));
//			trace(key, Reflect.field(result, key), result._lines);
            }
            return result;
        }
		return null;
    }
		
/**
 *  Draw background
 */
		override public function drawComponent() : Void{
			graphics.clear();
			if (_colours != null && _colours.length > 0) {
				graphics.beginFill(_colours[0]);
            }
            else {
                graphics.beginFill(0, 0);
            }
            graphics.drawRect(0, 0, _attributes.widthH, _attributes.heightV);
        }

/**
 *  Rearrange the layout to new screen dimensions
 */  
		override public function layout(attributes : Attributes) : Void{
			var i : Int;
			var cell : Dynamic;
            _width = attributes.width;
            _height = attributes.height;
            if (_search != null) {
                _search.layout(attributes);
            }
            _attributes = attributes;
            resizeRefresh();
            drawComponent();
            _slider.graphics.clear();
        //	initDraw();
            if (_simple) {
                for (i in 0..._slider.numChildren){
                    cell = _slider.getChildAt(i);
                    if (Std.is(cell, UILabel) && !(Std.is(cell, UISearch))) {
                        cast((cell), UILabel).fixwidth = _attributes.width - 2 * _attributes.paddingH;
                        cell.multiline = cell.wordWrap = false;
                    }
                }
            }
            else {
            //	initialiseRenderAttributes(xml, attributes);
                _rendererAttributes.width = attributes.width - (2 * attributes.paddingH + (((_attributes.style7 && _arrows)) ? UI.PADDING : 0));
                _rendererAttributes.height = attributes.height - 2 * attributes.paddingV;
                if (_filteredData != null && _autoLayout) {
                    autoLayout();
                }
                else {
                    for (i in 0..._slider.numChildren){
                        cell = _slider.getChildAt(i);
                        if (Std.is(cell, IComponentUI) && !(Std.is(cell, UISearch))) {
                            cast((cell), IComponentUI).layout(_rendererAttributes);
                        }
                    }
                }
            }
            refreshMasking();
            if (!_autoLayout || _simple) {
                redrawCells();
            }
            if (_highlightIsOn && _showPressed) {
                setIndex(_pressedCell, false, false, true);
            }
        calculateMaximumSlide();
    }
		
		
	private function autoLayout() : Void{
		var last : Int = Math.round(_top + _attributes.paddingV);
		var i : Int = 0;
		initDraw();
		for (record in _filteredData){
			var cell : Dynamic = _slider.getChildByName("label_" + Std.string(i));
			if (cell != null && Std.is(cell, IComponentUI)) {
				cast((cell), IComponentUI).layout(_rendererAttributes);
				cell.y = last;
				last += Math.ceil(cell.height + _attributes.paddingV);
				drawCell(last, i, record);
				last += Math.ceil(_attributes.paddingV);
                i++;
            }
        }
    }
		
/**
 *  Refresh layout
 */  
		
		override public function doLayout() : Void{
			layout(_attributes);
            adjustMaximumSlide();
    }

/**
 *  Redraw cell chrome
 */
		private function redrawCells() : Void{
            initDraw();
            if (!_autoLayout) {
                var l : Int = 0;
                for (record in _filteredData){
                    drawCell(Math.ceil(_cellHeight * (l + 1) + _top), l, record);
                    l++;
            }
        }
    }
		
/**
 *  Set up the scrolling part of the list
 */ 
		override private function createSlider(xml : MadXML, attributes : Attributes) : Void{addChild(_slider = new Sprite());
            _slider.addChild(_highlight = new Shape());
            _width = attributes.width;
            _height = attributes.height;
    }
    
    
    private function sortParameter(value : String) : Dynamic{
        if (value.indexOf(",") < 0) {
            return value;
        }
        else {
            return value.split(",");
        }
    }

/**
 *  Assign array of objects data
 */  
		override private function set_data(value : Dynamic) : Dynamic{
			_data = try cast(value, Array<Dynamic>) catch(e:Dynamic) null;
			_saveIndex = -1;
////			if (_sortBy != "" && _data != null) {
////				_data.sortOn(sortParameter(_sortBy), sortParameter(_sortMode));
////       		 }
			clearPressed();
			filteredData = try cast(value, Array<Dynamic>) catch(e:Dynamic) null;
        return value;
    }


		public function setData(value : Array<Dynamic>, index : Int = 0) : Bool{
            for (record in value) {
				 var cell : Dynamic = _slider.getChildByName("label_" + Std.string(index) + _suffix);
            if (Std.is(cell, UILabel)) {
                cast((cell), UILabel).xmlText = Std.is(record, String) ? record : Reflect.field(record, _labelField);
            }
            else if (Std.is(cell, IContainerUI)) {
                fillInValues(cell, record);
            }
            else {
                return true;
            }
            index++;
        }
        if (_autoLayout) {
            doLayout();
            calculateMaximumSlide();
        }
        return false;
    }
		
/**
 *  Set filtered data ( a sub-set of full data ).
 */  
		private function set_filteredData(value : Array<Dynamic>) : Array<Dynamic>{
            _filteredData = value;
            data0 = value;
        return value;
    }

/**
 *  Set list data
 */  
		private function set_data0(value : Array<Dynamic>) : Array<Dynamic>{
            if (_refresh != null) {
                _refresh.changeState(PULL_DOWN_TEXT, false);
            }
            clearCells();
            initDraw();
            if (_simple) {
                simpleRenderers(value, _cellTop + 2 * _attributes.paddingV);
            }
            else {
                customRenderers(value, _cellTop + _attributes.paddingV);
            }
            if (_autoLayout) {
                doLayout();
            }
            calculateMaximumSlide();
        return value;
    }

/**
 *  Calculate maximum slide
 */  
		private function calculateMaximumSlide() : Void{
            _scrollerHeight = _slider.getBounds(_slider).bottom;  //- (_refresh ? TOP : 0);
            _maximumSlide = _scrollerHeight - _height;
            if (_maximumSlide < 0) {
                _maximumSlide = 0;
            }
            if (!_simple && _count > 0 && (_cellHeight < 0 || _autoLayout)) {  
        //	_cellHeight = Math.ceil((_slider.height - _top - (_refresh ? TOP : 0)) / _count) - 1;  
            _cellHeight = Math.ceil((_slider.getBounds(this).bottom - _top) / _count) - 1;
            }
        }
		
        
        override private function adjustMaximumSlide() : Void{
        }

/**
 *  Data
 */  
		private function get_data() : Dynamic{
            return _data;
        }

/**
 *  Filtered data
 */  
		private function get_filteredData() : Array<Dynamic>{
			return _filteredData;
    }

		private function filterArray(data : Array<Dynamic>, searchFor : String, field : String, caseSensitive : Bool, begins : Bool) : Array<Dynamic>{
                var result : Array<Dynamic> = [];
                var index : Int = 0;
                for (record in data){
                    var item : String = Reflect.field(record, field);
                   	record._index = index++;
                    if (!caseSensitive) {
                        item = item.toLowerCase();
                }
                if (begins) {
                    if (item.substr(0, searchFor.length) == searchFor) {
                        result.push(record);
                    }
                }
                else {
                    if (item.indexOf(searchFor) >= 0) {
                        result.push(record);
                    }
                }
            }
        return result;
        }
		
/**
 *  Filter the data according to a search string
 */  
		public function filter(searchFor : String, field : String = "", caseSensitive : Bool = false, begins : Bool = false) : Void{
            if (searchFor == "") {
                filteredData = _data;
            }
            else {if (field == "") {
                field = _field;
            }
        filteredData = filterArray(_data, searchFor, field, caseSensitive, begins);
        }
    }

/**
 *  Create list with simple default label rows
 */  
		private function simpleRenderers(value : Array<Dynamic>, position : Float = -1) : Void{
            if (position < 0) {
                position = 2 * _attributes.paddingV;
            }
            _count = 0;
            _textAlign = _attributes.textAlign;
			for (record in value){
                var label : UILabel = labelCell(record, position);
				position += Math.ceil(label.height + 2 * _attributes.paddingV);
                drawCell(position, _count, record);
                position += 2 * _attributes.paddingV;
                _cellHeight = Math.ceil(4 * _attributes.paddingV + label.height);
                _count++;
            }
        }

/**
 *  Create a simple list label row
 */  
		private function labelCell(record : Dynamic, position : Float) : UILabel{
            var labelText : String = Std.is(record, String) ? record : Reflect.field(record, _labelField);
            var label : UILabel = newLabel();
			label.y = position;
            label.name = "label_" + Std.string(_count) + _suffix;
			var xml : MadXML = MadXML.parse("<t>" + labelText + "</t>");
            if (xml.hasChildren) {
            
            label.htmlText = xml.toString();
        }
        else {
            if (_font != "") {
                label.htmlText = _font.substr(0, _font.length - 2) + ">" + labelText + "</font>";
            }
            else {
                label.text = labelText;
            }
        }
        if (_textAlign != "") {
            var format : TextFormat = new TextFormat();
        //  format.align = cast(_textAlign, TextFormatAlign);
			format.align = _textAlign;
            label.setTextFormat(format);
        }
        label.fixwidth = _attributes.width - 2 * _attributes.paddingH;
        label.multiline = label.wordWrap = false;
		return label;
    }
		
/**
 *  Clear list
 */  
		private function initDraw() : Void{
            _slider.graphics.clear();
              //	resizeRefresh();
            _slider.graphics.beginFill(_colour);
            _slider.graphics.drawRect(0, _top, _width, 1);
            _lastPosition = _cellTop = _top;
    }

/**
 *  Resize list row chrome
 */  
		private function resizeRefresh() : Void{
            if (_refresh != null) {
                _slider.graphics.beginFill(_colours.length > (0) ? _colours[_colours.length - 1] : 0xF9F9F9);
                _slider.graphics.drawRect(0, -TOP, attributes.width, TOP);
                _refresh.x = (_attributes.widthH - _refresh.width) / 2;
        }
    }

/**
 *  Clear list
 */  
		private function clearCells() : Void{
            var i : Int = _slider.numChildren;
            while (--i >= ((_search != null) ? 2 : 1) + ((_refresh != null) ? 1 : 0)){
                var child : DisplayObject = cast((_slider.getChildAt(i)), DisplayObject);
                if (Std.is(child, IContainerUI)) {
                    cast((child), IContainerUI).destructor();
            }
            _slider.removeChildAt(i);
        }
    }


		private function hasLines(record : Dynamic) : Bool{
			return (Reflect.hasField(record, "_lines") ? record._lines == "true" : _lines);
    }

/**
 *  Draw row chrome
 */  
		private function drawCell(position : Float, count : Int, record : Dynamic) : Void{
            drawSimpleCell(position, count, (!Std.is(record, String) && Reflect.hasField(record, "_colour")) ? UI.toColourValue(record._colour) : -1);
            if (!Std.is(record, String) && hasLines(record)) {
                drawLines(position);
        }
    }


		private function drawArrow(x : Float, y : Float) : Void{
            _slider.graphics.beginFill(_colour);
            _slider.graphics.moveTo(x, y);
            _slider.graphics.lineTo(x - ARROW, y - ARROW);
            if (_attributes.style7) {
                _slider.graphics.lineTo(x - ARROW, y - ARROW + 3);
                _slider.graphics.lineTo(x - 3, y);
                _slider.graphics.lineTo(x - ARROW, y + ARROW - 3);
            }
            _slider.graphics.lineTo(x - ARROW, y + ARROW);
            _slider.graphics.lineTo(x, y);
            _slider.graphics.endFill();
    }


/**
 *  Draw row chrome
 */  
		private function drawSimpleCell(position : Float, count : Int, colour : Int = -1) : Void{
            if (_colours.length > 1 || colour >= 0) {
                _slider.graphics.beginFill(((colour >= 0)) ? colour : _colours[count % (_colours.length - 1) + 1]);
                _slider.graphics.drawRect(0, _lastPosition + ((_attributes.style7) ? 1 : 2), _width, position - _lastPosition - ((_attributes.style7) ? 0 : 1));
                _slider.graphics.endFill();
            }
            _slider.graphics.beginFill(_colour);
            var startLine : Float = (_attributes.style7) ? _lineGap : 0;
            _slider.graphics.drawRect(startLine, position, _width - startLine, 1);
            _slider.graphics.endFill();
            dealWithArrows(count, position);
            _lastPosition = toPixelBoundary(this, 0, position).y;
    }

		
		private function dealWithArrows(count : Int, position : Float) : Void{
            if (_arrows && ((_header > 0) ? count >= _header : count < _count + _header)) {
                drawArrow(_width - _attributes.paddingH, (_lastPosition + position) / 2);
            }
        }

/**
 *  Draw lines within row
 */  
		private function drawLines(position : Float) : Void{
            if (Std.is(_cell, UIForm)) {
                _slider.graphics.beginFill(_colour);
                var positions : Array<Float> = cast((_cell), UIForm).positions;
                for (i in 1...positions.length){
                    _slider.graphics.drawRect(_cell.x + positions[i] - _rendererAttributes.paddingH / 2, _cellTop, 1, position - _cellTop);
            }
            _slider.graphics.endFill();
        }
    }
		
/**
 *  Return DisplayObject of button pressed
 */  
		override private function pressButton(show : Bool = true) : DisplayObject{
            _scrollBarLayer.graphics.clear();
            clearPressed();
            if (!show && (!_simple || _slider.mouseY < _top)) {
                doSearchHit();
        }
        illuminate(-1, !show, show);
        return _pressButton;
    }


		public function doClickRow(dispatch : Bool = true) : Bool{
            _highlight.graphics.clear();
            _showPressed = true;
            illuminate(-1, dispatch);
            return dispatch && _pressedCell >= 0 && _pressedCell < _count;
    }


		private function pressedCellLimits(groupDetail : Dynamic = null) : Void{
            if (_pressedCell < _header || _pressedCell >= _count) {
                _pressedCell = _saveIndex;
        }
    }


		private function highlightForIndex(rowIndex : Int) : Bool{
            var rowData : Dynamic = _data[rowIndex];
            if (Reflect.hasField(rowData, "_highlight")) {
                return rowData._highlight == "true";
        }
        else {
            return _highlightPressed;
        }
    }


		private function illuminate(pressedCell : Int = -1, dispatch : Bool = true, show : Bool = true) : Void{
			var tweak : Float = 1.0;
			var sliderMouseY : Float = (_slider.visible) ? _slider.mouseY : mouseY - _sliderPosition;
			if (_pressButton == null && _clickRow) {
                if (_autoLayout && !_simple && sliderMouseY > _top) {
                    _pressedCell = (pressedCell >= 0) ? pressedCell : autoLayoutPressedCell(sliderMouseY);
                    pressedCellLimits();
                    if (_row != null && _pressedCell >= _header && _pressedCell < _count) {
                    //	if (_highlightPressed) {
                    if (show && highlightForIndex(_pressedCell)) {
                        _highlight.graphics.beginFill(_highlightColour);
                        _highlight.graphics.drawRect(0, _row.y - _attributes.paddingV + tweak, _width, _row.height + 2 * _attributes.paddingV - tweak);
                        //_attributes.x +
                        _highlight.graphics.endFill();
                    }
                    activate(dispatch);
                }
            }
            else {
                _pressedCell = (pressedCell >= 0) ? pressedCell : Math.floor((sliderMouseY - _top) / _cellHeight);
                pressedCellLimits();
                if (_pressedCell >= _header && _pressedCell < _count) {  
            //	if (_highlightPressed) {
                if (show && highlightForIndex(_pressedCell)) {
                    _highlight.graphics.beginFill(_highlightColour);
                    _highlight.graphics.drawRect(0, _top + _pressedCell * _cellHeight + tweak, _width, _cellHeight - tweak);  //_attributes.x +
                    _highlight.graphics.endFill();
                    }
                activate(dispatch);
                }
            }
        }
    }
		
/**
 *  If autoLayout="true", which cell was clicked?
 */  
		private function autoLayoutPressedCell(y : Float) : Int{
            for (l in 0..._count){
                _row = _slider.getChildByName("label_" + Std.string(l));
                if (_row != null && _row.y + _row.height + _attributes.paddingV > y) {
                    return l;
                }
            }
        return -1;
    }  
		
/**
 *  Row has been clicked
 */  
		private function activate(dispatch : Bool = true) : Void{
            if (_classic) {
                _touchTimer.stop();
                _dragTimer.stop();
                stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
                addEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
                _clickTimer.stop();
                _clickTimer.reset();
                _clickTimer.start();
            }  
        //	stopMovement();
        //new - interfered with picker.
            _rowClick = true;
            if (dispatch) {
            //	_rowClick = true;
            //	if (_touchTimer.currentCount >= LONG_CLICK_THRESHOLD) {trace("long click");    
            //		dispatchEvent(new Event(LONG_CLICK));    
            //	}    
            //	else {  
                    
               dispatchEvent(new Event((_classic) ? CLICKED : CLICK_START, true));
        }
    }
		
		
		override private function mouseDown(event : MouseEvent) : Void{
            _saveIndex = _pressedCell;
            _rowClick = false;
            super.mouseDown(event);
    }


		override private function mouseUp(event : MouseEvent) : Void{
            if (!_classic && _rowClick) {
                if (!_showPressed) {
                    clearPressed();
            }
            if (_touchTimer.currentCount < TOUCH_THRESHOLD || Math.abs(_delta) > UIScrollVertical.DELTA_THRESHOLD) {
                doCancel();
            }
            else {
                dispatchClickedEnd();
            }
            _rowClick = false;
        }
        super.mouseUp(event);
    }
    
    
    private function doCancel() : Void{
        _pressedCell = _saveIndex;
		dispatchEvent(new Event(CLICK_CANCEL, true));
        _highlight.graphics.clear();
        if (_showPressed && _pressedCell >= 0) {
            illuminate(_pressedCell, false);
        }
    }


		override public function touchCancel() : Void{
            super.touchCancel();
            clearPressed();
            if (!_classic && _rowClick) {
        //	_highlight.graphics.clear();
            doCancel();
            _rowClick = false;
        }
    }

/**
 *  Index of last row clicked
 */  
		private function get_index() : Int{
            return _pressedCell;
    }

/**
 *  Data object for last row clicked
 */  
		private function get_row() : Dynamic{
            return ((_pressedCell >= 0)) ? _filteredData[_pressedCell] : null;
    }

/**
 *  Click up handler
 */  
		override private function clickUp(event : TimerEvent) : Void{
            if (!_simple) {
                super.clickUp(event);
            }if (_clickRow) {
                if (!_showPressed) {
                    clearPressed();
                }
            dispatchClickedEnd();
            }
            _scrollBarLayer.graphics.clear();
        }

/**
 *  Create list with custom renderers
 */  
		private function customRenderers(value : Array<Dynamic>, position : Float = -1) : Void{
        //	var before:Number = _rendererAttributes.paddingH;
            if (position < 0) {
                position = _attributes.paddingV;
            }
            _count = 0;
            for (record in value){
                customCell(record, position);
				position += _cell.height + _attributes.paddingV;
			position = toPixelBoundary(this, 0, position).y;
                drawCell(position, _count, record);
                position += _attributes.paddingV;
			position = toPixelBoundary(this, 0, position).y;
                _count++;
            }
        }
		
/**
 *  Instanciate a new list row
 */  
		private function newRow(rendererXML : MadXML) : DisplayObject{
			var result : DisplayObject;
            //	var before:Number = _rendererAttributes.paddingH;
			if (UI.isForm(rendererXML.name)) {
				result = new UIForm(_slider, rendererXML, _rendererAttributes, true);
        	}
        	else {
				result = UI.containers(_slider, rendererXML, _rendererAttributes.copy());
        	}
			return result;
    }

/**
 *  Instanciate a new list label
 */
		private function newLabel() : UILabel{
            return new UILabel(_slider, _attributes.paddingH, 0, "", FORMAT);
    }

/**
 *  Create and position a new list row
 */
		private function customCell(record : Dynamic, position : Float) : Void{
        //	if (!UI.isForm(_renderer.localName())) {
        //      var localName:String = _renderer.localName();
        //      if (!UI.isContainer(localName) && !UI.isForm(localName)) {
        //		_renderer = XML("<horizontal>" + _renderer.toXMLString() + "</horizontal>");
        //	}
            _cell = newRow(Reflect.hasField(record,"_renderer") ? MadXML.parse(record._renderer) : _renderer);
            _cell.x = _cellRendererLeft + _attributes.paddingH;
            _cell.y = Math.ceil(position);
            if (Std.is(_cell, Sprite)) {
                _cell.mouseChildren = false;
            }
            _cell.name = "label_" + Std.string(_count) + _suffix;
            fillInValues(_cell, record);
        }
		
/**
 *  Assign data to custom renderer components
 */
		private function fillInValues(cell : DisplayObject, record : Dynamic) : Void{
            var view : DisplayObject;
            if (Std.is(record, String)) {
                view = ((Std.is(cell, IContainerUI))) ? cast(cell, IContainerUI).findViewById(_labelField) : cell;
                if (Std.is(view, UILabel)) {
                    cast(view, UILabel).xmlText = record;
            }
            else if (Std.is(view, IComponentUI)) {
                cast(view, IComponentUI).text = record;
            }
        }
        else {
			for (id in Reflect.fields(record)){
				view = ((Std.is(cell, IContainerUI))) ? cast((cell), IContainerUI).findViewById(id) : (((id == _labelField)) ? cell : null);
				if (view != null) {
					var value : String = Reflect.field(record, id);
					if (Std.is(view, UILabel)) {
						cast((view), UILabel).xmlText = value;
             		}
                    /*	try {
						if (XML("<o>"+value+"</o>").hasComplexContent() && view is UILabel) {
							view.htmlText = value;
						}
						else {
							view.text = value;
						}
					}
					catch (error:Error) {
						view.text = (value != null) ? value : "";
					}*/
                    else if (Std.is(view, IComponentUI)) {
						cast(view, IComponentUI).text = value;
                    }
                }
            }
        }
    }

/**
 *  If true, rows are clickable
 */  private function set_clickRow(value : Bool) : Bool{
	 	_clickRow = value;
        return value;
    }

/**
 *  Model
 */  override private function get_model() : Model{
	 	return _model;
    }


/**
 *  Handle search field filter
 */  private function searchHandler(event : Event) : Void{
	 	filter(_search.text.toLowerCase(), "", false, _begins);
    }  


/**
 *  Determine what has been clicked
 */  
	override private function doSearchHit() : Void{
		super.doSearchHit();
		if (Std.is(_pressButton, InteractiveObject) && !cast((_pressButton), InteractiveObject).mouseEnabled) {
			_pressButton = null;
        }
    }


/**
 *  Return component matching id within row matching row index
 */
	override public function findViewById(id : String, row : Int = -1, group : Int = -1) : DisplayObject{
		if (_search != null && _search.name == id) {
			return _search;
        }
        else if (_simple) {
			return _slider.getChildByName(id + "_" + Std.string(row));
        }
        else if (row >= 0) {
			var container : IContainerUI = cast((_slider.getChildByName("label_" + Std.string(row))), IContainerUI);
			return (container != null) ? container.findViewById(id, row, group) : null;
        }
        else {return null;
        }
    }


	private function get_rowContainer() : IContainerUI{
		return cast((_slider.getChildAt(_pressedCell + 1)), IContainerUI);
    }


/**
 *  Mouse move handler
 */
	override private function mouseMove(event : TimerEvent) : Void{
		if (_refresh != null && !_refreshState && sliderY > PULL_THRESHOLD) {
			_refresh.changeState(REFRESH_TEXT, true);
			if (_model != null) {
				_model.refresh();
            }
			_refreshState = true;
			dispatchEvent(new Event(REFRESH));
        }
		super.mouseMove(event);
		if (_rowClick && _distance < UIScrollVertical.THRESHOLD && _touchTimer.currentCount == LONG_CLICK_THRESHOLD) {
			dispatchEvent(new Event(LONG_CLICK));
        }
    }


/**
 *  Stop list movement
 */ 
	override private function stopMovement() : Void{
	 	super.stopMovement();
	 	_refreshState = false;
    }


	private function get_length() : Int{
		return _count;
    }


	override public function rowRectangle(y : Float) : Rectangle{
		for (l in 0..._slider.numChildren - 1){
			var row : DisplayObject = _slider.getChildAt(l + 1);
			if (row.y + row.height + _attributes.paddingV > y) {
				if (_simple) {
					return new Rectangle(0, row.y - 2 * _attributes.paddingV, _attributes.width, row.height + 4 * _attributes.paddingV);
                }
                else {
					return new Rectangle(0, row.y - _attributes.paddingV, _attributes.width, row.height + 2 * _attributes.paddingV);
                }
            }
        }
		return null;
    }
		
		
	private function set_searchVisible(value : Bool) : Bool{
		if (_search != null) {
			_search.visible = value;
			_top = Math.round((value) ? _search.height : 0);
        }
        return value;
    }


	override public function clear() : Void{
		data = [];
    }


	override public function destructor() : Void{
		if (_search != null) {
			_search.removeEventListener(TextEvent.TEXT_INPUT, searchHandler);
			_search.destructor();
        }
		_highlightTimer.removeEventListener(TimerEvent.TIMER, clearHighlight);
		super.destructor();
    }
}