package com.danielfreeman.madcomponents;

import openfl.display.GradientType;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.FocusEvent;
import openfl.events.MouseEvent;
import openfl.events.TextEvent;
import openfl.filters.DropShadowFilter;
import openfl.geom.Matrix;
import openfl.geom.Point;
import openfl.geom.Rectangle;
import openfl.text.TextFormat;

class UIInput extends MadSprite implements IComponentUI
{
    public var inputField(get, set):Dynamic;

//    public var text(get, set):String;

    public var htmlText(never, set):String;

    public var fixwidth(never, set):Float;

    static inline var SHADOW_OFFSET:Float = 1.0;

    static inline var WIDTH:Float = 80.0;

    static inline var CURVE:Float = 16.0;

    static inline var CURVE7:Float = 6.0;

    static inline var SIZE_X:Float = 10.0;

    static inline var SIZE_Y:Float = 7.0;

    static inline var SIZE_ALT:Float = 4.0;

    static inline var COLOUR:Int = 0x333339;

    static inline var SHADOW_COLOUR:Int = 0xAAAAAC;

    static inline var BACKGROUND:Int = 0xF0F0F0;

    static inline var BACKGROUND7:Int = 0xFFFFFF;

   	var FORMAT:TextFormat = new TextFormat("_sans", 16, 0x333333);

    var _format:TextFormat = new TextFormat("_sans", 16, 0x333333);

    var _label:Dynamic;

    var _colours:Array<Int>;

    var _fixwidth:Float = WIDTH;

    var _alt:Bool;

    var _style7:Bool;

    public function new(screen:Sprite, xx:Float, yy:Float, text:String, 
        colours:Array<Int> = null, alt:Bool = false, prompt:String = "", 
        promptColour:Int = 0x999999, style7:Bool = false)
    {
    	super(screen, null);
    	x = xx;
    	y = yy;
    	_alt = alt;
    	_style7 = style7;
    	_colours = (colours != null) ? colours : [];
    	inputField = new UIBlueText(this, (alt) ? SIZE_ALT : SIZE_X, ((alt) ? SIZE_ALT : SIZE_Y) + 1, prompt, -1, _format, prompt != "", promptColour);
    //	if (cast((text), XML).hasSimpleContent()) {
    		_label.text = text;
    //	} else {
    //		_label.htmlText = MadXML.parse(text);
    //	};
    	if (_colours.length > 4 && _label.exists("highlightColour")) {
    		_label.highlightColour = _colours[4];
    	};
    	if (text != "") {
    		cast((_label), UIBlueText).txtchange();
    		cast((_label), UIBlueText).focusout();
    	};
    	addEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
    	drawOutline();
    }

    function set_inputField(value:Dynamic):Dynamic
    {
    	if (_label != null) {
    		_label.removeEventListener(Event.CHANGE, textChanged);
    		_label.removeEventListener(FocusEvent.FOCUS_OUT, focusOut);
    		removeChild(_label);
    	};
    	_label = value;
    	_label.fixwidth = _fixwidth - 2 * ((_alt) ? SIZE_ALT : SIZE_X);
    	_label.addEventListener(Event.CHANGE, textChanged);
    	_label.addEventListener(FocusEvent.FOCUS_OUT, focusOut);
    	drawOutline();
    	return value;
    }

    function get_inputField():Dynamic
    {
    	return _label;
    }

    function focusOut(event:FocusEvent):Void
    {
    	dispatchEvent(new FocusEvent(FocusEvent.FOCUS_OUT));
    }

    function textChanged(event:Event):Void
    {
    	dispatchEvent(new TextEvent(TextEvent.TEXT_INPUT));
    	event.stopPropagation();
    }

    function mouseDown(event:MouseEvent):Void
    {
    	drawOutline(true);
    	stage.addEventListener(MouseEvent.MOUSE_UP, mouseUp);
    	event.stopPropagation();
    }

    function mouseUp(event:MouseEvent):Void
    {
    	drawOutline();
    	stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
    	if (Std.is(stage.focus, UIBlueText) ) { //&& cast((stage.focus), UIBlueText).selectionBeginIndex <= 0
    		cast((stage.focus), UIBlueText).setSelection(cast((stage.focus), UIBlueText).text.length, cast((stage.focus), UIBlueText).text.length);
    	};
    }

    override function set_text(value:String):String
    {
    	_label.text = value;
    	drawOutline();
    	return value;
    }

    function set_htmlText(value:String):String
    {
    	_label.htmlText = value;
    	drawOutline();
    	return value;
    }

    override private function get_text():String
    {
    	return _label.text;
    }

    function set_fixwidth(value:Float):Float
    {
    	_fixwidth = value;
    	_label.fixwidth = value - 2 * ((_alt) ? SIZE_ALT : SIZE_X);
    	drawOutline();
    	return value;
    }

    public function focus():Void
    {
    	stage.focus = _label;
    }

    function drawOutline(pressed:Bool = false):Void
    {
    	var height:Float = _label.height + 2 * ((_alt) ? SIZE_ALT : SIZE_Y);
    	graphics.clear();
    	if (_colours.length > 3) {
    		graphics.beginFill(_colours[3]);
    		graphics.drawRect(0, 0, _fixwidth, height + 1);
    	};
    	var curve:Float = (_style7) ? CURVE7 : CURVE;
    	graphics.beginFill(_colours.length > (0) ? _colours[0] : COLOUR);
    	graphics.drawRoundRect(0, 0, _fixwidth, height, curve);
    	if (_style7) {
    		graphics.beginFill(_colours.length > (1) ? _colours[1] : BACKGROUND7);
    		graphics.drawRoundRect(1, 1, _fixwidth - 2, height - 2, curve - 1);
    	} else {
    		graphics.beginFill(_colours.length > (2) ? _colours[2] : SHADOW_COLOUR);
    		graphics.drawRoundRect(1, 1, _fixwidth - 2, height - 2, curve - 1);
    		graphics.beginFill(_colours.length > (1) ? _colours[1] : BACKGROUND);
    		graphics.drawRoundRect(2.5, 3, _fixwidth - 3.5, height - 4, curve - 2);
    	};
    }

    public function stageRect():Rectangle
    {
    	var leftTop:Point = _label.localToGlobal(new Point(0, 0));
    	var rightBottom:Point = _label.localToGlobal(new Point(_label.width, _label.height));
    	return new Rectangle(leftTop.x, leftTop.y, rightBottom.x - leftTop.x, rightBottom.y - leftTop.y);
    }

    override public function destructor():Void
    {
    	super.destructor();
    	removeEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
    	stage.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
    	_label.removeEventListener(Event.CHANGE, textChanged);
    	_label.removeEventListener(FocusEvent.FOCUS_OUT, focusOut);
    	_label.destructor();
    }
}
