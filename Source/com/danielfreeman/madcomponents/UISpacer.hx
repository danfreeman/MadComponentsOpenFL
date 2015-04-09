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

import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.display.Loader;
import openfl.geom.Point;
import openfl.geom.Rectangle;
/**
 *  Image placeholder
 * <pre>
 * &lt;image
 *    id = "IDENTIFIER"
 *    alignH = "left|right|centre|fill"
 *    alignV = "top|bottom|centre|fill"
 *    visible = "true|false"
 *    width = "NUMBER"
 *    height = "NUMBER"
 *    clickable = "true|false"
 *    scale = "true|false"
 *    border = "true|false|rounded"
 *    background = "#rrggbb"
 *    stretch = "true|false"
 * /&gt;
 * </pre>
 */


class UISpacer extends MadSprite implements IComponentUI
{
//    public var theWidth(get, never) : Float;
//    public var theHeight(get, never) : Float;
    
	private var _width : Float = 0;
	private var _height : Float = 0;
	
	public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
		super(screen, attributes);
		if (xml.has.width) {
			_width = Std.parseFloat(xml.att.width);
        }
		if (xml.has.height) {
			_height = Std.parseFloat(xml.att.height);
        }
    }
	
	
	override private function get_theWidth() : Float{
		return _width - 2 * _attributes.paddingH;
    }
	
	override private function get_theHeight() : Float{
		return _height - 2 * _attributes.paddingV;
    }
}