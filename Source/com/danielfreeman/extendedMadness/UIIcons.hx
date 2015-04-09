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

import openfl.system.Capabilities;
import openfl.display.BitmapData;
import openfl.display.PixelSnapping;
import openfl.text.TextField;
import com.danielfreeman.madcomponents.*;
import openfl.display.Bitmap;
import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.events.TimerEvent;
import openfl.geom.ColorTransform;
import openfl.utils.Timer;

import openfl.text.TextFormat;

/**
 *  MadComponents icons component
 * <pre>
 * &lt;icons
 *    id = "IDENTIFIER"
 *    highlightColour = "#rrggbb"
 *    iconColour = "#rrggbb"
 *    activeColour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb"
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    alignH = "left|right|centre|fill"
 *    alignV = "top|bottom|centre|fill"
 *    visible = "true|false"
 *    border = "true|false"
 *    leftMargin = "NUMBER"
 *    pixelSnapping = "true|false"
 *    scaleHeight = "NUMBER"
 *    &lt;data&gt;LABELS&lt;/data&gt;
 *    &lt;font&gt;FORMAT&lt;/font&gt;
 *    &lt;activeFont&gt;FORMAT&lt;/activeFont&gt;
 *    &lt;disableFont&gt;FORMAT&lt;/disableFont&gt;
 * /&gt;
 * </pre>
 */
class UIIcons extends MadSprite implements IComponentUI
{
    public var xmlData(never, set) : MadXML;
    public var labels(get, never) : Array<UILabel>;
    public var index(get, set) : Int;
//    public var text(never, set) : String;
    public var icons(get, set) : Array<Bitmap>;

    
    private static inline var COLOUR_OFFSET : Float = 0.5;
    private static inline var COLOUR_FACTOR : Float = 0.5;
    private static inline var DISABLED_COLOUR : Int = 0x333366;
    private static inline var CENTRE_OFFSET : Float = 5;
    
    private var LABEL_FORMAT : TextFormat = new TextFormat("Arial", 10, 0xCCCCCC);
    private var LABEL_HIGHLIGHT : TextFormat = new TextFormat("Arial", 10, 0xFFFFFF);
    private var LABEL_DISABLE : TextFormat = new TextFormat("Arial", 10, DISABLED_COLOUR);
    
    private var _icons : Array<Bitmap>;
    private var _timer : Timer = new Timer(50, 1);
    private var _index : Int = -1;
    private var _pressIndex : Int = -1;
    private var _iconColour : Int = -1;
    private var _activeColour : Int = -1;
    private var _highlightColour : Int = UIList.HIGHLIGHT;
    private var _disableColour : Int = DISABLED_COLOUR;
    private var _leftMargin : Float = 0;
    private var _data : Array<String> = null;
    private var _labels : Array<UILabel> = null;
    private var _labelFormat : TextFormat = new TextFormat("Arial", 10, 0xCCCCCC);
    private var _labelHighlight : TextFormat = new TextFormat("Arial", 10, 0xFFFFFF);
    private var _labelDisable : TextFormat = new TextFormat("Arial", 10, DISABLED_COLOUR);
    private var _enabled : Array<Bool> = null;
    private var _pixelSnapping : Bool;
    private var _scaleHeight : Float = 0;
    private var _text : String = "";
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        
     //   xml = xml.node.copy.innerData();
        if (xml.has.highlightColour) {
            _highlightColour = UI.toColourValue(xml.att.highlightColour);
        }
        if (xml.has.iconColour) {
            _iconColour = UI.toColourValue(xml.att.iconColour);
        }
        if (xml.has.activeColour) {
            _activeColour = UI.toColourValue(xml.att.activeColour);
        }
        if (xml.has.disableColour) {
            _disableColour = UI.toColourValue(xml.att.disableColour);
        }
        if (xml.has.leftMargin) {
            _leftMargin = Std.parseFloat(xml.att.leftMargin);
        }
        if (xml.has.scaleHeight) {
            _scaleHeight = Std.parseFloat(xml.att.scaleHeight);
        }
        _pixelSnapping = xml.has.pixelSnapping && xml.att.pixelSnapping == "true" || xml.hasNode.data;
        super(screen, attributes);
        addEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
        _timer.addEventListener(TimerEvent.TIMER, unHighlight);
        
        if (xml.hasNode.font) {
            _labelFormat = UIe.toTextFormat(xml.node.font, LABEL_FORMAT);
        }
        if (xml.hasNode.activeFont) {
            _labelHighlight = UIe.toTextFormat(xml.node.activeFont, LABEL_HIGHLIGHT);
        }
        if (xml.hasNode.disableFont) {
            _labelDisable = UIe.toTextFormat(xml.node.disableFont, LABEL_DISABLE);
        }
        if (xml.hasNode.data) {
            extractData(xml);
        }
        xml = doDeletes(xml);
        if (_text == "" && xml.toString() != "") {
            var theText : String = xml.toString();
			(new EReg('[\\s\\r\\n\\t]', "g")).replace(theText, "");
			text = theText;
            unHighlight();
        }
    }
    
    
    private function doDeletes(xml : MadXML) : MadXML{
        var exclude : Array<String> = ["font", "activeFont", "disableFont", "data"];
        var result : String = "<icons>";
        for (child in xml.children()){
            if (child.name == "" || Lambda.indexOf(exclude, child.name) < 0) {
           		result += child.toXMLString();
            }
        }
        return MadXML.parse(result + "</icons>");
    }
    
    
    private function extractData(xml : MadXML) : Void{
        for (data in xml.nodes.data){
            if (!data.has.size) {
                xmlData = data;
                return;
            }
            else if (data.att.size.substr(-3, 3).toUpperCase() == "DPI" && Std.parseFloat(data.att.size.substr(0, -3)) >= Capabilities.screenDPI) {
                xmlData = data;
                return;
            }
        }
    }
    
    
    private function imageAttributeText(item : MadXML) : String{
        if (item.has.ldpi && Capabilities.screenDPI < 160) {
            _pixelSnapping = true;
            return item.att.ldpi + ",";
        }
        else if (item.has.mdpi && Capabilities.screenDPI < 240) {
            _pixelSnapping = true;
            return item.att.mdpi + ",";
        }
        else if (item.has.hdpi && Capabilities.screenDPI < 320) {
            _pixelSnapping = true;
            return item.att.hdpi + ",";
        }
        else if (item.has.xhdpi && Capabilities.screenDPI < 400) {
            _pixelSnapping = true;
            return item.att.xhdpi + ",";
        }
        else if (item.has.xxhdpi && Capabilities.screenDPI >= 400) {
            _pixelSnapping = true;
            return item.att.xxhdpi + ",";
        }
        else if (item.has.image) {
            return item.att.image + ",";
        }
        else {
            return "";
        }
    }
    
    
    private function set_xmlData(value : MadXML) : MadXML{
        if (_icons != null) {
            clear();
        }
        _data = [];
        _labels = [];
        _text = "";
        for (item in value.children()){
            _data.push(item.has.label ? item.att.label : item.name);
            _text += imageAttributeText(item);
        }
        if (_text != "") {
            text = _text.substr(0, -1);
            unHighlight();
        }
        return value;
    }
    
    
    private function get_labels() : Array<UILabel>{
        return _labels;
    }
    
    
    public function enable(index : Int, state : Bool) : Void{
        //	var colour:ColorTransform = new ColorTransform();
        //	colour.color = state ? _iconColour : _disableColour;
        //	DisplayObject(_icons[index]).transform.colorTransform = colour;
        _enabled[index] = state;
        unHighlight();
        labelHighlight();
    }
    
    
    private function mouseDown(event : MouseEvent) : Void{
        _pressIndex = -1;
        for (i in 0..._icons.length){
            var icon : DisplayObject = _icons[i];
            if (mouseX < icon.x + icon.width + _attributes.paddingH / 2) {
                if (_enabled[i]) {
                    _pressIndex = i;
                    highlight();
                }
                break;
            }
        }
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        stage.addEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
    
    
    public function clearHighlight() : Void{
        var index : Int = 0;
        for (label in _labels){
            label.setTextFormat((_enabled[index++]) ? _labelFormat : _labelDisable);
        }
    }
    
    
    override public function touchCancel() : Void{
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        unHighlight();
    }
    
    
    private function labelHighlight() : Void{
        clearHighlight();
        if (_labels != null && _index >= 0 && _index < _labels.length) {
            _labels[_index].setTextFormat((_enabled[_index]) ? _labelHighlight : _labelDisable);
        }
    }
    
    
    private function mouseUp(event : MouseEvent) : Void{
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        var index : Int = -1;
        for (i in 0..._icons.length){
            var icon : DisplayObject = _icons[i];
            if (mouseX < icon.x + icon.width + _attributes.paddingH / 2) {
                if (_enabled[i]) {
                    index = i;
                }
                break;
            }
        }
        if (index >= 0 && _pressIndex == index) {
            _index = _pressIndex;
            dispatchEvent(new Event(Event.CHANGE));
            labelHighlight();
        }
        _timer.reset();
        _timer.start();
        _pressIndex = -1;
    }
    
    
    private function highlight() : Void{
        var colour : ColorTransform = new ColorTransform();
        colour.color = _highlightColour;
        cast((_icons[_pressIndex]), DisplayObject).transform.colorTransform = colour;
    }
    
    
    private function newColourTransform(colour : Int) : ColorTransform{
        if (colour >= 0) {
            return new ColorTransform(
            COLOUR_OFFSET, COLOUR_OFFSET, COLOUR_OFFSET, 1.0, 
            Math.round(COLOUR_FACTOR * ((colour >> 16) & 0xFF)), 
            Math.round(COLOUR_FACTOR * ((colour >> 8) & 0xFF)), 
            Math.round(COLOUR_FACTOR * (colour & 0xFF)), 0
            );
        }
        else {
            return new ColorTransform();
        }
    }
    
    
    private function unHighlight(event : TimerEvent = null) : Void{
        var disableColourTransform : ColorTransform = new ColorTransform();
        disableColourTransform.color = _disableColour;
        var index : Int = 0;
        graphics.clear();
        if (_attributes.backgroundColours.length > 0) {
            graphics.beginFill(_attributes.backgroundColours[0]);
        }
        else {
            graphics.beginFill(0, 0);
        }
        for (icon in _icons){
            graphics.drawRect(icon.x - _attributes.paddingH / 2, 0, icon.width + _attributes.paddingH, _attributes.heightV);
            icon.transform.colorTransform = (_enabled[index++]) ? newColourTransform(_iconColour) : disableColourTransform;
        }
        if (_index >= 0 && _activeColour >= 0) {
            _icons[_index].transform.colorTransform = (_enabled[_index]) ? newColourTransform(_activeColour) : disableColourTransform;
            if (_attributes.backgroundColours.length > 1) {
                graphics.beginFill(_attributes.backgroundColours[1]);
                graphics.drawRect(_icons[_index].x - _attributes.paddingH / 2, 0, _icons[_index].width + _attributes.paddingH, _attributes.heightV);
            }
        }
    }
    
    
    private function get_index() : Int{
        return _index;
    }
    
    
    private function set_index(value : Int) : Int{
        _pressIndex = _index = value;
        unHighlight();
        labelHighlight();
        _timer.reset();
        _timer.start();
        return value;
    }
    
    
    //	override public function drawComponent():void {
    //		graphics.clear();
    //		graphics.beginFill(0, 0);
    //		graphics.drawRect(0, 0, width + _attributes.paddingH, height);
    //	}
    
    
    override private function set_text(source : String) : String{
        var position : Float = _leftMargin;
        var dimensions : Array<Dynamic> = source.split(",");
        if (_icons != null) {
            clear();
        }
        _icons = [];
        _enabled = [];
        _labels = [];
        for (i in 0...Math.round(Math.max((_data != null) ? _data.length : 0, dimensions.length))){
        	var icon : Bitmap;
			if (i < dimensions.length && dimensions[i] != "") {
				icon = new Bitmap(Type.createInstance(Type.resolveClass(dimensions[i]), [0, 0]));
			}
			else {
				icon = new Bitmap(new BitmapData(Math.round(20 * UI.scale), Math.round(20 * UI.scale)));
			}
            _icons.push(icon);
            icon.smoothing = !_pixelSnapping;
            if (_scaleHeight > 0) {
                icon.scaleX = icon.scaleY = icon.scaleY * _scaleHeight / icon.height;
                icon.y = (_attributes.heightV - icon.height) / 2 - ((_data != null) ? CENTRE_OFFSET : 0);
            }
            else if (_pixelSnapping) {
                icon.scaleX = icon.scaleY = 1 / UI.scale;
                icon.y = (_attributes.heightV - icon.height) / 2 - ((_data != null) ? CENTRE_OFFSET : 0);
            }
            icon.pixelSnapping = (_pixelSnapping) ? PixelSnapping.ALWAYS : PixelSnapping.NEVER;
            
            addChild(icon);
            icon.x = position;
            
            if (_data != null && i < _data.length) {
                var label : UILabel = new UILabel(this, 0, icon.y + icon.height - 3, _data[i], _labelFormat);
                label.x = position + icon.width / 2 - label.width / 2;
                _labels.push(label);
            }
            _enabled.push(true);
            position += icon.width + _attributes.paddingH;
        }  //	drawComponent();  
        return source;
    }
    
    
    public function clear() : Void{
        for (icon in _icons){
            removeChild(icon);
        }
        for (label in _labels){
            removeChild(label);
        }
        graphics.clear();
        _icons = null;
    }
    
    
    private function set_icons(value : Array<Bitmap>) : Array<Bitmap>{
        if (_icons != null) {
            clear();
        }
        _icons = value;
        return value;
    }
    
    
    private function get_icons() : Array<Bitmap>{
        return _icons;
    }
    
    
    override public function destructor() : Void{
        super.destructor();
        removeEventListener(MouseEvent.MOUSE_UP, mouseDown);
        removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        _timer.removeEventListener(TimerEvent.TIMER, unHighlight);
    }
}

