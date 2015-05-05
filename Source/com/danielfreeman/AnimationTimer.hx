package com.danielfreeman;
import openfl.display.Sprite;
import openfl.events.TimerEvent;
import openfl.utils.Timer;
import openfl.display.Stage;

/**



 */
class AnimationTimer
{
	private static var _callBacks:Array<AnimationTimer> = [];
	private static var _animationTimer:Timer = null;
	
	public var currentCount(get, never) : Int;
	public var running(get, never) : Bool;
	
	private var _count:Int = 0;
	private var _repetitions:Int = -1;
	
	private var _parentClass:Dynamic;
	private var _callBack:TimerEvent->Void = null;
	private var _completeCallBack:TimerEvent->Void = null;
	private var _timerEvent:TimerEvent;
	
	
	public function new(parentClass:Sprite, repetitions:Int = -1) {
		_parentClass = parentClass;
		_repetitions = repetitions;
		_timerEvent = new TimerEvent(TimerEvent.TIMER);
		if (_animationTimer == null) {
			initialise(_parentClass.stage);
		}
	}
	
	
	public function addEventListener(type:String, callBack:TimerEvent->Void):Void {
		if (type == TimerEvent.TIMER) {
			_callBack = callBack;
		}
		else if (type == TimerEvent.TIMER_COMPLETE) {
			_completeCallBack = callBack;
		}
	}
	
	
	public function removeEventListener(type:String, callBack:TimerEvent->Void):Void {
		if (type == TimerEvent.TIMER) {
			stop();
			if (_callBacks.length == 0) {
				_animationTimer.stop();
			}
		}
		else if (type == TimerEvent.TIMER_COMPLETE) {
			_completeCallBack = null;
		}
	}
	
	
	public function exec():Void {
		_count++;
		Reflect.callMethod(_parentClass, _callBack, [_timerEvent]);
		if (_repetitions > 0 && _count >= _repetitions) {
			if (_completeCallBack != null) {
 				Reflect.callMethod(_parentClass, _completeCallBack, [_timerEvent]);
			}
			stop();
		}
	}
	
	
	public function get_currentCount():Int {
		return _count;
	}
	
	
	public function get_running():Bool {
		return _callBacks.indexOf(this) >= 0;
	}
	
	
	public function reset():Void {
		_count = 0;
	}
	
	
	public function stop():Void {
		_callBacks.remove(this);
		if (_callBacks.length == 0) {
			_animationTimer.stop();
		}
	}


	public function start():Void {
		if (_callBacks.length == 0) {
			_animationTimer.reset();
			_animationTimer.start();
		}
		if (_callBacks.indexOf(this) < 0) {
			_callBacks.push(this);
		}
	}


	public static function initialise(stage:Stage):Void {
		_animationTimer = new Timer(1000 / stage.frameRate);
		_animationTimer.addEventListener(TimerEvent.TIMER, animateFrame);
	}
	
	
	private static function animateFrame(event:TimerEvent):Void {
		for (callBack in _callBacks) {
			Reflect.callMethod(callBack, Reflect.field(callBack, "exec"), []);
		}
		event.updateAfterEvent();
	}
	
	
	public static function destructor():Void {
		_callBacks = [];
		_animationTimer.removeEventListener(TimerEvent.TIMER, animateFrame);
		_animationTimer = null;
	}

}
	
	
	
	
	