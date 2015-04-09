package com.danielfreeman.madcomponents;


import com.danielfreeman.madcomponents.UIButton;

import openfl.display.Sprite;

/**
* @author danielfreeman
 */
class UIButtonX extends UIButton implements IComponentUI
{
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        super(screen, attributes.x, attributes.y, xml.toXMLString(), attributes.colour, attributes.backgroundColours, xml.has.alt && xml.att.alt == "true", attributes.style7);
        _attributes = attributes;
        
//        if (xml.has.skin) {
//            skin = xml.att.skin;
//        }
        
        if (attributes.fillH) {
            fixwidth = attributes.widthH;
        }
        if (attributes.fillV) {
            skinHeight = attributes.heightV;
        }
        
        if (xml.has.curve) {
            curve = Std.parseFloat(xml.att.curve);
        }
        
		if (xml.has.goTo) {
        	setGoTo(xml.att.goTo, xml.has.transition ? xml.att.transition : "");
		}
    }
    
    
    override public function layout(attributes : Attributes) : Void{
        super.layout(attributes);
        if (attributes.fillV) {
            skinHeight = attributes.heightV;
        }
        if (attributes.fillH) {
            fixwidth = attributes.widthH;
        }
    }
}

