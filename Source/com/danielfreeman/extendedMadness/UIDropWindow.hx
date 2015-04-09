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


import com.danielfreeman.madcomponents.Attributes;
import com.danielfreeman.madcomponents.Colour;
import com.danielfreeman.madcomponents.UIWindow;

import openfl.display.GradientType;
import openfl.display.Sprite;
import openfl.geom.Matrix;

/**
 * Window with pointer at the top
 */
class UIDropWindow extends UIWindow
{
    public var arrowPosition(never, set) : Float;

    public static inline var ARROW : Float = 20.0;
    public static inline var CURVE : Float = 8.0;
    
    private var _arrowPosition : Float;
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes = null)
    {
        _arrowPosition = (xml.has.arrowPosition) ? Std.parseFloat(xml.att.arrowPosition) : 0;
        super(screen, xml, attributes, (xml.has.curve) ? Std.parseFloat(xml.att.curve) : -1, false);
        mask = null;
    }
    
    
    override public function layout(attributes : Attributes) : Void{
        super.layout(attributes);
        drawBackground(attributes.backgroundColours);
    }
    
    
    private function set_ArrowPosition(value : Float) : Float{
        value = ((-value > _attributes.width - _curve)) ? _curve - _attributes.width : value;
        _arrowPosition = value;
        drawBackground(_attributes.backgroundColours);
        return value;
    }
    
    
    override public function drawBackground(colours : Array<Int> = null) : Void{
        graphics.clear();
        if (colours == null) 
            colours = _attributes.backgroundColours;
        
        if (colours.length > 3) {
            graphics.beginFill(colours[3], SHADOW_ALPHA);
        }
        else {
            graphics.beginFill(SHADOW_COLOUR, SHADOW_ALPHA);
        }
        graphics.drawRoundRect(_attributes.x - _curve + SHADOW_OFFSET, _attributes.y - _curve + SHADOW_OFFSET, _attributes.width + 2 * _curve, _attributes.height + 2 * _curve, 2 * _curve);
        
        var fillColour : Int = FILL_COLOUR;
        
        if (colours.length == 1) {
            graphics.beginFill(fillColour = colours[0]);
        }
        else if (colours.length > 1) {
            var matr : Matrix = new Matrix();
            matr.createGradientBox(width, height, Math.PI / 2, 0, 0);
            graphics.beginGradientFill(GradientType.LINEAR, [colours[0], colours[1]], [1.0, 1.0], [0x00, 0xff], matr);
            fillColour = colours[0];
        }
        else {
            graphics.beginFill(FILL_COLOUR);
        }
        
        if (colours.length > 2) {
            graphics.lineStyle(OUTLINE, colours[2], 1.0, true);
        }
        else {
            graphics.lineStyle(OUTLINE, Colour.darken(fillColour, -16), 1.0, true);
        }
        
        graphics.moveTo(_attributes.x - _curve, _attributes.y);
        
        if (_arrowPosition == 0) {
            graphics.lineTo(_attributes.x - _curve + ARROW, _attributes.y - _curve - ARROW);
            graphics.lineTo(_attributes.x - _curve + 2 * ARROW, _attributes.y - _curve);
        }
        else {
            graphics.curveTo(_attributes.x - _curve, _attributes.y - _curve, _attributes.x, _attributes.y - _curve);
            if (_arrowPosition > 0) {
                graphics.lineTo(_arrowPosition + _attributes.x - _curve - ARROW, _attributes.y - _curve);
                graphics.lineTo(_arrowPosition + _attributes.x - _curve, _attributes.y - _curve - ARROW);
                graphics.lineTo(_arrowPosition + _attributes.x - _curve + ARROW, _attributes.y - _curve);
            }
        }
        
        graphics.lineTo(_attributes.x + _attributes.width, _attributes.y - _curve);
        graphics.curveTo(_attributes.x + _attributes.width + _curve, _attributes.y - _curve, _attributes.x + _attributes.width + _curve, _attributes.y);
        graphics.lineTo(_attributes.x + _attributes.width + _curve, _attributes.y + _attributes.height);
        graphics.curveTo(_attributes.x + _attributes.width + _curve, _attributes.y + _attributes.height + _curve, _attributes.x + _attributes.width, _attributes.y + _attributes.height + _curve);
        if (_arrowPosition < 0) {
            graphics.lineTo(-_arrowPosition + _attributes.x - _curve + ARROW, _attributes.y + _attributes.height + _curve);
            graphics.lineTo(-_arrowPosition + _attributes.x - _curve, _attributes.y + _attributes.height + _curve + ARROW);
            graphics.lineTo(-_arrowPosition + _attributes.x - _curve - ARROW, _attributes.y + _attributes.height + _curve);
        }
        graphics.lineTo(_attributes.x, _attributes.y + _attributes.height + _curve);
        graphics.curveTo(_attributes.x - _curve, _attributes.y + _attributes.height + _curve, _attributes.x - _curve, _attributes.y + _attributes.height);
        graphics.lineTo(_attributes.x - _curve, _attributes.y);
    }
}
