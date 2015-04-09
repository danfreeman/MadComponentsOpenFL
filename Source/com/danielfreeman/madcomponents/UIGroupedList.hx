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
import com.danielfreeman.madcomponents.UIList;


import openfl.display.DisplayObject;
import openfl.display.GradientType;
import openfl.display.Graphics;
import openfl.display.Shape;
import openfl.display.SpreadMethod;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.geom.Matrix;
import openfl.text.TextField;
import openfl.text.TextFormat;


/**
 * A list row was initiated - although we don't yet know whether this is a click or a scroll.
 */
@:meta(Event(name="clickStart",type="flash.events.Event"))


/**
 * A list row was clicked.  This is a bubbling event.
 */
@:meta(Event(name="clicked",type="flash.events.Event"))


/**
 * A list row was clicked.
 */
@:meta(Event(name="listClickedEnd",type="flash.events.Event"))


/**
 * A list click was cancelled.  This was a scroll, not a click.  
 */
@:meta(Event(name="listClickCancel",type="flash.events.Event"))


/**
 * A list row was long-clicked.
 */
@:meta(Event(name="longClick",type="flash.events.Event"))


/**
 * The Pull-Down-To-Refresh header was activated
 */
@:meta(Event(name="pullRefresh",type="flash.events.Event"))


/**
 * A heading (or an area outside a list row) was clicked
 */
@:meta(Event(name="headingClicked",type="flash.events.Event"))



/**
 *  MadComponents Grouped List
 * <pre>
 * &lt;groupedList
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, ..."
 *    visible = "true|false"
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    border = "true|false"
 *    lines = "true|false"
 *    pullDownRefresh = "true|false"
 *    pullDownColour = "#rrggbb"
 *    sortBy = "IDENTIFIER"
 *    mask = "true|false"
 *    alignV = "scroll|no scroll"
 *    highlightPressed = "true|false"
 *    autoLayout = "true|false"
 *    headingTextColour = "#rrggbb"
 *    headingShadowColour = "#rrggbb"
 *    arrows = "true|false"
 *    labelField = "STRING"
 *    lineGap = "NUMBER"
 *    style7 = "true|false"
 * /&gt;
 * </pre>
 */
class UIGroupedList extends UIList
{
    private var defaultGroupSpacing(get, never) : Float;
    public var group(get, set) : Int;
    public var headingTextColour(never, set) : Int;
    public var headingShadowColour(never, set) : Int;

    
    public static inline var HEADING_CLICKED : String = "headingClicked";
    private static inline var STRIPE_WIDTH : Float = 8.0;
    private static inline var PADDING : Float = 10.0;
    private static inline var CELL_COLOUR : Int = 0xFFFFFF;
    private static var CURVE : Float = 8.0;
    private static var CURVE7 : Float = 4.0;
    private static inline var GROUP_SPACING : Float = 45;
    
    public static var HEADING : Class<Dynamic> = null;
    
    private var _cellWidth : Float;
    private var _length : Int;
    private var _groupPositions : Array<Dynamic>;
    private var _group : Int = -1;
    private var _heading : Dynamic = null;
    private var _hasHeadings : Bool = false;
    private var _groupDetails : Dynamic;
    private var _headingFormat : TextFormat = new TextFormat("Tahoma", 17, 0x555566);
    private var _shadowFormat : TextFormat = new TextFormat("Tahoma", 17, 0xFCFCFC);
    private var _autoLayoutGroup : Bool;
    private var _gapBetweenGroups : Float = 0;
    private var _alwaysAutoLayout : Bool = false;
    private var _cellLeft : Float = 0;
    private var _saveGroup : Int = -1;
    private var _headingClicked : Bool = false;
    private var _topGroupSpacing : Float = 0;
    private var _groupSpacing : Float = 0;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        _autoLayoutGroup = xml.has.autoLayout && xml.att.autoLayout == "true";
        if (xml.has.headingTextColour) {
            _headingFormat.color = UI.toColourValue(xml.att.headingTextColour);
        }
        if (xml.has.headingShadowColour) {
            _shadowFormat.color = UI.toColourValue(xml.att.headingShadowColour);
        }
        _groupSpacing = ((xml.has.groupSpacing) ? Std.parseFloat(xml.att.groupSpacing) : defaultGroupSpacing);  // - (_autoLayoutGroup ? GROUP_SPACING : 0);  
        _topGroupSpacing = ((xml.has.topGroupSpacing) ? Std.parseFloat(xml.att.topGroupSpacing) : _groupSpacing);
        super(screen, xml, attributes);
        _autoLayout = false;
    }
    
    
    private function get_defaultGroupSpacing() : Float{
        return GROUP_SPACING;
    }
    
    
    /**
 *  Dynamically set the list renderer
 */
    override private function set_rendererXML(value : MadXML) : MadXML{
        _renderer = value;
        _simple = value == null;
        _autoLayoutGroup = !_simple && _xml.has.autoLayout && _xml.att.autoLayout == "true";
        return value;
    }
    
    
    override private function mouseUp(event : MouseEvent) : Void{
        super.mouseUp(event);
        if (_headingClicked) {
            headingClicked();
        }
    }
    
    
    override private function mouseDown(event : MouseEvent) : Void{
        _saveGroup = _group;
        _headingClicked = false;
        super.mouseDown(event);
    }
    
    
    override private function doCancel() : Void{
        _pressedCell = _saveIndex;
        _group = _saveGroup;
        _headingClicked = false;
        dispatchEvent(new Event(UIList.CLICK_CANCEL, true));
        if (_showPressed && _pressedCell >= _header && _group < _groupPositions.length) {
            drawHighlight();
        }
    }
    
    
    override public function touchCancel() : Void{
        super.touchCancel();
        _headingClicked = false;
    }
    
    /**
 *  Draw background
 */
    override public function drawComponent() : Void{
        var hasBackground : Bool = _colours != null && _colours.length > 0;
        graphics.clear();
        if (_attributes.style7) {
            graphics.beginFill((hasBackground) ? _colours[0] : _attributes.colour);
        }
        else if (hasBackground) {
            var matr : Matrix = new Matrix();
            matr.createGradientBox(STRIPE_WIDTH, _attributes.height, 0, 0, 0);
            var colour : Int = _colours[0];
            graphics.beginGradientFill(GradientType.LINEAR, [colour, Colour.lighten(colour), Colour.lighten(colour, 40)], [1.0, 1.0, 1.0], [0x00, 0x33, 0xff], matr, SpreadMethod.REPEAT);
        }
        else {
            graphics.beginFill(0, 0);
        }
        graphics.drawRect(0, 0, _attributes.width, _attributes.height);
    }
    
    
    private function setCellSize() : Void{
        _cellLeft = _attributes.x + _attributes.paddingH - PADDING;
        _cellWidth = _attributes.width - 2 * _attributes.paddingH + 2 * PADDING;
    }
    
    
    private function setGroupedData(value : Array<Dynamic>) : Void{
        
        _saveGroup = _group;
        _saveIndex = -1;
        _filteredData = noHeadings(value);
        initDrawGroups();
        clearCellGroups();
        setCellSize();
        _cellTop = Math.round(_top + _topGroupSpacing);
        _groupPositions = [];
        _group = 0;
        for (group in value){
            if (!(Std.is(group, Array))) {
                _heading = group;
            }
            else {
                _suffix = "_" + Std.string(_group);
                _length = group.length;
                _groupDetails = {
                            top : _cellTop,
                            length : _length,
                            bottom : 0,
                            cellHeight : 0,
                            visible : true,

                        };
                if (_heading == null) {
                    _heading = "";
                }  //	var cellTop:Number = _cellTop;  
                
                super.data0 = group;
                _groupDetails.cellHeight = ((_simple && _autoLayoutGroup)) ? _cellHeight : (_cellTop - _groupDetails.top) / group.length;
                _groupDetails.bottom = _cellTop;
                _groupPositions.push(_groupDetails);
                _cellTop = Math.ceil(_cellTop + _groupSpacing);  //4 * _attributes.paddingV;  
                _group++;
            }  //		doLayout();  
        }  //		if (_autoLayoutGroup) {  
        
        doLayout();
        //		}
        _group = _saveGroup;
    }
    
    /**
 *  Assign to list by passing an array of objects
 */
    override private function set_data(value : Dynamic) : Dynamic{
        setGroupedData(_data = try cast(value, Array<Dynamic>) catch(e:Dynamic) null);
        return value;
    }
    
    
    public function refresh() : Void{
        data = _data;
    }
    
    
    override public function doClickRow(dispatch : Bool = true) : Bool{
        clearPressed();
        _showPressed = true;
        if (dispatch) {
            pressButton();
        }
        else {
            if (isPressButton()) {
                drawHighlight();
            }
        }
        return dispatch && _pressedCell >= _header && _pressedCell < _count;
    }
    
    /**
 *  Returns the data array of ojects without the headings
 */
    private function noHeadings(value : Array<Dynamic>) : Array<Dynamic>{
        var result : Array<Dynamic> = [];
        for (group in value){
            if (Std.is(group, Array)) 
                result.push(group);
        }
        return result;
    }
    
    /**
 *  Returns the data object for the last row clicked
 */
    override private function get_row() : Dynamic{
        return ((_group >= 0 && _pressedCell >= 0 && _filteredData != null && _filteredData[_group] != null)) ? _filteredData[_group][_pressedCell] : null;
    }
    
    
    private function simpleAutoLayoutFix(oldGroupDetails : Dynamic) : Void{
        if (oldGroupDetails != null) {
            oldGroupDetails.bottom = oldGroupDetails.top + _cellHeight * oldGroupDetails.length;
        }
    }
    
    
    override private function dealWithArrows(count : Int, position : Float) : Void{
        if (_arrows && ((_header > 0) ? count >= _header : count < _length + _header)) {
            drawArrow(_width - _attributes.paddingH, (_lastPosition + position) / 2);
        }
    }
    
    /**
 *  Redraw cell chrome
 */
    
    override private function redrawCells() : Void{
        var autoLayout : Bool = _alwaysAutoLayout || !_simple && _autoLayoutGroup;
        setCellSize();
        var saveGroup : Int = _group;
        var oldGroupDetails : Dynamic = null;
        var groupHeight : Float;
        _group = 0;
        var last : Float = _topGroupSpacing + _top;
        for (groupDetails in _groupPositions){
            _length = groupDetails.length;
            if (autoLayout) {
                groupDetails.top = last;
                var heading : DisplayObject = _slider.getChildByName("heading_" + Std.string(_group));
                if (heading != null) {
                    heading.y = last + _attributes.paddingV + 2;
                    last = groupDetails.top = Math.max(heading.y + heading.height, last + 3 * _attributes.paddingV) + _attributes.paddingV;
                    var shadow : DisplayObject = _slider.getChildByName("shadow_" + Std.string(_group));
                    if (shadow != null) {
                        shadow.y = heading.y + 1;
                    }
                }
            }
            _cellTop = groupDetails.top;
            headingChrome();
            if (groupDetails.visible) {
                var cellHeight : Int;
                for (i in 0..._length){
                    cellHeight = groupDetails.cellHeight;
                    if (autoLayout) {
                        var renderer : DisplayObject = byGroupAndRow(_group, i);
                        if (!_simple) {
                            cellHeight = Math.ceil(renderer.height + 2 * _attributes.paddingV);
                        }
                        renderer.y = last + _attributes.paddingV * ((_simple) ? 2.0 : 1.0);
                        last += cellHeight;
                    }
                    if (cellHeight > 0) {
                        var record : Dynamic = _filteredData[_group][i];
                        drawCell(_cellTop + cellHeight, i, record);
                    }
                }
            }
            else {
                last += _groupSpacing;
            }
            _group++;
            last += _groupSpacing;
            
            if (!_simple && autoLayout && groupDetails.visible) {
                groupDetails.bottom = last;
            }
            if (_alwaysAutoLayout) {
                last = last - 15;
                groupDetails.bottom = last + 5;
            }
            else if (_simple && _autoLayout) {
                groupDetails.bottom = _cellTop = Math.ceil(_slider.getBounds(_slider).bottom + _attributes.paddingH);
                simpleAutoLayoutFix(oldGroupDetails);
            }
            oldGroupDetails = groupDetails;
        }
        _group = saveGroup;
    }
    
    
    private function headingChrome() : Void{
        
    }
    
    
    override public function clear() : Void{
        data = [[]];
    }
    
    
    override private function calculateMaximumSlide() : Void{
        super.calculateMaximumSlide();
        if (_maximumSlide > 0) {
            _maximumSlide += ((!_simple && _autoLayoutGroup)) ? _attributes.paddingH : 3 * _attributes.paddingH;
        }
    }
    
    
    private function superCalculateMaximumSlide() : Void{
        super.calculateMaximumSlide();
    }
    
    
    private function positionHeading(top : Float, heading : DisplayObject) : Void{
        heading.y = top - Math.min(_groupSpacing / 3, 10);
    }
    
    /**
 *  Draw group heading
 */
    override private function initDraw() : Void{
        if (_heading != null) {
            var heading : DisplayObject;
            var shadow : DisplayObject = null;
            var top : Float = _cellTop - 4 * _attributes.paddingV;
            if (Std.is(_heading, String)) {
                shadow = new UILabel(_slider, _attributes.paddingH + 1, top + _attributes.paddingV / 2 + 1, _heading, _shadowFormat);
                shadow.name = "shadow_" + Std.string(_group);
                heading = new UILabel(_slider, _attributes.paddingH, top + _attributes.paddingV / 2, _heading, _headingFormat);
                heading.visible = shadow.visible = _heading != "";
            }
        //    else if (Std.is(_heading, Class)) {
        //        _slider.addChild(heading = Type.resolveClass("com.danielfreeman.madcomponents." + _classes[idx]), []);
        //    }
            else {
                _slider.addChild(heading = _heading);
            }
            heading.x = _attributes.paddingH;
            positionHeading(_cellTop, heading);
            if (shadow != null) {
                shadow.y = heading.y + 1;
            }
            _heading = null;
            _cellTop += Math.ceil(heading.height);
            _groupDetails.top = _cellTop;
            heading.name = "heading_" + Std.string(_group);
            _gapBetweenGroups = 2 * _attributes.paddingV;
        }
        _lastPosition = _cellTop;
    }
    
    
    override private function clearCells() : Void{
        
    }
    
    
    private function clearCellGroups() : Void{
        super.clearCells();
        _lastPosition = _cellTop = 0;
    }
    
    
    private function initDrawGroups() : Void{
        _slider.graphics.clear();
        //	resizeRefresh();
        _slider.graphics.beginFill(0, 0);
        _slider.graphics.drawRect(0, -4 * _attributes.paddingV - ((_refresh != null) ? UIList.TOP : 0), 1, 1);
        _lastPosition = _cellTop;
    }
    
    /**
 *  Rearrange the layout to new screen dimensions
 */
    override public function layout(attributes : Attributes) : Void{
        initDrawGroups();
        super.layout(attributes);
    }
    
    
    private function setColour(colour : Int, top : Float, width : Float, height : Float) : Void{
        var colours : Array<Int> = ((Std.is(_cell, UIForm))) ? cast((_cell), UIForm).attributes.backgroundColours : null;
        if (colours != null && colours.length > 1) {
            var matr : Matrix = new Matrix();
            matr.createGradientBox((colours.length > 2) ? colours[2] : width, (colours.length > 2) ? colours[2] : height + 2 * UI.PADDING, (colours.length > 3) ? colours[3] * Math.PI / 180 : Math.PI / 2, 0, top - UI.PADDING);
            _slider.graphics.beginGradientFill(GradientType.LINEAR, [colours[0], colours[1]], [1.0, 1.0], [0x00, 0xff], matr, SpreadMethod.REPEAT);
        }
        else if (colours != null && colours.length > 0) {
            _slider.graphics.beginFill(colours[0]);
        }
        else {
            _slider.graphics.beginFill(colour);
        }
    }
    
    /**
 *  Draw the background for a cell somewhere in the middle of a group
 */
    override private function drawCell(position : Float, count : Int, record : Dynamic) : Void{
        var colour : Int = Reflect.hasField(record, "_colour") ? UI.toColourValue(record._colour) : CELL_COLOUR;
        if (_colours.length > 1 && !Reflect.hasField(record, "_colour")) {
            colour = _colours[(_colours.length - 1 < count + 1) ? _colours.length - 1 : count + 1];
        }
        _slider.graphics.beginFill((_attributes.style7) ? colour : _colour);
        if (_length == 1) {
            _slider.graphics.drawRoundRect(_cellLeft, _cellTop, _cellWidth + 1, position - _cellTop, 1.5 * CURVE);
            setColour(colour, _cellTop + 1, _cellWidth - 1, position - _cellTop - 2);
            _slider.graphics.drawRoundRect(_cellLeft + 1, _cellTop + 1, _cellWidth - 1, position - _cellTop - 2, 1.5 * CURVE);
        }
        else if (count == 0) {
            curvedTop(_slider.graphics, _cellLeft, _cellTop, _cellLeft + _cellWidth + 1, position, _attributes.style7);
            setColour(colour, _cellTop + 1, _cellWidth - 1, position - _cellTop - 2);
            curvedTop(_slider.graphics, _cellLeft + 1, _cellTop + 1, _cellLeft + _cellWidth, position, _attributes.style7);
        }
        else if (count == _length - 1) {
            curvedBottom(_slider.graphics, _cellLeft, _cellTop, _cellLeft + _cellWidth + 1, position, _attributes.style7);
            setColour(colour, _cellTop + 1, _cellWidth - 1, position - _cellTop - 2);
            curvedBottom(_slider.graphics, _cellLeft + 1, _cellTop + 1, _cellLeft + _cellWidth, position - 1, _attributes.style7);
        }
        else {
            _slider.graphics.drawRect(_cellLeft, _cellTop, _cellWidth + 1, position - _cellTop);
            setColour(colour, _cellTop + 1, _cellWidth - 1, position - _cellTop - 2);
            _slider.graphics.drawRect(_cellLeft + 1, _cellTop + 1, _cellWidth - 1, position - _cellTop);
        }
        if (!(Std.is(record, String)) && hasLines(record)) {
            drawLines(position);
        }
        if (_arrows && (_header > (0) ? count >= _header : count < _length + _header)) {
            drawArrow(_cellLeft + _cellWidth - PADDING, (_cellTop + position) / 2);
        }
        if (_attributes.style7 && count < _length - 1) {
            _slider.graphics.beginFill(_colour);
            _slider.graphics.drawRect(_lineGap, position - 1, _cellWidth - _lineGap + _cellLeft + 1, 1);
        }
        _cellTop = Math.ceil(position);
    }
    
    /**
 *  Draw the background of the top cell of a group
 */
    public static function curvedTop(shape : Graphics, left : Float, top : Float, right : Float, bottom : Float, style7 : Bool = true) : Void{
        var curve : Float = (style7) ? CURVE7 : CURVE;
        shape.moveTo(left + curve, top);
        shape.lineTo(right - curve, top);
        shape.curveTo(right, top, right, top + curve);
        shape.lineTo(right, bottom);
        shape.lineTo(left, bottom);
        shape.lineTo(left, top + curve);
        shape.curveTo(left, top, left + curve, top);
    }
    
    /**
 *  Draw the background of the bottom cell of a group
 */
    public static function curvedBottom(shape : Graphics, left : Float, top : Float, right : Float, bottom : Float, style7 : Bool = true) : Void{
        var curve : Float = (style7) ? CURVE7 : CURVE;
        shape.moveTo(left, top);
        shape.lineTo(right, top);
        shape.lineTo(right, bottom - curve);
        shape.curveTo(right, bottom, right - curve, bottom);
        shape.lineTo(left + curve, bottom);
        shape.curveTo(left, bottom, left, bottom - curve);
        shape.lineTo(left, top);
    }
    
    
    override private function pressedCellLimits(groupDetail : Dynamic = null) : Void{
        if (_pressedCell < _header || _pressedCell >= groupDetail.length) {
            _pressedCell = _saveIndex;
        }
    }
    
    /**
 *  Is a group row clicked?
 */
    private function isPressButton() : Bool{
        var sliderMouseY : Float = (_slider.visible) ? _slider.mouseY : mouseY - _sliderPosition;
        _group = 0;
        for (detail in _groupPositions){
            if (sliderMouseY >= detail.top && sliderMouseY <= detail.bottom && detail.visible) {
                
                if (_autoLayoutGroup && !_simple) {
                    _row = null;
					var i:Int = (_header < 0) ? 0 : _header;
                    while (i < detail.length && _row == null){
                        var renderer : DisplayObject = byGroupAndRow(group, i);
                        if (sliderMouseY >
                            renderer.y - _attributes.paddingV && sliderMouseY < renderer.y + renderer.height + _attributes.paddingV) {
                            _pressedCell = i;
                            _row = cast((renderer), DisplayObject);
                            return _row != null;
                        }
					i++;
                    }
                }
                else {
                    _pressedCell = Math.floor((sliderMouseY - detail.top) / detail.cellHeight);
                    pressedCellLimits(detail);
                    return _pressedCell >= _header;
                }
            }
            else if (sliderMouseY <= detail.bottom) {
                return false;
            }
            _group++;
        }
        return false;
    }
    
    /**
 *  The last group clicked
 */
    private function get_group() : Int{
        return _group;
    }
    
    /**
 *  Group heading text colour
 */
    private function set_headingTextColour(value : Int) : Int{
        _headingFormat.color = value;
        return value;
    }
    
    
    private function set_headingShadowColour(value : Int) : Int{
        _shadowFormat.color = value;
        return value;
    }
    
    
    //	The following overrides enable the setIndex method to work correctly
    
    override private function indexToScrollPosition(value : Int) : Float{
        return ((_groupPositions.length > _group)) ? _groupPositions[_group].cellHeight * value + _groupPositions[_group].top : 0;
    }
    
    
    override private function illuminate(pressedCell : Int = -1, dispatch : Bool = true, show : Bool = true) : Void{
        if (show) {
            drawHighlight();
        }
    }
    
    /**
 *  Assign to group before assigning to index
 */
    private function set_group(value : Int) : Int{
        _group = value;
        return value;
    }
    
    
    private function headingClicked() : Void{
        dispatchEvent(new Event(HEADING_CLICKED));
    }
    
    /**
 *  Return DisplyObject of button pressed
 */
    override private function pressButton(show : Bool = true) : DisplayObject{
        var sliderMouseY : Float = (_slider.visible) ? _slider.mouseY : mouseY - _sliderPosition;
        _scrollBarLayer.graphics.clear();
        clearPressed();
        if (!_simple || sliderMouseY < _top) {
            doSearchHit();
        }

        if (_pressButton == null && _clickRow) {
            if (isPressButton()) {
                if (show) {
                    drawHighlight();
                }
                activate(show);
            }
            else if (sliderMouseY > _top) {
                _headingClicked = true;
            }
        }
        return _pressButton;
    }
    
    /**
 *  Return row matching group and row indexes
 */
    private function byGroupAndRow(group : Int, row : Int) : DisplayObject{
        return _slider.getChildByName("label_" + Std.string(row) + "_" + Std.string(group));
    }
    
    /**
 *  Return component matching id within row matching group and row indexes
 */
    override public function findViewById(id : String, row : Int = -1, group : Int = -1) : DisplayObject{
        if (_search != null && _search.name == id) {
            return _search;
        }
        else {
            var container : DisplayObject = byGroupAndRow(group, row);
            return ((container != null && Std.is(container, IContainerUI))) ? cast((container), IContainerUI).findViewById(id, row, group) : container;
        }
    }
    
    /**
 *  Set XML data
 */
    override private function set_xmlData(value : MadXML) : MadXML{
        var result : Array<Dynamic> = [];
        var children : MadXMLList = value.children();
        for (group in children){
            var row : Array<Dynamic> = [];
            
            if (group.has.icon)
                result.push(Type.getClass(Type.resolveClass(group.att.icon)))
            else if (group.has.label) {
                result.push(group.att.label);
            }
            
            for (child in group.children()){
                row.push(attributesToObject(child));
            }
            result.push(row);
        }
        data = result;
        return value;
    }
    
    
    override public function setData(value : Array<Dynamic>, index : Int = 0) : Bool{
        var result : Bool = false;
        //	var savePosition:Number = sliderY;
        _group = index;
        for (row in value){
            if (Std.is(row, String)) {
                var heading : DisplayObject = _slider.getChildByName("heading_" + Std.string(_group));
                if (heading != null && Std.is(heading, UILabel)) {
                    cast((heading), UILabel).xmlText = row;
                }
                var shadow : DisplayObject = _slider.getChildByName("shadow_" + Std.string(_group));
                if (shadow != null && Std.is(shadow, UILabel)) {
                    cast((shadow), UILabel).xmlText = row;
                }
            }
            else if (Std.is(row, Array)) {
                _suffix = "_" + Std.string(_group);
                super.setData(row);
                _group++;
            }
        }  //	sliderY = savePosition;  
        
        if (_autoLayoutGroup) {
            doLayout();
            calculateMaximumSlide();
        }
        
        return result;
    }
    
    
    override private function highlightForIndex(rowIndex : Int) : Bool{
        if (_filteredData.length <= _group) {
            return false;
        }
        var rowData : Dynamic = _filteredData[_group][rowIndex];
        if (Reflect.hasField(rowData,"_highlight")) {
            return rowData._highlight == "true";
        }
        else {
            return _highlightPressed;
        }
    }
    
    /**
 *  Draw highlight when a row is clicked
 */
    private function drawHighlight() : Void{
        if (highlightForIndex(_pressedCell)) {
            _highlightIsOn = true;
            var autoLayout : Bool = _autoLayoutGroup && !_simple;
            var groupDetails : Dynamic = _groupPositions[_group];
            if (groupDetails == null) {
                return;
            }
            var length : Int = groupDetails.length;
            var top : Float = (autoLayout) ? _row.y - _attributes.paddingV + 1 : groupDetails.top + _pressedCell * groupDetails.cellHeight;
            var bottom : Float = top + ((autoLayout) ? _row.height + 2 * _attributes.paddingV - 1 : groupDetails.cellHeight);
            _highlight.graphics.clear();
            _highlight.graphics.beginFill(_highlightColour);
            if (length == 1) {
                _highlight.graphics.drawRoundRect(_cellLeft, top, _cellWidth, bottom - top, 1.5 * CURVE);
            }
            else if (_pressedCell == 0) {
                curvedTop(_highlight.graphics, _cellLeft, top, _cellLeft + _cellWidth, bottom);
            }
            else if (_pressedCell == length - 1) {
                curvedBottom(_highlight.graphics, _cellLeft, top, _cellLeft + _cellWidth, bottom);
            }
            else {
                _highlight.graphics.drawRect(_cellLeft, top, _cellWidth + 1, bottom - top);
            }
        }
    }
    
    
    override private function set_filteredData(value : Array<Dynamic>) : Array<Dynamic>{
        setGroupedData(value);
        return value;
    }
    
    
    override public function filter(searchFor : String, field : String = "", caseSensitive : Bool = false, begins : Bool = false) : Void{
        if (searchFor == "") {
            filteredData = _data;
        }
        else {
            if (field == "") {
                field = _field;
            }
            var result : Array<Dynamic> = [];
            var heading : Dynamic = null;
            for (group in _data){
                if (Std.is(group, Array)) {
                    var filteredGroup : Array<Dynamic> = filterArray(group, searchFor, field, caseSensitive, begins);
                    if (heading != null && filteredGroup.length > 0) {
                        result.push(heading);
                        result.push(filteredGroup);
                    }
                    heading = null;
                }
                else {
                    heading = group;
                }
            }
            filteredData = result;
        }
    }
}
