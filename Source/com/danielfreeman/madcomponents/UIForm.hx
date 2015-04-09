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

import com.danielfreeman.madcomponents.UI;
import openfl.errors.Error;
import openfl.display.DisplayObject;
import openfl.display.GradientType;
import openfl.display.SpreadMethod;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.geom.Matrix;

/**
	 * A clickable group was pressed
	 */  @:meta(Event(name="groupClicked",type="flash.events.Event"))
  /**
	 * Clickable group pressed highlight ended
	 */  @:meta(Event(name="groupClickedEnd",type="flash.events.Event"))
  /**
	 * A clickable group pressed started
	 */  @:meta(Event(name="groupClickStart",type="flash.events.Event"))
  /**
	 * Clickable group pressed highlight cleared
	 */  @:meta(Event(name="groupClickCancel",type="flash.events.Event"))
  /**
	 * A lazyRendered form has loaded
	 */  @:meta(Event(name="lazyLoad",type="flash.events.Event"))
  /**
	 * A lazyRendered form has unloaded
	 */  @:meta(Event(name="lazyUnload",type="flash.events.Event"))
  /**
	 * UIForm is for horizontal, vertical, group, clickableGroup, columns, rows, and frame containers
	 * <pre>
	 * &lt;horizontal|vertical|columns|rows|group|clickableGroup|frame
	 *    id = "IDENTIFIER"
	 *    colour = "#rrggbb"
	 *    background = "#rrggbb, #rrggbb, ..."
	 *    gapV = "NUMBER"
	 *    gapH = "NUMBER"
	 *    alignH = "left|right|centre|fill"
	 *    alignV = "top|bottom|centre|fill"
	 *    visible = "true|false"
	 *    lines = "true|false"
	 *    widths = "i(%),j(%),k(%)…"
	 *    heights = "i(%),j(%),k(%)…"
	 *    pickerHeight = "NUMBER"
	 *    border = "true|false"
	 *    autoLayout = "true|false"
	 *    lazyRender = "true|false"
	 * /&gt;
	 * </pre>
	 * */
		
		 
class UIForm extends MadMasking implements IContainerUI
{
    public var xml(get, set) : MadXML;
    public var hasPickerBackground(get, never) : Bool;
    public var children(get, never) : Array<Dynamic>;
    public var positions(get, never) : Array<Float>;
    public var index(get, never) : Int;
    public var data(never, set) : Dynamic;
    public var model(get, never) : Model;
    public var pages(get, never) : Array<DisplayObject>;
//	public var isVisible(never, set) : Bool;
	
	public static inline var CLICK_START : String = "groupClickStart";
	public static inline var CLICK_CANCEL : String = "groupClickCancel";
	public static inline var CLICKED : String = "groupClicked";
	public static inline var CLICKED_END : String = "groupClickedEnd";
	public static inline var LOADED : String = "lazyLoad";
	public static inline var UNLOADED : String = "lazyUnload";
	private static inline var DEFAULT_INPUT_WIDTH : Float = 100.0;
	private static inline var LINE_COLOUR : Int = 0x999999;
	private static inline var CELL_COLOUR : Int = 0xFFFFFF;
	private static inline var CURVE : Float = 8.0;
	private static var GROUP_OFFSET : Float = -1;
	private static inline var TWEAK : Float = 10.0;
	
	public static inline var HIGHLIGHT : Int = 0x9999FF;
	
	private var _mode : String = "";
	private var _model : Model = null;
	private var _height : Float = -1;
	private var _children : Array<DisplayObject>;
	private var _row : Bool;
	private var _widths : Array<Dynamic> = null;
	private var _heights : Array<Dynamic> = null;
	private var _autoLayout : Bool = false;
	private var _pickerHeight : Float = -1;
	private var _cursorHeight : Float = -1;
	private var _extra : Float = 0;
	private var _style : Sprite = null;
	private var _groups : Array<Dynamic> = null;
	private var _index : Int = -1;
	private var _insideScroller : Bool = false; 
	private var _positions : Array<Float> = [];
	private var _inGroup : Bool = false;
	private var _disable : Array<Dynamic> = [];
	private var _lazyRender : Bool = false;
	private var _recycle : Bool = false;
	private var _localName : String;
	private var _pickerBackground : Bool = false;
	private var _padding : Float = UI.PADDING;
	private var _classic : Bool = false;
	private var _listenerAdded : Bool = false;
	
	
	public function new(screen : Sprite, xml : MadXML, attributes : Attributes = null, row : Bool = false, inGroup : Bool = false)
    {
		trace(attributes.hasBorder, attributes.x, attributes.y, xml);
		var paddingBefore : Float = attributes.paddingH;
		_classic = xml.has.classic && xml.att.classic == "true";
		_inGroup = inGroup;
		_row = row;
		_localName = (xml.name.indexOf("Horizontal") > 0) ? "horizontal" : xml.name;
		if (_inGroup && (_localName == "horizontal" || _localName == "columns"))             _row = true;
		if (xml.has.pickerHeight) {
			_pickerHeight = Std.parseFloat(xml.att.pickerHeight);
        }
		if (xml.has.cursorHeight) {
			_cursorHeight = Std.parseFloat(xml.att.cursorHeight);
        }
		if (xml.has.pickerPadding) {
			_padding = Std.parseFloat(xml.att.pickerPadding);
        }
		if (_localName == "group" || _localName == "clickableGroup") {
			addChild(_style = new Sprite());
			_style.name = "$";
			if (_localName == "clickableGroup") {
				_groups = [];
				addEventListener(MouseEvent.MOUSE_DOWN, groupClicked);
            }
			_localName = "vertical";
			_inGroup = true;
        }
		_lazyRender = xml.has.lazyRender && xml.att.lazyRender == "true";
		_recycle = xml.has.recycle && xml.att.recycle == "true" && _lazyRender;
		super(screen, xml, attributes.copy());
		if (_style != null || !_attributes.hasBorder && xml.has.border && xml.att.border != "false") {
			_attributes.y = UI.PADDING + _attributes.paddingV / 2;
			_attributes.x += UI.PADDING;_attributes.width -= 2 * UI.PADDING;
			_attributes.height -= 2 * UI.PADDING + _attributes.paddingV;
			_attributes.hasBorder = true;
        }
		if (!_lazyRender) {
			parseBlock(xml, _attributes, _localName, _row);
        }
		graphics.beginFill(0, 0);  //Quick fix  
		graphics.drawRect(0, 0, 2, 2);
		if (xml.hasNode.model || xml.hasNode.sendModel) {
			_model = new Model(this, xml.hasNode.model ? xml.node.model : null, xml.hasNode.sendModel ? xml.node.sendModel : null);
        }
		if (_localName != "scrollVertical" && xml.has.autoLayout && xml.att.autoLayout != "false") {
			_autoLayout = true;
			addEventListener(UIImageLoader.LOADED, doLayoutHandler);
        }
		if (paddingBefore != attributes.paddingH) {
			trace("********Padding changed", paddingBefore, attributes.paddingH);
        }
    }
	
	
	override public function touchCancel() : Void {
		if (_style != null) {
			groupClickCancel();
			stage.removeEventListener(MouseEvent.MOUSE_UP, resetGroupClicked);
			_listenerAdded = false;
			dispatchEvent(new Event(CLICK_CANCEL));
        }
		super.touchCancel();
    }
	
	
	private function reset() : Void {
		_mode = "";
		_height = -1;
		_widths = null;
		_heights = null;
		_index = -1;
		_positions = [];
		_disable = [];
    }
	
/**
 *  Pass an array of row indexes to disable group rows
 */
	public function disableClickableGroupRows(value : Array<Dynamic>) : Void{
		_disable = value;
    }
	
/**
 *  If this container is inside a scrolling container, you would call this method
 */
	public function insideScroller() : Void{
		_insideScroller = true;
    }  

	
	private function get_xml() : MadXML{
		return _xml;
    }
	
	
	private function set_xml(value : MadXML) : MadXML{
		UI.clear(this);
		reset();
		_xml = MadXML.parse("<form>" + value + "</form>");
		if (!_lazyRender) {
			parseBlock(_xml, _attributes, _localName, _row);
        }
        return value;
    }
	
	
	public function includeComponent(id : String, state : Bool) : Void{
		var child : DisplayObject = findViewById(id);
		if (Std.is(child, MadSprite)) {
			cast((child), MadSprite).includeInLayout = cast(child, MadSprite).isVisible = state;
        }
		layout(_attributes);
    }
	
	
	private function customWidths() : Bool{
		if (_xml.has.widths) {
			_widths = Std.string(_xml.att.widths).split(",");
			//*******************************
			var total : Float = (_widths.length - 1) * _attributes.paddingH;
			for (item in _widths) {
				 if (item.lastIndexOf("%") < 0) {
					total += Std.parseFloat(item);
				}
			}
			for (i in 0..._widths.length){
				var itemi : String = _widths[i];
				if (itemi.lastIndexOf("%") > 0) {
					_widths[i] = Std.parseFloat(itemi) / 100 * (_attributes.width - total);
				}
			}

        }
	return _widths != null;
    }
		
	
	private function customHeights() : Bool{
		if (_xml.has.heights) {
			_heights = Std.string(_xml.att.heights).split(",");
			var total : Float = (_heights.length - 1) * _attributes.paddingV;
			for (item in _heights) {
				if (item.lastIndexOf("%") < 0) {
					total += Std.parseFloat(item);
				}
			}
			for (i in 0..._heights.length){
				var itemi : String = _heights[i];
				if (itemi.lastIndexOf("%") > 0) {
					_heights[i] = Std.parseFloat(itemi) / 100 * (_attributes.height - total);
				}
            }
        }
		return _heights != null;
    }


	private function widthAndHeight(xml : MadXML, attributes : Attributes) : Void{
		if (xml.has.width) {
			attributes.width = Std.parseFloat(xml.att.width);
        }
		if (xml.has.height) {
			attributes.height = Std.parseFloat(xml.att.height);
        }
		if (xml.has.size) {
			var size : String = Std.string(xml.att.size).toUpperCase();
			if (size.substr(-1, 1) == "C") {	
				var start : Int = ((size.substr(0, 1) == "L" || size.substr(0, 1) == "P")) ? 1 : 0;
				var xPosition : Int = size.indexOf("X");
				attributes.width = Std.parseFloat(size.substring(start, xPosition));
				attributes.height = Std.parseFloat(size.substring(xPosition + 1, size.length - 1));
        	}
		}
    }


	override function set_isVisible(value : Bool) : Bool {
		if (_lazyRender && value) {
			parseBlock(_xml, _attributes, _localName, _row);
			_lazyRender = false;
			dispatchEvent(new Event(LOADED));
        }
        else if (_recycle && !value) {
			UI.clear(this);
			_lazyRender = true;
			dispatchEvent(new Event(UNLOADED));
        }
		super.isVisible = value;
        return value;
    }

/**
 *  Parse the XML, adding child UI components to this container
 */
	private function parseBlock(xml : MadXML, attributes : Attributes, mode : String, row : Bool) : Void {
		attributes.parse(xml);
		widthAndHeight(xml, attributes);
		if (xml.has.widths) {
			mode = "columns";
		}
        else if (xml.has.heights || mode == "table") {
			mode = "rows";
		}
			var xmlList : MadXMLList = xml.children();
			var nColumns : Int = numberOfColumns(xmlList);
			var pos : Float = (mode == "vertical" || mode == "rows" || mode.indexOf("Panel") >= 0 || mode.indexOf("scroll") >= 0) ? attributes.y : attributes.x;
		var columnWidth : Float = (attributes.width - (nColumns - 1) * attributes.paddingH) / nColumns;
			var columnHeight : Float = (attributes.height - (nColumns - 1) * attributes.paddingV) / nColumns;
			var hasPicker : Bool = false;
			var widthOffset : Float = 0;
			var heightOffset : Float = 0;
			_xml = xml;
			_attributes = attributes;
			_mode = mode;
			_children = [];
			var col : Int = 0;
			for (l in 0...xmlList.length()){
				var line : MadXML = xmlList.get(l);
		 		var localName : String = line.name;
				if (line.nodeKindIsText || localName == "data" || localName == "model" || localName == "sendModel") {
					continue;
            	};
			var child : DisplayObject;
			var childAttributes : Attributes = attributes.copy(line, true);
			childAttributes.y = 0;
			if (mode == "columns") {
				if (customWidths()) {
					childAttributes.width = columnWidth = _widths[col];
					childAttributes.x = pos;
                }
                else {
					childAttributes.width = columnWidth;
					childAttributes.x = pos;
                }
            }
            else if (mode == "rows") {
				if (customHeights()) {
					childAttributes.height = columnHeight = _heights[col];
					childAttributes.y = pos;
                }
                else {
					childAttributes.height = columnHeight;
					childAttributes.y = pos;
                }
            }
            else if (mode == "horizontal") {
				childAttributes.width += (childAttributes.x - pos) - widthOffset;
				if (childAttributes.width < 0) {
					childAttributes.width = 0;
					childAttributes.x = pos;
            	}
			}
            else if (mode != "frame") {
					childAttributes.height += (childAttributes.y - pos) - heightOffset;
					if (childAttributes.height < 0) {
						childAttributes.height = 0;
					}
					childAttributes.y = pos;
            	}
			child = UI.containers(this, line, childAttributes);
			if (child == null) {             
					switch (localName) {
						case "group", "clickableGroup", "frame", "horizontal", "vertical", "rows", "columns":
							var newAttributes : Attributes = childAttributes.copy();
							newAttributes.x = 0;
							newAttributes.y = 0;
							child = new UIForm(this, line, newAttributes, row, _inGroup); 
						
						case "picker":
							
							child = new UIPicker(this, line, childAttributes, mode != "columns" || l == 0, mode != "columns" || l == xmlList.length() - 1, _pickerHeight, _cursorHeight);
							hasPicker = true;
						
						default:
							child = otherCommands(line, childAttributes);
            		}
				};
				if (child != null) {
					if (Std.is(child, MadSprite) && line.has.includeInLayout && line.att.includeInLayout == "false") {
						cast(child, MadSprite).includeInLayout = false;
                	}
					_children[l] = child;
					if (row) {
						childAttributes.initPosition(child);
                	}
                	else {
						trace("childAttributes", childAttributes.x, childAttributes.y);
						childAttributes.position(child, _inGroup);
                	}
					if (_style != null) {
						var groupHeight : Float = ((mode == "rows") ? columnHeight : (Std.is(child, MadSprite) ? cast(child, MadSprite).theHeight : child.height)) + _attributes.paddingV;
						var doLines : Bool = line.has.lines && line.att.lines != "false" && Std.is(child, UIForm);
						groupedBackground(l == 0, l >= nColumns - 1, pos - _attributes.paddingV / 2 + GROUP_OFFSET, groupHeight, col, false, try cast(child, UIForm) catch(e:Dynamic) null, doLines);
                }
						if (!childAttributes.visible) {
							if (Std.is(child, MadSprite)) {
								cast((child), MadSprite).isVisible = false;
							}
                   			else {
								child.visible = false;
                    		}
						}
					
					if (included(child)) {
						if (mode == "columns") {
							pos += columnWidth + attributes.paddingH;
                    	}
                    	else if (mode == "rows") {
							pos += columnHeight + attributes.paddingV;
                    	}
                    	else if (mode == "horizontal") {
							if (line.has.alignH && line.att.alignH == "right") {
								widthOffset += (Std.is(child,MadSprite) ? cast(child, MadSprite).theWidth : child.width) + attributes.paddingH;
                        	}
                        	else {
								pos = child.x + (Std.is(child,MadSprite) ? cast(child, MadSprite).theWidth : child.width) + attributes.paddingH;
                        	}
                    	}
                    	else if (mode == "frame") {
							child.x = line.has.x ? Std.parseFloat(line.att.x) : 0;
							child.y = line.has.y ? Std.parseFloat(line.att.y) : 0;
                    	}
                    	else {
							if (line.has.alignV && line.att.alignV == "bottom") {
							heightOffset += (Std.is(child, MadSprite) ? cast(child, MadSprite).theHeight : child.height) + attributes.paddingV;
                        	}
                        	else {
								pos = child.y + (Std.is(child, MadSprite) ? cast(child, MadSprite).theHeight : child.height) + attributes.paddingV;
								 
                        	}
                   		}
                	}
           	}
			col++;
        }
		_extra = 0;
		//		}
			
		if (row) {
			layout(attributes);
        }
        else if (_mode == "columns" && hasPicker) {
			_pickerBackground = true;
			pickerBackground(attributes);
			_extra = UI.PADDING;
        }
        else if (!_inGroup && _mode.indexOf("scroll") < 0 && _style == null) {
			drawBackground();
        }
//		return child;
    }

		
		
/**
 *  Rearrange the layout to new screen dimensions
 */
		
	override public function layout(attributes : Attributes) : Void{
		super.layout(attributes.copy(_xml));
		if (_lazyRender) {
			return;
		}
		if (_style != null || !_attributes.hasBorder && _xml.has.border && _xml.att.border == "true") {
			_attributes.y = UI.PADDING + _attributes.paddingV / 2;
			_attributes.x += UI.PADDING;
			_attributes.width -= 2 * UI.PADDING;
			_attributes.height -= 2 * UI.PADDING + _attributes.paddingV;
			_attributes.hasBorder = true;
        }
		widthAndHeight(_xml, _attributes);
		if (_row) {
			_attributes.height = height;
        }
		_positions = [];
		var xmlList : MadXMLList = xml.children();
		var pos : Float = (((_mode == "vertical" || _mode == "rows" || _mode.indexOf("Panel") >= 0 || _mode.indexOf("scroll") >= 0)) ? _attributes.y : _attributes.x);
		var nColumns : Int = numberOfColumns(xmlList);
		var columnWidth : Float = (_attributes.width - (nColumns - 1) * _attributes.paddingH) / nColumns;
		var columnHeight : Float = (_attributes.height - (nColumns - 1) * _attributes.paddingV) / nColumns;
		var hasPicker : Bool = false;
		var col : Int = 0;
		var group : Bool = false;
		var widthOffset : Float = 0;
		var heightOffset : Float = 0;
		if (_style != null) {
			_style.graphics.clear();
        }
		for (l in 0...xmlList.length()){ //CHECK!!
			var line : MadXML = xmlList.get(l);
			var localName : String = line.name;
			if (line.nodeKindIsText || localName == "data" || localName == "model" || localName == "sendModel"){
			//	l++;
				continue;
            };
			var childAttributes : Attributes = _attributes.copy(line, true);
			childAttributes.y = 0;
			var child : DisplayObject = _children[l];
			if (_mode == "columns") {
				if (customWidths()) {
					childAttributes.width = columnWidth = _widths[col];
					childAttributes.x = pos;
                }
                else {
					childAttributes.width = columnWidth;
					childAttributes.x = pos;
                }
            }
            else if (_mode == "rows") {
				if (customHeights()) {
					childAttributes.height = columnHeight = _heights[col];
					childAttributes.y = pos;
                }
                else {
					childAttributes.height = columnHeight;
					childAttributes.y = pos;
                }
            }
            else if (_mode == "horizontal") {
				childAttributes.width += (childAttributes.x - pos) - widthOffset;
				if (childAttributes.width < 0) {
					childAttributes.width = 0;
					childAttributes.x = pos;
					}
           		}
           		else if (_mode != "frame") {
					childAttributes.height += (childAttributes.y - pos) - heightOffset;
					if (childAttributes.height < 0) {
						childAttributes.height = 0;
            	    }
					childAttributes.y = pos;
           		}
				if (UI.isContainer(localName) && Std.is(child, IComponentUI)) {
					cast(child, IComponentUI).layout(childAttributes);
					child.x = childAttributes.x;
					child.y = childAttributes.y;
        	    }
         	   	else 
					switch (localName) {
						case "group", "clickableGroup", "frame", "horizontal", "vertical", "columns", "rows":
							if (localName == "group" || localName == "clickableGroup") {
								group = true;
							}
							var newAttributes : Attributes = childAttributes.copy(); 
							newAttributes.x = 0;
							newAttributes.y = 0;
							cast(child,UIForm).layout(newAttributes);
							
						case "picker":
							hasPicker = true;
							cast((child), IContainerUI).layout(childAttributes);
							
						default:
							if (childAttributes.fillH) {  // Why would this be desirable?? 
								cast(child, DisplayObject).width = childAttributes.widthH;
                    		}
           			 }
				childAttributes.position(child, _inGroup && !_row);
				if (_style != null) {
					var groupHeight : Float = ((_mode == "rows") ? columnHeight : (Std.is(child, MadSprite) ? cast(child, MadSprite).theHeight : child.height)) + _attributes.paddingV;
					var top : Float = pos - _attributes.paddingV / 2 + GROUP_OFFSET;
					var doLines : Bool = line.has.lines && Std.string(line.att.lines) != "false" && Std.is(child, UIForm);
					groupedBackground(l == 0, l >= nColumns - 1, top, groupHeight, col, false, try cast(child, UIForm) catch(e:Dynamic) null, doLines);
            	}
	
				if (included(child)) {
					if (_mode == "columns") {
						pos += columnWidth + _attributes.paddingH;
               		}
                	else if (_mode == "rows") {
						pos += columnHeight + _attributes.paddingV;
                	}
                	else if (_mode == "horizontal") {
						if (line.has.alignH && line.att.alignH == "right") {
							widthOffset += (Std.is(child,MadSprite) ? cast(child, MadSprite).theWidth : child.width) + _attributes.paddingH;
                    	}
                    	else {
							pos = child.x + (Std.is(child,MadSprite) ? cast(child, MadSprite).theWidth : child.width) + _attributes.paddingH;
                    	}
                	}
                	else if (_mode == "frame") {
						child.x = line.has.x ? Std.parseFloat(line.att.x) : 0;
						child.y = line.has.y ? Std.parseFloat(line.att.y) : 0;
                	}
                	else {
						if (line.has.alignV && line.att.alignV == "bottom") {
							heightOffset += (Std.is(child,MadSprite) ? cast(child, MadSprite).theHeight : child.height) + _attributes.paddingV;
                    	}
                    	else {
							pos = child.y + (Std.is(child,MadSprite) ? cast(child, MadSprite).theHeight : child.height) + _attributes.paddingV;
                    	}
                	}
            	}
					
				_positions.push(child.x);
				col++;
        	}
			_extra = 0;
		
			if (_mode == "columns" && hasPicker) {
				_pickerBackground = true;
				pickerBackground(_attributes);
				_extra = UI.PADDING;
        	}
        	else if (!_inGroup && _mode.indexOf("scroll") < 0 && _style == null && !_row) {
				drawBackground();
        	}
    }
		
		
	private function get_hasPickerBackground() : Bool{
		return _pickerBackground;
    }
		
		
	private function get_children() : Array<Dynamic>{
		return _children;
    }
		
		
	private function included(child : DisplayObject) : Bool{
		return !(Std.is(child, MadSprite)) || cast((child), MadSprite).includeInLayout;
    }
		
		
/**
 *  x positions of child UI components
 */
		private function get_positions() : Array<Float>{
			return _positions;
    	}
		
		
/**
 *  Re-render
 */
		public function doLayout() : Void{
			layout(_attributes);
    	}
		
		
		private function doLayoutHandler(event : Event) : Void{
			layout(_attributes);
			event.stopPropagation();
		}
		
		
/**
 *  Number of children
 */
		private function numberOfColumns(xmlList : MadXMLList) : Int{
			var result : Int = 0;
			for (column in xmlList) {
				if (!column.nodeKindIsText) {
				
					var localName : String = column.name;
					if (localName != "data" && localName != "model" && localName != "sendModel") {                 			result++;
					}
        		}
			}
			return result;
    	}
		
		
		/**
		 *  Background chrome if this form contains picker components
		 */
		private function pickerBackground(attributes : Attributes) : Void{return;
			var colour : Int = (attributes.backgroundColours.length > 0) ? attributes.backgroundColours[0] : 0x666666;
			graphics.clear();
			graphics.beginFill((attributes.backgroundColours.length > 1) ? attributes.backgroundColours[1] : colour);
			var width : Float = attributes.width + 2 * UI.PADDING;
			var height : Float = theHeight + 2 * _padding + 10;
			graphics.drawRect(_attributes.x - UI.PADDING, -_padding, width, height);
			cutOuts(0);
			var matr : Matrix = new Matrix();
			var gradient : Array<UInt> = [Colour.darken(colour, 128), Colour.lighten(colour), Colour.darken(colour)];
			matr.createGradientBox(width, theHeight, Math.PI / 2, 0, 0);
			graphics.beginGradientFill(GradientType.LINEAR, gradient, [1.0, 1.0, 1.0], [0x00, 0x66, 0xff], matr);
			graphics.drawRect(_attributes.x - UI.PADDING + 1, -_padding + 1, width - 2, (height - 2) / 2);
			cutOuts(-1);
			graphics.beginFill(attributes.backgroundColours.length > (2) ? attributes.backgroundColours[2] : Colour.darken(colour, -16));
			graphics.drawRect(_attributes.x - UI.PADDING + 1, -_padding + (height - 2) / 2, width - 2, (height - 2) / 2);
			cutOuts(1);
			graphics.endFill();
    }
		
		
	private function cutOuts(partial : Int) : Void{
		for (i in 0...numChildren){
			var child : DisplayObject = getChildAt(i);
			if (Std.is(child, UIPicker)) {
				cast((child), UIPicker).drawShape(graphics, child.x, child.y, partial);
            }
        }
    }
		
/**
 *  Background chrome if this is a group or clickableGroup
 */
		private function groupedBackground(begin : Bool, end : Bool, top : Float, height : Float, count : Int, click : Bool = false, child : UIForm = null, lines : Bool = false) : Void{
			if (_groups != null) {
				_groups[count] = {
                        begin : begin,
                        end : end,
                        top : top,
                        height : height,
                        child : child,
                        lines : lines,

                    };
        	}
			var left : Float = ((_mode.indexOf("scroll") >= 0)) ? UI.PADDING : 0;
			_style.graphics.beginFill(_attributes.colour);
			if (begin && end) {
				_style.graphics.drawRoundRect(left, top, _attributes.width + 2 * UI.PADDING, height, 1.5 * CURVE);
        	}
        	else if (begin) {
				UIGroupedList.curvedTop(_style.graphics, left, top, left + _attributes.width + 2 * UI.PADDING, top + height);
        	}
        	else if (end) {
				UIGroupedList.curvedBottom(_style.graphics, left, top, left + _attributes.width + 2 * UI.PADDING, top + height + 1);
        	}
        	else {
				_style.graphics.drawRect(left, top, _attributes.width + 2 * UI.PADDING, height);
        	}
			var colours : Array<Int> = (child != null) ? child.attributes.backgroundColours : null;
			if (click) {
				_style.graphics.beginFill(HIGHLIGHT);
        }
        else if (colours != null && colours.length > 1) {
			var matr : Matrix = new Matrix();
			matr.createGradientBox((colours.length > 2) ? colours[2] : width, (colours.length > 2) ? colours[2] : height + 2 * UI.PADDING, (colours.length > 3) ? colours[3] * Math.PI / 180 : Math.PI / 2, 0, top - UI.PADDING);
			_style.graphics.beginGradientFill(GradientType.LINEAR, [colours[0], colours[1]], [1.0, 1.0], [0x00, 0xff], matr, SpreadMethod.REPEAT);
        }
        else if (colours != null && colours.length > 0) {
			_style.graphics.beginFill(colours[0]);
        }
        else if (_attributes.backgroundColours.length > 0) {
			_style.graphics.beginFill(_attributes.backgroundColours[count % _attributes.backgroundColours.length]);
        }
        else {
			_style.graphics.beginFill(CELL_COLOUR);
        }
 		if (begin && end) {_style.graphics.drawRoundRect(left + 1, top + 1, _attributes.width + 2 * UI.PADDING - 2, height - 2, 1.5 * CURVE);
        }
        else if (begin) {
			UIGroupedList.curvedTop(_style.graphics, left + 1, top + 1, left + _attributes.width + 2 * UI.PADDING - 1, top + height);
        }
        else if (end) {
			UIGroupedList.curvedBottom(_style.graphics, left + 1, top + 1, left + _attributes.width + 2 * UI.PADDING - 1, top + height);_style.graphics.endFill();_style.graphics.drawRect(0, top + height + _attributes.paddingV / 2, 1, 1);
        }
        else {
			_style.graphics.drawRect(left + 1, top + 1, _attributes.width + 2 * UI.PADDING - 2, height - 1);
        }
		if (child != null && lines) {
			drawLines(cast((child), UIForm), top, height);
        }
    }
		
/**
 *  Group vertical dividing lines
 */
		private function drawLines(child : UIForm, top : Float, height : Float) : Void{
			_style.graphics.beginFill(_attributes.colour);
			var positions : Array<Dynamic> = child.positions;
			for (i in 1...positions.length){
				 _style.graphics.drawRect(child.x + positions[i] - _attributes.paddingH / 2, top + 1, 1, height);
        }
    }
		
/**
 *  Group clicked handler
 */
		private function groupClicked(event : MouseEvent) : Void{
			if (event.target == this || _listenerAdded) {
			return;
        	}
			if ((!_insideScroller && Std.is(event.target, UIForm)) || event.target == _style || (Std.is(event.target, MadSprite) && !cast((event.target), MadSprite).clickable)) {
				removeEventListener(MouseEvent.MOUSE_DOWN, groupClicked);
				_listenerAdded = true;
				stage.removeEventListener(MouseEvent.MOUSE_UP, resetGroupClicked);
				stage.addEventListener(MouseEvent.MOUSE_UP, resetGroupClicked);
				if (_style != null && _style.hitTestPoint(stage.mouseX, stage.mouseY, true)) {
						var i : Int = _groups.length - 1;
                while (i >= 0){
					var item : Dynamic = _groups[i];
					if (mouseY > item.top) {
						if (Lambda.indexOf(_disable, i) >= 0) {
							return;
                        }
						_index = i;
						groupedBackground(i == 0, i == _groups.length - 1, item.top, item.height, i, true, item.child, item.lines);
						break;
                    }
                    i--;
                }
				dispatchEvent(new Event((_classic) ? CLICKED : CLICK_START));
            }
        }
    }

/**
 *  Clear group clicked highlight
 */
		private function groupClickCancel() : Bool{
			if (_groups != null) {
				addEventListener(MouseEvent.MOUSE_DOWN, groupClicked);
        	}
			if (_index >= 0 && _index < _groups.length) {
				var item : Dynamic = _groups[_index];groupedBackground(_index == 0, _index == _groups.length - 1, item.top, item.height, _index, false, item.child);
				return true;
        }
        else {
			return false;
        }
    }


		private function resetGroupClicked(event : MouseEvent) : Void{
			if (event.target == this || !_listenerAdded) {
				return;
        	}
			stage.removeEventListener(MouseEvent.MOUSE_UP, resetGroupClicked);
			_listenerAdded = false;
			if (groupClickCancel()) {
				if (!_classic) {
					dispatchEvent(new Event(CLICKED));
            	}
				dispatchEvent(new Event(CLICKED_END));
        	}
    	}  
/**
 *  Index of last row clicked
 */
		private function get_index() : Int{
			return _index;
    	}


		public function drawComponent() : Void{
			//		drawBackground();  
    	}

/**
 *  Draw background
 */
		public function drawBackground(colours : Array<Int> = null) : Void{
			if (_attributes.backgroundColours.length == 0) {
				graphics.clear();
				return;
        	}
			if (colours == null) {
				colours = _attributes.backgroundColours;
        	}
			if (_attributes.x == 0) {
				UI.drawBackgroundColour(colours, _attributes.x + _attributes.width, _attributes.y + _attributes.height + TWEAK, this, ((_attributes.hasBorder) ? UI.PADDING : 0));
        }
        else {
			var padding : Float = ((_attributes.hasBorder) ? 2 * UI.PADDING : 0);
			UI.drawBackgroundColour(colours, padding + _attributes.width, padding + _attributes.height + TWEAK, this, 0);
        }
    }
		
/**
 *  Interpret non-MadComponents for XML tags with external mamespaces
 */
		private function otherCommands(xml : MadXML, attributes : Attributes) : DisplayObject{
			var className : String = xml.name;
			if (className == null) {
				return null;
			}
		//	var nameSpace : String = (className != null) ? xml.x.uri : "";
			var nameSpace : String = "";
			className = nameSpace + "::" + className;
			var ChildClass : Class<Dynamic> = Type.getClass(Type.resolveClass(className));
			if (ChildClass != null) {
				var child : Dynamic = Type.createInstance(ChildClass, []);
				addChild(child);
				for (key in xml.x.attributes()){
					var value : String = xml.x.get(name);
					if (child.exists(name)) {
						try{Reflect.setField(child, name, value);
                    }
					catch (e : Error){
						Reflect.setField(child, name, Type.getClass(Type.resolveClass(value)));
                    }
                }
            }
			if (attributes.fillH) {
				child.width = attributes.widthH;
            }
			return child;
        }
        else {
			return null;
        }
    } 
		
/**
 *  Remove all child components
 */	 
			 
		public function clear() : Void{
			UI.clear(this);
    	}

/**
 *  Search for component by id
 */
		public function findViewById(id : String, row : Int = -1, group : Int = -1) : DisplayObject{
			var found : DisplayObject = null;
			var i:Int = 0;
			while (i < numChildren && found == null) {
				var item : DisplayObject = getChildAt(i);
				if (item.name == id) {
					found = item;
					if (found == null && (Std.is(item, IContainerUI))) {
						found = cast((item), IContainerUI).findViewById(id, row, group);
					}
        	    }
				i++;
      		}
		return found;
    	}
		
/**
 *  Form height
 */
		override private function get_theHeight() : Float {
			if (_height > 0) {
				return _height;
        	}
			var result : Float = 0;
			for (i in 0...numChildren){
				var child : DisplayObject = cast(getChildAt(i), DisplayObject);
				if (included(child)) {
					var childHeight : Float = child.y + (Std.is(child, MadSprite) ? cast(child, MadSprite).theHeight : child.height);
					if (childHeight > result) {
						result = childHeight;
            		}
				}
	        }

			return result + _extra - ((_pickerBackground) ? 10 : 0);
    	}
		
/**
 *  Form width
 */
		override private function get_theWidth() : Float{
			if (_pickerBackground) {
				return super.theWidth;
        	}
        	else {
				var result : Float = 0;
				for (i in 0...numChildren){
					var child : DisplayObject = cast((getChildAt(i)), DisplayObject);
					var childWidth : Float = child.x + (Std.is(child, MadSprite) ? cast(child, MadSprite).theWidth : child.width);
					if (childWidth > result) {
						result = childWidth;
                	}
            	}
			return result;
        	}
    	}
		
/**
 *  Assign to child components by passing an array of objects
 */
		private function set_data(values : Dynamic) : Dynamic{
			for (idName in Reflect.fields(values)){
				var uiThing : Dynamic = findViewById(idName);
				if (uiThing != null) {
					try{
						if (uiThing.exists("xmlText")) {
							uiThing.xmlText = Reflect.field(values, idName);
                    	}
                    	else {
							uiThing.text = Reflect.field(values, idName);
                    	}
                	}
					catch (error : Error){
						uiThing.text = Reflect.field(values, idName);
                	}
       			}
        	}
			if (_autoLayout) {
				layout(_attributes);
        	}
    		return values;
    	}


/**
 *  Model
 */

	private function get_model() : Model{
		return _model;
    } 

/**
 *  For a UIForm, pages returns [this]
 */
	private function get_pages() : Array<DisplayObject>{
		return [this];
    }


	override public function destructor() : Void{
		removeEventListener(UIImageLoader.LOADED, doLayoutHandler);
		removeEventListener(MouseEvent.MOUSE_DOWN, groupClicked);
		stage.removeEventListener(MouseEvent.MOUSE_UP, resetGroupClicked);
		UI.clear(this);
    }
}