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
 * AUTHORS' OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.</p>
 *
 * <p>Licensed under The MIT License</p>
 * <p>Redistributions of files must retain the above copyright notice.</p>
 */

package com.danielfreeman.extendedmadness;



import openfl.display.GradientType;
import openfl.display.Sprite;
import openfl.geom.Matrix;

class Star extends Sprite
{
    public var amount(never, set) : Float;

    public static inline var BACK_COLOUR : Int = 0x222222;
    public static inline var FRONT_COLOUR : Int = 0xEEEEEE;
    public static inline var GAP : Float = 2.0;
    private static inline var UNDEFINED_COLOUR : Int = 0x444444;
    
    private static inline var SIZE : Float = 18;
    private static var RADIUS : Float = SIZE / 2;
    private static var INNER_RADIUS : Float = SIZE / 4;
    private static inline var SIDES : Int = 5;
    
    private var _amount : Float = -1.0;
    private var _radius : Float;
    private var _backColour : Int;
    private var _frontColour : Int;
    private var _lineColour : Int;
    
    public function new(screen : Sprite, xx : Float, yy : Float, size : Float = SIZE, frontColour : Int = FRONT_COLOUR, backColour : Int = BACK_COLOUR)
    {
        super();
        _backColour = backColour;
        _frontColour = frontColour;
        _lineColour = frontColour;
        _radius = size / 2;
        screen.addChild(this);
        x = xx;y = yy;
        redraw();
        buttonMode = useHandCursor = true;
    }
    
    
    private function redraw() : Void
    {
        var matr : Matrix = new Matrix();
        matr.createGradientBox(2 * _radius, 2 * _radius, 0);
        graphics.clear();
        graphics.beginFill(0, 0);
        graphics.drawRect(0, 0, 2 * _radius + GAP, 2 * _radius);
        graphics.lineStyle(1, _lineColour);
        if (_amount < 0.0)             graphics.beginFill(UNDEFINED_COLOUR)
        else graphics.beginGradientFill(GradientType.LINEAR, [_frontColour, _frontColour, _backColour, _backColour], [1.0, 1.0, 1.0, 1.0], [0, _amount * 255, _amount * 255, 255], matr);
        graphics.moveTo(_radius, 0);
        for (i in 1...SIDES + 1){
            graphics.lineTo(_radius + _radius / 2 * Math.sin(2 * Math.PI * (i - .5) / SIDES), _radius - _radius / 2 * Math.cos(2 * Math.PI * (i - .5) / SIDES));
            graphics.lineTo(_radius + _radius * Math.sin(2 * Math.PI * i / SIDES), _radius - _radius * Math.cos(2 * Math.PI * i / SIDES));
        }
    }
    
    /**
 * Set the star amount between 0 and 1
 */
    private function set_amount(value : Float) : Float
    {
        _amount = value;
        redraw();
        return value;
    }
}
