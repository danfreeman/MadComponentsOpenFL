package com.danielfreeman.extendedmadness;

/**
	 * @author danielfreeman
	 */


import com.danielfreeman.madcomponents.*;
import openfl.text.TextFormat;
import openfl.display.Sprite;
import openfl.text.TextFieldAutoSize;


class UICell extends UILabel
{
    public var defaultColour(never, set) : Int;

    
    private var FORMAT : TextFormat = new TextFormat("Arial", 13, 0x000066, true);
    
    public function new(screen : Sprite, xx : Int, yy : Int, txt : String = "", wdth : Float = 0, format : TextFormat = null, multiLine : Bool = false, wordWrap : Bool = false, borderColour : Int = 0x666666, border : Bool = true)
    {
        if (format == null) {
            format = FORMAT;
            format.leftMargin = 4.0;
        }
        super(screen, xx, yy, txt, format);
        this.border = border;
        borderColor = borderColour;
        multiline = multiLine;
        this.wordWrap = wordWrap;
        setTextFormat(format);
        defaultTextFormat = format;
        if (wdth > 0) {
            fixwidth = wdth;
        }
    }
    
    
    override private function set_fixwidth(value : Float) : Float{
        autoSize = TextFieldAutoSize.NONE;
        super.fixwidth = value;
        return value;
    }
    
    
    private function set_defaultColour(value : Int) : Int{
        background = (value != -1);
        backgroundColor = value;
        return value;
    }
}

