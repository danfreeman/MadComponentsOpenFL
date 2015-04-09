package com.danielfreeman.madcomponents;


import openfl.text.TextFieldAutoSize;
import openfl.text.AntiAliasType;
import openfl.text.TextFormatAlign;
import com.danielfreeman.madcomponents.UILabel;

import openfl.display.Sprite;
import openfl.text.TextFormat;

/**
	 * @author danielfreeman
	 */
class UILabelX extends UILabel implements IComponentUI
{
	public var attributes(get , never):Attributes;
	public var clickable(get , set):Bool;
	public var includeInLayout(get , set):Bool;
//	public var text(get, set):String;
    
    private var _autoSize : Bool;
    private var _attributes : Attributes;
    private var _xml : MadXML;
    private var _clickable : Bool = true;
    private var _includeInLayout : Bool = true;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes) {
        super(screen, attributes.x, attributes.y, xml.innerHTML);
        embedFonts = xml.has.embedFonts && xml.att.embedFonts == "true";
        if (xml.has.antiAliasType) {
            antiAliasType = cast(xml.att.antiAliasType, AntiAliasType);
        }
        assignToLabel(xml);
        if (xml.has.height) {
            fixheight = Std.parseFloat(xml.att.height);
        }
        if (attributes.fillH || xml.has.height) {
            fixwidth = attributes.widthH;
            var textAlign : String = attributes.textAlign;
            if (textAlign != "") {
                var format : TextFormat = new TextFormat();
            //  format.align = cast(textAlign, TextFormatAlign);
				format.align = textAlign;
                defaultTextFormat = format;
            }
        }
        _autoSize = !xml.has.autosize || xml.att.autosize != "false";
        if (_autoSize) {
            autoSize = TextFieldAutoSize.LEFT;
        }  //	border = true;  
    }
    
    
    private function assignToLabel(xml : MadXML) : Void{
        if (xml.hasChildren) {
            var xmlString : String = xml.toXMLString();
            var htmlText : String = xmlString.substring(xmlString.indexOf(">") + 1, xmlString.lastIndexOf("<"));
            xmlText = htmlText;
        }
    }
    
    
    public function layout(attributes : Attributes) : Void{
        _attributes = attributes;
        if (attributes.fillV) {
            fixheight = attributes.heightV;
        }
        if (attributes.fillH) {
            fixwidth = attributes.widthH;
        }
        if (_autoSize) {
            autoSize = TextFieldAutoSize.LEFT;
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
	
	
//	public function get_text():String {
//		return super.text;
//	}
	
	
//	public function set_text(value:String):String {
//		super.text = value;
//		return value;
//	}
	
    
    private function get_attributes() : Attributes{
        return _attributes;
    }
    
    
    public function destructor() : Void{
        
    }
}

