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



import openfl.display.GradientType;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.geom.Matrix;
import openfl.text.TextFormat;

/**
 *  MadComponents Navigation Bar
 */
class UINavigationBar extends Sprite
{
    public var text(never, set) : String;
    public var leftButton(get, never) : UIButton;
    public var leftButtonText(never, set) : String;
    public var rightButtonText(never, set) : String;
    public var backButton(get, never) : UIBackButton;
    public var rightButton(get, never) : UIButton;
    public var rightArrow(get, never) : UIBackButton;
    public var colour(get, set) : Int;
    public var fixwidth(never, set) : Float;
    public var centrePanel(get, set) : Sprite;

    
    public static inline var HEIGHT : Float = 46.0;
    private static inline var COLOUR : Int = 0x9999BB;
    private static inline var COLOUR7 : Int = 0xF6F6F6;
    private static inline var LEFTCOLOUR : Int = 0x7777AA;
    private static inline var DONECOLOUR : Int = 0xAA7777;
    private static inline var SIDES : Float = 100.0;
    private static inline var Y : Float = 6;
    
    private var FORMAT : TextFormat = new TextFormat("Tahoma", 20, 0xFFFFFF);
    private var FORMAT7 : TextFormat = new TextFormat("Tahoma", 18, 0x000000);
    private var DARK_FORMAT : TextFormat = new TextFormat("Tahoma", 20, 0x333366);
    private var DARK_FORMAT7 : TextFormat = new TextFormat("Tahoma", 18, 0xFFFFFF);
    
    private var _label : UILabel;
    private var _shadowLabel : UILabel;
    private var _leftButton : UIButton;
    private var _backButton : UIBackButton;
    private var _attributes : Attributes;
    private var _rightButton : UIButton;
    private var _rightArrow : UIBackButton;
    private var _colour : Int;
    private var _centrePanel : Sprite;
    private var _centreItem : Sprite = null;
    private var _xml : MadXML;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
    super();
        screen.addChildAt(this, 0);
        _xml = xml;
        _attributes = attributes;
        
        _colour = (xml.has.barColour) ? UI.toColourValue(xml.att.barColour) : attributes.colour;
        
        drawBar();
        var default7 : Bool = _attributes.style7 && _colour == Attributes.COLOUR7;
        var format : TextFormat = (default7) ? FORMAT7 : FORMAT;
        var shadowFormat : TextFormat = (default7) ? DARK_FORMAT7 : DARK_FORMAT;
        _shadowLabel = new UILabel(this, 0, Y + 1, "", shadowFormat);
        _label = new UILabel(this, 0, Y + 2, "", format);
        _leftButton = new UIButton(this, 8, Y - 1, "<font size=\"14\">left</font>", (_attributes.style7) ? _colour : LEFTCOLOUR, [], true, attributes.style7);  // JSS  
        _backButton = new UIBackButton(this, 4, 0, "Back", COLOUR, false, !_attributes.style7, !xml.has.leftLink);
        _rightArrow = new UIBackButton(this, 200, 0, "Next", COLOUR, true, !_attributes.style7, xml.has.rightArrow);
        _rightButton = new UIButton(this, 200, Y - 1, "<font size=\"14\">done</font>", (_attributes.style7) ? _colour : DONECOLOUR, [], true, attributes.style7);
        _backButton.visible = _leftButton.visible = _rightButton.visible = _rightArrow.visible = false;
        addChild(_centrePanel = new Sprite());
        initialiseClassicButtons();
        adjustButtons();
    }
    
    
    private function initialiseClassicButtons() : Void{
        if (_xml.has.leftButton) {
            leftButtonText = _xml.att.leftButton;
            leftButton.visible = true;
        }
        if (_xml.has.rightButton) {
            rightButtonText = _xml.att.rightButton;
            rightButton.visible = true;
        }
        if (_xml.has.rightArrow) {
            rightButtonText = _xml.att.rightArrow;
            rightButton.visible = false;
            rightArrow.visible = true;
        }
        if (_xml.has.leftArrow) {
            backButton.text = _xml.att.leftArrow;
        }
    }

    
    private function adjustButtons() : Void{
        _rightArrow.x = _attributes.width - _rightArrow.width - ((_attributes.style7) ? 6 : 0);
        _rightButton.x = _attributes.width - _rightButton.width - 8;
        _centrePanel.x = _attributes.width / 2;
    }
    
    /**
 *  Text of navigation bar
 */
    private function set_text(value : String) : String{
        _label.text = value;
        _shadowLabel.text = value;
        _label.x = (_attributes.width - _label.width) / 2;
        _shadowLabel.x = _label.x - 1;
        return value;
    }
    
    
    /**
 *  Left button
 */
    private function get_leftButton() : UIButton{
        return _leftButton;
    }
    
    /**
 *  Left button/arrow text
 */
    private function set_leftButtonText(value : String) : String{
        _leftButton.text = "<font size=\"14\">" + value + "</font>";
        _backButton.text = value;
        return value;
    }
    
    /**
 *  Right button/arrow text
 */
    private function set_rightButtonText(value : String) : String{
        _rightButton.text = "<font size=\"14\">" + value + "</font>";
        _rightArrow.text = value;
        adjustButtons();
        return value;
    }
    
    
    /**
 *  Back button
 */
    private function get_backButton() : UIBackButton{
        return _backButton;
    }
    
    /**
 *  Right button
 */
    private function get_rightButton() : UIButton{
        return _rightButton;
    }
    
    /**
 *  Right arrow button
 */
    private function get_rightArrow() : UIBackButton{
        return _rightArrow;
    }
    
    /**
 *  Colour of navigation bar
 */
    private function set_colour(value : Int) : Int{
        _colour = value;
        drawBar();
        return value;
    }
    
    /**
 *  Colour of navigation bar
 */
    private function get_colour() : Int{
        return _colour;
    }
    
    
    /**
 *  Width of navigation bar
 */
    private function set_fixwidth(value : Float) : Float{
        _attributes.width = value;
        _label.x = (_attributes.width - _label.width) / 2;
        _shadowLabel.x = _label.x - 1;
        adjustButtons();
        drawBar();
        return value;
    }
    
    
    private function get_centrePanel() : Sprite{
        return _centrePanel;
    }
    
    
    private function set_centrePanel(value : Sprite) : Sprite{
        if (_centreItem != null) {
            _centrePanel.removeChild(_centreItem);
            _centreItem = null;
        }
        if (value != null) {
            _centrePanel.addChild(_centreItem = value);
            value.x = -value.width / 2;
            value.y = (HEIGHT - value.height) / 2;
        }
        return value;
    }
    
    /**
 *  Draw navigation bar
 */
    private function drawBar() : Void{
        var matr : Matrix = new Matrix();
        matr.createGradientBox(_attributes.width, HEIGHT, Math.PI / 2, 0, 0);
        graphics.clear();
        if (_attributes.style7) {
            graphics.beginFill(_colour);
        }
        else {
            graphics.beginGradientFill(GradientType.LINEAR, [Colour.lighten(_colour, 64), Colour.darken(_colour)], [1.0, 1.0], [0x00, 0xff], matr);
        }
        graphics.drawRect(0, 0, _attributes.width, HEIGHT);
        graphics.endFill();
        if (_attributes.style7) {
            graphics.beginFill(Colour.darken(_colour));
            graphics.drawRect(0, HEIGHT - 1, _attributes.width, 1);
            graphics.endFill();
        }
    }
    
    
    override public function get_height() : Float{
        return HEIGHT;
    }
    
    
    public function destructor() : Void{
        _leftButton.destructor();
        _rightButton.destructor();
        _backButton.destructor();
        _rightArrow.destructor();
    }
}

