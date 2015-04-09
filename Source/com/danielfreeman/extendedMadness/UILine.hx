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

import openfl.display.DisplayObject;
import openfl.display.Sprite;
/**
 *  MadComponents icons component
 * <pre>
 * &lt;icons
 *    id = "IDENTIFIER"
 *    highlightColour = "#rrggbb"
 *    iconColour = "#rrggbb"
 *    activeColour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb"
 *    border = "true|false"
 * /&gt;
 * </pre>
 */
class UILine extends MadSprite implements IComponentUI
{
    
    private static inline var DARK : Int = 0x333333;
    private static inline var LIGHT : Int = 0xFFFFFF;
    
    private var _border : Bool;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        _border = !xml.has.border || xml.att.border == "true";
        super(screen, attributes);
        drawComponent();
    }
    
    
    public function drawComponent() : Void{
        graphics.clear();
        graphics.beginFill(_attributes.backgroundColours.length > (0) ? _attributes.backgroundColours[0] : DARK);
        graphics.drawRect((_border) ? 0 : -UI.PADDING, 0, _attributes.widthH + ((_border) ? 0 : 2 * UI.PADDING), 1);
        graphics.beginFill(_attributes.backgroundColours.length > (1) ? _attributes.backgroundColours[1] : LIGHT);
        graphics.drawRect((_border) ? 0 : -UI.PADDING, 1, _attributes.widthH + ((_border) ? 0 : 2 * UI.PADDING), 1);
    }
}
