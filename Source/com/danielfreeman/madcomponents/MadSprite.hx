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


import openfl.display.Sprite;
import openfl.display.DisplayObject;
import openfl.geom.Point;

/**
 *  MadSprite adds clickable property
 */
class MadSprite extends Sprite implements IComponentUI
{
    public var clickable(get, set) : Bool;
    public var includeInLayout(get, set) : Bool;
    public var attributes(get, never) : Attributes;
    public var theWidth(get, never) : Float;
    public var theHeight(get, never) : Float;
    public var isVisible(get, set) : Bool;
	public var text(get, set) : String;

    private var _clickable : Bool = true;
    private var _includeInLayout : Bool = true;
    private var _attributes : Attributes = null;
	
	
    
    public function new(screen : Sprite, attributes : Attributes = null)
    {
		super();
        if (screen != null) {
            screen.addChild(this);
        }
        if (attributes != null) {
            _attributes = attributes;
        }
        else {
            _attributes = new Attributes();
        }
    }
    
    private function set_clickable(value : Bool) : Bool{
        _clickable = value;
        return value;
    }
    
    private function get_clickable() : Bool{
        return _clickable;
    }
    
    private function set_includeInLayout(value : Bool) : Bool{
        _includeInLayout = value;
        return value;
    }
    
    private function get_includeInLayout() : Bool{
        return _includeInLayout;
    }
    
    public function touchCancel() : Void{
        //override to implement scroll cancel
        
    }
    
    private function get_attributes() : Attributes{
        return _attributes;
    }
    
    public function layout(attributes : Attributes) : Void{
        _attributes = attributes;
    }
    
    private function get_theWidth() : Float{
        return width;
    }
    
    private function get_theHeight() : Float{
        return height;
    }
    
    private function set_isVisible(value : Bool) : Bool{
        visible = value;
        return value;
    }
    
    private function get_isVisible() : Bool{
        return visible;
    }
	
	private function set_text(value : String) : String {
        return value;
    }
	
	private function get_text() : String{
        return "";
    }
	
	
	private function toPixelBoundary(target:DisplayObject, x:Float, y:Float):Point {
		var globalPoint:Point = target.localToGlobal(new Point(x, y));
		return target.globalToLocal(new Point(Math.round(globalPoint.x / UI.scale) * UI.scale, Math.round(globalPoint.y / UI.scale) * UI.scale));
	}
	
	
	private function toPixelBoundaryDouble(target:DisplayObject, x:Float, y:Float):Point {
		var globalPoint:Point = target.localToGlobal(new Point(x, y));
		return target.globalToLocal(new Point(Math.round(globalPoint.x / UI.scale) * UI.scale, Math.round(globalPoint.y / (2 * UI.scale)) * 2 * UI.scale));
	}
	
	
	
	
    
    public function destructor() : Void{
        
    }
}
