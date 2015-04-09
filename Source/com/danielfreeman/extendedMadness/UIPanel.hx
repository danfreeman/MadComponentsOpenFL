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

import com.danielfreeman.madcomponents.UIForm;


import com.danielfreeman.madcomponents.*;

import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.geom.Rectangle;

/**
 * UIPanel (overrides extended madness UIForm)
 * <pre>
 * &lt;horizontal|vertical|columns|rows|group|clickableGroup|frame
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, ..."
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    alignH = "left|right|centre|fill"
 *    alignV = "top|bottom|centre|fill"
 *    visible = "true|false"
 *    lines = "i,j,k..."
 *    widths = "i(%),j(%),k(%)…"
 *    heights = "i(%),j(%),k(%)…"
 *    pickerHeight = "NUMBER"
 *    border = "true|false"
 *    autoLayout = "true|false"
 * /&gt;
 * </pre>
 * */
class UIPanel extends UIForm
{
    public var totalheight(get, never) : Float;
    public var totalwidth(get, never) : Float;

    
    private static inline var PADDING : Float = 16.0;
    
    private var _totalWidth : Float;
    private var _totalHeight : Float;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes = null, row : Bool = false, inGroup : Bool = false)
    {
        super(screen, xml, attributes, row, inGroup);
        _totalWidth = width;
        _totalHeight = height + PADDING;
    }
    
    
    public function setSize(width : Float, height : Float) : Void{
        _totalWidth = width;
        _totalHeight = height;
    }
    
    
    private function get_totalheight() : Float{
        return _totalHeight;
    }
    
    
    private function get_totalwidth() : Float{
        return _totalWidth;
    }
    
    
    override private function parseBlock(xml : MadXML, attributes : Attributes, mode : String, row : Bool) : Void{
        super.parseBlock(xml, attributes, mode, row);
   //     UIe.listListener(result, xml);
    }
}
