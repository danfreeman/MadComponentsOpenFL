package com.danielfreeman.madcomponents;



import openfl.display.Sprite;
import openfl.display.DisplayObject;

class UIContainerBaseClass extends MadSprite implements IContainerUI
{
    public var xml(get, never) : MadXML;
    public var pages(get, never) : Array<DisplayObject>;

    
    private var _xml : MadXML;
    
    
    public function new(screen : Sprite, xml : MadXML, attributes : Attributes)
    {
        //super();
        _xml = xml;
        //	_attributes = attributes;
        //	screen.addChild(this);
        super(screen, attributes);
        initialise(xml, attributes);
        drawComponent();
    }
    
    
    override public function layout(attributes : Attributes) : Void{
        super.layout(attributes);
        drawComponent();
    }
    
    
    private function initialise(xml : MadXML, attributes : Attributes) : Void{
        
    }
    
    
    public function drawComponent() : Void{
        
    }
    
    
    private function get_xml() : MadXML{
        return _xml;
    }
    
    
    public function findViewById(id : String, row : Int = -1, group : Int = -1) : DisplayObject{
        return getChildByName(id);
    }
    
    
    public function clear() : Void{
        graphics.clear();
    }
    
    
    private function get_pages() : Array<DisplayObject>{
        return [];
    }
}
