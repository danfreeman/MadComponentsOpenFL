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

import com.danielfreeman.madcomponents.*;

import openfl.display.Sprite;
import openfl.events.MouseEvent;

class UITouch extends UIContainerBaseClass
{
    
    private var _up : UIForm;
    private var _down : UIForm;
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        super(screen, xml, attributes);
        var childAttributes : Attributes = attributes.copy(xml);
        _up = new UIForm(this, MadXML.parse("<up>" + xml.children().get(0).toXMLString() + "</up>"), childAttributes);
        _down = new UIForm(this, MadXML.parse("<down>" + xml.children().get(1).toXMLString() + "</down>"), childAttributes);
        _down.visible = false;
        addEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
    }
    
    
    override public function touchCancel() : Void{
        mouseUp();
    }
    
    
    override public function layout(attributes : Attributes) : Void{
        var childAttributes : Attributes = attributes.copy(_xml);
        _up.layout(childAttributes);
        _down.layout(childAttributes);
    }
    
    
    private function mouseDown(event : MouseEvent) : Void{
        stage.addEventListener(MouseEvent.MOUSE_UP, mouseUp);
        _up.visible = false;
        _down.visible = true;
    }
    
    
    private function mouseUp(event : MouseEvent = null) : Void{
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        _up.visible = true;
        _down.visible = false;
    }
    
    
    override public function destructor() : Void{
        removeEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
}
