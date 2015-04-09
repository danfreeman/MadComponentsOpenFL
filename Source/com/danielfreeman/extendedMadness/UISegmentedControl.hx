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

import openfl.display.DisplayObject;
import openfl.display.GradientType;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.events.Event;
import openfl.geom.Matrix;

/**
 * Segmented Control
 * <pre>
 * &lt;segmentedControl
 *    id = "IDENTIFIER"
 *    background = "#rrggbb, #rrggbb, ..."
 *    alignH = "left|right|centre|fill"
 *    alignV = "top|bottom|centre|fill"
 *    visible = "true|false"
 * 	  alt = "true|false"
 * 	  pressedColour = "#rrggbb"
 * /&gt;
 * </pre>
 * */
class UISegmentedControl extends UICutCopyPaste implements IComponentUI
{
    public var fixwidth(never, set) : Float;
    public var vectorData(never, set) : Array<String>;
    public var data(never, set) : Array<Dynamic>;
    public var xmlData(never, set) : MadXML;

    private static inline var BUTTON_COLOUR : Int = 0xE6E6E6;
    private static inline var BUTTON_COLOUR7 : Int = 0xFFFFFF;
    private static inline var TEXT_COLOUR : Int = 0x666666;
    private static var TEXT_COLOUR7 : Int = UICutCopyPaste.PRESSED_COLOUR;
    private static inline var CONTROL_CURVE : Float = 12.0;
    
    //	protected var _attributes:Attributes;
    private var _xml : MadXML;
    private var _textColour : Int;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        _xml = xml;
        _attributes = attributes;
        _textColour = (attributes.style7) ? TEXT_COLOUR7 : TEXT_COLOUR;
        if (xml.has.pressedColour) {
            _textColour = UI.toColourValue(xml.att.pressedColour);
        }
        if (xml.hasNode.font) {
            _font = xml.node.font;
        }
        var colour : Int = (attributes.backgroundColours.length > 0) ? attributes.backgroundColours[0] : ((attributes.style7) ? BUTTON_COLOUR7 : BUTTON_COLOUR);
        super(screen, 0, 0, 0, colour, attributes.style7 != (xml.has.alt && xml.att.alt == "true"), null, attributes.style7);
        
        colourButtons();
        if (attributes.fillH) {
            fixwidth = attributes.widthH;
        }
        index = 0;
    }
    
    /**
 * Set width of component
 */
    private function set_fixwidth(value : Float) : Float{
        var textWidth : Float = 0;
        for (label0 in _labels)
        textWidth += label0.width;
        _gap = (value - textWidth) / (2 * _labels.length);
        var left : Float = _gap;
        for (label1 in _labels){
            label1.x = left;
            left += label1.width + 2 * _gap;
        }
        buttonChrome(value);
        showPressed();
        return value;
    }
    
    
    override public function layout(attributes : Attributes) : Void{
        super.layout(attributes);
        if (attributes.fillH) {
            fixwidth = attributes.widthH;
        }
        if (attributes.fillV) {
            _height = attributes.heightV;
        }
    }
    
    
    override private function initialise(words : Array<String>) : Void{
        _lineColour = (_attributes.style7) ? TEXT_COLOUR7 : Colour.darken(_colour, -32);
        if (_xml.has.lineColour) {
            _lineColour = UI.toColourValue(_xml.att.lineColour);
        }
        _curve = (_attributes.style7) ? UICutCopyPaste.CURVE7 : ((_attributes.backgroundColours.length > 2) ? _attributes.backgroundColours[2] : CONTROL_CURVE);
        _pressedColour = (_attributes.backgroundColours.length > 1) ? _attributes.backgroundColours[1] : UICutCopyPaste.PRESSED_COLOUR;
        if (_attributes.fillV) {
            _height = _attributes.heightV;
        }
        if (_xml.hasNode.data) {
            drawButtons(extractData(_xml.node.data));
        }
    }
    
    
    private function set_vectorData(value : Array<String>) : Array<String>{
        clear();
        drawButtons(value);
        colourButtons();
        index = _index;
        return value;
    }
    
    
    private function set_data(value : Array<Dynamic>) : Array<Dynamic>{
        var vector : Array<String> = [];
        for (item in value){
            if (Std.is(item, String)) {
                vector.push(item);
            }
            else {
                vector.push(item.label);
            }
        }
        vectorData = vector;
        return value;
    }
    
    
    private function set_xmlData(value : MadXML) : MadXML{
        vectorData = extractData(value);
        return value;
    }
    
    
    private function extractData(xml : MadXML) : Array<String>{
        var result : Array<String> = new Array<String>();
        for (item in xml.children()){
            if (item.has.label) {
                result.push(Std.string(item.att.label));
            }
            else {
                result.push(item.name);
            }
        }
        return result;
    }
    
    
    override private function mouseUp(event : MouseEvent) : Void{
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        if (_ready && event.target == this) {
            if (_index >= 0 && _font == null) {
                _labels[_index].textColor = _textColour;
            }
            updateIndex();
            dispatchEvent(new Event(Event.CHANGE));
            showPressed();
        }
        _ready = false;
    }
    
    
    /**
 * Set index of active segment
 */
    override private function set_index(value : Int) : Int{
        if (_index >= 0 && _font == null) {
            _labels[_index].textColor = _textColour;
        }
        _index = value;
        showPressed();
        return value;
    }
    
    
    override private function colourButtons() : Void{trace("colourButtons");
        if (_font == null) {
            for (label in _labels){
				trace("colourButtons", label.text);
            	label.textColor = _textColour;
            	label.y = (_height - label.height) / 2;
			}
        }
    }
    
    
    public function clear() : Void{
        for (label in _labels)
        removeChild(label);
        _labels = [];
    }
    
    
    public function clearPressed() : Void{
        _pressedLayer.graphics.clear();
    }
    
    
    override public function destructor() : Void{
        super.destructor();
        removeEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
    }
}
