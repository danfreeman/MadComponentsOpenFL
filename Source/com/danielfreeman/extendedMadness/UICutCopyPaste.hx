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
import openfl.events.TimerEvent;
import openfl.geom.Matrix;
import openfl.text.TextFormat;
import openfl.utils.Timer;


class UICutCopyPaste extends MadSprite
{
    public var font(never, set) : MadXML;
    public var index(get, set) : Int;
    public var value(get, never) : String;

    public static inline var CLICKED : String = "clicked";
    
    public static inline var ARROW : Float = 14.0;
    private static inline var HEIGHT : Float = 38.0;
    private static inline var ALT_HEIGHT : Float = 22.0;
    private static inline var GAP : Float = 10.0;
    private static inline var CURVE : Float = 16.0;
    private static inline var CURVE7 : Float = 4.0;
    private static inline var COLOUR : Int = 0x555555;
    private static inline var PRESSED_COLOUR : Int = 0x6666CC;
    private static inline var PRESSED_TEXT_COLOUR : Int = 0xFFFFFF;
    
    private var FORMAT : TextFormat = new TextFormat("_sans", 16, 0xFFFFFF);
    
    private var _labels : Array<UILabel> = new Array<UILabel>();
    private var _arrowPosition : Float;
    private var _index : Int = -1;
    private var _colour : Int = COLOUR;
    private var _gap : Float = GAP;
    private var _curve : Float;
    private var _height : Float = HEIGHT;
    private var _alt : Bool;
    private var _font : MadXML = null;
    private var _pressedLayer : Sprite;
    private var _pressedColour : Int = UIList.HIGHLIGHT;
    private var _timer : Timer;
    private var _ready : Bool = false;
    private var _style7 : Bool;
    private var _lineColour : Int;
    
    /**
 * Cut / Copy / Paste style buttons
 */
    public function new(screen : Sprite, xx : Float, yy : Float, arrowPosition : Float = 0, colour : Int = 0x666666, alt : Bool = false, words : Array<String> = null, style7 : Bool = false)
    {
        super(screen, _attributes);
        x = xx;y = yy;
        _colour = colour;
        _style7 = style7;
        _curve = (style7) ? CURVE7 : CURVE;
        _height = (alt) ? ALT_HEIGHT : HEIGHT;
        _arrowPosition = arrowPosition;
        addChild(_pressedLayer = new Sprite());
        initialise(words);
        buttonMode = useHandCursor = true;
        addEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
    }
    
    
    private function set_font(value : MadXML) : MadXML{
        _font = value;
        return value;
    }
    
    
    private function initialise(words : Array<String>) : Void{
        _lineColour = Colour.darken(_colour, -32);
        drawButtons((words != null) ? words : ["Cut", "Copy", "Paste"], _arrowPosition);
        _timer = new Timer(50, 1);
        _timer.addEventListener(TimerEvent.TIMER_COMPLETE, resetHighlight);
    }
    
    
    private function mouseDown(event : MouseEvent) : Void{
        _ready = true;
        stage.addEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
    
    
    private function mouseUp(event : MouseEvent) : Void{
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        if (_ready && event.target == this) {
            updateIndex();
            dispatchEvent(new Event(Event.CHANGE));
            showPressed();
            _timer.reset();
            _timer.start();
        }
        _ready = false;
    }
    
    
    override public function touchCancel() : Void{
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        _ready = false;
    }
    
    
    private function updateIndex() : Void{
        var i : Int = _labels.length - 1;
        while (i >= 0){
            var position : Float = _labels[i].x - _gap;
            if (mouseX > position) {
                _index = i;
                return;
            }
            i--;
        }
        _index = 0;
    }
    
/**
 * Get the index of the button clicked
 */
    private function get_index() : Int{
        return _index;
    }
    
    
/**
 * Get the string value of the button clicked
 */
    private function get_value() : String{
        return (_index >= 0) ? _labels[_index].text : "";
    }
    
    
/**
 * Set index of active segment
 */
    private function set_index(value : Int) : Int{
        _index = value;
        showPressed();
        return value;
    }
    
    
    private function drawButtons(labels : Array<String>, arrowPosition : Float = 0) : Void{
        var left : Float = 0;
        for (label in labels){
			 trace("drawButtons", label);
            var uiLabel : UILabel = new UILabel(this, left + _gap, 0, "", FORMAT);
            if (_font != null) {
                uiLabel.htmlText = _font.toXMLString().substr(0, _font.toXMLString().length - 2) + ">" + label + "</font>";
            }
            else {
                uiLabel.text = label;
            }
            uiLabel.y = (_height - uiLabel.height) / 2;
            left += uiLabel.width + 2 * _gap;
            _labels.push(uiLabel);
        }
        buttonChrome(left, arrowPosition);
    }
    
    
    public function drawComponent() : Void{
        
    }
    
    
    private function buttonChrome(left : Float, arrowPosition : Float = 0) : Void{
        var matr : Matrix = new Matrix();
        var gradient : Array<UInt> = [Colour.lighten(_colour, 128), _colour, _colour];
        
        matr.createGradientBox(left, _height, Math.PI / 2, 0, 0);
        graphics.clear();
        if (_style7) {
            graphics.beginFill(gradient[1]);
        }
        else {
            graphics.beginGradientFill(GradientType.LINEAR, gradient, [1.0, 1.0, 1.0], [0x00, 0x80, 0xff], matr);
        }
        graphics.lineStyle(1, _lineColour, 1.0, true);
        graphics.moveTo(0, _curve);
        graphics.curveTo(0, 0, _curve, 0);
        if (arrowPosition < 0) {
            graphics.lineTo(-arrowPosition - ARROW, 0);
            graphics.lineTo(-arrowPosition, -ARROW);
            graphics.lineTo(-arrowPosition + ARROW, 0);
        }
        graphics.lineTo(left - _curve, 0);
        graphics.curveTo(left, 0, left, _curve);
        graphics.lineTo(left, _height - _curve);
        graphics.curveTo(left, _height, left - _curve, _height);
        if (arrowPosition > 0) {
            graphics.lineTo(arrowPosition + ARROW, _height);
            graphics.lineTo(arrowPosition, _height + ARROW);
            graphics.lineTo(arrowPosition - ARROW, _height);
        }
        graphics.lineTo(_curve, _height);
        graphics.curveTo(0, _height, 0, _height - _curve);
        graphics.lineTo(0, _curve);
        
        graphics.lineStyle(0, 0, 0);
        for (i in 1..._labels.length){
            var position : Float = _labels[i].x;
            if (_style7) {
                graphics.beginFill(_lineColour);
                graphics.drawRect(position - _gap + 1, 1, 1, _height - 1);
            }
            else {
                graphics.beginGradientFill(GradientType.LINEAR, [Colour.lighten(_colour, 126), _colour], [1.0, 1.0], [0x00, 0xff], matr);
                graphics.drawRect(position - _gap, 1, 1, _height - 1);
                graphics.beginGradientFill(GradientType.LINEAR, [Colour.darken(_colour), _colour], [1.0, 1.0], [0x00, 0xff], matr);
                graphics.drawRect(position - _gap + 1, 1, 1, _height - 1);
            }
        }
    }
    
    
    private function showPressed() : Void{
        var matr : Matrix = new Matrix();
        _pressedLayer.graphics.clear();
        matr.createGradientBox(width, _height, Math.PI / 2, 0, 0);
        if (_style7) {
            _pressedLayer.graphics.beginFill(_pressedColour);
        }
        else {
            _pressedLayer.graphics.beginGradientFill(GradientType.LINEAR, [Colour.darken(_pressedColour, -32), _pressedColour, Colour.lighten(_pressedColour, 48), Colour.lighten(_pressedColour, 48)], [1.0, 1.0, 1.0, 1.0], [0x00, 0x20, 0x80, 0xff], matr);
        }
        if (_index < 0 || _labels.length <= 0) {
            return;
        }
        else if (_labels.length == 1) {
            _pressedLayer.graphics.drawRoundRect(1, 1, width - 2, _height - 1, _curve);
        }
        else if (_index == 0) {
            var right : Float = _labels[1].x - _gap + 1;
            _pressedLayer.graphics.moveTo(1, _curve);
            _pressedLayer.graphics.curveTo(1, 1, _curve, 1);
            _pressedLayer.graphics.lineTo(right, 1);
            _pressedLayer.graphics.lineTo(right, _height);
            _pressedLayer.graphics.lineTo(_curve, _height);
            _pressedLayer.graphics.curveTo(1, _height, 1, _height - _curve);
            _pressedLayer.graphics.lineTo(1, _curve - 1);
			_pressedLayer.graphics.endFill();
        }
        else if (_index == _labels.length - 1) {
            var left : Float = _labels[_index].x - _gap + 2;
			var width1: Float = width;
            _pressedLayer.graphics.moveTo(left, 1);
            _pressedLayer.graphics.lineTo(width1 - _curve, 1);
            _pressedLayer.graphics.curveTo(width1 - 1, 1, width1 - 1, _curve);
            _pressedLayer.graphics.lineTo(width1 - 1, _height - _curve);
            _pressedLayer.graphics.curveTo(width1 - 1, _height, width1 - _curve - 1, _height);
            _pressedLayer.graphics.lineTo(left, _height);
            _pressedLayer.graphics.lineTo(left, 1);
			_pressedLayer.graphics.endFill();
        }
        else {
            var left0 : Float = _labels[_index].x - _gap + 2;
            var width0 : Float = _labels[_index].width + 2 * _gap - 1;
            _pressedLayer.graphics.drawRect(left0, 1, width0, _height - 1);
			_pressedLayer.graphics.endFill();
        }
        if (_font == null) {
			colourButtons();
            _labels[_index].textColor = PRESSED_TEXT_COLOUR;
		}
    }


    private function colourButtons() : Void{trace("colourButtons");

    }
//     
    
    private function resetHighlight(event : TimerEvent) : Void{
        _pressedLayer.graphics.clear();
        dispatchEvent(new Event(CLICKED));
    }
    
    
    override public function destructor() : Void{
        super.destructor();
        removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
}
