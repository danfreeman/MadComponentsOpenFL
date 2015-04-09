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


import openfl.display.DisplayObject;
import com.danielfreeman.extendedmadness.*;
import com.danielfreeman.madcomponents.*;

import openfl.display.Sprite;

/**
	 * table container
	 * <pre>
	 * &lt;table
	 *    id = "IDENTIFIER"
	 *    colour = "#rrggbb"
	 *    background = "#rrggbb, #rrggbb, ..."
	 *    gapV = "NUMBER"
	 *    gapH = "NUMBER"
	 *    alignH = "left|right|centre|fill"
	 *    alignV = "top|bottom|centre|fill"
	 *    visible = "true|false"
	 *    lines = "true|false"
	 *    lineColour = "#rrggbb"
	 * /&gt;
	 * </pre>
	 * */
class UITable extends UIForm
{
	
	private static inline var LINE_COLOUR:UInt = 0x777777;
    
    private var _lines : Bool;
    private var _lineColour : Int = LINE_COLOUR;
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        _lines = !xml.has.lines || xml.att.lines != "false";
        if (xml.has.lineColour) {
            _lineColour = UI.toColourValue(xml.att.lineColour);
        }
        super(screen, xml, attributes);
    }
    
    
    override public function drawBackground(colours : Array<Int> = null) : Void{
        
        
        var border : Float = (_attributes.hasBorder) ? UI.PADDING : 0;
        var maxWidth : Float = _attributes.width + 2 * border - 1;
        var maxHeight : Float = _attributes.height + 2 * border - 1;
        var x2 : Float = border - _attributes.paddingH / 2;
        var x3 : Float = Math.max(x2, 0);
        var y2 : Float = _attributes.heightV + border + _attributes.paddingV;
        
        if (colours == null) {
            colours = _attributes.backgroundColours;
        }
        
        graphics.clear();
        graphics.beginFill(colours.length > (0) ? colours[0] : 0xFFFFFF);
        graphics.drawRect(x3, border, Math.min(_attributes.widthH + _attributes.paddingH, maxWidth) - (x3 - x2), Math.min(_attributes.heightV + border, maxHeight - border));
        graphics.beginFill(_lineColour);
        var panel : UIForm;
        for (i in 0...numChildren){
            panel = cast((getChildAt(i)), UIForm);
            var x0 : Float = border - panel.attributes.paddingH / 2;
            var y0 : Float = panel.y - _attributes.paddingV / 2;
            var x1 : Float = Math.max(x0, 0);
            var y1 : Float = Math.max(y0, 0);
            graphics.drawRect(x1, y1, _attributes.widthH + panel.attributes.paddingH - (x1 - x0), 1);
            for (j in 0...panel.numChildren){
                var cell : UIForm = cast((panel.getChildAt(j)), UIForm);
                graphics.drawRect(Math.max(x0 + cell.x, 0), y1 + 1, 1, panel.attributes.heightV + _attributes.paddingV - (y1 - y0) - 1);
            }
        }
        graphics.drawRect(Math.min(border + _attributes.widthH + panel.attributes.paddingH / 2, maxWidth), border, 1, Math.min(_attributes.heightV + border, maxHeight - border));
        graphics.drawRect(x3, Math.min(y2, maxHeight), Math.min(_attributes.widthH + panel.attributes.paddingH, maxWidth) - (x3 - x2), 1);
    }
    
    
    override public function findViewById(id : String, row : Int = -1, group : Int = -1) : DisplayObject{
        if (row < 0 || group < 0) {
            return super.findViewById(id);
        }
        else {
            var panel : UIForm = cast((getChildAt(row)), UIForm);
            if (panel != null) {
                var cell : UIForm = cast((panel.getChildAt(group)), UIForm);
                return (cell != null) ? cell.findViewById(id) : null;
            }
            else {
                return null;
            }
        }
    }
    
    
    override private function set_data(value : Dynamic) : Dynamic{
        if (Std.is(value, Array)) {
            for (i in 0...numChildren){
                var panel : UIForm = cast((getChildAt(i)), UIForm);
                for (j in 0...panel.numChildren){
                    var cell : UIForm = cast((panel.getChildAt(j)), UIForm);
                    if (i < value.length && j < value[i].length) {
                        cell.data = value[i][j];
                    }
                }
            }
        }
        else if (Std.is(value, Dynamic)) {
            super.data = value;
        }
        return value;
    }
}

