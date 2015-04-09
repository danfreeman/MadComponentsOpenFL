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


import openfl.events.MouseEvent;
import openfl.display.DisplayObject;
import openfl.display.GradientType;
import openfl.display.Shape;
import openfl.display.Graphics;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.geom.Matrix;
import openfl.text.TextFormat;

/**
 *  MadComponents picker component
 * <pre>
 * &lt;picker
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, ..."
 *    visible = "true|false"
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    border = "true|false"
 *    lines = "i,j,k..."
 *    sortBy = "IDENTIFIER"
 *    index = "INTEGER"
 *    height = "NUMBER"
 *    cursorheight = "NUMBER"
 *    jogable = "true|false"
 * /&gt;
 * </pre>
 */
class UIPicker extends UIList
{
    private var snapToCellCondition(get, never) : Bool;
    private var snapToCellPosition(get, never) : Float;

    private static inline var HEIGHT : Float = 160.0;
    private static inline var SPINNER_ALPHA : Float = 1.0;
    private static inline var SPINNER_SHADE : Float = 0x30;
    private static inline var SPINNER_CURSOR_HEIGHT : Float = 60.0;
    private static inline var SPINNER_CURSOR_COLOUR : Int = 0x666699;
    private static inline var SPINNER_CURSOR_COLOUR_DARK : Int = 0x333399;
    private static inline var SPINNER_CURSOR_COLOUR_HIGHLIGHT : Int = 0xCCCCFF;
    private static inline var SPINNER_CURSOR_ALPHA : Float = 0.3;
    private static inline var CURVE : Float = 10.0;
    private static inline var WARP : Float = 3.0;
    private static inline var SHADOW : Float = 10.0;
    private static inline var GREYED_OUT_LIGHT : Int = 0xCCCCCC;
    private static inline var GREYED_OUT_DARK : Int = 0x999999;
    
    public static var PICKER_DECAY : Float = 0.96;
    
    private var _spinner : Shape = null;
    private var _spinnerColour : Int = 0x333333;
    private var _left : Bool;
    private var _right : Bool;
    private var _pickerHeight : Float = HEIGHT;
    private var _cursorHeight : Float = SPINNER_CURSOR_HEIGHT;
    private var _defaultStyle : TextFormat;
    private var _jogable : Bool = false;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes, left : Bool = false, right : Bool = false, pickerHeight : Float = -1, cursorHeight : Float = -1)
    {
        if (pickerHeight > 0) {
            _pickerHeight = pickerHeight;
        }
        if (cursorHeight > 0) {
            _cursorHeight = cursorHeight;
        }
        if (xml.has.height) {
            _pickerHeight = Std.parseFloat(xml.att.height);
        }
        if (xml.has.cursorHeight) {
            _cursorHeight = Std.parseFloat(xml.att.cursorHeight);
        }
        if (xml.has.jogable) {
            _jogable = xml.att.jogable == "true";
        }
        super(screen, xml, attributes);
        //	_decay = PICKER_DECAY;
        _deltaThreshold = 4.0;
        _mask = new Shape();
        _spinner = new Shape();
        _left = left;
        _right = right;
        drawSpinner();
        addChild(_spinner);
	    addChild(this.mask = _mask);
    }
    
    
    override private function deltaToDecay(delta : Float) : Float{
        return PICKER_DECAY;
    }
    
    /**
 *  Draw picker chrome
 */
    private function drawSpinner() : Void{
        var matr : Matrix = new Matrix();
        
        _mask.graphics.clear();
        _mask.graphics.beginFill(0);
        drawShape(_mask.graphics);
        
        _mask.visible = false;
        
        _spinner.graphics.clear();
        
        matr.createGradientBox(_attributes.width, _pickerHeight, Math.PI / 2, 0, 0);
        _spinner.graphics.beginGradientFill(GradientType.LINEAR, [_spinnerColour, _spinnerColour, _spinnerColour, _spinnerColour, _spinnerColour, _spinnerColour], [SPINNER_ALPHA, 0.2, 0.0, 0.0, 0.2, SPINNER_ALPHA], [0x00, SPINNER_SHADE / 2, SPINNER_SHADE, 0xff - SPINNER_SHADE, 0xff - SPINNER_SHADE / 2, 0xff], matr);
        _spinner.graphics.lineStyle(1.5, 0x333333, 1.0, true);
        drawShape(_spinner.graphics);
        _spinner.graphics.lineStyle(0, 0, 0);
        _spinner.graphics.endFill();
        _spinner.graphics.beginGradientFill(GradientType.LINEAR, [0x000000, 0xDDDDDD, 0xDDDDDD, 0x000000], [1.0, 1.0, 1.0, 1.0], [0x00, SPINNER_SHADE, 0xff - SPINNER_SHADE, 0xff], matr);
        _spinner.graphics.drawRect(1, 0, 3, _pickerHeight);
        _spinner.graphics.drawRect(_attributes.width - 3, 0, 3, _pickerHeight);
        _spinner.graphics.endFill();
        if (_noScroll) {
            _spinner.graphics.beginFill(GREYED_OUT_LIGHT, SPINNER_CURSOR_ALPHA);
            _spinner.graphics.drawRect(0, (_pickerHeight - _cursorHeight) / 2, _attributes.width, _cursorHeight / 2);
			_spinner.graphics.endFill();
            _spinner.graphics.beginFill(GREYED_OUT_DARK, SPINNER_CURSOR_ALPHA);
            _spinner.graphics.drawRect(0, _pickerHeight / 2, _attributes.width, _cursorHeight / 2);
			_spinner.graphics.endFill();
        }
        else {
            matr.createGradientBox(_attributes.width, _cursorHeight / 2, Math.PI / 2, 0, (_pickerHeight - _cursorHeight) / 2);
            _spinner.graphics.beginGradientFill(GradientType.LINEAR, [SPINNER_CURSOR_COLOUR_HIGHLIGHT, SPINNER_CURSOR_COLOUR], [SPINNER_CURSOR_ALPHA, SPINNER_CURSOR_ALPHA], [0x00, 0xff], matr);
            _spinner.graphics.drawRect(0, (_pickerHeight - _cursorHeight) / 2, _attributes.width, _cursorHeight / 2);
            
            _spinner.graphics.beginFill(SPINNER_CURSOR_COLOUR_DARK, SPINNER_CURSOR_ALPHA);
            _spinner.graphics.drawRect(0, _pickerHeight / 2, _attributes.width, _cursorHeight / 2);
			_spinner.graphics.endFill();
            
            _spinner.graphics.beginFill(SPINNER_CURSOR_COLOUR);
            _spinner.graphics.drawRect(0, (_pickerHeight - _cursorHeight) / 2, _attributes.width, 1.5);
            _spinner.graphics.drawRect(0, (_pickerHeight + _cursorHeight) / 2 - 1, _attributes.width, 1.5);
			_spinner.graphics.endFill();
        }
        
        matr.createGradientBox(_attributes.width, SHADOW, Math.PI / 2, 0, (_pickerHeight + _cursorHeight) / 2);
        _spinner.graphics.beginGradientFill(GradientType.LINEAR, [_spinnerColour, _spinnerColour], [SPINNER_ALPHA / 3, 0.0], [0x00, 0xff], matr);
        _spinner.graphics.drawRect(0, (_pickerHeight + _cursorHeight) / 2, _attributes.width, _cursorHeight / 2);
		_spinner.graphics.endFill();
    }
    
    /**
 *  Basic picker shape
 */
    public function drawShape(graphics : Graphics, x : Float = 0, y : Float = 0, partial : Int = 0) : Void{
		
        var height : Float = ((partial >= 0)) ? y + _pickerHeight - 1 : y + _pickerHeight / 2;
        var heightCurve : Float = ((partial >= 0)) ? y + _pickerHeight - 1 - CURVE : y + _pickerHeight / 2;
        if (partial > 0) {
            graphics.moveTo(x + _attributes.width, y + _pickerHeight / 2 - 1);
            if (_right) {
                graphics.curveTo(x + _attributes.width, y + _pickerHeight / 2 - 1, x + _attributes.width - WARP, heightCurve);
            }
        }
        else {
            graphics.moveTo(x + ((_left) ? (CURVE + 2 * WARP) : 0), y);
            graphics.lineTo(x + _attributes.width - ((_right) ? (CURVE + 2 * WARP) : 0), y);
            if (_right) {
                graphics.curveTo(x + _attributes.width - 2 * WARP, y, x + _attributes.width - WARP, y + CURVE);
                graphics.curveTo(x + _attributes.width + WARP, y + _pickerHeight / 2, x + _attributes.width - WARP, heightCurve);
            }
        }
        
        if (_right) {
            graphics.curveTo(x + _attributes.width - 2 * WARP, height, x + _attributes.width - CURVE - 2 * WARP, height);
        }
        else {
            graphics.lineTo(x + _attributes.width, height);
        }
        
        graphics.lineTo(x + ((_left) ? CURVE + 2 * WARP : 0), height);
        
        if (partial > 0) {
            
            if (_left) {
                graphics.curveTo(x + WARP, y + _pickerHeight - 1, x + WARP, y + _pickerHeight - 1 - CURVE);
                graphics.curveTo(x - WARP, y + _pickerHeight / 2, x + WARP, y + _pickerHeight / 2 - 1);
            }
            else {
                graphics.lineTo(x, y + _pickerHeight / 2 - 1);
            }
        }
        else {
            
            if (_left) {
                graphics.curveTo(x + WARP, height, x + WARP, heightCurve);
                graphics.curveTo(x - WARP, y + _pickerHeight / 2, x + WARP, y + CURVE);
                graphics.curveTo(x + WARP, y, x + CURVE + 2 * WARP, y);
            }
            else {
                graphics.lineTo(x, y);
            }
        }
    }
    
    
    /**
 *  If false, scrolling is locked.
 */
    override private function set_scrollEnabled(value : Bool) : Bool{
        if (_slider.numChildren > 1) {
            if (value) {
                if (_defaultStyle != null) {
                    for (i in 1..._slider.numChildren){
                        cast((_slider.getChildAt(i)), UILabel).setTextFormat(_defaultStyle);
                    }
                }
            }
            else {
                if (!_noScroll) {
                    _defaultStyle = cast((_slider.getChildAt(1)), UILabel).getTextFormat();
                }
                var greyedOutStyle : TextFormat = new TextFormat(_defaultStyle.font, _defaultStyle.size, GREYED_OUT_LIGHT);
                for (j in 1..._slider.numChildren){
                    cast((_slider.getChildAt(j)), UILabel).setTextFormat(greyedOutStyle);
                }
            }
        }
        super.scrollEnabled = value;
        drawSpinner();
        return value;
    }
    
    
    override private function get_height() : Float{
        return _pickerHeight;
    }
    
    /**
 *  Rearrange the layout to new screen dimensions
 */
    override public function layout(attributes : Attributes) : Void{
        super.layout(attributes);
        if (_spinner != null) {
            drawSpinner();
        }
    }
    
    
    override private function calculateMaximumSlide() : Void{
        _scrollerHeight = _slider.height - ((_refresh != null) ? UIList.TOP : 0);
        if (_count > 0 && (_cellHeight < 0 || _autoLayout)) {
            _cellHeight = Math.ceil((_slider.height - _top - ((_refresh != null) ? UIList.TOP : 0)) / _count);
        }
        _maximumSlide = (_cellHeight * (_count - 3) - _offset);
        if (_maximumSlide < 0) {
            _maximumSlide = 0;
        }
    }
    
    
    override private function startMovement0() : Bool{
        if (sliderY > _offset) {
            _endSlider = -_offset;
            return true;
        }
        else if (sliderY < -(_cellHeight * (_count - 3) - _offset)) {
            _endSlider = _cellHeight * (_count - 3) - _offset;
            return true;
        }
        
        return false;
    }
    
    
    /**
 *  Data object for last row clicked
 */
    override private function get_row() : Dynamic{
        return ((_pressedCell >= 0)) ? _filteredData[_pressedCell + 1] : null;
    }
    
    
    override private function illuminate(pressedCell : Int = -1, dispatch : Bool = true, show : Bool = true) : Void{
        if (_pressedCell >= 0 && _pressedCell < _count) {
            if (show && _highlightPressed) {
                _highlight.graphics.beginFill(_highlightColour);
                _highlight.graphics.drawRect(0, _top + (_pressedCell + 1) * _cellHeight + 1, _width, _cellHeight - 1);
				_highlight.graphics.endFill();
            }
            activate(dispatch);
        }
    }
    
    
    private function jogPicker() : Void{
        var oldPressedCell : Int = _pressedCell;
        _pressedCell = Math.floor(_slider.mouseY / _cellHeight) - 1;
        if (_pressedCell >= 0 && _pressedCell != oldPressedCell) {
            if (_pressedCell > _count - 3) {
                _pressedCell = _count - 3;
            }
            setIndex(_pressedCell, true);
        }
        else {
            _pressedCell = oldPressedCell;
        }
    }
    
    
    override private function mouseUp(event : MouseEvent) : Void{
        super.mouseUp(event);
        if (_jogable && !_classic && _distance < UIScrollVertical.THRESHOLD) {
            jogPicker();
        }
    }
    
    
    override private function pressButton(show : Bool = true) : DisplayObject{
        if (_jogable && _classic) {
            jogPicker();
        }
        return null;
    }
    
    
    override private function drawScrollBar() : Void{
        
    }
    
    
    private function get_snapToCellCondition() : Bool{
        return sliderY < _offset && sliderY > -(_cellHeight * (_count - 3) - _offset);
    }
    
    
    private function get_snapToCellPosition() : Float{
        if (snapToCellCondition) {
            return -_cellHeight * Math.round((sliderY - _offset) / _cellHeight) - _offset;
        }
        else if (sliderY > _offset) {
            return -_offset;
        }
        else if (sliderY < -(_cellHeight * (_count - 3) - _offset)) {
            return _cellHeight * (_count - 3) - _offset;
        }
        else {
            return sliderY;
        }
    }
    
    
    override private function stopMovement() : Void{
        if (snapToCellCondition) {
            _endSlider = snapToCellPosition;
            _delta = (-_endSlider - sliderY) * UIScrollVertical.BOUNCE;
            if (Math.abs(sliderY + _endSlider) < 1.0) {
                stopMovement0();
            }
        }
        else {
            stopMovement0();
        }
    }
    
    
    private function stopMovement0() : Void{
        _moveTimer.stop();
        hideScrollBar();
        _pressedCell = -Math.round((sliderY - _offset) / _cellHeight);
        dispatchEvent(new Event(Event.CHANGE));
    }
    
    /**
 *  Draw picker background
 */
    override public function drawComponent() : Void{
		graphics.clear();
        if (_colours != null && _colours.length > 0) {
            graphics.beginFill(_colours[0]);
        }
        else {
            graphics.beginFill(0xFFFFFF);
        }
        graphics.drawRect(0, 0, _attributes.width, _attributes.height);
    	graphics.endFill();
	}
    
    /**
 *  Set array of objects data
 */
    override private function set_data(value : Array<Dynamic>) : Array<Dynamic> {
        var datas : Array<Dynamic> = value.concat([]);
        datas.insert(0, {label:" "});
		datas.push({label:" "});
        super.data = datas;
        _offset = (_pickerHeight - _cellHeight * (Math.floor(_pickerHeight / _cellHeight) + 1)) / 2;
        _offset += _cellHeight * (Math.floor(_pickerHeight / (2 * _cellHeight)) - 1);
        if (Math.floor(_pickerHeight / _cellHeight) % 2 == 1) 
            _offset += _cellHeight / 2;
        sliderY = _offset;
        if (_spinner != null) {
            setChildIndex(_spinner, numChildren - 1);
        }
        return value;
    }
}
