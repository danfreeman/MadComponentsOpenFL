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

import com.danielfreeman.madcomponents.UIContainerBaseClass;

import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.text.TextFormat;
/**
 *  MadComponents circular container
 * <pre>
 * &lt;circular
 *   id = "IDENTIFIER"
 *   background = "#rrggbb, #rrggbb, ..."
 *   alignH = "left|right|centre|fill"
 *   alignV = "top|bottom|centre"
 * /&gt;
 * </pre>
 */
class UICircular extends UIContainerBaseClass
{
    
    private var _radius : Int = 99999;
    private var _maximumWidth : Float = 0.0;
    private var _maximumHeight : Float = 0.0;
    private var _startAngle : Float = 0;
    private var _finishAngle : Float;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        super(screen, xml, attributes);
    }
    
    
    override private function initialise(xml : MadXML, attributes : Attributes) : Void{
        
        if (xml.has.radius) {
            _radius = Std.parseInt(xml.att.radius);
        }
        if (xml.has.startAngle) {
            _startAngle = Std.parseFloat(xml.att.startAngle);
        }
        if (xml.has.finishAngle) {
            _finishAngle = Std.parseFloat(xml.att.finishAngle);
        }
        else {
            _finishAngle = (
				xml.children().length() - 1) * 360 / xml.children().length();
        }
        
        for (xmlChild in xml.children()){
            var childAttributes : Attributes = attributes.copy(xml, true);
            var localName : String = xmlChild.name;
            if (UI.isContainer(localName)) {
                var child : DisplayObject = UI.containers(this, xmlChild, childAttributes);
                _maximumWidth = Math.max(_maximumWidth, child.width);
                _maximumHeight = Math.max(_maximumHeight, child.height);
            }
            else {
                trace(localName, " not supported by UICircular");
            }
        }
    }
    
    
    override public function layout(attributes : Attributes) : Void{
        super.layout(attributes);
        drawComponent();
    }
    
    
    override public function drawComponent() : Void{
        super.drawComponent();
        var useRadius : Float = Math.min(Math.min(_radius, (_attributes.width - _maximumWidth) / 2), (_attributes.height - _maximumHeight) / 2);
        var interval : Float = (_finishAngle - _startAngle) / (numChildren - 1);
        for (i in 0...numChildren){
            var angle : Float = (_startAngle + i * interval) / 180 * Math.PI;
            var item : DisplayObject = getChildAt(i);
            item.x = _attributes.width / 2 + useRadius * Math.sin(angle) - item.width / 2;
            item.y = _attributes.height / 2 - useRadius * Math.cos(angle) - item.height / 2;
        }
    }
}
