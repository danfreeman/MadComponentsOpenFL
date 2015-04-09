package com.danielfreeman.extendedmadness;



import openfl.system.Capabilities;
import com.danielfreeman.madcomponents.*;

import openfl.display.Sprite;
import openfl.display.DisplayObject;
import openfl.events.Event;

/**
 * Screen has changed
 */
@:meta(Event(name="screenChanged",type="flash.events.Event"))



class UIScreens extends UIPages
{
    
    public static inline var SCREEN_CHANGED : String = "screenChanged";
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        super(screen, xml, attributes);
    }
    
    
    private function useThisOne(size : String) : Bool{
        var result : Bool = true;
        if (size.substr(-3, 3).toUpperCase() == "DPI") {
            return Std.parseFloat(size.substr(0, -3)) >= Capabilities.screenDPI;
        }
        if (size.substr(-1, 1).toUpperCase() == "C") {
            size = size.substr(0, -1);
        }
        if (size.substr(0, 1).toUpperCase() == "L") {
            result = UI.attributes.width >= UI.attributes.height;
            size = size.substr(1);
        }
        else if (size.substr(0, 1).toUpperCase() == "P") {
            result = UI.attributes.width <= UI.attributes.height;
            size = size.substr(1);
        }
        if (size.length > 0) {
            var xPosition : Int = Math.round(Math.max(size.indexOf("X"), size.indexOf("x")));
            if (xPosition > 0) {
                result = result && (UI.attributes.width >= Std.parseInt(size.substring(0, xPosition))) && (UI.attributes.height >= Std.parseInt(size.substring(xPosition + 1)));
            }
            else {
                result = result && (UI.attributes.width >= Std.parseInt(size));
            }
        }
        return result;
    }
    
    
    private function whichScreenIndex() : Int{
        var result : Int = 0;
        var index : Int = 0;
        for (child in _xml.children()){
            if (child.has.size && useThisOne(Std.string(child.att.size).toUpperCase())) {
                result = index;
            }
            index++;
        }
        return result;
    }
    
    
    override private function setInitialPage() : Void{
        if (_pages.length > 0) {
            var index : Int = whichScreenIndex();
            _thisPage = _pages[index];
            _page = index;
            //	_thisPage.visible = true;
            setVisible(_thisPage, true);
        }
    }
    
    /**
 *  Search for component by id
 */
    override public function findViewById(id : String, row : Int = -1, group : Int = -1) : DisplayObject{
        for (view in _pages){
            if (view.name == id) {
                return view;
            }
        }
        return cast((_thisPage), IContainerUI).findViewById(id, row, group);
    }
    
    
    override public function touchCancel() : Void{
        if (Std.is(_thisPage, Sprite) && Std.is(cast((_thisPage), Sprite).getChildAt(0), MadSprite)) {
            cast((cast((_thisPage), Sprite).getChildAt(0)), MadSprite).touchCancel();
        }
    }
    
    /**
 *  Rearrange the layout to new screen dimensions
 */
    override public function layout(attributes : Attributes) : Void{
        var newPageIndex : Int = whichScreenIndex();
        if (_page != newPageIndex) {
            //	_thisPage.visible = false;
            setVisible(_thisPage, false);
            _thisPage = _pages[newPageIndex];
            //	_thisPage.visible = true;
            setVisible(_thisPage, true);
            _page = newPageIndex;
            dispatchEvent(new Event(SCREEN_CHANGED));
        }
        super.layout(attributes);
    }
}

