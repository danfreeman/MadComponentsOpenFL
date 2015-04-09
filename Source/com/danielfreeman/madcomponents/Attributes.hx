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



import openfl.display.DisplayObject;
import openfl.display.GradientType;
import openfl.display.Sprite;
import openfl.geom.Matrix;
import openfl.geom.Rectangle;
import openfl.text.TextFormat;

/**
* Contains properties such as the colours, width, height, padding, and dimensions of a component
*/
class Attributes extends Rectangle
{
    public var paddingV(get, never) : Float;
    public var paddingH(get, never) : Float;
    public var colour(get, set) : Int;
    public var scrollBarColour(get, never) : Int;
    public var backgroundColours(get, never) : Array<Int>;
    public var fillH(get, never) : Bool;
    public var fillV(get, never) : Bool;
    public var widthH(get, never) : Float;
    public var heightV(get, never) : Float;
    public var visible(get, never) : Bool;
    public var textAlign(get, never) : String;
    public var hasBorder(get, set) : Bool;
    public var style7(get, set) : Bool;

    
    public static var TRANSPARENT : Int = -1;
    public static inline var FILL : String = "fill";
    public static inline var LEFT : String = "left";
    public static inline var RIGHT : String = "right";
    public static inline var CENTRE : String = "centre";
    public static inline var TOP : String = "top";
    public static inline var BOTTOM : String = "bottom";
    //	public static const NO_SCROLL:String = "no scroll";
    
    private static inline var GAP : Float = 8;
    private static inline var GAP7 : Float = 16;
    public static inline var COLOUR : Int = 0x9999AA;
    public static inline var COLOUR7 : Int = 0xEFEFF4;
    private static inline var SCROLLBAR_COLOUR : Int = 0x555555;
    private static inline var ALIGN_V : String = "top";
    private static inline var ALIGN_H : String = "left";
    
    private var _scrollBarColour : Int = SCROLLBAR_COLOUR;
    private var _paddingV : Float = GAP;
    private var _paddingH : Float = GAP;
    private var _colour : Int = COLOUR;
    private var _alignV : String = ALIGN_V;
    private var _alignH : String = ALIGN_H;
    private var _visible : Bool = true;
    private var _id : String = "";
    private var _colours : Array<UInt> = new Array<UInt>();
    private var _width : Float = -1;
    private var _height : Float = -1;
    private var _hasBorder : Bool = false;
    private var _clickable : String = "";
    private var _style7 : Bool = false;
    
    
    public function new(x : Float = 0, y : Float = 0, width : Float = 0, height : Float = 0)
    {
        if (width < 0) {
            width = 0;
        }
        if (height < 0) {
            height = 0;
        }
        super(x, y, width, height);
    }
    
    
    /**
* Extracts Attribute properties from XML
*/
    public function parse(xml : MadXML) : Void{
        if (xml.has.style7) {
            _style7 = xml.att.style7 == "true";
			if (_style7) {
				_colour = COLOUR7;
				_paddingH = GAP7;
			}
        }
        if (xml.has.gapV) {
            _paddingV = Std.parseFloat(xml.att.gapV);
		}
        if (xml.has.gapH) {
            _paddingH = Std.parseFloat(xml.att.gapH);
		}
        if (xml.has.width) {
            _width = Std.parseFloat(xml.att.width);
        }
        
        if (xml.has.height) {
            _height = Std.parseFloat(xml.att.height);
        }
        
        if (xml.has.visible) {
            _visible = xml.att.visible != "false";
        }
        
        if (xml.has.colour) {
            _colour = UI.toColourValue(xml.att.colour);
        }
			
        if (xml.has.scrollBarColour) {
            _scrollBarColour = UI.toColourValue(xml.att.scrollBarColour);
		}
			
        if (xml.has.background) {
            _colours = UI.toColourVector(xml.att.background);
        }
        if (xml.has.clickable) {
            _clickable = xml.att.clickable;
        }
        _alignV = (xml.has.alignV) ? xml.att.alignV : _alignV;
        _alignH = (xml.has.alignH) ? xml.att.alignH : _alignH;
        
		if (xml.has.size) {
        	var size : String = xml.att.size.toUpperCase();
        	if (size.substr(-1, 1) == "C") {
            	_alignH = CENTRE;
            	_alignV = CENTRE;
        	}
		}
        _id = xml.has.id ? xml.att.id : "";
    }
    
    /**
* Returns a duplicate of this Attributes class
*/
    public function copy(xml : MadXML = null, container : Bool = false) : Attributes{
        var result : Attributes = new Attributes(x, y, width, height);
        result._paddingV = _paddingV;
        result._paddingH = _paddingH;
        result._colour = _colour;
        result._scrollBarColour = _scrollBarColour;
        result._alignH = ((!container || _alignH == FILL)) ? _alignH : ALIGN_H;
        result._alignV = !(container) ? _alignV : ALIGN_V;
        result._hasBorder = _hasBorder;
        result._style7 = _style7;
        if (xml != null) {
            result.parse(xml);
        }
        return result;
    }
    
    /**
* Vertical gap between child components
*/
    private function get_paddingV() : Float {
        return _paddingV;
    }
    
    /**
 * Horizontal gap between child components
 */
    private function get_paddingH() : Float {
        return _paddingH;
    }
    
    /**
 * Main colour of component
 */
    private function get_colour() : Int{
        return _colour;
    }
    
    /**
 * Main colour of component
 */
    private function set_colour(value : Int) : Int{
        _colour = value;
        return value;
    }
    
    /**
 * Scroll Bar Colour
 */
    private function get_scrollBarColour() : Int{
        return _scrollBarColour;
    }
    
    /**
 * Background Colours
 */
    private function get_backgroundColours() : Array<Int>{
        return _colours;
    }
    
    /**
 * true if alignH="fill", or width is specified
 */
    private function get_fillH() : Bool{
        return _alignH == FILL || _width > 0;
    }
    
    /**
 * true if alignV="fill", or height is specified
 */
    private function get_fillV() : Bool{
        return _alignV == FILL || _height > 0;
    }
    
    /**
 * Width of the component
 */
    private function get_widthH() : Float{
        if (_width > 0) {
            return _width;
        }
        else {
            return width;
        }
    }
    
    /**
 * Height of the component
 */
    private function get_heightV() : Float{
        if (_height > 0) {
            return _height;
        }
        else {
            return height;
        }
    }
    
    /**
 * Is the container component scrollable?
 */
    //		public function get noScroll():Boolean {
    //			return _alignV == NO_SCROLL;
    //		}
    
    /**
 * Initial visiblity of the component
 */
    private function get_visible() : Bool{
        return _visible;
    }
    
    /**
 * Text Aligopenflnt
 */
    private function get_textAlign() : String{
        if (_alignH == CENTRE) 
            return "center"
        else if (_alignH == RIGHT) 
            return "right"
        else 
        return "";
    }
    
    private function set_hasBorder(value : Bool) : Bool{
        _hasBorder = value;
        return value;
    }
    
    
    private function get_hasBorder() : Bool{
        return _hasBorder;
    }
    
    
    private function get_style7() : Bool{
        return _style7;
    }
    
    
    private function set_style7(value : Bool) : Bool{
        _style7 = value;
        return value;
    }
    
    /**
 * Positions a component according to its positioning attributes
 */
    public function position(item : DisplayObject, inhibitV : Bool = false) : Void{
        if (_id != "" && item.name != "+" && item.name != "-") {
            item.name = _id;
        }
        switch (_alignH)
        {
            case FILL, LEFT:item.x = x;
            case RIGHT:item.x = x + width - item.width;
            case CENTRE:item.x = x + (width - item.width) / 2;
        }
        if (inhibitV) {
            item.y = y;
        }
        else if (!(Std.is(item, UIList))) {
            switch (_alignV)
            {
                case FILL, TOP:item.y = y;
                case BOTTOM:item.y = y + height - item.height;
                case CENTRE:item.y = y + (height - item.height) / 2;
            }
        }
        if (Std.is(item, MadSprite) && _clickable != "") {
            cast((item), MadSprite).mouseEnabled = cast((item), MadSprite).mouseChildren = cast((item), MadSprite).clickable = _clickable == "true";
        }
    }
    
    
    public function initPosition(item : DisplayObject) : Void{
        if (_id != "" && item.name != "+" && item.name != "-") 
            item.name = _id;
        item.y = y;
    }
}

