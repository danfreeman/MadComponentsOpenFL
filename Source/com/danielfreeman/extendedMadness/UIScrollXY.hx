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



import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.events.TimerEvent;
import openfl.utils.Timer;
import openfl.geom.Point;
import com.danielfreeman.madcomponents.Attributes;
import com.danielfreeman.madcomponents.UIScrollVertical;

/**
 *  MadComponents X-Y scrolling area
 * <pre>
 * &lt;scrollXY
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, …"
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    scrollH = "true|false"
 *    scrollV = "true|false"
 *    visible = "true|false"
 *    border = "true|false"
 *    autoLayout = "true|false"
 *    tapToScale = "NUMBER"
 *    auto = "true|false"
 *    lockSides = "true|false"
 *    alt = "true|false"
 * /&gt;
 * </pre>
 */
class UIScrollXY extends UIScrollVertical
{
    public var scrollEnabledX(never, set) : Bool;
    private var outsideSlideRangeX(get, never) : Bool;
    private var sliderX(get, set) : Float;
    public var scrollPositionX(get, set) : Float;
    public var scale(get, set) : Float;

    private static inline var STEPS : Int = 5;
    private static inline var ALT_FACTOR : Float = 4.0;
    private static inline var ALT_THRESHOLD : Float = 10.0;
    
    private var _maximumSlideX : Float;
    private var _deltaX : Float = 0;
    private var _endSliderX : Float = -1;
    private var _offsetX : Float = 0;
    private var _stopY : Bool;
    private var _tapToScale : Float = -1;
    private var _scaleTimer : Timer = new Timer(50, STEPS);
    private var _thisPoint : Point;
    private var _sliderPoint : Point;
    private var _oldScale : Float;
    private var _newScale : Float;
    private var _auto : Bool;
    private var _scrollBarThreshold : Float = UIScrollVertical.ABORT_THRESHOLD;
    private var _lockSides : Bool;
    private var _lockTopBottom : Bool;
    
    //	protected var _swipeTotalX:Number;
    //	protected var _swipeDurationX:Number;
    //	protected var _oldDeltaX:Number;
    private var _noSwipeCountX : Int = 0;
    private var _scrollEnabledX : Bool = true;
    private var _manhattan : Bool;
    
    /**
 *  XY scrolling container
 * <pre>
 * &lt;scrollXY
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
 *    auto = "true|false"
 *    alignV = "scroll|no scroll"
 *    tapToScale = "NUMBER"
 * /&gt;
 * </pre>
 */
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        super(screen, xml, attributes);
        _auto = xml.has.auto && xml.att.auto == "true";
        _lockSides = xml.has.lockSides && xml.att.lockSides == "true";
        _lockTopBottom = xml.has.lockTopBottom && xml.att.lockTopBottom == "true";
        _manhattan = xml.has.manhattan && xml.att.manhattan == "true";
        _scrollEnabledX = !xml.has.scrollH || xml.att.scrollH != "no scroll";
        if (xml.has.tapToScale) {
            _tapToScale = Std.parseFloat(xml.att.tapToScale);
            _slider.doubleClickEnabled = true;
            _slider.addEventListener(MouseEvent.DOUBLE_CLICK, doubleClick);
            _scaleTimer.addEventListener(TimerEvent.TIMER, scaleTimerHandler);
        }
    }
    
    /**
 *  Double click handler
 */
    private function doubleClick(event : MouseEvent) : Void{
        if (!_scaleTimer.running) 
            scaleAnimated(Math.abs(_scale - 1.0) < (1e-6) ? _tapToScale : 1.0, stage.mouseX, stage.mouseY);
    }
    
    /**
 *  Animated scale the scrolling content to value, with (x,y) centre of scaling
 *  (x,y) is relative to the global stage coordinate space.
 *  Note that value is absolute - not relative to current scale.
 */
    public function scaleAnimated(value : Float, x : Float, y : Float) : Void{
        _sliderPoint = _slider.globalToLocal(new Point(x, y));
        _thisPoint = this.globalToLocal(new Point(x, y));
        _oldScale = _scale;
        _newScale = value;
        _scaleTimer.reset();
        _scaleTimer.start();
    }
    
    /**
 *  Scale the scrolling content to value, with (x,y) centre of scaling.
 *  (x,y) is relative to the global stage coordinate space.
 *  Note that value is absolute - not relative to current scale.
 */
    public function scaleAtXY(value : Float, x : Float, y : Float) : Void{
        var sliderPoint : Point = _slider.globalToLocal(new Point(x, y));
        var thisPoint : Point = this.globalToLocal(new Point(x, y));
        doScaleAtXY(value, thisPoint, sliderPoint);
    }
    
    
    private function set_scrollEnabledX(value : Bool) : Bool{
        _scrollEnabledX = value;
        return value;
    }
    
    /**
 *  Scale the scrolling content
 */
    private function doScaleAtXY(value : Float, thisPoint : Point, sliderPoint : Point) : Void{
        _slider.x += thisPoint.x - (value * sliderPoint.x + _slider.x);
        if (_slider.x > 0) 
            _slider.x = 0;
        sliderY += thisPoint.y - (value * sliderPoint.y + sliderY);
        if (sliderY > 0) 
            sliderY = 0;
        scale = value;
    }
    
    /**
 *  Animate scaling
 */
    private function scaleTimerHandler(event : TimerEvent) : Void{
        doScaleAtXY(_oldScale + _scaleTimer.currentCount * (_newScale - _oldScale) / STEPS, _thisPoint, _sliderPoint);
    }
    
    
    private function adjustHorizontalSlide(sliderWidth : Float) : Void{
        _maximumSlideX = sliderWidth - _width + UIScrollVertical.PADDING * (_border == ("false") ? 0 : 1);
        if (_maximumSlideX < 0) 
            _maximumSlideX = 0;
        if (_slider.x < -_maximumSlideX) 
            _slider.x = -_maximumSlideX;
    }
    
    /**
 *  Adjust vertical and horizontal scroll range
 */
    override private function adjustMaximumSlide() : Void{
        super.adjustMaximumSlide();
        var sliderWidth : Float = _scrollerWidth > (0) ? _scrollerWidth * _scale : _slider.getBounds(this).right;
        adjustHorizontalSlide(sliderWidth);
        hideScrollBar();
    }
    
    
    override private function handleFlick() : Void{
        if (_touchTimer.currentCount <= UIScrollVertical.FLICK_THRESHOLD) {
            var divisor : Float = (((_touchTimer.currentCount == 0)) ? 1 : _touchTimer.currentCount);
            _delta = (mouseY - _startMouse.y) / divisor;
            _deltaX = (mouseX - _startMouse.x) / divisor;
        }
    }
    
    /**
 *  Touch move handler
 */
    override private function mouseMove(event : TimerEvent) : Void{
        if (_scaleTimer.running) {
            return;
        }
        
        if (!_noScroll) {
            
            if (_scrollEnabledX && (!_auto || _maximumSlideX > 0)) {
                var deltaX : Float = -sliderX;
                var xSlider : Float = sliderX + ((outsideSlideRangeX) ? _dampen : 1.0) * (mouseX - _lastMouse.x);
                if (_lockSides) {
                    xSlider = Math.max(Math.min(0, xSlider), -_maximumSlideX);
                }
                sliderX = xSlider;
                deltaX += xSlider;
                
                if (Math.abs(deltaX) > UIScrollVertical.DELTA_THRESHOLD) {
                    if (deltaX * _deltaX > 0) {
                        _deltaX = UIScrollVertical.SMOOTH * _deltaX + (1 - UIScrollVertical.SMOOTH) * deltaX;
                    }
                    else {
                        _deltaX = deltaX;
                    }
                    _noSwipeCountX = 0;
                }
                //				_distanceX += Math.abs(mouseY - _lastMouse.y); // + Math.abs(mouseX - _startMouse.x);
                //	_lastMouse.x = mouseX;
                //	_lastMouse.y = mouseY;
                //					if (deltaX * _swipeTotalX < 0 || Math.abs(deltaX) < DELTA_THRESHOLD && Math.abs(_oldDeltaX) < DELTA_THRESHOLD) {
                //						_swipeTotalX = 0;
                //						_swipeDurationX = 0;
                //					}
                //					_swipeTotalX += deltaX;
                //					_swipeDurationX++;
                //					_oldDeltaX = deltaX;
                //					_deltaX = SWIPE_FACTOR * _swipeTotalX / _swipeDurationX;
                else if (++_noSwipeCountX > UIScrollVertical.NO_SWIPE_THRESHOLD) {
                    _deltaX = 0;
                }
            }
            
            if (!_auto || _maximumSlide > 0) {
                //	_delta = -sliderY;
                //	sliderY += (outsideSlideRange ? _dampen : 1.0) * (mouseY - _lastMouse.y);
                //	_delta += sliderY;
                
                var delta : Float = -sliderY;
                var ySlider : Float = sliderY + ((outsideSlideRange) ? _dampen : 1.0) * (mouseY - _lastMouse.y);
                if (_lockTopBottom) {
                    ySlider = Math.max(Math.min(0, ySlider), -_maximumSlide);
                }
                sliderY = ySlider;
                delta += ySlider;  //sliderY;  
                
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
            }
            
            if (_manhattan) {
                justMoveVerticallyOrHorizontally();
            }
            
            _distance += Math.abs(mouseX - _lastMouse.x) + Math.abs(mouseY - _lastMouse.y);
        }
        _lastMouse.x = mouseX;
        _lastMouse.y = mouseY;
        if (!_noScroll && _scrollEnabledX && _distance > UIScrollVertical.ABORT_THRESHOLD) {
            showScrollBar();
        }
        else if (_touchTimer.currentCount == UIScrollVertical.MAXIMUM_TICKS && _classic && _distance < UIScrollVertical.THRESHOLD) {
            pressButton();
        }
        else if (_touchTimer.currentCount == UIScrollVertical.TOUCH_DELAY && !_classic && Math.abs(_delta) <= UIScrollVertical.DELTA_THRESHOLD) {
            pressButton();
        }
    }
    
    
    private function justMoveVerticallyOrHorizontally() : Void{
        if (Math.abs(_delta) > ALT_FACTOR * Math.abs(_deltaX) && Math.abs(_delta) > ALT_THRESHOLD) {
            _deltaX = 0;
        }
        else if (Math.abs(_deltaX) > ALT_FACTOR * Math.abs(_delta) && Math.abs(_deltaX) > ALT_THRESHOLD) {
            _delta = 0;
        }
    }
    
    
    private function get_outsideSlideRangeX() : Bool{
        return _slider.x >= 0 || _slider.x <= -_maximumSlideX;
    }
    
    /**
 *  Start scrolling movement
 */
    override private function startMovement() : Void{
        _endSliderX = UIScrollVertical.FINISHED - 1;
        super.startMovement();
    }
    
    
    override private function startMovement0() : Bool{
        var result : Bool = false;
        if (_slider.y > _offset) {
            _endSlider = -_offset;
            result = true;
        }
        else if (_slider.y < -_maximumSlide) {
            _endSlider = _maximumSlide;
            result = result || true;
        }
        if (_slider.x > _offsetX) {
            _endSliderX = -_offsetX;
            result = result || true;
        }
        else if (_slider.x < -_maximumSlideX) {
            _endSliderX = _maximumSlideX;
            result = result || true;
        }
        return result;
    }
    
    /**
 *  Stop scrolling movement
 */
    override private function stopMovement() : Void{
        _stopY = true;
    }
    
    /**
 *  Animate scrolling movement
 */
    override private function movement(event : TimerEvent) : Void{
        if (_scaleTimer.running) {
            return;
        }
        if (!_noScroll) {
            _stopY = false;
            var stopX : Bool = false;
            super.movement(event);
            if (_endSliderX < UIScrollVertical.FINISHED) {
                _deltaX *= deltaToDecay(_deltaX);
                sliderX = sliderX + _deltaX;
                if (_distance > UIScrollVertical.THRESHOLD) {
                    showScrollBar();
                }
                if (Math.abs(_deltaX) < _deltaThreshold || sliderX > 0 || sliderX < -_maximumSlideX) {
                    if (!startMovement0()) 
                        stopX = true;
                }
            }
            else {
                _deltaX = (-_endSliderX - sliderX) * UIScrollVertical.BOUNCE;
                sliderX = sliderX + _deltaX;
                showScrollBar();
                if (Math.abs(_deltaX) < _deltaThreshold) {
                    stopX = true;
                    sliderX = -_endSliderX;
                }
            }
            if (stopX && _stopY) {
                super.stopMovement();
            }
        }
    }
    
    
    private function getSliderWidth() : Float{
        return _scrollerWidth > (0) ? _scrollerWidth * _scale : _slider.getBounds(this).right;
    }
    
    /**
 *  Show scroll bar
 */
    override public function showScrollBar() : Void{
        if (!_auto || _maximumSlide > 0) {
            super.showScrollBar();
        }
        else {
            _scrollBarLayer.graphics.clear();
            _scrollBarVisible = true;
        }
        if (!_auto || _maximumSlideX > 0) {
            var sliderWidth : Float = getSliderWidth();
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
            }
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
        if (value > _maximumSlideX) {
            _slider.x = -_maximumSlideX;
        }
        return value;
    }
    
    
    private function get_scrollPositionX() : Float{
        return -_slider.x;
    }
    
    /**
 *  Set scale
 */
    private function set_scale(value : Float) : Float{
        _scale = _slider.scaleX = _slider.scaleY = value;
        adjustMaximumSlide();
        return value;
    }
    
    
    private function get_scale() : Float{
        return _scale;
    }
    
    
    override public function destructor() : Void{
        removeEventListener(MouseEvent.DOUBLE_CLICK, doubleClick);
        _scaleTimer.removeEventListener(TimerEvent.TIMER, scaleTimerHandler);
    }
}
