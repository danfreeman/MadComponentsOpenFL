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

import com.danielfreeman.extendedmadness.UISimpleDataGrid;


import com.danielfreeman.extendedmadness.*;
import openfl.utils.Timer;
import openfl.events.TimerEvent;
import openfl.events.Event;
import openfl.display.Sprite;
import openfl.display.Shape;
import openfl.display.DisplayObject;
import com.danielfreeman.madcomponents.*;
import openfl.events.MouseEvent;
import openfl.geom.Point;
import openfl.display.BlendMode;
import openfl.geom.Matrix;
import openfl.display.GradientType;

/**
 * ScrollTouchGrids component
 * <pre>
 * &lt;scrollTouchGrids
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, ..."
 *    visible = "true|false"
 *    widths = "p,q,r..."
 *    scrollH = "true|false|auto"
 *    scrollV = "true|false"
 *    editable = "true|false"
 *    widths = "i(%),j(%),k(%)…"
 *    multiline = "true|false"
 *    titleBarColour = "#rrggbb"
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    border = "true|false"
 *    autoLayout = "true|false"
 *    tapToScale = "NUMBER"
 *    auto = "true|false"
 *    fixedColumns = "n"
 *    fixedColumnsColours = "#rrggbb, #rrggbb, ..."
 *    slideFixedColumns = "true|false"
 *    lockSides = "true|false"
 *    lockTopBottom = "true|false"
 *    alignGridWidths = "true|false"
 *    showPressed = "true|false"
 *    editButton = "true|false"
 *    editButtonColour = "#rrggbb"
 *    longClickEnabled = "true|false"
 *    &lt;title&gt;
 *    &lt;font&gt;
 *    &lt;headerFont&gt;
 *    &lt;model&gt;
 *    &lt;widths&gt; (depreciated)
 * /&gt;
 * </pre>
 */
class UIScrollTouchGrids extends UIScrollDataGrids
{
    public var showPressed(never, set) : Bool;
    public var pageUpVisible(never, set) : Bool;
    public var pageDownVisible(never, set) : Bool;
    public var editButton(never, set) : Bool;
    public var rowSelectColour(never, set) : Int;
    public var index(get, never) : Int;
    public var selectIndex(get, set) : Int;
//    public var selectDataGrid(get, never) : Int;

    
    public static inline var EDIT_BUTTON_MOUSE_DOWN : String = "editButtonMouseDown";
    public static inline var EDIT_BUTTON_MOUSE_UP : String = "editButtonMouseUp";
    public static inline var EDIT_BUTTON_LONG_CLICK : String = "editButtonLongClick";
    public static inline var EDIT_BUTTON_LONG_CLICK_END : String = "editButtonLongClickEnd";
    public static inline var ROW_CLICKED : String = "rowClicked";
    public static inline var ROW_SELECTED : String = "rowSelected";
    public static inline var LONG_ROW_SELECTED : String = "longRowSelected";
    public static inline var HEADER_DOWN : String = "headerDown";
    public static inline var HEADER_CLICKED : String = "headerClicked";
    public static inline var PAGE_UP : String = "pageUp";
    public static inline var PAGE_DOWN : String = "pageDown";
    
    private static inline var ROW_SELECT_COLOUR : Int = 0xAAAAFF;
    private static inline var EDIT_BUTTON_COLOUR : Int = 0xCC9966;
    private static inline var ROW_SELECT_LIMIT : Float = 64.0;
    private static inline var BUTTON_WIDTH : Float = 40.0;
    private static inline var BUTTON_HEIGHT : Float = 36.0;
    private static inline var SENSOR : Float = 20.0;
    private static inline var ARROW : Float = 10.0;
    private static inline var CURVE : Float = 5.0;
    private static inline var RADIUS : Float = 12.0;
    private static inline var ALPHA : Float = 0.5;
    private static inline var ROW_BORDER : Float = 6.0;
    private static inline var DELTAY_THRESHOLD : Float = 128.0;
    private static inline var SMALL_Y_THRESHOLD : Float = 16.0;
    private static inline var BUTTON_MOVE_THRESHOLD : Float = 20.0;
    private static inline var ARROW_COLOUR : Int = 0x333333;
    private static inline var ARROW_HIGHLIGHT_COLOUR : Int = 0xFFFFFF;
    private static inline var PAGE_BUTTON_ALPHA : Float = 0.2;
    private static inline var ARROW_SIZE : Float = 20.0;
    private static inline var BUTTON_COLOUR : Int = 0x333333;
    private static inline var PAGE_BUTTON_SENSOR_RADIUS : Float = 40.0;
    private static inline var PAGE_BUTTON_RADIUS : Float = 30.0;
    private static inline var LONG_ROW_THRESHOLD : Int = 64;
    
    private var _clickDelay : Timer = new Timer(150, 1);
    private var _slideTimer : Timer = new Timer(50, UIScrollDataGrid.STEPS);
    private var _rowSelectColour : Int = ROW_SELECT_COLOUR;
    private var _highlightedRowIndex : Int = -1;
    private var _highlightedDataGrid : UISimpleDataGrid = null;
    private var _originalNoScroll : Bool;
    private var _clickedRowIndex : Int;
    private var _lastMousePoint : Point = new Point(0, 0);
    private var _mouseDistance : Float = 0;
    private var _mouseDistanceX : Float = 0;
    private var _mouseDistanceY : Float = 0;
    private var _rowSelect : Bool = false;
    private var _showPressed : Bool;
    private var _temporaryRowHighlight : Shape;
    private var _editButton : Sprite = null;
    private var _editButtonColour : Int = EDIT_BUTTON_COLOUR;
    private var _deltaEditButtonX : Float;
    private var _editButtonMouseDown : Bool = false;
    private var _alt : Bool;
    private var _editButtonMoved : Bool = false;
    private var _editButtonLayer : Sprite;
    private var _headerClicked : Bool;
    private var _timer : Timer = new Timer(400, 1);
    private var _longClickDispatched : Bool = false;
    private var _upButton : Sprite = null;
    private var _downButton : Sprite = null;
    private var _upButtonArrow : Sprite = null;
    private var _downButtonArrow : Sprite = null;
    private var _pageButtonTarget : Dynamic = null;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        _alt = xml.has.alt && xml.att.alt == "true";
        _showPressed = xml.has.showPressed && xml.att.showPressed == "true";
        _temporaryRowHighlight = new Shape();
        _temporaryRowHighlight.blendMode = BlendMode.MULTIPLY;  //DARKEN;  
        _editButtonLayer = new Sprite();
        super(screen, xml, attributes);
		addChild(_temporaryRowHighlight);
        addChild(_editButtonLayer);
        setChildIndex(_temporaryRowHighlight, getChildIndex(_titleSlider) - 1);
        setChildIndex(_editButtonLayer, numChildren - 1);
        _clickDelay.addEventListener(TimerEvent.TIMER_COMPLETE, timerComplete);
        _slideTimer.addEventListener(TimerEvent.TIMER, slideMovement);
        _originalNoScroll = _noScroll;
        if (xml.has.editButtonColour) {
            _editButtonColour = UI.toColourValue(xml.att.editButtonColour);
        }
        if (xml.has.editButton && xml.att.editButton == "true") {
            createEditButton();
        }
        _scrollBarThreshold = 99999.9;
        if (xml.has.longClickEnabled && xml.att.longClickEnabled == "true") {
            _timer.addEventListener(TimerEvent.TIMER_COMPLETE, longClick);
        }
        if (xml.has.pageButtons && xml.att.pageButtons == "true") {
            _upButtonArrow = pageButton(null, true, true);
            _downButtonArrow = pageButton(null, false, true);
            _upButton = pageButton(null, true);
            _downButton = pageButton(null, false);
            positionPageButtons();
        }
    }
    
    
    private function set_showPressed(value : Bool) : Bool{
        _showPressed = value;
        return value;
    }
    
    
    private function set_pageUpVisible(value : Bool) : Bool{
        _upButton.visible = _upButtonArrow.visible = value;
        return value;
    }
    
    
    private function set_pageDownVisible(value : Bool) : Bool{
        _downButton.visible = _downButtonArrow.visible = value;
        return value;
    }
    
    
    private function pageButton(result : Sprite, up : Bool, justArrow : Bool = false, highlight : Bool = false) : Sprite{
        if (result == null) {
            result = new Sprite();
            addChild(result);
        }
        result.graphics.clear();
        if (!justArrow) {
            result.graphics.beginFill(BUTTON_COLOUR);  //, PAGE_BUTTON_ALPHA);  
            if (highlight) {
                result.graphics.drawCircle(0, 0, PAGE_BUTTON_SENSOR_RADIUS);
                result.graphics.drawCircle(0, 0, PAGE_BUTTON_SENSOR_RADIUS - 6);
            }
            result.graphics.drawCircle(0, 0, PAGE_BUTTON_RADIUS);
        }
        else {
            result.graphics.beginFill(ARROW_COLOUR);
        }
        var arrow : Float = (up) ? -ARROW_SIZE : ARROW_SIZE;
        //, PAGE_BUTTON_ALPHA);
        result.graphics.moveTo(0, 0.7 * arrow);
        result.graphics.lineTo(0.9 * ARROW_SIZE, -arrow / 2);
        result.graphics.lineTo(-0.9 * ARROW_SIZE, -arrow / 2);
        result.graphics.lineTo(0, 0.7 * arrow);
        result.blendMode = (justArrow) ? BlendMode.ADD : BlendMode.SUBTRACT;
        return result;
    }
    
    
    private function resetPageButtons() : Void{
        pageButton(_upButton, true);
        pageButton(_downButton, false);
        _pageButtonTarget = null;
    }
    
/**
 * Render an edit button
 */
    private function createEditButton() : Void{
        _editButtonLayer.addChild(_editButton = new Sprite());
        makeEditButton();
        _editButton.visible = false;
        _editButton.addEventListener(MouseEvent.MOUSE_DOWN, editButtonMouseDown);
    }
    
/**
 * Switch edit button on or off
 */
    private function set_editButton(value : Bool) : Bool{
        if (!value && _editButton != null && _editButtonLayer.contains(_editButton)) {
            _editButtonLayer.removeChild(_editButton);
            _editButton.removeEventListener(MouseEvent.MOUSE_DOWN, editButtonMouseDown);
            _editButton = null;
        }
        else if (value && _editButton == null) {
            createEditButton();
        }
        return value;
    }
    
/**
 * Edit button long click handler
 */
    private function longClick(event : Event) : Void{
        if (!_editButtonMoved) {
            dispatchEvent(new Event(EDIT_BUTTON_LONG_CLICK));
            _longClickDispatched = true;
        }
    }
    
/**
 * Edit button mousedown handler
 */
    private function editButtonMouseDown(event : Event) : Void{
        stage.addEventListener(MouseEvent.MOUSE_UP, editButtonMouseUp);
        stage.addEventListener(MouseEvent.MOUSE_MOVE, editButtonMouseMove);
        _editButtonMouseDown = true;
        _editButtonMoved = false;
        _lastMousePoint.y = mouseY;
        _mouseDistanceY = 0;
        dispatchEvent(new Event(EDIT_BUTTON_MOUSE_DOWN));
        _longClickDispatched = false;
        _timer.reset();
        _timer.start();
    }
    
/**
 * Edit button movement handler
 */
    private function editButtonMouseMove(event : Event) : Void{
        if (!_longClickDispatched) {
            _mouseDistanceY += Math.abs(_lastMousePoint.y - mouseY);
            _lastMousePoint.y = mouseY;
            if (_mouseDistanceY > BUTTON_MOVE_THRESHOLD && rowSelectHandler()) {
                setHighlightRow(true);
                _editButtonMoved = true;
                dispatchRowSelected();
            }
        }
    }
    
/**
 * Edit button mouseup handler
 */
    private function editButtonMouseUp(event : Event) : Void{
        _timer.stop();
        stage.removeEventListener(MouseEvent.MOUSE_UP, editButtonMouseUp);
        stage.removeEventListener(MouseEvent.MOUSE_MOVE, editButtonMouseMove);
        _editButtonMouseDown = false;
        if (_longClickDispatched) {
            dispatchEvent(new Event(EDIT_BUTTON_LONG_CLICK_END));
        }
        else if (_editButtonMoved) {
            dispatchEvent(new Event(ROW_SELECTED));
        }
        else {
            dispatchEvent(new Event(EDIT_BUTTON_MOUSE_UP));
        }
    }
    
/**
 * Animate the edit button onto, or off the screen
 */
    public function slideEditButton(direction : Bool = true) : Void{
        if (_editButton == null) {
            return;
        }
        if (!_slideTimer.running) {
            _editButton.x = !(direction) ? _attributes.width - _editButton.width : _attributes.width;
        }
        var fromX : Float = (_slideTimer.running) ? _editButton.x : _attributes.width;
        var toX : Float = _attributes.width - _editButton.width;
        _deltaEditButtonX = ((direction) ? 1.0 : -1.0) * (toX - fromX) / UIScrollDataGrid.STEPS;
        _slideTimer.stop();
        _slideTimer.reset();
        _slideTimer.start();
    }
    
    
    private function slideMovement(event : Event) : Void{
        _editButton.x += _deltaEditButtonX;
    }
    
/**
 * Set the selection colour
 */
    private function set_rowSelectColour(value : Int) : Int{
        _rowSelectColour = value;
        return value;
    }
    
/**
 * Enable or disable scrolling
 */
    override private function set_scrollEnabled(value : Bool) : Bool{
        super.scrollEnabled = value;
        _originalNoScroll = _noScroll;
        return value;
    }
    
/**
 * Convert y coordinate to the grid at that position
 */
    private function yToDataGrid(y : Float) : UISimpleDataGrid{
        var index : Int = 0;
        while (index + 1 < _dataGrids.length && _dataGrids[index + 1].includeInLayout && y > _dataGrids[index + 1].y){
            index++;
        }
        return index >= (0) ? _dataGrids[index] : null;
    }
    
    
    private function temporaryRowHighlightDraw(highlightedDataGrid : UISimpleDataGrid, highlightedRowIndex : Int, colour : Int = -1) : Void{
        _temporaryRowHighlight.graphics.clear();
        if (_showPressed && highlightedRowIndex >= 0 && highlightedRowIndex < highlightedDataGrid.numberOfRows) {
            _temporaryRowHighlight.visible = true;
            _temporaryRowHighlight.graphics.beginFill((colour >= 0) ? colour : _rowSelectColour);
            _temporaryRowHighlight.graphics.drawRect(0, highlightedDataGrid.y + highlightedDataGrid.rowPosition(highlightedRowIndex), stage.stageWidth * UI.scale, highlightedDataGrid.rowHeight(highlightedRowIndex));
            _temporaryRowHighlight.graphics.endFill();
        }
    }
    
    
    private function temporaryRowHighlight() : Void{
        var highlightedDataGrid : UISimpleDataGrid = yToDataGrid(_slider.mouseY);
        var highlightedRowIndex : Int = (highlightedDataGrid != null) ? highlightedDataGrid.yToRow(highlightedDataGrid.mouseY) : -1;
		trace(highlightedDataGrid, highlightedRowIndex);
		temporaryRowHighlightDraw(highlightedDataGrid, highlightedRowIndex);
    }
    
    
    override private function set_sliderX(value : Float) : Float{
        super.sliderX = value;
        return value;
    }
    
    
    override private function set_sliderY(value : Float) : Float{
        super.sliderY = value;
        _editButtonLayer.y = _temporaryRowHighlight.y = value;
        return value;
    }
    
    
    private function temporaryRowClear() : Void{
        _temporaryRowHighlight.visible = false;
        if (_editButton != null) {
            _editButton.visible = false;
        }
    }
    
/**
 * Render edit button shape
 */
    private function buttonShape(x : Float, y : Float, buttonWidth : Float, height : Float) : Void{
        var quotient : Float = (ARROW - CURVE) / ARROW;
        _editButton.graphics.moveTo(x, y + BUTTON_HEIGHT / 2);
        _editButton.graphics.lineTo(x + quotient * ARROW, y + (1 - quotient) * BUTTON_HEIGHT / 2);
        _editButton.graphics.curveTo(x + ARROW, y, x + (ARROW + CURVE), y);
        _editButton.graphics.lineTo(x + buttonWidth, y);
        _editButton.graphics.lineTo(x + buttonWidth, y + height);
        _editButton.graphics.lineTo(x + (ARROW + CURVE), y + height);
        _editButton.graphics.curveTo(x + ARROW, y + height, x + quotient * ARROW, y + height - (1 - quotient) * BUTTON_HEIGHT / 2);
        _editButton.graphics.lineTo(x, y + BUTTON_HEIGHT / 2);
        _editButton.buttonMode = _editButton.useHandCursor = true;
    }
    
    /**
 * Render edit button
 */
    private function makeEditButton() : Void{
        _editButton.graphics.clear();
        var matr : Matrix = new Matrix();
        _editButton.graphics.beginFill(0, 0);
        _editButton.graphics.drawRect(0, 0, BUTTON_WIDTH, 2 * SENSOR + BUTTON_HEIGHT);
        matr.createGradientBox(BUTTON_WIDTH, BUTTON_HEIGHT, Math.PI / 2, 0, SENSOR);
        _editButton.graphics.beginFill(Colour.darken(_editButtonColour));
        buttonShape(0.0, SENSOR, BUTTON_WIDTH, BUTTON_HEIGHT);
        _editButton.graphics.endFill();
        _editButton.graphics.beginGradientFill(GradientType.LINEAR, [Colour.lighten(_editButtonColour), Colour.darken(_editButtonColour), Colour.darken(_editButtonColour)], [1.0, 1.0, 1.0], [0x00, 0x80, 0xff], matr);
        buttonShape(1.0, 1.0 + SENSOR, BUTTON_WIDTH - 1, BUTTON_HEIGHT - 1.5);
        _editButton.graphics.endFill();
        _editButton.graphics.beginGradientFill(GradientType.LINEAR, [Colour.darken(_editButtonColour), Colour.darken(_editButtonColour), Colour.lighten(_editButtonColour)], [1.0, 1.0, 1.0], [0x00, 0x80, 0xff], matr);
        _editButton.graphics.drawCircle((BUTTON_WIDTH + CURVE) / 2, SENSOR + BUTTON_HEIGHT / 2, RADIUS);
        _editButton.graphics.endFill();
    }
    
    
    public function clearHighlightRow() : Void{
        temporaryRowClear();
        _highlightedRowIndex = -1;
    }
    
    
    public function setHighlightRow(slidein : Bool = false) : Void{
        if (_highlightedDataGrid != null && _highlightedRowIndex >= 0 && _highlightedRowIndex < _highlightedDataGrid.numberOfRows) {
            if (_editButton != null && (!_highlightedDataGrid.hasHeader || _highlightedRowIndex > 0)) {
                 _editButton.x = _attributes.width - ((slidein) ? _editButton.width : 0);
                _editButton.y = _highlightedDataGrid.y + _highlightedDataGrid.rowPosition(_highlightedRowIndex) + _highlightedDataGrid.rowHeight(_highlightedRowIndex) / 2 - _editButton.height / 2;
                _editButton.visible = true;
            }
        }
    }
    
    
    private function abortRowSelection() : Void{
        _noScroll = _originalNoScroll;
        showScrollBar();
    }
    
    
    override private function mouseMove(event : TimerEvent) : Void{
        if (_editButtonMouseDown) {
            return;
        }
        var deltaMoveX : Float = Math.abs(_lastMousePoint.x - mouseX);
        var deltaMoveY : Float = Math.abs(_lastMousePoint.y - mouseY);
        _mouseDistance += deltaMoveX + deltaMoveY;
        _mouseDistanceX += deltaMoveX;
        _mouseDistanceY += deltaMoveY;
        _lastMousePoint.x = mouseX;
        _lastMousePoint.y = mouseY;
        
        if (_mouseDistance > BUTTON_MOVE_THRESHOLD) {
            _headerClicked = false;
            if (_pageButtonTarget != null) {
                resetPageButtons();
            }
        }
        
        super.mouseMove(event);
        if (_rowSelect) {
            if (_alt) {
                if (deltaMoveX > ROW_SELECT_LIMIT || deltaMoveY > DELTAY_THRESHOLD || (_mouseDistanceX > _mouseDistanceY && _mouseDistanceX > UIScrollVertical.THRESHOLD)) {
                    abortRowSelection();
                }
                else {
                    rowSelectHandler();
                }
            }
            else {
                if (deltaMoveX > ROW_SELECT_LIMIT || _mouseDistanceY > SMALL_Y_THRESHOLD) {
                    abortClick();
                }
            }
            if (cast((event.currentTarget), Timer).currentCount == LONG_ROW_THRESHOLD && _mouseDistance < 2 * UIScrollVertical.THRESHOLD) {
                dispatchEvent(new Event(LONG_ROW_SELECTED));
            }
        }
    }
    
    
    public function abortClick() : Void{
        refreshHighlight();
        abortRowSelection();
        _rowSelect = false;
    }
    
    
    public function confirmClick() : Void{
        rowSelectHandler();
        if (_highlightedDataGrid != null) {
            _clickedRowIndex = _highlightedRowIndex;
            _dataGrid = _highlightedDataGrid;
        }
        stopScrolling();
    }
    
    
    private function rowSelectHandler() : Bool{
        var highlightedDataGrid : UISimpleDataGrid = yToDataGrid(_slider.mouseY);
        var highlightedRowIndex : Int = (highlightedDataGrid != null) ? highlightedDataGrid.yToRow(highlightedDataGrid.mouseY) : -1;
        if (highlightedRowIndex >= 0 && (highlightedDataGrid != _highlightedDataGrid || highlightedRowIndex != _highlightedRowIndex)) {
            temporaryRowHighlightDraw(highlightedDataGrid, highlightedRowIndex);
            _highlightedDataGrid = highlightedDataGrid;
            _highlightedRowIndex = highlightedRowIndex;
            return true;
        }
        else {
            return false;
        }
    }
    
    /**
 * Mouse down handler
 */
    override private function mouseDown(event : MouseEvent) : Void{
        _pageButtonTarget = null;
        if (event.target == _upButton || event.target == _upButtonArrow) {
            _pageButtonTarget = event.target;
            _rowSelect = false;
            pageButton(_upButton, true, false, true);
            super.mouseDown(event);
        }
        else if (event.target == _downButton || event.target == _downButtonArrow) {
            _pageButtonTarget = event.target;
            _rowSelect = false;
            pageButton(_downButton, false, false, true);
            super.mouseDown(event);
        }
        else if (event.target.name == UIScrollDataGrids.HEADER_NAME || event.target.name == "_titleSlider") {
            _headerClicked = true;
            _rowSelect = false;
            super.mouseDown(event);
            dispatchEvent(new Event(HEADER_DOWN));
        }
        else if (event.target != _editButton) {
            _headerClicked = false;
            super.mouseDown(event);
            _rowSelect = false;
            _clickDelay.reset();
            _clickDelay.start();
        }
        _lastMousePoint.x = mouseX;
        _lastMousePoint.y = mouseY;
        _mouseDistance = 0;
        _mouseDistanceX = 0;
        _mouseDistanceY = 0;
    }
    
    
    private function dispatchRowSelected() : Void{
        if (_highlightedDataGrid != null) {
            _clickedRowIndex = _highlightedRowIndex;
            _dataGrid = _highlightedDataGrid;
            if (!_editButtonMouseDown) {
                dispatchEvent(new Event(ROW_SELECTED));
            }
        }
    }
    
    
    override private function mouseUp(event : MouseEvent) : Void{
        if (_pageButtonTarget != null) {
            dispatchEvent(new Event(((_pageButtonTarget == _upButton || _pageButtonTarget == _upButtonArrow)) ? PAGE_UP : PAGE_DOWN));
            resetPageButtons();
            super.mouseUp(event);
        }
        else if (event.target.name == "_titleSlider") {
            dispatchEvent(new Event(HEADER_CLICKED));
            super.mouseUp(event);
        }
        else if (_headerClicked && event.target.name == UIScrollDataGrids.HEADER_NAME) {
            dispatchEvent(new Event(HEADER_CLICKED));
            super.mouseUp(event);
        }
        else if (event.target != _editButton) {
            super.mouseUp(event);
            _clickDelay.stop();
            if (_rowSelect || _mouseDistance < UIScrollVertical.THRESHOLD) {
                _rowSelect = false;
                _noScroll = _originalNoScroll;
                rowSelectHandler();
                if (_highlightedDataGrid != null && _highlightedRowIndex == 0 && _highlightedDataGrid.hasHeader) {
                    dispatchEvent(new Event(HEADER_CLICKED));
                    super.mouseUp(event);
                }
                if (!_alt) {
                    if (_editButton != null) {
                        _editButton.visible = true;
                    }
                    setHighlightRow();
                    slideEditButton(true);
                }
                if (!_headerClicked) {
                    dispatchRowSelected();
                    if (_distance < UIScrollVertical.THRESHOLD) {
                        dispatchEvent(new Event(ROW_CLICKED));
                    }
                }
            }
            else if (_alt) {
                temporaryRowClear();
                temporaryRowHighlightDraw(_highlightedDataGrid, _highlightedRowIndex);
            }
            else {
                refreshHighlight();
            }
            _mouseDistance = 999999.9;
            if (_alt && _editButton != null && !_headerClicked) {
                setHighlightRow();
                slideEditButton();
            }
        }
    }
    
/**
 * The index of the clicked row
 */
    private function get_index() : Int{
        return _clickedRowIndex;
    }
    
/**
 * The index of the selected / highlighted row.  (May be different from the clicked row).
 */
    private function get_selectIndex() : Int{
        return _highlightedRowIndex;
    }
    
    
    private function set_selectIndex(value : Int) : Int{
        temporaryRowClear();
        _clickedRowIndex = _highlightedRowIndex = value;
        temporaryRowHighlightDraw(_highlightedDataGrid, _highlightedRowIndex);
        return value;
    }
    
/**
 * The index of the datagrid that is selected.  First datagrid is 0, second = 1, etc...
 */
    private function get_selectDataGrid() : Int{
        if (_highlightedDataGrid != null) {
            for (index in Reflect.fields(_dataGrids)){
				
                if (_highlightedDataGrid == _dataGrids[Std.parseInt(index)]) {
                    return Std.parseInt(index);
                }
            }
        }
        return -1;
    }
    
    
    private function timerComplete(event : TimerEvent) : Void{
		trace("timerComplete", _mouseDistance, "<", UIScrollVertical.THRESHOLD);
        if (_mouseDistance < UIScrollVertical.THRESHOLD) {
            _noScroll = _alt;
            _rowSelect = true;
            temporaryRowHighlight();
            if (_editButton != null && _editButton.visible) {
                slideEditButton(false);
            }
        }
        else if (!_alt) {
            refreshHighlight();
        }
    }
    
    
    private function positionPageButtons() : Void{
        if (_upButton != null) {
            _upButtonArrow.x = _upButton.x = attributes.width / 2;
            _upButtonArrow.y = _upButton.y = attributes.height / 2 - PAGE_BUTTON_SENSOR_RADIUS;
        }
        if (_downButton != null) {
            _downButtonArrow.x = _downButton.x = attributes.width / 2;
            _downButtonArrow.y = _downButton.y = attributes.height / 2 + PAGE_BUTTON_SENSOR_RADIUS;
        }
    }
    
    
    override public function layout(attributes : Attributes) : Void{
        super.layout(attributes);
        refreshHighlight();
        positionPageButtons();
    }
    
    
    private function refreshHighlight() : Void{
        temporaryRowClear();
        temporaryRowHighlightDraw(_highlightedDataGrid, _highlightedRowIndex);
        setHighlightRow(true);
    }
    
/**
 * Change datagrid text size
 */
    override private function set_textSize(value : Float) : Float{
        super.textSize = value;
        refreshHighlight();
        return value;
    }
    
    
    override public function destructor() : Void{
        super.destructor();
        _clickDelay.removeEventListener(TimerEvent.TIMER_COMPLETE, timerComplete);
    }
}

