#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
#endif
#ifndef INCLUDED__MadXML_AttribAccess
#include <_MadXML/AttribAccess.h>
#endif
#ifndef INCLUDED__MadXML_HasAttribAccess
#include <_MadXML/HasAttribAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_Attributes
#include <com/danielfreeman/madcomponents/Attributes.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_Colour
#include <com/danielfreeman/madcomponents/Colour.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIBackButton
#include <com/danielfreeman/madcomponents/UIBackButton.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIButton
#include <com/danielfreeman/madcomponents/UIButton.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UINavigationBar
#include <com/danielfreeman/madcomponents/UINavigationBar.h>
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
#ifndef INCLUDED_openfl_display_GradientType
#include <openfl/display/GradientType.h>
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
#ifndef INCLUDED_openfl_display_InterpolationMethod
#include <openfl/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
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
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UINavigationBar_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationBar","new",0x114664e9,"com.danielfreeman.madcomponents.UINavigationBar.new","com/danielfreeman/madcomponents/UINavigationBar.hx",39,0x30b266aa)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(75)
	this->_centreItem = null();
	HX_STACK_LINE(64)
	this->DARK_FORMAT7 = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Tahoma"),(int)18,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(63)
	this->DARK_FORMAT = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Tahoma"),(int)20,(int)3355494,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(62)
	this->FORMAT7 = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Tahoma"),(int)18,(int)0,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(61)
	this->FORMAT = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Tahoma"),(int)20,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(81)
	super::__construct();
	HX_STACK_LINE(82)
	screen->addChildAt(hx::ObjectPtr<OBJ_>(this),(int)0);
	HX_STACK_LINE(83)
	this->_xml = xml;
	HX_STACK_LINE(84)
	this->_attributes = attributes;
	HX_STACK_LINE(86)
	int _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(86)
	if ((xml->has->resolve(HX_CSTRING("barColour")))){
		HX_STACK_LINE(86)
		::String _g = xml->att->resolve(HX_CSTRING("barColour"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		_g1 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g);
	}
	else{
		HX_STACK_LINE(86)
		_g1 = attributes->get_colour();
	}
	HX_STACK_LINE(86)
	this->_colour = _g1;
	HX_STACK_LINE(88)
	this->drawBar();
	HX_STACK_LINE(89)
	bool default7;		HX_STACK_VAR(default7,"default7");
	HX_STACK_LINE(89)
	if ((this->_attributes->get_style7())){
		HX_STACK_LINE(89)
		default7 = (this->_colour == (int)15724532);
	}
	else{
		HX_STACK_LINE(89)
		default7 = false;
	}
	HX_STACK_LINE(90)
	::openfl::text::TextFormat format;		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(90)
	if ((default7)){
		HX_STACK_LINE(90)
		format = this->FORMAT7;
	}
	else{
		HX_STACK_LINE(90)
		format = this->FORMAT;
	}
	HX_STACK_LINE(91)
	::openfl::text::TextFormat shadowFormat;		HX_STACK_VAR(shadowFormat,"shadowFormat");
	HX_STACK_LINE(91)
	if ((default7)){
		HX_STACK_LINE(91)
		shadowFormat = this->DARK_FORMAT7;
	}
	else{
		HX_STACK_LINE(91)
		shadowFormat = this->DARK_FORMAT;
	}
	HX_STACK_LINE(92)
	::com::danielfreeman::madcomponents::UILabel _g2 = ::com::danielfreeman::madcomponents::UILabel_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)0,((int)6 + (int)1),HX_CSTRING(""),shadowFormat);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(92)
	this->_shadowLabel = _g2;
	HX_STACK_LINE(93)
	::com::danielfreeman::madcomponents::UILabel _g3 = ::com::danielfreeman::madcomponents::UILabel_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)0,((int)6 + (int)2),HX_CSTRING(""),format);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(93)
	this->_label = _g3;
	HX_STACK_LINE(94)
	int _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(94)
	if ((this->_attributes->get_style7())){
		HX_STACK_LINE(94)
		_g4 = this->_colour;
	}
	else{
		HX_STACK_LINE(94)
		_g4 = (int)7829418;
	}
	HX_STACK_LINE(94)
	bool _g5 = attributes->get_style7();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(94)
	::com::danielfreeman::madcomponents::UIButton _g6 = ::com::danielfreeman::madcomponents::UIButton_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)8,((int)6 - (int)1),HX_CSTRING("<font size=\"14\">left</font>"),_g4,Array_obj< int >::__new(),true,_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(94)
	this->_leftButton = _g6;
	HX_STACK_LINE(95)
	bool _g7 = !(this->_attributes->get_style7());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(95)
	bool _g8 = !(xml->has->resolve(HX_CSTRING("leftLink")));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(95)
	::com::danielfreeman::madcomponents::UIBackButton _g9 = ::com::danielfreeman::madcomponents::UIBackButton_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)4,(int)0,HX_CSTRING("Back"),(int)10066363,false,_g7,_g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(95)
	this->_backButton = _g9;
	HX_STACK_LINE(96)
	bool _g10 = !(this->_attributes->get_style7());		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(96)
	bool _g11 = xml->has->resolve(HX_CSTRING("rightArrow"));		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(96)
	::com::danielfreeman::madcomponents::UIBackButton _g12 = ::com::danielfreeman::madcomponents::UIBackButton_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)200,(int)0,HX_CSTRING("Next"),(int)10066363,true,_g10,_g11);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(96)
	this->_rightArrow = _g12;
	HX_STACK_LINE(97)
	int _g13;		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(97)
	if ((this->_attributes->get_style7())){
		HX_STACK_LINE(97)
		_g13 = this->_colour;
	}
	else{
		HX_STACK_LINE(97)
		_g13 = (int)11171703;
	}
	HX_STACK_LINE(97)
	bool _g14 = attributes->get_style7();		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(97)
	::com::danielfreeman::madcomponents::UIButton _g15 = ::com::danielfreeman::madcomponents::UIButton_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)200,((int)6 - (int)1),HX_CSTRING("<font size=\"14\">done</font>"),_g13,Array_obj< int >::__new(),true,_g14);		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(97)
	this->_rightButton = _g15;
	HX_STACK_LINE(98)
	bool _g16 = this->_rightArrow->set_visible(false);		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(98)
	bool _g17 = this->_rightButton->set_visible(_g16);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(98)
	bool _g18 = this->_leftButton->set_visible(_g17);		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(98)
	this->_backButton->set_visible(_g18);
	HX_STACK_LINE(99)
	::openfl::display::Sprite _g19 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(99)
	::openfl::display::Sprite _g20 = this->_centrePanel = _g19;		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(99)
	this->addChild(_g20);
	HX_STACK_LINE(100)
	this->initialiseClassicButtons();
	HX_STACK_LINE(101)
	this->adjustButtons();
}
;
	return null();
}

//UINavigationBar_obj::~UINavigationBar_obj() { }

Dynamic UINavigationBar_obj::__CreateEmpty() { return  new UINavigationBar_obj; }
hx::ObjectPtr< UINavigationBar_obj > UINavigationBar_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UINavigationBar_obj > result = new UINavigationBar_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UINavigationBar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UINavigationBar_obj > result = new UINavigationBar_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void UINavigationBar_obj::initialiseClassicButtons( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationBar","initialiseClassicButtons",0xbd5778bd,"com.danielfreeman.madcomponents.UINavigationBar.initialiseClassicButtons","com/danielfreeman/madcomponents/UINavigationBar.hx",105,0x30b266aa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		if ((this->_xml->has->resolve(HX_CSTRING("leftButton")))){
			HX_STACK_LINE(107)
			::String _g = this->_xml->att->resolve(HX_CSTRING("leftButton"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(107)
			this->set_leftButtonText(_g);
			HX_STACK_LINE(108)
			this->get_leftButton()->set_visible(true);
		}
		HX_STACK_LINE(110)
		if ((this->_xml->has->resolve(HX_CSTRING("rightButton")))){
			HX_STACK_LINE(111)
			::String _g1 = this->_xml->att->resolve(HX_CSTRING("rightButton"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(111)
			this->set_rightButtonText(_g1);
			HX_STACK_LINE(112)
			this->get_rightButton()->set_visible(true);
		}
		HX_STACK_LINE(114)
		if ((this->_xml->has->resolve(HX_CSTRING("rightArrow")))){
			HX_STACK_LINE(115)
			::String _g2 = this->_xml->att->resolve(HX_CSTRING("rightArrow"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(115)
			this->set_rightButtonText(_g2);
			HX_STACK_LINE(116)
			this->get_rightButton()->set_visible(false);
			HX_STACK_LINE(117)
			this->get_rightArrow()->set_visible(true);
		}
		HX_STACK_LINE(119)
		if ((this->_xml->has->resolve(HX_CSTRING("leftArrow")))){
			HX_STACK_LINE(120)
			::String _g3 = this->_xml->att->resolve(HX_CSTRING("leftArrow"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(120)
			this->get_backButton()->set_text(_g3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UINavigationBar_obj,initialiseClassicButtons,(void))

Void UINavigationBar_obj::adjustButtons( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationBar","adjustButtons",0xa066e73b,"com.danielfreeman.madcomponents.UINavigationBar.adjustButtons","com/danielfreeman/madcomponents/UINavigationBar.hx",125,0x30b266aa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(126)
		Float _g = this->_rightArrow->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(126)
		Float _g1 = (this->_attributes->width - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(126)
		int _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(126)
		if ((this->_attributes->get_style7())){
			HX_STACK_LINE(126)
			_g2 = (int)6;
		}
		else{
			HX_STACK_LINE(126)
			_g2 = (int)0;
		}
		HX_STACK_LINE(126)
		Float _g3 = (_g1 - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(126)
		this->_rightArrow->set_x(_g3);
		HX_STACK_LINE(127)
		Float _g4 = this->_rightButton->get_width();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(127)
		Float _g5 = (this->_attributes->width - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(127)
		Float _g6 = (_g5 - (int)8);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(127)
		this->_rightButton->set_x(_g6);
		HX_STACK_LINE(128)
		this->_centrePanel->set_x((Float(this->_attributes->width) / Float((int)2)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UINavigationBar_obj,adjustButtons,(void))

::String UINavigationBar_obj::set_text( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationBar","set_text",0x552b3c81,"com.danielfreeman.madcomponents.UINavigationBar.set_text","com/danielfreeman/madcomponents/UINavigationBar.hx",134,0x30b266aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(135)
	this->_label->set_text(value);
	HX_STACK_LINE(136)
	this->_shadowLabel->set_text(value);
	HX_STACK_LINE(137)
	Float _g = this->_label->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(137)
	Float _g1 = (this->_attributes->width - _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(137)
	Float _g2 = (Float(_g1) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(137)
	this->_label->set_x(_g2);
	HX_STACK_LINE(138)
	Float _g3 = this->_label->get_x();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(138)
	Float _g4 = (_g3 - (int)1);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(138)
	this->_shadowLabel->set_x(_g4);
	HX_STACK_LINE(139)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UINavigationBar_obj,set_text,return )

::com::danielfreeman::madcomponents::UIButton UINavigationBar_obj::get_leftButton( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationBar","get_leftButton",0xea063bb9,"com.danielfreeman.madcomponents.UINavigationBar.get_leftButton","com/danielfreeman/madcomponents/UINavigationBar.hx",147,0x30b266aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	return this->_leftButton;
}


HX_DEFINE_DYNAMIC_FUNC0(UINavigationBar_obj,get_leftButton,return )

::String UINavigationBar_obj::set_leftButtonText( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationBar","set_leftButtonText",0xa2e3377a,"com.danielfreeman.madcomponents.UINavigationBar.set_leftButtonText","com/danielfreeman/madcomponents/UINavigationBar.hx",153,0x30b266aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(154)
	this->_leftButton->set_text(((HX_CSTRING("<font size=\"14\">") + value) + HX_CSTRING("</font>")));
	HX_STACK_LINE(155)
	this->_backButton->set_text(value);
	HX_STACK_LINE(156)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UINavigationBar_obj,set_leftButtonText,return )

::String UINavigationBar_obj::set_rightButtonText( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationBar","set_rightButtonText",0x7042ef67,"com.danielfreeman.madcomponents.UINavigationBar.set_rightButtonText","com/danielfreeman/madcomponents/UINavigationBar.hx",162,0x30b266aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(163)
	this->_rightButton->set_text(((HX_CSTRING("<font size=\"14\">") + value) + HX_CSTRING("</font>")));
	HX_STACK_LINE(164)
	this->_rightArrow->set_text(value);
	HX_STACK_LINE(165)
	this->adjustButtons();
	HX_STACK_LINE(166)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UINavigationBar_obj,set_rightButtonText,return )

::com::danielfreeman::madcomponents::UIBackButton UINavigationBar_obj::get_backButton( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationBar","get_backButton",0xf97f65d9,"com.danielfreeman.madcomponents.UINavigationBar.get_backButton","com/danielfreeman/madcomponents/UINavigationBar.hx",174,0x30b266aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(174)
	return this->_backButton;
}


HX_DEFINE_DYNAMIC_FUNC0(UINavigationBar_obj,get_backButton,return )

::com::danielfreeman::madcomponents::UIButton UINavigationBar_obj::get_rightButton( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationBar","get_rightButton",0x54caa48e,"com.danielfreeman.madcomponents.UINavigationBar.get_rightButton","com/danielfreeman/madcomponents/UINavigationBar.hx",181,0x30b266aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(181)
	return this->_rightButton;
}


HX_DEFINE_DYNAMIC_FUNC0(UINavigationBar_obj,get_rightButton,return )

::com::danielfreeman::madcomponents::UIBackButton UINavigationBar_obj::get_rightArrow( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationBar","get_rightArrow",0x09697ead,"com.danielfreeman.madcomponents.UINavigationBar.get_rightArrow","com/danielfreeman/madcomponents/UINavigationBar.hx",188,0x30b266aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(188)
	return this->_rightArrow;
}


HX_DEFINE_DYNAMIC_FUNC0(UINavigationBar_obj,get_rightArrow,return )

int UINavigationBar_obj::set_colour( int value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationBar","set_colour",0x51d2d520,"com.danielfreeman.madcomponents.UINavigationBar.set_colour","com/danielfreeman/madcomponents/UINavigationBar.hx",194,0x30b266aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(195)
	this->_colour = value;
	HX_STACK_LINE(196)
	this->drawBar();
	HX_STACK_LINE(197)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UINavigationBar_obj,set_colour,return )

int UINavigationBar_obj::get_colour( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationBar","get_colour",0x4e5536ac,"com.danielfreeman.madcomponents.UINavigationBar.get_colour","com/danielfreeman/madcomponents/UINavigationBar.hx",204,0x30b266aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(204)
	return this->_colour;
}


HX_DEFINE_DYNAMIC_FUNC0(UINavigationBar_obj,get_colour,return )

Float UINavigationBar_obj::set_fixwidth( Float value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationBar","set_fixwidth",0x9da519e5,"com.danielfreeman.madcomponents.UINavigationBar.set_fixwidth","com/danielfreeman/madcomponents/UINavigationBar.hx",211,0x30b266aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(212)
	this->_attributes->width = value;
	HX_STACK_LINE(213)
	Float _g = this->_label->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(213)
	Float _g1 = (this->_attributes->width - _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(213)
	Float _g2 = (Float(_g1) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(213)
	this->_label->set_x(_g2);
	HX_STACK_LINE(214)
	Float _g3 = this->_label->get_x();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(214)
	Float _g4 = (_g3 - (int)1);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(214)
	this->_shadowLabel->set_x(_g4);
	HX_STACK_LINE(215)
	this->adjustButtons();
	HX_STACK_LINE(216)
	this->drawBar();
	HX_STACK_LINE(217)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UINavigationBar_obj,set_fixwidth,return )

::openfl::display::Sprite UINavigationBar_obj::get_centrePanel( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationBar","get_centrePanel",0x8a7b4d89,"com.danielfreeman.madcomponents.UINavigationBar.get_centrePanel","com/danielfreeman/madcomponents/UINavigationBar.hx",222,0x30b266aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(222)
	return this->_centrePanel;
}


HX_DEFINE_DYNAMIC_FUNC0(UINavigationBar_obj,get_centrePanel,return )

::openfl::display::Sprite UINavigationBar_obj::set_centrePanel( ::openfl::display::Sprite value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationBar","set_centrePanel",0x8646ca95,"com.danielfreeman.madcomponents.UINavigationBar.set_centrePanel","com/danielfreeman/madcomponents/UINavigationBar.hx",226,0x30b266aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(227)
	if (((this->_centreItem != null()))){
		HX_STACK_LINE(228)
		this->_centrePanel->removeChild(this->_centreItem);
		HX_STACK_LINE(229)
		this->_centreItem = null();
	}
	HX_STACK_LINE(231)
	if (((value != null()))){
		HX_STACK_LINE(232)
		::openfl::display::Sprite _g = this->_centreItem = value;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(232)
		this->_centrePanel->addChild(_g);
		HX_STACK_LINE(233)
		Float _g1 = -(value->get_width());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(233)
		Float _g2 = (Float(_g1) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(233)
		value->set_x(_g2);
		HX_STACK_LINE(234)
		Float _g3 = value->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(234)
		Float _g4 = (46.0 - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(234)
		Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(234)
		value->set_y(_g5);
	}
	HX_STACK_LINE(236)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UINavigationBar_obj,set_centrePanel,return )

Void UINavigationBar_obj::drawBar( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationBar","drawBar",0x9d7ca538,"com.danielfreeman.madcomponents.UINavigationBar.drawBar","com/danielfreeman/madcomponents/UINavigationBar.hx",242,0x30b266aa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(243)
		::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(244)
		matr->createGradientBox(this->_attributes->width,46.0,(Float(::Math_obj::PI) / Float((int)2)),(int)0,(int)0);
		HX_STACK_LINE(245)
		this->get_graphics()->clear();
		HX_STACK_LINE(246)
		if ((this->_attributes->get_style7())){
			HX_STACK_LINE(247)
			this->get_graphics()->beginFill(this->_colour,null());
		}
		else{
			HX_STACK_LINE(250)
			int _g = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_colour,(int)64);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(250)
			int _g1 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(250)
			Dynamic _g2 = Dynamic( Array_obj<Dynamic>::__new().Add(_g).Add(_g1));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(250)
			this->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,_g2,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)255)),matr,null(),null(),null());
		}
		HX_STACK_LINE(252)
		this->get_graphics()->drawRect((int)0,(int)0,this->_attributes->width,46.0);
		HX_STACK_LINE(253)
		this->get_graphics()->endFill();
		HX_STACK_LINE(254)
		if ((this->_attributes->get_style7())){
			HX_STACK_LINE(255)
			int _g3 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(255)
			this->get_graphics()->beginFill(_g3,null());
			HX_STACK_LINE(256)
			this->get_graphics()->drawRect((int)0,45.,this->_attributes->width,(int)1);
			HX_STACK_LINE(257)
			this->get_graphics()->endFill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UINavigationBar_obj,drawBar,(void))

Float UINavigationBar_obj::get_height( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationBar","get_height",0x8a1a7647,"com.danielfreeman.madcomponents.UINavigationBar.get_height","com/danielfreeman/madcomponents/UINavigationBar.hx",263,0x30b266aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(263)
	return 46.0;
}


Void UINavigationBar_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationBar","destructor",0xab58d9d0,"com.danielfreeman.madcomponents.UINavigationBar.destructor","com/danielfreeman/madcomponents/UINavigationBar.hx",267,0x30b266aa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(268)
		this->_leftButton->destructor();
		HX_STACK_LINE(269)
		this->_rightButton->destructor();
		HX_STACK_LINE(270)
		this->_backButton->destructor();
		HX_STACK_LINE(271)
		this->_rightArrow->destructor();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UINavigationBar_obj,destructor,(void))

Float UINavigationBar_obj::HEIGHT;

int UINavigationBar_obj::COLOUR;

int UINavigationBar_obj::COLOUR7;

int UINavigationBar_obj::LEFTCOLOUR;

int UINavigationBar_obj::DONECOLOUR;

Float UINavigationBar_obj::SIDES;

Float UINavigationBar_obj::Y;


UINavigationBar_obj::UINavigationBar_obj()
{
}

void UINavigationBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UINavigationBar);
	HX_MARK_MEMBER_NAME(FORMAT,"FORMAT");
	HX_MARK_MEMBER_NAME(FORMAT7,"FORMAT7");
	HX_MARK_MEMBER_NAME(DARK_FORMAT,"DARK_FORMAT");
	HX_MARK_MEMBER_NAME(DARK_FORMAT7,"DARK_FORMAT7");
	HX_MARK_MEMBER_NAME(_label,"_label");
	HX_MARK_MEMBER_NAME(_shadowLabel,"_shadowLabel");
	HX_MARK_MEMBER_NAME(_leftButton,"_leftButton");
	HX_MARK_MEMBER_NAME(_backButton,"_backButton");
	HX_MARK_MEMBER_NAME(_attributes,"_attributes");
	HX_MARK_MEMBER_NAME(_rightButton,"_rightButton");
	HX_MARK_MEMBER_NAME(_rightArrow,"_rightArrow");
	HX_MARK_MEMBER_NAME(_colour,"_colour");
	HX_MARK_MEMBER_NAME(_centrePanel,"_centrePanel");
	HX_MARK_MEMBER_NAME(_centreItem,"_centreItem");
	HX_MARK_MEMBER_NAME(_xml,"_xml");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UINavigationBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(FORMAT,"FORMAT");
	HX_VISIT_MEMBER_NAME(FORMAT7,"FORMAT7");
	HX_VISIT_MEMBER_NAME(DARK_FORMAT,"DARK_FORMAT");
	HX_VISIT_MEMBER_NAME(DARK_FORMAT7,"DARK_FORMAT7");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	HX_VISIT_MEMBER_NAME(_shadowLabel,"_shadowLabel");
	HX_VISIT_MEMBER_NAME(_leftButton,"_leftButton");
	HX_VISIT_MEMBER_NAME(_backButton,"_backButton");
	HX_VISIT_MEMBER_NAME(_attributes,"_attributes");
	HX_VISIT_MEMBER_NAME(_rightButton,"_rightButton");
	HX_VISIT_MEMBER_NAME(_rightArrow,"_rightArrow");
	HX_VISIT_MEMBER_NAME(_colour,"_colour");
	HX_VISIT_MEMBER_NAME(_centrePanel,"_centrePanel");
	HX_VISIT_MEMBER_NAME(_centreItem,"_centreItem");
	HX_VISIT_MEMBER_NAME(_xml,"_xml");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UINavigationBar_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_xml") ) { return _xml; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { return get_colour(); }
		if (HX_FIELD_EQ(inName,"FORMAT") ) { return FORMAT; }
		if (HX_FIELD_EQ(inName,"_label") ) { return _label; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"FORMAT7") ) { return FORMAT7; }
		if (HX_FIELD_EQ(inName,"_colour") ) { return _colour; }
		if (HX_FIELD_EQ(inName,"drawBar") ) { return drawBar_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftButton") ) { return get_leftButton(); }
		if (HX_FIELD_EQ(inName,"backButton") ) { return get_backButton(); }
		if (HX_FIELD_EQ(inName,"rightArrow") ) { return get_rightArrow(); }
		if (HX_FIELD_EQ(inName,"set_colour") ) { return set_colour_dyn(); }
		if (HX_FIELD_EQ(inName,"get_colour") ) { return get_colour_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rightButton") ) { return get_rightButton(); }
		if (HX_FIELD_EQ(inName,"centrePanel") ) { return get_centrePanel(); }
		if (HX_FIELD_EQ(inName,"DARK_FORMAT") ) { return DARK_FORMAT; }
		if (HX_FIELD_EQ(inName,"_leftButton") ) { return _leftButton; }
		if (HX_FIELD_EQ(inName,"_backButton") ) { return _backButton; }
		if (HX_FIELD_EQ(inName,"_attributes") ) { return _attributes; }
		if (HX_FIELD_EQ(inName,"_rightArrow") ) { return _rightArrow; }
		if (HX_FIELD_EQ(inName,"_centreItem") ) { return _centreItem; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DARK_FORMAT7") ) { return DARK_FORMAT7; }
		if (HX_FIELD_EQ(inName,"_shadowLabel") ) { return _shadowLabel; }
		if (HX_FIELD_EQ(inName,"_rightButton") ) { return _rightButton; }
		if (HX_FIELD_EQ(inName,"_centrePanel") ) { return _centrePanel; }
		if (HX_FIELD_EQ(inName,"set_fixwidth") ) { return set_fixwidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"adjustButtons") ) { return adjustButtons_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_leftButton") ) { return get_leftButton_dyn(); }
		if (HX_FIELD_EQ(inName,"get_backButton") ) { return get_backButton_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rightArrow") ) { return get_rightArrow_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_rightButton") ) { return get_rightButton_dyn(); }
		if (HX_FIELD_EQ(inName,"get_centrePanel") ) { return get_centrePanel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_centrePanel") ) { return set_centrePanel_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_leftButtonText") ) { return set_leftButtonText_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_rightButtonText") ) { return set_rightButtonText_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"initialiseClassicButtons") ) { return initialiseClassicButtons_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UINavigationBar_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"_xml") ) { _xml=inValue.Cast< ::MadXML >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { return set_colour(inValue); }
		if (HX_FIELD_EQ(inName,"FORMAT") ) { FORMAT=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::com::danielfreeman::madcomponents::UILabel >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"FORMAT7") ) { FORMAT7=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colour") ) { _colour=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fixwidth") ) { return set_fixwidth(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"centrePanel") ) { return set_centrePanel(inValue); }
		if (HX_FIELD_EQ(inName,"DARK_FORMAT") ) { DARK_FORMAT=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_leftButton") ) { _leftButton=inValue.Cast< ::com::danielfreeman::madcomponents::UIButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_backButton") ) { _backButton=inValue.Cast< ::com::danielfreeman::madcomponents::UIBackButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_attributes") ) { _attributes=inValue.Cast< ::com::danielfreeman::madcomponents::Attributes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rightArrow") ) { _rightArrow=inValue.Cast< ::com::danielfreeman::madcomponents::UIBackButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_centreItem") ) { _centreItem=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DARK_FORMAT7") ) { DARK_FORMAT7=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shadowLabel") ) { _shadowLabel=inValue.Cast< ::com::danielfreeman::madcomponents::UILabel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rightButton") ) { _rightButton=inValue.Cast< ::com::danielfreeman::madcomponents::UIButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_centrePanel") ) { _centrePanel=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"leftButtonText") ) { return set_leftButtonText(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rightButtonText") ) { return set_rightButtonText(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UINavigationBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("leftButton"));
	outFields->push(HX_CSTRING("leftButtonText"));
	outFields->push(HX_CSTRING("rightButtonText"));
	outFields->push(HX_CSTRING("backButton"));
	outFields->push(HX_CSTRING("rightButton"));
	outFields->push(HX_CSTRING("rightArrow"));
	outFields->push(HX_CSTRING("colour"));
	outFields->push(HX_CSTRING("fixwidth"));
	outFields->push(HX_CSTRING("centrePanel"));
	outFields->push(HX_CSTRING("FORMAT"));
	outFields->push(HX_CSTRING("FORMAT7"));
	outFields->push(HX_CSTRING("DARK_FORMAT"));
	outFields->push(HX_CSTRING("DARK_FORMAT7"));
	outFields->push(HX_CSTRING("_label"));
	outFields->push(HX_CSTRING("_shadowLabel"));
	outFields->push(HX_CSTRING("_leftButton"));
	outFields->push(HX_CSTRING("_backButton"));
	outFields->push(HX_CSTRING("_attributes"));
	outFields->push(HX_CSTRING("_rightButton"));
	outFields->push(HX_CSTRING("_rightArrow"));
	outFields->push(HX_CSTRING("_colour"));
	outFields->push(HX_CSTRING("_centrePanel"));
	outFields->push(HX_CSTRING("_centreItem"));
	outFields->push(HX_CSTRING("_xml"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("HEIGHT"),
	HX_CSTRING("COLOUR"),
	HX_CSTRING("COLOUR7"),
	HX_CSTRING("LEFTCOLOUR"),
	HX_CSTRING("DONECOLOUR"),
	HX_CSTRING("SIDES"),
	HX_CSTRING("Y"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UINavigationBar_obj,FORMAT),HX_CSTRING("FORMAT")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UINavigationBar_obj,FORMAT7),HX_CSTRING("FORMAT7")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UINavigationBar_obj,DARK_FORMAT),HX_CSTRING("DARK_FORMAT")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UINavigationBar_obj,DARK_FORMAT7),HX_CSTRING("DARK_FORMAT7")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UILabel*/ ,(int)offsetof(UINavigationBar_obj,_label),HX_CSTRING("_label")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UILabel*/ ,(int)offsetof(UINavigationBar_obj,_shadowLabel),HX_CSTRING("_shadowLabel")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UIButton*/ ,(int)offsetof(UINavigationBar_obj,_leftButton),HX_CSTRING("_leftButton")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UIBackButton*/ ,(int)offsetof(UINavigationBar_obj,_backButton),HX_CSTRING("_backButton")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::Attributes*/ ,(int)offsetof(UINavigationBar_obj,_attributes),HX_CSTRING("_attributes")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UIButton*/ ,(int)offsetof(UINavigationBar_obj,_rightButton),HX_CSTRING("_rightButton")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UIBackButton*/ ,(int)offsetof(UINavigationBar_obj,_rightArrow),HX_CSTRING("_rightArrow")},
	{hx::fsInt,(int)offsetof(UINavigationBar_obj,_colour),HX_CSTRING("_colour")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UINavigationBar_obj,_centrePanel),HX_CSTRING("_centrePanel")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UINavigationBar_obj,_centreItem),HX_CSTRING("_centreItem")},
	{hx::fsObject /*::MadXML*/ ,(int)offsetof(UINavigationBar_obj,_xml),HX_CSTRING("_xml")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("FORMAT"),
	HX_CSTRING("FORMAT7"),
	HX_CSTRING("DARK_FORMAT"),
	HX_CSTRING("DARK_FORMAT7"),
	HX_CSTRING("_label"),
	HX_CSTRING("_shadowLabel"),
	HX_CSTRING("_leftButton"),
	HX_CSTRING("_backButton"),
	HX_CSTRING("_attributes"),
	HX_CSTRING("_rightButton"),
	HX_CSTRING("_rightArrow"),
	HX_CSTRING("_colour"),
	HX_CSTRING("_centrePanel"),
	HX_CSTRING("_centreItem"),
	HX_CSTRING("_xml"),
	HX_CSTRING("initialiseClassicButtons"),
	HX_CSTRING("adjustButtons"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_leftButton"),
	HX_CSTRING("set_leftButtonText"),
	HX_CSTRING("set_rightButtonText"),
	HX_CSTRING("get_backButton"),
	HX_CSTRING("get_rightButton"),
	HX_CSTRING("get_rightArrow"),
	HX_CSTRING("set_colour"),
	HX_CSTRING("get_colour"),
	HX_CSTRING("set_fixwidth"),
	HX_CSTRING("get_centrePanel"),
	HX_CSTRING("set_centrePanel"),
	HX_CSTRING("drawBar"),
	HX_CSTRING("get_height"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UINavigationBar_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UINavigationBar_obj::HEIGHT,"HEIGHT");
	HX_MARK_MEMBER_NAME(UINavigationBar_obj::COLOUR,"COLOUR");
	HX_MARK_MEMBER_NAME(UINavigationBar_obj::COLOUR7,"COLOUR7");
	HX_MARK_MEMBER_NAME(UINavigationBar_obj::LEFTCOLOUR,"LEFTCOLOUR");
	HX_MARK_MEMBER_NAME(UINavigationBar_obj::DONECOLOUR,"DONECOLOUR");
	HX_MARK_MEMBER_NAME(UINavigationBar_obj::SIDES,"SIDES");
	HX_MARK_MEMBER_NAME(UINavigationBar_obj::Y,"Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UINavigationBar_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UINavigationBar_obj::HEIGHT,"HEIGHT");
	HX_VISIT_MEMBER_NAME(UINavigationBar_obj::COLOUR,"COLOUR");
	HX_VISIT_MEMBER_NAME(UINavigationBar_obj::COLOUR7,"COLOUR7");
	HX_VISIT_MEMBER_NAME(UINavigationBar_obj::LEFTCOLOUR,"LEFTCOLOUR");
	HX_VISIT_MEMBER_NAME(UINavigationBar_obj::DONECOLOUR,"DONECOLOUR");
	HX_VISIT_MEMBER_NAME(UINavigationBar_obj::SIDES,"SIDES");
	HX_VISIT_MEMBER_NAME(UINavigationBar_obj::Y,"Y");
};

#endif

Class UINavigationBar_obj::__mClass;

void UINavigationBar_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UINavigationBar"), hx::TCanCast< UINavigationBar_obj> ,sStaticFields,sMemberFields,
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

void UINavigationBar_obj::__boot()
{
	HEIGHT= 46.0;
	COLOUR= (int)10066363;
	COLOUR7= (int)16185078;
	LEFTCOLOUR= (int)7829418;
	DONECOLOUR= (int)11171703;
	SIDES= 100.0;
	Y= (int)6;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
