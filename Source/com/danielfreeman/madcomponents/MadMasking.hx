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

import com.danielfreeman.madcomponents.MadSprite;


import openfl.display.Sprite;
import openfl.display.Shape;
import openfl.geom.Rectangle;
import openfl.geom.Point;


class MadMasking extends MadSprite {
	
	public var masking(never, set):Bool;
    
    private var _masking : Bool = false;
    private var _mask : Shape = null;
    private var _xml : MadXML;
    private var _maskSize : Point;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        _xml = xml;
        super(screen, attributes.copy());
        _maskSize = new Point(attributes.widthH, attributes.heightV);
    }
    
    
    private function set_masking(value : Bool) : Bool{
        if (value) {
            doMasking();
        }
        else if (_mask != null) {
            _mask.graphics.clear();
            _mask.graphics.beginFill(0);
        }
        return value;
    }
    
    
    public function startMasking() : Void{
        masking = _masking = _xml.has.mask && _xml.att.mask == "true";
    }
    
    
    public function refreshMasking(attributes : Attributes = null) : Void{
        setMaskSize((attributes != null) ? attributes : _attributes);
        masking = _masking;
    }
    
    
    public function setMaskSize(attributes : Attributes) : Void{
        _maskSize.x = attributes.widthH;
        _maskSize.y = attributes.heightV;
    }
    
    
    private function doMasking(attributes : Attributes = null) : Void{
        if (attributes == null) {
            attributes = _attributes;
        }
        if (_mask == null) {
            _mask = new Shape();
            addChild(mask = _mask);
        }
        else {
            _mask.graphics.clear();
        }
        _mask.graphics.beginFill(0);
        _mask.graphics.drawRect(0, 0, _maskSize.x, _maskSize.y);
    }
    
    
    public function cutout(rectangle : Rectangle) : Void{
        if (_mask == null) {
            doMasking();
        }
        _mask.graphics.drawRect(rectangle.x, rectangle.y, rectangle.width, rectangle.height);
    }
	
	
//	override public function set_IsVisible(value : Bool) : Bool{
 //       super.set_IsVisible(value);/
//        return value;
 //   }
}

