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

import openfl.errors.Error;
import openfl.display.Sprite;
import openfl.events.FocusEvent;
import openfl.events.MouseEvent;
import openfl.events.TextEvent;
import openfl.text.TextField;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextFieldType;
import openfl.text.TextFormat;

class UILabel extends TextField
{

    public var xmlText(never, set):String;
	
	public var fixwidth(never, set):Float;

    public var fixheight(never, set):Float;

    public static var FORMAT:TextFormat = new TextFormat("_sans", 16, 0x333333);

    public function new(screen:Sprite, xx:Float, yy:Float, txt:String = "", format:TextFormat = null)
    {
    	super();
    	screen.addChild(this);
    	x = xx;
    	y = yy;
    	mouseEnabled = multiline = selectable = false;
    	type = TextFieldType.DYNAMIC;
    	autoSize = TextFieldAutoSize.LEFT;
    	if (format == null) format = FORMAT;
    	defaultTextFormat = format;
    	height = 30;
    	if (txt == "") {
    		text = " ";
    	} else {
    		xmlText = txt;
    	};
    }

    function set_fixwidth(value:Float):Float
    {
    	multiline = wordWrap = true;
    	width = value;
    	return value;
    }

    function set_xmlText(value:String):String
    {
		
    	try {
    		var xmlValue:MadXML = MadXML.parse("<a>" + value + "</a>");
    		if (xmlValue.hasChildren) {
				trace(value);
    			htmlText = value;
    			if (text == "") {
    				text = " ";
    			};
    		} else {
    			text = value;
    		};
    	} catch(error:Error) {
    		text = ((value != null)) ? value : "";
    	};
    	return value;
    }

    function set_fixheight(value:Float):Float
    {
    	if (value < 0) {
    		autoSize = TextFieldAutoSize.LEFT;
    	} else {
    		autoSize = TextFieldAutoSize.NONE;
    		multiline = wordWrap = true;
    		height = value;
    	};
    	return value;
    }

 /*  override function set_htmlText(value:String):String
    {
    	super.htmlText = (value != null) ? value : "null error";
    	defaultTextFormat = this.getTextFormat();
    	return value;
    }*/
}
