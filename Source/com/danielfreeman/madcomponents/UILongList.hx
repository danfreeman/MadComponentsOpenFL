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
import openfl.display.Sprite;
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
 * List with rows lazy rendered when in view
 * <pre>
 * &lt;longList
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
 *    index = "INTEGER"
 *    showPressed = "true|false"
 *    highlightPressed = "true|false"
 *    mask = "true|false"
 *    alignV = "scroll|no scroll"
 *    recycle = "true|false"
 * /&gt;
 * </pre>
 * 
 * Note that autoLayout="true" is not supported by UILongList
 */
class UILongList extends UIList
{
    
    private var _recycle : Bool = false;
    private var _lazy : Bool = false;
    private var _lastStartIndex : Int = -1;
    private var _recycleList : Array<UIForm> = new Array<UIForm>();
    private var _recycleLabel : Array<UILabel> = new Array<UILabel>();
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        if (xml.has.recycle) {
            _recycle = xml.att.recycle == "true";
        }
        super(screen, xml, attributes);
    }
    
/**
 *  Start a list with custom renderers
 */
    override private function customRenderers(value : Array<Dynamic>, position : Float = -1) : Void{
        if (position < 0) {
            position = _attributes.paddingV;
		}
        _count = 0;
        for (record in value){
            customCell(record, position);
            position += _cell.height + _attributes.paddingV;
            drawCell(position, _count, record);
            position += _attributes.paddingV;
            _count++;
            
            if (_recycle) 
                _recycleList.push(_cell);
            
            if (position > _attributes.height) {
                if (_cellHeight < 0) 
                    _cellHeight = Math.ceil((_slider.height - _top - ((_refresh != null) ? UIList.TOP : 0)) / _count);
                for (i in _count...value.length){
                    drawCell((i + 1) * _cellHeight + _top, i, record);
                }
                _lazy = true;
                return;
            }
        }
        if (_cellHeight < 0) {
            _cellHeight = Math.ceil((_slider.height - _top - ((_refresh != null) ? UIList.TOP : 0)) / _count);
		}
        _lazy = true;
    }
    
/**
 *  Start a list with simple default label rows
 */
    override private function simpleRenderers(value : Array<Dynamic>, position : Float = -1) : Void{
        if (position < 0) 
            position = 2 * _attributes.paddingV;
        _count = 0;
        _textAlign = _attributes.textAlign;
        for (record in value){
            var label : UILabel = labelCell(record, position);
            position += label.height + 2 * _attributes.paddingV;
            drawCell(position, _count, record);
            position += 2 * _attributes.paddingV;
            //	_cellHeight = 4 * _attributes.paddingV + label.height;
            _count++;
            
            if (_recycle) {
                _recycleLabel.push(label);
			}
            
            if (position > _attributes.height) {
                if (_cellHeight < 0) 
                    _cellHeight = Math.ceil((_slider.height - _top - ((_refresh != null) ? UIList.TOP : 0)) / _count);
                for (i in _count...value.length){
                    drawCell((i + 1) * _cellHeight + _top, i, (Reflect.hasField(record, "$colour")) ? UI.toColourValue(record._colour) : -1);
                }
                _lazy = true;
                return;
            }
        }
        if (_cellHeight < 0) {
            _cellHeight = Math.ceil((_slider.height - _top - ((_refresh != null) ? UIList.TOP : 0)) / _count);
		}
        _lazy = true;
    }
    
    /**
 *  Generate list rows between a specified start and end index
 */
    private function lazyCustomRenderers(value : Array<Dynamic>, startIndex : Int, endIndex : Int) : Void{
        if (_lastStartIndex != startIndex) {
            for (_count in startIndex...endIndex){
                if (_slider.getChildByName("label_" + Std.string(_count) + _suffix) == null) {
                    customCell(value[_count], _count * _cellHeight + _attributes.paddingV + _top);
                }
            }
            _lastStartIndex = startIndex;
        }
    }
    
/**
 *  Generate simple list labels between a specified start and end index
 */
    private function lazySimpleRenderers(value : Array<Dynamic>, startIndex : Int, endIndex : Int) : Void{
        if (_lastStartIndex != startIndex) {
            for (_count in startIndex...endIndex){
                if (_slider.getChildByName("label_" + Std.string(_count) + _suffix) == null) {
                    labelCell(value[_count], _count * _cellHeight + 2 * _attributes.paddingV + _top);
                }
            }
            _lastStartIndex = startIndex;
        }
    }
    
/**
 *  Is this row off screen?
 */
    private function offScreen(cell : DisplayObject) : Bool{
        return cell.y + cell.height < -_slider.y || cell.y + _slider.y > _attributes.height;
    }
    
/**
 *  All off-screen rows are marked recyclable
 */
    private function setRecycleList() : Void{
        if (_simple) {
        //  _recycleLabel.length = 0;
            for (i in 0..._slider.numChildren){
                var label : UILabel = try cast(_slider.getChildAt(i), UILabel) catch(e:Dynamic) null;
                if (label != null && offScreen(label)) {
                    _recycleLabel.push(label);
                }
            }
        }
        else {
        //    _recycleList.length = 0;
            for (j in 0..._slider.numChildren){
                var row : UIForm = try cast(_slider.getChildAt(j), UIForm) catch(e:Dynamic) null;
                if (row != null && offScreen(row)) {
                    _recycleList.push(row);
                }
            }
        }
    }
    
/**
 *  Re-use a recyclable row, otherwise instanciate a new one
 */
    override private function newRow(rendererXML : MadXML) : DisplayObject{
        if (_lazy && _recycle && _recycleList.length > 0) {
            return _recycleList.pop();
        }
        else {
            return super.newRow(rendererXML);
        }
    }
    
    /**
 *  Re-use a recyclable label, otherwise instanciate a new one
 */
    override private function newLabel() : UILabel{
        if (_lazy && _recycle && _recycleLabel.length > 0) {
            return _recycleLabel.pop();
        }
        else {
            return new UILabel(_slider, _attributes.paddingH, 0, "", FORMAT);
        }
    }
    
/**
 *  When the list is scrolled, generate missing rows
 */
    override private function sliderMoved() : Void{
        if (!_lazy) {
            return;
		}
        if (_recycle) { 
            setRecycleList();
		}
        var startIndex : Int = Math.floor(-_slider.y / _cellHeight);
        if (startIndex < 0) {
            startIndex = 0;
		}
        var endIndex : Int = startIndex + Math.ceil(_attributes.height / _cellHeight + 0.5);
        if (endIndex > _filteredData.length) {
            endIndex = _filteredData.length;
		}
        
        if (_simple) {
            lazySimpleRenderers(_filteredData, startIndex, endIndex);
		}
        else { 
        	lazyCustomRenderers(_filteredData, startIndex, endIndex);
		}
    }
    
/**
 *  Rearrange the layout to new screen dimensions
 */
    override public function layout(attributes : Attributes) : Void{
        _lastStartIndex = -1;
        super.layout(attributes);
        sliderMoved();
    }
    
/**
 *  Set filtered data
 */
    override private function set_filteredData(value : Array<Dynamic>) : Array<Dynamic>{
        _lazy = false;
        super.filteredData = value;
        _lazy = true;
        return value;
    }
}
