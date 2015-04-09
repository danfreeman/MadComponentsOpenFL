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

package com.danielfreeman.extendedmadness;

import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.events.Event;
import com.danielfreeman.madcomponents.*;
import openfl.events.MouseEvent;

/**
 * The tickIndexes have changed
 */
@:meta(Event(name="change",type="flash.events.Event"))

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
 *  MadComponents tick list
 * <pre>
 * &lt;tickList
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, ..."
 *    visible = "true|false"
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    border = "true|false"
 *    autoLayout = "true|false"
 *    lines = "true|false"
 *    pullDownRefresh = "true|false"
 *    pullDownColour = "#rrggbb"
 *    sortBy = "IDENTIFIER"
 *    index = "INTEGER"
 *    mask = "true|false"
 *    showPressed = "true|false"
 *    highlightPressed = "true|false"
 *    alignV = "scroll|no scroll"
 *    tickColour = "#rrggbb"
 * /&gt;
 * </pre>
 */
class UITickList extends UIList
{
    public var tickData(get, never) : Array<Dynamic>;
    public var tickIndexes(get, never) : Array<Int>;

    
    private static inline var TICK_COLOUR : Int = 0x9999AA;
    
    private var _tickColour : Int = TICK_COLOUR;
    private var _saveTicks : Array<Bool>;
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        if (xml.has.tickColour) {
            _tickColour = UI.toColourValue(Std.string(xml.att.tickColour));
        }
        super(screen, xml, attributes);
    }
    
/**
 *  Create a list row
 */
    override private function drawCell(position : Float, count : Int, record : Dynamic) : Void{
        var tick : UITick = cast((_slider.getChildByName("tick_" + Std.string(count))), UITick);
        if (tick != null) {
            tick.x = _width - _attributes.paddingH - UITick.SIZE;
        }
        else {
            var cell : DisplayObject = _slider.getChildByName("label_" + Std.string(count));
            var yPosition : Float = (cell.y + position - UITick.SIZE) / 2 - ((_simple) ? 1.0 : 0.5) * _attributes.paddingV;
            tick = new UITick(_slider, _width - _attributes.paddingH - UITick.SIZE, yPosition, _tickColour);  //_cellTop + 2 * _attributes.paddingV + 3,  
            tick.name = "tick_" + Std.string(count);
            tick.visible = !Std.is(record, String) && (Reflect.hasField(record, "_tick") ? record._tick == "true" : false);
        }
        super.drawCell(position, count, record);
    }
    
    
    override private function mouseUp(event : MouseEvent) : Void{
        if (!_classic && _rowClick) {
            doClick();
        }
        super.mouseUp(event);
    }
    
    
    private function doClick() : Void {
        var tick : UITick = cast((_slider.getChildByName("tick_" + Std.string(_pressedCell))), UITick);
        if (tick != null) {
            tick.visible = !tick.visible;
        }
        _filteredData[_pressedCell]._tick = tick.visible;
        dispatchEvent(new Event(Event.CHANGE));
    }
    
    
    override private function pressButton(show : Bool = true) : DisplayObject{
        super.pressButton();
        if (_classic && _pressButton == null && _clickRow) {
            doClick();
        }
        return _pressButton;
    }
    
/**
 *  Returns a Vector of data objects that have visible ticks.
 *  (Note that $index is the original, unfiltered index position.)
 */
    private function get_tickData() : Array<Dynamic>{
        var result : Array<Dynamic> = new Array<Dynamic>();
        var ticks : Array<Int> = tickIndexes;
        for (tick in ticks){
            result.push(_filteredData[tick]);
        }
        return result;
    }
    
/**
 *  Returns a Vector of list row indexes that have visible ticks
 */
    private function get_tickIndexes() : Array<Int>{
        var result : Array<Int> = new Array<Int>();
        var tick : UITick;
        for (i in 0..._count){
            tick = cast((_slider.getChildByName("tick_" + Std.string(i))), UITick);
            if (tick.visible) {
                result.push(i);
            }
        }
        return result;
    }
}
