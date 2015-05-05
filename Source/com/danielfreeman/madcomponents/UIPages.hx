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



import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.display.Shape;
import openfl.events.Event;
import openfl.events.TimerEvent;
import openfl.geom.Rectangle;
import openfl.utils.Timer;


/**
 * A page has changed
 */
@:meta(Event(name="change",type="flash.events.Event"))



/**
 * A page transition has completed
 */
@:meta(Event(name="changeComplete",type="flash.events.Event"))



/**
 *  MadComponents pages container
 * <pre>
 * &lt;pages
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, ..."
 *    visible = "true|false"
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    width = "NUMBER"
 *    height = "NUMBER"
 *    alignH = "left|right|centre|fill"
 *    alignV = "top|bottom|centre|fill"
 *    border = "true|false"
 *    mask = "true|false"
 *    lazyRender = "true|false"
 *    recycle = "true|false"
 *    easeIn = "NUMBER"
 *    easeOut = "NUMBER"
 *    slideOver = "true|false"
 * /&gt;
 * </pre>
 */
class UIPages extends MadMasking implements IContainerUI
{
    public var drawerHeight(never, set) : Float;
    public var pages(get, never) : Array<DisplayObject>;
    public var xml(get, never) : MadXML;
    public var pageNumber(get, set) : Int;
    public var pageUnder(get, never) : Int;

    
    public static inline var STARTING : String = "changeStarting";
    public static inline var COMPLETE : String = "changeComplete";
    
    public static inline var SLIDE_LEFT : String = "left";
    public static inline var SLIDE_RIGHT : String = "right";
    public static inline var SLIDE_UP : String = "up";
    public static inline var SLIDE_DOWN : String = "down";
    public static inline var DRAWER_UP : String = "drawerUp";
    public static inline var DRAWER_DOWN : String = "drawerDown";
    public static inline var SLIDE_LEFT_OVER : String = "leftOver";
    public static inline var SLIDE_RIGHT_OVER : String = "rightOver";
    
    public static var DRAWER_HEIGHT : Float = 220;
    public static var SLIDE_INTERVAL : Int = 40;
    public static var STEPS : Int = 4;
    
    private static inline var PADDING : Float = 10.0;
    private static inline var DIM_ALPHA : Float = 0.4;
    private static inline var UNDER : Float = 0.2;
    
    private var _pages : Array<DisplayObject> = [];
    private var _page : Int = 0;
    private var _thisPage : DisplayObject = null;
    private var _lastPage : DisplayObject;
    private var _slideX : Float = 0;
    private var _slideY : Float = 0;
    private var _slideTimer : AnimationTimer;// = new Timer(SLIDE_INTERVAL, STEPS);
    
    //	protected var _xml:XML;
    //	protected var _attributes:Attributes;
    private var _drawer : UIForm = null;
    private var _transition : String;
    private var _lastPageIndex : Int;
    private var _border : Bool = true;
    private var _layoutAfterSlide : Attributes = null;
    private var _easing : Bool = false;
    private var _easeIn : Float = 0.5;
    private var _easeOut : Float = 0.5;
    private var _shade : Shape = new Shape();
    private var _savePageIndex : Int;
    private var _drawerHeight : Float = DRAWER_HEIGHT;
    private var _over : Bool;
    private var _slideOver : Bool = false;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        super(null, xml, attributes);
        _attributes = attributes.copy(xml);
        
        UI.drawBackgroundColour(_attributes.backgroundColours, _attributes.width, _attributes.y + _attributes.height, this);
        _attributes.x = 0;
	_attributes.y = 0;
        
        _easing = xml.has.easing && xml.att.easing == "true";
        if (xml.has.easeIn) {
            _easeIn = Std.parseFloat(xml.att.easeIn);
        }
        if (xml.has.easeOut) {
            _easeOut = Std.parseFloat(xml.att.easeOut);
        }
        _slideOver = xml.has.slideOver && xml.att.slideOver == "true";
        
        screen.addChildAt(this, 0);
		_slideTimer = new AnimationTimer(this, STEPS);
        var children : MadXMLList = xml.children();
        var index : Int = 0;
		for (child0 in children) {
			if (!child0.nodeKindIsText && child0.name != "data") {
            var childstr : String = child0.toXMLString();
            var child : MadXML = MadXML.parse("<page lazyRender=\"" + (xml.has.lazyRender ? xml.att.lazyRender : '') + "\" recycle=\"" + (xml.has.recycle ? xml.att.recycle : '') + "\">" + childstr + "</page>");
            var newAttributes : Attributes = childAttributes(index++);
            newAttributes.parse(child0);
            if (!child0.has.border || child0.att.border != "false") {
                addPadding(child0.name, newAttributes);
            }
            var page = new UIForm(this, child, newAttributes);
            _attributes.position(page);
            page.name = "+";
            //	page.visible = false;
            setVisible(page, false);
            _pages.push(page);
        	}
		}
        setInitialPage();
        _slideTimer.addEventListener(TimerEvent.TIMER, slide);
        
        startMasking();
        drawShade();
    }
    
    
    private function childAttributes(index : Int) : Attributes{
        return _attributes.copy();
    }
    
    
    public function setVisible(page : DisplayObject, value : Bool) : Void{
        if (Std.is(page, MadSprite)) {
            cast(page, MadSprite).isVisible = value;
        }
        else {
            page.visible = value;
        }
    }
    
/**
 *  Set the height of the sliding drawer
 */
    private function set_drawerHeight(value : Float) : Float{
        if (_shade.parent != null) {
            _thisPage.y = _attributes.height + _attributes.y - value;
        }
        _drawerHeight = value;
        drawShade();
        return value;
    }
    
    
    private function setInitialPage() : Void{
        if (_pages.length > 0) {
            _thisPage = _pages[0];
            _page = 0;
            //	_thisPage.visible = true;
            setVisible(_thisPage, true);
        }
    }
    
/**
 *  An array of pages inside this container
 */
    private function get_pages() : Array<DisplayObject>{
        return _pages;
    }
    
    
    private function get_xml() : MadXML{
        return _xml;
	}
    
/**
 *  Rearrange the layout to new screen dimensions
 */
    override public function layout(attributes : Attributes) : Void{
        if (_slideTimer.running) {
            _layoutAfterSlide = attributes;
            return;
        }
        var children : MadXMLList = _xml.children();
        super.layout(attributes.copy(_xml));
        UI.drawBackgroundColour(_attributes.backgroundColours, _attributes.width, _attributes.y + _attributes.height, this);
        _attributes.x = 0;
        _attributes.y = 0;
		var idx:Int = 0;
        for (i in 0...children.length()){
            var childXML : MadXML = children.get(i);
            if (childXML.name != "data" && !childXML.nodeKindIsText) {
                //	var child:XML = XML("<page>"+childXML.toXMLString()+"</page>");
                var newAttributes : Attributes = childAttributes(i);
                newAttributes.parse(childXML);
                if (!childXML.has.border || childXML.att.border != "false") {
                    addPadding(childXML.name, newAttributes);
                }
                var page = _pages[idx++];
				if (Std.is(page, IContainerUI)) {
					cast(page, IContainerUI).layout(newAttributes);
				}
                
                if (page == _drawer) {
                    _drawer.y = _attributes.height + _attributes.y - _drawerHeight;
                }
                else {
                    _attributes.position(page);
                }
            }
        }
        
        
        
        
        refreshMasking();
        drawShade();
    }
    
/**
 *  Add border padding around a page
 */
    private function addPadding(localName : String, newAttributes : Attributes) : Void{
		if (localName.toLowerCase().indexOf("pages") < 0 && localName.toLowerCase().indexOf("list") < 0 && localName.toLowerCase().indexOf("navigation") < 0 && localName.toLowerCase().indexOf("scroll") < 0 && localName != "viewFlipper" && localName != "frame") {trace("adding padding!", localName);
            newAttributes.x += PADDING;
            newAttributes.y += PADDING;
            newAttributes.width -= 2 * PADDING;
            newAttributes.height -= 2 * PADDING;
            newAttributes.hasBorder = true;
        }
    }
    
/**
 *  Go to next page
 */
    public function nextPage(transition : String = "") : Void{
        if (!_slideTimer.running && _lastPage == null && _page < _pages.length - 1) {
            _lastPageIndex = _page;
            _lastPage = _pages[_page];
            _page++;
            _thisPage = _pages[_page];
            //	_thisPage.visible = true;
            setVisible(_thisPage, true);
            doTransition(transition);
        }
    }
    
/**
 *  Go to previous page
 */
    public function previousPage(transition : String = "") : Void{
        if (!_slideTimer.running && _lastPage == null && _page > 0) {
            _lastPageIndex = _page;
            _lastPage = _pages[_page];
            _page--;
            _thisPage = _pages[_page];
            //	_thisPage.visible = true;
            setVisible(_thisPage, true);
            doTransition(transition);
        }
    }
    
/**
 *  Attach new pages to this container
 */
    public function attachPages(pages : Array<DisplayObject>, alt : Bool = false) : Void{
        _pages = pages;
        for (i in 1...pages.length){
            //	DisplayObject(pages[i]).visible = false;
            setVisible(pages[i], false);
        }
    }
    
/**
 *  Page transition
 */
    private function doTransition(transition : String) : Void{
        stage.dispatchEvent(new Event(STARTING));
        _transition = transition;
        _thisPage.x = _attributes.x;
        _thisPage.y = _attributes.y;
        _over = _slideOver;
        switch (transition)
        {
            case SLIDE_LEFT_OVER, SLIDE_LEFT:

                switch (transition)
                {
					case SLIDE_LEFT_OVER:_over = true;
                }
				_thisPage.x = _attributes.width + _attributes.x;
                startSlide();
            case SLIDE_RIGHT_OVER, SLIDE_RIGHT:

                switch (transition)
                {
					case SLIDE_RIGHT_OVER:_over = true;
                }
				_thisPage.x = -((_over) ? UNDER : 1.0) * _attributes.width + _attributes.x;
                startSlide();
            case SLIDE_UP:
				_thisPage.y = _attributes.height + _attributes.y;
                startSlide();
            case SLIDE_DOWN:
				startSlide((_attributes.height + _attributes.y) / STEPS);
            case DRAWER_UP:
				_drawer = cast((_thisPage), UIForm);
                _thisPage.y = _attributes.height + _attributes.y;
                startSlide(-_drawerHeight / STEPS);
            case DRAWER_DOWN:
				_thisPage.y = _attributes.height + _attributes.y - _drawerHeight;
                if (_shade.parent != null) {
                    _shade.parent.removeChild(_shade);
                }
                startSlide((_attributes.height + _attributes.y) / STEPS);
                _drawer = null;
            default:  //	_lastPage.visible = false;  
                setVisible(_lastPage, false);
                _lastPage = null;
                dispatchEvent(new Event(Event.CHANGE));
                dispatchEvent(new Event(COMPLETE));
        }
    }
    
/**
 *  Create a translucent shade for sliding drawer
 */
    private function drawShade() : Void{
        _shade.graphics.clear();
        _shade.graphics.beginFill(0x000000, DIM_ALPHA);
        var height : Float = _attributes.height - _drawerHeight;
        _shade.graphics.drawRect(0, -height, _attributes.width, height);
        _shade.graphics.beginFill(0x000000);
        _shade.graphics.drawRect(0, -4, _attributes.width, 4);
    }
    
/**
 *  Start slide transition
 */
    private function startSlide(slideY : Float = 0) : Void{
        //	_thisPage.cacheAsBitmap=true;
        //	_lastPage.cacheAsBitmap=true;
        _slideX = (_attributes.x - _thisPage.x) / STEPS;
        _slideY = (slideY == 0) ? (_attributes.y - _thisPage.y) / STEPS : slideY;
		_slideTimer.reset();
        _slideTimer.start();
        dispatchEvent(new Event(Event.CHANGE));
    }
    
/**
 *  Is this a simple transition, left right, or change
 */
    private function isSimpleTransition(transition : String) : Bool{
        return transition == "" || transition == SLIDE_LEFT || transition == SLIDE_RIGHT || transition == SLIDE_LEFT_OVER || transition == SLIDE_RIGHT_OVER;
    }
    
    
    private function upTransition(transition : String) : Bool{
        return transition == SLIDE_UP || transition == DRAWER_UP;
    }
    
    
    private function downTransition(transition : String) : Bool{
        return transition == SLIDE_DOWN || transition == DRAWER_DOWN;
    }
    
    
    private function bezier(p0 : Float, p1 : Float, p2 : Float, t : Float) : Float{
        return t * t * p0 + 2 * t * (1 - t) * p1 + (1 - t) * (1 - t) * p2;
    }
    
    
    private function easing(t : Float) : Float{
        if (t < 0.5) 
            return bezier(0.0, -_easeIn / 2 + 0.25, 0.5, (1 - t * 2))
        else 
        return bezier(0.5, _easeOut / 2 + 0.75, 1.0, (1 - t) * 2);
    }
    
    
    private function delta(t : Float, increment : Float) : Float{
        if (_easing) {
            return (t == 0) ? 0 : increment * STEPS * (easing(t) - easing(t - 1 / STEPS));
        }
        else {
            return increment;
        }
    }
    
    
    private function slideComplete() : Void{
        _slideTimer.stop();
        //	_thisPage.cacheAsBitmap=false;
        if (_transition == SLIDE_DOWN || _transition == DRAWER_DOWN) {
            //	_thisPage.visible = false;
            setVisible(_thisPage, false);
        }
        else if (_transition != SLIDE_UP && _transition != DRAWER_UP) {
            removeLastPage();
            _thisPage.x = 0;
        }
        
        if (upTransition(_transition)) {
            _savePageIndex = _lastPageIndex;
        }
        else if (downTransition(_transition)) {
            _page = _savePageIndex;
        }
        else if (!isSimpleTransition(_transition)) {
            _page = _lastPageIndex;
        }
        
        if (_layoutAfterSlide != null) {
            layout(_layoutAfterSlide);
            _layoutAfterSlide = null;
        }
        if (_transition == DRAWER_UP) {
            cast((_thisPage), Sprite).addChild(_shade);
        }
        dispatchEvent(new Event(COMPLETE));
    }
    
/**
 *  Animate slide transition
 */
    private function slide(event : TimerEvent) : Void{
		if (_lastPage == null) {
			trace("abort slide");
			return;
		}
    //    var t : Float = cast(event.currentTarget, Timer).currentCount / STEPS;
		var t : Float = _slideTimer.currentCount / STEPS;
		_lastPage.x += ((_over && _slideX < 0) ? UNDER : ((_over && _slideX > 0) ? 1 / UNDER : 1.0)) * delta(t, _slideX);
        _thisPage.x += delta(t, _slideX);
        _thisPage.y += delta(t, _slideY);
//		if (cast((event.currentTarget), Timer).currentCount == STEPS) {
		if (_slideTimer.currentCount == STEPS) {
			slideComplete();
        }
    }
    
    
    public function doLayout() : Void{
        layout(attributes);
    }
    
/**
 *  Make the previous page invisible
 */
    private function removeLastPage() : Void{
    //	_lastPage.visible = false;
        setVisible(_lastPage, false);
        _lastPage = null;
    }
    
/**
 *  Change page
 */
    public function goToPage(page : Int, transition : String = "") : Void{
        if (_slideTimer.running) {
			return;
		}
        _lastPageIndex = _page;
        if (page == _page && isSimpleTransition(transition)) {
			return;
		}
        _lastPage = _pages[_page];
        _page = page;
        _thisPage = _pages[_page];
        //	_thisPage.visible = true;
        setVisible(_thisPage, true);
        doTransition(transition);
    }
    
/**
 *  Change page.  (Specify page with id name).
 */
    public function goToPageId(id : String, transition : String = "") : Bool{
        for (i in 0..._pages.length){
            if (cast((_pages[i]), Sprite).getChildAt(0).name == id) {
                goToPage(i, transition);
                return true;
            }
        }
        return false;
    }
    
    
    public function pageId(id : String) : DisplayObject{
        for (i in 0..._pages.length){
            if (cast((_pages[i]), Sprite).getChildAt(0).name == id) {
                return cast((_pages[i]), Sprite).getChildAt(0);
            }
        }
        return null;
    }
    
/**
 *  Page number
 */
    private function get_pageNumber() : Int{
        return _page;
    }
    
    
    private function set_pageNumber(value : Int) : Int{
        goToPage(value);
        return value;
    }
    
    
    private function get_pageUnder() : Int{
        return _savePageIndex;
    }
    
/**
 *  Clear pages
 */
    public function clear() : Void{
        for (view in _pages) {
        	if (Std.is(view, IContainerUI)) {
				cast(view, IContainerUI).clear();	
			} 
		}
    }
    
/**
 *  Search for component by id
 */
    public function findViewById(id : String, row : Int = -1, group : Int = -1) : DisplayObject{
        for (view in _pages){
            if (view.name == id) {
                return view;
            }
            else {
                if (Std.is(view, IContainerUI)) {
                    var result : DisplayObject = cast((view), IContainerUI).findViewById(id, row, group);
                    if (result != null) 
                        return result;
                }
            }
        }
        return null;
    }
    
    
    public function drawComponent() : Void{
        
    }
    
    
    override public function destructor() : Void{
        super.destructor();
        _slideTimer.removeEventListener(TimerEvent.TIMER, slide);
        for (view in _pages) {
			if (Std.is(view, IContainerUI)) {
        		cast(view, IContainerUI).destructor();
			}
		}
    }
}

