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



import openfl.display.GradientType;
import openfl.display.Shape;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.geom.Matrix;

/**
 *  MadComponents search input field
 * <pre>
 * &lt;search
 *   id = "IDENTIFIER"
 *   colour = "#rrggbb"
 *   background = "#rrggbb, #rrggbb, ..."
 *   alignH = "left|right|centre|fill"
 *   alignV = "top|bottom|centre"
 *   visible = "true|false"
 *   width = "NUMBER"
 *   prompt = "TEXT"
 *   promptColour = "#rrggbb"
 *   field = "IDENTIFIER"
 *   begins = "true|false"
 *   clearButton = "true|false"
 *   style7 = "true|false"
 * /&gt;
 * </pre>
 */
class UISearch extends UIInput implements IComponentUI
{
    
    private static inline var HEIGHT : Float = 40.0;
    private static inline var GAP : Float = 10.0;
    private static inline var WINDOW_HEIGHT : Float = 25.0;
    private static inline var ICON_COLOUR : Int = 0x999999;
    private static inline var RADIUS : Int = 9;
    private static inline var LINE : Int = 6;
    private static inline var RIGHT_GAP : Int = 45;
    private static inline var CURVE7 : Float = 10.0;
    
    
    //	protected var _attributes:Attributes;
    private var _over : Shape;
    private var _iconColour : Int;
    private var _clear : Sprite;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        _attributes = attributes;
        addChild(_over = new Shape());
        _iconColour = attributes.backgroundColours.length > (2) ? attributes.backgroundColours[2] : ICON_COLOUR;
        super(screen, attributes.x, attributes.y, xml.innerHTML, attributes.backgroundColours, xml.has.alt && xml.att.alt == "true");
        this.setChildIndex(_label, 0);
        if (xml.has.clearButton && xml.att.clearButton == "true") {
            makeClearButton();
        }
    }
    
    /**
 *  Draw search input field chrome
 */
    override private function drawOutline(pressed : Bool = false) : Void{
        var matr : Matrix = new Matrix();
        var colour : Int = _colours.length > (0) ? _colours[0] : _attributes.colour;
        var curve : Float = (_attributes.style7) ? CURVE7 : WINDOW_HEIGHT;
        matr.createGradientBox(_attributes.width, HEIGHT, Math.PI / 2, 0, 0);
        _over.graphics.clear();
        if (!_alt) {
            if (_attributes.style7) {
                _over.graphics.beginFill(colour);
            }
            else {
                _over.graphics.beginGradientFill(GradientType.LINEAR, [Colour.lighten(colour, 64), Colour.darken(colour)], [1.0, 1.0], [0x00, 0xff], matr);
            }
            _over.graphics.drawRect(0, 0, _attributes.width, HEIGHT);
            _over.graphics.drawRoundRect(GAP, (HEIGHT - WINDOW_HEIGHT) / 2, _attributes.width - 2 * GAP, WINDOW_HEIGHT, curve);
            _over.graphics.beginFill(Colour.lighten(colour, 64));
            if (!_attributes.style7) {
                _over.graphics.drawRect(0, 0, _attributes.width, 1);
                _over.graphics.beginFill(Colour.darken(colour, -64));
                _over.graphics.drawRect(0, HEIGHT, _attributes.width, 2);
            }
        }
        _over.graphics.beginFill(0, 0);
        _over.graphics.lineStyle(2, _iconColour);
        _over.graphics.drawCircle(GAP + WINDOW_HEIGHT / 2, HEIGHT / 2 - 1, 6);
        _over.graphics.moveTo(GAP + WINDOW_HEIGHT / 2 + 5, HEIGHT / 2 + 4);
        _over.graphics.lineTo(GAP + WINDOW_HEIGHT / 2 + 8, HEIGHT / 2 + 7);
        
        var fieldColour : Int = (_colours.length > 1) ? _colours[1] : 0xFFFFFF;
        graphics.clear();
        graphics.beginFill((_attributes.style7) ? fieldColour : Colour.darken(colour, -64));
        graphics.drawRect(0, 0, _attributes.width, HEIGHT);
        graphics.beginFill(fieldColour);
        graphics.drawRoundRect(GAP + 1, (HEIGHT - WINDOW_HEIGHT) / 2 + 1, _attributes.width - 2 * GAP, WINDOW_HEIGHT, curve);
        
        _label.x = GAP + WINDOW_HEIGHT;
        _label.fixwidth = _attributes.width - RIGHT_GAP - ((_alt) ? GAP : 0);
        _label.y = (HEIGHT - WINDOW_HEIGHT) / 2 + 1.0;
    }
    
/**
 *  Set width of search component
 */
    override private function set_fixwidth(value : Float) : Float{
        _attributes.width = value;
        if (_clear != null) {
            _clear.x = _attributes.width - GAP - WINDOW_HEIGHT / 2;
        }
        drawOutline();
        return value;
    }
    
    
    private function clearLabel(event : MouseEvent) : Void{
        _label.text = "";
        //	_clear.visible = false;
        super.focus();
    }
    
    
    private function makeClearButton() : Void{
        addChild(_clear = new Sprite());
        _clear.graphics.beginFill(0, 0);
        _clear.graphics.drawCircle(0, 0, 2 * RADIUS);
        _clear.graphics.beginFill(_iconColour);
        _clear.graphics.drawCircle(0, 0, RADIUS);
        _clear.graphics.beginFill(_colours.length > (1) ? _colours[1] : _attributes.colour);
        _clear.graphics.drawRect(-1, -LINE, 2, LINE - 1);
        _clear.graphics.drawRect(-1, 1, 2, LINE - 1);
        _clear.graphics.drawRect(-LINE, -1, 2 * LINE, 2);
        _clear.rotation = 45;
        _clear.y = HEIGHT / 2;
        //	_clear.visible = false;
        _clear.x = _attributes.width - GAP - WINDOW_HEIGHT / 2;
        _clear.addEventListener(MouseEvent.MOUSE_UP, clearLabel);
    }
    
    
    override public function layout(attributes : Attributes) : Void{
        super.layout(attributes);
        fixwidth = attributes.width;
    }
    
    
    override public function destructor() : Void{
        super.destructor();
        if (_clear != null) {
            _clear.removeEventListener(MouseEvent.MOUSE_UP, clearLabel);
        }
    }
}

