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
import openfl.events.MouseEvent;
import openfl.geom.Matrix;

class UITabButtonRow extends MadSprite implements IComponentUI
{
    public var onColour(get, set) : Int;
    public var offColour(get, set) : Int;
    public var backgroundColour(get, set) : Int;
    public var index(get, set) : Int;

    public static inline var OFF_COLOUR : Int = 0x999999;
    public static inline var ON_COLOUR : Int = 0xF9F9F9;
    public static inline var BACKGROUND_COLOUR : Int = 0x000000;
    
    private static inline var HEIGHT : Float = 64.0;
    private static inline var GAP : Float = 2.0;
    private static inline var CURVE : Float = 8.0;
    private static inline var CURVE2 : Float = 14.0;
    private static inline var BAR_HEIGHT : Float = 4.0;
    
    private var _index : Int = 0;
    private var _pressedIndex : Int = -1;
    private var _width : Float;
    private var _height : Float = HEIGHT;
    private var _numButtons : Int;
    private var _buttonWidth : Float;
    private var _pressed : Sprite;
    private var _highlight : Sprite;
    private var _offColour : Int = OFF_COLOUR;
    private var _onColour : Int = ON_COLOUR;
    private var _backgroundColour : Int = BACKGROUND_COLOUR;
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        var tabButtonColours : String = xml.has.tabButtonColours ? xml.att.tabButtonColours : "";
        if (tabButtonColours != null) {
            var colourVector : Array<Int> = UI.toColourVector(tabButtonColours);
            if (colourVector.length > 0) {
                _backgroundColour = colourVector[0];
			}
            if (colourVector.length > 1) {
                _onColour = colourVector[1];
			}
            if (colourVector.length > 2) {
                _offColour = colourVector[2];
			}
        }
        else {
            var colours : Array<Int> = attributes.backgroundColours;
            if (colours.length > 0) {
                _onColour = colours[0];
			}
            if (colours.length > 1) {
                _offColour = colours[1];
			}
        }  //	screen.addChild(this);  
        
        super(screen, attributes);
        _numButtons = 0;
        for (child in xml.children()){
            if (!child.nodeKindIsText && child.name != "data") {
                _numButtons++;
            }
        }
        addChild(_pressed = new Sprite());
        addChild(_highlight = new Sprite());
        buttonMode = useHandCursor = true;
        layout(attributes);
    }
    
    
    private function get_onColour() : Int{
        return _onColour;
    }
    
    
    private function get_offColour() : Int{
        return _offColour;
    }
    
    
    private function get_backgroundColour() : Int{
        return _backgroundColour;
    }
    
    
    private function set_onColour(value : Int) : Int{
        _onColour = value;
        refresh();
        return value;
    }
    
    
    private function set_offColour(value : Int) : Int{
        _offColour = value;
        refresh();
        return value;
    }
    
    
    private function set_backgroundColour(value : Int) : Int{
        _backgroundColour = value;
        refresh();
        return value;
    }
    
    
    private function get_index() : Int{
        return _index;
    }
    
    
    private function set_index(value : Int) : Int{
        _index = value;
        _highlight.graphics.clear();
        drawAButton(_highlight, _index, _onColour);
        return value;
    }
    
    
    private function refresh() : Void{
        _pressed.graphics.clear();
        _highlight.graphics.clear();
        drawTabButtons(_numButtons);
        drawAButton(_highlight, _index, _onColour);
    }
    
    
    override public function layout(attributes : Attributes) : Void{
        super.layout(attributes);
        _width = attributes.width;
        _buttonWidth = _width / _numButtons;
        refresh();
    }
    
    
    private function drawTabButtons(n : Int) : Void{
        graphics.clear();
        graphics.beginFill(_backgroundColour);
        graphics.drawRect(0, 0, _width, _height);
        for (i in 0...n){
            drawAButton(this, i, _offColour);
        }
        graphics.beginFill(Colour.darken(_onColour));
        graphics.drawRect(0, _height, _width, BAR_HEIGHT);
    }
    
    
    private function drawAButton(layer : Sprite, i : Int, colour : Int) : Void{
        var matr : Matrix = new Matrix();
        matr.createGradientBox(_buttonWidth, _height, Math.PI / 2, 0, 0);
        layer.graphics.beginGradientFill(GradientType.LINEAR, [colour, colour, Colour.darken(colour)], [1.0, 1.0, 1.0], [0x00, 0xAA, 0xFF], matr);
        layer.graphics.moveTo(i * _buttonWidth + GAP, CURVE + 1);
        layer.graphics.curveTo(i * _buttonWidth + GAP, 1, i * _buttonWidth + GAP + CURVE, 1);
        layer.graphics.lineTo((i + 1) * _buttonWidth - GAP - CURVE, 1);
        layer.graphics.curveTo((i + 1) * _buttonWidth - GAP, 1, (i + 1) * _buttonWidth - GAP, CURVE + 1);
        layer.graphics.lineTo((i + 1) * _buttonWidth - GAP, _height - CURVE2);
        layer.graphics.curveTo((i + 1) * _buttonWidth - GAP, _height, (i + 1) * _buttonWidth - GAP + CURVE2, _height);
        layer.graphics.lineTo(i * _buttonWidth - CURVE2, _height);
        layer.graphics.curveTo(i * _buttonWidth + GAP, _height, i * _buttonWidth + GAP, _height - CURVE2);
        layer.graphics.lineTo(i * _buttonWidth + GAP, CURVE + 1);
    }
    
    
    public function mouseDown() : Void{
        _pressedIndex = Math.floor(mouseX / _buttonWidth);
        drawAButton(_pressed, _pressedIndex, UIList.HIGHLIGHT);
        stage.addEventListener(MouseEvent.MOUSE_UP, clearPressed);
    }
    
    
    public function clearPressed(event : MouseEvent) : Void{
        _pressed.graphics.clear();
        stage.removeEventListener(MouseEvent.MOUSE_UP, clearPressed);
    }
    
    
    public function mouseUp() : Int{
        var index : Int = Math.floor(mouseX / _buttonWidth);
        if (index == _pressedIndex) 
            _index = index;
        _highlight.graphics.clear();
        drawAButton(_highlight, _index, _onColour);
        return _index;
    }
}
