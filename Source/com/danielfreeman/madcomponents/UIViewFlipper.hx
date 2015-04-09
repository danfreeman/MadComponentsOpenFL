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



import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.events.TimerEvent;
import openfl.events.Event;

/**
 *  MadComponents view flipper container
 * <pre>
 * &lt;viewFlipper
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, …"
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    width = "NUMBER"
 *    height = "NUMBER"
 *    alignH = "left|right|centre"
 *    alignV = "top|bottom|centre"
 *    visible = "true|false"
 *    border = "true|false"
 *    autoLayout = "true|false"
 * /&gt;
 * </pre>
 */
class UIViewFlipper extends UIScrollVertical
{
    private var sliderX(never, set) : Float;
    public var pageNumber(get, set) : Int;

    
    private static inline var RADIUS : Float = 4.0;
    private static inline var SPACING : Float = 16.0;
    private static inline var SCROLLBAR_GAP : Float = 20.0;
    
    private static inline var DISTANCE_PER_TICK : Float = 10.0;
    private static inline var TICKS_THRESHOLD : Int = 5;
    private static inline var MAXIMUM_TICKS : Int = 3;
	private static inline var PADDING : Float = 10.0;
    
    private var _pages : Array<Dynamic> = new Array<Dynamic>();
    private var _page : Int = 0;
    private var _lastPage : Int = -1;
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        var newAttributes : Attributes = attributes.copy();
        newAttributes.x = 0;
        newAttributes.y = 0;
        super(screen, xml, newAttributes);
        showScrollBar();
    }
    
    /**
 *  Rearrange the layout to new screen dimensions
 */
    override public function layout(attributes0 : Attributes) : Void{
        var attributes : Attributes = attributes0.copy();
        attributes.x = 0;
        attributes.y = 0;
        _attributes = attributes;
        _width = attributes.width;
        _height = attributes.height;
        drawComponent();
        var children : MadXMLList = xml.children();
        for (i in 0...children.length()){
            var pageXML : MadXML = children.get(i);
            //	var child:XML = XML("<page>"+pageXML.toXMLString()+"</page>");
            var newAttributes : Attributes = attributes.copy();
            var shiftX : Float = i * _width;
            if (pageXML.has.border && pageXML.att.border == "true") {
                addPadding(pageXML.name, newAttributes);
            }
            var page : UIForm = cast((_slider.getChildAt(i)), UIForm);
            attributes.position(page);
            page.layout(newAttributes);
            page.x += shiftX;
        }
        _maximumSlide = (_pages.length - 1) * _width;
        if (_maximumSlide < 0) {
            _maximumSlide = 0;
        }
        _slider.x = -_page * _width;
        _lastPage = -1;
        showScrollBar();
        _scrollBarVisible = false;
        refreshMasking();
    }
    
    /**
 *  Add border padding around a page
 */
    private function addPadding(localName : String, newAttributes : Attributes) : Void{
        if (localName != "list" && localName != "navigation" && localName != "viewFlipper" && localName != "frame" && localName.indexOf("List") < 0) {
            newAttributes.x += PADDING;
            newAttributes.y += PADDING;
            newAttributes.width -= 2 * PADDING;
            newAttributes.height -= 2 * PADDING;
            newAttributes.hasBorder = true;
        }
    }
    
    /**
 *  Set up the scrolling part of the view flipper
 */
    override private function createSlider(xml : MadXML, attributes : Attributes) : Void{
        _width = attributes.width;
        _height = attributes.height;
        addChild(_slider = new Sprite());
        var children : MadXMLList = xml.children();
        for (i in 0...children.length()){
            var pageXML : MadXML = children.get(i);
			var child : MadXML = MadXML.parse("<page>" + pageXML.toXMLString() + "</page>");
            var newAttributes : Attributes = attributes.copy();
            var shiftX : Float = i * _width;
            if (pageXML.has.border && pageXML.att.border == "true") {
                addPadding(pageXML.name, newAttributes);
			}
            var page : UIForm = new UIForm(_slider, child, newAttributes);
            attributes.position(page);
            page.x += shiftX;
            _pages.push(page);
        }
        _maximumSlide = (_pages.length - 1) * _width;
        if (_maximumSlide < 0) {
            _maximumSlide = 0;
        }
    }
    
    /**
 *  Attach new pages to this container
 */
    public function attachPages(pages : Array<Dynamic>) : Void{
        var position : Float = 0;
        for (page in pages){
            _slider.addChild(page);
            _pages.push(page);
            page.x = position;
            position += _width;
        }
        _maximumSlide = (pages.length - 1) * _width;
        showScrollBar();
    }
    
    /**
 *  Show the page indicator
 */
    override private function drawScrollBar() : Void{
        _page = Math.round(-_slider.x / _width);
        if (_page == _lastPage || _scrollBarLayer == null) {
			return;
		}
        _scrollBarLayer.graphics.clear();
        if (_scrollBarColour != Attributes.TRANSPARENT) {
            var barPosition : Float = (_width - SPACING * _pages.length) / 2;
            _scrollBarLayer.graphics.lineStyle(1.0, _scrollBarColour);
            for (i in 0..._pages.length){
                if (i == _page) {
                    _scrollBarLayer.graphics.beginFill(_scrollBarColour);
                }
                _scrollBarLayer.graphics.drawCircle(barPosition + i * SPACING + SPACING / 2, _height - SCROLLBAR_GAP, RADIUS);
                _scrollBarLayer.graphics.endFill();
            }
        }
        _lastPage = _page;
    }
    
    
    override private function mouseMove(event : TimerEvent) : Void{
        _delta = -_slider.x;
        sliderX = _startSlider.x + (mouseX - _startMouse.x);
        _delta += _slider.x;
        _distance += Math.abs(_delta);
        if (_distance > UIScrollVertical.THRESHOLD) {
            showScrollBar();
        }
        else if (_classic && _touchTimer.currentCount == MAXIMUM_TICKS) {
            pressButton();
        }
        else if (_touchTimer.currentCount == UIScrollVertical.TOUCH_DELAY && !_classic && Math.abs(_delta) <= UIScrollVertical.DELTA_THRESHOLD) {
            pressButton();
        }
    }
    
    
    private function slideCondition() : Bool{
        return _pressButton == null && (Math.abs(mouseX - _startMouse.x) / _touchTimer.currentCount) > DISTANCE_PER_TICK && _touchTimer.currentCount < TICKS_THRESHOLD;
    }
    
    
    override private function startMovement0() : Bool{
        if (slideCondition()) {
            _endSlider = -_startSlider.x + (((mouseX < _startMouse.x)) ? _width : -_width);
        }
        else {
            _endSlider = Math.round(-_slider.x / _width) * _width;
        }
        
        if (_endSlider < 0) {
            _endSlider = 0;
        }
        else if (_endSlider > _maximumSlide) {
            _endSlider = _maximumSlide;
        }
        
        return true;
    }
    
    /**
 *  Search for component by id
 */
    override public function findViewById(id : String, row : Int = -1, group : Int = -1) : DisplayObject{
        for (view in _pages){
            if (view.name == id) {
                return view;
            }
            else {
                var result : DisplayObject = cast((view.findViewById(id, row, group)), DisplayObject);
                if (result != null) 
                    return result;
            }
        }
        return null;
    }
    
    /**
 *  Set horizontal scroll value
 */
    private function set_sliderX(value : Float) : Float{
        if (Math.abs(value - _slider.x) < UIScrollVertical.MAXIMUM_DY) {
            _slider.x = value;
        }
        return value;
    }
    
    /**
 *  Animate view flipper movement
 */
    override private function movement(event : TimerEvent) : Void{
        if (_endSlider < 0) {
            //	_delta *= DECAY;
            _delta *= deltaToDecay(_delta);
            sliderX = _slider.x + _delta;
            if (_distance > UIScrollVertical.THRESHOLD) 
                showScrollBar();
            if (Math.abs(_delta) < 1.0 || _slider.x > 0 || _slider.x < -_maximumSlide) {
                if (!startMovement0()) 
                    stopMovement();
            }
        }
        else {
            _delta = (-_endSlider - _slider.x) * UIScrollVertical.BOUNCE;
            sliderX = _slider.x + _delta;
            showScrollBar();
            if (Math.abs(_delta) < 1.0) {
                sliderX = -_endSlider;
                stopMovement();
            }
        }
    }
    
    
    private function set_pageNumber(value : Int) : Int{
        _page = value;
        _slider.x = -_page * _width;
        showScrollBar();
        return value;
    }
    
    
    private function get_pageNumber() : Int{
        return _page;
    }
    
    
    override public function hideScrollBar() : Void{
        dispatchEvent(new Event(UIScrollVertical.STOPPED));
        if (_scrollBarVisible) {
            _scrollBarVisible = false;
        }
    }
}

