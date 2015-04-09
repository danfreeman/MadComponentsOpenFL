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



import openfl.text.TextFormat;
import openfl.text.TextFieldAutoSize;
import openfl.display.Sprite;
import openfl.display.DisplayObject;

/**
 *  MadComponents renderer
 * <pre>
 * &lt;navigation
 *    id = "IDENTIFIER"
 *    colour = "#rrggbb"
 *    background = "#rrggbb, #rrggbb, ..."
 *    visible = "true|false"
 *    gapV = "NUMBER"
 *    gapH = "NUMBER"
 *    style7 = "true|false"
 * </pre>
 */
class UIRenderer extends UIContainerBaseClass
{
    
    private var _childAttributes : Array<Attributes>;
    private var _children : Array<DisplayObject>;
    private var _alignRight : Array<Bool>;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        super(screen, xml, attributes);
    }
    
    
    override private function initialise(xml : MadXML, attributes : Attributes) : Void{
        _childAttributes = [];
        _children = [];
        _alignRight = [];
        for (xmlChild in xml.children()){
            var childAttributes : Attributes = attributes.copy(xml, true);
            childAttributes.y = 0;
            var localName : String = xmlChild.name;
            if (UI.isContainer(localName)) {
                _childAttributes.push(childAttributes);
                _children.push(UI.containers(this, xmlChild, childAttributes));
                _alignRight.push(xmlChild.has.alignH && xmlChild.att.alignH == "right");
            }
            else {
                trace(localName, " not supported by UIRenderer");
            }
        }
    }
    
    
    override public function drawComponent() : Void{
        var left : Float = 0;
        var right : Float = _attributes.widthH;
        var lastY : Float = 0;
        var image : UIImage = ((_children.length > 0 && Std.is(_children[0], UIImage))) ? cast((_children[0]), UIImage) : null;
        if (image != null) {
            left = image.width + _attributes.paddingH;
        }  //	var childAttributes:Attributes = _attributes.copy(_xml, true);  
        
        for (i in ((image != null) ? 1 : 0)..._children.length){
            var child : DisplayObject = _children[i];
            if (Std.is(child, IComponentUI)) {
                var childAttributes : Attributes = _childAttributes[i];
                childAttributes.x = left;
                childAttributes.width = right - left;
                cast((child), IComponentUI).layout(childAttributes);
                child.y = lastY;
                if (_alignRight[i]) {
                    right = right - child.width;
                    child.x = right;
                }
                else {
                    child.x = left;
                    lastY += child.height + _attributes.paddingV;
                }
            }
        }
        if (image != null) {
            var offset : Float = (image.height - lastY + _attributes.paddingV) / 2;
            if (offset > 0) {
                for (j in 1..._children.length){
                    _children[j].y += offset;
                }
            }
        }
    }
    
    
    override public function destructor() : Void{
        super.destructor();
        for (child in _children){
            if (Std.is(child, IComponentUI)) {
                cast((child), IComponentUI).destructor();
            }
        }
    }
}
