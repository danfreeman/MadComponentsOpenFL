#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_IContainerUI
#include <com/danielfreeman/madcomponents/IContainerUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadMasking
#include <com/danielfreeman/madcomponents/MadMasking.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIButton
#include <com/danielfreeman/madcomponents/UIButton.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIPages
#include <com/danielfreeman/madcomponents/UIPages.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
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
#ifndef INCLUDED_openfl_text_TextFormatAlign
#include <openfl/text/TextFormatAlign.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UIButton_obj::__construct(::openfl::display::Sprite screen,Float xx,Float yy,::String text,hx::Null< int >  __o_colour,Array< int > colours,hx::Null< bool >  __o_tiny,hx::Null< bool >  __o_style7)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButton","new",0x8660170c,"com.danielfreeman.madcomponents.UIButton.new","com/danielfreeman/madcomponents/UIButton.hx",74,0x0cafaf81)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xx,"xx")
HX_STACK_ARG(yy,"yy")
HX_STACK_ARG(text,"text")
HX_STACK_ARG(__o_colour,"colour")
HX_STACK_ARG(colours,"colours")
HX_STACK_ARG(__o_tiny,"tiny")
HX_STACK_ARG(__o_style7,"style7")
int colour = __o_colour.Default(10066346);
bool tiny = __o_tiny.Default(false);
bool style7 = __o_style7.Default(false);
{
	HX_STACK_LINE(118)
	this->_transition = HX_CSTRING("");
	HX_STACK_LINE(117)
	this->_goTo = HX_CSTRING("");
	HX_STACK_LINE(116)
	this->_alt = false;
	HX_STACK_LINE(114)
	this->_skinHeight = (int)-1;
	HX_STACK_LINE(112)
	this->_border = (int)2;
	HX_STACK_LINE(110)
	this->_sizeY = 7.0;
	HX_STACK_LINE(109)
	this->_enabled = false;
	HX_STACK_LINE(108)
	this->_gap = 10.0;
	HX_STACK_LINE(106)
	this->_alpha = (int)0;
	HX_STACK_LINE(105)
	this->_fixwidth = (int)0;
	HX_STACK_LINE(101)
	this->_darkFormat = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Tahoma"),(int)17,(int)1118481,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(97)
	this->FORMAT7 = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Tahoma"),(int)17,(int)752108,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(96)
	this->FORMAT = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Tahoma"),(int)17,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(125)
	if ((tiny)){
		HX_STACK_LINE(126)
		this->_sizeY = 7.0;
		HX_STACK_LINE(127)
		this->_border = 0.5;
		HX_STACK_LINE(128)
		this->_alt = true;
	}
	HX_STACK_LINE(130)
	if ((style7)){
		HX_STACK_LINE(130)
		this->_format = this->FORMAT7;
	}
	else{
		HX_STACK_LINE(130)
		this->_format = this->FORMAT;
	}
	HX_STACK_LINE(132)
	super::__construct(screen,null());
	HX_STACK_LINE(133)
	this->set_x(xx);
	HX_STACK_LINE(134)
	this->set_y(yy);
	HX_STACK_LINE(135)
	this->_style7 = style7;
	HX_STACK_LINE(136)
	if (((bool((colours != null())) && bool((colours->length == (int)1))))){
		HX_STACK_LINE(136)
		this->_colour = colours->__get((int)0);
	}
	else{
		HX_STACK_LINE(136)
		this->_colour = colour;
	}
	HX_STACK_LINE(137)
	if (((colours != null()))){
		HX_STACK_LINE(137)
		this->_colours = colours;
	}
	else{
		HX_STACK_LINE(137)
		this->_colours = Array_obj< int >::__new();
	}
	HX_STACK_LINE(138)
	this->init();
	HX_STACK_LINE(139)
	if (((this->_colours->length > (int)3))){
		HX_STACK_LINE(139)
		int _int = this->_colours->__get((int)3);		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(139)
		if (((_int < (int)0))){
			HX_STACK_LINE(139)
			this->_curve = (4294967296.0 + _int);
		}
		else{
			HX_STACK_LINE(139)
			this->_curve = (_int + 0.0);
		}
	}
	else{
		HX_STACK_LINE(139)
		this->_curve = 16.0;
	}
	HX_STACK_LINE(140)
	if (((this->_colours->length > (int)4))){
		HX_STACK_LINE(141)
		this->_colours = Array_obj< int >::__new();
	}
	HX_STACK_LINE(143)
	Float _g = ::com::danielfreeman::madcomponents::Colour_obj::power(this->_colour);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(143)
	Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(143)
	if (((_g > 0.5))){
		HX_STACK_LINE(143)
		_g1 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,null());
	}
	else{
		HX_STACK_LINE(143)
		_g1 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,(int)-128);
	}
	HX_STACK_LINE(143)
	this->_darkFormat->color = _g1;
	HX_STACK_LINE(144)
	::String _g2 = this->_darkFormat->align = ::openfl::text::TextFormatAlign_obj::CENTER;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(144)
	this->_format->align = _g2;
	HX_STACK_LINE(145)
	::com::danielfreeman::madcomponents::UILabel _g3 = ::com::danielfreeman::madcomponents::UILabel_obj::__new(hx::ObjectPtr<OBJ_>(this),(this->_gap - 1.0),((this->_sizeY - 1.0) - (int)1),HX_CSTRING(" "),this->_darkFormat);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(145)
	this->_shadowLabel = _g3;
	HX_STACK_LINE(146)
	this->_shadowLabel->set_visible(!(style7));
	HX_STACK_LINE(147)
	::com::danielfreeman::madcomponents::UILabel _g4 = ::com::danielfreeman::madcomponents::UILabel_obj::__new(hx::ObjectPtr<OBJ_>(this),this->_gap,(this->_sizeY - (int)1),HX_CSTRING(" "),this->_format);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(147)
	this->_label = _g4;
	HX_STACK_LINE(148)
	bool _g5 = this->_shadowLabel->set_multiline(true);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(148)
	this->_label->set_multiline(_g5);
	HX_STACK_LINE(149)
	this->set_text(text);
	HX_STACK_LINE(150)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null(),null(),null());
	HX_STACK_LINE(151)
	bool _g6 = this->useHandCursor = true;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(151)
	this->buttonMode = _g6;
}
;
	return null();
}

//UIButton_obj::~UIButton_obj() { }

Dynamic UIButton_obj::__CreateEmpty() { return  new UIButton_obj; }
hx::ObjectPtr< UIButton_obj > UIButton_obj::__new(::openfl::display::Sprite screen,Float xx,Float yy,::String text,hx::Null< int >  __o_colour,Array< int > colours,hx::Null< bool >  __o_tiny,hx::Null< bool >  __o_style7)
{  hx::ObjectPtr< UIButton_obj > result = new UIButton_obj();
	result->__construct(screen,xx,yy,text,__o_colour,colours,__o_tiny,__o_style7);
	return result;}

Dynamic UIButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIButton_obj > result = new UIButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

::com::danielfreeman::madcomponents::UILabel UIButton_obj::get_label( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButton","get_label",0x1948f9f7,"com.danielfreeman.madcomponents.UIButton.get_label","com/danielfreeman/madcomponents/UIButton.hx",156,0x0cafaf81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	return this->_label;
}


HX_DEFINE_DYNAMIC_FUNC0(UIButton_obj,get_label,return )

::com::danielfreeman::madcomponents::UILabel UIButton_obj::get_shadowLabel( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButton","get_shadowLabel",0x8f0e7a37,"com.danielfreeman.madcomponents.UIButton.get_shadowLabel","com/danielfreeman/madcomponents/UIButton.hx",161,0x0cafaf81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	return this->_shadowLabel;
}


HX_DEFINE_DYNAMIC_FUNC0(UIButton_obj,get_shadowLabel,return )

bool UIButton_obj::set_alt( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButton","set_alt",0xab535f78,"com.danielfreeman.madcomponents.UIButton.set_alt","com/danielfreeman/madcomponents/UIButton.hx",165,0x0cafaf81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(166)
	if ((value)){
		HX_STACK_LINE(166)
		this->_sizeY = 7.0;
	}
	else{
		HX_STACK_LINE(166)
		this->_sizeY = 7.0;
	}
	HX_STACK_LINE(167)
	if ((value)){
		HX_STACK_LINE(167)
		this->_border = 0.5;
	}
	else{
		HX_STACK_LINE(167)
		this->_border = 2.0;
	}
	HX_STACK_LINE(168)
	this->drawButton(null());
	HX_STACK_LINE(169)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIButton_obj,set_alt,return )

Void UIButton_obj::init( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButton","init",0x0a6ccae4,"com.danielfreeman.madcomponents.UIButton.init","com/danielfreeman/madcomponents/UIButton.hx",174,0x0cafaf81)
		HX_STACK_THIS(this)
		HX_STACK_LINE(174)
		if (((this->_colours->length > (int)3))){
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIButton_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIButton.hx",175,0x0cafaf81)
					{
						HX_STACK_LINE(175)
						int _int = __this->_colours->__get((int)3);		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(175)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIButton.hx",175,0x0cafaf81)
					{
						HX_STACK_LINE(175)
						int _int = (int)3;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(175)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(175)
			Float _g = ::Math_obj::max((Float(_Function_2_1::Block(this)) / Float(_Function_2_2::Block())),10.0);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(175)
			this->_gap = _g;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIButton_obj,init,(void))

Void UIButton_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButton","mouseDown",0x54b340d3,"com.danielfreeman.madcomponents.UIButton.mouseDown","com/danielfreeman/madcomponents/UIButton.hx",180,0x0cafaf81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(181)
		this->drawButton(true);
		HX_STACK_LINE(182)
		this->_enabled = true;
		HX_STACK_LINE(183)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIButton_obj,mouseDown,(void))

Void UIButton_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButton","mouseUp",0x5206008c,"com.danielfreeman.madcomponents.UIButton.mouseUp","com/danielfreeman/madcomponents/UIButton.hx",187,0x0cafaf81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(188)
		this->drawButton(null());
		HX_STACK_LINE(189)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIButton_obj > __this,::openfl::events::MouseEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIButton.hx",190,0x0cafaf81)
				{
					HX_STACK_LINE(190)
					Dynamic _g = event->get_target();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(190)
					return (_g == __this);
				}
				return null();
			}
		};
		HX_STACK_LINE(190)
		if (((  ((this->_enabled)) ? bool(_Function_1_1::Block(this,event)) : bool(false) ))){
			HX_STACK_LINE(191)
			if (((this->_goTo != HX_CSTRING("")))){
				HX_STACK_LINE(192)
				this->changePage();
			}
			HX_STACK_LINE(194)
			::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(HX_CSTRING("buttonClicked"),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(194)
			this->dispatchEvent(_g1);
		}
		HX_STACK_LINE(196)
		this->_enabled = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIButton_obj,mouseUp,(void))

Void UIButton_obj::changePage( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButton","changePage",0xf12836b3,"com.danielfreeman.madcomponents.UIButton.changePage","com/danielfreeman/madcomponents/UIButton.hx",200,0x0cafaf81)
		HX_STACK_THIS(this)
		HX_STACK_LINE(201)
		::openfl::display::DisplayObject level = this->get_parent();		HX_STACK_VAR(level,"level");
		HX_STACK_LINE(202)
		bool found = false;		HX_STACK_VAR(found,"found");
		HX_STACK_LINE(203)
		while((true)){
			HX_STACK_LINE(203)
			::openfl::display::Stage _g = this->get_stage();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(203)
			if ((!(((  (((level != _g))) ? bool(!(found)) : bool(false) ))))){
				HX_STACK_LINE(203)
				break;
			}
			HX_STACK_LINE(204)
			if ((::Std_obj::is(level,hx::ClassOf< ::com::danielfreeman::madcomponents::UIPages >()))){
				HX_STACK_LINE(205)
				bool _g1 = (hx::TCast< com::danielfreeman::madcomponents::UIPages >::cast(level))->goToPageId(this->_goTo,this->_transition);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(205)
				found = _g1;
			}
			HX_STACK_LINE(207)
			::openfl::display::DisplayObjectContainer _g2 = level->get_parent();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(207)
			level = _g2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIButton_obj,changePage,(void))

Void UIButton_obj::touchCancel( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButton","touchCancel",0x4c5f2545,"com.danielfreeman.madcomponents.UIButton.touchCancel","com/danielfreeman/madcomponents/UIButton.hx",212,0x0cafaf81)
		HX_STACK_THIS(this)
		HX_STACK_LINE(213)
		this->drawButton(null());
		HX_STACK_LINE(214)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(215)
		this->_enabled = false;
	}
return null();
}


::String UIButton_obj::set_text( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButton","set_text",0x4a29eb7e,"com.danielfreeman.madcomponents.UIButton.set_text","com/danielfreeman/madcomponents/UIButton.hx",221,0x0cafaf81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(222)
	if (((value == HX_CSTRING("")))){
		HX_STACK_LINE(223)
		value = HX_CSTRING(" ");
	}
	HX_STACK_LINE(225)
	if ((::MadXML_obj::parse(((HX_CSTRING("<t>") + value) + HX_CSTRING("</t>")))->get_hasChildren())){
		HX_STACK_LINE(227)
		this->_label->set_htmlText(value);
		HX_STACK_LINE(228)
		this->_shadowLabel->set_htmlText(value);
		HX_STACK_LINE(229)
		::openfl::text::TextFormat _g = ::openfl::text::TextFormat_obj::__new(null(),null(),this->_darkFormat->color,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(229)
		this->_shadowLabel->setTextFormat(_g,null(),null());
	}
	else{
		HX_STACK_LINE(232)
		this->_label->set_text(value);
		HX_STACK_LINE(233)
		this->_shadowLabel->set_text(value);
	}
	HX_STACK_LINE(235)
	this->_textColour = this->_label->getTextFormat(null(),null())->color;
	HX_STACK_LINE(236)
	this->drawButton(null());
	HX_STACK_LINE(237)
	return value;
}


Float UIButton_obj::set_fixwidth( Float value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButton","set_fixwidth",0x4ef38b62,"com.danielfreeman.madcomponents.UIButton.set_fixwidth","com/danielfreeman/madcomponents/UIButton.hx",243,0x0cafaf81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(244)
	this->_fixwidth = value;
	HX_STACK_LINE(245)
	this->drawButton(null());
	HX_STACK_LINE(246)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIButton_obj,set_fixwidth,return )

int UIButton_obj::set_colour( int value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButton","set_colour",0x8718fd5d,"com.danielfreeman.madcomponents.UIButton.set_colour","com/danielfreeman/madcomponents/UIButton.hx",252,0x0cafaf81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(253)
	this->_colour = value;
	HX_STACK_LINE(254)
	Float _g = ::com::danielfreeman::madcomponents::Colour_obj::power(this->_colour);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(254)
	Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(254)
	if (((_g > 0.5))){
		HX_STACK_LINE(254)
		_g1 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,null());
	}
	else{
		HX_STACK_LINE(254)
		_g1 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,(int)-128);
	}
	HX_STACK_LINE(254)
	this->_darkFormat->color = _g1;
	HX_STACK_LINE(255)
	this->drawButton(null());
	HX_STACK_LINE(256)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIButton_obj,set_colour,return )

Float UIButton_obj::set_curve( Float value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButton","set_curve",0xdb4324be,"com.danielfreeman.madcomponents.UIButton.set_curve","com/danielfreeman/madcomponents/UIButton.hx",262,0x0cafaf81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(263)
	this->_curve = value;
	HX_STACK_LINE(264)
	this->drawButton(null());
	HX_STACK_LINE(265)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIButton_obj,set_curve,return )

Void UIButton_obj::setGoTo( ::String goTo,::String __o_transition){
::String transition = __o_transition.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButton","setGoTo",0x9b80cb31,"com.danielfreeman.madcomponents.UIButton.setGoTo","com/danielfreeman/madcomponents/UIButton.hx",269,0x0cafaf81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(goTo,"goTo")
	HX_STACK_ARG(transition,"transition")
{
		HX_STACK_LINE(270)
		this->_goTo = goTo;
		HX_STACK_LINE(271)
		this->_transition = transition;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIButton_obj,setGoTo,(void))

Float UIButton_obj::sizeY( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButton","sizeY",0xd3855224,"com.danielfreeman.madcomponents.UIButton.sizeY","com/danielfreeman/madcomponents/UIButton.hx",276,0x0cafaf81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(276)
	return ((int)2 * this->_sizeY);
}


HX_DEFINE_DYNAMIC_FUNC0(UIButton_obj,sizeY,return )

Void UIButton_obj::drawButton( hx::Null< bool >  __o_pressed){
bool pressed = __o_pressed.Default(false);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButton","drawButton",0xe83103ea,"com.danielfreeman.madcomponents.UIButton.drawButton","com/danielfreeman/madcomponents/UIButton.hx",280,0x0cafaf81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pressed,"pressed")
{
		HX_STACK_LINE(281)
		Float _g = this->_label->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(281)
		Float _g1 = (_g + ((int)2 * this->_gap));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(281)
		Float width = ::Math_obj::max(this->_fixwidth,_g1);		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(282)
		this->get_graphics()->clear();
		HX_STACK_LINE(284)
		Float height;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(284)
		if (((this->_skinHeight > (int)0))){
			HX_STACK_LINE(284)
			height = this->_skinHeight;
		}
		else{
			HX_STACK_LINE(284)
			Float _g2 = this->_label->get_height();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(284)
			Float _g3 = this->sizeY();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(284)
			height = (_g2 + _g3);
		}
		HX_STACK_LINE(285)
		::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(286)
		Array< int > gradient;		HX_STACK_VAR(gradient,"gradient");
		HX_STACK_LINE(286)
		if ((pressed)){
			HX_STACK_LINE(286)
			int _g4 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,(int)128);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(286)
			int _g5 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_colour,null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(286)
			int _g6 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(286)
			gradient = Array_obj< int >::__new().Add(_g4).Add(_g5).Add(_g6);
		}
		else{
			HX_STACK_LINE(286)
			int _g7 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_colour,(int)80);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(286)
			int _g8 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,null());		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(286)
			int _g9 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,null());		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(286)
			gradient = Array_obj< int >::__new().Add(_g7).Add(_g8).Add(_g9);
		}
		HX_STACK_LINE(287)
		matr->createGradientBox(width,height,(Float(::Math_obj::PI) / Float((int)2)),(int)0,(int)0);
		HX_STACK_LINE(288)
		if (((this->_colours->length > (int)0))){
			HX_STACK_LINE(289)
			this->get_graphics()->beginFill(this->_colours->__get((int)0),null());
		}
		else{
			HX_STACK_LINE(292)
			if ((this->_style7)){
				HX_STACK_LINE(293)
				int colour7;		HX_STACK_VAR(colour7,"colour7");
				HX_STACK_LINE(293)
				if (((this->_colours->length > (int)0))){
					HX_STACK_LINE(293)
					colour7 = this->_colours->__get((int)0);
				}
				else{
					HX_STACK_LINE(293)
					colour7 = this->_colour;
				}
				HX_STACK_LINE(294)
				int _g10;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(294)
				if ((pressed)){
					HX_STACK_LINE(294)
					_g10 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(colour7,(int)8);
				}
				else{
					HX_STACK_LINE(294)
					_g10 = colour7;
				}
				HX_STACK_LINE(294)
				this->get_graphics()->beginFill(_g10,null());
			}
			else{
				HX_STACK_LINE(297)
				int _g11 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,null());		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(297)
				int _g12 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_colour,null());		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(297)
				Dynamic _g13 = Dynamic( Array_obj<Dynamic>::__new().Add(_g11).Add(_g12));		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(297)
				this->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,_g13,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)255)),matr,null(),null(),null());
			}
		}
		HX_STACK_LINE(300)
		this->get_graphics()->drawRoundRect((int)0,(int)0,width,height,this->_curve,null());
		HX_STACK_LINE(302)
		if ((!(this->_style7))){
			HX_STACK_LINE(303)
			if (((bool((this->_colours->length > (int)2)) && bool(pressed)))){
				HX_STACK_LINE(304)
				this->get_graphics()->beginFill(this->_colours->__get((int)2),null());
			}
			else{
				HX_STACK_LINE(306)
				if (((this->_colours->length > (int)1))){
					HX_STACK_LINE(307)
					this->get_graphics()->beginFill(this->_colours->__get((int)1),null());
				}
				else{
					HX_STACK_LINE(310)
					this->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,gradient,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)128).Add((int)255)),matr,null(),null(),null());
				}
			}
			HX_STACK_LINE(312)
			this->get_graphics()->drawRoundRect(this->_border,this->_border,(width - ((int)2 * this->_border)),(height - ((int)2 * this->_border)),this->_curve,null());
		}
		HX_STACK_LINE(314)
		if (((this->_skinHeight > (int)0))){
			HX_STACK_LINE(315)
			Float _g14 = this->_label->get_height();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(315)
			Float _g15 = (this->_skinHeight - _g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(315)
			Float _g16 = (Float(_g15) / Float((int)2));		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(315)
			this->_label->set_y(_g16);
			HX_STACK_LINE(316)
			Float _g17 = this->_label->get_y();		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(316)
			Float _g18 = (_g17 - (int)1);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(316)
			this->_shadowLabel->set_y(_g18);
		}
		else{
			HX_STACK_LINE(319)
			this->_label->set_y((this->_sizeY - (int)1));
			HX_STACK_LINE(320)
			this->_shadowLabel->set_y(((this->_sizeY - 1.0) - (int)1));
		}
		HX_STACK_LINE(323)
		Float _g19 = this->_label->get_width();		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(323)
		Float _g20 = (_g19 + ((int)2 * this->_gap));		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(323)
		if (((this->_fixwidth > _g20))){
			HX_STACK_LINE(324)
			Float _g21 = this->_label->get_width();		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(324)
			Float _g22 = (this->_fixwidth - _g21);		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(324)
			Float _g23 = (Float(_g22) / Float((int)2));		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(324)
			this->_label->set_x(_g23);
			HX_STACK_LINE(325)
			Float _g24 = this->_label->get_x();		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(325)
			Float _g25 = (_g24 - (int)1);		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(325)
			this->_shadowLabel->set_x(_g25);
		}
		else{
			HX_STACK_LINE(328)
			this->_label->set_x(this->_gap);
			HX_STACK_LINE(329)
			this->_shadowLabel->set_x((this->_gap - 1.0));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIButton_obj,drawButton,(void))

Float UIButton_obj::set_skinHeight( Float value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButton","set_skinHeight",0x8f459fd5,"com.danielfreeman.madcomponents.UIButton.set_skinHeight","com/danielfreeman/madcomponents/UIButton.hx",336,0x0cafaf81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(337)
	this->_skinHeight = value;
	HX_STACK_LINE(338)
	this->drawButton(null());
	HX_STACK_LINE(339)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIButton_obj,set_skinHeight,return )

Void UIButton_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButton","destructor",0xe09f020d,"com.danielfreeman.madcomponents.UIButton.destructor","com/danielfreeman/madcomponents/UIButton.hx",343,0x0cafaf81)
		HX_STACK_THIS(this)
		HX_STACK_LINE(344)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null());
		HX_STACK_LINE(345)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
	}
return null();
}


::String UIButton_obj::CLICKED;

int UIButton_obj::HIGHLIGHT;

Float UIButton_obj::SHADOW_OFFSET;

Float UIButton_obj::CURVE;

Float UIButton_obj::SIZE_X;

Float UIButton_obj::SIZE_Y;

Float UIButton_obj::TINY_SIZE_Y;


UIButton_obj::UIButton_obj()
{
}

void UIButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIButton);
	HX_MARK_MEMBER_NAME(FORMAT,"FORMAT");
	HX_MARK_MEMBER_NAME(FORMAT7,"FORMAT7");
	HX_MARK_MEMBER_NAME(_format,"_format");
	HX_MARK_MEMBER_NAME(_darkFormat,"_darkFormat");
	HX_MARK_MEMBER_NAME(_label,"_label");
	HX_MARK_MEMBER_NAME(_shadowLabel,"_shadowLabel");
	HX_MARK_MEMBER_NAME(_colour,"_colour");
	HX_MARK_MEMBER_NAME(_fixwidth,"_fixwidth");
	HX_MARK_MEMBER_NAME(_alpha,"_alpha");
	HX_MARK_MEMBER_NAME(_colours,"_colours");
	HX_MARK_MEMBER_NAME(_gap,"_gap");
	HX_MARK_MEMBER_NAME(_enabled,"_enabled");
	HX_MARK_MEMBER_NAME(_sizeY,"_sizeY");
	HX_MARK_MEMBER_NAME(_curve,"_curve");
	HX_MARK_MEMBER_NAME(_border,"_border");
	HX_MARK_MEMBER_NAME(_skinHeight,"_skinHeight");
	HX_MARK_MEMBER_NAME(_defaultWidth,"_defaultWidth");
	HX_MARK_MEMBER_NAME(_alt,"_alt");
	HX_MARK_MEMBER_NAME(_goTo,"_goTo");
	HX_MARK_MEMBER_NAME(_transition,"_transition");
	HX_MARK_MEMBER_NAME(_style7,"_style7");
	HX_MARK_MEMBER_NAME(_textColour,"_textColour");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(FORMAT,"FORMAT");
	HX_VISIT_MEMBER_NAME(FORMAT7,"FORMAT7");
	HX_VISIT_MEMBER_NAME(_format,"_format");
	HX_VISIT_MEMBER_NAME(_darkFormat,"_darkFormat");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	HX_VISIT_MEMBER_NAME(_shadowLabel,"_shadowLabel");
	HX_VISIT_MEMBER_NAME(_colour,"_colour");
	HX_VISIT_MEMBER_NAME(_fixwidth,"_fixwidth");
	HX_VISIT_MEMBER_NAME(_alpha,"_alpha");
	HX_VISIT_MEMBER_NAME(_colours,"_colours");
	HX_VISIT_MEMBER_NAME(_gap,"_gap");
	HX_VISIT_MEMBER_NAME(_enabled,"_enabled");
	HX_VISIT_MEMBER_NAME(_sizeY,"_sizeY");
	HX_VISIT_MEMBER_NAME(_curve,"_curve");
	HX_VISIT_MEMBER_NAME(_border,"_border");
	HX_VISIT_MEMBER_NAME(_skinHeight,"_skinHeight");
	HX_VISIT_MEMBER_NAME(_defaultWidth,"_defaultWidth");
	HX_VISIT_MEMBER_NAME(_alt,"_alt");
	HX_VISIT_MEMBER_NAME(_goTo,"_goTo");
	HX_VISIT_MEMBER_NAME(_transition,"_transition");
	HX_VISIT_MEMBER_NAME(_style7,"_style7");
	HX_VISIT_MEMBER_NAME(_textColour,"_textColour");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_gap") ) { return _gap; }
		if (HX_FIELD_EQ(inName,"_alt") ) { return _alt; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return get_label(); }
		if (HX_FIELD_EQ(inName,"_goTo") ) { return _goTo; }
		if (HX_FIELD_EQ(inName,"sizeY") ) { return sizeY_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"FORMAT") ) { return FORMAT; }
		if (HX_FIELD_EQ(inName,"_label") ) { return _label; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { return _alpha; }
		if (HX_FIELD_EQ(inName,"_sizeY") ) { return _sizeY; }
		if (HX_FIELD_EQ(inName,"_curve") ) { return _curve; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"FORMAT7") ) { return FORMAT7; }
		if (HX_FIELD_EQ(inName,"_format") ) { return _format; }
		if (HX_FIELD_EQ(inName,"_colour") ) { return _colour; }
		if (HX_FIELD_EQ(inName,"_border") ) { return _border; }
		if (HX_FIELD_EQ(inName,"_style7") ) { return _style7; }
		if (HX_FIELD_EQ(inName,"set_alt") ) { return set_alt_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"setGoTo") ) { return setGoTo_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_colours") ) { return _colours; }
		if (HX_FIELD_EQ(inName,"_enabled") ) { return _enabled; }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fixwidth") ) { return _fixwidth; }
		if (HX_FIELD_EQ(inName,"get_label") ) { return get_label_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"set_curve") ) { return set_curve_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"changePage") ) { return changePage_dyn(); }
		if (HX_FIELD_EQ(inName,"set_colour") ) { return set_colour_dyn(); }
		if (HX_FIELD_EQ(inName,"drawButton") ) { return drawButton_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shadowLabel") ) { return get_shadowLabel(); }
		if (HX_FIELD_EQ(inName,"_darkFormat") ) { return _darkFormat; }
		if (HX_FIELD_EQ(inName,"_skinHeight") ) { return _skinHeight; }
		if (HX_FIELD_EQ(inName,"_transition") ) { return _transition; }
		if (HX_FIELD_EQ(inName,"_textColour") ) { return _textColour; }
		if (HX_FIELD_EQ(inName,"touchCancel") ) { return touchCancel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_shadowLabel") ) { return _shadowLabel; }
		if (HX_FIELD_EQ(inName,"set_fixwidth") ) { return set_fixwidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_defaultWidth") ) { return _defaultWidth; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_skinHeight") ) { return set_skinHeight_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_shadowLabel") ) { return get_shadowLabel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"alt") ) { return set_alt(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_gap") ) { _gap=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alt") ) { _alt=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"curve") ) { return set_curve(inValue); }
		if (HX_FIELD_EQ(inName,"_goTo") ) { _goTo=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { return set_colour(inValue); }
		if (HX_FIELD_EQ(inName,"FORMAT") ) { FORMAT=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::com::danielfreeman::madcomponents::UILabel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sizeY") ) { _sizeY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curve") ) { _curve=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"FORMAT7") ) { FORMAT7=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_format") ) { _format=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colour") ) { _colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_border") ) { _border=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_style7") ) { _style7=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fixwidth") ) { return set_fixwidth(inValue); }
		if (HX_FIELD_EQ(inName,"_colours") ) { _colours=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enabled") ) { _enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fixwidth") ) { _fixwidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"skinHeight") ) { return set_skinHeight(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_darkFormat") ) { _darkFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_skinHeight") ) { _skinHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_transition") ) { _transition=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textColour") ) { _textColour=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_shadowLabel") ) { _shadowLabel=inValue.Cast< ::com::danielfreeman::madcomponents::UILabel >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_defaultWidth") ) { _defaultWidth=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("label"));
	outFields->push(HX_CSTRING("shadowLabel"));
	outFields->push(HX_CSTRING("alt"));
	outFields->push(HX_CSTRING("fixwidth"));
	outFields->push(HX_CSTRING("colour"));
	outFields->push(HX_CSTRING("curve"));
	outFields->push(HX_CSTRING("skinHeight"));
	outFields->push(HX_CSTRING("FORMAT"));
	outFields->push(HX_CSTRING("FORMAT7"));
	outFields->push(HX_CSTRING("_format"));
	outFields->push(HX_CSTRING("_darkFormat"));
	outFields->push(HX_CSTRING("_label"));
	outFields->push(HX_CSTRING("_shadowLabel"));
	outFields->push(HX_CSTRING("_colour"));
	outFields->push(HX_CSTRING("_fixwidth"));
	outFields->push(HX_CSTRING("_alpha"));
	outFields->push(HX_CSTRING("_colours"));
	outFields->push(HX_CSTRING("_gap"));
	outFields->push(HX_CSTRING("_enabled"));
	outFields->push(HX_CSTRING("_sizeY"));
	outFields->push(HX_CSTRING("_curve"));
	outFields->push(HX_CSTRING("_border"));
	outFields->push(HX_CSTRING("_skinHeight"));
	outFields->push(HX_CSTRING("_defaultWidth"));
	outFields->push(HX_CSTRING("_alt"));
	outFields->push(HX_CSTRING("_goTo"));
	outFields->push(HX_CSTRING("_transition"));
	outFields->push(HX_CSTRING("_style7"));
	outFields->push(HX_CSTRING("_textColour"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CLICKED"),
	HX_CSTRING("HIGHLIGHT"),
	HX_CSTRING("SHADOW_OFFSET"),
	HX_CSTRING("CURVE"),
	HX_CSTRING("SIZE_X"),
	HX_CSTRING("SIZE_Y"),
	HX_CSTRING("TINY_SIZE_Y"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UIButton_obj,FORMAT),HX_CSTRING("FORMAT")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UIButton_obj,FORMAT7),HX_CSTRING("FORMAT7")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UIButton_obj,_format),HX_CSTRING("_format")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UIButton_obj,_darkFormat),HX_CSTRING("_darkFormat")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UILabel*/ ,(int)offsetof(UIButton_obj,_label),HX_CSTRING("_label")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UILabel*/ ,(int)offsetof(UIButton_obj,_shadowLabel),HX_CSTRING("_shadowLabel")},
	{hx::fsInt,(int)offsetof(UIButton_obj,_colour),HX_CSTRING("_colour")},
	{hx::fsFloat,(int)offsetof(UIButton_obj,_fixwidth),HX_CSTRING("_fixwidth")},
	{hx::fsFloat,(int)offsetof(UIButton_obj,_alpha),HX_CSTRING("_alpha")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(UIButton_obj,_colours),HX_CSTRING("_colours")},
	{hx::fsFloat,(int)offsetof(UIButton_obj,_gap),HX_CSTRING("_gap")},
	{hx::fsBool,(int)offsetof(UIButton_obj,_enabled),HX_CSTRING("_enabled")},
	{hx::fsFloat,(int)offsetof(UIButton_obj,_sizeY),HX_CSTRING("_sizeY")},
	{hx::fsFloat,(int)offsetof(UIButton_obj,_curve),HX_CSTRING("_curve")},
	{hx::fsFloat,(int)offsetof(UIButton_obj,_border),HX_CSTRING("_border")},
	{hx::fsFloat,(int)offsetof(UIButton_obj,_skinHeight),HX_CSTRING("_skinHeight")},
	{hx::fsFloat,(int)offsetof(UIButton_obj,_defaultWidth),HX_CSTRING("_defaultWidth")},
	{hx::fsBool,(int)offsetof(UIButton_obj,_alt),HX_CSTRING("_alt")},
	{hx::fsString,(int)offsetof(UIButton_obj,_goTo),HX_CSTRING("_goTo")},
	{hx::fsString,(int)offsetof(UIButton_obj,_transition),HX_CSTRING("_transition")},
	{hx::fsBool,(int)offsetof(UIButton_obj,_style7),HX_CSTRING("_style7")},
	{hx::fsInt,(int)offsetof(UIButton_obj,_textColour),HX_CSTRING("_textColour")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("FORMAT"),
	HX_CSTRING("FORMAT7"),
	HX_CSTRING("_format"),
	HX_CSTRING("_darkFormat"),
	HX_CSTRING("_label"),
	HX_CSTRING("_shadowLabel"),
	HX_CSTRING("_colour"),
	HX_CSTRING("_fixwidth"),
	HX_CSTRING("_alpha"),
	HX_CSTRING("_colours"),
	HX_CSTRING("_gap"),
	HX_CSTRING("_enabled"),
	HX_CSTRING("_sizeY"),
	HX_CSTRING("_curve"),
	HX_CSTRING("_border"),
	HX_CSTRING("_skinHeight"),
	HX_CSTRING("_defaultWidth"),
	HX_CSTRING("_alt"),
	HX_CSTRING("_goTo"),
	HX_CSTRING("_transition"),
	HX_CSTRING("_style7"),
	HX_CSTRING("_textColour"),
	HX_CSTRING("get_label"),
	HX_CSTRING("get_shadowLabel"),
	HX_CSTRING("set_alt"),
	HX_CSTRING("init"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("changePage"),
	HX_CSTRING("touchCancel"),
	HX_CSTRING("set_text"),
	HX_CSTRING("set_fixwidth"),
	HX_CSTRING("set_colour"),
	HX_CSTRING("set_curve"),
	HX_CSTRING("setGoTo"),
	HX_CSTRING("sizeY"),
	HX_CSTRING("drawButton"),
	HX_CSTRING("set_skinHeight"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIButton_obj::CLICKED,"CLICKED");
	HX_MARK_MEMBER_NAME(UIButton_obj::HIGHLIGHT,"HIGHLIGHT");
	HX_MARK_MEMBER_NAME(UIButton_obj::SHADOW_OFFSET,"SHADOW_OFFSET");
	HX_MARK_MEMBER_NAME(UIButton_obj::CURVE,"CURVE");
	HX_MARK_MEMBER_NAME(UIButton_obj::SIZE_X,"SIZE_X");
	HX_MARK_MEMBER_NAME(UIButton_obj::SIZE_Y,"SIZE_Y");
	HX_MARK_MEMBER_NAME(UIButton_obj::TINY_SIZE_Y,"TINY_SIZE_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIButton_obj::CLICKED,"CLICKED");
	HX_VISIT_MEMBER_NAME(UIButton_obj::HIGHLIGHT,"HIGHLIGHT");
	HX_VISIT_MEMBER_NAME(UIButton_obj::SHADOW_OFFSET,"SHADOW_OFFSET");
	HX_VISIT_MEMBER_NAME(UIButton_obj::CURVE,"CURVE");
	HX_VISIT_MEMBER_NAME(UIButton_obj::SIZE_X,"SIZE_X");
	HX_VISIT_MEMBER_NAME(UIButton_obj::SIZE_Y,"SIZE_Y");
	HX_VISIT_MEMBER_NAME(UIButton_obj::TINY_SIZE_Y,"TINY_SIZE_Y");
};

#endif

Class UIButton_obj::__mClass;

void UIButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIButton"), hx::TCanCast< UIButton_obj> ,sStaticFields,sMemberFields,
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

void UIButton_obj::__boot()
{
	CLICKED= HX_CSTRING("buttonClicked");
	HIGHLIGHT= (int)10066431;
	SHADOW_OFFSET= 1.0;
	CURVE= 16.0;
	SIZE_X= 10.0;
	SIZE_Y= 7.0;
	TINY_SIZE_Y= 7.0;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
