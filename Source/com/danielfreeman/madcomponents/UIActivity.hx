package com.danielfreeman.madcomponents;

import openfl.display.Sprite;
import openfl.events.TimerEvent;
import openfl.utils.Timer;

class UIActivity extends Sprite
{
    public var rotate(never, set):Bool;

    public var isVisible(never, set):Bool;

    public static var SPOKES:Int = 12;

    public static var INTERVAL:Int = 100;

    static inline var INNER:Float = 16.0;

    static inline var OUTER:Float = 40.0;

    static inline var THICKNESS:Float = 4.0;

    static inline var INCREMENT:Int = 8;

    static var DEGTORAD:Float = 2 * Math.PI;

    var timer:Timer = new Timer(INTERVAL);

    public function new(screen:Sprite, xx:Float, yy:Float, 
        visible:Bool = false, colour:Int = 0xFFFFFF)
    {
    	super();
    	screen.addChild(this);
    	x = xx;
    	y = yy;
    	drawActivityIndicator(colour);
    	timer.addEventListener(TimerEvent.TIMER, rotateHandler);
    	mouseEnabled = false;
    	super.visible = visible;
    }

    function rotateHandler(event:TimerEvent):Void
    {
    	rotation += 360 / SPOKES;
    }

    function drawActivityIndicator(colour:Int):Void
    {
    	for (i in 1 ... SPOKES + 1) {
    		graphics.lineStyle(THICKNESS, Colour.darken(colour, -i * INCREMENT));
    		graphics.moveTo(-INNER * Math.sin(DEGTORAD * i / SPOKES), -INNER * Math.cos(DEGTORAD * i / SPOKES));
    		graphics.lineTo(-OUTER * Math.sin(DEGTORAD * i / SPOKES), -OUTER * Math.cos(DEGTORAD * i / SPOKES));
    	};
    }

    function set_rotate(value:Bool):Bool
    {
    	if (value) {
    		timer.reset();
    		timer.start();
    	} else {
    		timer.stop();
    	};
    	super.visible = true;
    	return value;
    }

    function set_isVisible(value:Bool):Bool
    {
    	rotate = value;
    	visible = value;
    	return value;
    }

    public function destructor():Void
    {
    	timer.removeEventListener(TimerEvent.TIMER, rotateHandler);
    }
}
