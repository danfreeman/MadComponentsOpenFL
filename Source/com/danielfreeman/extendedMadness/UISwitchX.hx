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
import openfl.display.GradientType;
import openfl.display.Shape;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.events.TimerEvent;
import openfl.geom.Matrix;
import openfl.text.TextFormat;
import openfl.utils.Timer;

/**
 * The switch value has changed
 */
@:meta(Event(name="change",type="flash.events.Event"))



/**
 *  MadComponents switch
 * <pre>
 * &lt;slider
 *   id = "IDENTIFIER"
 *   background = "#rrggbb, #rrggbb, ..."
 *   alignH = "left|right|centre|fill"
 *   alignV = "top|bottom|centre"
 *   visible = "true|false"
 *   width = "NUMBER"
 *   alt = "true|false"
 *   state = "true|false"
 *   clickable = "true|false"
 * /&gt;
 * </pre>
 */
class UISwitchX extends MadSprite implements IComponentUI
{
    public var state(get, set) : Bool;
//    public var text(get, set) : String;

    
    private static inline var DELTA : Int = 40;
    private static inline var MOVE_X : Float = 10.0;
    private static inline var WIDTH : Float = 90.0;
    private static inline var HEIGHT : Float = 30.0;
    private static inline var BUTTON_WIDTH : Float = 45.0;
    private static inline var BUTTON_COLOUR : Int = 0xF9F9F9;
    private static inline var OUTLINE : Int = 0xAAAAAA;
    private static inline var OFF_COLOUR : Int = 0x333333;
    private static inline var CURVE : Float = 8.0;
    private static inline var ALT_CURVE : Float = 32.0;
    private static inline var THRESHOLD : Float = 10.0;
    private static inline var EXTRA : Float = 30.0;
    
    private var _layer : Sprite;
    private var _button : Sprite;
    private var _over : Shape;
    private var _colour : Int;
    private var _onLabel : UILabel;
    private var _offLabel : UILabel;
    private var _start : Float;
    private var _move : Float;
    private var _delta : Float;
    private var _timer : Timer = new Timer(DELTA);
    private var _state : Bool = false;
    private var _formatOn : TextFormat = new TextFormat("Tahoma", 15, 0x333333);
    private var _formatOff : TextFormat = new TextFormat("Tahoma", 15, 0xFFFFFF);
    private var _offColour : Int = OFF_COLOUR;
    private var _buttonColour : Int = BUTTON_COLOUR;
    private var _outlineColour : Int = OUTLINE;
    private var _curve : Float;
    private var _extra : Float = 0;
    private var _lastPosition : Float;
    private var _labels : Array<Dynamic>;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        super(screen, attributes);
        
        _extra = (xml.has.alt && xml.att.alt == "true") ? 8 : 0;
        _curve = (xml.has.alt && xml.att.alt == "true") ? ALT_CURVE : CURVE;
        
        _colour = attributes.colour;
        var colours : Array<Int> = attributes.backgroundColours;
        if (colours != null) {
            if (colours.length > 0) 
                _colour = colours[0];
            if (colours.length > 1) 
                _offColour = colours[1];
            if (colours.length > 2) 
                _formatOn.color = _formatOff.color = colours[2];
            if (colours.length > 3) 
                _formatOff.color = colours[3];
            if (colours.length > 4) 
                _buttonColour = colours[4];
            if (colours.length > 5) 
                _outlineColour = colours[5];
        }
        var labels : Array<Dynamic> = Std.string(xml).split(",");
        _labels = (labels.length > 1) ? labels : ["ON", "OFF"];
        
        initialiseButton(_labels[0], _labels[1]);
        addEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
        _timer.addEventListener(TimerEvent.TIMER, slide);
        
        var mask : Sprite = new Sprite();
        mask.graphics.beginFill(0);
        mask.graphics.drawRoundRect(0, 0, WIDTH, HEIGHT, _curve);
        _layer.addChild(_layer.mask = mask);
        buttonMode = useHandCursor = true;
        if (xml.has.state && xml.att.state == "true") {
            state = true;
        }
    }
    
    /**
 *  Set the state of the switch
 */
    private function set_state(value : Bool) : Bool{
        _state = value;
        _button.x = (_state) ? (WIDTH - BUTTON_WIDTH + _extra) : 0;
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
    
    /**
 *  Get the state of the switch as a boolean
 */
    private function get_state() : Bool{
        return _state;
    }
    
    /**
 *  Create the switch
 */
    private function initialiseButton(onText : String, offText : String) : Void{
        addChild(_layer = new Sprite());
        _layer.addChild(_button = new Sprite());
        addChild(_over = new Shape());
        _over.graphics.clear();
        _over.graphics.beginFill(0, 0);
        _over.graphics.drawRect(-EXTRA, 0, WIDTH + 2 * EXTRA, HEIGHT);
        _over.graphics.endFill();
        _over.graphics.lineStyle(2, OUTLINE);
        _over.graphics.drawRoundRect(0, 0, WIDTH, HEIGHT, _curve);
        drawButton();
        
        _button.addChild(_onLabel = new UILabel(this, 0, 1, onText, _formatOn));
        _onLabel.x = (WIDTH - BUTTON_WIDTH - _onLabel.width) / 2 - WIDTH + BUTTON_WIDTH;
        _button.addChild(_offLabel = new UILabel(this, WIDTH - BUTTON_WIDTH, 1, offText, _formatOff));
        _offLabel.x = BUTTON_WIDTH + (WIDTH - BUTTON_WIDTH - _offLabel.width) / 2 - _extra;
        _onLabel.y = _offLabel.y = (HEIGHT - _onLabel.height) / 2;
    }
    
    /**
 *  Draw the sliding part of the switch
 */
    private function drawButton(state : Bool = false) : Void{
        
        
        _button.graphics.clear();
        var matr : Matrix = new Matrix();
        matr.createGradientBox(WIDTH + EXTRA, HEIGHT, Math.PI / 2, 0, 0);
        var gradientOn : Array<UInt> = [Colour.darken(_colour, -16), Colour.lighten(_colour, 64), Colour.lighten(_colour, 64), Colour.lighten(_colour, 32)];
        _button.graphics.beginGradientFill(GradientType.LINEAR, gradientOn, [1.0, 1.0, 1.0, 1.0], [0x00, 0x40, 0x80, 0xff], matr);
        _button.graphics.drawRect(-WIDTH + BUTTON_WIDTH - _extra, 1, WIDTH - BUTTON_WIDTH + 2 + 2 * _extra, HEIGHT - 2);
        
        var gradientOff : Array<UInt> = [Colour.darken(_offColour, -16), Colour.darken(_offColour, -16), Colour.lighten(_offColour, 64), Colour.lighten(_offColour, 32)];
        _button.graphics.beginGradientFill(GradientType.LINEAR, gradientOff, [1.0, 1.0, 1.0, 1.0], [0x00, 0x40, 0x80, 0xff], matr);
        _button.graphics.drawRect(BUTTON_WIDTH - 2 - 2 * _extra, 1, WIDTH - BUTTON_WIDTH + 2 + 2 * _extra, HEIGHT - 2);
        
        matr.createGradientBox(BUTTON_WIDTH, HEIGHT, Math.PI / 2, 0, 0);
        var buttonGradient : Array<UInt> = (state) ? [Colour.darken(_buttonColour), Colour.darken(_buttonColour, -32), Colour.lighten(_buttonColour, 32)] : [_buttonColour, Colour.darken(_buttonColour, -32), Colour.lighten(_buttonColour, 32)];
        
        _button.graphics.beginFill(OUTLINE);
        _button.graphics.drawRoundRect(0, 0, BUTTON_WIDTH - _curve / 4 + 2, HEIGHT, _curve);
        _button.graphics.beginGradientFill(GradientType.LINEAR, buttonGradient, [1.0, 1.0, 1.0], [0x00, 0x80, 0xff], matr);
        _button.graphics.drawRoundRect(1, 1, BUTTON_WIDTH - 2 - _curve / 4 + 2, HEIGHT - 2, _curve);
    }
    
    
    private function mouseDown(event : MouseEvent) : Void{
        _lastPosition = _button.x;
        stage.addEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
        stage.addEventListener(MouseEvent.MOUSE_UP, mouseUp);
        _start = mouseX - _button.x;
        _delta = 0;
        drawButton(true);
    }
    
    
    override public function touchCancel() : Void{
        _button.x = _lastPosition;
        drawButton(false);
        stage.removeEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
    
    
    private function mouseMove(event : MouseEvent) : Void{
        var position : Float = mouseX - _start;
        if (position < 0) 
            position = 0
        else if (position > WIDTH - BUTTON_WIDTH + _extra) 
            position = WIDTH - BUTTON_WIDTH + _extra;
        _delta += Math.abs(_button.x - position);
        _button.x = position;
    }
    
    
    private function mouseUp(event : MouseEvent) : Void{
        stage.removeEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        drawButton(false);
        if (_delta < THRESHOLD) 
            _move = (_state) ? -MOVE_X : MOVE_X
        else 
        _move = ((_button.x < (WIDTH - BUTTON_WIDTH + _extra) / 2)) ? -MOVE_X : MOVE_X;
        if (mouseX > 0 && mouseX < WIDTH && mouseY > 0 && mouseY < HEIGHT || _delta > 0) {
            _timer.reset();
            _timer.start();
        }
    }
    
    /**
 *  Animate switch movement
 */
    private function slide(event : TimerEvent) : Void{
        _button.x += _move;
        if (_button.x <= 0) {
            _button.x = 0;
            _state = false;
            stop();
        }
        else if (_button.x >= WIDTH - BUTTON_WIDTH) {
            _button.x = WIDTH - BUTTON_WIDTH + _extra;
            _state = true;
            stop();
        }
    }
    
    
    override private function get_theWidth() : Float{
        return WIDTH;
    }
    
    /**
 *  Stop switch movement
 */
    private function stop() : Void{
        _timer.stop();
        dispatchEvent(new Event(Event.CHANGE));
    }
    
    
    override public function destructor() : Void{
        removeEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
        stage.removeEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        _timer.removeEventListener(TimerEvent.TIMER, slide);
    }
}

