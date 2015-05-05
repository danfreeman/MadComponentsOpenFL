#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_Colour
#include <com/danielfreeman/madcomponents/Colour.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIBackButton
#include <com/danielfreeman/madcomponents/UIBackButton.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
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
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UIBackButton_obj::__construct(::openfl::display::Sprite screen,Float xx,Float yy,::String text,int colour,hx::Null< bool >  __o_forward,hx::Null< bool >  __o_classic,hx::Null< bool >  __o_arrow)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBackButton","new",0x82758013,"com.danielfreeman.madcomponents.UIBackButton.new","com/danielfreeman/madcomponents/UIBackButton.hx",41,0x436216da)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xx,"xx")
HX_STACK_ARG(yy,"yy")
HX_STACK_ARG(text,"text")
HX_STACK_ARG(colour,"colour")
HX_STACK_ARG(__o_forward,"forward")
HX_STACK_ARG(__o_classic,"classic")
HX_STACK_ARG(__o_arrow,"arrow")
bool forward = __o_forward.Default(false);
bool classic = __o_classic.Default(true);
bool arrow = __o_arrow.Default(true);
{
	HX_STACK_LINE(64)
	this->_height = 33.0;
	HX_STACK_LINE(63)
	this->_width = (int)-1;
	HX_STACK_LINE(61)
	this->_colour = (int)752108;
	HX_STACK_LINE(71)
	super::__construct();
	HX_STACK_LINE(72)
	screen->addChild(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(73)
	this->_forward = forward;
	HX_STACK_LINE(74)
	if ((classic)){
		HX_STACK_LINE(75)
		this->_colour = colour;
	}
	HX_STACK_LINE(77)
	::com::danielfreeman::madcomponents::UILabel _g = ::com::danielfreeman::madcomponents::UILabel_obj::__new(hx::ObjectPtr<OBJ_>(this),12.0,(int)12,HX_CSTRING(""),::com::danielfreeman::madcomponents::UIBackButton_obj::FORMAT);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(77)
	this->_label = _g;
	HX_STACK_LINE(78)
	this->_classic = classic;
	HX_STACK_LINE(79)
	this->_arrow = arrow;
	HX_STACK_LINE(80)
	this->set_x(xx);
	HX_STACK_LINE(80)
	this->set_y(yy);
	HX_STACK_LINE(81)
	this->set_text(text);
	HX_STACK_LINE(82)
	bool _g1 = this->useHandCursor = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(82)
	this->buttonMode = _g1;
	HX_STACK_LINE(83)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null(),null(),null());
}
;
	return null();
}

//UIBackButton_obj::~UIBackButton_obj() { }

Dynamic UIBackButton_obj::__CreateEmpty() { return  new UIBackButton_obj; }
hx::ObjectPtr< UIBackButton_obj > UIBackButton_obj::__new(::openfl::display::Sprite screen,Float xx,Float yy,::String text,int colour,hx::Null< bool >  __o_forward,hx::Null< bool >  __o_classic,hx::Null< bool >  __o_arrow)
{  hx::ObjectPtr< UIBackButton_obj > result = new UIBackButton_obj();
	result->__construct(screen,xx,yy,text,colour,__o_forward,__o_classic,__o_arrow);
	return result;}

Dynamic UIBackButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIBackButton_obj > result = new UIBackButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

bool UIBackButton_obj::set_arrow( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBackButton","set_arrow",0xdd1aba1f,"com.danielfreeman.madcomponents.UIBackButton.set_arrow","com/danielfreeman/madcomponents/UIBackButton.hx",87,0x436216da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(88)
	this->_arrow = value;
	HX_STACK_LINE(89)
	Float _g = this->_label->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(89)
	Float _g1 = (_g + (int)20);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(89)
	this->synthButton(this->_colour,_g1);
	HX_STACK_LINE(90)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIBackButton_obj,set_arrow,return )

::String UIBackButton_obj::set_text( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBackButton","set_text",0xa7576917,"com.danielfreeman.madcomponents.UIBackButton.set_text","com/danielfreeman/madcomponents/UIBackButton.hx",96,0x436216da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(97)
	::String _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(97)
	if ((this->_classic)){
		HX_STACK_LINE(97)
		_g4 = value;
	}
	else{
		HX_STACK_LINE(97)
		::String _g = ::Std_obj::string(this->_colour);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(97)
		::String _g1 = (HX_CSTRING("<font color=\"#") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(97)
		::String _g2 = (_g1 + HX_CSTRING("\">"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(97)
		::String _g3 = (_g2 + value);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(97)
		_g4 = (_g3 + HX_CSTRING("</font>"));
	}
	HX_STACK_LINE(97)
	this->_label->set_xmlText(_g4);
	HX_STACK_LINE(98)
	Float _g5 = this->_label->get_width();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(98)
	Float _g6 = (_g5 + (int)20);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(98)
	this->synthButton(this->_colour,_g6);
	HX_STACK_LINE(99)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIBackButton_obj,set_text,return )

::String UIBackButton_obj::get_text( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBackButton","get_text",0xf8fa0fa3,"com.danielfreeman.madcomponents.UIBackButton.get_text","com/danielfreeman/madcomponents/UIBackButton.hx",104,0x436216da)
	HX_STACK_THIS(this)
	HX_STACK_LINE(104)
	return this->_label->get_text();
}


HX_DEFINE_DYNAMIC_FUNC0(UIBackButton_obj,get_text,return )

::openfl::text::TextFormat UIBackButton_obj::set_textFormat( ::openfl::text::TextFormat value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBackButton","set_textFormat",0x7edcd7ae,"com.danielfreeman.madcomponents.UIBackButton.set_textFormat","com/danielfreeman/madcomponents/UIBackButton.hx",110,0x436216da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(111)
	this->_label->set_defaultTextFormat(value);
	HX_STACK_LINE(112)
	this->_label->setTextFormat(value,null(),null());
	HX_STACK_LINE(113)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIBackButton_obj,set_textFormat,return )

int UIBackButton_obj::set_colour( int value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBackButton","set_colour",0xa8d3d336,"com.danielfreeman.madcomponents.UIBackButton.set_colour","com/danielfreeman/madcomponents/UIBackButton.hx",119,0x436216da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(120)
	this->_colour = value;
	HX_STACK_LINE(121)
	Float _g = this->_label->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(121)
	Float _g1 = (_g + (int)20);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(121)
	this->synthButton(this->_colour,_g1);
	HX_STACK_LINE(122)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIBackButton_obj,set_colour,return )

Float UIBackButton_obj::set_fixwidth( Float value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBackButton","set_fixwidth",0x7572497b,"com.danielfreeman.madcomponents.UIBackButton.set_fixwidth","com/danielfreeman/madcomponents/UIBackButton.hx",126,0x436216da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(127)
	this->_width = value;
	HX_STACK_LINE(128)
	Float _g = this->_label->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(128)
	Float _g1 = (_g + (int)20);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(128)
	this->synthButton(this->_colour,_g1);
	HX_STACK_LINE(129)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIBackButton_obj,set_fixwidth,return )

Void UIBackButton_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBackButton","mouseDown",0x7f53a91a,"com.danielfreeman.madcomponents.UIBackButton.mouseDown","com/danielfreeman/madcomponents/UIBackButton.hx",133,0x436216da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(134)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(135)
		if ((!(this->_classic))){
			HX_STACK_LINE(136)
			int _g = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_colour,(int)32);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(136)
			::openfl::text::TextFormat _g1 = ::openfl::text::TextFormat_obj::__new(null(),null(),_g,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(136)
			this->_label->setTextFormat(_g1,null(),null());
		}
		HX_STACK_LINE(138)
		int _g2 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_colour,(int)32);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(138)
		Float _g3 = this->_label->get_width();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(138)
		Float _g4 = (_g3 + (int)20);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(138)
		this->synthButton(_g2,_g4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIBackButton_obj,mouseDown,(void))

Void UIBackButton_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBackButton","mouseUp",0x9751f913,"com.danielfreeman.madcomponents.UIBackButton.mouseUp","com/danielfreeman/madcomponents/UIBackButton.hx",142,0x436216da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(143)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(144)
		if ((!(this->_classic))){
			HX_STACK_LINE(145)
			::openfl::text::TextFormat _g = ::openfl::text::TextFormat_obj::__new(null(),null(),this->_colour,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(145)
			this->_label->setTextFormat(_g,null(),null());
		}
		HX_STACK_LINE(147)
		Float _g1 = this->_label->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(147)
		Float _g2 = (_g1 + (int)20);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(147)
		this->synthButton(this->_colour,_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIBackButton_obj,mouseUp,(void))

Void UIBackButton_obj::makeIos7Button( int colour){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBackButton","makeIos7Button",0x53eada17,"com.danielfreeman.madcomponents.UIBackButton.makeIos7Button","com/danielfreeman/madcomponents/UIBackButton.hx",151,0x436216da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(152)
		this->get_graphics()->lineStyle(3.0,colour,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(153)
		if ((this->_arrow)){
			HX_STACK_LINE(154)
			Float xx;		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(154)
			if ((this->_forward)){
				HX_STACK_LINE(154)
				Float _g = this->_label->get_width();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(154)
				xx = (_g + (int)24);
			}
			else{
				HX_STACK_LINE(154)
				xx = 8.0;
			}
			HX_STACK_LINE(155)
			this->get_graphics()->moveTo((xx + (((  ((this->_forward)) ? Float(-1.0) : Float(1.0) )) * 10.0)),12.);
			HX_STACK_LINE(156)
			this->get_graphics()->lineTo(xx,22.);
			HX_STACK_LINE(157)
			this->get_graphics()->lineTo((xx + (((  ((this->_forward)) ? Float(-1.0) : Float(1.0) )) * 10.0)),32.);
			HX_STACK_LINE(158)
			this->_label->set_x((  ((this->_forward)) ? Float((int)8) : Float((int)24) ));
		}
		else{
			HX_STACK_LINE(161)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(161)
			if (((this->_width > (int)0))){
				HX_STACK_LINE(161)
				Float _g1 = this->_label->get_width();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(161)
				Float _g2 = (this->_width - _g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(161)
				_g3 = (Float(_g2) / Float((int)2));
			}
			else{
				HX_STACK_LINE(161)
				_g3 = 12.0;
			}
			HX_STACK_LINE(161)
			this->_label->set_x(_g3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIBackButton_obj,makeIos7Button,(void))

Void UIBackButton_obj::synthButton( int colour,Float width){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBackButton","synthButton",0xd995da41,"com.danielfreeman.madcomponents.UIBackButton.synthButton","com/danielfreeman/madcomponents/UIBackButton.hx",168,0x436216da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(colour,"colour")
		HX_STACK_ARG(width,"width")
		HX_STACK_LINE(169)
		this->get_graphics()->clear();
		HX_STACK_LINE(170)
		this->get_graphics()->beginFill((int)0,(int)0);
		HX_STACK_LINE(171)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(171)
		if (((this->_width > (int)0))){
			HX_STACK_LINE(171)
			_g1 = this->_width;
		}
		else{
			HX_STACK_LINE(171)
			Float _g = this->_label->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(171)
			_g1 = (_g + (int)30);
		}
		HX_STACK_LINE(171)
		this->get_graphics()->drawRect((int)0,(int)0,_g1,46.0);
		HX_STACK_LINE(172)
		this->get_graphics()->endFill();
		HX_STACK_LINE(173)
		if ((this->_classic)){
			HX_STACK_LINE(174)
			::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
			HX_STACK_LINE(175)
			matr->createGradientBox(width,33.0,(Float(::Math_obj::PI) / Float((int)2)),(int)0,(int)0);
			HX_STACK_LINE(176)
			int _g2 = ::com::danielfreeman::madcomponents::Colour_obj::darken(colour,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(176)
			this->get_graphics()->beginFill(_g2,null());
			HX_STACK_LINE(177)
			int _g3 = ::Math_obj::round((Float(width) / Float((int)8)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(177)
			int _g4 = (_g3 * (int)8);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(177)
			Float buttonWidth = (_g4 + (int)2);		HX_STACK_VAR(buttonWidth,"buttonWidth");
			HX_STACK_LINE(178)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(178)
			if ((this->_forward)){
				HX_STACK_LINE(178)
				x = 0.0;
			}
			else{
				HX_STACK_LINE(178)
				x = 2.0;
			}
			HX_STACK_LINE(179)
			this->buttonShape(x,6.0,buttonWidth,this->_height);
			HX_STACK_LINE(180)
			int _g5 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(colour,null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(180)
			int _g6 = ::com::danielfreeman::madcomponents::Colour_obj::darken(colour,null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(180)
			int _g7 = ::com::danielfreeman::madcomponents::Colour_obj::darken(colour,null());		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(180)
			Array< int > gradient = Array_obj< int >::__new().Add(_g5).Add(_g6).Add(_g7);		HX_STACK_VAR(gradient,"gradient");
			HX_STACK_LINE(181)
			this->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,gradient,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)128).Add((int)255)),matr,null(),null(),null());
			HX_STACK_LINE(182)
			this->buttonShape((x + (int)1),7.0,(buttonWidth - (int)2),(this->_height - (int)2));
			HX_STACK_LINE(183)
			Float _g8 = this->_label->get_width();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(183)
			Float _g9 = (buttonWidth - _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(183)
			Float _g10 = (Float(_g9) / Float((int)2));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(183)
			Float _g11;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(183)
			_g11 = (_g10 + ((  ((this->_forward)) ? int((int)-3) : int((int)4) )));
			HX_STACK_LINE(183)
			this->_label->set_x(_g11);
		}
		else{
			HX_STACK_LINE(186)
			this->makeIos7Button(colour);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIBackButton_obj,synthButton,(void))

Void UIBackButton_obj::buttonShape( Float x,Float y,Float buttonWidth,Float height){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBackButton","buttonShape",0x5a7cbe82,"com.danielfreeman.madcomponents.UIBackButton.buttonShape","com/danielfreeman/madcomponents/UIBackButton.hx",193,0x436216da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(buttonWidth,"buttonWidth")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(194)
		Float quotient = 0.5;		HX_STACK_VAR(quotient,"quotient");
		HX_STACK_LINE(195)
		Float s;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(195)
		if ((this->_forward)){
			HX_STACK_LINE(195)
			s = -1.0;
		}
		else{
			HX_STACK_LINE(195)
			s = 1.0;
		}
		HX_STACK_LINE(196)
		Float adjustment;		HX_STACK_VAR(adjustment,"adjustment");
		HX_STACK_LINE(196)
		if ((this->_forward)){
			HX_STACK_LINE(196)
			adjustment = 0.0;
		}
		else{
			HX_STACK_LINE(196)
			adjustment = 0.0;
		}
		HX_STACK_LINE(197)
		if ((this->_forward)){
			HX_STACK_LINE(198)
			hx::AddEq(x,buttonWidth);
		}
		HX_STACK_LINE(200)
		this->get_graphics()->moveTo(x,(y + (Float(height) / Float((int)2))));
		HX_STACK_LINE(201)
		this->get_graphics()->lineTo((x + ((s * quotient) * 10.0)),(y + (Float(((((int)1 - quotient)) * height)) / Float((int)2))));
		HX_STACK_LINE(202)
		this->get_graphics()->curveTo((x + (s * 10.0)),y,(x + (s * 15.)),y);
		HX_STACK_LINE(203)
		this->get_graphics()->lineTo((x + (s * ((buttonWidth - 5.0)))),y);
		HX_STACK_LINE(204)
		this->get_graphics()->curveTo((x + (s * buttonWidth)),y,(x + (s * buttonWidth)),(y + 5.0));
		HX_STACK_LINE(205)
		this->get_graphics()->lineTo(((x + (s * buttonWidth)) + adjustment),((y + height) - 5.0));
		HX_STACK_LINE(206)
		this->get_graphics()->curveTo((x + (s * buttonWidth)),(y + height),(x + (s * ((buttonWidth - 5.0)))),(y + height));
		HX_STACK_LINE(207)
		this->get_graphics()->lineTo((x + (s * 15.)),(y + height));
		HX_STACK_LINE(208)
		this->get_graphics()->curveTo((x + (s * 10.0)),(y + height),(x + ((s * quotient) * 10.0)),((y + height) - (Float(((((int)1 - quotient)) * height)) / Float((int)2))));
		HX_STACK_LINE(209)
		this->get_graphics()->lineTo(x,(y + (Float(height) / Float((int)2))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(UIBackButton_obj,buttonShape,(void))

Void UIBackButton_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBackButton","destructor",0x0259d7e6,"com.danielfreeman.madcomponents.UIBackButton.destructor","com/danielfreeman/madcomponents/UIBackButton.hx",213,0x436216da)
		HX_STACK_THIS(this)
		HX_STACK_LINE(214)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null());
		HX_STACK_LINE(215)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIBackButton_obj,destructor,(void))

::openfl::text::TextFormat UIBackButton_obj::FORMAT;

Float UIBackButton_obj::SENSOR_HEIGHT;

Float UIBackButton_obj::HEIGHT;

Float UIBackButton_obj::ARROW;

Float UIBackButton_obj::CURVE;

Float UIBackButton_obj::X;

Float UIBackButton_obj::Y;

Float UIBackButton_obj::ADJUSTMENT;


UIBackButton_obj::UIBackButton_obj()
{
}

void UIBackButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIBackButton);
	HX_MARK_MEMBER_NAME(_label,"_label");
	HX_MARK_MEMBER_NAME(_colour,"_colour");
	HX_MARK_MEMBER_NAME(_forward,"_forward");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_classic,"_classic");
	HX_MARK_MEMBER_NAME(_arrow,"_arrow");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIBackButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_label,"_label");
	HX_VISIT_MEMBER_NAME(_colour,"_colour");
	HX_VISIT_MEMBER_NAME(_forward,"_forward");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_classic,"_classic");
	HX_VISIT_MEMBER_NAME(_arrow,"_arrow");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIBackButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"FORMAT") ) { return FORMAT; }
		if (HX_FIELD_EQ(inName,"_label") ) { return _label; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_arrow") ) { return _arrow; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_colour") ) { return _colour; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_forward") ) { return _forward; }
		if (HX_FIELD_EQ(inName,"_classic") ) { return _classic; }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_arrow") ) { return set_arrow_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_colour") ) { return set_colour_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"synthButton") ) { return synthButton_dyn(); }
		if (HX_FIELD_EQ(inName,"buttonShape") ) { return buttonShape_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_fixwidth") ) { return set_fixwidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_textFormat") ) { return set_textFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"makeIos7Button") ) { return makeIos7Button_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIBackButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"arrow") ) { return set_arrow(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"FORMAT") ) { FORMAT=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colour") ) { return set_colour(inValue); }
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::com::danielfreeman::madcomponents::UILabel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_arrow") ) { _arrow=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_colour") ) { _colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fixwidth") ) { return set_fixwidth(inValue); }
		if (HX_FIELD_EQ(inName,"_forward") ) { _forward=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_classic") ) { _classic=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textFormat") ) { return set_textFormat(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIBackButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("arrow"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("textFormat"));
	outFields->push(HX_CSTRING("colour"));
	outFields->push(HX_CSTRING("fixwidth"));
	outFields->push(HX_CSTRING("_label"));
	outFields->push(HX_CSTRING("_colour"));
	outFields->push(HX_CSTRING("_forward"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_classic"));
	outFields->push(HX_CSTRING("_arrow"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FORMAT"),
	HX_CSTRING("SENSOR_HEIGHT"),
	HX_CSTRING("HEIGHT"),
	HX_CSTRING("ARROW"),
	HX_CSTRING("CURVE"),
	HX_CSTRING("X"),
	HX_CSTRING("Y"),
	HX_CSTRING("ADJUSTMENT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::danielfreeman::madcomponents::UILabel*/ ,(int)offsetof(UIBackButton_obj,_label),HX_CSTRING("_label")},
	{hx::fsInt,(int)offsetof(UIBackButton_obj,_colour),HX_CSTRING("_colour")},
	{hx::fsBool,(int)offsetof(UIBackButton_obj,_forward),HX_CSTRING("_forward")},
	{hx::fsFloat,(int)offsetof(UIBackButton_obj,_width),HX_CSTRING("_width")},
	{hx::fsFloat,(int)offsetof(UIBackButton_obj,_height),HX_CSTRING("_height")},
	{hx::fsBool,(int)offsetof(UIBackButton_obj,_classic),HX_CSTRING("_classic")},
	{hx::fsBool,(int)offsetof(UIBackButton_obj,_arrow),HX_CSTRING("_arrow")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_label"),
	HX_CSTRING("_colour"),
	HX_CSTRING("_forward"),
	HX_CSTRING("_width"),
	HX_CSTRING("_height"),
	HX_CSTRING("_classic"),
	HX_CSTRING("_arrow"),
	HX_CSTRING("set_arrow"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_textFormat"),
	HX_CSTRING("set_colour"),
	HX_CSTRING("set_fixwidth"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("makeIos7Button"),
	HX_CSTRING("synthButton"),
	HX_CSTRING("buttonShape"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIBackButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIBackButton_obj::FORMAT,"FORMAT");
	HX_MARK_MEMBER_NAME(UIBackButton_obj::SENSOR_HEIGHT,"SENSOR_HEIGHT");
	HX_MARK_MEMBER_NAME(UIBackButton_obj::HEIGHT,"HEIGHT");
	HX_MARK_MEMBER_NAME(UIBackButton_obj::ARROW,"ARROW");
	HX_MARK_MEMBER_NAME(UIBackButton_obj::CURVE,"CURVE");
	HX_MARK_MEMBER_NAME(UIBackButton_obj::X,"X");
	HX_MARK_MEMBER_NAME(UIBackButton_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(UIBackButton_obj::ADJUSTMENT,"ADJUSTMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIBackButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIBackButton_obj::FORMAT,"FORMAT");
	HX_VISIT_MEMBER_NAME(UIBackButton_obj::SENSOR_HEIGHT,"SENSOR_HEIGHT");
	HX_VISIT_MEMBER_NAME(UIBackButton_obj::HEIGHT,"HEIGHT");
	HX_VISIT_MEMBER_NAME(UIBackButton_obj::ARROW,"ARROW");
	HX_VISIT_MEMBER_NAME(UIBackButton_obj::CURVE,"CURVE");
	HX_VISIT_MEMBER_NAME(UIBackButton_obj::X,"X");
	HX_VISIT_MEMBER_NAME(UIBackButton_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(UIBackButton_obj::ADJUSTMENT,"ADJUSTMENT");
};

#endif

Class UIBackButton_obj::__mClass;

void UIBackButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIBackButton"), hx::TCanCast< UIBackButton_obj> ,sStaticFields,sMemberFields,
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

void UIBackButton_obj::__boot()
{
	FORMAT= ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)14,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	SENSOR_HEIGHT= 46.0;
	HEIGHT= 33.0;
	ARROW= 10.0;
	CURVE= 5.0;
	X= 12.0;
	Y= (int)12;
	ADJUSTMENT= 0.0;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
