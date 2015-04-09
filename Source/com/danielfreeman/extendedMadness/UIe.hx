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

import com.danielfreeman.madcomponents.UI;
import com.danielfreeman.extendedmadness.UIPanel;


import openfl.text.TextFormat;
import openfl.text.TextField;

import com.danielfreeman.madcomponents.*;
import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.utils.Timer;
import openfl.events.TimerEvent;


class UIe extends UI
{
	
	private static var DESKTOP_TOKENS : Array<String> = ["segmentedControl", "checkBox", "radioButton", "progressBar", "line", "switchX", "radialSlider", "starRating", "icons", "scrollHorizontal", "scrollXY", "listHorizontal", "tickList", "tickOneList", "screens", "touch", "tabPagesTop", "fastDataGrid", "scrollDataGrid", "scrollDataGrids", "scrollTouchGrids", "table"];

    private static var DESKTOP_CLASSES : Array<Class<Dynamic>> = [UISegmentedControl, UICheckBox, UIRadioButton, UIProgressBar, UILine, UISwitchX, UIRadialSlider, UIStarRating, UIIcons, UIScrollHorizontal, UIScrollXY, UIListHorizontal, UITickList, UITickOneList, UIScreens, UITouch, UITabPagesTop, UIFastDataGrid, UIScrollDataGrid, UIScrollDataGrids, UIScrollTouchGrids, UITable];
	
    private static inline var COLOUR : Int = 0x666666;
    
    private static var _cursor : Bool = false;
    private static var _clickTimer : Timer = new Timer(90, 1);
    
    public static function activate(screen : Sprite) : Void{

        UI.extend(DESKTOP_TOKENS, DESKTOP_CLASSES);
    }
    
/**
 * Create a UI layout in a resizable window
 */
    public static function createInWindow(screen : Sprite, xml : MadXML) : Sprite{
        if (!_cursor) {
            activate(screen);
        }
        var result : Sprite = create(screen, xml, screen.stage.stageWidth, screen.stage.stageHeight);
        if (!xml.has.autoResize || xml.att.autoResize != "false") 
            screen.stage.addEventListener(Event.RESIZE, UI.resize);
        var root:Sprite = UI.uiLayer;
		if (root.mask != null) {
            root.removeChild(root.mask);
            root.mask = null;
        }
//        ready(screen);
        return result;
    }
    
/**
 * Create a UI layout with extended components
 */
    public static function create(screen : Sprite, xml : MadXML, width : Float = -1, height : Float = -1) : Sprite{
        if (!_cursor) {
            activate(screen);
        }
        var result : Sprite = UI.create(screen, xml, width, height);
        return result;
    }

	
    public static function toTextFormat(formatXML : MadXML, format : TextFormat) : TextFormat{
        var textField : TextField = new TextField();
        textField.defaultTextFormat = format;
        var fontString : String = formatXML.toXMLString();
        fontString = fontString.substring(fontString.indexOf(" "), fontString.length - 2);
        textField.htmlText = "<font" + fontString + "> </font>";
        return textField.getTextFormat();
    }

	
    public function new()
    {
        super();
    }
}

