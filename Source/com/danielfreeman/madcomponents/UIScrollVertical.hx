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

import com.danielfreeman.madcomponents.UI;

import openfl.display.DisplayObject;
import openfl.display.Shape;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.events.TimerEvent;
import openfl.geom.Point;
import openfl.utils.Timer;
import openfl.geom.Rectangle;
import openfl.display.InteractiveObject;
/**
 * Scrolling has started
 */  @:meta(Event(name="scrollStarted",type="flash.events.Event"))
  /**
 * Scrolling has ceased
 */  @:meta(Event(name="scrollStopped",type="flash.events.Event"))
  /**
 *  MadComponents vertically scrolling container
 * <pre>
 * &lt;scrollVertical
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, …"
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    alignH = "left|right|centre|fill"
 *    alignV = "top|bottom|centre|fill"
 *    visible = "true|false"
 *    border = "true|false"
 *    autoLayout = "true|false"
 *    scrollV = "scroll|no scroll|auto"
 *    alwaysScrollBar = "true|false"
 * /&gt;
 * </pre>
 */  
	class UIScrollVertical extends MadMasking implements IContainerUI
{
    public var dampen(never, set) : Float;
    public var scrollEnabled(get, set) : Bool;
    public var pages(get, never) : Array<DisplayObject>;
    public var xml(get, set) : MadXML;
    public var maximumSlide(get, never) : Float;
    private var outsideSlideRange(get, never) : Bool;
    public var sliderY(get, set) : Float;
    public var sliderVisible(get, set) : Bool;
    public var scrollPositionY(get, set) : Float;
    public var data(never, set) : Dynamic;
    public var model(get, never) : Model;
	public static inline var STARTED : String = "scrollStarted";
	public static inline var STOPPED : String = "scrollStopped";
	private static inline var DELTA_THRESHOLD : Float = 2.0;
	private static inline var THRESHOLD : Float = 8.0;
	private static inline var ABORT_THRESHOLD : Float = 8.0;
	private static inline var PADDING : Float = 10.0;
	private static inline var SCROLLBAR_POSITION : Float = 2.0;
	private static inline var SCROLLBAR_WIDTH : Float = 5.0;
	private static inline var MAXIMUM_DY : Float = 2048.0;
	private static var FINISHED : Float = -99999;
	private static inline var SMOOTH : Float = 0.5;
	private static inline var MARGIN : Float = 6.0;
	public static var DELTA : Int = 10;
	public static var DELTA_TOUCH : Int = 10;
	public static var BOUNCE : Float = 0.5;
	public static var CLICK_DURATION : Int = 167;
	public static var SLOW_DECAY : Array<Float> = [0.85, 0.96];
	public static var FAST_DECAY : Array<Float> = [0.99, 0.99];
	public static var SLOW_DECAY_DELTA : Array<Float> = [0.0, 0.40];
	public static var FAST_DECAY_DELTA : Array<Float> = [150.0, 100];
	public static var SPEED : Int = 1;
	public static var FLICK_THRESHOLD : Float = 10.0;
	public static var FLICK_FACTOR : Float = 4.0;
	private static inline var MAXIMUM_TICKS : Int = 3;
	private static inline var DAMPEN : Float = 0.3;
	private static inline var NO_SWIPE_THRESHOLD : Int = 1;
	public static inline var TOUCH_DELAY : Int = 8;
	private var _maximumSlide : Float;
	private var _delta : Float = 0.0;
	private var _startMouse : Point = new Point();
	private var _lastMouse : Point = new Point();
	private var _startSlider : Point = new Point();
	private var _endSlider : Float = -1;
	private var _slider : Sprite;
	private var _sliderPosition : Float = 0;
	private var _touchTimer : AnimationTimer; // = new Timer(DELTA_TOUCH);
	private var _moveTimer : AnimationTimer; // = new Timer(DELTA);
	private var _dragTimer : AnimationTimer; // = new Timer(DELTA);
	private var _clickTimer : Timer = new Timer(CLICK_DURATION, 1);
	private var _distance : Float = 0;
	private var _pressButton : DisplayObject;
	private var _searchHitChild : DisplayObject;
	private var _scrollBarLayer : Shape;
	private var _width : Float;
	private var _height : Float;
	private var _colour : Int;
	private var _scrollBarColour : Int;
	private var _noScroll : Bool;
	private var _deltaThreshold : Float = 1.0;
	private var _listClickable : Bool = true;
	private var _autoLayout : Bool = false;
	private var _offset : Float = 0;
	private var _scrollBarVisible : Bool = false;
	private var _scrollerWidth : Float = -1;
	private var _scrollerHeight : Float = -1;
	private var _border : String;
	private var _scale : Float = 1.0;
	private var _dampen : Float = DAMPEN;
	private var _classic : Bool = false;
	private var _autoScrollEnabled : Bool;
	private var _alwaysScrollBar : Bool = false;
	private var _noSwipeCount : Int = 0;
	private var _profile : Int = SPEED;
	
	private var _actualDeltaY : Float;
	
	
	public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {

		if (xml.has.speed && xml.att.speed == "slow") {
			_profile = 0;
        }
        else if (xml.has.speed && xml.att.speed == "fast") {
			_profile = 1;
        }
		_classic = xml.has.classic && xml.att.classic == "true";
		_autoScrollEnabled = xml.has.scrollY && xml.att.scrollY == "auto";
		_alwaysScrollBar = xml.has.alwaysScrollBar && xml.att.alwaysScrollBar == "true";
		super(null, xml, attributes);

		if (screen != null) {
			screen.addChildAt(this, 0);
        }
		_touchTimer = new AnimationTimer(this);
		_moveTimer = new AnimationTimer(this);
		_dragTimer = new AnimationTimer(this);
		_border = xml.has.border ? xml.att.border : "";
		if (xml.has.dampen) {
			_dampen = Std.parseFloat(xml.att.dampen);
        }
		_colour = attributes.colour;
		_noScroll = xml.has.scrollV && xml.att.scrollV == "false";
		_scrollBarColour = attributes.scrollBarColour;
		createSlider(xml, attributes);
		if (xml.has.autoLayout && xml.att.autoLayout == "true") {
			_slider.addEventListener(UIImageLoader.LOADED, doLayoutHandler);
			_autoLayout = true;
        }
		addChild(_scrollBarLayer = new Shape());
		_scrollBarLayer.alpha = 0.8;
		_clickTimer.addEventListener(TimerEvent.TIMER, clickUp);
		addEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
		addListeners();
		drawComponent();
		androidMouseDisable(_slider);
		startMasking();
		if (_alwaysScrollBar) {
			showScrollBar();
        }
    }
	
	
	private function set_dampen(value : Float) : Float{
		_dampen = value;
        return value;
    }
	
	
	private function addListeners() : Void{
	_touchTimer.addEventListener(TimerEvent.TIMER, mouseMove);
	_dragTimer.addEventListener(TimerEvent.TIMER, mouseDrag);
	_moveTimer.addEventListener(TimerEvent.TIMER, movement);
    }
	
	
	private function removeListeners() : Void{
		removeEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
		stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
		_touchTimer.removeEventListener(TimerEvent.TIMER, mouseMove);
		_dragTimer.removeEventListener(TimerEvent.TIMER, mouseDrag);
		_moveTimer.removeEventListener(TimerEvent.TIMER, movement);
    }
	
	
	private function deltaToDecay(delta : Float) : Float{
		var factor : Float;
		if (Math.abs(delta) < SLOW_DECAY_DELTA[_profile]) {
			factor = 0.0;
        }
        else if (Math.abs(delta) > FAST_DECAY_DELTA[_profile]) {
			factor = 1.0;
        }
        else {
			factor = (Math.abs(delta) - SLOW_DECAY_DELTA[_profile]) / (FAST_DECAY_DELTA[_profile] - SLOW_DECAY_DELTA[_profile]);
        }
		return factor * (FAST_DECAY[_profile] - SLOW_DECAY[_profile]) + SLOW_DECAY[_profile];
    }
	
	
/**
 *  If false, scrolling is locked.
 */  
	private function set_scrollEnabled(value : Bool) : Bool{
	 _noScroll = !value;
	 if (_noScroll) {
		 stopMovement();
        }
        return value;
    }
	
	
/**
 *  Is this container scrollable, or locked?
 */ 
	private function get_scrollEnabled() : Bool{
		return !_noScroll;
    }
	
	
/**
 *  Draw background
 */
	
	public function drawComponent() : Void{
		if (!Math.isNaN(_width) && !Math.isNaN(_height)) {
			UI.drawBackgroundColour(_attributes.backgroundColours, _width, _height, this);
        }
    }
	
	
/**
 *  Returns scrolling form within array
 */  
	private function get_pages() : Array<DisplayObject>{
		return [_slider];
    }
	
	
	private function get_xml() : MadXML{
		return _xml;
    }
	
	
/**
 *  Rearrange the layout to new screen dimensions
 */  
	override public function layout(attributes : Attributes) : Void{
		super.layout(attributes);
		if (Std.is(_slider, IComponentUI)) {
			cast((_slider), IComponentUI).layout(sliderAttributes(attributes));
        }
		drawComponent();
		adjustMaximumSlide();
		//	if (scrollRect)
        //		scrollRect = new Rectangle(0,0,attributes.width,attributes.height);  refreshMasking();
        if (_alwaysScrollBar) {
            showScrollBar();
        }
    }


	public function rowRectangle(y : Float) : Rectangle{
        for (l in 0..._slider.numChildren - 1){
            var row : DisplayObject = _slider.getChildAt(l + 1);
            if (row.y + row.height + _attributes.paddingV > y) {
                return new Rectangle(row.x - _attributes.paddingH / 2, row.y - _attributes.paddingV / 2, row.width + _attributes.paddingH, row.height + _attributes.paddingV);
            }
        }
        return null;
    }
    
    
    private function adjustVerticalSlide() : Void{
        var sliderHeight : Float = (_scrollerHeight > 0) ? _scrollerHeight * _scale : _slider.getBounds(_slider).bottom;
        _maximumSlide = sliderHeight - _height + PADDING * ((_border == "false") ? 0 : 1);
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

/**
 *  Update maximum slide
 */  
 
    private function adjustMaximumSlide() : Void{
        adjustVerticalSlide();
    }
    
    
    private function doLayoutHandler(event : Event) : Void{
        doLayout();
        event.stopPropagation();
    }
    
    
    private function get_maximumSlide() : Float{
        return _maximumSlide;
    }

/**
 *  Refresh
 */  
	public function doLayout() : Void{
            if (Std.is(_slider, UIForm)) {
                if (_autoLayout) {
                    cast((_slider), UIForm).doLayout();
            }
            adjustMaximumSlide();
        }
    }
    
    
    private function set_xml(value : MadXML) : MadXML{
        cast((_slider), UIForm).xml = value;
        adjustMaximumSlide();
        return value;
    }

/**
 *  Create sliding part of container
 */ 

	private function createSlider(xml : MadXML, attributes : Attributes) : Void{
        _slider = new UIForm(this, xml, sliderAttributes(attributes));
        _slider.name = "-";
        adjustMaximumSlide();
    }


	private function sliderAttributes(attributes : Attributes) : Attributes{
        _width = attributes.width;
		_height = attributes.height;
        var newAttributes : Attributes = attributes.copy();
        var padding : Float = ((_border == "true" || (_border != "false" && _xml.name.indexOf("scroll") >= 0))) ? PADDING : 0;
        if (_xml.has.width) {
            newAttributes.width = _scrollerWidth = Std.parseFloat(_xml.att.width);
        }
        if (_xml.has.height) {
            newAttributes.height = _scrollerHeight = Std.parseFloat(_xml.att.height);
        }
        newAttributes.width -= 2 * padding;
        newAttributes.x = padding;
        newAttributes.y = padding;
        return newAttributes;
    }

/**
 *  Disable touch events to scrolling components
 */  
	private function androidMouseDisable(item : Sprite) : Void{
        for (i in 0...item.numChildren){
            var child : DisplayObject = cast((item.getChildAt(i)), DisplayObject);
            if (Std.is(child, MadSprite)) {
                cast((child), MadSprite).mouseEnabled = false;
            }
            else if (Std.is(child, IContainerUI) && cast((child), Sprite).mouseChildren) {
                for (page in cast((child), IContainerUI).pages){
                    androidMouseDisable(cast(page, Sprite));
                }
                if (Std.is(child, UIForm)) {
                    cast((child), UIForm).insideScroller();
                }
            }
            else if (!(Std.is(child, UIInput)) && !(Std.is(child, UISearch)) && !(Std.is(child, UIBlueText)) && Std.is(child,InteractiveObject)) {
                    cast(child, InteractiveObject).mouseEnabled = false;
            }
        }
    }
		
		
		private function mouseDown(event : MouseEvent) : Void{trace("mouseDown");
            if (_pressButton != null || mouseX > _attributes.width || _slider.mouseY > _slider.getBounds(_slider).bottom) {
                return;
            }
            //	hideScrollBar();
            removeEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
            stage.addEventListener(MouseEvent.MOUSE_UP, mouseUp);
            _lastMouse.x = _startMouse.x = mouseX;
            _lastMouse.y = _startMouse.y = mouseY;
            _startSlider.x = _slider.x;
            _startSlider.y = sliderY;
			_listClickable = !_moveTimer.running;
            _moveTimer.stop();
            _touchTimer.reset();
            _touchTimer.start();
            _distance = 0;
    //		_oldDeltaY = 0;  
            if (!_classic && Math.abs(_delta) <= DELTA_THRESHOLD) {
                pressButton(false);
            }
            _delta = 0;
        }
		
		
		override public function touchCancel() : Void{
            if (_pressButton != null && _pressButton.name == "$" && _pressButton.parent != null && Std.is(_pressButton.parent, UIForm)) {
                cast((_pressButton.parent), UIForm).touchCancel();
            }
            else if (_pressButton != null && Std.is(_pressButton, MadSprite)) {
                cast((_pressButton), MadSprite).touchCancel();
            }
        }


        public function stopScrolling() : Void{trace("stopScrolling");
            handleFlick();
            stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
            _dragTimer.stop();
            _touchTimer.stop();
//			_moveTimer.stop();
            removeEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
            addEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
    }


/**
 *  A rapid flick to scroll occurs too quickly to be handled by the usual scrolling algorithm
 *  So deal with them as a special case.
 */  

private function handleFlick() : Void{
    if (_touchTimer.currentCount <= FLICK_THRESHOLD) {
        _delta = FLICK_FACTOR * (mouseY - _startMouse.y) / (((_touchTimer.currentCount == 0)) ? 1 : _touchTimer.currentCount);
        }
    }


private function mouseUp(event : MouseEvent) : Void{trace("mouseUp");
    stopScrolling();
    if (!_noScroll) {
        startMovement();
    }
    if (_pressButton != null) {
        _pressButton.dispatchEvent(new MouseEvent(MouseEvent.MOUSE_UP));
        stage.dispatchEvent(new MouseEvent(MouseEvent.MOUSE_UP));
        _pressButton = null;
        }
    }


private function mouseMove(event : TimerEvent) : Void{trace("mouseMove");
    if (!_noScroll) {
        var delta : Float = -sliderY;
        sliderY += (outsideSlideRange ? _dampen : 1.0) * (mouseY - _lastMouse.y);
        delta += sliderY;
        if (Math.abs(delta) > DELTA_THRESHOLD) {
            if (delta * _delta > 0) {
                _delta = SMOOTH * _delta + (1 - SMOOTH) * delta;
                }
                else {
                    _delta = delta;
                }
                _noSwipeCount = 0;
            }
            else if (++_noSwipeCount > NO_SWIPE_THRESHOLD) {
                _delta = 0;
            }
            _distance += Math.abs(mouseY - _lastMouse.y); // + Math.abs(mouseX - _startMouse.x);
            _lastMouse.x = mouseX;
			_lastMouse.y = mouseY;
        }
        if (!_noScroll && _distance > ABORT_THRESHOLD) {
            showScrollBar();
        }
        else if (_touchTimer.currentCount == MAXIMUM_TICKS && _classic && _distance < THRESHOLD) {
            pressButton();
        }
        else if (_touchTimer.currentCount == TOUCH_DELAY && !_classic && Math.abs(_delta) <= DELTA_THRESHOLD) {
            pressButton();
        }
													  trace("end mouseMove");
    }


private function mouseDrag(event : TimerEvent) : Void{
    if (_pressButton != null) {
        stage.dispatchEvent(new MouseEvent(MouseEvent.MOUSE_MOVE));
        }
    }  


/**
 *  Start scrolling movement
 */  

private function startMovement() : Void{
    _endSlider = FINISHED - 1;
    startMovement0();
    _moveTimer.start();
    }
    
    
private function startMovement0() : Bool{
    if (sliderY > _offset) {
        _endSlider = -_offset;
        return true;
    }
    else if (sliderY < -_maximumSlide) {
        _endSlider = _maximumSlide;
        return true;
        }
    return false;
    }  


/**
 *  Animate scrolling movement
 */  
private function movement(event : TimerEvent) : Void{trace("movement");
    if (_endSlider < FINISHED) {
        _delta *= deltaToDecay(_delta);
        sliderY = sliderY + _delta;
        if (_distance > THRESHOLD) {
            showScrollBar();
        }
        if (Math.abs(_actualDeltaY) < _deltaThreshold || sliderY > 0 || sliderY < -_maximumSlide) {
            if (!startMovement0()) {
                stopMovement();
                }
            }
        }
        else {
            _delta = (-_endSlider - sliderY) * BOUNCE;
            sliderY = sliderY + _delta;
			showScrollBar();
            if (Math.abs(_actualDeltaY) < _deltaThreshold) {
                sliderY = -_endSlider;
                stopMovement();
            }
        }
    }  
		
		
/**
 *  Stop scrolling movement
 */  
		private function stopMovement() : Void{trace("stopMovement");
            _moveTimer.stop();
            _delta = 0;
            hideScrollBar();
    }  


/**
 *  Show scroll bar
 */  
public function showScrollBar() : Void{
    if (!_scrollBarVisible) {
        touchCancel();
        _scrollBarVisible = true;
        dispatchEvent(new Event(STARTED));
        }
        drawScrollBar();
    }
    
    
    private function getSliderHeight() : Float{
        return (_scrollerHeight > 0) ? _scrollerHeight * _scale : _slider.getBounds(_slider).bottom;
    }  


/**
 *  Draw scroll bar
 */  
private function drawScrollBar() : Void{
    if (_noScroll) {
        return;
    }
    var sliderHeight : Float = getSliderHeight();
    _scrollBarLayer.graphics.clear();
    var barHeight : Float = (_height / sliderHeight) * _height;
    var barPosition : Float = (-sliderY / sliderHeight) * _height + 2 * SCROLLBAR_POSITION;
    if (barPosition < SCROLLBAR_POSITION) {
        barHeight += barPosition;
        barPosition = SCROLLBAR_POSITION;
        }
    if (barPosition + barHeight > _height - 2 * SCROLLBAR_POSITION) {
        barHeight -= barPosition + barHeight - _height + 2 * SCROLLBAR_POSITION;
        }
    if (barHeight > 0 && barPosition >= 0) {
        _scrollBarLayer.graphics.beginFill(_scrollBarColour);
        _scrollBarLayer.graphics.drawRoundRect(_width - SCROLLBAR_WIDTH - SCROLLBAR_POSITION, barPosition, SCROLLBAR_WIDTH, barHeight, SCROLLBAR_WIDTH);
        }
    }
    
    
/**
 *  Hide scroll bar
 */  
 public function hideScrollBar() : Void{
    dispatchEvent(new Event(STOPPED));
    if (_scrollBarVisible && (!_alwaysScrollBar || _noScroll)) {
        _scrollBarLayer.graphics.clear();
        _scrollBarVisible = false;
        }
    }  


/**
 *  Determine what has been clicked
 */  
private function doSearchHit() : Void{
    if (_pressButton == null) {
        _pressButton = searchHit(_slider);
        if (Std.is(_pressButton, UIInput)) {
            _pressButton = null;
            }
            else if (_pressButton != null && Std.is(_pressButton, InteractiveObject)) {
                _searchHitChild = searchHitChild(_pressButton);
                ((_searchHitChild != null) ? _searchHitChild : _pressButton).dispatchEvent(new MouseEvent(MouseEvent.MOUSE_DOWN));
                _dragTimer.start();
            }
        }
    }


private function pressButton(show : Bool = true) : DisplayObject{
    doSearchHit();
    return _pressButton;
    }  

/**
 *  Touch up handler
 */  


private function clickUp(event : TimerEvent) : Void{
    if (_pressButton != null && _distance < THRESHOLD) {
        _dragTimer.stop();
        _pressButton.dispatchEvent(new MouseEvent(MouseEvent.MOUSE_UP));
        _pressButton = null;
		stopMovement();
        }
    }

/**
 *  Return DisplayObject of what has been clicked
 */  

public function searchHit(container : Sprite = null) : DisplayObject{
    var found : DisplayObject = null;
	var i:Int = 0;
    while (i < container.numChildren && found == null){
        var item : Dynamic = container.getChildAt(container.numChildren - i - 1);
    //	if (item is UIForm && UIForm(item).clickable && UIForm(item).visible) {
            if (Std.is(item, IContainerUI) && cast((item), MadSprite).clickable && cast((item), MadSprite).isVisible) {
                found = searchHit(item);
            }
            else {
                if (item != null && inBounds(item, container.mouseX, container.mouseY) && !(Std.is(item, UILabel)) && !((Std.is(item, MadSprite)) && !cast((item), MadSprite).clickable)) {
                    found = item;
                }
            }
			i++;
        }
        return found;
    }
		
/**
 *  Return DisplayObject of what has been clicked
 */
		public function searchHitChild(item : DisplayObject = null) : DisplayObject{
			var found : DisplayObject = null;
			if (Std.is(item, Sprite) && cast((item), Sprite).mouseEnabled) {
				var i:Int = 0;
				while (i < cast((item), Sprite).numChildren && found == null) {
				found = searchHitChild(cast((item), Sprite).getChildAt(cast((item), Sprite).numChildren - i - 1));
				i++;
            	}
        	}
			var bounds : Rectangle = item.getBounds(item);
			if (found == null && inBoundsChild(item, item.mouseX - bounds.x, item.mouseY - bounds.y) && !((Std.is(item, Sprite)) && !cast((item), Sprite).mouseEnabled)) {
				found = item;
        	}
		return found;
    	}
		
/**
 *  Is the touch in bounds of a particular component?
 */
	private static function inBounds(item : DisplayObject, x : Float, y : Float) : Bool{
		return x > item.x - MARGIN && y > item.y - MARGIN && x < item.x + item.width + MARGIN && y < item.y + item.height + MARGIN;
    }

/**
 *  Is the touch in bounds of a particular component?
 */
	private static function inBoundsChild(item : DisplayObject, x : Float, y : Float) : Bool{
		return x > -MARGIN && y > -MARGIN && x < item.width + MARGIN && y < item.height + MARGIN;
    }

/**
 *  Clear scrolling form
 */  public function clear() : Void{
	 	cast((_slider), IContainerUI).clear();
    }

/**
 *  Search for component that matches id
 */

	public function findViewById(id : String, row : Int = -1, group : Int = -1) : DisplayObject{
		return cast((_slider), IContainerUI).findViewById(id, row, group);
    }


	private function get_outsideSlideRange() : Bool{
		return _sliderPosition >= 0 || _sliderPosition <= -_maximumSlide;
    }


	private function set_sliderY(value : Float) : Float{
		value = toPixelBoundaryDouble(this, 0, value).y;
		_actualDeltaY = value - _sliderPosition;
        _sliderPosition = value;
        if (_slider.visible) {
            _slider.y = _sliderPosition;
        }
		sliderMoved();
        return value;
    }
		
		
	private function get_sliderY() : Float{
		return _sliderPosition;
    }


private function set_sliderVisible(value : Bool) : Bool{trace("sliderVisible");
		if (value) {
			addListeners();
			hideScrollBar();
        }
        else {
			removeListeners();
        }
		_slider.y = _sliderPosition;
        _slider.visible = value;
		_moveTimer.stop();
		_touchTimer.stop();
        return value;
    }


	private function get_sliderVisible() : Bool{
		return _slider.visible;
    }

/**
 *  Set vertical scroll position
 */  
	private function set_scrollPositionY(value : Float) : Float{
		_sliderPosition = -value;
		if (value > _maximumSlide) {
			_sliderPosition = -_maximumSlide;
        }
		_slider.y = _sliderPosition = toPixelBoundaryDouble(this, 0, _sliderPosition).y;
		sliderMoved();
        return value;
    }


	private function sliderMoved() : Void{
      //	if (_scrollBarLayer) {
          //		_scrollBarLayer.graphics.clear();
              //		_scrollBarVisible = false;
                  //	}
    }


	private function get_scrollPositionY() : Float{
		return -sliderY;
    }

/**
 *  Set array of objects data
 */  
	private function set_data(values : Dynamic) : Dynamic{
		if (Std.is(_slider, UIForm)) {
			cast((_slider), UIForm).data = values;
			if (_autoLayout) {
				cast((_slider), UIForm).doLayout();
				adjustMaximumSlide();
			}
        }
        return values;
    }

/**
 *  Model
 */  
	private function get_model() : Model{
		return ((Std.is(_slider, UIForm))) ? cast((_slider), UIForm).model : null;
    }


	override public function destructor() : Void{
		super.destructor();
		removeListeners();
		_slider.removeEventListener(UIImageLoader.LOADED, doLayoutHandler);
		_touchTimer.stop();
		_moveTimer.stop();
		_dragTimer.stop();
		_clickTimer.stop();
		UI.clear(_slider);
    }
}