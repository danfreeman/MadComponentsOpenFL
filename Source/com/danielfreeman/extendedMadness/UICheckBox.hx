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

import openfl.display.GradientType;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.geom.Matrix;

/**
 * Android-style check box
 * <pre>
 * &lt;checkBox
 *    id = "IDENTIFIER"
 *    background = "#rrggbb, #rrggbb, ..."
 *    alignH = "left|right|centre|fill"
 *    alignV = "top|bottom|centre|fill"
 *    visible = "true|false"
 * 	  alt = "true|false"
 * /&gt;
 * </pre>
 * */
class UICheckBox extends MadSprite implements IComponentUI
{
    public var label(get, never) : UILabel;
 //   public var text(never, set) : String;
    public var htmlText(never, set) : String;
    public var state(get, set) : Bool;

    private static inline var SIZE : Float = 26.0;
    private static inline var ALT_SIZE : Float = 18.0;
    private static inline var CURVE : Float = 6.0;
    private static inline var ON : Float = 6.0;
    private static inline var ON_COLOUR : Int = 0xFFF999;
    private static inline var COLOUR : Int = 0xFCFCFC;
    private static inline var GAP : Float = 10.0;
    private static inline var SMALL_GAP : Float = 4.0;
    
    private var _colour : Int = COLOUR;
    private var _tick : UITick;
    private var _state : Bool = false;
    private var _onColour : Int = ON_COLOUR;
    private var _offColour : Int;
    private var _alt : Bool = false;
    private var _label : UILabel;
    private var _ready : Bool = false;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        super(screen, attributes);
        _alt = xml.has.alt && xml.att.alt != "false";
        _colour = (attributes.backgroundColours.length > 0) ? attributes.backgroundColours[0] : COLOUR;
        _onColour = (attributes.backgroundColours.length > 1) ? attributes.backgroundColours[1] : ON_COLOUR;
        _offColour = Colour.darken(_colour, -90);
        
        buttonChrome();
        makeTick();
        state = xml.has.state && xml.att.state == "true";
        buttonMode = mouseEnabled = true;
        addEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
        _label = new UILabel(this, ((_alt) ? ALT_SIZE + SMALL_GAP : SIZE + GAP), 0, Std.string(xml));
        assignToLabel(xml, _label);
    }
    
    
    private function assignToLabel(xml : MadXML, label : UILabel) : Void{
        if (xml.hasChildren) {
            var xmlString : String = xml.toXMLString();
            var htmlText : String = xmlString.substring(xmlString.indexOf(">") + 1, xmlString.lastIndexOf("<"));
            
            label.htmlText = htmlText;
            if (label.text == "") {
                label.text = " ";
            }
        }
        label.y = Math.max((((_alt) ? ALT_SIZE : SIZE) - label.height) / 2, 0);
    }
    
    /**
 * Get label component
 */
    private function get_label() : UILabel{
        return _label;
    }
    
    /**
 * Set label text
 */
    override private function set_text(value : String) : String{
        _label.text = value;
        label.y = Math.max((SIZE - label.height) / 2, 0);
        return value;
    }
    
    /**
 * Set label html text
 */
    private function set_htmlText(value : String) : String{
        _label.htmlText = value;
        label.y = Math.max((SIZE - label.height) / 2, 0);
        return value;
    }
    
    
    private function makeTick() : Void{
        var shadow : UITick = new UITick(this, 3, 2, Colour.darken(_colour, -128), true);
        _tick = new UITick(this, 4, 2, _offColour, true);
        if (_alt) {
            _tick.scaleX = _tick.scaleY = shadow.scaleX = shadow.scaleY = ALT_SIZE / SIZE;
            _tick.x = 2.5;shadow.x = 2.0;
            _tick.y = shadow.y = 1.0;
        }
    }
    
    
    private function buttonChrome() : Void{
        var matr : Matrix = new Matrix();
        var gradient : Array<UInt> = [Colour.lighten(_colour, 80), Colour.darken(_colour), Colour.darken(_colour)];
        var size : Float = (_alt) ? ALT_SIZE : SIZE;
        
        matr.createGradientBox(size, size, Math.PI / 2, 0, 0);
        graphics.clear();
        graphics.beginFill(0, 0);
        graphics.drawRect(0, 0, size + GAP, size);
        graphics.beginFill(Colour.darken(_colour, -80));
        graphics.drawRoundRect(0, 0, size, size, CURVE);
        graphics.beginGradientFill(GradientType.LINEAR, gradient, [1.0, 1.0, 1.0], [0x00, 0x80, 0xff], matr);
        graphics.drawRoundRect(1, 1, size - 2, size - 2, CURVE);
    }
    
    
    private function redraw() : Void{
        _tick.colour = (_state) ? _onColour : _offColour;
    }
    
    
    private function mouseDown(event : MouseEvent) : Void{
        _ready = true;
        stage.addEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
    
    
    override public function touchCancel() : Void{
        _ready = false;
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
    
    
    private function mouseUp(event : MouseEvent) : Void{
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        if (_ready && event.target == this) {
            _state = !_state;
            redraw();
            dispatchEvent(new Event(Event.CHANGE));
        }
        _ready = false;
    }
    
    /**
 * Set tickbox state
 */
    private function set_state(value : Bool) : Bool{
        _state = value;
        redraw();
        return value;
    }
    
    /**
 * Get tickbox state
 */
    private function get_state() : Bool{
        return _state;
    }
    
    
    override public function destructor() : Void{
        super.destructor();
        removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
}
