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

import openfl.display.PixelSnapping;
import openfl.display.Bitmap;
import com.danielfreeman.madcomponents.*;

import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.geom.ColorTransform;
import openfl.text.TextFormat;

/**
 *  MadComponents tabbed pages container
 * <pre>
 * &lt;tabPages
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, ..."
 *    tabButtonColours = "#rrggbb, #rrggbb, ..."
 *    visible = "true|false"
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    alignH = "left|right|centre"
 *    alignV = "top|bottom|centre"
 *    border = "true|false"
 *    mask = "true|false"
 *    alt = "true|false"
 *    lazyRender = "true|false"
 *    recycle = "true|false"
 * /&gt;
 * </pre>
 */
class UITabPagesTop extends UITabPages
{
    private static inline var LABEL_Y : Float = 40.0;
    private static inline var ICON_Y : Float = 8.0;
    
    private var _onFormat : TextFormat = new TextFormat("_sans", 14);
    private var _offFormat : TextFormat = new TextFormat("_sans", 14);
    private var _labels : Array<UILabel> = [];
    private var _icons : Array<Sprite> = [];
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        _alt = xml.has.alt && xml.att.alt == "true";
        xml.setAttribute("alt", "");
        super(screen, xml, attributes);
        for (page in _pages){
            page.y = _buttonBar.height;
        }
        _attributes.y = _buttonBar.height;
        if (!_alt) {
            _onFormat.color = cast((_buttonBar), UITabButtonRow).offColour;
            _offFormat.color = cast((_buttonBar), UITabButtonRow).onColour;
        }
    }
    
    
    override private function initialiseButtonBar(xml : MadXML, attributes : Attributes) : Void{
        if (_alt) {
            super.initialiseButtonBar(xml, attributes);
            _buttonBar.y = 0;
        }
        else {
            _pagesAttributes = attributes.copy();
             _buttonBar = new UITabButtonRow(null, xml, attributes);
            _pagesAttributes.height -= _buttonBar.height;
        }
    }
    
    
    override private function mouseDown(event : MouseEvent) : Void{
        if (_alt) 
            super.mouseDown(event)
        else 
        cast((_buttonBar), UITabButtonRow).mouseDown();
    }
    
    
    override private function mouseUp(event : MouseEvent) : Void{
        if (_alt) {
            super.mouseUp(event);
        }
        else {
            var oldPage : Int = _page;
            goToPage(cast(_buttonBar, UITabButtonRow).mouseUp());
            changeColours(oldPage, _page);
        }
    }
    
    
    /**
		 *  Rearrange the layout to new screen dimensions
		 */
    override public function layout(attributes : Attributes) : Void{
        _fullPageAttributes = _attributes = attributes;
        if (_alt) {
            _pagesAttributes = attributes.copy();
            super.layout(attributes);
            _buttonBar.y = 0;
        }
        else {
            _pagesAttributes = attributes.copy();
            _pagesAttributes.height -= _buttonBar.height;
            _pagesAttributes.y = _buttonBar.height + 1;
            superLayout(_pagesAttributes);
        }
        for (page in _pages){
            page.y = _buttonBar.height;
        }
        if (!_alt) {
            cast((_buttonBar), UITabButtonRow).layout(attributes);
        }
        spacing();
        _attributes = attributes.copy();
        _attributes.y = _buttonBar.height;
        if (_thisPage != null && !_buttonBar.visible) {
            _thisPage.y = 0;
        }
    }
    
    
    override private function set_pageNumber(value : Int) : Int{
        cast((_buttonBar), UITabButtonRow).index = value;
        super.goToPage(value);
        return value;
    }
    
    
    /**
		 *  Set the label and icon of a particular tab button
		 */
    override public function setTab(index : Int, label : String, imageClass : Class<Dynamic> = null) : Void{
        if (_alt) {
            super.setTab(index, label, imageClass);
        }
        else {
            var buttonWidth : Float = _attributes.width / _pages.length;
            if (_labels[index] == null) {
                _labels[index] = new UILabel(_buttonBar, 0, 0);
            }
            var uiLabel : UILabel = _labels[index];
            uiLabel.defaultTextFormat = index == (_page) ? _onFormat : _offFormat;
            uiLabel.text = label;
            uiLabel.x = index * buttonWidth + (buttonWidth - uiLabel.width) / 2;
            uiLabel.y = LABEL_Y;
            
            if (_icons[index] != null) { 
                _buttonBar.removeChild(_icons[index]);
			}
            if (imageClass != null) {
                var icon : Sprite = new Sprite();
                if (_pixelSnapping) {
                    icon.scaleX = icon.scaleY = 1 / UI.scale;
                }
                _buttonBar.addChild(icon);
                var iconBitmap : Bitmap = new Bitmap(Type.createInstance(imageClass, [0, 0]));
                iconBitmap.pixelSnapping = (_pixelSnapping) ? PixelSnapping.ALWAYS : PixelSnapping.NEVER;
                icon.addChild(iconBitmap);
                _icons[index] = icon;
                icon.y = ICON_Y;
                icon.x = index * buttonWidth + (buttonWidth - icon.width) / 2;
            }
            
            if (index == _page) {
                changeColours(-1, index);
			}
        }
    }
    
    
    private function spacing() : Void{
        var buttonWidth : Float = _attributes.width / _pages.length;
        for (i in 0..._labels.length){
            var uiLabel : UILabel = _labels[i];
            if (uiLabel != null) {
                uiLabel.x = i * buttonWidth + (buttonWidth - uiLabel.width) / 2;
            }
        }
        for (j in 0..._icons.length){
            var icon : Sprite = _icons[j];
            if (icon != null) {
                icon.x = j * buttonWidth + (buttonWidth - icon.width) / 2;
            }
        }
    }
    
    
    private function changeColours(oldIndex : Int, newIndex : Int) : Void{
        if (oldIndex >= 0 && _labels[oldIndex] != null) {
            cast((_labels[oldIndex]), UILabel).setTextFormat(_offFormat);
		}
        if (oldIndex >= 0 && _icons[oldIndex] != null) {
            cast((_icons[oldIndex]), Sprite).transform.colorTransform = new ColorTransform();
		}
        if (_labels[newIndex] != null) {
            cast((_labels[newIndex]), UILabel).setTextFormat(_onFormat);
		}
        if (_icons[newIndex] != null) {
            var colourTransform : ColorTransform = new ColorTransform();
            colourTransform.color = cast((_buttonBar), UITabButtonRow).offColour;
            cast((_icons[newIndex]), Sprite).transform.colorTransform = colourTransform;
        }
    }
}
