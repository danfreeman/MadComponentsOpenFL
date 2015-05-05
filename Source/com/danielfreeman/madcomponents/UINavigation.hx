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

import com.danielfreeman.madcomponents.UINavigationBar;
import com.danielfreeman.madcomponents.UIPages;
import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.KeyboardEvent;
import openfl.events.MouseEvent;
import openfl.geom.Rectangle;
import openfl.ui.Keyboard;

/**
 * A page has changed
 */  @:meta(Event(name="change",type="flash.events.Event"))
  /**
 * A page transition has completed
 */  @:meta(Event(name="changeComplete",type="flash.events.Event"))
  /**
 *  MadComponents navigation controller
 * <pre>
 * &lt;navigation
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, ..."
 *    visible = "true|false"
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    alignH = "left|right|centre|fill"
 *    alignV = "top|bottom|centre|fill"
 *    leftButton = "TEXT"
 *    rightButton = "TEXT"
 *    rightArrow = "TEXT"
 *    leftArrow = "TEXT"
 *    title = "TEXT"
 *    autoFill = "true|false"
 *    autoTitle = "TEXT"
 *    border = "true|false"
 *    mask = "true|false"
 *    backToExit = "true|false"
 *    leftButtonColour = "#rrggbb"
 *    rightButtonColour = "#rrggbb"
 *    arrowColour = "#rrggbb"
 *    autoForward = "true|false"
 *    backKey = "true|false"
 *    style7 = "true|false"
 *    lazyRender = "true|false"
 *    recycle = "true|false"
 *    easeIn = "NUMBER"
 *    easeOut = "NUMBER"
 *    slideOver = "true|false"
 * /&gt;
 * </pre>
 */
	
class UINavigation extends UIPages
{
    public var fullPage(get, set) : Bool;
    public var title(never, set) : String;
    public var autoForward(never, set) : Bool;
    public var autoBack(never, set) : Bool;
    public var navigationBar(get, never) : UINavigationBar;
    public var index(get, never) : Int;
    public var row(get, never) : Dynamic;
    public var label(get, never) : String;
	private static inline var BACK : Int = 0x01000016;
	private var _navigationBar : UINavigationBar;
	private var _pressedCell : Int = -1;
	private var _autoForward : Bool = true;
	private var _autoBack : Bool = true;
	private var _autoTitle : String = "";
	private var _autoFill : Bool = false;
	private var _row : Dynamic = null;
	private var _titles : Array<Dynamic> = [];
	private var _backToExit : Bool = false;
	private var _alt : Bool = false;
	private var _backKey : Bool;
	private var _fullPageAttributes : Attributes;
	private var _hasNavBar : Bool;
	private var _fullPage : Array<Dynamic> = [];
	
	
	public function new(screen : Sprite, xml : MadXML, attributes : Attributes, hasNavBar : Bool = true)
    {
		trace(name, "______________________________hasNavBar=", hasNavBar);
		var pagesAttributes : Attributes = attributes.copy(xml);
		_hasNavBar = hasNavBar;
		super(screen, xml, pagesAttributes);
		_navigationBar = new UINavigationBar(this, xml, attributes);
		_navigationBar.visible = hasNavBar;
		
		_backKey = xml.has.backKey && xml.att.backKey == "true";
		if (xml.has.autoForward) {
			_autoForward = xml.att.autoForward == "true";
        }
		_fullPageAttributes = attributes;
		
		_alt = xml.has.alt && xml.att.alt == "true";
		if (hasNavBar) {
			pagesAttributes.height -= UINavigationBar.HEIGHT;
			pagesAttributes.y = (_alt) ? 0 : UINavigationBar.HEIGHT;
			_navigationBar.y = (_alt) ? pagesAttributes.height : 0;
        }
		for (child in xml.children()){
			 _fullPage.push(child.has.fullPage && child.att.fullPage == "true");
        }
	//	super(screen, xml, pagesAttributes);
		refreshMasking(attributes);
		if (hasNavBar) {
			_attributes.y = (_alt) ? 0 : UINavigationBar.HEIGHT;
			if (_thisPage != null){
				_thisPage.y = (_alt) ? 0 : UINavigationBar.HEIGHT;
			}
        }
			trace(name, "_________hasNavBar", hasNavBar, "_thisPage.y", _thisPage.y);
		_navigationBar.backButton.addEventListener(MouseEvent.MOUSE_UP, goBack);
		_navigationBar.backButton.visible = false;
		addEventListener(UIList.CLICKED, goForward);
		stage.addEventListener(KeyboardEvent.KEY_DOWN, keyHandler);
		setChildIndex(_navigationBar, numChildren - 1);
		if (xml.has.title) {
            _titles[0] = _navigationBar.text = Std.string(xml.att.title);
        }
		if (xml.has.autoFill) {
            _autoFill = xml.att.autoFill != "false";
        }
		if (xml.has.autoTitle) {
            _autoTitle = xml.att.autoTitle;
        }
		if (xml.has.backToExit) {
            _backToExit = xml.att.backToExit != "false";
        }
		if (xml.has.leftButtonColour) {
            _navigationBar.leftButton.colour = UI.toColourValue(xml.att.leftButtonColour);
        }
		if (xml.has.rightButtonColour) {
            _navigationBar.rightButton.colour = UI.toColourValue(xml.att.rightButtonColour);
        }
		if (xml.has.arrowColour) {
            _navigationBar.backButton.colour = _navigationBar.rightArrow.colour = UI.toColourValue(xml.att.arrowColour);
        }
    }


		override private function childAttributes(index : Int) : Attributes{
            if (_fullPage[index]) {
                return _fullPageAttributes.copy();
            }
            else {
                return _attributes.copy();
            }
        }


		private function get_fullPage() : Bool{
            return _fullPage[_page];
    }


		private function set_fullPage(value : Bool) : Bool{
            _fullPage[_page] = value;
            doLayout();
            _thisPage.y = ((!_hasNavBar || _alt || value)) ? 0 : UINavigationBar.HEIGHT;
			_navigationBar.visible = !value;
        return value;
    }


		override private function get_attributes() : Attributes{
			return _fullPageAttributes;
    }


		override private function set_isVisible(value : Bool) : Bool{
            if (value) {
                addEventListener(UIList.CLICKED, goForward);
                stage.addEventListener(KeyboardEvent.KEY_DOWN, keyHandler);
        }
        else {
            removeEventListener(UIList.CLICKED, goForward);
            stage.removeEventListener(KeyboardEvent.KEY_DOWN, keyHandler);
        }
        super.isVisible = value;
        return value;
    }

/**
 *  Rearrange the layout to new screen dimensions
 */  
		override public function layout(attributes : Attributes) : Void{
            _fullPageAttributes = attributes;
            if (_slideTimer.running) {
                _layoutAfterSlide = attributes;
                return;
            }
            _navigationBar.fixwidth = attributes.width;
            var pagesAttributes : Attributes = attributes.copy();
            if (_hasNavBar) {  
                pagesAttributes.height -= UINavigationBar.HEIGHT;
                pagesAttributes.y = _alt ? 0 : UINavigationBar.HEIGHT;
                _navigationBar.y = _alt ? pagesAttributes.height : 0;
            }
            super.layout(pagesAttributes);
            if (_hasNavBar) { //_navigationBar.visible
                _attributes.y = _alt ? 0 : UINavigationBar.HEIGHT;
                }
            if (_thisPage != null) {
                _thisPage.y = (_alt || !_hasNavBar) ? 0 : UINavigationBar.HEIGHT;
            }
        refreshMasking(attributes);  
        
    }

/**
 *  Title of navigation bar
 */
		private function set_title(value : String) : String{
            _titles[_page] = value;
            _navigationBar.text = value;
        return value;
    }

/**
 *  If false, clicking on list row won't change page
 */  
		private function set_autoForward(value : Bool) : Bool{
            _autoForward = value;
            return value;
        }
    
    
/**
 *  If false, clicking on back button won't revert to previous page
 */  
    private function set_autoBack(value : Bool) : Bool{
        _autoBack = value;
        return value;
    }

/**
 *  UINavigationBar
 */  
		private function get_navigationBar() : UINavigationBar{
            return _navigationBar;
    }

/**
 *  Go forward handler
 */  
private function goForward(event : Event) : Void{
            if (!_slideTimer.running) {
                _pressedCell = cast((event.target), UIList).index;
                _row = cast((event.target), UIList).row;
                if (_autoForward) {
                    if (_autoTitle != "" && Reflect.field(_row, _autoTitle)) {
                        _navigationBar.text = _titles[_page + 1] = Reflect.field(_row, _autoTitle);
                }
                nextPage(UIPages.SLIDE_LEFT);
            }
        }
    }

/**
 *  Go back handler
 */  
		private function goBack(event : MouseEvent = null) : Void{
			_savePageIndex = _page;
			if (!_slideTimer.running && _autoBack) {
                if (_autoTitle != "") {
                    _navigationBar.text = ((_page > 1 && _titles[_page - 1])) ? _titles[_page - 1] : "";
                }
            previousPage(UIPages.SLIDE_RIGHT);
            }
        }


		private function updateTitle() : Void{
            if (_page > _lastPageIndex) {
                if (_autoTitle != "" && Reflect.field(_row, _autoTitle)) {
                    _navigationBar.text = _titles[_page] = Reflect.field(_row, _autoTitle);
            }
        }
        else {
            if (_autoTitle != "") {
                _navigationBar.text = ((_page > 1 && _titles[_page])) ? _titles[_page] : "";
            }
        }
    }

/**
 *  Do page transition
 */  
		override private function doTransition(transition : String) : Void{var lastContainer : DisplayObject = cast((_lastPage), Sprite).getChildAt(0);
            if (Std.is(lastContainer, UIList)) {
                _pressedCell = cast((lastContainer), UIList).index;
				_row = cast((lastContainer), UIList).row;
            }
            var thisContainer : DisplayObject = cast((_thisPage), Sprite).getChildAt(0);
            if (_row != null && Std.is(thisContainer, IContainerUI) && (_autoFill || (cast((thisContainer), IContainerUI).xml.has.autoFill && cast((thisContainer), IContainerUI).xml.att.autoFill != "false"))) {
                if (Std.is(thisContainer, UIForm)) {
                    cast((thisContainer), UIForm).data = _row;
            }
            else if (Std.is(thisContainer, UIScrollVertical) && !(Std.is(thisContainer, UIList))) {
                cast((thisContainer), UIScrollVertical).data = _row;
            }
        }
        super.doTransition(transition);
        _navigationBar.backButton.visible = pageNumber > 0 && _navigationBar.backButton.text != "";
        _navigationBar.leftButton.visible = !_navigationBar.backButton.visible && _xml.has.leftButton;
    }

/**
 *  Index of last list row clicked 
 */  
		private function get_index() : Int{
            return _pressedCell;
    }

/**
 *  Data object of last list row clicked 
 */  
		private function get_row() : Dynamic{
            return _row;
    }

/**
 *  Label of last list row clicked 
 */  
		private function get_label() : String{
            return (_row != null) ? _row.label : "";
    }

/**
 *  Change page
 */  
		override public function goToPage(value : Int, transition : String = "") : Void{
            if (_slideTimer.running) {
                return;
                }
            super.goToPage(value, transition);
            updateTitle();
            updateNavigationBar();
    }

/**
 *  Go to next page
 */  
		override public function nextPage(transition : String = "") : Void{
            if (_slideTimer.running) {
                return;
                }
            super.nextPage(transition);updateNavigationBar();
        }

/**
 *  Go to previous page
 */  
		override public function previousPage(transition : String = "") : Void{
            if (_slideTimer.running) {
                return;
                }
            super.previousPage(transition);
            updateNavigationBar();
    }

/**
 *  Update navigation bar
 */  
		private function updateNavigationBar() : Void{
            var isFullPage : Bool = ((_page >= 0)) ? _fullPage[_page] : false;
            _navigationBar.visible = _hasNavBar && !isFullPage;
            _thisPage.y = ((!_hasNavBar || _alt || isFullPage)) ? 0 : UINavigationBar.HEIGHT;
            if (_transition == UIPages.SLIDE_DOWN || _transition == UIPages.DRAWER_DOWN) {
                _navigationBar.backButton.visible = _lastPageIndex > 0 && _navigationBar.backButton.text != "";
            }
            else {
                _navigationBar.backButton.visible = isSimpleTransition(_transition) && _page > 0 && _navigationBar.backButton.text != "";
            }
            if (_autoTitle != "") {
                _navigationBar.text = ((_page >= 0 && _titles[_page])) ? _titles[_page] : "";
            }
            var actualPage : DisplayObject = cast((_thisPage), Sprite).getChildAt(0);
            if (Std.is(actualPage, IContainerUI) && cast((actualPage), IContainerUI).xml.has.title) {
                _navigationBar.text = cast((actualPage), UIForm).xml.att.title;
            }
        }

/**
 *  Keyboard handler
 */  
		private function keyHandler(event : KeyboardEvent) : Void{
            if (_backKey && (event.keyCode == BACK) && !(_backToExit && _page == 0)) {
				//|| event.keyCode == Keyboard.BACK
                goBack();
        }
    }


		override public function destructor() : Void{
			_navigationBar.backButton.removeEventListener(MouseEvent.MOUSE_UP, goBack);
            _navigationBar.destructor();
            super.destructor();
			removeEventListener(UIList.CLICKED, goForward);
            stage.removeEventListener(KeyboardEvent.KEY_DOWN, keyHandler);
    }
}