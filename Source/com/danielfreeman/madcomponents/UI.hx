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

import com.danielfreeman.madcomponents.*;


import openfl.display.DisplayObject;
import openfl.display.GradientType;
import openfl.display.SpreadMethod;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.geom.Matrix;
import openfl.system.Capabilities;
import openfl.text.TextField;


/**
 * MadComponents UI root class
 * <pre>
 * &lt;
 *    clickColour = "#rrggbb"
 *    dpi = "INTEGER"
 *    stageColour = "#rrggbb,#rrggbb,..."
 *    autoScale = "true|false"
 *    autoResize = "true|false"
 *    activityIndicatorColour = "#rrggbb"
 * /&gt;
 * </pre>
 */
class UI
{
    public static var scale(get, never) : Float;
    public static var attributes(get, never) : Attributes;
    public static var windowLayer(get, never) : Sprite;
    public static var uiLayer(get, never) : Sprite;

    
    public static inline var RESIZED : String = "resized";
    
    public static var PADDING : Float = 10.0;
    public static var SIMULATION_RESIZE : Bool = true;
    
    private static inline var DPI : Int = 160;
    private static inline var DIM_ALPHA : Float = 0.4;
    private static inline var WIDTH : Float = 300;
    private static inline var HEIGHT : Float = 454;
    private static inline var COLOUR : Int = 0x9999AA;
    
    private static var TOKENS : Array<String> = ["scrollVertical", "list", "groupedList", "dividedList", "pages", "tabPages", "navigation", "image", "switch", "search", "button", "label", "slider", "input", "circular", "gap", "viewFlipper", "renderer", "navigationPages", "imageLoader"];
	
	private static var CLASSES : Array<Class<Dynamic>> = [UIScrollVertical, UIList, UIGroupedList, UIDividedList, UIPages, UITabPages, UINavigation, UIImage, UISwitch, UISearch, UIButtonX, UILabelX, UISliderX, UIInputX, UICircular, UISpacer, UIViewFlipper, UIRenderer, UINavigationPages, UIImageLoader];
  
    private static var DEBUG_SCALE : Float = -1.0;
    
    private static var _tokens : Array<String> = TOKENS;
    private static var _classes : Array<Class<Dynamic>> = CLASSES;
    private static var _screen : Sprite;
    private static var _root : Sprite;
    private static var _windowLayer : Sprite;
    private static var _xml : MadXML;
    private static var _autoScale : Bool = true;
    private static var _autoResize : Bool = true;
    private static var _scale : Float = 1.0;
    private static var _popUps : Int = 0;
    private static var _attributes : Attributes;
    private static var _simulated : Bool = true;
    private static var _activityIndicator : UIActivity;
    private static var _maskIt : Bool = true;
    private static var _stageColours : Array<Int> = null;
    private static var _dpi : Int = DPI;
    private static var _width : Float;
    private static var _height : Float;
    
    
/**
 * Create the user interface
 */
    public static function create(screen : Sprite, xml : MadXML, width : Float = -1, height : Float = -1) : Sprite{
        if (_root != null) {
            clear();
        }
        
        screen.stage.stageFocusRect = false;
        _simulated = width < 0; // && (Capabilities.playerType == "StandAlone" || Capabilities.playerType == "PlugIn" || Capabilities.playerType == "ActiveX" || Capabilities.playerType == "External");
///        if (xml.has.clickColour) 
///            UIList.HIGHLIGHT = toColourValue(Std.string(xml.att.clickColour));
        
        if (xml.has.dpi) {
            _dpi = Std.parseInt(xml.att.dpi);
		}
		if (xml.has.autoScale && xml.att.autoScale == "false") { 
            _autoScale = false;
		}
        if (width > 0) {
            _attributes = newAttributes(width, height);
            _maskIt = false;
        }
        else if (_simulated) {
            _attributes = newAttributes(width = WIDTH, height = HEIGHT);
        }
        else {
            _attributes = newAttributes(width = Capabilities.screenResolutionX, height = Capabilities.screenResolutionY);
        }
        
   //     MadXML.prettyPrinting = false;
        _xml = xml;
        _screen = screen;
        
        if (SIMULATION_RESIZE || xml.has.autoResize && xml.att.autoResize != "false" && !_simulated) {
            screen.stage.addEventListener(Event.RESIZE, resize, false, 0, true);
        }
        
        _root = cast((containers(screen, xml, _attributes)), Sprite);
        if (_root == null && (!xml.has.border || xml.att.border == "true")) {
            _attributes.x = PADDING;
            _attributes.y = PADDING;
            _attributes.width -= 2 * PADDING;
            _attributes.height -= 2 * PADDING;
            _attributes.hasBorder = true;
        }
        if (_root == null) {
            _root = Type.createInstance(UIForm, [screen, MadXML.parse("<vertical>" + xml.toXMLString() + "</vertical>"), _attributes]);
            _root.name = "+";
        }
        _root.scaleX = _root.scaleY = _scale;
        
        
        if (xml.has.stageColour) {
			var colours : String =  xml.att.stageColour;
            _stageColours = toColourVector(colours);
            drawBackgroundColour(_stageColours, width, height);
        }
        
        if (!SIMULATION_RESIZE && _maskIt && _simulated) {
            var mask : Sprite = new Sprite();
            mask.graphics.beginFill(0);
            mask.graphics.drawRect(0, 0, WIDTH, HEIGHT);
            _root.mask = mask;
            _root.addChild(mask);
        }
        
        screen.addChild(_windowLayer = new Sprite());
        _windowLayer.scaleX = _windowLayer.scaleY = _scale;
        
        _activityIndicator = new UIActivity(screen, width / 2, height / 2, false, (xml.has.activityIndicatorColour) ? UI.toColourValue(xml.att.activityIndicatorColour) : 0xFFFFFF);
        _activityIndicator.scaleX = _activityIndicator.scaleY = UI.scale / 2;
        if (_simulated) {
            resize(new Event("dummy"));
        }
        
        return _root;
    }
    
/**
 * Extend the XML layout language.  You specify two arrays.
 * One array of XML tag names, and a corresponding array of classes that they correspond to.
 */
    public static function extend(tokens : Array<String>, classes : Array<Class<Dynamic>>) : Void{
        _tokens = _tokens.concat(tokens);
        _classes = _classes.concat(classes);
    }
    
/**
 * Convert #rrggbb string to uint
 */
    public static function toColourValue(value : String) : UInt{
		var regularExpression = ~/\s/gi;
		regularExpression.replace(value, "");
   //     value = value.replace(new EReg(' ', "gi"), "");
        if (value.substr(0, 1) == "#") {
            return Std.parseInt("0x" + value.substr(1, 6));
		}
        else if (value.substr(0, 1) >= "0" && value.substr(0, 1) <= "9") {
            return Std.parseInt(value);
		}
        else { 
        	return COLOUR;
		}
    }
    
/**
 * Convert a comma seperated list of #rrggbb string colour values to a uint vector
 */
    public static function toColourVector(value : String) : Array<UInt>{
		var regularExpression = ~/\s/gi;
		regularExpression.replace(value, "");
     //   value = value.replace(new EReg(' ', "gi"), "");
        var splitValues : Array<String> = value.split(",");
        var result : Array<UInt> = new Array<UInt>();
        for (colour in splitValues){
            result.push(toColourValue(colour));
        }
        return result;
    }
    
/**
 * Convert a comma seperated list of #rrggbb string colour values to a uint vector
 */
    public static function drawBackgroundColour(colours : Array<UInt>, width : Float, height : Float, screen : Sprite = null, padding : Float = 0) : Void{
        if (screen == null) {
            screen = _root;
        }
        if (screen == _root && _stageColours != null && _stageColours.length > 0) {
            colours = _stageColours;
        }
        screen.graphics.clear();
        if (colours.length == 1) {
            screen.graphics.beginFill(colours[0]);
        }
        else if (colours.length > 1) {
            var matr : Matrix = new Matrix();
            matr.createGradientBox((colours.length > 2) ? colours[2] : width, (colours.length > 2) ? colours[2] : height + 2 * padding, (colours.length > 3) ? colours[3] * Math.PI / 180 : Math.PI / 2, 0, -padding);
            screen.graphics.beginGradientFill(GradientType.LINEAR, [colours[0], colours[1]], [1.0, 1.0], [0x00, 0xff], matr, SpreadMethod.REPEAT);
        }
        else {
            screen.graphics.beginFill(0, 0);
        }
        screen.graphics.drawRect(-padding, -padding, width + 2 * padding, height + 2 * padding);
    }
    
    
    
    private static function get_scale() : Float{
        return _scale;
    }
    
    
/**
 * Converts an XML tag name to a container object.
 */
    public static function containers(screen : Sprite, xml : MadXML, attributes : Attributes) : DisplayObject{
        var idx : Int = Lambda.indexOf(_tokens, xml.name);
        if (idx >= 0) {
            attributes.parse(xml);
        	var result : DisplayObject = Type.createInstance(_classes[idx], [screen, xml, attributes]);
            result.x = attributes.x;
            result.y = attributes.y;
            if (xml.has.id) {
                result.name = xml.att.id;
            }
            return result;
        }
        else {
            return null;
        }
    }
    
/**
 * Is this the XML tag name of a container?
 */
    public static function isContainer(name : String) : Bool{
        return Lambda.indexOf(_tokens, name) >= 0;
    }
    
/**
 * Is this the XML tag name of a UIForm container?
 */
    public static function isForm(name : String) : Bool{
        return name == "frame" || name == "horizontal" || name == "vertical" || name == "columns" || name == "rows" || name == "group" || name == "clickableGroup" || name == "table";
    }
    
/**
 * Redraw the user interface
 */
    public static function redraw() : Sprite{
        return create(_screen, cast((_root), UIForm).xml);
    	return null;
	}
    
    
    private static function get_attributes() : Attributes{
        return _attributes;
    }
    
/**
 * Handler for orientation change
 */
    public static function resize(event : Event = null) : Void{
        layout(_screen.stage.stageWidth, _screen.stage.stageHeight);
        _screen.dispatchEvent(new Event(RESIZED));
    }
    
/**
 * Rearrange the UI for a new screen size
 */
    public static function layout(width : Float = -1, height : Float = -1) : Void{
        //	if (_root) {
        if (width < 0) {
            width = _screen.stage.stageWidth;
            height = _screen.stage.stageHeight;
        }
        _width = width;_height = height;
        _attributes = newAttributes(width, height);
        _attributes.parse(_xml);
        var container : Bool = isContainer(_xml.name);
        if (_root != null && container) {
            cast((_root), IComponentUI).layout(_attributes);
        }
        if (!container && (!_xml.has.border || _xml.att.border == "true")) {
            _attributes.x = PADDING;
            _attributes.y = PADDING;
            _attributes.width -= 2 * PADDING;
            _attributes.height -= 2 * PADDING;
            _attributes.hasBorder = true;
        }
        if (!container && _root != null) {
            cast((_root), UIForm).layout(_attributes);
        }
        if (_root != null && !_root.mouseEnabled) {
            dimUI();
        }
        drawStageBackground();
        centrePopUps();
    }
    
    
    public static function drawStageBackground() : Void{
        if (!isForm(_xml.name)) {
            drawBackgroundColour(_attributes.backgroundColours, _width, _height);
        }
    }
    
    
    private static function newAttributes(width : Float, height : Float) : Attributes{
        if (DEBUG_SCALE > 1.0) {
            _scale = DEBUG_SCALE;
            width /= _scale;
            height /= _scale;
        }
        else if (_autoScale && Capabilities.screenDPI > _dpi) {
            _scale = Math.round(4 * Capabilities.screenDPI / _dpi) / 4;
            width /= _scale;
            height /= _scale;
        }
        return new Attributes(0, 0, width, height);
    }
    
/**
 * Find the component that matches the id parameter.
 * Note optional row and group parameters to find a component within a specific list row.
 */
    public static function findViewById(id : String, row : Int = -1, group : Int = -1) : DisplayObject{
        if (id == _root.name) 
            return _root
        else 
        return cast(_root, IContainerUI).findViewById(id, row, group);
    }
    
/**
 * Create a pop-up dialogue window
 */
    public static function createPopUp(xml : MadXML, width : Float = -1, height : Float = -1, curve : Float = 10.0, centre : Bool = true) : UIWindow{
        if (width < 0) {
            width = 0.8 * _attributes.width;
        }
        if (height < 0) {
            height = 0.8 * _attributes.height;
        }
        var attributes : Attributes = new Attributes(0, 0, width, height);
        attributes.parse(xml);
        var window : UIWindow = new UIWindow(_windowLayer, xml, attributes, curve, centre);
        window.x = _root.x + _attributes.x + (_attributes.width - width) / 2;
        window.y = _root.y + _attributes.y + (_attributes.height - height) / 2;
        _popUps++;
        dimUI();
        return window;
    }
    
/**
 * Remove and dispose of the pop-up dialogue window
 */
    public static function removePopUp(window : UIWindow) : Void{
        if (_windowLayer.contains(window)) {
            hidePopUp(window);
            window.destructor();
            _windowLayer.removeChild(window);
        }
    }
    
/**
 * Show the pop-up dialogue window
 */
    public static function showPopUp(window : UIWindow) : Void{
        if (window.isVisible)             return;
        window.isVisible = true;
        _popUps++;
        dimUI();
    }
    
/**
 * Hide the pop-up dialogue window
 */
    public static function hidePopUp(window : UIWindow) : Void{
        if (!window.isVisible) {
            return;
            }
        window.isVisible = false;
        _popUps--;
        if (_popUps <= 0) {
            unDimUI();
        }
    }
    
/**
 * Show activity indicator
 */
    public static function showActivityIndicator() : Void{
        _activityIndicator.isVisible = true;
    }
    
/**
 * Hide the activity indicator
 */
    public static function hideActivityIndicator() : Void{
        _activityIndicator.isVisible = false;
    }
    
/**
 * This is the layer in which all pop-ups and dialogues are created
 */
    private static function get_windowLayer() : Sprite{
        return _windowLayer;
    }
    
/**
 * This is the layer in which the UI is created
 */
    private static function get_uiLayer() : Sprite{
        return _root;
    }
    
/**
 * Reposition all pop-ups to the centre of the screen
 */
    public static function centrePopUps() : Void{
        for (i in 0..._windowLayer.numChildren){
            var window : DisplayObject = _windowLayer.getChildAt(i);
            if (Std.is(window, UIWindow) && cast((window), UIWindow).centred) {
                window.x = _attributes.x + (_attributes.width - cast((window), UIWindow).attributes.width) / 2;
                window.y = _attributes.y + (_attributes.height - cast((window), UIWindow).attributes.height) / 2;
            }
        }
        _activityIndicator.x = _scale * (_attributes.x + _attributes.width / 2);
        _activityIndicator.y = _scale * (_attributes.y + _attributes.height / 2);
    }
    
/**
 * Dim the user interface beneath the pop-ups, ensuring that all dialogues are modal
 */
    public static function dimUI() : Void{
        _root.mouseEnabled = _root.mouseChildren = false;
        _windowLayer.graphics.clear();
        _windowLayer.graphics.beginFill(0x000000, DIM_ALPHA);
        _windowLayer.graphics.drawRect(0, 0, _screen.stage.stageWidth, _screen.stage.stageHeight);
    }
    
/**
 * Un-dim the user interface beneath the pop-ups
 */
    public static function unDimUI() : Void{
        _root.mouseEnabled = _root.mouseChildren = true;
        _windowLayer.graphics.clear();
    }
    
/**
 * Remove all components, clearing the user interface
 */
    public static function clear(item : Sprite = null) : Void{
        if (item == null) {
            item = _root;
            }
        var i : Int = item.numChildren - 1;
        while (i >= 0){
            var child : DisplayObject = cast((item.getChildAt(i)), DisplayObject);
            if (Std.is(child, IComponentUI)) {
                cast(child, IComponentUI).destructor();
            }
            item.removeChildAt(i);
            i--;
        }
        if (item == _root && _root != null) {
            _screen.removeChild(_root);
            _root = null;
        }
    }

    public function new()
    {
    }
}

