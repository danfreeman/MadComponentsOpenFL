#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_danielfreeman_MadXML
#include <com/danielfreeman/MadXML.h>
#endif
#ifndef INCLUDED_com_danielfreeman_MadXMLList
#include <com/danielfreeman/MadXMLList.h>
#endif
#ifndef INCLUDED_com_danielfreeman__MadXML_AttribAccess
#include <com/danielfreeman/_MadXML/AttribAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman__MadXML_HasAttribAccess
#include <com/danielfreeman/_MadXML/HasAttribAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman__MadXML_HasNodeAccess
#include <com/danielfreeman/_MadXML/HasNodeAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman__MadXML_NodeAccess
#include <com/danielfreeman/_MadXML/NodeAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman__MadXML_NodeListAccess
#include <com/danielfreeman/_MadXML/NodeListAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UICell
#include <com/danielfreeman/extendedmadness/UICell.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UISimpleDataGrid
#include <com/danielfreeman/extendedmadness/UISimpleDataGrid.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIe
#include <com/danielfreeman/extendedmadness/UIe.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_Attributes
#include <com/danielfreeman/madcomponents/Attributes.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IComponentUI
#include <com/danielfreeman/madcomponents/IComponentUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UI
#include <com/danielfreeman/madcomponents/UI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void UISimpleDataGrid_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","new",0x8f2b4394,"com.danielfreeman.extendedmadness.UISimpleDataGrid.new","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",64,0xc57acc79)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(125)
	this->_headerLines = false;
	HX_STACK_LINE(122)
	this->_newData = false;
	HX_STACK_LINE(121)
	this->_fits = false;
	HX_STACK_LINE(119)
	this->_fastLayout = false;
	HX_STACK_LINE(117)
	this->_recycle = null();
	HX_STACK_LINE(114)
	this->_title = null();
	HX_STACK_LINE(113)
	this->_titleBarColour = (int)10066346;
	HX_STACK_LINE(112)
	this->_titleStyle = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)14,(int)16777215,true,null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(111)
	this->_headerStyle = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Arial"),13.0,(int)16777215,false,null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(110)
	this->_dataStyle = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Arial"),13.0,(int)3355443,false,null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(109)
	this->_hasHeader = false;
	HX_STACK_LINE(108)
	this->_wordWrap = false;
	HX_STACK_LINE(107)
	this->_multiLine = false;
	HX_STACK_LINE(106)
	this->_columnWidths = null();
	HX_STACK_LINE(105)
	this->_compactTable = false;
	HX_STACK_LINE(103)
	this->_colours = ::com::danielfreeman::extendedmadness::UISimpleDataGrid_obj::DEFAULT_COLOURS;
	HX_STACK_LINE(101)
	this->_data = Dynamic( Array_obj<Dynamic>::__new().Add(Dynamic( Array_obj<Dynamic>::__new())));
	HX_STACK_LINE(98)
	this->_theWidths = null();
	HX_STACK_LINE(97)
	this->_cellWidths = null();
	HX_STACK_LINE(95)
	this->_last = (int)0;
	HX_STACK_LINE(94)
	this->_table = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(130)
	super::__construct(screen,attributes);
	HX_STACK_LINE(131)
	this->set_x(attributes->x);
	HX_STACK_LINE(132)
	this->set_y(attributes->y);
	HX_STACK_LINE(134)
	bool _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(134)
	if ((!((!(xml->has->resolve(HX_CSTRING("lines"))))))){
		HX_STACK_LINE(134)
		::String _g = xml->att->resolve(HX_CSTRING("lines"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(134)
		_g1 = (_g == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(134)
		_g1 = true;
	}
	HX_STACK_LINE(134)
	bool saveBorder = this->_border = _g1;		HX_STACK_VAR(saveBorder,"saveBorder");
	HX_STACK_LINE(135)
	bool _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(135)
	if ((xml->has->resolve(HX_CSTRING("headerLines")))){
		HX_STACK_LINE(135)
		::String _g2 = xml->att->resolve(HX_CSTRING("headerLines"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(135)
		_g3 = (_g2 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(135)
		_g3 = false;
	}
	HX_STACK_LINE(135)
	this->_headerLines = _g3;
	HX_STACK_LINE(136)
	this->_tableWidth = attributes->width;
	HX_STACK_LINE(137)
	this->_leftMargin = 4.0;
	HX_STACK_LINE(139)
	int _g4 = attributes->get_colour();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(139)
	this->_borderColour = _g4;
	HX_STACK_LINE(141)
	if ((xml->hasNode->resolve(HX_CSTRING("widths")))){
		HX_STACK_LINE(142)
		Array< ::String > _g5 = xml->node->resolve(HX_CSTRING("widths"))->toString().split(HX_CSTRING(","));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(142)
		this->_cellWidths = _g5;
	}
	HX_STACK_LINE(144)
	if ((xml->has->resolve(HX_CSTRING("widths")))){
		HX_STACK_LINE(145)
		Array< ::String > _g6 = xml->att->resolve(HX_CSTRING("widths")).split(HX_CSTRING(","));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(145)
		this->_theWidths = _g6;
	}
	HX_STACK_LINE(147)
	if ((xml->hasNode->resolve(HX_CSTRING("font")))){
		HX_STACK_LINE(148)
		::com::danielfreeman::MadXML _g7 = xml->node->resolve(HX_CSTRING("font"));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(148)
		::openfl::text::TextFormat _g8 = ::com::danielfreeman::extendedmadness::UIe_obj::toTextFormat(_g7,this->_dataStyle);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(148)
		this->_dataStyle = _g8;
	}
	HX_STACK_LINE(150)
	if ((xml->hasNode->resolve(HX_CSTRING("headerFont")))){
		HX_STACK_LINE(151)
		::com::danielfreeman::MadXML _g9 = xml->node->resolve(HX_CSTRING("headerFont"));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(151)
		::openfl::text::TextFormat _g10 = ::com::danielfreeman::extendedmadness::UIe_obj::toTextFormat(_g9,this->_headerStyle);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(151)
		this->_headerStyle = _g10;
	}
	HX_STACK_LINE(153)
	if ((xml->hasNode->resolve(HX_CSTRING("titleFont")))){
		HX_STACK_LINE(154)
		::com::danielfreeman::MadXML _g11 = xml->node->resolve(HX_CSTRING("titleFont"));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(154)
		::openfl::text::TextFormat _g12 = ::com::danielfreeman::extendedmadness::UIe_obj::toTextFormat(_g11,this->_titleStyle);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(154)
		this->_titleStyle = _g12;
	}
	struct _Function_1_1{
		inline static bool Block( ::com::danielfreeman::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",156,0xc57acc79)
			{
				HX_STACK_LINE(156)
				::String _g13 = xml->att->resolve(HX_CSTRING("recycle"));		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(156)
				return (_g13 == HX_CSTRING("shared"));
			}
			return null();
		}
	};
	HX_STACK_LINE(156)
	if (((  (((  ((xml->has->resolve(HX_CSTRING("recycle")))) ? bool(_Function_1_1::Block(xml)) : bool(false) ))) ? bool((this->_recycle == null())) : bool(false) ))){
		HX_STACK_LINE(157)
		this->_recycle = ::com::danielfreeman::extendedmadness::UISimpleDataGrid_obj::_sharedRecycle;
	}
	struct _Function_1_2{
		inline static bool Block( ::com::danielfreeman::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",159,0xc57acc79)
			{
				HX_STACK_LINE(159)
				::String _g14 = xml->att->resolve(HX_CSTRING("recycle"));		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(159)
				return (_g14 == HX_CSTRING("true"));
			}
			return null();
		}
	};
	HX_STACK_LINE(159)
	if (((  (((  ((xml->has->resolve(HX_CSTRING("recycle")))) ? bool(_Function_1_2::Block(xml)) : bool(false) ))) ? bool((this->_recycle == null())) : bool(false) ))){
		HX_STACK_LINE(160)
		Array< ::Dynamic > _g15 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(160)
		this->_recycle = _g15;
	}
	HX_STACK_LINE(163)
	this->customWidths();
	HX_STACK_LINE(164)
	bool _g16 = !(xml->has->resolve(HX_CSTRING("widths")));		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(164)
	this->_compactTable = _g16;
	HX_STACK_LINE(172)
	Array< ::String > _g17 = this->extractHeader(xml);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(172)
	this->_headerText = _g17;
	HX_STACK_LINE(173)
	int _g19;		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(173)
	if (((attributes->get_backgroundColours()->length > (int)0))){
		HX_STACK_LINE(173)
		Array< int > _g18 = attributes->get_backgroundColours();		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(173)
		_g19 = _g18->__get((int)0);
	}
	else{
		HX_STACK_LINE(173)
		_g19 = (int)10066346;
	}
	HX_STACK_LINE(173)
	this->_headerColour = _g19;
	HX_STACK_LINE(174)
	this->_titleBarColour = this->_headerColour;
	HX_STACK_LINE(175)
	if ((xml->has->resolve(HX_CSTRING("titleBarColour")))){
		HX_STACK_LINE(176)
		::String _g20 = xml->att->resolve(HX_CSTRING("titleBarColour"));		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(176)
		int _g21 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g20);		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(176)
		this->_titleBarColour = _g21;
	}
	HX_STACK_LINE(178)
	if ((xml->hasNode->resolve(HX_CSTRING("title")))){
		HX_STACK_LINE(179)
		::com::danielfreeman::extendedmadness::UICell _g22 = ::com::danielfreeman::extendedmadness::UICell_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)0,(int)0,HX_CSTRING(" "),(int)0,this->_titleStyle,false,false,this->_titleBarColour,null());		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(179)
		this->_title = _g22;
		HX_STACK_LINE(180)
		::String _g23 = xml->node->resolve(HX_CSTRING("title"))->toString();		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(180)
		this->_title->set_xmlText(_g23);
		HX_STACK_LINE(181)
		this->_title->set_fixwidth(attributes->width);
		HX_STACK_LINE(182)
		this->_title->set_defaultColour(this->_titleBarColour);
		HX_STACK_LINE(183)
		Float _g24 = this->_title->get_height();		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(183)
		this->_last = _g24;
		HX_STACK_LINE(184)
		this->_title->set_border(false);
		HX_STACK_LINE(185)
		this->_title->set_borderColor(this->_borderColour);
	}
	HX_STACK_LINE(187)
	if (((this->_headerText != null()))){
		HX_STACK_LINE(188)
		this->_hasHeader = true;
		HX_STACK_LINE(189)
		this->_border = this->_headerLines;
		HX_STACK_LINE(190)
		this->makeTable(Dynamic( Array_obj<Dynamic>::__new().Add(this->_headerText)),this->_headerStyle);
	}
	HX_STACK_LINE(192)
	if (((attributes->get_backgroundColours()->length > (int)1))){
		HX_STACK_LINE(193)
		this->_colours = Array_obj< int >::__new();
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			int _g11 = (int)1;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(194)
			int _g = attributes->get_backgroundColours()->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(194)
			while((true)){
				HX_STACK_LINE(194)
				if ((!(((_g11 < _g))))){
					HX_STACK_LINE(194)
					break;
				}
				HX_STACK_LINE(194)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(195)
				Array< int > _g25 = attributes->get_backgroundColours();		HX_STACK_VAR(_g25,"_g25");
				HX_STACK_LINE(195)
				int _g26 = _g25->__get(i);		HX_STACK_VAR(_g26,"_g26");
				HX_STACK_LINE(195)
				this->_colours->push(_g26);
			}
		}
	}
	HX_STACK_LINE(199)
	if ((xml->hasNode->resolve(HX_CSTRING("data")))){
		HX_STACK_LINE(200)
		::com::danielfreeman::MadXML _g27 = xml->node->resolve(HX_CSTRING("data"));		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(200)
		this->extractData(_g27);
	}
	HX_STACK_LINE(202)
	this->_dataStyle->leftMargin = this->_leftMargin;
	HX_STACK_LINE(203)
	this->_headerStyle->leftMargin = (int)0;
	HX_STACK_LINE(204)
	this->_border = saveBorder;
	HX_STACK_LINE(205)
	this->makeTable(this->_data,this->_dataStyle);
	HX_STACK_LINE(206)
	this->doLayout();
}
;
	return null();
}

//UISimpleDataGrid_obj::~UISimpleDataGrid_obj() { }

Dynamic UISimpleDataGrid_obj::__CreateEmpty() { return  new UISimpleDataGrid_obj; }
hx::ObjectPtr< UISimpleDataGrid_obj > UISimpleDataGrid_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UISimpleDataGrid_obj > result = new UISimpleDataGrid_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UISimpleDataGrid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UISimpleDataGrid_obj > result = new UISimpleDataGrid_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UISimpleDataGrid_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

Dynamic UISimpleDataGrid_obj::set_newData( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","set_newData",0x8ba33101,"com.danielfreeman.extendedmadness.UISimpleDataGrid.set_newData","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",210,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(211)
	this->_data = value;
	HX_STACK_LINE(212)
	this->_newData = true;
	HX_STACK_LINE(213)
	bool saveBorder = this->_border;		HX_STACK_VAR(saveBorder,"saveBorder");
	HX_STACK_LINE(214)
	this->clear();
	HX_STACK_LINE(215)
	if ((this->_hasHeader)){
		HX_STACK_LINE(216)
		this->_border = this->_headerLines;
		HX_STACK_LINE(217)
		this->makeTable(Dynamic( Array_obj<Dynamic>::__new().Add(value->__GetItem((int)0))),this->_headerStyle);
		HX_STACK_LINE(218)
		this->_border = saveBorder;
		HX_STACK_LINE(219)
		Dynamic _g = value->__Field(HX_CSTRING("slice"),true)((int)1,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(219)
		this->makeTable(_g,this->_dataStyle);
	}
	else{
		HX_STACK_LINE(222)
		this->makeTable(value,this->_dataStyle);
	}
	HX_STACK_LINE(224)
	this->doLayout();
	HX_STACK_LINE(225)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UISimpleDataGrid_obj,set_newData,return )

bool UISimpleDataGrid_obj::get_fits( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","get_fits",0xde4d0157,"com.danielfreeman.extendedmadness.UISimpleDataGrid.get_fits","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",230,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_LINE(230)
	return this->_fits;
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,get_fits,return )

::String UISimpleDataGrid_obj::set_widths( ::String value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","set_widths",0x918db936,"com.danielfreeman.extendedmadness.UISimpleDataGrid.set_widths","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",234,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(235)
	if (((value == HX_CSTRING("")))){
		HX_STACK_LINE(236)
		this->_theWidths = null();
		HX_STACK_LINE(237)
		this->_compactTable = true;
		HX_STACK_LINE(238)
		this->_columnWidths = null();
	}
	else{
		HX_STACK_LINE(241)
		Array< ::String > _g = value.split(HX_CSTRING(","));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(241)
		this->_theWidths = _g;
		HX_STACK_LINE(242)
		this->calculateCustomWidths();
		HX_STACK_LINE(243)
		this->_compactTable = false;
	}
	HX_STACK_LINE(245)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UISimpleDataGrid_obj,set_widths,return )

Array< int > UISimpleDataGrid_obj::set_colours( Array< int > value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","set_colours",0x88dba8fe,"com.danielfreeman.extendedmadness.UISimpleDataGrid.set_colours","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",251,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(252)
	if (((bool((value != null())) && bool((value->length > (int)0))))){
		HX_STACK_LINE(252)
		this->_colours = value;
	}
	else{
		HX_STACK_LINE(252)
		this->_colours = ::com::danielfreeman::extendedmadness::UISimpleDataGrid_obj::DEFAULT_COLOURS;
	}
	HX_STACK_LINE(253)
	this->drawBackground();
	HX_STACK_LINE(254)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UISimpleDataGrid_obj,set_colours,return )

Array< int > UISimpleDataGrid_obj::get_colours( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","get_colours",0x7e6ea1f2,"com.danielfreeman.extendedmadness.UISimpleDataGrid.get_colours","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",259,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_LINE(259)
	return this->_colours;
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,get_colours,return )

::String UISimpleDataGrid_obj::set_title( ::String value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","set_title",0x9801302f,"com.danielfreeman.extendedmadness.UISimpleDataGrid.set_title","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",265,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(266)
	if (((this->_title == null()))){
		HX_STACK_LINE(267)
		::com::danielfreeman::extendedmadness::UICell _g = ::com::danielfreeman::extendedmadness::UICell_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)0,(int)0,HX_CSTRING(""),(int)0,this->_titleStyle,false,false,this->_titleBarColour,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(267)
		this->_title = _g;
		HX_STACK_LINE(268)
		this->_title->set_fixwidth(this->_attributes->width);
		HX_STACK_LINE(269)
		this->_title->set_defaultColour(this->_titleBarColour);
	}
	HX_STACK_LINE(271)
	if ((::com::danielfreeman::MadXML_obj::parse(((HX_CSTRING("<a>") + value) + HX_CSTRING("</a>")))->get_hasChildren())){
		HX_STACK_LINE(272)
		this->_title->set_htmlText(value);
	}
	else{
		HX_STACK_LINE(275)
		this->_title->set_xmlText(value);
		HX_STACK_LINE(276)
		this->_title->setTextFormat(this->_titleStyle,null(),null());
		HX_STACK_LINE(277)
		this->_title->set_border(false);
	}
	HX_STACK_LINE(279)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UISimpleDataGrid_obj,set_title,return )

::com::danielfreeman::extendedmadness::UICell UISimpleDataGrid_obj::get_titleCell( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","get_titleCell",0x5fbedf65,"com.danielfreeman.extendedmadness.UISimpleDataGrid.get_titleCell","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",284,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_LINE(284)
	return this->_title;
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,get_titleCell,return )

Float UISimpleDataGrid_obj::set_fixwidth( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","set_fixwidth",0x48f28dda,"com.danielfreeman.extendedmadness.UISimpleDataGrid.set_fixwidth","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",288,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(289)
	{
		HX_STACK_LINE(289)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(289)
		int _g = this->_table->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(289)
		while((true)){
			HX_STACK_LINE(289)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(289)
				break;
			}
			HX_STACK_LINE(289)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(290)
			Array< ::Dynamic > row = this->_table->__get(i).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(291)
			::com::danielfreeman::extendedmadness::UICell lastCell = row->__get((row->length - (int)1)).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(lastCell,"lastCell");
			HX_STACK_LINE(292)
			Float _g2 = lastCell->get_x();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(292)
			Float _g11 = (value - _g2);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(292)
			lastCell->set_width(_g11);
		}
	}
	HX_STACK_LINE(294)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UISimpleDataGrid_obj,set_fixwidth,return )

int UISimpleDataGrid_obj::set_headerColour( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","set_headerColour",0x59ece402,"com.danielfreeman.extendedmadness.UISimpleDataGrid.set_headerColour","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",301,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(302)
	this->_headerColour = value;
	HX_STACK_LINE(303)
	this->drawBackground();
	HX_STACK_LINE(304)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UISimpleDataGrid_obj,set_headerColour,return )

int UISimpleDataGrid_obj::get_headerColour( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","get_headerColour",0x03aaf68e,"com.danielfreeman.extendedmadness.UISimpleDataGrid.get_headerColour","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",309,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_LINE(309)
	return this->_headerColour;
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,get_headerColour,return )

Void UISimpleDataGrid_obj::calculateCustomWidths( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","calculateCustomWidths",0x5b2c98f8,"com.danielfreeman.extendedmadness.UISimpleDataGrid.calculateCustomWidths","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",313,0xc57acc79)
		HX_STACK_THIS(this)
		HX_STACK_LINE(314)
		Float total = (int)0;		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(315)
		{
			HX_STACK_LINE(315)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(315)
			Dynamic _g1 = this->_theWidths;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(315)
			while((true)){
				HX_STACK_LINE(315)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(315)
					break;
				}
				HX_STACK_LINE(315)
				Dynamic item = _g1->__GetItem(_g);		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(315)
				++(_g);
				HX_STACK_LINE(316)
				Dynamic _g2 = item->__Field(HX_CSTRING("lastIndexOf"),true)(HX_CSTRING("%"));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(316)
				if (((_g2 < (int)0))){
					HX_STACK_LINE(317)
					Dynamic _g11 = ::Std_obj::parseInt(item);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(317)
					hx::AddEq(total,_g11);
				}
			}
		}
		HX_STACK_LINE(320)
		Array< Float > _g2 = Array_obj< Float >::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(320)
		this->_columnWidths = _g2;
		HX_STACK_LINE(321)
		{
			HX_STACK_LINE(321)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(321)
			Dynamic _g1 = this->_theWidths;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(321)
			while((true)){
				HX_STACK_LINE(321)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(321)
					break;
				}
				HX_STACK_LINE(321)
				Dynamic width = _g1->__GetItem(_g);		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(321)
				++(_g);
				HX_STACK_LINE(322)
				Dynamic _g3 = width->__Field(HX_CSTRING("lastIndexOf"),true)(HX_CSTRING("%"));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(322)
				Float _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(322)
				if (((_g3 > (int)0))){
					HX_STACK_LINE(322)
					Float _g4 = ::Std_obj::parseFloat(width);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(322)
					Float _g5 = (Float(_g4) / Float((int)100));		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(322)
					_g6 = (_g5 * ((this->_attributes->width - total)));
				}
				else{
					HX_STACK_LINE(322)
					_g6 = ::Std_obj::parseFloat(width);
				}
				HX_STACK_LINE(322)
				this->_columnWidths->push(_g6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,calculateCustomWidths,(void))

Void UISimpleDataGrid_obj::customWidths( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","customWidths",0x2cdc6c8a,"com.danielfreeman.extendedmadness.UISimpleDataGrid.customWidths","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",329,0xc57acc79)
		HX_STACK_THIS(this)
		HX_STACK_LINE(330)
		if (((bool((this->_theWidths != null())) && bool((this->_table->length > (int)0))))){
			HX_STACK_LINE(331)
			this->calculateCustomWidths();
		}
		HX_STACK_LINE(333)
		this->rejig();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,customWidths,(void))

Void UISimpleDataGrid_obj::verticalGridLines( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","verticalGridLines",0x0e353437,"com.danielfreeman.extendedmadness.UISimpleDataGrid.verticalGridLines","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",337,0xc57acc79)
		HX_STACK_THIS(this)
		HX_STACK_LINE(338)
		Float sum = (int)0;		HX_STACK_VAR(sum,"sum");
		HX_STACK_LINE(339)
		Float offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(340)
		if ((!(this->_headerLines))){
			HX_STACK_LINE(341)
			Array< ::Dynamic > lastRow = this->_table->__get((this->_table->length - (int)1)).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(lastRow,"lastRow");
			HX_STACK_LINE(342)
			::com::danielfreeman::extendedmadness::UICell dataCell = lastRow->__get((lastRow->length - (int)1)).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(dataCell,"dataCell");
			HX_STACK_LINE(343)
			Float _g = dataCell->get_y();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(343)
			int _g1 = ::Math_obj::round(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(343)
			offset = _g1;
		}
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(345)
			Array< Float > _g1 = this->_columnWidths;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(345)
			while((true)){
				HX_STACK_LINE(345)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(345)
					break;
				}
				HX_STACK_LINE(345)
				Float width = _g1->__get(_g);		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(345)
				++(_g);
				HX_STACK_LINE(346)
				hx::AddEq(sum,width);
				HX_STACK_LINE(347)
				this->get_graphics()->beginFill(this->_borderColour,null());
				HX_STACK_LINE(348)
				int _g2 = ::Math_obj::round(sum);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(348)
				Float _g3 = this->getBounds(hx::ObjectPtr<OBJ_>(this))->get_bottom();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(348)
				Float _g4 = (_g3 - offset);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(348)
				this->get_graphics()->drawRect(_g2,offset,0.5,_g4);
				HX_STACK_LINE(349)
				this->get_graphics()->endFill();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,verticalGridLines,(void))

Void UISimpleDataGrid_obj::horizontalGridLines( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","horizontalGridLines",0x437b6b09,"com.danielfreeman.extendedmadness.UISimpleDataGrid.horizontalGridLines","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",354,0xc57acc79)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,horizontalGridLines,(void))

Void UISimpleDataGrid_obj::drawBackground( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","drawBackground",0xa4d1225e,"com.danielfreeman.extendedmadness.UISimpleDataGrid.drawBackground","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",382,0xc57acc79)
		HX_STACK_THIS(this)
		HX_STACK_LINE(383)
		if (((bool((this->_table->length == (int)0)) || bool((this->_table->__get((int)0).StaticCast< Array< ::Dynamic > >()->length == (int)0))))){
			HX_STACK_LINE(384)
			return null();
		}
		HX_STACK_LINE(386)
		Array< ::Dynamic > lastRow = this->_table->__get((this->_table->length - (int)1)).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(lastRow,"lastRow");
		HX_STACK_LINE(387)
		::com::danielfreeman::extendedmadness::UICell cornerCell = lastRow->__get((lastRow->length - (int)1)).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(cornerCell,"cornerCell");
		HX_STACK_LINE(388)
		Float _g = cornerCell->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(388)
		Float _g1 = cornerCell->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(388)
		Float _g2 = (_g + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(388)
		Float _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(388)
		Float theWidth = ::Math_obj::max(_g3,this->_attributes->width);		HX_STACK_VAR(theWidth,"theWidth");
		HX_STACK_LINE(389)
		int colour;		HX_STACK_VAR(colour,"colour");
		HX_STACK_LINE(389)
		if ((this->_hasHeader)){
			HX_STACK_LINE(389)
			colour = this->_headerColour;
		}
		else{
			HX_STACK_LINE(389)
			colour = this->_colours->__get((int)0);
		}
		HX_STACK_LINE(390)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(390)
		if ((this->_hasHeader)){
			HX_STACK_LINE(390)
			index = (int)0;
		}
		else{
			HX_STACK_LINE(390)
			index = (int)1;
		}
		HX_STACK_LINE(391)
		if (((this->_title != null()))){
			HX_STACK_LINE(392)
			this->_title->set_fixwidth(theWidth);
		}
		HX_STACK_LINE(394)
		this->get_graphics()->clear();
		HX_STACK_LINE(395)
		{
			HX_STACK_LINE(395)
			int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(395)
			Array< ::Dynamic > _g11 = this->_table;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(395)
			while((true)){
				HX_STACK_LINE(395)
				if ((!(((_g4 < _g11->length))))){
					HX_STACK_LINE(395)
					break;
				}
				HX_STACK_LINE(395)
				Array< ::Dynamic > row = _g11->__get(_g4).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(395)
				++(_g4);
				HX_STACK_LINE(396)
				::com::danielfreeman::extendedmadness::UICell cell = row->__get((int)0).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(cell,"cell");
				HX_STACK_LINE(397)
				this->get_graphics()->beginFill(colour,null());
				HX_STACK_LINE(398)
				Float _g41 = cell->get_y();		HX_STACK_VAR(_g41,"_g41");
				HX_STACK_LINE(398)
				Float _g5 = cell->get_height();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(398)
				this->get_graphics()->drawRect((int)0,_g41,theWidth,_g5);
				HX_STACK_LINE(399)
				this->get_graphics()->endFill();
				HX_STACK_LINE(400)
				int _g6 = (index)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(400)
				int _g7 = hx::Mod(_g6,this->_colours->length);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(400)
				int _g8 = this->_colours->__get(_g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(400)
				colour = _g8;
			}
		}
		HX_STACK_LINE(402)
		this->verticalGridLines();
		HX_STACK_LINE(403)
		this->horizontalGridLines();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,drawBackground,(void))

Void UISimpleDataGrid_obj::makeTable( Dynamic data,::openfl::text::TextFormat format){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","makeTable",0x3f480174,"com.danielfreeman.extendedmadness.UISimpleDataGrid.makeTable","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",409,0xc57acc79)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(410)
		if (((format == null()))){
			HX_STACK_LINE(411)
			format = this->_dataStyle;
		}
		HX_STACK_LINE(413)
		format->leftMargin = this->_leftMargin;
		HX_STACK_LINE(414)
		::String cellString = HX_CSTRING("");		HX_STACK_VAR(cellString,"cellString");
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(416)
			while((true)){
				HX_STACK_LINE(416)
				if ((!(((_g < data->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(416)
					break;
				}
				HX_STACK_LINE(416)
				Dynamic row = data->__GetItem(_g);		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(416)
				++(_g);
				HX_STACK_LINE(417)
				{
					HX_STACK_LINE(417)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(417)
					while((true)){
						HX_STACK_LINE(417)
						if ((!(((_g1 < row->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(417)
							break;
						}
						HX_STACK_LINE(417)
						Dynamic item = row->__GetItem(_g1);		HX_STACK_VAR(item,"item");
						HX_STACK_LINE(417)
						++(_g1);
						HX_STACK_LINE(418)
						::String _g2 = ::Std_obj::string(item);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(418)
						::String _g11 = (_g2 + HX_CSTRING("\t"));		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(418)
						hx::AddEq(cellString,_g11);
					}
				}
				HX_STACK_LINE(420)
				hx::AddEq(cellString,HX_CSTRING("\n"));
			}
		}
		HX_STACK_LINE(422)
		if (((data->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(423)
			::com::danielfreeman::extendedmadness::UICell cell = this->newCell(format);		HX_STACK_VAR(cell,"cell");
			HX_STACK_LINE(424)
			cell->set_x((int)0);
			HX_STACK_LINE(425)
			cell->set_y(this->_last);
			HX_STACK_LINE(426)
			cell->set_xmlText(cellString);
			HX_STACK_LINE(427)
			cell->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
			HX_STACK_LINE(428)
			Array< ::Dynamic > tableRow = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tableRow,"tableRow");
			HX_STACK_LINE(429)
			tableRow->push(cell);
			HX_STACK_LINE(430)
			this->_table->push(tableRow);
			HX_STACK_LINE(431)
			Float _g2 = cell->get_y();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(431)
			Float _g3 = cell->get_height();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(431)
			Float _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(431)
			this->_last = _g4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UISimpleDataGrid_obj,makeTable,(void))

Array< ::Dynamic > UISimpleDataGrid_obj::get_pages( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","get_pages",0x61c259cf,"com.danielfreeman.extendedmadness.UISimpleDataGrid.get_pages","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",437,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_LINE(437)
	return Array_obj< ::Dynamic >::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,get_pages,return )

Void UISimpleDataGrid_obj::extractData( ::com::danielfreeman::MadXML xml){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","extractData",0x603d333f,"com.danielfreeman.extendedmadness.UISimpleDataGrid.extractData","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",443,0xc57acc79)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_LINE(444)
		::com::danielfreeman::MadXMLList rows = xml->nodes->resolve(HX_CSTRING("row"));		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(445)
		Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(445)
		this->_data = _g;
		HX_STACK_LINE(446)
		for(::cpp::FastIterator_obj< ::com::danielfreeman::MadXML > *__it = ::cpp::CreateFastIterator< ::com::danielfreeman::MadXML >(rows->iterator());  __it->hasNext(); ){
			::com::danielfreeman::MadXML row = __it->next();
			{
				HX_STACK_LINE(447)
				Dynamic dataRow = ::Std_obj::string(row).split(HX_CSTRING(","));		HX_STACK_VAR(dataRow,"dataRow");
				HX_STACK_LINE(448)
				this->_data->__Field(HX_CSTRING("push"),true)(dataRow);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISimpleDataGrid_obj,extractData,(void))

Float UISimpleDataGrid_obj::initialHeight( int rowIndex){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","initialHeight",0x052fc3bf,"com.danielfreeman.extendedmadness.UISimpleDataGrid.initialHeight","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",454,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rowIndex,"rowIndex")
	HX_STACK_LINE(454)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(UISimpleDataGrid_obj,initialHeight,return )

Void UISimpleDataGrid_obj::rejig( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","rejig",0x70c32129,"com.danielfreeman.extendedmadness.UISimpleDataGrid.rejig","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",460,0xc57acc79)
		HX_STACK_THIS(this)
		HX_STACK_LINE(461)
		if (((this->_table->length == (int)0))){
			HX_STACK_LINE(462)
			return null();
		}
		HX_STACK_LINE(464)
		Float lastY = (int)0;		HX_STACK_VAR(lastY,"lastY");
		HX_STACK_LINE(465)
		this->get_graphics()->clear();
		HX_STACK_LINE(466)
		if (((this->_title != null()))){
			HX_STACK_LINE(467)
			this->_title->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
			HX_STACK_LINE(468)
			Float _g = this->_title->get_height();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(468)
			lastY = _g;
			HX_STACK_LINE(469)
			this->_title->set_fixwidth(this->_tableWidth);
		}
		HX_STACK_LINE(471)
		::openfl::text::TextFormat tabsTextFormat = ::openfl::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tabsTextFormat,"tabsTextFormat");
		HX_STACK_LINE(472)
		Array< int > tabStops = Array_obj< int >::__new();		HX_STACK_VAR(tabStops,"tabStops");
		HX_STACK_LINE(473)
		Float sum = (int)0;		HX_STACK_VAR(sum,"sum");
		HX_STACK_LINE(474)
		{
			HX_STACK_LINE(474)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(474)
			Array< Float > _g1 = this->_columnWidths;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(474)
			while((true)){
				HX_STACK_LINE(474)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(474)
					break;
				}
				HX_STACK_LINE(474)
				Float tabWidth = _g1->__get(_g);		HX_STACK_VAR(tabWidth,"tabWidth");
				HX_STACK_LINE(474)
				++(_g);
				HX_STACK_LINE(475)
				hx::AddEq(sum,tabWidth);
				HX_STACK_LINE(476)
				int _g11 = ::Math_obj::ceil(sum);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(476)
				tabStops->push(_g11);
			}
		}
		HX_STACK_LINE(478)
		tabsTextFormat->tabStops = tabStops;
		HX_STACK_LINE(479)
		if ((!(this->_hasHeader))){
			HX_STACK_LINE(480)
			tabsTextFormat->leading = (int)4;
		}
		HX_STACK_LINE(482)
		{
			HX_STACK_LINE(482)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(482)
			Array< ::Dynamic > _g1 = this->_table;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(482)
			while((true)){
				HX_STACK_LINE(482)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(482)
					break;
				}
				HX_STACK_LINE(482)
				Array< ::Dynamic > tableRow = _g1->__get(_g).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(tableRow,"tableRow");
				HX_STACK_LINE(482)
				++(_g);
				HX_STACK_LINE(483)
				::com::danielfreeman::extendedmadness::UICell cell = tableRow->__get((int)0).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(cell,"cell");
				HX_STACK_LINE(484)
				cell->set_x((int)0);
				HX_STACK_LINE(485)
				cell->set_y(lastY);
				HX_STACK_LINE(486)
				cell->setTextFormat(tabsTextFormat,null(),null());
				HX_STACK_LINE(487)
				Float _g2 = cell->get_height();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(487)
				hx::AddEq(lastY,_g2);
				HX_STACK_LINE(488)
				tabsTextFormat->leading = (int)4;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,rejig,(void))

Void UISimpleDataGrid_obj::doLayout( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","doLayout",0x07a6a4e1,"com.danielfreeman.extendedmadness.UISimpleDataGrid.doLayout","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",495,0xc57acc79)
		HX_STACK_THIS(this)
		HX_STACK_LINE(496)
		this->_tableWidth = this->_attributes->width;
		HX_STACK_LINE(497)
		if (((this->_cellWidths != null()))){
			HX_STACK_LINE(498)
			this->rejig();
		}
		else{
			HX_STACK_LINE(500)
			if (((this->_theWidths != null()))){
				HX_STACK_LINE(501)
				this->customWidths();
			}
			else{
				HX_STACK_LINE(503)
				if ((this->_compactTable)){
					HX_STACK_LINE(504)
					this->compact(true);
				}
				else{
					HX_STACK_LINE(507)
					this->rejig();
				}
			}
		}
		HX_STACK_LINE(509)
		this->drawBackground();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,doLayout,(void))

Void UISimpleDataGrid_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","layout",0x902a33f6,"com.danielfreeman.extendedmadness.UISimpleDataGrid.layout","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",513,0xc57acc79)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(514)
		this->super::layout(attributes);
		HX_STACK_LINE(515)
		this->_attributes = attributes;
		HX_STACK_LINE(516)
		this->set_x(attributes->x);
		HX_STACK_LINE(517)
		this->set_y(attributes->y);
		HX_STACK_LINE(518)
		if ((!(this->_fastLayout))){
			HX_STACK_LINE(519)
			this->doLayout();
		}
	}
return null();
}


Void UISimpleDataGrid_obj::drawComponent( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","drawComponent",0xa76e004d,"com.danielfreeman.extendedmadness.UISimpleDataGrid.drawComponent","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",524,0xc57acc79)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,drawComponent,(void))

Void UISimpleDataGrid_obj::clear( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","clear",0xd25d19c1,"com.danielfreeman.extendedmadness.UISimpleDataGrid.clear","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",531,0xc57acc79)
		HX_STACK_THIS(this)
		HX_STACK_LINE(532)
		{
			HX_STACK_LINE(532)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(532)
			Array< ::Dynamic > _g1 = this->_table;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(532)
			while((true)){
				HX_STACK_LINE(532)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(532)
					break;
				}
				HX_STACK_LINE(532)
				Array< ::Dynamic > row = _g1->__get(_g).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(532)
				++(_g);
				HX_STACK_LINE(533)
				{
					HX_STACK_LINE(533)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(533)
					while((true)){
						HX_STACK_LINE(533)
						if ((!(((_g2 < row->length))))){
							HX_STACK_LINE(533)
							break;
						}
						HX_STACK_LINE(533)
						::com::danielfreeman::extendedmadness::UICell cell = row->__get(_g2).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(cell,"cell");
						HX_STACK_LINE(533)
						++(_g2);
						HX_STACK_LINE(534)
						this->removeCell(cell);
					}
				}
			}
		}
		HX_STACK_LINE(537)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(537)
		this->_table = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,clear,(void))

::openfl::display::DisplayObject UISimpleDataGrid_obj::findViewById( ::String id,hx::Null< int >  __o_row,hx::Null< int >  __o_group){
int row = __o_row.Default(-1);
int group = __o_group.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","findViewById",0x4d05623c,"com.danielfreeman.extendedmadness.UISimpleDataGrid.findViewById","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",544,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(group,"group")
{
		HX_STACK_LINE(544)
		if (((id == HX_CSTRING("")))){
			HX_STACK_LINE(544)
			return this->_table->__get(row).StaticCast< Array< ::Dynamic > >()->__get(group).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();
		}
		else{
			HX_STACK_LINE(544)
			return null();
		}
		HX_STACK_LINE(544)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(UISimpleDataGrid_obj,findViewById,return )

Array< ::String > UISimpleDataGrid_obj::extractHeader( ::com::danielfreeman::MadXML xml){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","extractHeader",0xaadb15e2,"com.danielfreeman.extendedmadness.UISimpleDataGrid.extractHeader","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",549,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_LINE(549)
	if ((xml->hasNode->resolve(HX_CSTRING("header")))){
		HX_STACK_LINE(550)
		return xml->node->resolve(HX_CSTRING("header"))->toString().split(HX_CSTRING(","));
	}
	else{
		HX_STACK_LINE(552)
		if (((  ((xml->hasNode->resolve(HX_CSTRING("data")))) ? bool(xml->node->resolve(HX_CSTRING("data"))->hasNode->resolve(HX_CSTRING("header"))) : bool(false) ))){
			HX_STACK_LINE(553)
			return xml->node->resolve(HX_CSTRING("data"))->node->resolve(HX_CSTRING("header"))->toString().split(HX_CSTRING(","));
		}
		else{
			HX_STACK_LINE(556)
			return null();
		}
	}
	HX_STACK_LINE(549)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISimpleDataGrid_obj,extractHeader,return )

int UISimpleDataGrid_obj::get_numberOfRows( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","get_numberOfRows",0x86269a4e,"com.danielfreeman.extendedmadness.UISimpleDataGrid.get_numberOfRows","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",561,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_LINE(562)
	int _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(562)
	if ((this->get_hasHeader())){
		HX_STACK_LINE(562)
		_g = (int)1;
	}
	else{
		HX_STACK_LINE(562)
		_g = (int)0;
	}
	HX_STACK_LINE(562)
	int _g1 = (this->_rowPositions->length + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(562)
	return (_g1 - (int)2);
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,get_numberOfRows,return )

int UISimpleDataGrid_obj::yToRow( Float y){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","yToRow",0x3fe63172,"com.danielfreeman.extendedmadness.UISimpleDataGrid.yToRow","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",568,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(569)
	int result = (int)-1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(570)
	int _g = this->get_numberOfRows();		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UISimpleDataGrid_obj > __this,Float &y){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",570,0xc57acc79)
			{
				HX_STACK_LINE(570)
				Float _g1 = __this->get_theHeight();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(570)
				return (y <= _g1);
			}
			return null();
		}
	};
	HX_STACK_LINE(570)
	if (((  (((  (((_g > (int)0))) ? bool((y > (int)0)) : bool(false) ))) ? bool(_Function_1_1::Block(this,y)) : bool(false) ))){
		HX_STACK_LINE(571)
		int _g2 = this->get_numberOfRows();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(571)
		Float _g3 = this->_title->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(571)
		Float _g4 = (y - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(571)
		Float _g5 = (_g2 * _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(571)
		Float _g6 = this->get_theHeight();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(571)
		Float _g7 = this->_title->get_height();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(571)
		Float _g8 = (_g6 - _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(571)
		Float _g9 = (Float(_g5) / Float(_g8));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(571)
		int _g10 = ::Math_obj::floor(_g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(571)
		int _g11 = this->get_numberOfRows();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(571)
		int _g12 = (_g11 - (int)1);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(571)
		Float _g13 = ::Math_obj::min(_g10,_g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(571)
		int _g14 = ::Math_obj::round(_g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(571)
		result = _g14;
		HX_STACK_LINE(572)
		Float top = this->rowPosition(result);		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(573)
		if (((y < top))){
			HX_STACK_LINE(574)
			(result)--;
			HX_STACK_LINE(575)
			Float _g15 = this->rowPosition(result);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(575)
			top = _g15;
			HX_STACK_LINE(576)
			while((true)){
				HX_STACK_LINE(576)
				if ((!(((bool((result >= (int)0)) && bool((y < top))))))){
					HX_STACK_LINE(576)
					break;
				}
				HX_STACK_LINE(577)
				(result)--;
				HX_STACK_LINE(578)
				Float _g16 = this->rowPosition(result);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(578)
				top = _g16;
			}
		}
		else{
			HX_STACK_LINE(582)
			Float _g17 = this->rowHeight(result);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(582)
			Float bottom = (top + _g17);		HX_STACK_VAR(bottom,"bottom");
			HX_STACK_LINE(583)
			if (((y > bottom))){
				HX_STACK_LINE(584)
				(result)++;
				HX_STACK_LINE(585)
				Float _g18 = this->rowPosition(result);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(585)
				top = _g18;
				HX_STACK_LINE(586)
				Float _g19 = this->rowHeight(result);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(586)
				Float _g20 = (top + _g19);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(586)
				bottom = _g20;
				HX_STACK_LINE(587)
				while((true)){
					HX_STACK_LINE(587)
					int _g21 = this->get_numberOfRows();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(587)
					if ((!(((  (((result < _g21))) ? bool((y > bottom)) : bool(false) ))))){
						HX_STACK_LINE(587)
						break;
					}
					HX_STACK_LINE(588)
					(result)++;
					HX_STACK_LINE(589)
					Float _g22 = this->rowPosition(result);		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(589)
					top = _g22;
					HX_STACK_LINE(590)
					Float _g23 = this->rowHeight(result);		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(590)
					Float _g24 = (top + _g23);		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(590)
					bottom = _g24;
				}
			}
		}
	}
	HX_STACK_LINE(595)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(UISimpleDataGrid_obj,yToRow,return )

Void UISimpleDataGrid_obj::reformatTopRow( ::openfl::text::TextFormat format){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","reformatTopRow",0xa405da9b,"com.danielfreeman.extendedmadness.UISimpleDataGrid.reformatTopRow","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",600,0xc57acc79)
		HX_STACK_THIS(this)
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(600)
		if (((this->_table->length > (int)0))){
			HX_STACK_LINE(601)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(601)
			Array< ::Dynamic > _g1 = this->_table->__get((int)0).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(601)
			while((true)){
				HX_STACK_LINE(601)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(601)
					break;
				}
				HX_STACK_LINE(601)
				::com::danielfreeman::extendedmadness::UICell cell = _g1->__get(_g).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(cell,"cell");
				HX_STACK_LINE(601)
				++(_g);
				HX_STACK_LINE(602)
				cell->setTextFormat(format,null(),null());
				HX_STACK_LINE(603)
				cell->set_defaultTextFormat(format);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISimpleDataGrid_obj,reformatTopRow,(void))

Void UISimpleDataGrid_obj::addHeaderToTable( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","addHeaderToTable",0xac2597f1,"com.danielfreeman.extendedmadness.UISimpleDataGrid.addHeaderToTable","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",609,0xc57acc79)
		HX_STACK_THIS(this)
		HX_STACK_LINE(610)
		this->_hasHeader = true;
		HX_STACK_LINE(611)
		this->reformatTopRow(this->_headerStyle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,addHeaderToTable,(void))

Void UISimpleDataGrid_obj::removeHeaderFromTable( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","removeHeaderFromTable",0x39b08747,"com.danielfreeman.extendedmadness.UISimpleDataGrid.removeHeaderFromTable","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",615,0xc57acc79)
		HX_STACK_THIS(this)
		HX_STACK_LINE(616)
		this->_hasHeader = false;
		HX_STACK_LINE(617)
		this->reformatTopRow(this->_dataStyle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,removeHeaderFromTable,(void))

Void UISimpleDataGrid_obj::setData( Dynamic value,hx::Null< bool >  __o_includeHeader){
bool includeHeader = __o_includeHeader.Default(false);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","setData",0x53cab420,"com.danielfreeman.extendedmadness.UISimpleDataGrid.setData","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",624,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(includeHeader,"includeHeader")
{
		HX_STACK_LINE(625)
		this->_hasHeader = includeHeader;
		HX_STACK_LINE(626)
		this->set_newData(value);
		HX_STACK_LINE(627)
		this->_newData = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UISimpleDataGrid_obj,setData,(void))

Dynamic UISimpleDataGrid_obj::set_data( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","set_data",0x8b51db73,"com.danielfreeman.extendedmadness.UISimpleDataGrid.set_data","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",631,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(632)
	this->setData(value,null());
	HX_STACK_LINE(633)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UISimpleDataGrid_obj,set_data,return )

Dynamic UISimpleDataGrid_obj::get_data( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","get_data",0xdcf481ff,"com.danielfreeman.extendedmadness.UISimpleDataGrid.get_data","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",638,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_LINE(638)
	return this->_data;
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,get_data,return )

Dynamic UISimpleDataGrid_obj::set_headerAndData( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","set_headerAndData",0xe424582b,"com.danielfreeman.extendedmadness.UISimpleDataGrid.set_headerAndData","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",642,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(643)
	this->setData(value,true);
	HX_STACK_LINE(644)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UISimpleDataGrid_obj,set_headerAndData,return )

Array< ::Dynamic > UISimpleDataGrid_obj::get_tableCells( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","get_tableCells",0xca2d4b38,"com.danielfreeman.extendedmadness.UISimpleDataGrid.get_tableCells","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",651,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_LINE(651)
	return this->_table;
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,get_tableCells,return )

Float UISimpleDataGrid_obj::rowPosition( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","rowPosition",0x7f45b017,"com.danielfreeman.extendedmadness.UISimpleDataGrid.rowPosition","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",656,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(656)
	return this->_rowPositions->__get(value);
}


HX_DEFINE_DYNAMIC_FUNC1(UISimpleDataGrid_obj,rowPosition,return )

Float UISimpleDataGrid_obj::rowHeight( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","rowHeight",0xa886bfd5,"com.danielfreeman.extendedmadness.UISimpleDataGrid.rowHeight","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",661,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(661)
	return (this->_rowPositions->__get((value + (int)1)) - this->_rowPositions->__get(value));
}


HX_DEFINE_DYNAMIC_FUNC1(UISimpleDataGrid_obj,rowHeight,return )

bool UISimpleDataGrid_obj::set_hasHeader( bool value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","set_hasHeader",0x7d456e9e,"com.danielfreeman.extendedmadness.UISimpleDataGrid.set_hasHeader","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",665,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(666)
	this->_hasHeader = value;
	HX_STACK_LINE(667)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UISimpleDataGrid_obj,set_hasHeader,return )

bool UISimpleDataGrid_obj::get_hasHeader( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","get_hasHeader",0x383f8c92,"com.danielfreeman.extendedmadness.UISimpleDataGrid.get_hasHeader","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",672,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_LINE(672)
	return this->_hasHeader;
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,get_hasHeader,return )

Float UISimpleDataGrid_obj::estimateWidth( Float size,::String text){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","estimateWidth",0x9e72dc72,"com.danielfreeman.extendedmadness.UISimpleDataGrid.estimateWidth","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",676,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(677)
	::EReg_obj::__new(HX_CSTRING("<[^<]+?>"),HX_CSTRING("g"))->replace(text,HX_CSTRING(""));
	HX_STACK_LINE(679)
	::String characters = text;		HX_STACK_VAR(characters,"characters");
	HX_STACK_LINE(680)
	::EReg_obj::__new(HX_CSTRING("[^@W]"),HX_CSTRING("g"))->replace(characters,HX_CSTRING(""));
	HX_STACK_LINE(681)
	int extraWide = characters.length;		HX_STACK_VAR(extraWide,"extraWide");
	HX_STACK_LINE(683)
	characters = text;
	HX_STACK_LINE(684)
	::EReg_obj::__new(HX_CSTRING("[^a-l n-v xyzI\\s.,!|]"),HX_CSTRING("g"))->replace(characters,HX_CSTRING(""));
	HX_STACK_LINE(685)
	int lowerCaseAndSpaces = characters.length;		HX_STACK_VAR(lowerCaseAndSpaces,"lowerCaseAndSpaces");
	HX_STACK_LINE(687)
	characters = text;
	HX_STACK_LINE(688)
	::EReg_obj::__new(HX_CSTRING("[^0-9]"),HX_CSTRING("g"))->replace(characters,HX_CSTRING(""));
	HX_STACK_LINE(689)
	int numbers = characters.length;		HX_STACK_VAR(numbers,"numbers");
	HX_STACK_LINE(691)
	int everythingElse = (((text.length - lowerCaseAndSpaces) - numbers) - extraWide);		HX_STACK_VAR(everythingElse,"everythingElse");
	HX_STACK_LINE(692)
	return ((size * (((((1.05 * extraWide) + (0.75 * everythingElse)) + (0.52 * lowerCaseAndSpaces)) + (0.6 * numbers)))) + ((int)2 * this->_leftMargin));
}


HX_DEFINE_DYNAMIC_FUNC2(UISimpleDataGrid_obj,estimateWidth,return )

Void UISimpleDataGrid_obj::initialiseColumnWidths( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","initialiseColumnWidths",0xb726e246,"com.danielfreeman.extendedmadness.UISimpleDataGrid.initialiseColumnWidths","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",696,0xc57acc79)
		HX_STACK_THIS(this)
		HX_STACK_LINE(697)
		Float dataSize = this->_dataStyle->size;		HX_STACK_VAR(dataSize,"dataSize");
		HX_STACK_LINE(698)
		Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(698)
		this->_columnWidths = _g;
		HX_STACK_LINE(699)
		Float estimate;		HX_STACK_VAR(estimate,"estimate");
		HX_STACK_LINE(700)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(701)
		if (((this->_headerText != null()))){
			HX_STACK_LINE(702)
			Float headerSize = this->_headerStyle->size;		HX_STACK_VAR(headerSize,"headerSize");
			HX_STACK_LINE(703)
			{
				HX_STACK_LINE(703)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(703)
				Dynamic _g11 = this->_headerText;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(703)
				while((true)){
					HX_STACK_LINE(703)
					if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(703)
						break;
					}
					HX_STACK_LINE(703)
					Dynamic headerItem = _g11->__GetItem(_g1);		HX_STACK_VAR(headerItem,"headerItem");
					HX_STACK_LINE(703)
					++(_g1);
					HX_STACK_LINE(704)
					Float _g12 = this->estimateWidth(headerSize,headerItem);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(704)
					estimate = _g12;
					HX_STACK_LINE(705)
					if (((estimate > this->_columnWidths->__get(index)))){
						HX_STACK_LINE(706)
						this->_columnWidths[index] = estimate;
					}
					HX_STACK_LINE(708)
					(index)++;
				}
			}
		}
		HX_STACK_LINE(711)
		{
			HX_STACK_LINE(711)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(711)
			Dynamic _g11 = this->_data;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(711)
			while((true)){
				HX_STACK_LINE(711)
				if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(711)
					break;
				}
				HX_STACK_LINE(711)
				Dynamic dataRow = _g11->__GetItem(_g1);		HX_STACK_VAR(dataRow,"dataRow");
				HX_STACK_LINE(711)
				++(_g1);
				HX_STACK_LINE(712)
				index = (int)0;
				HX_STACK_LINE(713)
				{
					HX_STACK_LINE(713)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(713)
					while((true)){
						HX_STACK_LINE(713)
						if ((!(((_g2 < dataRow->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(713)
							break;
						}
						HX_STACK_LINE(713)
						Dynamic dataItem = dataRow->__GetItem(_g2);		HX_STACK_VAR(dataItem,"dataItem");
						HX_STACK_LINE(713)
						++(_g2);
						HX_STACK_LINE(714)
						Float _g21 = this->estimateWidth(dataSize,dataItem);		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(714)
						estimate = _g21;
						HX_STACK_LINE(715)
						if (((bool((index < this->_columnWidths->length)) && bool((estimate > this->_columnWidths->__get(index)))))){
							HX_STACK_LINE(716)
							this->_columnWidths[index] = estimate;
						}
						HX_STACK_LINE(718)
						(index)++;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISimpleDataGrid_obj,initialiseColumnWidths,(void))

Void UISimpleDataGrid_obj::compact( hx::Null< bool >  __o_padding){
bool padding = __o_padding.Default(false);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","compact",0xcf4c28d7,"com.danielfreeman.extendedmadness.UISimpleDataGrid.compact","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",726,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(padding,"padding")
{
		HX_STACK_LINE(727)
		this->_fits = false;
		HX_STACK_LINE(728)
		if (((this->_table->length > (int)0))){
			HX_STACK_LINE(729)
			this->initialiseColumnWidths();
			HX_STACK_LINE(730)
			if ((padding)){
				HX_STACK_LINE(731)
				Float sum = (int)0;		HX_STACK_VAR(sum,"sum");
				HX_STACK_LINE(732)
				{
					HX_STACK_LINE(732)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(732)
					Array< Float > _g1 = this->_columnWidths;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(732)
					while((true)){
						HX_STACK_LINE(732)
						if ((!(((_g < _g1->length))))){
							HX_STACK_LINE(732)
							break;
						}
						HX_STACK_LINE(732)
						Float width = _g1->__get(_g);		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(732)
						++(_g);
						HX_STACK_LINE(733)
						hx::AddEq(sum,width);
					}
				}
				HX_STACK_LINE(735)
				if (((sum < this->_tableWidth))){
					HX_STACK_LINE(736)
					this->_fits = true;
					HX_STACK_LINE(737)
					Float padEachCellBy = (Float(((this->_tableWidth - sum))) / Float(this->_columnWidths->length));		HX_STACK_VAR(padEachCellBy,"padEachCellBy");
					HX_STACK_LINE(738)
					{
						HX_STACK_LINE(738)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(738)
						int _g = this->_columnWidths->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(738)
						while((true)){
							HX_STACK_LINE(738)
							if ((!(((_g1 < _g))))){
								HX_STACK_LINE(738)
								break;
							}
							HX_STACK_LINE(738)
							int k = (_g1)++;		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(739)
							hx::AddEq(this->_columnWidths[k],padEachCellBy);
						}
					}
				}
			}
			HX_STACK_LINE(743)
			this->rejig();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISimpleDataGrid_obj,compact,(void))

Void UISimpleDataGrid_obj::removeCell( ::com::danielfreeman::extendedmadness::UICell cell){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","removeCell",0x10687752,"com.danielfreeman.extendedmadness.UISimpleDataGrid.removeCell","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",748,0xc57acc79)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cell,"cell")
		HX_STACK_LINE(749)
		if (((this->_recycle != null()))){
			HX_STACK_LINE(750)
			this->_recycle->push(cell);
		}
		HX_STACK_LINE(752)
		cell->get_parent()->removeChild(cell);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISimpleDataGrid_obj,removeCell,(void))

::com::danielfreeman::extendedmadness::UICell UISimpleDataGrid_obj::newCell( ::openfl::text::TextFormat format){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","newCell",0x3d6ceb56,"com.danielfreeman.extendedmadness.UISimpleDataGrid.newCell","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",756,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(757)
	this->_dataStyle->leftMargin = this->_leftMargin;
	HX_STACK_LINE(758)
	::com::danielfreeman::extendedmadness::UICell result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(759)
	if (((bool((this->_recycle != null())) && bool((this->_recycle->length > (int)0))))){
		HX_STACK_LINE(760)
		::com::danielfreeman::extendedmadness::UICell _g = this->_recycle->pop().StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(760)
		::com::danielfreeman::extendedmadness::UICell _g1 = result = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(760)
		this->addChild(_g1);
		HX_STACK_LINE(761)
		result->setTextFormat(format,null(),null());
		HX_STACK_LINE(762)
		result->set_defaultTextFormat(format);
		HX_STACK_LINE(763)
		result->set_multiline(this->_multiLine);
		HX_STACK_LINE(764)
		result->set_wordWrap(this->_wordWrap);
		HX_STACK_LINE(765)
		result->set_border(this->_border);
	}
	else{
		HX_STACK_LINE(768)
		::com::danielfreeman::extendedmadness::UICell _g2 = ::com::danielfreeman::extendedmadness::UICell_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)0,(int)0,HX_CSTRING(""),(int)0,format,this->_multiLine,this->_wordWrap,this->_borderColour,this->_border);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(768)
		result = _g2;
	}
	HX_STACK_LINE(770)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(UISimpleDataGrid_obj,newCell,return )

Float UISimpleDataGrid_obj::get_theHeight( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISimpleDataGrid","get_theHeight",0x6b111743,"com.danielfreeman.extendedmadness.UISimpleDataGrid.get_theHeight","com/danielfreeman/extendedmadness/UISimpleDataGrid.hx",775,0xc57acc79)
	HX_STACK_THIS(this)
	HX_STACK_LINE(775)
	return this->getBounds(hx::ObjectPtr<OBJ_>(this))->get_bottom();
}


int UISimpleDataGrid_obj::DEFAULT_HEADER_COLOUR;

Array< int > UISimpleDataGrid_obj::DEFAULT_COLOURS;

Float UISimpleDataGrid_obj::TABLE_WIDTH;

Float UISimpleDataGrid_obj::TEXT_SIZE;

Float UISimpleDataGrid_obj::THRESHOLD;

Float UISimpleDataGrid_obj::LINE_THICKNESS;

Array< ::Dynamic > UISimpleDataGrid_obj::_sharedRecycle;


UISimpleDataGrid_obj::UISimpleDataGrid_obj()
{
}

void UISimpleDataGrid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UISimpleDataGrid);
	HX_MARK_MEMBER_NAME(_table,"_table");
	HX_MARK_MEMBER_NAME(_last,"_last");
	HX_MARK_MEMBER_NAME(_lastWidth,"_lastWidth");
	HX_MARK_MEMBER_NAME(_cellWidths,"_cellWidths");
	HX_MARK_MEMBER_NAME(_theWidths,"_theWidths");
	HX_MARK_MEMBER_NAME(_leftMargin,"_leftMargin");
	HX_MARK_MEMBER_NAME(_tableWidth,"_tableWidth");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_borderColour,"_borderColour");
	HX_MARK_MEMBER_NAME(_colours,"_colours");
	HX_MARK_MEMBER_NAME(_compactTable,"_compactTable");
	HX_MARK_MEMBER_NAME(_columnWidths,"_columnWidths");
	HX_MARK_MEMBER_NAME(_multiLine,"_multiLine");
	HX_MARK_MEMBER_NAME(_wordWrap,"_wordWrap");
	HX_MARK_MEMBER_NAME(_hasHeader,"_hasHeader");
	HX_MARK_MEMBER_NAME(_dataStyle,"_dataStyle");
	HX_MARK_MEMBER_NAME(_headerStyle,"_headerStyle");
	HX_MARK_MEMBER_NAME(_titleStyle,"_titleStyle");
	HX_MARK_MEMBER_NAME(_titleBarColour,"_titleBarColour");
	HX_MARK_MEMBER_NAME(_title,"_title");
	HX_MARK_MEMBER_NAME(_headerText,"_headerText");
	HX_MARK_MEMBER_NAME(_headerColour,"_headerColour");
	HX_MARK_MEMBER_NAME(_recycle,"_recycle");
	HX_MARK_MEMBER_NAME(_fastLayout,"_fastLayout");
	HX_MARK_MEMBER_NAME(_border,"_border");
	HX_MARK_MEMBER_NAME(_fits,"_fits");
	HX_MARK_MEMBER_NAME(_newData,"_newData");
	HX_MARK_MEMBER_NAME(_rowPositions,"_rowPositions");
	HX_MARK_MEMBER_NAME(_headerLines,"_headerLines");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UISimpleDataGrid_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_table,"_table");
	HX_VISIT_MEMBER_NAME(_last,"_last");
	HX_VISIT_MEMBER_NAME(_lastWidth,"_lastWidth");
	HX_VISIT_MEMBER_NAME(_cellWidths,"_cellWidths");
	HX_VISIT_MEMBER_NAME(_theWidths,"_theWidths");
	HX_VISIT_MEMBER_NAME(_leftMargin,"_leftMargin");
	HX_VISIT_MEMBER_NAME(_tableWidth,"_tableWidth");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_borderColour,"_borderColour");
	HX_VISIT_MEMBER_NAME(_colours,"_colours");
	HX_VISIT_MEMBER_NAME(_compactTable,"_compactTable");
	HX_VISIT_MEMBER_NAME(_columnWidths,"_columnWidths");
	HX_VISIT_MEMBER_NAME(_multiLine,"_multiLine");
	HX_VISIT_MEMBER_NAME(_wordWrap,"_wordWrap");
	HX_VISIT_MEMBER_NAME(_hasHeader,"_hasHeader");
	HX_VISIT_MEMBER_NAME(_dataStyle,"_dataStyle");
	HX_VISIT_MEMBER_NAME(_headerStyle,"_headerStyle");
	HX_VISIT_MEMBER_NAME(_titleStyle,"_titleStyle");
	HX_VISIT_MEMBER_NAME(_titleBarColour,"_titleBarColour");
	HX_VISIT_MEMBER_NAME(_title,"_title");
	HX_VISIT_MEMBER_NAME(_headerText,"_headerText");
	HX_VISIT_MEMBER_NAME(_headerColour,"_headerColour");
	HX_VISIT_MEMBER_NAME(_recycle,"_recycle");
	HX_VISIT_MEMBER_NAME(_fastLayout,"_fastLayout");
	HX_VISIT_MEMBER_NAME(_border,"_border");
	HX_VISIT_MEMBER_NAME(_fits,"_fits");
	HX_VISIT_MEMBER_NAME(_newData,"_newData");
	HX_VISIT_MEMBER_NAME(_rowPositions,"_rowPositions");
	HX_VISIT_MEMBER_NAME(_headerLines,"_headerLines");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UISimpleDataGrid_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fits") ) { return get_fits(); }
		if (HX_FIELD_EQ(inName,"data") ) { return get_data(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pages") ) { return get_pages(); }
		if (HX_FIELD_EQ(inName,"_last") ) { return _last; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		if (HX_FIELD_EQ(inName,"_fits") ) { return _fits; }
		if (HX_FIELD_EQ(inName,"rejig") ) { return rejig_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_table") ) { return _table; }
		if (HX_FIELD_EQ(inName,"_title") ) { return _title; }
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		if (HX_FIELD_EQ(inName,"yToRow") ) { return yToRow_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colours") ) { return get_colours(); }
		if (HX_FIELD_EQ(inName,"_border") ) { return _border; }
		if (HX_FIELD_EQ(inName,"setData") ) { return setData_dyn(); }
		if (HX_FIELD_EQ(inName,"compact") ) { return compact_dyn(); }
		if (HX_FIELD_EQ(inName,"newCell") ) { return newCell_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_colours") ) { return _colours; }
		if (HX_FIELD_EQ(inName,"_recycle") ) { return _recycle; }
		if (HX_FIELD_EQ(inName,"_newData") ) { return _newData; }
		if (HX_FIELD_EQ(inName,"get_fits") ) { return get_fits_dyn(); }
		if (HX_FIELD_EQ(inName,"doLayout") ) { return doLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"titleCell") ) { return get_titleCell(); }
		if (HX_FIELD_EQ(inName,"hasHeader") ) { return get_hasHeader(); }
		if (HX_FIELD_EQ(inName,"_wordWrap") ) { return _wordWrap; }
		if (HX_FIELD_EQ(inName,"set_title") ) { return set_title_dyn(); }
		if (HX_FIELD_EQ(inName,"makeTable") ) { return makeTable_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pages") ) { return get_pages_dyn(); }
		if (HX_FIELD_EQ(inName,"rowHeight") ) { return rowHeight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tableCells") ) { return get_tableCells(); }
		if (HX_FIELD_EQ(inName,"_lastWidth") ) { return _lastWidth; }
		if (HX_FIELD_EQ(inName,"_theWidths") ) { return _theWidths; }
		if (HX_FIELD_EQ(inName,"_multiLine") ) { return _multiLine; }
		if (HX_FIELD_EQ(inName,"_hasHeader") ) { return _hasHeader; }
		if (HX_FIELD_EQ(inName,"_dataStyle") ) { return _dataStyle; }
		if (HX_FIELD_EQ(inName,"set_widths") ) { return set_widths_dyn(); }
		if (HX_FIELD_EQ(inName,"removeCell") ) { return removeCell_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_cellWidths") ) { return _cellWidths; }
		if (HX_FIELD_EQ(inName,"_leftMargin") ) { return _leftMargin; }
		if (HX_FIELD_EQ(inName,"_tableWidth") ) { return _tableWidth; }
		if (HX_FIELD_EQ(inName,"_titleStyle") ) { return _titleStyle; }
		if (HX_FIELD_EQ(inName,"_headerText") ) { return _headerText; }
		if (HX_FIELD_EQ(inName,"_fastLayout") ) { return _fastLayout; }
		if (HX_FIELD_EQ(inName,"set_newData") ) { return set_newData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_colours") ) { return set_colours_dyn(); }
		if (HX_FIELD_EQ(inName,"get_colours") ) { return get_colours_dyn(); }
		if (HX_FIELD_EQ(inName,"extractData") ) { return extractData_dyn(); }
		if (HX_FIELD_EQ(inName,"rowPosition") ) { return rowPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"headerColour") ) { return get_headerColour(); }
		if (HX_FIELD_EQ(inName,"numberOfRows") ) { return get_numberOfRows(); }
		if (HX_FIELD_EQ(inName,"_headerStyle") ) { return _headerStyle; }
		if (HX_FIELD_EQ(inName,"_headerLines") ) { return _headerLines; }
		if (HX_FIELD_EQ(inName,"set_fixwidth") ) { return set_fixwidth_dyn(); }
		if (HX_FIELD_EQ(inName,"customWidths") ) { return customWidths_dyn(); }
		if (HX_FIELD_EQ(inName,"findViewById") ) { return findViewById_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_borderColour") ) { return _borderColour; }
		if (HX_FIELD_EQ(inName,"_compactTable") ) { return _compactTable; }
		if (HX_FIELD_EQ(inName,"_columnWidths") ) { return _columnWidths; }
		if (HX_FIELD_EQ(inName,"_headerColour") ) { return _headerColour; }
		if (HX_FIELD_EQ(inName,"_rowPositions") ) { return _rowPositions; }
		if (HX_FIELD_EQ(inName,"get_titleCell") ) { return get_titleCell_dyn(); }
		if (HX_FIELD_EQ(inName,"initialHeight") ) { return initialHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"drawComponent") ) { return drawComponent_dyn(); }
		if (HX_FIELD_EQ(inName,"extractHeader") ) { return extractHeader_dyn(); }
		if (HX_FIELD_EQ(inName,"set_hasHeader") ) { return set_hasHeader_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hasHeader") ) { return get_hasHeader_dyn(); }
		if (HX_FIELD_EQ(inName,"estimateWidth") ) { return estimateWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_theHeight") ) { return get_theHeight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_sharedRecycle") ) { return _sharedRecycle; }
		if (HX_FIELD_EQ(inName,"drawBackground") ) { return drawBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"reformatTopRow") ) { return reformatTopRow_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tableCells") ) { return get_tableCells_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"DEFAULT_COLOURS") ) { return DEFAULT_COLOURS; }
		if (HX_FIELD_EQ(inName,"_titleBarColour") ) { return _titleBarColour; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_headerColour") ) { return set_headerColour_dyn(); }
		if (HX_FIELD_EQ(inName,"get_headerColour") ) { return get_headerColour_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numberOfRows") ) { return get_numberOfRows_dyn(); }
		if (HX_FIELD_EQ(inName,"addHeaderToTable") ) { return addHeaderToTable_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"verticalGridLines") ) { return verticalGridLines_dyn(); }
		if (HX_FIELD_EQ(inName,"set_headerAndData") ) { return set_headerAndData_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"horizontalGridLines") ) { return horizontalGridLines_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"calculateCustomWidths") ) { return calculateCustomWidths_dyn(); }
		if (HX_FIELD_EQ(inName,"removeHeaderFromTable") ) { return removeHeaderFromTable_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"initialiseColumnWidths") ) { return initialiseColumnWidths_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UISimpleDataGrid_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return set_data(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return set_title(inValue); }
		if (HX_FIELD_EQ(inName,"_last") ) { _last=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fits") ) { _fits=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"widths") ) { return set_widths(inValue); }
		if (HX_FIELD_EQ(inName,"_table") ) { _table=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_title") ) { _title=inValue.Cast< ::com::danielfreeman::extendedmadness::UICell >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"newData") ) { return set_newData(inValue); }
		if (HX_FIELD_EQ(inName,"colours") ) { return set_colours(inValue); }
		if (HX_FIELD_EQ(inName,"_border") ) { _border=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fixwidth") ) { return set_fixwidth(inValue); }
		if (HX_FIELD_EQ(inName,"_colours") ) { _colours=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recycle") ) { _recycle=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_newData") ) { _newData=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasHeader") ) { return set_hasHeader(inValue); }
		if (HX_FIELD_EQ(inName,"_wordWrap") ) { _wordWrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lastWidth") ) { _lastWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_theWidths") ) { _theWidths=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_multiLine") ) { _multiLine=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hasHeader") ) { _hasHeader=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dataStyle") ) { _dataStyle=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_cellWidths") ) { _cellWidths=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_leftMargin") ) { _leftMargin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tableWidth") ) { _tableWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_titleStyle") ) { _titleStyle=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headerText") ) { _headerText=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fastLayout") ) { _fastLayout=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"headerColour") ) { return set_headerColour(inValue); }
		if (HX_FIELD_EQ(inName,"_headerStyle") ) { _headerStyle=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headerLines") ) { _headerLines=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"headerAndData") ) { return set_headerAndData(inValue); }
		if (HX_FIELD_EQ(inName,"_borderColour") ) { _borderColour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_compactTable") ) { _compactTable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_columnWidths") ) { _columnWidths=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headerColour") ) { _headerColour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rowPositions") ) { _rowPositions=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_sharedRecycle") ) { _sharedRecycle=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"DEFAULT_COLOURS") ) { DEFAULT_COLOURS=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_titleBarColour") ) { _titleBarColour=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UISimpleDataGrid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("newData"));
	outFields->push(HX_CSTRING("fits"));
	outFields->push(HX_CSTRING("widths"));
	outFields->push(HX_CSTRING("colours"));
	outFields->push(HX_CSTRING("title"));
	outFields->push(HX_CSTRING("titleCell"));
	outFields->push(HX_CSTRING("fixwidth"));
	outFields->push(HX_CSTRING("headerColour"));
	outFields->push(HX_CSTRING("pages"));
	outFields->push(HX_CSTRING("numberOfRows"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("headerAndData"));
	outFields->push(HX_CSTRING("tableCells"));
	outFields->push(HX_CSTRING("hasHeader"));
	outFields->push(HX_CSTRING("_table"));
	outFields->push(HX_CSTRING("_last"));
	outFields->push(HX_CSTRING("_lastWidth"));
	outFields->push(HX_CSTRING("_cellWidths"));
	outFields->push(HX_CSTRING("_theWidths"));
	outFields->push(HX_CSTRING("_leftMargin"));
	outFields->push(HX_CSTRING("_tableWidth"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_borderColour"));
	outFields->push(HX_CSTRING("_colours"));
	outFields->push(HX_CSTRING("_compactTable"));
	outFields->push(HX_CSTRING("_columnWidths"));
	outFields->push(HX_CSTRING("_multiLine"));
	outFields->push(HX_CSTRING("_wordWrap"));
	outFields->push(HX_CSTRING("_hasHeader"));
	outFields->push(HX_CSTRING("_dataStyle"));
	outFields->push(HX_CSTRING("_headerStyle"));
	outFields->push(HX_CSTRING("_titleStyle"));
	outFields->push(HX_CSTRING("_titleBarColour"));
	outFields->push(HX_CSTRING("_title"));
	outFields->push(HX_CSTRING("_headerText"));
	outFields->push(HX_CSTRING("_headerColour"));
	outFields->push(HX_CSTRING("_recycle"));
	outFields->push(HX_CSTRING("_fastLayout"));
	outFields->push(HX_CSTRING("_border"));
	outFields->push(HX_CSTRING("_fits"));
	outFields->push(HX_CSTRING("_newData"));
	outFields->push(HX_CSTRING("_rowPositions"));
	outFields->push(HX_CSTRING("_headerLines"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEFAULT_HEADER_COLOUR"),
	HX_CSTRING("DEFAULT_COLOURS"),
	HX_CSTRING("TABLE_WIDTH"),
	HX_CSTRING("TEXT_SIZE"),
	HX_CSTRING("THRESHOLD"),
	HX_CSTRING("LINE_THICKNESS"),
	HX_CSTRING("_sharedRecycle"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UISimpleDataGrid_obj,_table),HX_CSTRING("_table")},
	{hx::fsFloat,(int)offsetof(UISimpleDataGrid_obj,_last),HX_CSTRING("_last")},
	{hx::fsFloat,(int)offsetof(UISimpleDataGrid_obj,_lastWidth),HX_CSTRING("_lastWidth")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UISimpleDataGrid_obj,_cellWidths),HX_CSTRING("_cellWidths")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UISimpleDataGrid_obj,_theWidths),HX_CSTRING("_theWidths")},
	{hx::fsFloat,(int)offsetof(UISimpleDataGrid_obj,_leftMargin),HX_CSTRING("_leftMargin")},
	{hx::fsFloat,(int)offsetof(UISimpleDataGrid_obj,_tableWidth),HX_CSTRING("_tableWidth")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UISimpleDataGrid_obj,_data),HX_CSTRING("_data")},
	{hx::fsInt,(int)offsetof(UISimpleDataGrid_obj,_borderColour),HX_CSTRING("_borderColour")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(UISimpleDataGrid_obj,_colours),HX_CSTRING("_colours")},
	{hx::fsBool,(int)offsetof(UISimpleDataGrid_obj,_compactTable),HX_CSTRING("_compactTable")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(UISimpleDataGrid_obj,_columnWidths),HX_CSTRING("_columnWidths")},
	{hx::fsBool,(int)offsetof(UISimpleDataGrid_obj,_multiLine),HX_CSTRING("_multiLine")},
	{hx::fsBool,(int)offsetof(UISimpleDataGrid_obj,_wordWrap),HX_CSTRING("_wordWrap")},
	{hx::fsBool,(int)offsetof(UISimpleDataGrid_obj,_hasHeader),HX_CSTRING("_hasHeader")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UISimpleDataGrid_obj,_dataStyle),HX_CSTRING("_dataStyle")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UISimpleDataGrid_obj,_headerStyle),HX_CSTRING("_headerStyle")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UISimpleDataGrid_obj,_titleStyle),HX_CSTRING("_titleStyle")},
	{hx::fsInt,(int)offsetof(UISimpleDataGrid_obj,_titleBarColour),HX_CSTRING("_titleBarColour")},
	{hx::fsObject /*::com::danielfreeman::extendedmadness::UICell*/ ,(int)offsetof(UISimpleDataGrid_obj,_title),HX_CSTRING("_title")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UISimpleDataGrid_obj,_headerText),HX_CSTRING("_headerText")},
	{hx::fsInt,(int)offsetof(UISimpleDataGrid_obj,_headerColour),HX_CSTRING("_headerColour")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UISimpleDataGrid_obj,_recycle),HX_CSTRING("_recycle")},
	{hx::fsBool,(int)offsetof(UISimpleDataGrid_obj,_fastLayout),HX_CSTRING("_fastLayout")},
	{hx::fsBool,(int)offsetof(UISimpleDataGrid_obj,_border),HX_CSTRING("_border")},
	{hx::fsBool,(int)offsetof(UISimpleDataGrid_obj,_fits),HX_CSTRING("_fits")},
	{hx::fsBool,(int)offsetof(UISimpleDataGrid_obj,_newData),HX_CSTRING("_newData")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(UISimpleDataGrid_obj,_rowPositions),HX_CSTRING("_rowPositions")},
	{hx::fsBool,(int)offsetof(UISimpleDataGrid_obj,_headerLines),HX_CSTRING("_headerLines")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_table"),
	HX_CSTRING("_last"),
	HX_CSTRING("_lastWidth"),
	HX_CSTRING("_cellWidths"),
	HX_CSTRING("_theWidths"),
	HX_CSTRING("_leftMargin"),
	HX_CSTRING("_tableWidth"),
	HX_CSTRING("_data"),
	HX_CSTRING("_borderColour"),
	HX_CSTRING("_colours"),
	HX_CSTRING("_compactTable"),
	HX_CSTRING("_columnWidths"),
	HX_CSTRING("_multiLine"),
	HX_CSTRING("_wordWrap"),
	HX_CSTRING("_hasHeader"),
	HX_CSTRING("_dataStyle"),
	HX_CSTRING("_headerStyle"),
	HX_CSTRING("_titleStyle"),
	HX_CSTRING("_titleBarColour"),
	HX_CSTRING("_title"),
	HX_CSTRING("_headerText"),
	HX_CSTRING("_headerColour"),
	HX_CSTRING("_recycle"),
	HX_CSTRING("_fastLayout"),
	HX_CSTRING("_border"),
	HX_CSTRING("_fits"),
	HX_CSTRING("_newData"),
	HX_CSTRING("_rowPositions"),
	HX_CSTRING("_headerLines"),
	HX_CSTRING("set_newData"),
	HX_CSTRING("get_fits"),
	HX_CSTRING("set_widths"),
	HX_CSTRING("set_colours"),
	HX_CSTRING("get_colours"),
	HX_CSTRING("set_title"),
	HX_CSTRING("get_titleCell"),
	HX_CSTRING("set_fixwidth"),
	HX_CSTRING("set_headerColour"),
	HX_CSTRING("get_headerColour"),
	HX_CSTRING("calculateCustomWidths"),
	HX_CSTRING("customWidths"),
	HX_CSTRING("verticalGridLines"),
	HX_CSTRING("horizontalGridLines"),
	HX_CSTRING("drawBackground"),
	HX_CSTRING("makeTable"),
	HX_CSTRING("get_pages"),
	HX_CSTRING("extractData"),
	HX_CSTRING("initialHeight"),
	HX_CSTRING("rejig"),
	HX_CSTRING("doLayout"),
	HX_CSTRING("layout"),
	HX_CSTRING("drawComponent"),
	HX_CSTRING("clear"),
	HX_CSTRING("findViewById"),
	HX_CSTRING("extractHeader"),
	HX_CSTRING("get_numberOfRows"),
	HX_CSTRING("yToRow"),
	HX_CSTRING("reformatTopRow"),
	HX_CSTRING("addHeaderToTable"),
	HX_CSTRING("removeHeaderFromTable"),
	HX_CSTRING("setData"),
	HX_CSTRING("set_data"),
	HX_CSTRING("get_data"),
	HX_CSTRING("set_headerAndData"),
	HX_CSTRING("get_tableCells"),
	HX_CSTRING("rowPosition"),
	HX_CSTRING("rowHeight"),
	HX_CSTRING("set_hasHeader"),
	HX_CSTRING("get_hasHeader"),
	HX_CSTRING("estimateWidth"),
	HX_CSTRING("initialiseColumnWidths"),
	HX_CSTRING("compact"),
	HX_CSTRING("removeCell"),
	HX_CSTRING("newCell"),
	HX_CSTRING("get_theHeight"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UISimpleDataGrid_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UISimpleDataGrid_obj::DEFAULT_HEADER_COLOUR,"DEFAULT_HEADER_COLOUR");
	HX_MARK_MEMBER_NAME(UISimpleDataGrid_obj::DEFAULT_COLOURS,"DEFAULT_COLOURS");
	HX_MARK_MEMBER_NAME(UISimpleDataGrid_obj::TABLE_WIDTH,"TABLE_WIDTH");
	HX_MARK_MEMBER_NAME(UISimpleDataGrid_obj::TEXT_SIZE,"TEXT_SIZE");
	HX_MARK_MEMBER_NAME(UISimpleDataGrid_obj::THRESHOLD,"THRESHOLD");
	HX_MARK_MEMBER_NAME(UISimpleDataGrid_obj::LINE_THICKNESS,"LINE_THICKNESS");
	HX_MARK_MEMBER_NAME(UISimpleDataGrid_obj::_sharedRecycle,"_sharedRecycle");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UISimpleDataGrid_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UISimpleDataGrid_obj::DEFAULT_HEADER_COLOUR,"DEFAULT_HEADER_COLOUR");
	HX_VISIT_MEMBER_NAME(UISimpleDataGrid_obj::DEFAULT_COLOURS,"DEFAULT_COLOURS");
	HX_VISIT_MEMBER_NAME(UISimpleDataGrid_obj::TABLE_WIDTH,"TABLE_WIDTH");
	HX_VISIT_MEMBER_NAME(UISimpleDataGrid_obj::TEXT_SIZE,"TEXT_SIZE");
	HX_VISIT_MEMBER_NAME(UISimpleDataGrid_obj::THRESHOLD,"THRESHOLD");
	HX_VISIT_MEMBER_NAME(UISimpleDataGrid_obj::LINE_THICKNESS,"LINE_THICKNESS");
	HX_VISIT_MEMBER_NAME(UISimpleDataGrid_obj::_sharedRecycle,"_sharedRecycle");
};

#endif

Class UISimpleDataGrid_obj::__mClass;

void UISimpleDataGrid_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UISimpleDataGrid"), hx::TCanCast< UISimpleDataGrid_obj> ,sStaticFields,sMemberFields,
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

void UISimpleDataGrid_obj::__boot()
{
	DEFAULT_HEADER_COLOUR= (int)10066346;
	DEFAULT_COLOURS= Array_obj< int >::__new().Add((int)15265269).Add((int)13621481);
	TABLE_WIDTH= 300.0;
	TEXT_SIZE= 13.0;
	THRESHOLD= 36.0;
	LINE_THICKNESS= 0.5;
	_sharedRecycle= Array_obj< ::Dynamic >::__new();
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
