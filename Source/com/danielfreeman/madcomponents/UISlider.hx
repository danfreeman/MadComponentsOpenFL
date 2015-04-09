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


import openfl.display.GradientType;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.geom.Matrix;

/**
 * The slider value has changed
 */
@:meta(Event(name="change",type="flash.events.Event"))



/**
 *  MadComponent slider
 * <pre>
 * &lt;slider
 *   id = "IDENTIFIER"
 *   background = "#rrggbb, #rrggbb, ..."
 *   alignH = "left|right|centre|fill"
 *   alignV = "top|bottom|centre"
 *   visible = "true|false"
 *   clickable = "true|false"
 *   width = "NUMBER"
 *   alt = "true|false"
 *   value = "NUMBER"
 *   curve = "NUMBER"
 * /&gt;
 * </pre>
 */
class UISlider extends MadSprite implements IComponentUI
{
    public var value(get, set) : Float;
    public var fixwidth(never, set) : Float;

    private static inline var WIDTH : Float = 120.0;
    private static inline var RADIUS : Float = 14.0;
    private static inline var RADIUS7 : Float = 16.0;
    private static inline var ALT_RADIUS : Float = 10.0;
    private static inline var KNOB_COLOUR : Int = 0xDDDDDD;
    private static inline var KNOB_COLOUR7 : Int = 0xFFFFFF;
    private static inline var HIGHLIGHT_COLOUR : Int = 0x3333CC;
    private static inline var SLIDER_COLOUR : Int = 0xAAAAAA;
    private static inline var SLIDER_HEIGHT : Float = 8.0;
    private static inline var SLIDER_HEIGHT7 : Float = 3;
    private static inline var EXTRA : Float = 30.0;
    
    private static inline var SHADOW_COLOUR : Int = 0x000000;
    private static inline var SHADOW_ALPHA : Float = 0.1;
    private static inline var SHADOW_OFFSET : Float = 2;
    
    private var _knob : Sprite;
    private var _sliderColour : Int;
    private var _highlightColour : Int;
    private var _knobColour : Int;
    private var _width : Float = WIDTH;
    private var _value : Float = 0.5;
    private var _radius : Float;
    private var _sliderHeight : Float = SLIDER_HEIGHT;
    private var _curve : Float = SLIDER_HEIGHT;
    private var _lastPosition : Float;
    private var _style7 : Bool;
    
    
    public function new(screen : Sprite, xx : Float, yy : Float, colours : Array<Int> = null, alt : Bool = false, style7 : Bool = false)
    {
        super(screen);
        x = xx;y = yy;
        
        _style7 = style7;
        _radius = (alt) ? ALT_RADIUS : ((style7) ? RADIUS7 : RADIUS);
        
        if (colours == null) {
            colours = [];
        }
        
        _highlightColour = ((colours.length > 0)) ? colours[0] : HIGHLIGHT_COLOUR;
        _knobColour = ((colours.length > 1)) ? colours[1] : ((style7) ? KNOB_COLOUR7 : KNOB_COLOUR);
        _sliderColour = ((colours.length > 2)) ? colours[2] : SLIDER_COLOUR;
        _sliderHeight = (style7) ? SLIDER_HEIGHT7 : SLIDER_HEIGHT;
        
        createKnob();
        value = _value;
        _knob.buttonMode = _knob.useHandCursor = true;
        drawComponent();
    }
    
    
    private function mouseDown(event : MouseEvent) : Void{
        _lastPosition = _knob.x;
        changePosition(mouseX);
        stage.addEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
        stage.addEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
    
    
    private function changePosition(value : Float) : Void{
        _knob.x = value;
        if (_knob.x < _radius) {
            _knob.x = _radius;
        }
        else if (_knob.x > _width - _radius) {
            _knob.x = _width - _radius;
        }
        _value = (_knob.x - _radius) / (_width - 2 * _radius);
        drawComponent();
        dispatchEvent(new Event(Event.CHANGE));
    }
    
    
    private function mouseMove(event : MouseEvent) : Void{
        changePosition(mouseX);
    }
    
    
    override public function touchCancel() : Void{
        changePosition(_lastPosition);
        stage.removeEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
    
    
    private function mouseUp(event : MouseEvent) : Void{
        stage.removeEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        dispatchEvent(new Event(Event.COMPLETE));
    }
    
    
    private function createKnob() : Void{
        addChild(_knob = new Sprite());
        if (_style7) {
            drawIos7Knob();
        }
        else {
            drawKnob();
        }
        _knob.y = _radius;
        _knob.buttonMode = _knob.useHandCursor = true;
        addEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
    }
    
    
    private function drawIos7Knob() : Void{
        var matr : Matrix = new Matrix();
        matr.createGradientBox(_radius * 2 + 2, _radius * 2 + 2, Math.PI / 2, 0, -_radius - 1);
        _knob.graphics.beginGradientFill(GradientType.LINEAR, [SHADOW_COLOUR, SHADOW_COLOUR], [SHADOW_ALPHA, 0.05], [0x00, 0xff], matr);
        _knob.graphics.drawCircle(0, SHADOW_OFFSET - 1, _radius + 1);
        _knob.graphics.beginFill(Colour.darken(_knobColour));
        _knob.graphics.drawCircle(0, -1, _radius);
        _knob.graphics.beginFill(_knobColour);
        _knob.graphics.drawCircle(0, -1, _radius - 0.5);
    }
    
    
    private function drawKnob() : Void{
        var matr : Matrix = new Matrix();
        matr.createGradientBox(_radius * 2, _radius * 2, Math.PI / 2, 0, -_radius);
        _knob.graphics.beginFill(Colour.darken(_knobColour));
        _knob.graphics.drawCircle(0.3, 0.3, _radius + 1);
        _knob.graphics.beginGradientFill(GradientType.LINEAR, [Colour.lighten(_knobColour), Colour.darken(_knobColour)], [1.0, 1.0], [0x00, 0xff], matr);
        _knob.graphics.drawCircle(0, 0, _radius);
        _knob.graphics.beginGradientFill(GradientType.LINEAR, [Colour.darken(_knobColour), _knobColour, Colour.lighten(_knobColour, 32)], [1.0, 1.0, 1.0], [0x00, 0x66, 0xFF], matr);
        _knob.graphics.drawCircle(0, 0, _radius - 1);
    }
    
    
    public function drawComponent() : Void{
        var matr : Matrix = new Matrix();
        graphics.clear();
        graphics.beginFill(0, 0);
        graphics.drawRect(-EXTRA, 0, _width + 2 * EXTRA, 2 * _radius);
        matr.createGradientBox(_width, _sliderHeight, Math.PI / 2, 0, _radius - _sliderHeight / 2);
        graphics.beginGradientFill(GradientType.LINEAR, [Colour.darken(_sliderColour, -64), _sliderColour, Colour.lighten(_sliderColour, 64), Colour.lighten(_sliderColour, 64)], [1.0, 1.0, 1.0, 1.0], [0x00, 0x00, 0x80, 0xff], matr);
        graphics.drawRoundRect(0, _radius - _sliderHeight / 2, _width, _sliderHeight, _sliderHeight);
        graphics.beginGradientFill(GradientType.LINEAR, [Colour.darken(_highlightColour, -64), _highlightColour, Colour.lighten(_highlightColour, 64), Colour.lighten(_highlightColour, 64)], [1.0, 1.0, 1.0, 1.0], [0x00, 0x00, 0x80, 0xff], matr);
        graphics.drawRoundRect(0, _radius - _sliderHeight / 2, _knob.x + _curve / 2, _sliderHeight, _sliderHeight);
    }
    
    /**
 *  Set value of slider, between "0" and "1"
 */
    override private function set_text(txt : String) : String{
        value = Std.parseFloat(txt);
        return txt;
    }
    
    /**
 *  Set value of slider, a number between 0 and 1
 */
    private function set_value(valuu : Float) : Float{
        _value = valuu;
        _knob.x = _radius + valuu * (_width - 2 * _radius);
        drawComponent();
        return valuu;
    }
    
    /**
 *  Current slider calue between 0 and 1
 */
    private function get_value() : Float{
        return _value;
    }
    
    /**
 *  Set width of slider
 */
    private function set_fixwidth(valuu : Float) : Float{
        _width = valuu;
        value = _value;
        return valuu;
    }
    
    
    override private function get_theWidth() : Float{
        return _width;
    }
    
    
    override public function destructor() : Void{
        super.destructor();
        _knob.removeEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
        stage.removeEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
}
