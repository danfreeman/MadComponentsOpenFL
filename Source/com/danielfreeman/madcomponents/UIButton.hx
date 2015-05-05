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

import com.danielfreeman.madcomponents.UILabel;


import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.DisplayObject;
import openfl.display.GradientType;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.geom.Matrix;
import openfl.geom.Rectangle;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;


/**
  * The button was clicked
 */
@:meta(Event(name="buttonClicked",type="flash.events.Event"))




/**
 *  Button component
 * <pre>
 * &lt;button
 *   id = "IDENTIFIER"
 *   colour = "#rrggbb"
 *   background = "#rrggbb, #rrggbb, ..."
 *   alignH = "left|right|centre|fill"
 *   alignV = "top|bottom|centre|fill"
 *   visible = "true|false"
 *   width = "NUMBER"
 *   height = "NUMBER"
 *   alt = "true|false"
 *   skin = "IMAGE_CLASS_NAME"
 *   clickable = "true|false"
 *   curve = "NUMBER"
 *   goTo = "ID"
 *   transition = "TRANSITION"
 * /&gt;
 * </pre>
 */

class UIButton extends MadSprite
{
    public var label(get, never) : UILabel;
    public var shadowLabel(get, never) : UILabel;
    public var alt(never, set) : Bool;
    public var fixwidth(never, set) : Float;
    public var colour(never, set) : Int;
    public var curve(never, set) : Float;

    public var skinHeight(never, set) : Float;

    
    public static inline var CLICKED : String = "buttonClicked";
	
	public static inline var HIGHLIGHT : Int = 0x9999FF;
    
    private static inline var SHADOW_OFFSET : Float = 1.0;
    private static inline var CURVE : Float = 16.0;
    private static inline var SIZE_X : Float = 10.0;
    private static inline var SIZE_Y : Float = 7.0;
    private static inline var TINY_SIZE_Y : Float = 7.0;
    
    private var FORMAT : TextFormat = new TextFormat("Tahoma", 17, 0xFFFFFF);
    private var FORMAT7 : TextFormat = new TextFormat("Tahoma", 17, 0x0B79EC);  //0x158FF9);  
    
    
    private var _format : TextFormat;
    private var _darkFormat : TextFormat = new TextFormat("Tahoma", 17, 0x111111);
    private var _label : UILabel;
    private var _shadowLabel : UILabel;
    private var _colour : Int;
    private var _fixwidth : Float = 0;
    private var _alpha : Float = 0;
    private var _colours : Array<UInt>;
    private var _gap : Float = SIZE_X;
    private var _enabled : Bool = false;
    private var _sizeY : Float = SIZE_Y;
    private var _curve : Float;
    private var _border : Float = 2;

    private var _skinHeight : Float = -1;
    private var _defaultWidth : Float;
    private var _alt : Bool = false;
    private var _goTo : String = "";
    private var _transition : String = "";
    private var _style7 : Bool;
    private var _textColour : Int;
    
    
    public function new(screen : Sprite, xx : Float, yy : Float, text : String, colour : Int = 0x9999AA, colours : Array<Int> = null, tiny : Bool = false, style7 : Bool = false)
    {
        if (tiny) {
            _sizeY = TINY_SIZE_Y;
            _border = 0.5;
            _alt = true;
        }
        _format = (style7) ? FORMAT7 : FORMAT;
        //	screen.addChild(this);
        super(screen, null);
        x = xx;
		y = yy;
        _style7 = style7;
        _colour = ((colours != null && colours.length == 1)) ? colours[0] : colour;
        _colours = (colours != null) ? colours : [];
        init();
        _curve = ((_colours.length > 3)) ? _colours[3] : CURVE;
        if (_colours.length > 4) {
            _colours = [];
        }
        _darkFormat.color = ((Colour.power(_colour) > 0.5)) ? Colour.darken(_colour) : Colour.darken(_colour, -128);
        _format.align = _darkFormat.align = TextFormatAlign.CENTER;
        _shadowLabel = new UILabel(this, _gap - SHADOW_OFFSET, _sizeY - SHADOW_OFFSET - 1, " ", _darkFormat);
        _shadowLabel.visible = !style7;
        _label = new UILabel(this, _gap, _sizeY - 1, " ", _format);
        _label.multiline = _shadowLabel.multiline = true;
        this.text = text;
        addEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
        buttonMode = useHandCursor = true;
    }
    
    
    private function get_label() : UILabel{
        return _label;
    }
    
    
    private function get_shadowLabel() : UILabel{
        return _shadowLabel;
    }
    
    
    private function set_alt(value : Bool) : Bool{
        _sizeY = (value) ? TINY_SIZE_Y : SIZE_Y;
        _border = (value) ? 0.5 : 2.0;
        drawButton();
        return value;
    }
    
    
    private function init() : Void{
        if (_colours.length > 3) {
            _gap = Math.max(_colours[3] / 3, SIZE_X);
        }
    }
    
    
    private function mouseDown(event : MouseEvent) : Void{
        drawButton(true);
        _enabled = true;
        stage.addEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
    
    
    private function mouseUp(event : MouseEvent) : Void{
        drawButton();
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        if (_enabled && event.target == this) {
            if (_goTo != "") {
                changePage();
            }
            dispatchEvent(new Event(CLICKED));
        }
        _enabled = false;
    }
    
    
    private function changePage() : Void{
        var level : DisplayObject = parent;
        var found : Bool = false;
        while (level != stage && !found){
            if (Std.is(level, UIPages)) {
				found = cast(level, UIPages).goToPageId(_goTo, _transition);
            }
            level = level.parent;
        }
    }
    
    
    override public function touchCancel() : Void{
        drawButton();
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        _enabled = false;
    }
    
/**
 * Set button label
 */
    override private function set_text(value : String) : String{
        if (value == "") {
            value = " ";
        }
        if (MadXML.parse("<t>" + value + "</t>").hasChildren) {
            //	var xmlString:String = XML(value).toXMLString();
            _label.htmlText = value;
            _shadowLabel.htmlText = value;
            _shadowLabel.setTextFormat(new TextFormat(null, null, _darkFormat.color));
        }
        else {
            _label.text = value;
            _shadowLabel.text = value;
        }
        _textColour = _label.getTextFormat().color;
        drawButton();
        return value;
    }
    
    /**
 * Set button width
 */
    private function set_fixwidth(value : Float) : Float{
        _fixwidth = value;
        drawButton();
        return value;
    }
    
/**
 * Set button colour
 */
    private function set_colour(value : Int) : Int{
        _colour = value;
        _darkFormat.color = ((Colour.power(_colour) > 0.5)) ? Colour.darken(_colour) : Colour.darken(_colour, -128);
        drawButton();
        return value;
    }
    
/**
 * Set button curve
 */
    private function set_curve(value : Float) : Float{
        _curve = value;
        drawButton();
        return value;
    }
    
    
    public function setGoTo(goTo : String, transition : String = "") : Void{
        _goTo = goTo;
        _transition = transition;
    }
    
    
    private function sizeY() : Float{
        return 2 * _sizeY;
    }
    
    
    private function drawButton(pressed : Bool = false) : Void{
        var width : Float = Math.max(_fixwidth, _label.width + 2 * _gap);
        graphics.clear();

            var height : Float = (_skinHeight > 0) ? _skinHeight : _label.height + sizeY();
            var matr : Matrix = new Matrix();
            var gradient : Array<UInt> = (pressed) ? [Colour.darken(_colour, 128), Colour.lighten(_colour), Colour.darken(_colour)] : [Colour.lighten(_colour, 80), Colour.darken(_colour), Colour.darken(_colour)];
            matr.createGradientBox(width, height, Math.PI / 2, 0, 0);
            if (_colours.length > 0) {
                graphics.beginFill(_colours[0]);
            }
            else {
                if (_style7) {
					var colour7:Int = (_colours.length > 0) ? _colours[0] : _colour;
                    graphics.beginFill(pressed ? Colour.lighten(colour7, 8) : colour7);
                }
                else {
                    graphics.beginGradientFill(GradientType.LINEAR, [Colour.darken(_colour), Colour.lighten(_colour)], [1.0, 1.0], [0x00, 0xff], matr);
                }
            }
            graphics.drawRoundRect(0, 0, width, height, _curve);
            
            if (!_style7) {
                if (_colours.length > 2 && pressed) {
                    graphics.beginFill(_colours[2]);
                }
                else if (_colours.length > 1) {
                    graphics.beginFill(_colours[1]);
                }
                else {
                    graphics.beginGradientFill(GradientType.LINEAR, gradient, [1.0, 1.0, 1.0], [0x00, 0x80, 0xff], matr);
                }
                graphics.drawRoundRect(_border, _border, width - 2 * _border, height - 2 * _border, _curve);
            }
            if (_skinHeight > 0) {
                _label.y = (_skinHeight - _label.height) / 2;
                _shadowLabel.y = _label.y - 1;
            }
            else {
                _label.y = _sizeY - 1;
                _shadowLabel.y = _sizeY - SHADOW_OFFSET - 1;
            } 

        if (_fixwidth > _label.width + 2 * _gap) {
            _label.x = (_fixwidth - _label.width) / 2;
            _shadowLabel.x = _label.x - 1;
        }
        else {
            _label.x = _gap;
            _shadowLabel.x = _gap - SHADOW_OFFSET;
        }  //	cacheAsBitmap = true;  
    }
    
/**
 * Set height of button
 */
    private function set_skinHeight(value : Float) : Float {
        _skinHeight = value;
        drawButton();
        return value;
    }
    
    
    override public function destructor() : Void{
        removeEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
}
