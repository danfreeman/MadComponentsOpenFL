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



import openfl.display.PixelSnapping;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.geom.ColorTransform;
import openfl.text.TextFormat;


/**
 *  Button for MadComponents tab bar
 */
class UITabButton extends UIButton
{
    public var state(never, set) : Bool;
    public var image(never, set) : String;
    public var imageClass(never, set) : Class<Dynamic>;
	public var imageBitmapDataClass(never, set) : Class<Dynamic>;

    
    public static inline var CLEAR : String = "clear";
    
    public static inline var TAB_HEIGHT : Float = 26.0;
    private static inline var ICON_Y : Float = 6.0;
    private var _state : Bool = false;
    private var _screen : Sprite;
    private var _icon : Sprite;
    private var _tiny : Bool;
    private var _iconBitmap : Bitmap;
    
    
    private var SMALL_FORMAT : TextFormat = new TextFormat("Tahoma", 12, 0xFFFFFF);
    
    
    public function new(screen : Sprite, xx : Float, yy : Float, text : String, colour : Int, tiny : Bool = false, style7 : Bool = false)
    {
        _icon = new Sprite();
        _tiny = tiny;
_screen = screen;
		super(_screen, xx, yy, text, colour, [1, 1, 1, 1, 1], tiny, style7);
		addChild(_icon);
        _icon.mouseEnabled = _icon.mouseChildren = false;
        filters = null;
        screen.addEventListener(CLEAR, clearState);
    }
    
    
    override private function init() : Void{
        if (!_tiny) 
            _format = SMALL_FORMAT;
        _border = 0.5;
    }
    
    
    private function clearState(event : Event) : Void{
        drawButton(_state = false);
    }
    
/**
 *  Set the state of the button
 */
    private function set_state(value : Bool) : Bool{
        drawButton(_state = value);
        return value;
    }
    
/**
 *  Set the button label
 */
    override private function set_text(value : String) : String{
        _label.text = value;
        drawButton(_state);
        return value;
    }
    
/**
 *  Draw the button
 */
    override private function drawButton(pressed : Bool = false) : Void{
        super.drawButton(pressed);
		var height : Float = _label.height + sizeY();
        if (_style7) {
            var width : Float = Math.max(_fixwidth, _label.width + 2 * _gap);
            graphics.clear();
            graphics.beginFill(_colour);
            graphics.drawRect(0, 0, width, height);
        }
        var myColor : ColorTransform = new ColorTransform();
        _icon.visible = true;
        if (pressed) {
            myColor.color = 0xCCCCFF;
		}
        _icon.transform.colorTransform = myColor;
        _label.x = Math.max((_fixwidth - _label.width) / 2, 0);
        _shadowLabel.x = _label.x - 1;
        if (!_tiny) {
            _label.y = height - _label.height;
            _shadowLabel.y = _label.y - 1;
        }
    }
    
/**
 *  Set the button icon
 */
    private function set_image(value : String) : String{
        imageClass = Type.getClass(Type.resolveClass(value));
        return value;
    }
    
/**
 *  Set the button icon class
 */
    private function set_imageClass(value : Class<Dynamic>) : Class<Dynamic>{
        if (_icon.numChildren > 0) {
            _icon.removeChildAt(0);
		}
        if (value != null) {
            _iconBitmap = Type.createInstance(value, []);
            _icon.addChild(_iconBitmap);
            _icon.x = (_fixwidth - _icon.width) / 2;
            _icon.y = ICON_Y;
        }
        drawButton(_state);
        return value;
    }
	
	
/**
 *  Set the button icon image
 */
    private function set_imageBitmapDataClass(value : Class<Dynamic>) : Class<Dynamic>{
        if (_icon.numChildren > 0) {
            _icon.removeChildAt(0);
		}
        if (value != null) {
            _iconBitmap = new Bitmap(Type.createInstance(value, [0, 0]));
            _icon.addChild(_iconBitmap);
            _icon.x = (_fixwidth - _icon.width) / 2;
            _icon.y = ICON_Y;
        }
        drawButton(_state);
        return value;
    }
    
    
    public function pixelSnapImage(offset : Float) : Void{
        _icon.scaleX = _icon.scaleY = 1 / UI.scale;
        _icon.y = (TAB_HEIGHT - _icon.height) / 2 + 2 + offset;
        _iconBitmap.pixelSnapping = PixelSnapping.ALWAYS;
    }
    
    
    override private function sizeY() : Float{
        return (_tiny) ? 2 * _sizeY : TAB_HEIGHT;
    }
    
/**
 *  Set the width of the button
 */
    override private function set_fixwidth(value : Float) : Float{
        _fixwidth = value;
        drawButton(_state);
        _icon.x = (_fixwidth - _icon.width) / 2;
        return value;
    }
    
    
    override private function mouseUp(event : MouseEvent) : Void{
        if (event.target == this) {
            _screen.dispatchEvent(new Event(CLEAR));
            drawButton(_state = true);
        }
        else {
            drawButton(_state);
        }
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
    }
    
    
    override public function destructor() : Void{
        stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        _screen.removeEventListener(CLEAR, clearState);
        super.destructor();
    }
}
