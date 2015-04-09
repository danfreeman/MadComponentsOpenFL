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
import openfl.display.Sprite;
import openfl.display.DisplayObject;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.geom.Matrix;


/**
 *  MadComponent progress bar
 * <pre>
 * &lt;progressBar
 *   id = "IDENTIFIER"
 *   background = "#rrggbb, #rrggbb, ..."
 *   alignH = "left|right|centre|fill"
 *   alignV = "top|bottom|centre"
 *   visible = "true|false"
 *   clickable = "true|false"
 *   width = "NUMBER"
 *   value = "NUMBER"
 * /&gt;
 * </pre>
 */
class UIProgressBar extends UISlider implements IComponentUI
{
    
    private var _xml : MadXML;
    //	protected var _attributes:Attributes;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        _xml = xml;
        //	_attributes = attributes;
        super(screen, 0, 0, attributes.backgroundColours, xml.has.alt && xml.att.alt == "true");
        if (attributes.fillH) {
            fixwidth = attributes.widthH;
        }
        if (xml.has.value) {
            value = Std.parseFloat(xml.att.value);
        }
    }
    
    
    override private function createKnob() : Void{
        _knob = new Sprite();
        _sliderHeight = (_attributes.style7) ? UISlider.SLIDER_HEIGHT7 : _radius;
        _curve = (_xml.has.curve) ? Std.parseFloat(_xml.att.curve) : _sliderHeight;
    }
    
    
    override public function layout(attributes : Attributes) : Void{
        super.layout(attributes);
        if (attributes.fillH) {
            fixwidth = attributes.widthH;
        }
    }
    
    
    //	public function get attributes():Attributes {
    //		return _attributes;
    //	}
    
    
    //	public function get xml():XML {
    //		return _xml;
    //	}
    
    
    //	public function findViewById(id:String, row:int = -1, group:int = -1):DisplayObject {
    //		return null;
    //	}
    
    
    //	public function clear():void {
    //		graphics.clear();
    //	}
    
    
    //	public function get pages():Array {
    //		return [];
    //	}
    
    
    /**
 *  Set value of slider, a number between 0 and 1
 */
    override private function set_value(valuu : Float) : Float{
        _value = valuu;
        _knob.x = valuu * _width - _curve / 2;
        drawComponent();
        return valuu;
    }
}

