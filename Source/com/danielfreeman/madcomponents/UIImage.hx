package com.danielfreeman.madcomponents;

import openfl.display.PixelSnapping;
import openfl.system.Capabilities;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.display.Loader;
import openfl.geom.Point;
import openfl.geom.Rectangle;

class UIImage extends MadSprite implements IComponentUI
{
//    public var text(never, set):Dynamic;

    public var value(never, set):String;

    public var image(never, set):Dynamic;

    public var pixelSnappedImageBitmap(never, set):Bitmap;
	
	public var pixelSnappedImageBitmapName(never, set):String;

    public var pixelSnappedImageClass(never, set):Class<Dynamic>;

    public var pixelSnappedImageName(never, set):String;

    var data(never, set):MadXML;

    public var attributesWidth(never, set):Float;

    public var attributesHeight(never, set):Float;

    public var imageClassName(never, set):String;

    public var imageClass(never, set):Class<Dynamic>;
	
	public var imageBitmapName(never, set):String;
	

    var _width:Float = -1.0;

    var _height:Float = -1.0;

    var _attributesWidth:Float;

    var _attributesHeight:Float;

    var _image:DisplayObject = null;

    var _scale:Bool = true;

    var _stretch:Bool;

    var _alpha:Float = 0.0;

    var _colour:Int = 0xEEEEEE;

    var _border:String = "";

    public function new(screen:Sprite, xml:MadXML, attributes:Attributes)
    {
    	_attributesWidth = attributes.widthH;
    	_attributesHeight = attributes.heightV;
    	_border = xml.has.border ? xml.att.border : "";
    	_stretch = xml.has.stretch && xml.att.stretch == "true";
    	_alpha = ((_border == "" || _border == "false")) ? 0 : 1.0;
    	if (xml.has.background) {
    		_colour = UI.toColourValue(xml.att.background);
    		_alpha = 1.0;
    	};
    	super(screen, attributes);
    	x = attributes.x;
    	y = attributes.y;
    	_scale = !xml.has.scale || xml.att.scale != "false";
    	mouseEnabled = mouseChildren = false;
    	if (xml.hasNode.data) {
    		if (xml.node.data.hasNode.item) {
    			data = xml.node.data.node.item;
    		} else {
    			data = xml.node.data;
    		};
    	} else {
    		text = xml.toString();
    	};
    	clickable = false;
    }

    override function set_text(source:Dynamic):Dynamic
    {
    	if (Std.is(source, Class) || source == null) {
    		imageClass = source;
    	} else if (Std.is(source, BitmapData) || Std.is(source, DisplayObject)) {
    		image = source;
    	} else if (Std.is(source, String)) {
    		if (source == "") {
    			imageClass = null;
    		} else if (!Math.isNaN(Std.parseFloat(source.charAt(0)))) {
    			graphics.clear();
    			graphics.beginFill(_colour, _alpha);
    			source.replace(new EReg(" ", "gi"), "");
    			var dimensions:Array<String> = source.split(",");
    			var border:Float = ((_border == "" || _border == "false")) ? 0 : 2.0;
    			var curve:Float = ((_border == "rounded")) ? 6.0 : 0;
    			if (dimensions.length > 1) {
    				graphics.drawRoundRect(0, 0, (_width = Std.parseFloat(dimensions[0])) + 2 * border, (_height = Std.parseFloat(dimensions[1])) + 2 * border, curve);
    			} else {
    				graphics.drawRoundRect(0, 0, (_width = Std.parseFloat(dimensions[0])) + 2 * border, (_height = Std.parseFloat(dimensions[0])) + 2 * border, curve);
    			};
    			if (dimensions.length > 2) {
    				value = dimensions[2];
    			};
    		} else {
    			value = source;
    		};
    	};
    	return source;
    }

    function set_value(value:String):String
    {
    	imageBitmapName = value;
    	return value;
    }

    function set_image(value:Dynamic):Dynamic
    {
    	if (parent != null) {
    		if (_image != null) {
    			removeChild(_image);
    		};
    		_image = ((Std.is(value, BitmapData))) ? new Bitmap(value) : value;
    		_image.x = _image.y = ((_border == "" || _border == "false")) ? 0 : 2.0;
    		addChild(_image);
    		scaleImage();
    	};
    	return value;
    }

    function set_pixelSnappedImageBitmap(value:Bitmap):Bitmap
    {
    	_scale = false;
    	image = value;
    	value.scaleX = value.scaleY = 1 / UI.scale;
    	value.pixelSnapping = PixelSnapping.ALWAYS;
    	return value;
    }
	
	function set_pixelSnappedImageBitmapName(value:String):String
    {
    	pixelSnappedImageBitmap = new Bitmap(Type.createInstance(Type.resolveClass(value), [0, 0]));
    	return value;
    }

    function set_pixelSnappedImageClass(Value:Class<Dynamic>):Class<Dynamic>
    {
    	pixelSnappedImageBitmap = cast((Type.createInstance(Value, [])), Bitmap);
    	return Value;
    }

    function set_pixelSnappedImageName(value:String):String
    {
    	pixelSnappedImageClass = Type.getClass(Type.resolveClass(value));
    	return value;
    }

    function set_data(value:MadXML):MadXML
    {
    	if (value.has.ldpi && Capabilities.screenDPI < 160) {
    		pixelSnappedImageBitmapName = value.att.ldpi;
    	} else if (value.has.mdpi && Capabilities.screenDPI < 240) {
    		pixelSnappedImageBitmapName = value.att.mdpi;
    	} else if (value.has.hdpi && Capabilities.screenDPI < 320) {
    		pixelSnappedImageBitmapName = value.att.hdpi;
    	} else if (value.has.xhdpi && Capabilities.screenDPI < 400) {
    		pixelSnappedImageBitmapName = value.att.xhdpi;
    	} else if (value.has.xxhdpi && Capabilities.screenDPI >= 400) {
    		pixelSnappedImageBitmapName = value.att.xxhdpi;
    	} else if (value.has.image) {
    		text = value.att.image;
    	};
    	return value;
    }

    function scaleImage():Void
    {
    	if (_image == null || !_scale) {
    		return;
    	};
    	if (Std.is(_image, Bitmap)) {
    		cast((_image), Bitmap).smoothing = true;
    	};
    	_image.scaleX = _image.scaleY = 1.0;
    	if (_stretch) {
    		_image.scaleX = ((_width > 0)) ? Math.min(_width / _image.width, _attributesWidth / _image.width) : _attributesWidth / _image.width;
    		_image.scaleY = ((_height > 0)) ? Math.min(_height / _image.height, _attributesWidth / _image.height) : _attributesHeight / _image.height;
    	} else {
    		if (_width > 0) {
    			_image.scaleX = _image.scaleY = Math.min(Math.min(_width / _image.width, _height / _image.height), Math.min(_attributesWidth / _image.width, 1.0));
    		} else {
    			_image.scaleX = _image.scaleY = Math.min(_attributesWidth / _image.width, 1.0);
    		};
    	};
    }

    function set_attributesWidth(value:Float):Float
    {
    	_attributesWidth = value;
    	scaleImage();
    	return value;
    }

    function set_attributesHeight(value:Float):Float
    {
    	_attributesHeight = value;
    	scaleImage();
    	return value;
    }

    public function stageRect(aspectRatio:Float = -1):Rectangle
    {
    	var leftTop:Point = localToGlobal(new Point(0, 0));
    	var rightBottom:Point = _width > (0) ? localToGlobal(new Point(_width, _height)) : localToGlobal(new Point(_attributesWidth, _attributesHeight));
    	var result:Rectangle = new Rectangle(leftTop.x, leftTop.y, rightBottom.x - leftTop.x, rightBottom.y - leftTop.y);
    	var aspectFrame:Float = result.width / result.height;
    	if (aspectRatio > 0) {
    		if (aspectRatio < aspectFrame) {
    			result.x = result.x + (1 - aspectRatio / aspectFrame) * result.width / 2;
    			result.width = (aspectRatio / aspectFrame) * result.width;
    		} else {
    			result.y = result.y + (1 - aspectFrame / aspectRatio) * result.height / 2;
    			result.height = (aspectFrame / aspectRatio) * result.height;
    		};
    	};
    	return result;
    }

    function set_imageClassName(value:String):String
    {
    	imageClass = Type.getClass(Type.resolveClass(value));
    	return value;
    }
	
	function set_imageBitmapName(value:String):String
    {
    	image = new Bitmap(Type.createInstance(Type.resolveClass(value), [0, 0]));
    	return value;
    }

    function set_imageClass(value:Class<Dynamic>):Class<Dynamic>
    {
    	if (_image != null) {
    		removeChild(_image);
    	};
    	_image = null;
    	if (value != null) {
    		image = Type.createInstance(value, []);
    	};
    	return value;
    }

    override public function layout(attributes:Attributes):Void
    {
    	super.layout(attributes);
    	attributesWidth = attributes.widthH;
    	attributesHeight = attributes.heightV;
    }
}
