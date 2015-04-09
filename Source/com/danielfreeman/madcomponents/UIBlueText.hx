package com.danielfreeman.madcomponents;

import com.danielfreeman.madcomponents.UILabel;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.FocusEvent;
import openfl.events.KeyboardEvent;
import openfl.events.TextEvent;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextFieldType;
import openfl.text.TextFormat;
import openfl.ui.Keyboard;

class UIBlueText extends UILabel
{
    public var password(get, set):Bool;

    public var defaultext(never, set):String;

    public var defaultColour(get, set):Int;

    public var highlightColour(never, set):Int;
	


    public static inline var ENTER:String = "enter";

    public static var BLUE:Int = 0xCCCCFF;

    public static inline var GREY:Int = 0x999999;

    var ivmode:Bool;

    public var initial:Bool;

    var initialtext:String;

    var maxwdth:Float;

    var focussed:Bool = false;

    var savewdth:Float = -1;

    var _defaultColour:Int = 0x1000000;

    var _highlightColour:Int = BLUE;

    var _initialTextColour:Int = GREY;

    var _saveTextColour:Int;

    var _password:Bool = false;

    var _screen:Sprite;

    public function new(screen:Sprite, xx:Float, yy:Float, txt:String = " ", 
        wdth:Int = -1, format:TextFormat = null, ivmode:Bool = false, 
        promptColour:Int = GREY)
    {
    	_screen = screen;
    	initialtext = txt;
    	maxwdth = wdth;
    	_initialTextColour = promptColour;
    	super(screen, xx, yy, txt, format);
    	initial = this.ivmode = ivmode;
    	mouseEnabled = selectable = true;
    	type = TextFieldType.INPUT;
    	addEventListener(FocusEvent.FOCUS_IN, focusin);
    	addEventListener(FocusEvent.FOCUS_OUT, focusout);
    	addEventListener(KeyboardEvent.KEY_UP, keyup);
    	addEventListener(Event.CHANGE, txtchange0);
    	if (wdth >= 0) {
    		addEventListener(TextEvent.TEXT_INPUT, txtchange);
    	};
    }

    function set_password(value:Bool):Bool
    {
    	_password = value;
    	displayAsPassword = (initial) ? false : _password;
    	return value;
    }

    function get_password():Bool
    {
    	return _password;
    }

    public function keyup(ev:KeyboardEvent):Void
    {
    	if (ev.keyCode == Keyboard.ENTER && !multiline) {
    		stage.focus = null;
    		_screen.dispatchEvent(new Event(ENTER));
    	};
    }

    function set_defaultext(value:String):String
    {
    	initialtext = value;
    	ivmode = true;
    	if (initial) {
    		setInitialText();
    	};
    	return value;
    }

    public function setInitialText():Void
    {
    	if (!initial) {
    		_saveTextColour = defaultTextFormat.color;
    	};
    	setTextColour(_initialTextColour);
    	super.text = initialtext;
    	displayAsPassword = false;
    	initial = true;
    }

    function setTextColour(value:Int):Void
    {
    	var textFormat:TextFormat = defaultTextFormat;
    	textFormat.color = value;
    	defaultTextFormat = textFormat;
    }

    function set_defaultColour(value:Int):Int
    {
    	backgroundColor = _defaultColour = value;
    	background = true;
    	return value;
    }

    function get_defaultColour():Int
    {
    	return _defaultColour;
    }

    override public function get_text():String
    {
    	return (initial) ? "" : super.text;
    }

    override public function set_text(value:String):String
    {
    	if (ivmode && value == "") {
    		setInitialText();
    	} else {
    		setTextColour(_saveTextColour);
    		super.text = value;
    		displayAsPassword = _password;
    		initial = false;
    	};
    	savewdth = width;
    	txtchange();
    	return value;
    }

    override function set_fixwidth(value:Float):Float
    {
    	super.width = value;
    	savewdth = value;
    	maxwdth = -1;
    	autoSize = TextFieldAutoSize.NONE;
    	removeEventListener(TextEvent.TEXT_INPUT, txtchange);
    	return value;
    }

    public function txtchange(ev:TextEvent = null):Void
    {
    	autoSize = TextFieldAutoSize.LEFT;
    	if (maxwdth >= 0 && width > maxwdth) {
    		super.width = maxwdth;
    	} else {
    		super.width = fixwidth = savewdth;
    		autoSize = TextFieldAutoSize.NONE;
    	};
    }

    public function clear(text:String = ""):Void
    {
    	super.text = text;
    }

    function txtchange0(ev:Event = null):Void
    {
    	initial = false;
    	displayAsPassword = _password;
    }

    function focusin(ev:FocusEvent):Void
    {
    	background = _highlightColour < 0x1000000 && (_defaultColour < 0x1000000 || backgroundColor != 0);
    	backgroundColor = _highlightColour;
    	if (initial && ivmode) {
    		super.text = "";
    		displayAsPassword = _password;
    		var textFormat:TextFormat = defaultTextFormat;
    		textFormat.color = _saveTextColour;
    		defaultTextFormat = textFormat;
    		if (savewdth > 0) {
    			fixwidth = savewdth;
    		};
    	};
    	focussed = true;
    }

    public function focusout(ev:FocusEvent = null):Void
    {
    	if (super.text == "" && ivmode) {
    		setInitialText();
    		if (savewdth > 0) {
    			fixwidth = savewdth;
    		};
    	} else {
    		initial = false;
    	};
    	focussed = false;
    	background = _defaultColour < 0x1000000;
    	if (background) {
    		backgroundColor = _defaultColour;
    	};
    }

    function set_highlightColour(value:Int):Int
    {
    	_highlightColour = value;
    	return value;
    }

    public function focus():Void
    {
    	stage.focus = this;
    }

    public function destructor():Void
    {
    	removeEventListener(FocusEvent.FOCUS_IN, focusin);
    	removeEventListener(FocusEvent.FOCUS_OUT, focusout);
    	removeEventListener(KeyboardEvent.KEY_UP, keyup);
    	removeEventListener(Event.CHANGE, txtchange0);
    	removeEventListener(TextEvent.TEXT_INPUT, txtchange);
    }
}
