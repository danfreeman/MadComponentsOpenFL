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


import openfl.geom.Matrix;
import openfl.display.GradientType;
import openfl.events.Event;
import openfl.display.Shape;
import openfl.events.TimerEvent;
import openfl.utils.Timer;
import openfl.events.MouseEvent;
import com.danielfreeman.madcomponents.*;

import openfl.display.DisplayObject;
import openfl.display.Sprite;

class UISwitch extends MadSprite implements IComponentUI
{
    public var state(get, set) : Bool;
//    public var text(get, set) : String;

    
    private static inline var ON_COLOUR : Int = 0x4CD263;
    private static inline var OFF_COLOUR : Int = 0xFFFFFF;
    private static inline var OUTLINE_COLOUR : Int = 0xDDDDDD;
    private static inline var SHADOW_COLOUR : Int = 0x000000;
    private static inline var SHADOW_ALPHA : Float = 0.1;
    private static inline var SHADOW_OFFSET : Float = 2;
    private static inline var WIDTH : Float = 52.0;
    private static inline var HEIGHT : Float = 31.0;
    private static inline var RADIUS : Float = 14.0;
    private static inline var STEPS : Int = 8;
    private static inline var DELTA : Float = 0.1;
    
    private var _onColour : Int = ON_COLOUR;
    private var _offColour : Int = OFF_COLOUR;
    private var _outlineColour : Int = OUTLINE_COLOUR;
    private var _shadowColour : Int = SHADOW_COLOUR;
    private var _sliderColour : Int = OFF_COLOUR;
    private var _state : Bool = false;
    private var _position : Float = 0;
    private var _timer : Timer = new Timer(32, STEPS);
    private var _deltaPosition : Float;
    private var _ready : Bool = false;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        super(screen, attributes);
        if (xml.has.onColour) {
            _onColour = UI.toColourValue(xml.att.onColour);
        }
        if (xml.has.offColour) {
            _offColour = UI.toColourValue(xml.att.offColour);
        }
        if (xml.has.outlineColour) {
            _outlineColour = UI.toColourValue(xml.att.outlineColour);
        }
        if (xml.has.shadowColour) {
            _shadowColour = UI.toColourValue(xml.att.shadowColour);
        }
        if (xml.has.sliderColour) {
            _sliderColour = UI.toColourValue(xml.att.sliderColour);
        }
        _state = xml.has.state && xml.att.state == "true";
        addEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
        _timer.addEventListener(TimerEvent.TIMER, animate);
        drawComponent();
    }
    
    
    private function animate(event : TimerEvent) : Void{
        var timer : Timer = cast((event.currentTarget), Timer);
        var factor : Float = (timer.currentCount + 1) / STEPS;
        var position : Float = (1 - factor) * _position + factor * ((_state) ? 1.0 : 0.0);
        drawSwitch(position);
    }
    
    
    private function mouseDown(event : MouseEvent) : Void{
        _ready = true;
        removeEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        stage.addEventListener(MouseEvent.MOUSE_UP, mouseUp);
        stage.removeEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
        stage.addEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
        _deltaPosition = 0;
    }
    
    
    private function mouseUp(event : MouseEvent) : Void{
        if (_ready) {
            removeEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
            addEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
            stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
            stage.removeEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
            if (_deltaPosition > RADIUS) {
                _state = _position > 0.5;
            }
            else {
                _state = !_state;
            }
            _timer.reset();
            _timer.start();
            dispatchEvent(new Event(Event.CHANGE));
            _ready = false;
        }
    }
    
    
    private function mouseMove(event : MouseEvent) : Void{
        var position : Float = Math.min(1.0, Math.max(0, (mouseX - RADIUS) / (WIDTH - 2.0 * RADIUS)));
        if (Math.abs(position - _position) > DELTA) {
            position = _position + (((position > _position)) ? DELTA : -DELTA);
        }
        _deltaPosition += position;
        drawSwitch(position);
    }
    
    
    private function interpolate(colourA : Int, colourB : Int, factor : Float) : Int{
        return (Math.round((1 - factor) * (colourA & 0xFF0000) + factor * (colourB & 0xFF0000)) & 0xFF0000) +
        (Math.round((1 - factor) * (colourA & 0x00FF00) + factor * (colourB & 0x00FF00)) & 0x00FF00) +
        (Math.round((1 - factor) * (colourA & 0x0000FF) + factor * (colourB & 0x0000FF)) & 0x0000FF);
    }
    
    
    private function drawSwitch(position : Float) : Void{
        var colour : Int = interpolate(_outlineColour, _onColour, position);
        
        graphics.clear();
        graphics.beginFill(colour);
        graphics.drawRoundRect(0, 0, WIDTH, HEIGHT, HEIGHT, HEIGHT);
        graphics.endFill();
        graphics.beginFill(_offColour);
        var width : Float = (1 - position) * (WIDTH - 3.0);
        var height : Float = (1 - position) * (HEIGHT - 3.0);
        graphics.drawRoundRect((WIDTH - width) / 2, (HEIGHT - height) / 2, width, height, HEIGHT - 2.0, HEIGHT - 2.0);
        graphics.endFill();
        
        var sliderPosition : Float = position * (WIDTH - 2 - 2 * RADIUS) + 1;
        
        //	graphics.beginFill(_shadowColour, SHADOW_ALPHA);
        var matr : Matrix = new Matrix();
        matr.createGradientBox(RADIUS * 2 + 2, RADIUS * 2 + 2, Math.PI / 2, 0, -RADIUS - 1);
        graphics.beginGradientFill(GradientType.LINEAR, [SHADOW_COLOUR, SHADOW_COLOUR], [SHADOW_ALPHA, 0.05], [0x00, 0xff], matr);
        
        graphics.drawCircle(sliderPosition + RADIUS, 1 + RADIUS + 1 + SHADOW_OFFSET, RADIUS + 1);
        graphics.endFill();
        graphics.beginFill(_sliderColour);
        graphics.lineStyle(0, Colour.darken(colour, -32));
        graphics.drawCircle(sliderPosition + RADIUS, 1 + RADIUS, RADIUS);
        graphics.endFill();
        
        _position = position;
    }
    
    
    private function get_state() : Bool{
        return _state;
    }
    
    
    private function set_state(value : Bool) : Bool{
        drawSwitch((value) ? 1.0 : 0.0);
        _state = value;
        return value;
    }
    
/**
 *  Set the state of the switch "on" or "off"
 */
    override private function set_text(value : String) : String{
        state = value == "on";
        return value;
    }
    
/**
 *  Get the state of the switch "on" or "off"
 */
    override private function get_text() : String{
        return (_state) ? "on" : "off";
    }
    
    
    public function drawComponent() : Void{
        drawSwitch((_state) ? 1.0 : 0.0);
    }
    
    
    override public function destructor() : Void{
        super.destructor();
        removeEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        stage.removeEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
        _timer.removeEventListener(TimerEvent.TIMER, animate);
    }
}
