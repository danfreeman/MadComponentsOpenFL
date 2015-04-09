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
 * AUTHORS' OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.</p>
 *
 * <p>Licensed under The MIT License</p>
 * <p>Redistributions of files must retain the above copyright notice.</p>
 */

package com.danielfreeman.extendedmadness;


import openfl.events.Event;
import com.danielfreeman.madcomponents.*;

import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.geom.ColorTransform;
import openfl.text.TextFormat;

/**
 *  MadComponents tabbed pages container
 * <pre>
 * &lt;tabPagesSliding
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, ..."
 *    tabButtonColours = "#rrggbb, #rrggbb, ..."
 *    visible = "true|false"
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    alignH = "left|right|centre"
 *    alignV = "top|bottom|centre"
 *    border = "true|false"
 *    mask = "true|false"
 *    alt = "true|false"
 *    highlightColour = "#rrggbb"
 *    iconColour = "#rrggbb"
 *    activeColour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb"
 *    leftMargin = "NUMBER"
 *    pixelSnapping = "true|false"
 *    scaleHeight = "NUMBER"
 *    &lt;data&gt;LABELS&lt;/data&gt;
 *    &lt;font&gt;FORMAT&lt;/font&gt;
 *    &lt;activeFont&gt;FORMAT&lt;/activeFont&gt;
 *    &lt;disableFont&gt;FORMAT&lt;/disableFont&gt;
 * /&gt;
 * </pre>
 */
class UITabPagesSliding extends UIForm
{
    public var tabPages(get, never) : UIPages;
    public var icons(get, never) : UIIcons;

    
    private static var ICONS : String = 
        
       "<icons id=\"_icons\"
						border=\"false\"
						background=\"#001133,#000022\"
						gapH=\"30\"
						leftMargin=\"20\"
						height=\"38\"
						pixelSnapping = \"true\"
						iconColour=\"#FFCC33\"
						activeColour=\"#CCCCFF\">
						<font color=\"#FFEE99\"/>
					</icons>";
    
    
    private static var SLIDING_ICONS : String = 
        
        "<scrollHorizontal border=\"false\" id=\"_scrollHorizontal\" scrollBarColour=\"#EEEEEE\" background=\"#001133\">" + ICONS + "</scrollHorizontal>";
    
    
    private static var LAYOUT : MadXML = 
        
        MadXML.parse("<rows heights=\"100%,38\" border=\"false\" gapV=\"0\"><pages id=\"_pages\"/>" + SLIDING_ICONS + "</rows>");
    
    
    private var _pages : UIPages;
    private var _icons : UIIcons;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        super(screen, modify(xml), attributes);
        _pages = cast((findViewById("_pages")), UIPages);
        _icons = cast((findViewById("_icons")), UIIcons);
        _icons.index = 0;
        _icons.addEventListener(Event.CHANGE, tabClicked);
    }
    
    
    private function get_tabPages() : UIPages{
        return _pages;
    }
    
    
    private function get_icons() : UIIcons{
        return _icons;
    }
    
    
    private function tabClicked(event : Event) : Void{
        _pages.goToPage(_icons.index);
    }
    
    
    private function modify(xml : MadXML) : MadXML{
        var rows : MadXML = LAYOUT;//.node.copy.innerData();
        var pages : MadXML = rows.node.pages;
        var scrollHorizontal : MadXML = rows.node.scrollHorizontal;
        var icons : MadXML = scrollHorizontal.node.icon;
        if (xml.has.scrollBarColour) {
            scrollHorizontal.setAttribute("scrollBarColour", xml.att.scrollBarColour);
        }
        if (xml.has.iconBackground) {
            icons.setAttribute("background", xml.att.iconBackground);
            scrollHorizontal.setAttribute("background", xml.att.iconBackground.split(",")[0]);
        }
        if (xml.has.iconColour) {
            icons.setAttribute("iconColour", xml.att.iconColour);
        }
        if (xml.has.activeColour) {
            icons.setAttribute("activeColour", xml.att.activeColour);
        }
        if (xml.has.disableColour) {
            icons.setAttribute("disableColour", xml.att.disableColour);
        }
        if (xml.has.highlightColour) {
            icons.setAttribute("highlightColour", xml.att.highlightColour);
        }
        if (xml.hasNode.font) {
            icons.node.font.innerData = xml.node.font.innerData;
        }
        if (xml.hasNode.activeFont) {
            icons.node.activeFont.innerData = xml.node.activeFont.innerData;
        }
        if (xml.hasNode.disableFont) {
            icons.node.disableFont.innerData = xml.node.disableFont.innerData;
        }
        var numberOfPages : Int = 0;
        for (pageXml in xml.children()){
            if (pageXml.name != "data" && pageXml.name != "font" && pageXml.name != "activeFont" && pageXml.name != "disableFont") {
                pages.node.appendChild.innerData(pageXml);
                numberOfPages++;
            }
        }
        if (xml.hasNode.data) {
            icons.node.data.innerData = xml.node.data.innerData;
        }
        else {
            var xmlData : FastXML = FastXML.parse("<data/>");
            for (i in 0...numberOfPages){
                xmlData.node.appendChild.innerData(FastXML.parse("<item label={i}/>"));
            }
            icons.node.data.innerData = xmlData;
        }
        return rows;
    }
}
