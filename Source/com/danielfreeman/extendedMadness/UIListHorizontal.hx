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
 
package com.danielfreeman.extendedmadness;

import com.danielfreeman.madcomponents.*;
import openfl.display.BlendMode;
import openfl.display.DisplayObject;
import openfl.display.GradientType;
import openfl.display.InteractiveObject;
import openfl.display.Shape;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.FocusEvent;
import openfl.events.MouseEvent;
import openfl.events.TextEvent;
import openfl.events.TimerEvent;
import openfl.geom.Rectangle;
import openfl.text.TextFormat;

/**
 * A list row was initiated - although we don't yet know whether this is a click or a scroll.
 */  @:meta(Event(name="clickStart",type="flash.events.Event"))
  /**
 * A list row was clicked.  This is a bubbling event.
 */  @:meta(Event(name="clicked",type="flash.events.Event"))
  /**
 * A list row was clicked.
 */  @:meta(Event(name="listClickedEnd",type="flash.events.Event"))
  /**
 * A list click was cancelled.  This was a scroll, not a click.  
 */  @:meta(Event(name="listClickCancel",type="flash.events.Event"))
  /**
 * A list row was long-clicked.
 */  @:meta(Event(name="longClick",type="flash.events.Event"))
  /**
 * The Pull-Down-To-Refresh header was activated
 */  @:meta(Event(name="pullRefresh",type="flash.events.Event"))
  /**
 *  MadComponents List
 * <pre>
 * &lt;listHorizontal
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, ..."
 *    visible = "true|false"
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    border = "true|false"
 *    autoLayout = "true|false"
 *    lines = "i,j,k..."
 *    pullDownRefresh = "true|false"
 *    pullDownColour = "#rrggbb"
 *    sortBy = "IDENTIFIER"
 *    sortMode = "MODE"
 *    index = "INTEGER"
 *    showPressed = "true|false"
 *    highlightPressed = "true|false"
 *    mask = "true|false"
 *    alignV = "scroll|no scroll"
 *    width = "NUMBER"
 *    height = "NUMBER"
 *    rowWidth = "NUMBER"
 * /&gt;
 * </pre>
 */
 
class UIListHorizontal extends UIList
{
    private var outsideSlideRangeX(get, never) : Bool;
    private var sliderX(get, set) : Float;
    public var scrollPositionX(get, set) : Float;
    private static inline var MINIMUM_BAR_WIDTH : Float = 16.0;
    private var _rowWidth : Int = -1;
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        if (xml.has.rowWidth) {
            _rowWidth = Std.parseInt(xml.att.rowWidth);
        }
        _attributes = attributes;
        initialiseRenderAttributes(xml, attributes);
        super(screen, xml, attributes);
        _top = Math.round((_search != null) ? _search.width : 0.0);
    }
/**
 *  Scroll to index
 */ 
	override private function set_index(value : Int) : Int{
        _pressedCell = value;
        if (_slider.x + _rowWidth * value < UIScrollVertical.MAXIMUM_DY / 2) {
            _endSlider = _rowWidth * value - _offset;
            if (_endSlider > _maximumSlide) {
                _endSlider = _maximumSlide;
            }
            _moveTimer.start();
        }
        else {
            scrollPositionX = _rowWidth * value - _offset;
        }
        sliderMoved();
        illuminate(value, false);
        return value;
    }
	
	
	override private function initDraw() : Void{
        _rendererAttributes.width = ((_rowWidth > 0) ? _rowWidth : attributes.width) - 2 * _rendererAttributes.paddingH;
        _slider.graphics.clear();
        //	resizeRefresh();
        _cellTop = _top;
    }
	
	
	override private function autoLayout() : Void{
        var last : Float = _top + _attributes.paddingH;
        var i : Int = 0;
        for (record in _filteredData){
            var cell : Dynamic = _slider.getChildByName("label_" + Std.string(i));
            if (cell != null && Std.is(cell, UIForm)) {
                cast((cell), UIForm).layout(_rendererAttributes);
                cell.x = last;
                last += _rendererAttributes.width;
                drawCell(last, i, record);
                last += _attributes.paddingH;
                i++;
            }
        }
    }

/**
 *  Redraw cell chrome
 */  
	override private function redrawCells() : Void{
        initDraw();
        var cellWidth : Float = ((_rowWidth > 0)) ? _rowWidth : _attributes.widthH;
        if (!_autoLayout) {
            var l : Int = 0;
            for (record in _filteredData){
                drawCell(cellWidth * l + _top + _attributes.paddingH, l, record);
                l++;
            }
        }
    }
		
/**
 *  Set list data
 */  
	override private function set_data0(value : Array<Dynamic>) : Array<Dynamic>{
        clearCells();
        initDraw();
        if (_simple) {
            simpleRenderers(value, _cellTop + _attributes.paddingH);
        }
        else {
            customRenderers(value, _cellTop + _attributes.paddingH);
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
	override private function calculateMaximumSlide() : Void{
        _scrollerWidth = _slider.width;
        _maximumSlide = _scrollerWidth - _attributes.widthH;
        // - _attributes.paddingH;
        if (_maximumSlide < 0) {
            _maximumSlide = 0;
        }
    }

/**
 *  Create list with simple default label rows
 */  
	override private function simpleRenderers(value : Array<Dynamic>, position : Float = -1) : Void{
        if (position < 0) {
            position = _attributes.paddingH;_count = 0;
        }
        _textAlign = _attributes.textAlign;
        for (record in value){
            var label : UILabel = labelCell(record, position);
            drawCell(position, _count, Reflect.hasField(record,"_colour") ? UI.toColourValue(record._colour) : -1);
            position += ((_rowWidth > 0)) ? _rowWidth : _attributes.widthH;
            _count++;
        }
    }
		
/**
 *  Create a simple list label row
 */
	override private function labelCell(record : Dynamic, position : Float) : UILabel{
        var label : UILabel = super.labelCell(record, position);
        label.x = position;
        label.y = _attributes.paddingV;
        return label;
    }

/**
 *  Draw row chrome
 */  
	override private function drawSimpleCell(position : Float, count : Int, colour : Int = -1) : Void{
        position = Math.floor(position);
        var cellWidth : Float = ((_rowWidth > 0)) ? _rowWidth : _attributes.widthH;
        if (_colours.length > 1 || colour >= 0) {
            _slider.graphics.beginFill(((colour >= 0)) ? colour : _colours[count % (_colours.length - 1) + 1]);
            _slider.graphics.drawRect(position - _attributes.paddingH, 0, cellWidth, _attributes.heightV);
        }
        _slider.graphics.beginFill(0, 0);
        _slider.graphics.drawRect(position - _attributes.paddingH, 0, cellWidth, 1);
        _cellTop = Math.ceil(position);
    }

/**
 *  Return DisplayObject of button pressed
 */
	override private function pressButton(show : Bool = true) : DisplayObject{
        _scrollBarLayer.graphics.clear();
        clearPressed();
        if (!_simple || _slider.mouseX < _top) {
            doSearchHit();
        }
        illuminate();
        return _pressButton;
    }


	override private function illuminate(pressedCell : Int = -1, dispatch : Bool = true, show : Bool = true) : Void{
        if (_pressButton == null && _clickRow) {
            var highlightWidth : Float = ((_rowWidth > 0)) ? _rowWidth : _attributes.widthH;
            if (_autoLayout && !_simple && _slider.mouseY > _top) {
                _pressedCell = (pressedCell > 0) ? pressedCell : autoLayoutPressedCell(_slider.mouseX);
                if (_row != null && _pressedCell >= 0 && _pressedCell < _count) {
                    if (show && _highlightPressed) {
                        _highlight.graphics.beginFill(UIList.HIGHLIGHT);
                        _highlight.graphics.drawRect(_row.x - _attributes.paddingH + 1, 0, highlightWidth, _row.height + 2 * _attributes.paddingV - 1);
                    }
                    activate(dispatch);
                }
            }
            else {
                _pressedCell = (pressedCell > 0) ? pressedCell : Math.floor((_slider.mouseX - _top) / highlightWidth);
                if (_pressedCell >= 0 && _pressedCell < _count) {
                    if (show && _highlightPressed) {
                        _highlight.graphics.beginFill(UIList.HIGHLIGHT);
                        _highlight.graphics.drawRect(_top + _pressedCell * highlightWidth + 1, 0, highlightWidth, _attributes.heightV);
                    }
                    activate(dispatch);
                }
            }
        }
    }

/**
 *  If autoLayout="true", which cell was clicked?
 */  
	override private function autoLayoutPressedCell(x : Float) : Int{
        var n : Int = 0;
        for (l in 0..._slider.numChildren - 1){
            var row : Dynamic = _slider.getChildAt(l + 1);
            if (row != null && Std.is(row, UIForm)) {
                _row = cast((row), UIForm);
                if (_row.x + _row.width + _attributes.paddingH > x) {
                    return n;
                }
                n++;
            }
        }return -1;
    }
		
/**
 *  Create list with custom renderers
 */  
		override private function customRenderers(value : Array<Dynamic>, position : Float = -1) : Void{
            if (position < 0) {
                position = _attributes.paddingH;
            }
            _count = 0;
            for (record in value){
                customCell(record, position);
                drawCell(position, _count, (Reflect.hasField(record,"_colour")) ? UI.toColourValue(record._colour) : -1);
                position += ((_rowWidth > 0)) ? _rowWidth : _attributes.widthH;
                _count++;
            }
        }
        
/**
 *  Create and position a new list row
 */  
        override private function customCell(record : Dynamic, position : Float) : Void{
            if (!UI.isForm(_renderer.name)) {
                _renderer = MadXML.parse("<horizontal>" + _renderer.toXMLString() + "</horizontal>");
            }
            _cell = newRow((record.__DOLLAR__renderer) ? record.__DOLLAR__renderer : _renderer);
            _cell.x = position;
            _cell.y = _rendererAttributes.paddingV;
            _cell.mouseChildren = false;
            _cell.name = "label_" + Std.string(_count) + _suffix;
            fillInValues(_cell, record);
    }
    
/**
 *  Rearrange the layout to new screen dimensions
 */  
        override public function layout(attributes : Attributes) : Void{
            var attributesWidth : Float = attributes.width;
            var cellWidth : Float = ((_rowWidth > 0)) ? _rowWidth : _attributes.widthH;
            attributes.width = cellWidth;
            super.layout(attributes);
            attributes.width = attributesWidth;
            if (scrollRect != null) {
                scrollRect = new Rectangle(0, 0, attributes.widthH, attributes.heightV);
            }
            calculateMaximumSlide();
    }
    
//____________ 


// There is no multiple inheritance in AS3, so here are the methods of UIScrollHorizontal

/**
 *  Adjust horizontal scroll range
 */
    override private function adjustMaximumSlide() : Void{
        var sliderWidth : Float = _scrollerWidth > (0) ? _scrollerWidth * _scale : _slider.width;
        _maximumSlide = sliderWidth - _width + UIScrollVertical.PADDING * (_border == ("false") ? 0 : 1);
        if (_maximumSlide < 0) 
            _maximumSlide = 0;
        if (_slider.x < -_maximumSlide) 
            _slider.x = -_maximumSlide;
    }
    
/**
 *  Touch move handler
 */
    override private function mouseMove(event : TimerEvent) : Void{
        if (!_noScroll) {
            var delta : Float = -sliderX;
            sliderX += ((outsideSlideRangeX) ? _dampen : 1.0) * (mouseX - _lastMouse.x);
            delta += sliderX;
            
            if (Math.abs(delta) > UIScrollVertical.DELTA_THRESHOLD) {
                if (delta * _delta > 0) {
                    _delta = UIScrollVertical.SMOOTH * _delta + (1 - UIScrollVertical.SMOOTH) * delta;
                }
                else {
                    _delta = delta;
                }
                _noSwipeCount = 0;
            }
            else if (++_noSwipeCount > UIScrollVertical.NO_SWIPE_THRESHOLD) {
                _delta = 0;
            }
            _distance += Math.abs(mouseX - _lastMouse.x);  // + Math.abs(mouseX - _startMouse.x);  
            _lastMouse.x = mouseX;
            _lastMouse.y = mouseY;
        }
        if (!_noScroll && _distance > UIScrollVertical.ABORT_THRESHOLD) {
            showScrollBar();
        }
        else if (_touchTimer.currentCount == UIScrollVertical.MAXIMUM_TICKS && _classic && _distance < UIScrollVertical.THRESHOLD) {
            pressButton();
        }
        else if (_touchTimer.currentCount == UIScrollVertical.TOUCH_DELAY && !_classic && Math.abs(_delta) <= UIScrollVertical.DELTA_THRESHOLD) {
            pressButton();
        }
    }
    
    
    private function get_outsideSlideRangeX() : Bool{
        return _slider.x > 0 || _slider.x < -_maximumSlide;
    }
    
    
    override private function startMovement0() : Bool{
        if (_slider.x > _offset) {
            _endSlider = -_offset;
            return true;
        }
        else if (_slider.x < -_maximumSlide) {
            _endSlider = _maximumSlide;
            return true;
        }
        return false;
    }
    
    
/**
 *  Animate scrolling movement
 */
    override private function movement(event : TimerEvent) : Void{
        if (_endSlider < UIScrollVertical.FINISHED) {
            //	_delta *= _decay;
            _delta *= deltaToDecay(_delta);
            sliderX = sliderX + _delta;
            if (_distance > UIScrollVertical.THRESHOLD) {
                showScrollBar();
            }
            if (Math.abs(_delta) < _deltaThreshold || sliderX > 0 || sliderX < -_maximumSlide) {
                if (!startMovement0()) 
                    stopMovement();
            }
        }
        else {
            _delta = (-_endSlider - _slider.x) * UIScrollVertical.BOUNCE;
            sliderX = sliderX + _delta;
            showScrollBar();
            if (Math.abs(_delta) < _deltaThreshold) {
                stopMovement();
                sliderX = -_endSlider;
            }
        }
    }
    
/**
 *  Show scroll bar
 */
    override private function drawScrollBar() : Void{
        var sliderWidth : Float = (_scrollerWidth > 0) ? _scrollerWidth * _scale : _slider.width;
        _scrollBarLayer.graphics.clear();
        var barWidth : Float = (_width / sliderWidth) * _width;
        var barPositionX : Float = (-_slider.x / sliderWidth) * _width + 2 * UIScrollVertical.SCROLLBAR_POSITION;
        if (barPositionX < UIScrollVertical.SCROLLBAR_POSITION) {
            barWidth += barPositionX;
            barPositionX = UIScrollVertical.SCROLLBAR_POSITION;
        }
        if (barPositionX + barWidth > _width - 4 * UIScrollVertical.SCROLLBAR_POSITION) {
            barWidth -= barPositionX + barWidth - _width + 4 * UIScrollVertical.SCROLLBAR_POSITION;
        }
        if (barWidth > 0 && barPositionX >= 0) {
            _scrollBarLayer.graphics.beginFill(_scrollBarColour);
            _scrollBarLayer.graphics.drawRoundRect(barPositionX, _height - UIScrollVertical.SCROLLBAR_WIDTH - UIScrollVertical.SCROLLBAR_POSITION, barWidth, UIScrollVertical.SCROLLBAR_WIDTH, UIScrollVertical.SCROLLBAR_WIDTH);
        }  //	_slider.cacheAsBitmap = true;  
    }
    
    
    private function set_sliderX(value : Float) : Float{
        if (Math.abs(value - _slider.x) < UIScrollVertical.MAXIMUM_DY) {
            _slider.x = value;
        }
        return value;
    }
    
    
    private function get_sliderX() : Float{
        return _slider.x;
    }
    
/**
 *  Set horizontal scroll position
 */
    private function set_scrollPositionX(value : Float) : Float{
        _slider.x = -value;
        if (value > _maximumSlide) {
            _slider.x = -_maximumSlide;
        }
        return value;
    }
    
    
    private function get_scrollPositionX() : Float{
        return -_slider.x;
    }
}