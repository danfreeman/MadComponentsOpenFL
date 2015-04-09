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



import openfl.display.Shape;
import openfl.display.DisplayObject;
import openfl.display.GradientType;
import openfl.display.Sprite;
import openfl.geom.Matrix;

/**
 * UIWindow for popup windows
 * <pre>
 * &lt;
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, ..."
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    alignH = "left|right|centre|fill"
 *    alignV = "top|bottom|centre|fill"
 *    visible = "true|false"
 *    lines = "true|false"
 *    widths = "i(%),j(%),k(%)…"
 *    heights = "i(%),j(%),k(%)…"
 *    pickerHeight = "NUMBER"
 *    border = "true|false"
 *    autoLayout = "true|false"
 *    lazyRender = "true|false"
 *	  alt = "true|false"
 * /&gt;
 * </pre>
 * */
// 
class UIWindow extends MadSprite
{
    public var curve(get, never) : Float;
    public var centred(get, never) : Bool;
    public var leftButton(get, never) : UIBackButton;
    public var rightButton(get, never) : UIBackButton;
    public var rightButtonText(get, set) : String;
    public var leftButtonText(get, set) : String;

    
    public static inline var CURVE : Float = 32.0;
    private static inline var OUTLINE : Float = 2.0;
    private static inline var LINE_COLOUR : Int = 0xBABABA;
    private static inline var FILL_COLOUR : Int = 0x666666;
    private static inline var FILL_COLOUR7 : Int = 0xF5F5F5;
    private static inline var SHADOW_OFFSET : Float = 4.0;
    private static inline var SHADOW_COLOUR : Int = 0x000000;
    private static inline var SHADOW_ALPHA : Float = 0.2;
    private static inline var OVERLAP : Float = 24.0;
    private static inline var BUTTON_BAR_HEIGHT : Float = 26.0;
    
    private var _curve : Float = CURVE;
    private var _centred : Bool = false;
    private var _iMask : Shape = null;
    private var _colour : Int;
    private var _leftButton : UIBackButton = null;
    private var _rightButton : UIBackButton = null;
    private var _lineColour : Int = LINE_COLOUR;
	private var _xml : MadXML;
    
    /**
 *  A MadComponents pop-up window
 */
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes = null, curve : Float = -1, centre : Bool = true)
    {
        super(screen, attributes);_xml = xml;
        _centred = centre;
        if (curve >= 0) {
            _curve = curve;
        }
        if (_xml.has.alt && _xml.att.alt != "true" && !_attributes.style7) {
            addChild(mask = _iMask = new Shape());
        }
        if (_xml.has.leftButton) {
            leftButtonText = _xml.att.leftButton;
        }
        if (_xml.has.rightButton) {
            rightButtonText = _xml.att.rightButton;
        }
        if (_leftButton == null && _rightButton == null) {
            drawBackground();
        }
    }
    
/**
 *  Draw window chrome
 */
    public function drawBackground(colours : Array<Int> = null) : Void{
        graphics.clear();
        if (colours == null) {
            colours = _attributes.backgroundColours;
        }
        
        if (!_attributes.style7) {
            if (colours.length > 3) {
                graphics.beginFill(colours[3], SHADOW_ALPHA);
            }
            else {
                graphics.beginFill(SHADOW_COLOUR, SHADOW_ALPHA);
            }
            graphics.drawRoundRect(_attributes.x - _curve + SHADOW_OFFSET, _attributes.y - _curve + SHADOW_OFFSET, _attributes.width + 2 * _curve, _attributes.height + 2 * _curve, _curve);
        }
        
        if (colours.length == 1) {
            graphics.beginFill(_colour = colours[0]);
        }
        else if (colours.length > 1) {
            var matr : Matrix = new Matrix();
            matr.createGradientBox(width, height, Math.PI / 2, 0, 0);
            graphics.beginGradientFill(GradientType.LINEAR, [_colour = colours[0], colours[1]], [1.0, 1.0], [0x00, 0xff], matr);
        }
        else {
            graphics.beginFill(_colour = ((_attributes.style7) ? FILL_COLOUR7 : FILL_COLOUR));
        }
        
        graphics.drawRoundRect(_attributes.x - _curve, _attributes.y - _curve, _attributes.width + 2 * _curve, _attributes.height + 2 * _curve, _curve);
        graphics.endFill();
        
        if (_iMask != null) {
            _iMask.graphics.beginFill(0);
            _iMask.graphics.drawRoundRect(_attributes.x - _curve, _attributes.y - _curve, _attributes.width + 2 * _curve, _attributes.height + 2 * _curve, _curve);
            _iMask.graphics.endFill();
            
            var matr0 : Matrix = new Matrix();
            matr0.createGradientBox(2 * _attributes.width, _attributes.width / 2 + OVERLAP, 0, -_attributes.width / 2, -_attributes.width / 2 + OVERLAP);
            graphics.beginGradientFill(GradientType.RADIAL, [Colour.lighten(_colour, 64), _colour], [1, 1], [0, 255], matr0);
            graphics.drawEllipse(-_attributes.width / 2, -_attributes.width / 2 + OVERLAP, 2 * _attributes.width, _attributes.width / 2);
            graphics.endFill();
        }
        
        if (colours.length > 2) {
            _lineColour = colours[2];
        }
        
        if (!_attributes.style7) {
            graphics.lineStyle(OUTLINE + ((_iMask != null) ? OUTLINE : 0), _lineColour, 1.0, true);
        }
        
        graphics.drawRoundRect(_attributes.x - _curve, _attributes.y - _curve, _attributes.width + 2 * _curve, _attributes.height + 2 * _curve, _curve);
        graphics.endFill();
        if (_leftButton != null && _leftButton.visible || _rightButton != null && _rightButton.visible) {
            graphics.beginFill(_lineColour);
            graphics.lineStyle(0, 0, 0);
            graphics.drawRect(-_curve, _attributes.height - BUTTON_BAR_HEIGHT, _attributes.width + 2 * _curve, 1);
            if (_leftButton != null && _leftButton.visible && _rightButton != null && _rightButton.visible) {
                graphics.drawRect(_attributes.width / 2, _attributes.height - BUTTON_BAR_HEIGHT + 1, 1, BUTTON_BAR_HEIGHT + _curve);
            }
        }
    }
    
    
    private function get_curve() : Float{
        return _curve;
    }
    
    
    private function get_centred() : Bool{
        return _centred;
    }
    
    
    private function get_leftButton() : UIBackButton{
        return _leftButton;
    }
    
    
    private function get_rightButton() : UIBackButton{
        return _rightButton;
    }
    
    
    private function set_rightButtonText(value : String) : String{
        if (_rightButton != null) {
            _rightButton.text = value;
        }
        else {
            _rightButton = new UIBackButton(this, _attributes.width / 2, _attributes.height - BUTTON_BAR_HEIGHT - 4, value, 0, false, false, false);
        }
        _rightButton.visible = value != "";
        _rightButton.fixwidth = _attributes.width / 2 + _curve;
        drawBackground();
        return value;
    }
    
    
    private function get_rightButtonText() : String{
        return (_rightButton != null) ? _rightButton.text : "";
    }
    
    
    private function set_leftButtonText(value : String) : String{
        if (_leftButton != null) {
            _leftButton.text = value;
        }
        else {
            _leftButton = new UIBackButton(this, -_curve, _attributes.height - BUTTON_BAR_HEIGHT - 4, value, 0, false, false, false);
        }
        _leftButton.visible = value != "";
        _leftButton.fixwidth = _attributes.width / 2 + _curve;
        drawBackground();
        return value;
    }
    
    
    private function get_leftButtonText() : String{
        return (_leftButton != null) ? _leftButton.text : "";
    }
    
    
    public function resize(width : Float, height : Float) : Void{
        _xml.setAttribute("width", Std.string(width));
        _xml.setAttribute("height", Std.string(height));
        layout(_attributes);
    }
}
