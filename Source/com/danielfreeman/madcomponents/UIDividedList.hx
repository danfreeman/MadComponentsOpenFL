package com.danielfreeman.madcomponents;

import com.danielfreeman.madcomponents.UIGroupedList;
import openfl.display.DisplayObject;
import openfl.display.GradientType;
import openfl.display.SpreadMethod;
import openfl.display.Sprite;
import openfl.geom.Matrix;
import openfl.text.TextFormat;

class UIDividedList extends UIGroupedList
{
    public var headingColour(never, set):Int;

    var _headingColour:Int;

    var _headingOffColour:Int;

    public function new(screen:Sprite, xml:MadXML, attributes:Attributes)
    {
    	_headingOffColour = _headingColour = (xml.has.headingColour) ? UI.toColourValue(xml.att.headingColour) : attributes.colour;
    	super(screen, xml, attributes);
    }

    override function get_defaultGroupSpacing():Float
    {
    	return 10;
    }

    function set_headingColour(value:Int):Int
    {
    	_headingColour = value;
    	return value;
    }

    override function drawCell(position:Float, count:Int, record:Dynamic):Void
    {
    	drawSimpleCell(position, count, Reflect.hasField(record, "_colour") ? UI.toColourValue(record._colour) : -1);
    	if (!(Std.is(record, String)) && hasLines(record)) {
    		drawLines(position);
    	};
    	_cellTop = Math.ceil(position);
    }

    override function drawHighlight():Void
    {
    	if (highlightForIndex(_pressedCell) && _groupPositions != null && _groupPositions.length > _group) {
    		_highlight.graphics.clear();
    		var groupDetails:Dynamic = _groupPositions[_group];
    		var autoLayout:Bool = _autoLayoutGroup && !_simple;
    		var top:Float = (autoLayout) ? _row.y - _attributes.paddingV : groupDetails.top + _pressedCell * groupDetails.cellHeight;
    		var bottom:Float = top + ((autoLayout) ? _row.height + 2 * _attributes.paddingV : groupDetails.cellHeight);
    		_highlight.graphics.beginFill(_highlightColour);
    		_highlight.graphics.drawRect(0, top + 1, _attributes.widthH, bottom - top - 1);
    	};
    }

    override function headingChrome():Void
    {
    	initDraw();
    }

    override function initDraw():Void
    {
    	var top:Int = _cellTop;
    	var matr:Matrix = new Matrix();
    	var headingColour:Int = (((_groupPositions.length > _group) ? _groupPositions[_group].visible : false)) ? _headingColour : _headingOffColour;
    	var gradient:Array<UInt> = [Colour.lighten(headingColour, 64), headingColour];
    	var autoLayout:Bool = !_simple && _autoLayoutGroup;
    	super.initDraw();
    	if (autoLayout && _groupPositions[_group]) {
    		var barTop:Float = ((_group > 0)) ? _groupPositions[_group - 1].bottom - _groupSpacing : 0;
    		var barBottom:Float = _groupPositions[_group].top;
    		if (_attributes.style7) {
    			_slider.graphics.beginFill(headingColour);
    		} else {
    			matr.createGradientBox(_width, barBottom - barTop, Math.PI / 2, 0, barTop);
    			_slider.graphics.beginGradientFill(GradientType.LINEAR, gradient, [1.0, 1.0], [0x00, 0xff], matr);
    		};
    		_slider.graphics.drawRect(0, barTop, _width, barBottom - barTop);
    		_slider.graphics.beginFill(_colour);
    		_slider.graphics.drawRect(0, barBottom - 1, _width, 1);
    	} else {
    		var last:Int = Math.round((_group > 0) ? _groupPositions[_group - 1].bottom + ((autoLayout) ? _attributes.paddingV : 0) : 0);
    		var filling:Bool = (_group == 0) || (top - last) > 2;
    		if (_attributes.style7) {
    			_slider.graphics.beginFill(headingColour);
    		} else {
    			matr.createGradientBox(_width, last - top, Math.PI / 2, 0, top);
    			_slider.graphics.beginGradientFill(GradientType.LINEAR, gradient, [1.0, 1.0], [0x00, 0xff], matr);
    		};
    		_slider.graphics.drawRect(0, last, _width, top - last);
    		_slider.graphics.beginFill(_colour);
    		_slider.graphics.drawRect(0, (filling) ? last : top, _width, 1);
    	};
    	_slider.graphics.beginFill((_attributes.style7) ? headingColour : Colour.darken(_colour, -32));
    	_slider.graphics.drawRect(0, _cellTop - 1, _width, (_attributes.style7) ? 2 : 1);
    	_gapBetweenGroups = -_attributes.paddingV - 1;
    }

    override public function drawComponent():Void
    {
    	graphics.clear();
    	if (_colours != null && _colours.length > 0) {
    		graphics.beginFill(_colours[0]);
    	} else {
    		graphics.beginFill(0, 0);
    	};
    	graphics.drawRect(0, 0, _attributes.width, _attributes.height);
    }

    override function initDrawGroups():Void
    {
    	_slider.graphics.clear();
    	if (_simple) {
    		_autoLayout = _autoLayoutGroup = false;
    	};
    }

    override function calculateMaximumSlide():Void
    {
    	superCalculateMaximumSlide();
    }
}
