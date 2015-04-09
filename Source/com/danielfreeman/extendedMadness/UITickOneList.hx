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



import openfl.display.Sprite;
import openfl.display.DisplayObject;
import openfl.events.Event;
import openfl.events.MouseEvent;
import com.danielfreeman.madcomponents.*;

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
 *  MadComponents tick one list.  Only one row may be ticked.
 * <pre>
 * &lt;tickOneList
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
class UITickOneList extends UITickList
{
    
    private var _lastPressedCell : Int;
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        super(screen, xml, attributes);
    }
    
    
    override private function mouseDown(event : MouseEvent) : Void{
        _lastPressedCell = _pressedCell;
        super.mouseDown(event);
    }
    
    
    override private function doClick() : Void{
        if (_lastPressedCell != _pressedCell && _pressButton == null && _clickRow) {
            var lastTick : UITick = cast((_slider.getChildByName("tick_" + Std.string(_lastPressedCell))), UITick);
            if (lastTick != null) {
                lastTick.visible = false;
            }
        }
        super.doClick();
    }
    
    
    override private function pressButton(show : Bool = true) : DisplayObject{
        super.pressButton();
        if (_classic && _lastPressedCell != _pressedCell && _clickRow) {
            var lastTick : UITick = cast((_slider.getChildByName("tick_" + Std.string(_lastPressedCell))), UITick);
            if (lastTick != null) {
                lastTick.visible = false;
            }
            dispatchEvent(new Event(Event.CHANGE));
        }
        return _pressButton;
    }
}
