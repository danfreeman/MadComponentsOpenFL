#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_danielfreeman_MadXML
#include <com/danielfreeman/MadXML.h>
#endif
#ifndef INCLUDED_com_danielfreeman__MadXML_AttribAccess
#include <com/danielfreeman/_MadXML/AttribAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman__MadXML_HasAttribAccess
#include <com/danielfreeman/_MadXML/HasAttribAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_Attributes
#include <com/danielfreeman/madcomponents/Attributes.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IComponentUI
#include <com/danielfreeman/madcomponents/IComponentUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IContainerUI
#include <com/danielfreeman/madcomponents/IContainerUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadMasking
#include <com/danielfreeman/madcomponents/MadMasking.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UI
#include <com/danielfreeman/madcomponents/UI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIList
#include <com/danielfreeman/madcomponents/UIList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical
#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void Attributes_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","new",0xb9331e1d,"com.danielfreeman.madcomponents.Attributes.new","com/danielfreeman/madcomponents/Attributes.hx",40,0xda1b56d0)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
{
	HX_STACK_LINE(87)
	this->_style7 = false;
	HX_STACK_LINE(86)
	this->_clickable = HX_CSTRING("");
	HX_STACK_LINE(85)
	this->_hasBorder = false;
	HX_STACK_LINE(84)
	this->_height = (int)-1;
	HX_STACK_LINE(83)
	this->_width = (int)-1;
	HX_STACK_LINE(82)
	this->_colours = Array_obj< int >::__new();
	HX_STACK_LINE(81)
	this->_id = HX_CSTRING("");
	HX_STACK_LINE(80)
	this->_visible = true;
	HX_STACK_LINE(79)
	this->_alignH = HX_CSTRING("left");
	HX_STACK_LINE(78)
	this->_alignV = HX_CSTRING("top");
	HX_STACK_LINE(77)
	this->_colour = (int)10066346;
	HX_STACK_LINE(76)
	this->_paddingH = (int)8;
	HX_STACK_LINE(75)
	this->_paddingV = (int)8;
	HX_STACK_LINE(74)
	this->_scrollBarColour = (int)5592405;
	HX_STACK_LINE(92)
	if (((width < (int)0))){
		HX_STACK_LINE(93)
		width = (int)0;
	}
	HX_STACK_LINE(95)
	if (((height < (int)0))){
		HX_STACK_LINE(96)
		height = (int)0;
	}
	HX_STACK_LINE(98)
	super::__construct(x,y,width,height);
}
;
	return null();
}

//Attributes_obj::~Attributes_obj() { }

Dynamic Attributes_obj::__CreateEmpty() { return  new Attributes_obj; }
hx::ObjectPtr< Attributes_obj > Attributes_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{  hx::ObjectPtr< Attributes_obj > result = new Attributes_obj();
	result->__construct(__o_x,__o_y,__o_width,__o_height);
	return result;}

Dynamic Attributes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Attributes_obj > result = new Attributes_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Attributes_obj::parse( ::com::danielfreeman::MadXML xml){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","parse",0xe6f18730,"com.danielfreeman.madcomponents.Attributes.parse","com/danielfreeman/madcomponents/Attributes.hx",105,0xda1b56d0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_LINE(106)
		if ((xml->has->resolve(HX_CSTRING("style7")))){
			HX_STACK_LINE(107)
			::String _g = xml->att->resolve(HX_CSTRING("style7"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(107)
			bool _g1 = (_g == HX_CSTRING("true"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(107)
			this->_style7 = _g1;
			HX_STACK_LINE(108)
			if ((this->_style7)){
				HX_STACK_LINE(109)
				this->_colour = (int)15724532;
				HX_STACK_LINE(110)
				this->_paddingH = (int)16;
			}
		}
		HX_STACK_LINE(113)
		if ((xml->has->resolve(HX_CSTRING("gapV")))){
			HX_STACK_LINE(114)
			::String _g2 = xml->att->resolve(HX_CSTRING("gapV"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(114)
			Float _g3 = ::Std_obj::parseFloat(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(114)
			this->_paddingV = _g3;
		}
		HX_STACK_LINE(116)
		if ((xml->has->resolve(HX_CSTRING("gapH")))){
			HX_STACK_LINE(117)
			::String _g4 = xml->att->resolve(HX_CSTRING("gapH"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(117)
			Float _g5 = ::Std_obj::parseFloat(_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(117)
			this->_paddingH = _g5;
		}
		HX_STACK_LINE(119)
		if ((xml->has->resolve(HX_CSTRING("width")))){
			HX_STACK_LINE(120)
			::String _g6 = xml->att->resolve(HX_CSTRING("width"));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(120)
			Float _g7 = ::Std_obj::parseFloat(_g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(120)
			this->_width = _g7;
		}
		HX_STACK_LINE(123)
		if ((xml->has->resolve(HX_CSTRING("height")))){
			HX_STACK_LINE(124)
			::String _g8 = xml->att->resolve(HX_CSTRING("height"));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(124)
			Float _g9 = ::Std_obj::parseFloat(_g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(124)
			this->_height = _g9;
		}
		HX_STACK_LINE(127)
		if ((xml->has->resolve(HX_CSTRING("visible")))){
			HX_STACK_LINE(128)
			::String _g10 = xml->att->resolve(HX_CSTRING("visible"));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(128)
			bool _g11 = (_g10 != HX_CSTRING("false"));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(128)
			this->_visible = _g11;
		}
		HX_STACK_LINE(131)
		if ((xml->has->resolve(HX_CSTRING("colour")))){
			HX_STACK_LINE(132)
			::String _g12 = xml->att->resolve(HX_CSTRING("colour"));		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(132)
			int _g13 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g12);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(132)
			this->_colour = _g13;
		}
		HX_STACK_LINE(135)
		if ((xml->has->resolve(HX_CSTRING("scrollBarColour")))){
			HX_STACK_LINE(136)
			::String _g14 = xml->att->resolve(HX_CSTRING("scrollBarColour"));		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(136)
			int _g15 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(136)
			this->_scrollBarColour = _g15;
		}
		HX_STACK_LINE(139)
		if ((xml->has->resolve(HX_CSTRING("background")))){
			HX_STACK_LINE(140)
			::String _g16 = xml->att->resolve(HX_CSTRING("background"));		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(140)
			Array< int > _g17 = ::com::danielfreeman::madcomponents::UI_obj::toColourVector(_g16);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(140)
			this->_colours = _g17;
		}
		HX_STACK_LINE(142)
		if ((xml->has->resolve(HX_CSTRING("clickable")))){
			HX_STACK_LINE(143)
			::String _g18 = xml->att->resolve(HX_CSTRING("clickable"));		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(143)
			this->_clickable = _g18;
		}
		HX_STACK_LINE(145)
		::String _g19;		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(145)
		if ((xml->has->resolve(HX_CSTRING("alignV")))){
			HX_STACK_LINE(145)
			_g19 = xml->att->resolve(HX_CSTRING("alignV"));
		}
		else{
			HX_STACK_LINE(145)
			_g19 = this->_alignV;
		}
		HX_STACK_LINE(145)
		this->_alignV = _g19;
		HX_STACK_LINE(146)
		::String _g20;		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(146)
		if ((xml->has->resolve(HX_CSTRING("alignH")))){
			HX_STACK_LINE(146)
			_g20 = xml->att->resolve(HX_CSTRING("alignH"));
		}
		else{
			HX_STACK_LINE(146)
			_g20 = this->_alignH;
		}
		HX_STACK_LINE(146)
		this->_alignH = _g20;
		HX_STACK_LINE(148)
		if ((xml->has->resolve(HX_CSTRING("size")))){
			HX_STACK_LINE(149)
			::String size = xml->att->resolve(HX_CSTRING("size")).toUpperCase();		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(150)
			::String _g21 = size.substr((int)-1,(int)1);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(150)
			if (((_g21 == HX_CSTRING("C")))){
				HX_STACK_LINE(151)
				this->_alignH = HX_CSTRING("centre");
				HX_STACK_LINE(152)
				this->_alignV = HX_CSTRING("centre");
			}
		}
		HX_STACK_LINE(155)
		::String _g22;		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(155)
		if ((xml->has->resolve(HX_CSTRING("id")))){
			HX_STACK_LINE(155)
			_g22 = xml->att->resolve(HX_CSTRING("id"));
		}
		else{
			HX_STACK_LINE(155)
			_g22 = HX_CSTRING("");
		}
		HX_STACK_LINE(155)
		this->_id = _g22;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Attributes_obj,parse,(void))

::com::danielfreeman::madcomponents::Attributes Attributes_obj::copy( ::com::danielfreeman::MadXML xml,hx::Null< bool >  __o_container){
bool container = __o_container.Default(false);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","copy",0x4c497358,"com.danielfreeman.madcomponents.Attributes.copy","com/danielfreeman/madcomponents/Attributes.hx",161,0xda1b56d0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_ARG(container,"container")
{
		HX_STACK_LINE(162)
		::com::danielfreeman::madcomponents::Attributes result = ::com::danielfreeman::madcomponents::Attributes_obj::__new(this->x,this->y,this->width,this->height);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(163)
		result->_paddingV = this->_paddingV;
		HX_STACK_LINE(164)
		result->_paddingH = this->_paddingH;
		HX_STACK_LINE(165)
		result->_colour = this->_colour;
		HX_STACK_LINE(166)
		result->_scrollBarColour = this->_scrollBarColour;
		HX_STACK_LINE(167)
		if (((bool(!(container)) || bool((this->_alignH == HX_CSTRING("fill")))))){
			HX_STACK_LINE(167)
			result->_alignH = this->_alignH;
		}
		else{
			HX_STACK_LINE(167)
			result->_alignH = HX_CSTRING("left");
		}
		HX_STACK_LINE(168)
		if ((!(container))){
			HX_STACK_LINE(168)
			result->_alignV = this->_alignV;
		}
		else{
			HX_STACK_LINE(168)
			result->_alignV = HX_CSTRING("top");
		}
		HX_STACK_LINE(169)
		result->_hasBorder = this->_hasBorder;
		HX_STACK_LINE(170)
		result->_style7 = this->_style7;
		HX_STACK_LINE(171)
		if (((xml != null()))){
			HX_STACK_LINE(172)
			result->parse(xml);
		}
		HX_STACK_LINE(174)
		return result;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Attributes_obj,copy,return )

Float Attributes_obj::get_paddingV( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","get_paddingV",0x62948411,"com.danielfreeman.madcomponents.Attributes.get_paddingV","com/danielfreeman/madcomponents/Attributes.hx",181,0xda1b56d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(181)
	return this->_paddingV;
}


HX_DEFINE_DYNAMIC_FUNC0(Attributes_obj,get_paddingV,return )

Float Attributes_obj::get_paddingH( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","get_paddingH",0x62948403,"com.danielfreeman.madcomponents.Attributes.get_paddingH","com/danielfreeman/madcomponents/Attributes.hx",188,0xda1b56d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(188)
	return this->_paddingH;
}


HX_DEFINE_DYNAMIC_FUNC0(Attributes_obj,get_paddingH,return )

int Attributes_obj::get_colour( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","get_colour",0xcea0cbf8,"com.danielfreeman.madcomponents.Attributes.get_colour","com/danielfreeman/madcomponents/Attributes.hx",195,0xda1b56d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(195)
	return this->_colour;
}


HX_DEFINE_DYNAMIC_FUNC0(Attributes_obj,get_colour,return )

int Attributes_obj::set_colour( int value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","set_colour",0xd21e6a6c,"com.danielfreeman.madcomponents.Attributes.set_colour","com/danielfreeman/madcomponents/Attributes.hx",201,0xda1b56d0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(202)
	this->_colour = value;
	HX_STACK_LINE(203)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Attributes_obj,set_colour,return )

int Attributes_obj::get_scrollBarColour( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","get_scrollBarColour",0x0922d386,"com.danielfreeman.madcomponents.Attributes.get_scrollBarColour","com/danielfreeman/madcomponents/Attributes.hx",210,0xda1b56d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(210)
	return this->_scrollBarColour;
}


HX_DEFINE_DYNAMIC_FUNC0(Attributes_obj,get_scrollBarColour,return )

Array< int > Attributes_obj::get_backgroundColours( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","get_backgroundColours",0xedb70c2d,"com.danielfreeman.madcomponents.Attributes.get_backgroundColours","com/danielfreeman/madcomponents/Attributes.hx",217,0xda1b56d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(217)
	return this->_colours;
}


HX_DEFINE_DYNAMIC_FUNC0(Attributes_obj,get_backgroundColours,return )

bool Attributes_obj::get_fillH( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","get_fillH",0x1671fa39,"com.danielfreeman.madcomponents.Attributes.get_fillH","com/danielfreeman/madcomponents/Attributes.hx",224,0xda1b56d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(224)
	return (bool((this->_alignH == HX_CSTRING("fill"))) || bool((this->_width > (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(Attributes_obj,get_fillH,return )

bool Attributes_obj::get_fillV( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","get_fillV",0x1671fa47,"com.danielfreeman.madcomponents.Attributes.get_fillV","com/danielfreeman/madcomponents/Attributes.hx",231,0xda1b56d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(231)
	return (bool((this->_alignV == HX_CSTRING("fill"))) || bool((this->_height > (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(Attributes_obj,get_fillV,return )

Float Attributes_obj::get_widthH( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","get_widthH",0x5416932e,"com.danielfreeman.madcomponents.Attributes.get_widthH","com/danielfreeman/madcomponents/Attributes.hx",238,0xda1b56d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(238)
	if (((this->_width > (int)0))){
		HX_STACK_LINE(239)
		return this->_width;
	}
	else{
		HX_STACK_LINE(242)
		return this->width;
	}
	HX_STACK_LINE(238)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Attributes_obj,get_widthH,return )

Float Attributes_obj::get_heightV( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","get_heightV",0x0ee41563,"com.danielfreeman.madcomponents.Attributes.get_heightV","com/danielfreeman/madcomponents/Attributes.hx",250,0xda1b56d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(250)
	if (((this->_height > (int)0))){
		HX_STACK_LINE(251)
		return this->_height;
	}
	else{
		HX_STACK_LINE(254)
		return this->height;
	}
	HX_STACK_LINE(250)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Attributes_obj,get_heightV,return )

bool Attributes_obj::get_visible( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","get_visible",0xb1cdab46,"com.danielfreeman.madcomponents.Attributes.get_visible","com/danielfreeman/madcomponents/Attributes.hx",269,0xda1b56d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(269)
	return this->_visible;
}


HX_DEFINE_DYNAMIC_FUNC0(Attributes_obj,get_visible,return )

::String Attributes_obj::get_textAlign( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","get_textAlign",0xabf976ac,"com.danielfreeman.madcomponents.Attributes.get_textAlign","com/danielfreeman/madcomponents/Attributes.hx",276,0xda1b56d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(276)
	if (((this->_alignH == HX_CSTRING("centre")))){
		HX_STACK_LINE(277)
		return HX_CSTRING("center");
	}
	else{
		HX_STACK_LINE(278)
		if (((this->_alignH == HX_CSTRING("right")))){
			HX_STACK_LINE(279)
			return HX_CSTRING("right");
		}
		else{
			HX_STACK_LINE(281)
			return HX_CSTRING("");
		}
	}
	HX_STACK_LINE(276)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Attributes_obj,get_textAlign,return )

bool Attributes_obj::set_hasBorder( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","set_hasBorder",0xdb8371c6,"com.danielfreeman.madcomponents.Attributes.set_hasBorder","com/danielfreeman/madcomponents/Attributes.hx",284,0xda1b56d0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(285)
	this->_hasBorder = value;
	HX_STACK_LINE(286)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Attributes_obj,set_hasBorder,return )

bool Attributes_obj::get_hasBorder( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","get_hasBorder",0x967d8fba,"com.danielfreeman.madcomponents.Attributes.get_hasBorder","com/danielfreeman/madcomponents/Attributes.hx",291,0xda1b56d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(291)
	return this->_hasBorder;
}


HX_DEFINE_DYNAMIC_FUNC0(Attributes_obj,get_hasBorder,return )

bool Attributes_obj::get_style7( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","get_style7",0x1dece992,"com.danielfreeman.madcomponents.Attributes.get_style7","com/danielfreeman/madcomponents/Attributes.hx",296,0xda1b56d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(296)
	return this->_style7;
}


HX_DEFINE_DYNAMIC_FUNC0(Attributes_obj,get_style7,return )

bool Attributes_obj::set_style7( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","set_style7",0x216a8806,"com.danielfreeman.madcomponents.Attributes.set_style7","com/danielfreeman/madcomponents/Attributes.hx",300,0xda1b56d0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(301)
	this->_style7 = value;
	HX_STACK_LINE(302)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Attributes_obj,set_style7,return )

Void Attributes_obj::position( ::openfl::display::DisplayObject item,hx::Null< bool >  __o_inhibitV){
bool inhibitV = __o_inhibitV.Default(false);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","position",0x95f765cc,"com.danielfreeman.madcomponents.Attributes.position","com/danielfreeman/madcomponents/Attributes.hx",308,0xda1b56d0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_ARG(inhibitV,"inhibitV")
{
		struct _Function_1_1{
			inline static bool Block( ::openfl::display::DisplayObject &item){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/Attributes.hx",309,0xda1b56d0)
				{
					HX_STACK_LINE(309)
					::String _g = item->get_name();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(309)
					return (_g != HX_CSTRING("+"));
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( ::openfl::display::DisplayObject &item){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/Attributes.hx",309,0xda1b56d0)
				{
					HX_STACK_LINE(309)
					::String _g1 = item->get_name();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(309)
					return (_g1 != HX_CSTRING("-"));
				}
				return null();
			}
		};
		HX_STACK_LINE(309)
		if (((  (((  (((this->_id != HX_CSTRING("")))) ? bool(_Function_1_1::Block(item)) : bool(false) ))) ? bool(_Function_1_2::Block(item)) : bool(false) ))){
			HX_STACK_LINE(310)
			item->set_name(this->_id);
		}
		HX_STACK_LINE(312)
		{
			HX_STACK_LINE(312)
			::String _g = this->_alignH;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(312)
			::String _switch_1 = (_g);
			if (  ( _switch_1==HX_CSTRING("fill")) ||  ( _switch_1==HX_CSTRING("left"))){
				HX_STACK_LINE(314)
				item->set_x(this->x);
			}
			else if (  ( _switch_1==HX_CSTRING("right"))){
				HX_STACK_LINE(315)
				Float _g2 = item->get_width();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(315)
				Float _g3 = ((this->x + this->width) - _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(315)
				item->set_x(_g3);
			}
			else if (  ( _switch_1==HX_CSTRING("centre"))){
				HX_STACK_LINE(316)
				Float _g4 = item->get_width();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(316)
				Float _g5 = (this->width - _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(316)
				Float _g6 = (Float(_g5) / Float((int)2));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(316)
				Float _g7 = (this->x + _g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(316)
				item->set_x(_g7);
			}
		}
		HX_STACK_LINE(318)
		if ((inhibitV)){
			HX_STACK_LINE(319)
			item->set_y(this->y);
		}
		else{
			HX_STACK_LINE(321)
			if ((!(::Std_obj::is(item,hx::ClassOf< ::com::danielfreeman::madcomponents::UIList >())))){
				HX_STACK_LINE(322)
				::String _g = this->_alignV;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(322)
				::String _switch_2 = (_g);
				if (  ( _switch_2==HX_CSTRING("fill")) ||  ( _switch_2==HX_CSTRING("top"))){
					HX_STACK_LINE(324)
					item->set_y(this->y);
				}
				else if (  ( _switch_2==HX_CSTRING("bottom"))){
					HX_STACK_LINE(325)
					Float _g8 = item->get_height();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(325)
					Float _g9 = ((this->y + this->height) - _g8);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(325)
					item->set_y(_g9);
				}
				else if (  ( _switch_2==HX_CSTRING("centre"))){
					HX_STACK_LINE(326)
					Float _g10 = item->get_height();		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(326)
					Float _g11 = (this->height - _g10);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(326)
					Float _g12 = (Float(_g11) / Float((int)2));		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(326)
					Float _g13 = (this->y + _g12);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(326)
					item->set_y(_g13);
				}
			}
		}
		HX_STACK_LINE(329)
		if (((  ((::Std_obj::is(item,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))) ? bool((this->_clickable != HX_CSTRING(""))) : bool(false) ))){
			HX_STACK_LINE(330)
			bool _g14 = (hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(item))->set_clickable((this->_clickable == HX_CSTRING("true")));		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(330)
			bool _g15 = (hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(item))->set_mouseChildren(_g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(330)
			(hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(item))->set_mouseEnabled(_g15);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Attributes_obj,position,(void))

Void Attributes_obj::initPosition( ::openfl::display::DisplayObject item){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.Attributes","initPosition",0x7ffaba7c,"com.danielfreeman.madcomponents.Attributes.initPosition","com/danielfreeman/madcomponents/Attributes.hx",335,0xda1b56d0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		struct _Function_1_1{
			inline static bool Block( ::openfl::display::DisplayObject &item){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/Attributes.hx",336,0xda1b56d0)
				{
					HX_STACK_LINE(336)
					::String _g = item->get_name();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(336)
					return (_g != HX_CSTRING("+"));
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( ::openfl::display::DisplayObject &item){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/Attributes.hx",336,0xda1b56d0)
				{
					HX_STACK_LINE(336)
					::String _g1 = item->get_name();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(336)
					return (_g1 != HX_CSTRING("-"));
				}
				return null();
			}
		};
		HX_STACK_LINE(336)
		if (((  (((  (((this->_id != HX_CSTRING("")))) ? bool(_Function_1_1::Block(item)) : bool(false) ))) ? bool(_Function_1_2::Block(item)) : bool(false) ))){
			HX_STACK_LINE(337)
			item->set_name(this->_id);
		}
		HX_STACK_LINE(338)
		item->set_y(this->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Attributes_obj,initPosition,(void))

int Attributes_obj::TRANSPARENT;

::String Attributes_obj::FILL;

::String Attributes_obj::LEFT;

::String Attributes_obj::RIGHT;

::String Attributes_obj::CENTRE;

::String Attributes_obj::TOP;

::String Attributes_obj::BOTTOM;

Float Attributes_obj::GAP;

Float Attributes_obj::GAP7;

int Attributes_obj::COLOUR;

int Attributes_obj::COLOUR7;

int Attributes_obj::SCROLLBAR_COLOUR;

::String Attributes_obj::ALIGN_V;

::String Attributes_obj::ALIGN_H;


Attributes_obj::Attributes_obj()
{
}

void Attributes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Attributes);
	HX_MARK_MEMBER_NAME(_scrollBarColour,"_scrollBarColour");
	HX_MARK_MEMBER_NAME(_paddingV,"_paddingV");
	HX_MARK_MEMBER_NAME(_paddingH,"_paddingH");
	HX_MARK_MEMBER_NAME(_colour,"_colour");
	HX_MARK_MEMBER_NAME(_alignV,"_alignV");
	HX_MARK_MEMBER_NAME(_alignH,"_alignH");
	HX_MARK_MEMBER_NAME(_visible,"_visible");
	HX_MARK_MEMBER_NAME(_id,"_id");
	HX_MARK_MEMBER_NAME(_colours,"_colours");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_hasBorder,"_hasBorder");
	HX_MARK_MEMBER_NAME(_clickable,"_clickable");
	HX_MARK_MEMBER_NAME(_style7,"_style7");
	HX_MARK_END_CLASS();
}

void Attributes_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scrollBarColour,"_scrollBarColour");
	HX_VISIT_MEMBER_NAME(_paddingV,"_paddingV");
	HX_VISIT_MEMBER_NAME(_paddingH,"_paddingH");
	HX_VISIT_MEMBER_NAME(_colour,"_colour");
	HX_VISIT_MEMBER_NAME(_alignV,"_alignV");
	HX_VISIT_MEMBER_NAME(_alignH,"_alignH");
	HX_VISIT_MEMBER_NAME(_visible,"_visible");
	HX_VISIT_MEMBER_NAME(_id,"_id");
	HX_VISIT_MEMBER_NAME(_colours,"_colours");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_hasBorder,"_hasBorder");
	HX_VISIT_MEMBER_NAME(_clickable,"_clickable");
	HX_VISIT_MEMBER_NAME(_style7,"_style7");
}

Dynamic Attributes_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { return _id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fillH") ) { return get_fillH(); }
		if (HX_FIELD_EQ(inName,"fillV") ) { return get_fillV(); }
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { return get_colour(); }
		if (HX_FIELD_EQ(inName,"widthH") ) { return get_widthH(); }
		if (HX_FIELD_EQ(inName,"style7") ) { return get_style7(); }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"heightV") ) { return get_heightV(); }
		if (HX_FIELD_EQ(inName,"visible") ) { return get_visible(); }
		if (HX_FIELD_EQ(inName,"_colour") ) { return _colour; }
		if (HX_FIELD_EQ(inName,"_alignV") ) { return _alignV; }
		if (HX_FIELD_EQ(inName,"_alignH") ) { return _alignH; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"_style7") ) { return _style7; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"paddingV") ) { return get_paddingV(); }
		if (HX_FIELD_EQ(inName,"paddingH") ) { return get_paddingH(); }
		if (HX_FIELD_EQ(inName,"_visible") ) { return _visible; }
		if (HX_FIELD_EQ(inName,"_colours") ) { return _colours; }
		if (HX_FIELD_EQ(inName,"position") ) { return position_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textAlign") ) { return get_textAlign(); }
		if (HX_FIELD_EQ(inName,"hasBorder") ) { return get_hasBorder(); }
		if (HX_FIELD_EQ(inName,"_paddingV") ) { return _paddingV; }
		if (HX_FIELD_EQ(inName,"_paddingH") ) { return _paddingH; }
		if (HX_FIELD_EQ(inName,"get_fillH") ) { return get_fillH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fillV") ) { return get_fillV_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_hasBorder") ) { return _hasBorder; }
		if (HX_FIELD_EQ(inName,"_clickable") ) { return _clickable; }
		if (HX_FIELD_EQ(inName,"get_colour") ) { return get_colour_dyn(); }
		if (HX_FIELD_EQ(inName,"set_colour") ) { return set_colour_dyn(); }
		if (HX_FIELD_EQ(inName,"get_widthH") ) { return get_widthH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_style7") ) { return get_style7_dyn(); }
		if (HX_FIELD_EQ(inName,"set_style7") ) { return set_style7_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TRANSPARENT") ) { return TRANSPARENT; }
		if (HX_FIELD_EQ(inName,"get_heightV") ) { return get_heightV_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_paddingV") ) { return get_paddingV_dyn(); }
		if (HX_FIELD_EQ(inName,"get_paddingH") ) { return get_paddingH_dyn(); }
		if (HX_FIELD_EQ(inName,"initPosition") ) { return initPosition_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_textAlign") ) { return get_textAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"set_hasBorder") ) { return set_hasBorder_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hasBorder") ) { return get_hasBorder_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"scrollBarColour") ) { return get_scrollBarColour(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scrollBarColour") ) { return _scrollBarColour; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"backgroundColours") ) { return get_backgroundColours(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_scrollBarColour") ) { return get_scrollBarColour_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_backgroundColours") ) { return get_backgroundColours_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Attributes_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { _id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { return set_colour(inValue); }
		if (HX_FIELD_EQ(inName,"style7") ) { return set_style7(inValue); }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_colour") ) { _colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alignV") ) { _alignV=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alignH") ) { _alignH=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_style7") ) { _style7=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_visible") ) { _visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colours") ) { _colours=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasBorder") ) { return set_hasBorder(inValue); }
		if (HX_FIELD_EQ(inName,"_paddingV") ) { _paddingV=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paddingH") ) { _paddingH=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_hasBorder") ) { _hasBorder=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clickable") ) { _clickable=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TRANSPARENT") ) { TRANSPARENT=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scrollBarColour") ) { _scrollBarColour=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Attributes_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("paddingV"));
	outFields->push(HX_CSTRING("paddingH"));
	outFields->push(HX_CSTRING("colour"));
	outFields->push(HX_CSTRING("scrollBarColour"));
	outFields->push(HX_CSTRING("backgroundColours"));
	outFields->push(HX_CSTRING("fillH"));
	outFields->push(HX_CSTRING("fillV"));
	outFields->push(HX_CSTRING("widthH"));
	outFields->push(HX_CSTRING("heightV"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("textAlign"));
	outFields->push(HX_CSTRING("hasBorder"));
	outFields->push(HX_CSTRING("style7"));
	outFields->push(HX_CSTRING("_scrollBarColour"));
	outFields->push(HX_CSTRING("_paddingV"));
	outFields->push(HX_CSTRING("_paddingH"));
	outFields->push(HX_CSTRING("_colour"));
	outFields->push(HX_CSTRING("_alignV"));
	outFields->push(HX_CSTRING("_alignH"));
	outFields->push(HX_CSTRING("_visible"));
	outFields->push(HX_CSTRING("_id"));
	outFields->push(HX_CSTRING("_colours"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_hasBorder"));
	outFields->push(HX_CSTRING("_clickable"));
	outFields->push(HX_CSTRING("_style7"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TRANSPARENT"),
	HX_CSTRING("FILL"),
	HX_CSTRING("LEFT"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("CENTRE"),
	HX_CSTRING("TOP"),
	HX_CSTRING("BOTTOM"),
	HX_CSTRING("GAP"),
	HX_CSTRING("GAP7"),
	HX_CSTRING("COLOUR"),
	HX_CSTRING("COLOUR7"),
	HX_CSTRING("SCROLLBAR_COLOUR"),
	HX_CSTRING("ALIGN_V"),
	HX_CSTRING("ALIGN_H"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Attributes_obj,_scrollBarColour),HX_CSTRING("_scrollBarColour")},
	{hx::fsFloat,(int)offsetof(Attributes_obj,_paddingV),HX_CSTRING("_paddingV")},
	{hx::fsFloat,(int)offsetof(Attributes_obj,_paddingH),HX_CSTRING("_paddingH")},
	{hx::fsInt,(int)offsetof(Attributes_obj,_colour),HX_CSTRING("_colour")},
	{hx::fsString,(int)offsetof(Attributes_obj,_alignV),HX_CSTRING("_alignV")},
	{hx::fsString,(int)offsetof(Attributes_obj,_alignH),HX_CSTRING("_alignH")},
	{hx::fsBool,(int)offsetof(Attributes_obj,_visible),HX_CSTRING("_visible")},
	{hx::fsString,(int)offsetof(Attributes_obj,_id),HX_CSTRING("_id")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Attributes_obj,_colours),HX_CSTRING("_colours")},
	{hx::fsFloat,(int)offsetof(Attributes_obj,_width),HX_CSTRING("_width")},
	{hx::fsFloat,(int)offsetof(Attributes_obj,_height),HX_CSTRING("_height")},
	{hx::fsBool,(int)offsetof(Attributes_obj,_hasBorder),HX_CSTRING("_hasBorder")},
	{hx::fsString,(int)offsetof(Attributes_obj,_clickable),HX_CSTRING("_clickable")},
	{hx::fsBool,(int)offsetof(Attributes_obj,_style7),HX_CSTRING("_style7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_scrollBarColour"),
	HX_CSTRING("_paddingV"),
	HX_CSTRING("_paddingH"),
	HX_CSTRING("_colour"),
	HX_CSTRING("_alignV"),
	HX_CSTRING("_alignH"),
	HX_CSTRING("_visible"),
	HX_CSTRING("_id"),
	HX_CSTRING("_colours"),
	HX_CSTRING("_width"),
	HX_CSTRING("_height"),
	HX_CSTRING("_hasBorder"),
	HX_CSTRING("_clickable"),
	HX_CSTRING("_style7"),
	HX_CSTRING("parse"),
	HX_CSTRING("copy"),
	HX_CSTRING("get_paddingV"),
	HX_CSTRING("get_paddingH"),
	HX_CSTRING("get_colour"),
	HX_CSTRING("set_colour"),
	HX_CSTRING("get_scrollBarColour"),
	HX_CSTRING("get_backgroundColours"),
	HX_CSTRING("get_fillH"),
	HX_CSTRING("get_fillV"),
	HX_CSTRING("get_widthH"),
	HX_CSTRING("get_heightV"),
	HX_CSTRING("get_visible"),
	HX_CSTRING("get_textAlign"),
	HX_CSTRING("set_hasBorder"),
	HX_CSTRING("get_hasBorder"),
	HX_CSTRING("get_style7"),
	HX_CSTRING("set_style7"),
	HX_CSTRING("position"),
	HX_CSTRING("initPosition"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Attributes_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Attributes_obj::TRANSPARENT,"TRANSPARENT");
	HX_MARK_MEMBER_NAME(Attributes_obj::FILL,"FILL");
	HX_MARK_MEMBER_NAME(Attributes_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Attributes_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(Attributes_obj::CENTRE,"CENTRE");
	HX_MARK_MEMBER_NAME(Attributes_obj::TOP,"TOP");
	HX_MARK_MEMBER_NAME(Attributes_obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(Attributes_obj::GAP,"GAP");
	HX_MARK_MEMBER_NAME(Attributes_obj::GAP7,"GAP7");
	HX_MARK_MEMBER_NAME(Attributes_obj::COLOUR,"COLOUR");
	HX_MARK_MEMBER_NAME(Attributes_obj::COLOUR7,"COLOUR7");
	HX_MARK_MEMBER_NAME(Attributes_obj::SCROLLBAR_COLOUR,"SCROLLBAR_COLOUR");
	HX_MARK_MEMBER_NAME(Attributes_obj::ALIGN_V,"ALIGN_V");
	HX_MARK_MEMBER_NAME(Attributes_obj::ALIGN_H,"ALIGN_H");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Attributes_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Attributes_obj::TRANSPARENT,"TRANSPARENT");
	HX_VISIT_MEMBER_NAME(Attributes_obj::FILL,"FILL");
	HX_VISIT_MEMBER_NAME(Attributes_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(Attributes_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(Attributes_obj::CENTRE,"CENTRE");
	HX_VISIT_MEMBER_NAME(Attributes_obj::TOP,"TOP");
	HX_VISIT_MEMBER_NAME(Attributes_obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(Attributes_obj::GAP,"GAP");
	HX_VISIT_MEMBER_NAME(Attributes_obj::GAP7,"GAP7");
	HX_VISIT_MEMBER_NAME(Attributes_obj::COLOUR,"COLOUR");
	HX_VISIT_MEMBER_NAME(Attributes_obj::COLOUR7,"COLOUR7");
	HX_VISIT_MEMBER_NAME(Attributes_obj::SCROLLBAR_COLOUR,"SCROLLBAR_COLOUR");
	HX_VISIT_MEMBER_NAME(Attributes_obj::ALIGN_V,"ALIGN_V");
	HX_VISIT_MEMBER_NAME(Attributes_obj::ALIGN_H,"ALIGN_H");
};

#endif

Class Attributes_obj::__mClass;

void Attributes_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.Attributes"), hx::TCanCast< Attributes_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Attributes_obj::__boot()
{
	TRANSPARENT= (int)-1;
	FILL= HX_CSTRING("fill");
	LEFT= HX_CSTRING("left");
	RIGHT= HX_CSTRING("right");
	CENTRE= HX_CSTRING("centre");
	TOP= HX_CSTRING("top");
	BOTTOM= HX_CSTRING("bottom");
	GAP= (int)8;
	GAP7= (int)16;
	COLOUR= (int)10066346;
	COLOUR7= (int)15724532;
	SCROLLBAR_COLOUR= (int)5592405;
	ALIGN_V= HX_CSTRING("top");
	ALIGN_H= HX_CSTRING("left");
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
