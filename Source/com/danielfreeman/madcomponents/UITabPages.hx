package com.danielfreeman.madcomponents;


import openfl.system.Capabilities;
import openfl.display.DisplayObject;
import openfl.display.GradientType;
import openfl.display.Sprite;
import openfl.display.BitmapData;
import openfl.events.MouseEvent;
import openfl.geom.Matrix;

/**
 *  MadComponents tabbed pages container
 * <pre>
 * &lt;tabPages
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, ..."
 *    visible = "true|false"
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    alignH = "left|right|centre"
 *    alignV = "top|bottom|centre"
 *    border = "true|false"
 *    mask = "true|false"
 *    alt = "true|false"
 *    pixelSnapping = "true|false"
 *    iconOffset = "NUMBER"
 *    style7 = "true|false"
 *    lazyRender = "true|false"
 *    recycle = "true|false"
 * /&gt;
 * </pre>
 */
class UITabPages extends UIPages
{
    public var fullPage(get, set) : Bool;
    public var buttonBar(get, never) : Sprite;
    public var data(never, set) : Array<Dynamic>;
    public var xmlData(never, set) : MadXML;
    public var colour(never, set) : Int;
//	public var pageNumber(get, set) : Int;

    
    private static inline var PADDING : Float = 1.0;
    private static inline var TWEAK : Float = 6.0;
    
    private var _buttonBar : Sprite = null;
    private var _buttons : Array<UITabButton> = [];
    private var _mouseDownTarget : UITabButton = null;
    private var _colour : Int;
    private var _alt : Bool;
    private var _fullPageAttributes : Attributes;
    private var _pagesAttributes : Attributes;
    private var _pixelSnapping : Bool;
    private var _iconOffset : Float = 0;
    private var _fullPage : Array<Bool> = [];
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        _fullPageAttributes = _attributes = attributes;
        _colour = attributes.colour;
        _alt = xml.has.alt && xml.att.alt == "true";
        _pixelSnapping = xml.has.pixelSnapping && xml.att.pixelSnapping == "true" || xml.hasNode.data;
        _iconOffset = xml.has.iconOffset ? Std.parseFloat(xml.att.iconOffset) : 0;
        for (child in xml.children()){
            _fullPage.push(child.has.fullPage && child.att.fullPage == "true");
        }
		initialiseButtonBar(xml, attributes);	
		super(screen, xml, attributes);
		
		addChild(_buttonBar);
        
        _buttonBar.addEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
        _buttonBar.addEventListener(MouseEvent.MOUSE_UP, mouseUp);
        setChildIndex(_buttonBar, numChildren - 1);
		extractData(xml);
    }
    
    
    private function get_fullPage() : Bool{
        return _fullPage[_page];
    }
    
    
    private function set_fullPage(value : Bool) : Bool{
        _fullPage[_page] = value;
        _buttonBar.visible = !value;
        doLayout();
        return value;
    }
    
    
    private function get_buttonBar() : Sprite{
        return _buttonBar;
    }
    
    
    private function extractData(xml : MadXML) : Void {
        if (xml.hasNode.data){
            if (!xml.node.data.has.size) {
                xmlData = xml.node.data;
                return;
            }
            else if (xml.node.data.att.size.substr(-3, 3).toUpperCase() == "DPI" && Std.parseFloat(xml.node.data.att.size.substr(0, -3)) >= Capabilities.screenDPI) {
                xmlData = xml.node.data;
                return;
            }
        }
    }
    
    
    private function imageAttributeBitmapData(item : Dynamic) : Class<Dynamic> {
        if (item.ldpi != null && Capabilities.screenDPI < 160) {
            _pixelSnapping = true;
            return Type.resolveClass(item.ldpi);
        }
        else if (item.mdpi != null && Capabilities.screenDPI < 240) {
            _pixelSnapping = true;
            return Type.resolveClass(item.mdpi);
        }
        else if (item.hdpi != null && Capabilities.screenDPI < 320) {
            _pixelSnapping = true;
            return Type.resolveClass(item.hdpi);
        }
        else if (item.xhdpi != null && Capabilities.screenDPI < 400) {
            _pixelSnapping = true;
            return Type.resolveClass(item.xhdpi);
        }
        else if (item.xxhdpi != null && Capabilities.screenDPI >= 400) {
            _pixelSnapping = true;
            return Type.resolveClass(item.xxhdpi);
        }
        else if (item.image != null) {
            return Type.resolveClass(item.image);
        }
        else {
            return null;
        }
    }
    
    
    private function set_data(value : Array<Dynamic>) : Array<Dynamic>{
		var index : Int = 0;
		for (item in value) {
            if (Std.is(item, String)) {
                setTab(index++, Std.string(item));
            }
            else {
				var image:Class<Dynamic> = imageAttributeBitmapData(item);
                setTab(index++, Reflect.hasField(item, "label") ? Reflect.field(item, "label") : "", image);
            }
        }
        return value;
    }
    
    
    /**
 *  Set XML data
 */
    private function set_xmlData(value : MadXML) : MadXML {
        var result : Array<Dynamic> = [];
        var children : MadXMLList = value.children();
        for (child in children){
            if (!child.nodeKindIsText) {
                result.push(attributesToObject(child));
            }
        }
        data = result;
        return value;
    }
    
	
	private function attributesToObject(child : MadXML) : Dynamic {
        var attributes = child.x.attributes();
        if (!attributes.hasNext()) {
            return {label : child.name};
        }
        else {
			var result : Dynamic = {};
            for (key in attributes) {
					Reflect.setField(result, key, child.x.get(key));
            }
            return result;
        }
		return null;
    }
    
    
    private function initialiseButtonBar(xml : MadXML, attributes : Attributes) : Void{
        _buttonBar = new Sprite();
		
        var count : Int = 0;
        for (child in xml.children()){
            if (!child.nodeKindIsText && child.name != "data") {
                count++;
            }
        }
        makeTabButtons(attributes, count, _alt);
        _pagesAttributes = attributes.copy();
        _pagesAttributes.height -= (_buttonBar.height - ((_alt) ? 1 : TWEAK));
        _buttonBar.y = _pagesAttributes.height;
    }
    
    
    private function mouseDown(event : MouseEvent) : Void{
        if (Std.is(event.target, UITabButton)) {trace("mouseDown");
            _mouseDownTarget = cast((event.target), UITabButton);
        }
    }
    
    
    override public function goToPage(page : Int, transition : String = "") : Void{
        super.goToPage(page, transition);
        _buttonBar.visible = !_fullPage[page];
        if (!_buttonBar.visible) {
            _thisPage.y = 0;
        }
    }
    
    
    
    private function mouseUp(event : MouseEvent) : Void{
        if (_mouseDownTarget != null && event.target == _mouseDownTarget) {
            goToPage(Std.parseInt(event.target.name));
        }
        _mouseDownTarget = null;
    }
    
    /**
 *  Set the label and icon of a particular tab button
 */
    public function setTab(index : Int, label : String, imageBitmapDataClass : Class<Dynamic> = null) : Void{
        var button : UITabButton = cast((_buttons[index]), UITabButton);
        button.text = label;
        if (imageBitmapDataClass != null) {
        //    button.imageClass = imageClass;
			button.imageBitmapDataClass = imageBitmapDataClass;
            if (_pixelSnapping) {
                button.pixelSnapImage(_iconOffset);
            }
        }
    }
    
    
    private function superLayout(attributes : Attributes) : Void{
        super.layout(attributes);
    }
    
    /**
 *  Rearrange the layout to new screen dimensions
 */
    override public function layout(attributes : Attributes) : Void{
        _fullPageAttributes = attributes;
        _pagesAttributes = attributes.copy();
        _pagesAttributes.height -= _buttonBar.height - ((_alt) ? 1 : TWEAK);
        _buttonBar.y = _pagesAttributes.height;
        superLayout(_pagesAttributes);
        var buttonWidth : Float = attributes.width / _buttonBar.numChildren;
        for (i in 0..._buttonBar.numChildren){
            var button : UITabButton = cast((_buttonBar.getChildAt(i)), UITabButton);
            button.x = i * buttonWidth;
            button.fixwidth = buttonWidth;
        }
        drawTabButtonBackground();
        _attributes = attributes;
        if (_thisPage != null && !_buttonBar.visible) {
            _thisPage.y = 0;
        }
    }
    
    /**
 *  Attach new pages to this container
 */
    override public function attachPages(pages : Array<DisplayObject>, alt : Bool = false) : Void{
        super.attachPages(pages, alt);
        makeTabButtons(_attributes, pages.length, alt);
        _buttonBar.y = _attributes.height + ((alt) ? 1 : TWEAK);
    }
    
    
    override private function set_pageNumber(value : Int) : Int{
        for (i in 0..._buttonBar.numChildren){
            var button : UITabButton = cast((_buttonBar.getChildAt(i)), UITabButton);
            button.state = (i == value);
        }
        goToPage(value);
        return value;
    }
    
    
    override private function get_attributes() : Attributes{
        return _fullPageAttributes;
    }
    
    
    override private function childAttributes(index : Int) : Attributes{
        if (_fullPage[index]) {
            return _fullPageAttributes.copy();
        }
        else {
            return _pagesAttributes.copy();
        }
    }
    
    
    /**
 *  Draw the tab buttons
 */
    private function makeTabButtons(attributes : Attributes, numberOfPages : Int, alt : Bool) : Void{
		if (numberOfPages > 0) {
            var buttonWidth : Float = attributes.width / numberOfPages;
            for (i in 0...numberOfPages){
                var _tab : UITabButton = new UITabButton(_buttonBar, i * buttonWidth - 0.5, 0, Std.string(i), _colour, alt, _attributes.style7);
                _buttons.push(_tab);
                _tab.name = Std.string(i);
                _tab.fixwidth = buttonWidth + 1;
            }
       //    drawTabButtonBackground();
            cast((_buttons[0]), UITabButton).state = true;
        }
    }
    
    /**
 *  Set the colour of the tab buttons
 */
    private function set_colour(value : Int) : Int{
        _colour = value;
        drawTabButtonBackground();
        for (button in _buttons){
            button.colour = value;
        }
        return value;
    }
    
    /**
 *  Draw the tab buttons background
 */
    public function drawTabButtonBackground() : Void{
        var matr : Matrix = new Matrix();
        var gradient : Array<UInt> = [Colour.lighten(_colour, 96), Colour.darken(_colour), Colour.darken(_colour)];
        matr.createGradientBox(width, height, Math.PI / 2, 0, 0);
        _buttonBar.graphics.clear();
        _buttonBar.graphics.beginGradientFill(GradientType.LINEAR, gradient, [1.0, 1.0, 1.0], [0x00, 0x80, 0xff], matr);
        _buttonBar.graphics.drawRect(0, -PADDING, _buttonBar.width, _buttonBar.height + PADDING);
    }
    
    
    public function button(index : Int) : UITabButton{
        return cast((_buttons[index]), UITabButton);
    }
    
    
    override public function destructor() : Void{
        _buttonBar.removeEventListener(MouseEvent.MOUSE_DOWN, mouseDown);
        _buttonBar.removeEventListener(MouseEvent.MOUSE_UP, mouseUp);
        super.destructor();
    }
}
