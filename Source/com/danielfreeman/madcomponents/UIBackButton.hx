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

import com.danielfreeman.madcomponents.UILabel;


import openfl.events.MouseEvent;
import openfl.display.GradientType;
import openfl.display.Sprite;
import openfl.geom.Matrix;
import openfl.geom.Rectangle;
import openfl.text.TextFormat;

/**
 * Arrow button, as used in the navigation bar (for both forward and back buttons)
 */
class UIBackButton extends Sprite
{
    public var arrow(never, set) : Bool;
    public var text(get, set) : String;
    public var textFormat(never, set) : TextFormat;
    public var colour(never, set) : Int;
    public var fixwidth(never, set) : Float;

    
    private static var FORMAT : TextFormat = new TextFormat("Arial", 14, 0xFFFFFF);
    private static inline var SENSOR_HEIGHT : Float = 46.0;
    private static inline var HEIGHT : Float = 33.0;
    private static inline var ARROW : Float = 10.0;
    private static inline var CURVE : Float = 5.0;
    private static inline var X : Float = 12.0;
    private static inline var Y : Float = 12;
    
    public static inline var ADJUSTMENT : Float = 0.0;
    
    private var _label : UILabel;
    private var _colour : Int = 0x0B79EC;
    private var _forward : Bool;
    private var _width : Float = -1;
    private var _height : Float = HEIGHT;
    private var _classic : Bool;
    private var _arrow : Bool;
    
    
    public function new(screen : Sprite, xx : Float, yy : Float, text : String, colour : Int, forward : Bool = false, classic : Bool = true, arrow : Bool = true)
    {
        super();
        screen.addChild(this);
        _forward = forward;
        if (classic) {
            _colour = colour;
        }
        _label = new UILabel(this, X, Y, "", FORMAT);
        _classic = classic;
        _arrow = arrow;
        x = xx;y = yy;
        this.text = text;
        buttonMode = useHandCursor = true;
        addEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
    }
    
    
    private function set_arrow(value : Bool) : Bool{
        _arrow = value;
        synthButton(_colour, _label.width + 20);
        return value;
    }
    
    /**
 * Set the text label of the button
 */
    private function set_text(value : String) : String{
        _label.xmlText = (_classic) ? value : "<font color=\"#" + Std.string(_colour) + "\">" + value + "</font>";
        synthButton(_colour, _label.width + 20);
        return value;
    }
    
    
    private function get_text() : String{
        return _label.text;
    }
    
    /**
 * Set the text format of the button label
 */
    private function set_textFormat(value : TextFormat) : TextFormat{
        _label.defaultTextFormat = value;
        _label.setTextFormat(value);
        return value;
    }
    
    /**
 * Set colour of the button
 */
    private function set_colour(value : Int) : Int{
        _colour = value;
        synthButton(_colour, _label.width + 20);
        return value;
    }
    
    
    private function set_fixwidth(value : Float) : Float{
        _width = value;
        synthButton(_colour, _label.width + 20);
        return value;
    }
    
    
    private function mouseDown(event : MouseEvent) : Void{
        stage.addEventListener(MouseEvent.MOUSE_UP, mouseUp);
        if (!_classic) {
            _label.setTextFormat(new TextFormat(null, null, Colour.lighten(_colour, 32)));
        }
        synthButton(Colour.lighten(_colour, 32), _label.width + 20);
    }
    
    
    private function mouseUp(event : MouseEvent) : Void{
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        if (!_classic) {
            _label.setTextFormat(new TextFormat(null, null, _colour));
        }
        synthButton(_colour, _label.width + 20);
    }
    
    
    private function makeIos7Button(colour : Int) : Void{
        graphics.lineStyle(3.0, colour);
        if (_arrow) {
            var xx : Float = (_forward) ? _label.width + 24 : 8.0;
            graphics.moveTo(xx + ((_forward) ? -1.0 : 1.0) * ARROW, SENSOR_HEIGHT / 2 - ARROW - 1);
            graphics.lineTo(xx, SENSOR_HEIGHT / 2 - 1);
            graphics.lineTo(xx + ((_forward) ? -1.0 : 1.0) * ARROW, SENSOR_HEIGHT / 2 + ARROW - 1);
            _label.x = (_forward) ? 8 : 24;
        }
        else {
            _label.x = ((_width > 0)) ? (_width - _label.width) / 2 : X;
        }
    }
    
    /**
 * Render the button
 */
    private function synthButton(colour : Int, width : Float) : Void{
        graphics.clear();
        graphics.beginFill(0, 0);
        graphics.drawRect(0, 0, ((_width > 0)) ? _width : _label.width + 30, SENSOR_HEIGHT);
        graphics.endFill();
        if (_classic) {
            var matr : Matrix = new Matrix();
            matr.createGradientBox(width, HEIGHT, Math.PI / 2, 0, 0);
            graphics.beginFill(Colour.darken(colour));
            var buttonWidth : Float = Math.round(width / 8) * 8 + 2;
            var x : Float = (_forward) ? 0.0 : 2.0;
            buttonShape(x, 6.0, buttonWidth, _height);
            var gradient : Array<UInt> = [Colour.lighten(colour), Colour.darken(colour), Colour.darken(colour)];
            graphics.beginGradientFill(GradientType.LINEAR, gradient, [1.0, 1.0, 1.0], [0x00, 0x80, 0xff], matr);
            buttonShape(x + 1, 7.0, buttonWidth - 2, _height - 2);
            _label.x = (buttonWidth - _label.width) / 2 + ((_forward) ? -3 : 4);
        }
        else {
            makeIos7Button(colour);
        }
    }
    
    /**
 * Create the basic button shape
 */
    private function buttonShape(x : Float, y : Float, buttonWidth : Float, height : Float) : Void{
        var quotient : Float = (ARROW - CURVE) / ARROW;
        var s : Float = (_forward) ? -1.0 : 1.0;
        var adjustment : Float = (_forward) ? 0.0 : ADJUSTMENT;
        if (_forward) {
            x += buttonWidth;
        }
        graphics.moveTo(x, y + height / 2);
        graphics.lineTo(x + s * quotient * ARROW, y + (1 - quotient) * height / 2);
        graphics.curveTo(x + s * ARROW, y, x + s * (ARROW + CURVE), y);
        graphics.lineTo(x + s * (buttonWidth - CURVE), y);
        graphics.curveTo(x + s * buttonWidth, y, x + s * buttonWidth, y + CURVE);
        graphics.lineTo(x + s * buttonWidth + adjustment, y + height - CURVE);
        graphics.curveTo(x + s * buttonWidth, y + height, x + s * (buttonWidth - CURVE), y + height);
        graphics.lineTo(x + s * (ARROW + CURVE), y + height);
        graphics.curveTo(x + s * ARROW, y + height, x + s * quotient * ARROW, y + height - (1 - quotient) * height / 2);
        graphics.lineTo(x, y + height / 2);
    }
    
    
    public function destructor() : Void{
        removeEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
}

