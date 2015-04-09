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
import openfl.events.Event;
import openfl.events.MouseEvent;

/**
 *  MadComponents star rating
 * <pre>
 * &lt;starRating
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, …"
 *    alignH = "left|right|centre|fill"
 *    alignV = "top|bottom|centre|fill"
 *    visible = "true|false"
 *    alt = "true|false"
 * /&gt;
 * </pre>
 */
class UIStarRating extends MadSprite implements IComponentUI
{
    public var value(get, set) : Float;

    private static inline var STARS : Int = 5;
    private static inline var ALT_SIZE : Float = 18;
    private static inline var SIZE : Float = 40;
    
    private var _stars : Array<Star> = [];
    private var _amount : Float = 0.0;
    private var _backColour : Int;
    private var _frontColour : Int;
    private var _lastAmount : Float;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        var size : Float = (xml.has.alt && xml.att.alt == "true") ? ALT_SIZE : SIZE;
        var onColour : Int = (attributes.backgroundColours.length > 0) ? attributes.backgroundColours[0] : Star.FRONT_COLOUR;
        var offColour : Int = (attributes.backgroundColours.length > 1) ? attributes.backgroundColours[1] : Star.BACK_COLOUR;
        
        super(screen, attributes);
        for (i in 0...STARS){
            var star : Star = new Star(this, i * (Star.GAP + size), 0, size, onColour, offColour);
            star.name = Std.string(i);
            _stars.push(star);
        }
        addEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
        if (xml.has.value) {
            value = Std.parseFloat(xml.att.value);
        }
    }
    
    
    private function mouseDown(event : MouseEvent) : Void{
        _lastAmount = _amount;
        stage.addEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
        stage.addEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
    
    
    override public function touchCancel() : Void{
        value = _lastAmount;
        stage.removeEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
    
    
    private function mouseMove(event : MouseEvent) : Void{
        value = Math.round(10 * mouseX / width) / 2;
    }
    
    
    private function mouseUp(event : MouseEvent) : Void{
        stage.removeEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        value = Math.round(10 * mouseX / width) / 2;
        dispatchEvent(new Event(Event.CHANGE));
    }
    
    
    private function set_value(valu : Float) : Float{
        valu = Math.max(0, Math.min(valu, 5));
        _amount = valu;
        var i : Int;
        var fractional : Float = valu - Math.floor(valu);
        for (i in 0...Math.floor(valu)){
            _stars[i].amount = 1.0;
        }
        for (i in Math.floor(valu) + 1...STARS){
            _stars[i].amount = 0.0;
        }
        if (valu < 5) {
            _stars[Math.floor(valu)].amount = fractional;
        }
        return valu;
    }
    
    
    private function get_value() : Float{
        return _amount;
    }
    
    
    override public function destructor() : Void{
        super.destructor();
        removeEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
        stage.removeEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
}
