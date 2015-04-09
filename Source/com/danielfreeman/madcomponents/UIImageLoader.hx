package com.danielfreeman.madcomponents;

import openfl.errors.Error;
import openfl.display.Loader;
import openfl.display.LoaderInfo;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Shape;
import openfl.display.Sprite;
import openfl.events.*;
import openfl.net.URLRequest;

class UIImageLoader extends UIImage
{
    public var theError(get, never):Dynamic;

    public static inline var LOADED:String = "imageLoaded";

    static var _imageCache:Map<String, BitmapData> = new Map<String, BitmapData>();
	static var _placeHolder:BitmapData = new BitmapData(0, 0);

    static var _loaderQueue:Array<UIImageLoader> = [];

    static var _running:Bool = false;

    var _base:String = "";

    var _error:Dynamic;

    var _cache:Bool = false;

    var _queue:Bool = false;

    var _loader:Loader = null;

    var _url:String;

    public static function clearCache(url:String = ""):Void
    {
    	if (url == "") {
    		_imageCache = new Map<String, BitmapData>();
    	} else { };
    }

    public static function addToQueue(imageLoader:UIImageLoader):Void
    {
    	_loaderQueue.push(imageLoader);
    	if (!_running) {
    		_running = true;
    		loadNext();
    	};
    }

    public static function removeFromQueue(imageLoader:UIImageLoader):Void
    {
    	var index:Int = Lambda.indexOf(_loaderQueue, imageLoader);
    	if (index >= 0) {
    		_loaderQueue.splice(index, 1);
    	};
    }

    public static function loadNext():Void
    {
    	if (_loaderQueue.length > 0) {
    		var imageLoader:UIImageLoader = _loaderQueue.shift();
    		imageLoader.doLoad();
    	} else {
    		_running = false;
    	};
    }

    public function new(screen:Sprite, xml:MadXML, attributes:Attributes)
    {
    	if (xml.has.base) {
    		_base = xml.att.base;
    	};
    	_cache = xml.has.cache && xml.att.cache == "true";
    	_queue = xml.has.queue && xml.att.queue == "true";
    	super(screen, xml, attributes);
    }

    override function set_value(value:String):String
    {
    	_url = value;
    	var waitFor:Bool = _queue && (!_cache || (_cache && _imageCache.get(value) == _placeHolder));
    	if (waitFor) {
    		addToQueue(this);
    	} else {
    		doLoad();
    	};
    	return value;
    }

    function loadURLImage(url:String):Void
    {
    	if (_queue && _cache) {
    		_imageCache.set(url, _placeHolder);
    	};
    	var loader:Loader = new Loader();
    	loader.contentLoaderInfo.addEventListener(Event.COMPLETE, isLoaded);
    	loader.contentLoaderInfo.addEventListener(SecurityErrorEvent.SECURITY_ERROR, errorFn);
    	loader.addEventListener(IOErrorEvent.IO_ERROR, errorFn);
    	loader.contentLoaderInfo.addEventListener(IOErrorEvent.IO_ERROR, errorFn);
    	var request:URLRequest = new URLRequest(_base + url);
    	try {
    		loader.load(request);
    	} catch(error:Error) {
    		_error = error;
    		dispatchEvent(new Event(ErrorEvent.ERROR));
    		if (_queue) {
    			loadNext();
    		};
    	};
    }

    public function doLoad():Void
    {
    	if (_cache) {
    		var cacheValue:BitmapData = _imageCache.get(_url);
    		if (cacheValue != null && cacheValue != _placeHolder) {
    			image = cacheValue;
    			dispatchEvent(new Event(LOADED, true, true));
    			if (_queue) {
    				loadNext();
    			};
    		} else {
    			loadURLImage(_url);
    		};
    	} else {
    		loadURLImage(_url);
    	};
    }

    function errorFn(event:Dynamic):Void
    {
    	var loader:Loader = event.target.loader;
    	removeListeners(loader);
    	_error = event;
    	dispatchEvent(new Event(ErrorEvent.ERROR));
    	if (_queue) {
    		loadNext();
    	};
    }

    function get_theError():Dynamic
    {
    	return _error;
    }

    function isLoaded(event:Event):Void
    {
    	var loader:Loader = event.target.loader;
    	removeListeners(loader);
    	image = cast((loader.content), Bitmap);
    	if (_image != null) {
    		if (_cache) {
    			var loaderInfo:LoaderInfo = cast((event.target), LoaderInfo);
    			var bitmapData:BitmapData = new BitmapData(loaderInfo.width, loaderInfo.height, true, 0x00000000);
    			bitmapData.draw(_image);
    			_imageCache.set(loader.contentLoaderInfo.url, bitmapData);
    		};
    		dispatchEvent(new Event(LOADED, true, true));
    	};
    	if (_queue) {
    		loadNext();
    	};
    }

    function removeListeners(loader:Loader):Void
    {
    	if (loader != null) {
    		loader.contentLoaderInfo.removeEventListener(Event.COMPLETE, isLoaded);
    		loader.contentLoaderInfo.removeEventListener(SecurityErrorEvent.SECURITY_ERROR, errorFn);
    		loader.removeEventListener(IOErrorEvent.IO_ERROR, errorFn);
    		loader.contentLoaderInfo.removeEventListener(IOErrorEvent.IO_ERROR, errorFn);
    	};
    }

    override public function destructor():Void
    {
    	super.destructor();
    	if (_queue) {
    		removeFromQueue(this);
    	};
    }
}
