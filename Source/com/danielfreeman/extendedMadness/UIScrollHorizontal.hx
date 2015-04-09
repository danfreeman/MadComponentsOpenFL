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
import com.danielfreeman.madcomponents.Attributes;
import com.danielfreeman.madcomponents.UIScrollVertical;

/**
 *  MadComponents horizontal scrolling area
 * <pre>
 * &lt;scrollHorizontal
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
 * /&gt;
 * </pre>
 */
class UIScrollHorizontal extends UIScrollVertical
{
    private var outsideSlideRangeX(get, never) : Bool;
    private var sliderX(get, set) : Float;
    public var scrollPositionX(get, set) : Float;

    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        super(screen, xml, attributes);
    }
    
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
        var sliderWidth : Float = _scrollerWidth > (0) ? _scrollerWidth * _scale : _slider.width;
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
