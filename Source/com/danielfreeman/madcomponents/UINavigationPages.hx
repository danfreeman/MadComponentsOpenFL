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


/**
 *  MadComponents navigation controller
 * <pre>
 * &lt;navigationPages
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
package com.danielfreeman.madcomponents;


import openfl.display.Sprite;
import openfl.display.DisplayObject;
import openfl.events.Event;
import openfl.events.MouseEvent;

class UINavigationPages extends UINavigation
{
    private var _inside : Bool = false;
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        super(screen, xml, attributes, !(Std.is(screen.parent, UINavigationPages)));
    }
    
    
    public function backChain() : Bool{
        var pageContents : DisplayObject = ((Std.is(_thisPage, Sprite))) ? cast((_thisPage), Sprite).getChildAt(0) : null;
        if (!(Std.is(pageContents, UINavigationPages) && cast((pageContents), UINavigationPages).backChain())) {
            if (!_slideTimer.running && _autoBack && _page > 0) {
                if (_autoTitle != "") {
                    title = _titles[0];
                }
                goToPage(0, UIPages.SLIDE_RIGHT);
                return true;
            }
        }
        return false;
    }
    
    
/**
 *  Go forward handler
 */
    override private function goForward(event : Event) : Void{
        if (!_slideTimer.running) {
            _pressedCell = cast((event.target), UIList).index;
            _row = cast((event.target), UIList).row;
            if (_autoForward) {
                if (_autoTitle != "" && Reflect.field(_row, _autoTitle)) {
                    title = _titles[_pressedCell + 1] = Reflect.field(_row, _autoTitle);
                }
                var newPage : Int = Math.round(Math.min(_pressedCell + 1, _pages.length - 1));
                goToPage(newPage, UIPages.SLIDE_LEFT);
            }
        }
        event.stopImmediatePropagation();
    }
    
/**
 *  Go back handler
 */
    override private function goBack(event : MouseEvent = null) : Void{
        backChain();
    }
}
