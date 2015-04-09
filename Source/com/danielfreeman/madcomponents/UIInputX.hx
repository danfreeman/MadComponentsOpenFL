package com.danielfreeman.madcomponents;

import openfl.events.FocusEvent;
import openfl.display.Sprite;

class UIInputX extends UIInput implements IComponentUI
{
    public function new(screen:Sprite, xml:MadXML, attributes:Attributes)
    {
    	super(screen, attributes.x, attributes.y, xml.innerHTML, attributes.backgroundColours, attributes.style7 != (xml.has.alt && xml.att.alt == "true"), xml.has.prompt ? xml.att.prompt : "", (xml.has.promptColour) ? UI.toColourValue(xml.att.promptColour) : UIBlueText.GREY, attributes.style7);
    	if (attributes.fillH) {
    		fixwidth = attributes.widthH;
    	};
    	cast((inputField), UIBlueText).password = xml.has.password && xml.att.password == "true";
    }

    override public function layout(attributes:Attributes):Void
    {
    	super.layout(attributes);
    	if (attributes.fillH) {
    		fixwidth = attributes.widthH;
    	};
    }
}
