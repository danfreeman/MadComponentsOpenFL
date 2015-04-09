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

import openfl.text.TextFormat;
import com.danielfreeman.madcomponents.*;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;

/**
 * The slider value has changed
 */
@:meta(Event(name="sliderChange",type="flash.events.Event"))


/**
 * A slider value is selected
 */
@:meta(Event(name="sliderSelect",type="flash.events.Event"))



/**
 *  MadComponent radialSlider
 * <pre>
 * &lt;radialSlider
 *   id = "IDENTIFIER"
 *   background = "#rrggbb, #rrggbb, ..."
 *   alignH = "left|right|centre|fill"
 *   alignV = "top|bottom|centre"
 *   visible = "true|false"
 *   clickable = "true|false"
 *   width = "NUMBER"
 *   numberOfSliders = "NUMBER"
 *   alt = "true|false"
 *   value = "NUMBER, NUMBER..."
 *   minimum = "NUMBER"
 *   maximum = "NUMBER"
 *   rounded = "true|false"
 *   offsetAngle = "DEGREES"
 *   colours = "#rrggbb, #rrggbb, ..."
 *   buttonColours = "#rrggbb, #rrggbb, ..."
 *   outlineColours = "#rrggbb, #rrggbb, ..."
 *   sliderThickness = "NUMBER"
 *   spacing = "NUMBER"
 *   margin = "NUMBER"
 * /&gt;
 * </pre>
 */
class UIRadialSlider extends MadSprite implements IComponentUI
{
//    public var text(never, set) : String;
    public var index(get, set) : Int;
    public var value(get, set) : Float;
    public var values(get, set) : Array<Dynamic>;

    public static inline var CHANGE : String = "sliderChange";
    public static inline var SELECT : String = "sliderSelect";
    
    private static inline var RADIUS : Float = 80.0;
    private static inline var INNER : Float = 32.0;
    private static inline var WIDTH : Float = 22.0;
    private static inline var GAP : Float = 4.0;
    private static inline var MARGIN : Float = 0.0;
    private static inline var DEFAULT_VALUE : Float = 0.3;
    private static inline var THRESHOLD : Float = 2048.0;
    private static var FORMAT : TextFormat = new TextFormat("Arial", 20, 0xCCCCCC, true);
    
    private static var RCOS_HALF : Float = 1 / Math.cos(Math.PI / 8);
    
    private var _maximumRadius : Float = RADIUS;
    private var _numberOfSliders : Int = 2;
    private var _alt : Bool;
    private var _values : Array<Dynamic>;
    private var _minimum : Float = 0;
    private var _maximum : Float = 1.0;
    private var _rounded : Bool;
    private var _offset : Float = 0;
    private var _colours : Array<Int> = null;
    private var _buttonColours : Array<Int> = null;
    private var _outlineColours : Array<Int> = null;
    private var _sliderThickness : Float = WIDTH;
    private var _spacing : Float = GAP;
    private var _margin : Float = MARGIN;
    
    private var _index : Int = -1;
    private var _saveValue : Float;
    private var _label : UILabel;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        super(screen, attributes);
        extractParameters(xml);
        drawBackground();
        makeRadials();
        _label = new UILabel(this, 0, 0, "", FORMAT);
        text = xml.toString();
        addEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
    }
    
    
    private function toIndex(x : Float, y : Float) : Int{
        var thickness : Float = (2 * _margin + _sliderThickness + _spacing);
        var distance : Float = Math.sqrt((x - _maximumRadius) * (x - _maximumRadius) + (y - _maximumRadius) * (y - _maximumRadius));
        var result : Int = Math.round(Math.ceil(_maximumRadius - distance) / thickness);
        if (result >= 0 && result < _numberOfSliders) {
            var angle : Float = 2 * Math.PI * _values[result];
            var xx : Float = _maximumRadius + (_maximumRadius - (result + 0.5) * thickness) * Math.sin(_offset + angle);
            var yy : Float = _maximumRadius - (_maximumRadius - (result + 0.5) * thickness) * Math.cos(_offset + angle);
            var closeness : Float = (xx - x) * (xx - x) + (yy - y) * (yy - y);
            if (closeness < THRESHOLD) {
                return result;
            }
            else {
                return -1;
            }
        }
        return -1;
    }
    
    
    private function mouseDown(event : MouseEvent) : Void{
        _index = toIndex(mouseX, mouseY);
        if (_index >= 0) {
            _saveValue = _values[_index % _numberOfSliders];
            stage.addEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
            stage.addEventListener(MouseEvent.MOUSE_UP, mouseUp);
        }
    }
    
    
    private function mouseMove(event : MouseEvent) : Void{
        var angle : Float = Math.atan2(mouseY - _maximumRadius, mouseX - _maximumRadius) - _offset + Math.PI / 2;
        while (angle < 0){
			angle += 2 * Math.PI;
        }
        while (angle > 2 * Math.PI){
			angle -= 2 * Math.PI;
        }
        var oldValue : Float = _values[_index];
        var value : Float = angle / (2 * Math.PI);
        
        if (Math.abs(oldValue - (value - 1)) < 0.5) {
            value = value - 1;
        }
        else if (_minimum >= 0 && oldValue - value > 0.5) {
            value = 1.0;
        }
        
        if (value > _maximum) {
            value = _maximum;
        }
        else if (value < _minimum) {
            value = _minimum;
        }
        
        _values[_index] = value;
        drawRadial(_index);
        dispatchEvent(new Event(CHANGE));
    }
    
    
    private function mouseUp(event : MouseEvent) : Void{
        stage.removeEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        mouseMove(event);
        dispatchEvent(new Event(SELECT));
    }
    
    
    private function extractParameters(xml : MadXML) : Void{
        if (xml.has.width) {
            _maximumRadius = Std.parseFloat(xml.att.width) / 2;
        }
        if (xml.has.numberOfSliders) {
            _numberOfSliders = Std.parseInt(xml.att.numberOfSliders);
        }
        _alt = xml.has.alt && xml.att.alt == "true";
        if (xml.has.values) {
            _values = Std.string(xml.att.values).split(",");
            _numberOfSliders = Math.round(Math.max(_numberOfSliders, _values.length));
        }
        else {
            _values = [DEFAULT_VALUE];
        }
        if (xml.has.minimum) {
            _minimum = Std.parseFloat(xml.att.minimum);
        }
        if (xml.has.maximum) {
            _maximum = Std.parseFloat(xml.att.maximum);
        }
        _rounded = !xml.has.rounded || xml.att.rounded != "false";
        if (xml.has.offsetAngle) {
            _offset = Math.PI * Std.parseFloat(xml.att.offsetAngle) / 180;
        }
        if (xml.has.colours) {
            _colours = UI.toColourVector(xml.att.colours);
        }
        if (xml.has.buttonColours) {
            _buttonColours = UI.toColourVector(xml.att.buttonColours);
        }
        if (xml.has.outlineColours) {
            _outlineColours = UI.toColourVector(xml.att.outlineColours);
        }
        if (xml.has.sliderThickness) {
            _sliderThickness = Std.parseFloat(xml.att.sliderThickness);
        }
        if (xml.has.spacing) {
            _spacing = Std.parseFloat(xml.att.spacing);
        }
        if (xml.has.margin) {
            _margin = Std.parseFloat(xml.att.margin);
            if (_margin < 0) {
                _spacing -= 2 * _margin;
            }
        }
        _maximumRadius = Math.max(_maximumRadius, INNER + _numberOfSliders * (2 * _margin + _spacing + _sliderThickness));
    }
    
    
    private function drawBackground() : Void{
        graphics.beginFill(0, 0);
        graphics.drawCircle(_maximumRadius, _maximumRadius, _maximumRadius);
        var barWidth : Float = _sliderThickness + 2 * _margin;
        var saveOffset : Float = _offset;
        
        if (_minimum < 0) {
            _offset += _minimum * 2 * Math.PI;
        }
        
        for (i in 0..._numberOfSliders) {
            var colour : Int;
            if (_attributes.backgroundColours != null && _attributes.backgroundColours.length > 0) {
                colour = _attributes.backgroundColours[i % _attributes.backgroundColours.length];
            }
            else {
                colour = Colour.lighten(((_colours != null && _colours.length > 0)) ? _colours[i % _colours.length] : _attributes.colour, 80);
            }
            if (_maximum - _minimum < 1.0 && _rounded) {
                drawRoundedArc(this, (_maximum - _minimum) * 2 * Math.PI, _maximumRadius - (i + 0.5) * (barWidth + _spacing), barWidth, colour);
            }
            else {
                drawArc(this, (_maximum - _minimum) * 2 * Math.PI, _maximumRadius - (i + 0.5) * (barWidth + _spacing), barWidth, colour);
            }
        }
        _offset = saveOffset;
    }
    
    
    private function drawRadial(index : Int) : Void{
        var sprite : Sprite = cast((getChildAt(index)), Sprite);
        var angle : Float = 2 * Math.PI * _values[index % _values.length];
        var buttonAngle : Float = angle;
        var radius : Float = _maximumRadius - (index + 0.5) * (_sliderThickness + _spacing + 2 * _margin);
        var colour : Int = ((_colours != null && _colours.length > 0)) ? _colours[index % _colours.length] : _attributes.colour;
        var saveOffset : Float = _offset;
        sprite.graphics.clear();
        
        if (angle < 0) {
            _offset += angle;
            angle = -angle;
        }
        
        if (_outlineColours != null && _outlineColours.length > 0) {
            sprite.graphics.lineStyle(0, _outlineColours[index % _outlineColours.length]);
        }
        if (_rounded) {
            drawRoundedArc(sprite, angle, radius, _sliderThickness, colour);
        }
        else {
            drawArc(sprite, angle, radius, _sliderThickness, colour);
        }
        _offset = saveOffset;
        if (!_alt) {
            sprite.graphics.lineStyle();
            var buttonColour : Int = ((_buttonColours != null && _buttonColours.length > 0)) ? _buttonColours[index % _buttonColours.length] : Colour.lighten(colour, 64);
            if (_rounded) {
                drawButton(sprite, buttonAngle, radius, _sliderThickness - 2, buttonColour);
            }
            else {
                drawSquareButton(sprite, buttonAngle, radius, _sliderThickness, buttonColour);
            }
        }
    }
    
    
    private function makeRadials() : Void{
        for (i in 0..._numberOfSliders){
            this.addChild(new Sprite());
            if (_values.length <= i) {
                _values.push(DEFAULT_VALUE);
            }
            drawRadial(i);
        }
    }
    
    
    override public function touchCancel() : Void{
        _values[_index % _numberOfSliders] = _saveValue;
        drawRadial(_index);
        dispatchEvent(new Event(CHANGE));
        stage.removeEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
    
    /**
 *  Set value of slider, between "0" and "1"
 */
    override private function set_text(value : String) : String{
        _label.xmlText = value;
        _label.x = _maximumRadius - _label.width / 2;
        _label.y = _maximumRadius - _label.height / 2 - 2;
        return value;
    }
    
    
    private function set_index(value : Int) : Int{
        _index = value;
        return value;
    }
    
    /**
 *  The index of the slider that has changed or selected. (0 is the outermost slider)
 */
    private function get_index() : Int{
        return _index;
    }
    
    /**
 *  Set value of slider, a number between 0 and 1
 */
    private function set_value(valuu : Float) : Float{
        _values[_index] = valuu;
        drawRadial(_index);
        return valuu;
    }
    
    /**
 *  Current slider calue between 0 and 1
 */
    private function get_value() : Float{
        return ((_index < 0)) ? 0 : _values[_index];
    }
    
    
    /**
 *  Set value of all sliders, an array of values between 0 and 1
 */
    private function set_values(valuu : Array<Dynamic>) : Array<Dynamic>{
        _values = valuu;
        for (i in 0..._numberOfSliders){
            drawRadial(i);
        }
        return valuu;
    }
    
    /**
 *  Current slider values between 0 and 1
 */
    private function get_values() : Array<Dynamic>{
        return _values;
    }
    
    
    override private function get_theWidth() : Float{
        return 2 * _maximumRadius;
    }
    
    
    override private function get_theHeight() : Float{
        return 2 * _maximumRadius;
    }
    
    
    private function drawRoundedArc(sprite : Sprite, angle : Float, radius : Float, width : Float, colour : Int) : Void{
        sprite.graphics.beginFill(colour);
        drawRoundStart(sprite, radius, width);
        drawArcOut(sprite, angle, radius - width / 2);
        drawRoundEnd(sprite, angle, radius, width);
        drawArcBack(sprite, angle, radius + width / 2);
        sprite.graphics.endFill();
    }
    
    
    private function drawArc(sprite : Sprite, angle : Float, radius : Float, width : Float, colour : Int) : Void{
        sprite.graphics.beginFill(colour);
        drawStart(sprite, radius, width);
        drawArcOut(sprite, angle, radius - width / 2);
        drawEnd(sprite, angle, radius, width);
        drawArcBack(sprite, angle, radius + width / 2);
        sprite.graphics.endFill();
    }
    
    
    private function drawButton(sprite : Sprite, angle : Float, radius : Float, width : Float, colour : Int) : Void{
        sprite.graphics.beginFill(colour);
        sprite.graphics.drawCircle(_maximumRadius + radius * Math.sin(_offset + angle), _maximumRadius - radius * Math.cos(_offset + angle), width / 2);
        sprite.graphics.endFill();
    }
    
    
    private function drawStart(sprite : Sprite, radius : Float, width : Float) : Void{
        sprite.graphics.moveTo(_maximumRadius + (radius + width / 2) * Math.sin(_offset),
                _maximumRadius - (radius + width / 2) * Math.cos(_offset));
        sprite.graphics.lineTo(_maximumRadius + (radius - width / 2) * Math.sin(_offset),
                _maximumRadius - (radius - width / 2) * Math.cos(_offset));
    }
    
    
    private function drawEnd(sprite : Sprite, angle : Float, radius : Float, width : Float) : Void{
        sprite.graphics.lineTo(_maximumRadius + (radius + width / 2) * Math.sin(_offset + angle),
                _maximumRadius - (radius + width / 2) * Math.cos(_offset + angle));
    }
    
    
    private function drawRoundStart(sprite : Sprite, radius : Float, width : Float) : Void{
        var _offset : Float = -this._offset;
        var cx : Float = _maximumRadius + radius * Math.sin(-_offset);
        var cy : Float = _maximumRadius - radius * Math.cos(-_offset);
        sprite.graphics.moveTo(cx - width / 2 * Math.sin(_offset),
                cy - width / 2 * Math.cos(_offset));
        sprite.graphics.curveTo(cx - RCOS_HALF * width / 2 * Math.sin(_offset + Math.PI / 8),
                cy - RCOS_HALF * width / 2 * Math.cos(_offset + Math.PI / 8),
                cx - width / 2 * Math.sin(_offset + Math.PI / 4),
                cy - width / 2 * Math.cos(_offset + Math.PI / 4));
        sprite.graphics.curveTo(cx - RCOS_HALF * width / 2 * Math.sin(_offset + 3 * Math.PI / 8),
                cy - RCOS_HALF * width / 2 * Math.cos(_offset + 3 * Math.PI / 8),
                cx - width / 2 * Math.sin(_offset + Math.PI / 2),
                cy - width / 2 * Math.cos(_offset + Math.PI / 2));
        sprite.graphics.curveTo(cx - RCOS_HALF * width / 2 * Math.sin(_offset + 5 * Math.PI / 8),
                cy - RCOS_HALF * width / 2 * Math.cos(_offset + 5 * Math.PI / 8),
                cx - width / 2 * Math.sin(_offset + 6 * Math.PI / 8),
                cy - width / 2 * Math.cos(_offset + 6 * Math.PI / 8));
        sprite.graphics.curveTo(cx - RCOS_HALF * width / 2 * Math.sin(_offset + 7 * Math.PI / 8),
                cy - RCOS_HALF * width / 2 * Math.cos(_offset + 7 * Math.PI / 8),
                cx - width / 2 * Math.sin(_offset + Math.PI),
                cy - width / 2 * Math.cos(_offset + Math.PI));
    }
    
    
    private function drawRoundEnd(sprite : Sprite, angle : Float, radius : Float, width : Float) : Void{
        var cx : Float = _maximumRadius + radius * Math.sin(_offset + angle);
        var cy : Float = _maximumRadius - radius * Math.cos(_offset + angle);
        sprite.graphics.curveTo(cx + RCOS_HALF * width / 2 * Math.sin(_offset + angle + 7 * Math.PI / 8),
                cy - RCOS_HALF * width / 2 * Math.cos(_offset + angle + 7 * Math.PI / 8),
                cx + width / 2 * Math.sin(_offset + angle + 6 * Math.PI / 8),
                cy - width / 2 * Math.cos(_offset + angle + 6 * Math.PI / 8));
        sprite.graphics.curveTo(cx + RCOS_HALF * width / 2 * Math.sin(_offset + angle + 5 * Math.PI / 8),
                cy - RCOS_HALF * width / 2 * Math.cos(_offset + angle + 5 * Math.PI / 8),
                cx + width / 2 * Math.sin(_offset + angle + Math.PI / 2),
                cy - width / 2 * Math.cos(_offset + angle + Math.PI / 2));
        sprite.graphics.curveTo(cx + RCOS_HALF * width / 2 * Math.sin(_offset + angle + 3 * Math.PI / 8),
                cy - RCOS_HALF * width / 2 * Math.cos(_offset + angle + 3 * Math.PI / 8),
                cx + width / 2 * Math.sin(_offset + angle + 2 * Math.PI / 8),
                cy - width / 2 * Math.cos(_offset + angle + 2 * Math.PI / 8));
        sprite.graphics.curveTo(cx + RCOS_HALF * width / 2 * Math.sin(_offset + angle + Math.PI / 8),
                cy - RCOS_HALF * width / 2 * Math.cos(_offset + angle + Math.PI / 8),
                cx + width / 2 * Math.sin(_offset + angle),
                cy - width / 2 * Math.cos(_offset + angle));
    }
    
    
    private function drawArcOut(sprite : Sprite, angle : Float, radius : Float) : Void{
        var segments : Int = Math.floor(angle / (Math.PI / 4));
        var remainder : Float = angle - segments * Math.PI / 4;
        for (i in 1...segments + 1){
            sprite.graphics.curveTo(_maximumRadius + RCOS_HALF * radius * Math.sin(_offset + i * Math.PI / 4 - Math.PI / 8),
                    _maximumRadius - RCOS_HALF * radius * Math.cos(_offset + i * Math.PI / 4 - Math.PI / 8),
                    _maximumRadius + radius * Math.sin(_offset + i * Math.PI / 4),
                    _maximumRadius - radius * Math.cos(_offset + i * Math.PI / 4));
        }
        if (remainder > 0) {
            var rCosHalf : Float = 1 / Math.cos(remainder / 2);
            sprite.graphics.curveTo(_maximumRadius + rCosHalf * radius * Math.sin(_offset + angle - remainder / 2),
                    _maximumRadius - rCosHalf * radius * Math.cos(_offset + angle - remainder / 2),
                    _maximumRadius + radius * Math.sin(_offset + angle),
                    _maximumRadius - radius * Math.cos(_offset + angle));
        }
    }
    
    
    private function drawArcBack(sprite : Sprite, angle : Float, radius : Float) : Void{
        var segments : Int = Math.floor(angle / (Math.PI / 4));
        var remainder : Float = angle - segments * Math.PI / 4;
        if (remainder > 0) {
            var rCosHalf : Float = 1 / Math.cos(remainder / 2);
            sprite.graphics.curveTo(_maximumRadius + rCosHalf * radius * Math.sin(_offset + angle - remainder / 2),
                    _maximumRadius - rCosHalf * radius * Math.cos(_offset + angle - remainder / 2),
                    _maximumRadius + radius * Math.sin(_offset + angle - remainder),
                    _maximumRadius - radius * Math.cos(_offset + angle - remainder));
        }
        var i : Int = segments - 1;
        while (i >= 0){
            sprite.graphics.curveTo(_maximumRadius + RCOS_HALF * radius * Math.sin(_offset + i * Math.PI / 4 + Math.PI / 8),
                    _maximumRadius - RCOS_HALF * radius * Math.cos(_offset + i * Math.PI / 4 + Math.PI / 8),
                    _maximumRadius + radius * Math.sin(_offset + i * Math.PI / 4),
                    _maximumRadius - radius * Math.cos(_offset + i * Math.PI / 4));
            i--;
        }
    }
    
    
    private function drawSquareButton(sprite : Sprite, angle : Float, radius : Float, width : Float, colour : Int) : Void{
        var delta : Float = Math.atan((width / 4) / radius);
        var rCosHalf : Float = 1 / Math.cos(delta / 2);
        sprite.graphics.beginFill(colour);
        sprite.graphics.moveTo(_maximumRadius + (radius - width / 2) * Math.sin(_offset + angle - delta / 2),
                _maximumRadius - (radius - width / 2) * Math.cos(_offset + angle - delta / 2));
        sprite.graphics.lineTo(_maximumRadius + (radius + width / 2) * Math.sin(_offset + angle - delta / 2),
                _maximumRadius - (radius + width / 2) * Math.cos(_offset + angle - delta / 2));
        sprite.graphics.curveTo(_maximumRadius + rCosHalf * (radius + width / 2) * Math.sin(_offset + angle),
                _maximumRadius - rCosHalf * (radius + width / 2) * Math.cos(_offset + angle),
                _maximumRadius + (radius + width / 2) * Math.sin(_offset + angle + delta / 2),
                _maximumRadius - (radius + width / 2) * Math.cos(_offset + angle + delta / 2));
        sprite.graphics.lineTo(_maximumRadius + (radius - width / 2) * Math.sin(_offset + angle + delta / 2),
                _maximumRadius - (radius - width / 2) * Math.cos(_offset + angle + delta / 2));
        sprite.graphics.curveTo(_maximumRadius + rCosHalf * (radius - width / 2) * Math.sin(_offset + angle),
                _maximumRadius - rCosHalf * (radius - width / 2) * Math.cos(_offset + angle),
                _maximumRadius + (radius - width / 2) * Math.sin(_offset + angle - delta / 2),
                _maximumRadius - (radius - width / 2) * Math.cos(_offset + angle - delta / 2));
        sprite.graphics.endFill();
    }
    
    
    override public function destructor() : Void{
        super.destructor();
        removeEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
        stage.removeEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
}
