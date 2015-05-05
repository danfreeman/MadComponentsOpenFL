#include <hxcpp.h>

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
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UISlider
#include <com/danielfreeman/madcomponents/UISlider.h>
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
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UISlider_obj::__construct(::openfl::display::Sprite screen,Float xx,Float yy,Array< int > colours,hx::Null< bool >  __o_alt,hx::Null< bool >  __o_style7)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UISlider","new",0x205bbebb,"com.danielfreeman.madcomponents.UISlider.new","com/danielfreeman/madcomponents/UISlider.hx",59,0x1d72d2b2)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xx,"xx")
HX_STACK_ARG(yy,"yy")
HX_STACK_ARG(colours,"colours")
HX_STACK_ARG(__o_alt,"alt")
HX_STACK_ARG(__o_style7,"style7")
bool alt = __o_alt.Default(false);
bool style7 = __o_style7.Default(false);
{
	HX_STACK_LINE(88)
	this->_curve = 8.0;
	HX_STACK_LINE(87)
	this->_sliderHeight = 8.0;
	HX_STACK_LINE(85)
	this->_value = 0.5;
	HX_STACK_LINE(84)
	this->_width = 120.0;
	HX_STACK_LINE(95)
	super::__construct(screen,null());
	HX_STACK_LINE(96)
	this->set_x(xx);
	HX_STACK_LINE(96)
	this->set_y(yy);
	HX_STACK_LINE(98)
	this->_style7 = style7;
	HX_STACK_LINE(99)
	if ((alt)){
		HX_STACK_LINE(99)
		this->_radius = 10.0;
	}
	else{
		HX_STACK_LINE(99)
		if ((style7)){
			HX_STACK_LINE(99)
			this->_radius = 16.0;
		}
		else{
			HX_STACK_LINE(99)
			this->_radius = 14.0;
		}
	}
	HX_STACK_LINE(101)
	if (((colours == null()))){
		HX_STACK_LINE(102)
		colours = Array_obj< int >::__new();
	}
	HX_STACK_LINE(105)
	if (((colours->length > (int)0))){
		HX_STACK_LINE(105)
		this->_highlightColour = colours->__get((int)0);
	}
	else{
		HX_STACK_LINE(105)
		this->_highlightColour = (int)3355596;
	}
	HX_STACK_LINE(106)
	if (((colours->length > (int)1))){
		HX_STACK_LINE(106)
		this->_knobColour = colours->__get((int)1);
	}
	else{
		HX_STACK_LINE(106)
		if ((style7)){
			HX_STACK_LINE(106)
			this->_knobColour = (int)16777215;
		}
		else{
			HX_STACK_LINE(106)
			this->_knobColour = (int)14540253;
		}
	}
	HX_STACK_LINE(107)
	if (((colours->length > (int)2))){
		HX_STACK_LINE(107)
		this->_sliderColour = colours->__get((int)2);
	}
	else{
		HX_STACK_LINE(107)
		this->_sliderColour = (int)11184810;
	}
	HX_STACK_LINE(108)
	if ((style7)){
		HX_STACK_LINE(108)
		this->_sliderHeight = (int)3;
	}
	else{
		HX_STACK_LINE(108)
		this->_sliderHeight = 8.0;
	}
	HX_STACK_LINE(110)
	this->createKnob();
	HX_STACK_LINE(111)
	this->set_value(this->_value);
	HX_STACK_LINE(112)
	bool _g = this->_knob->useHandCursor = true;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(112)
	this->_knob->buttonMode = _g;
	HX_STACK_LINE(113)
	this->drawComponent();
}
;
	return null();
}

//UISlider_obj::~UISlider_obj() { }

Dynamic UISlider_obj::__CreateEmpty() { return  new UISlider_obj; }
hx::ObjectPtr< UISlider_obj > UISlider_obj::__new(::openfl::display::Sprite screen,Float xx,Float yy,Array< int > colours,hx::Null< bool >  __o_alt,hx::Null< bool >  __o_style7)
{  hx::ObjectPtr< UISlider_obj > result = new UISlider_obj();
	result->__construct(screen,xx,yy,colours,__o_alt,__o_style7);
	return result;}

Dynamic UISlider_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UISlider_obj > result = new UISlider_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

hx::Object *UISlider_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

Void UISlider_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISlider","mouseDown",0x0a9255c2,"com.danielfreeman.madcomponents.UISlider.mouseDown","com/danielfreeman/madcomponents/UISlider.hx",117,0x1d72d2b2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(118)
		Float _g = this->_knob->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(118)
		this->_lastPosition = _g;
		HX_STACK_LINE(119)
		Float _g1 = this->get_mouseX();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(119)
		this->changePosition(_g1);
		HX_STACK_LINE(120)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null(),null(),null());
		HX_STACK_LINE(121)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISlider_obj,mouseDown,(void))

Void UISlider_obj::changePosition( Float value){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISlider","changePosition",0x5a84a7be,"com.danielfreeman.madcomponents.UISlider.changePosition","com/danielfreeman/madcomponents/UISlider.hx",125,0x1d72d2b2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(126)
		this->_knob->set_x(value);
		HX_STACK_LINE(127)
		Float _g = this->_knob->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(127)
		if (((_g < this->_radius))){
			HX_STACK_LINE(128)
			this->_knob->set_x(this->_radius);
		}
		else{
			HX_STACK_LINE(130)
			Float _g1 = this->_knob->get_x();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(130)
			if (((_g1 > (this->_width - this->_radius)))){
				HX_STACK_LINE(131)
				this->_knob->set_x((this->_width - this->_radius));
			}
		}
		HX_STACK_LINE(133)
		Float _g2 = this->_knob->get_x();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(133)
		Float _g3 = (_g2 - this->_radius);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(133)
		Float _g4 = (Float(_g3) / Float(((this->_width - ((int)2 * this->_radius)))));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(133)
		this->_value = _g4;
		HX_STACK_LINE(134)
		this->drawComponent();
		HX_STACK_LINE(135)
		::openfl::events::Event _g5 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(135)
		this->dispatchEvent(_g5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISlider_obj,changePosition,(void))

Void UISlider_obj::mouseMove( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISlider","mouseMove",0x10854071,"com.danielfreeman.madcomponents.UISlider.mouseMove","com/danielfreeman/madcomponents/UISlider.hx",139,0x1d72d2b2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(140)
		Float _g = this->get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		this->changePosition(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISlider_obj,mouseMove,(void))

Void UISlider_obj::touchCancel( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISlider","touchCancel",0x87e093f4,"com.danielfreeman.madcomponents.UISlider.touchCancel","com/danielfreeman/madcomponents/UISlider.hx",144,0x1d72d2b2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(145)
		this->changePosition(this->_lastPosition);
		HX_STACK_LINE(146)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null());
		HX_STACK_LINE(147)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
	}
return null();
}


Void UISlider_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISlider","mouseUp",0xb380abbb,"com.danielfreeman.madcomponents.UISlider.mouseUp","com/danielfreeman/madcomponents/UISlider.hx",151,0x1d72d2b2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(152)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null());
		HX_STACK_LINE(153)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(154)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::COMPLETE,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(154)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISlider_obj,mouseUp,(void))

Void UISlider_obj::createKnob( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISlider","createKnob",0x937bd197,"com.danielfreeman.madcomponents.UISlider.createKnob","com/danielfreeman/madcomponents/UISlider.hx",158,0x1d72d2b2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(159)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(159)
		::openfl::display::Sprite _g1 = this->_knob = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(159)
		this->addChild(_g1);
		HX_STACK_LINE(160)
		if ((this->_style7)){
			HX_STACK_LINE(161)
			this->drawIos7Knob();
		}
		else{
			HX_STACK_LINE(164)
			this->drawKnob();
		}
		HX_STACK_LINE(166)
		this->_knob->set_y(this->_radius);
		HX_STACK_LINE(167)
		bool _g2 = this->_knob->useHandCursor = true;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(167)
		this->_knob->buttonMode = _g2;
		HX_STACK_LINE(168)
		this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISlider_obj,createKnob,(void))

Void UISlider_obj::drawIos7Knob( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISlider","drawIos7Knob",0xe87106c9,"com.danielfreeman.madcomponents.UISlider.drawIos7Knob","com/danielfreeman/madcomponents/UISlider.hx",172,0x1d72d2b2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(173)
		::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(174)
		matr->createGradientBox(((this->_radius * (int)2) + (int)2),((this->_radius * (int)2) + (int)2),(Float(::Math_obj::PI) / Float((int)2)),(int)0,(-(this->_radius) - (int)1));
		HX_STACK_LINE(175)
		this->_knob->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)),Dynamic( Array_obj<Dynamic>::__new().Add(0.1).Add(0.05)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(176)
		this->_knob->get_graphics()->drawCircle((int)0,((int)2 - (int)1),(this->_radius + (int)1));
		HX_STACK_LINE(177)
		int _g = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_knobColour,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(177)
		this->_knob->get_graphics()->beginFill(_g,null());
		HX_STACK_LINE(178)
		this->_knob->get_graphics()->drawCircle((int)0,(int)-1,this->_radius);
		HX_STACK_LINE(179)
		this->_knob->get_graphics()->beginFill(this->_knobColour,null());
		HX_STACK_LINE(180)
		this->_knob->get_graphics()->drawCircle((int)0,(int)-1,(this->_radius - 0.5));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISlider_obj,drawIos7Knob,(void))

Void UISlider_obj::drawKnob( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISlider","drawKnob",0x146a7f5f,"com.danielfreeman.madcomponents.UISlider.drawKnob","com/danielfreeman/madcomponents/UISlider.hx",184,0x1d72d2b2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(185)
		::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(186)
		matr->createGradientBox((this->_radius * (int)2),(this->_radius * (int)2),(Float(::Math_obj::PI) / Float((int)2)),(int)0,-(this->_radius));
		HX_STACK_LINE(187)
		int _g = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_knobColour,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(187)
		this->_knob->get_graphics()->beginFill(_g,null());
		HX_STACK_LINE(188)
		this->_knob->get_graphics()->drawCircle(0.3,0.3,(this->_radius + (int)1));
		HX_STACK_LINE(189)
		int _g1 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_knobColour,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(189)
		int _g2 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_knobColour,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(189)
		Dynamic _g3 = Dynamic( Array_obj<Dynamic>::__new().Add(_g1).Add(_g2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(189)
		this->_knob->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,_g3,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(190)
		this->_knob->get_graphics()->drawCircle((int)0,(int)0,this->_radius);
		HX_STACK_LINE(191)
		int _g4 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_knobColour,null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(191)
		int _g5 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_knobColour,(int)32);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(191)
		Dynamic _g6 = Dynamic( Array_obj<Dynamic>::__new().Add(_g4).Add(this->_knobColour).Add(_g5));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(191)
		this->_knob->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,_g6,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)102).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(192)
		this->_knob->get_graphics()->drawCircle((int)0,(int)0,(this->_radius - (int)1));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISlider_obj,drawKnob,(void))

Void UISlider_obj::drawComponent( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISlider","drawComponent",0x14089234,"com.danielfreeman.madcomponents.UISlider.drawComponent","com/danielfreeman/madcomponents/UISlider.hx",196,0x1d72d2b2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(197)
		::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(198)
		this->get_graphics()->clear();
		HX_STACK_LINE(199)
		this->get_graphics()->beginFill((int)0,(int)0);
		HX_STACK_LINE(200)
		this->get_graphics()->drawRect(-30.,(int)0,(this->_width + 60.),((int)2 * this->_radius));
		HX_STACK_LINE(201)
		matr->createGradientBox(this->_width,this->_sliderHeight,(Float(::Math_obj::PI) / Float((int)2)),(int)0,(this->_radius - (Float(this->_sliderHeight) / Float((int)2))));
		HX_STACK_LINE(202)
		int _g = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_sliderColour,(int)-64);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(202)
		int _g1 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_sliderColour,(int)64);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(202)
		int _g2 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_sliderColour,(int)64);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(202)
		Dynamic _g3 = Dynamic( Array_obj<Dynamic>::__new().Add(_g).Add(this->_sliderColour).Add(_g1).Add(_g2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(202)
		this->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,_g3,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0).Add((int)128).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(203)
		this->get_graphics()->drawRoundRect((int)0,(this->_radius - (Float(this->_sliderHeight) / Float((int)2))),this->_width,this->_sliderHeight,this->_sliderHeight,null());
		HX_STACK_LINE(204)
		int _g4 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_highlightColour,(int)-64);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(204)
		int _g5 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_highlightColour,(int)64);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(204)
		int _g6 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_highlightColour,(int)64);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(204)
		Dynamic _g7 = Dynamic( Array_obj<Dynamic>::__new().Add(_g4).Add(this->_highlightColour).Add(_g5).Add(_g6));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(204)
		this->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,_g7,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0).Add((int)128).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(205)
		Float _g8 = this->_knob->get_x();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(205)
		Float _g9 = (_g8 + (Float(this->_curve) / Float((int)2)));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(205)
		this->get_graphics()->drawRoundRect((int)0,(this->_radius - (Float(this->_sliderHeight) / Float((int)2))),_g9,this->_sliderHeight,this->_sliderHeight,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISlider_obj,drawComponent,(void))

::String UISlider_obj::set_text( ::String txt){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UISlider","set_text",0x3405096f,"com.danielfreeman.madcomponents.UISlider.set_text","com/danielfreeman/madcomponents/UISlider.hx",211,0x1d72d2b2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(txt,"txt")
	HX_STACK_LINE(212)
	Float _g = ::Std_obj::parseFloat(txt);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(212)
	this->set_value(_g);
	HX_STACK_LINE(213)
	return txt;
}


Float UISlider_obj::set_value( Float valuu){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UISlider","set_value",0x74826c6f,"com.danielfreeman.madcomponents.UISlider.set_value","com/danielfreeman/madcomponents/UISlider.hx",219,0x1d72d2b2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(valuu,"valuu")
	HX_STACK_LINE(220)
	this->_value = valuu;
	HX_STACK_LINE(221)
	this->_knob->set_x((this->_radius + (valuu * ((this->_width - ((int)2 * this->_radius))))));
	HX_STACK_LINE(222)
	this->drawComponent();
	HX_STACK_LINE(223)
	return valuu;
}


HX_DEFINE_DYNAMIC_FUNC1(UISlider_obj,set_value,return )

Float UISlider_obj::get_value( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UISlider","get_value",0x91318063,"com.danielfreeman.madcomponents.UISlider.get_value","com/danielfreeman/madcomponents/UISlider.hx",230,0x1d72d2b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(230)
	return this->_value;
}


HX_DEFINE_DYNAMIC_FUNC0(UISlider_obj,get_value,return )

Float UISlider_obj::set_fixwidth( Float valuu){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UISlider","set_fixwidth",0x24b2f5d3,"com.danielfreeman.madcomponents.UISlider.set_fixwidth","com/danielfreeman/madcomponents/UISlider.hx",236,0x1d72d2b2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(valuu,"valuu")
	HX_STACK_LINE(237)
	this->_width = valuu;
	HX_STACK_LINE(238)
	this->set_value(this->_value);
	HX_STACK_LINE(239)
	return valuu;
}


HX_DEFINE_DYNAMIC_FUNC1(UISlider_obj,set_fixwidth,return )

Float UISlider_obj::get_theWidth( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UISlider","get_theWidth",0x014c2e23,"com.danielfreeman.madcomponents.UISlider.get_theWidth","com/danielfreeman/madcomponents/UISlider.hx",244,0x1d72d2b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(244)
	return this->_width;
}


Void UISlider_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISlider","destructor",0x4df23e3e,"com.danielfreeman.madcomponents.UISlider.destructor","com/danielfreeman/madcomponents/UISlider.hx",248,0x1d72d2b2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(249)
		this->super::destructor();
		HX_STACK_LINE(250)
		this->_knob->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null());
		HX_STACK_LINE(251)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null());
		HX_STACK_LINE(252)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
	}
return null();
}


Float UISlider_obj::WIDTH;

Float UISlider_obj::RADIUS;

Float UISlider_obj::RADIUS7;

Float UISlider_obj::ALT_RADIUS;

int UISlider_obj::KNOB_COLOUR;

int UISlider_obj::KNOB_COLOUR7;

int UISlider_obj::HIGHLIGHT_COLOUR;

int UISlider_obj::SLIDER_COLOUR;

Float UISlider_obj::SLIDER_HEIGHT;

Float UISlider_obj::SLIDER_HEIGHT7;

Float UISlider_obj::EXTRA;

int UISlider_obj::SHADOW_COLOUR;

Float UISlider_obj::SHADOW_ALPHA;

Float UISlider_obj::SHADOW_OFFSET;


UISlider_obj::UISlider_obj()
{
}

void UISlider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UISlider);
	HX_MARK_MEMBER_NAME(_knob,"_knob");
	HX_MARK_MEMBER_NAME(_sliderColour,"_sliderColour");
	HX_MARK_MEMBER_NAME(_highlightColour,"_highlightColour");
	HX_MARK_MEMBER_NAME(_knobColour,"_knobColour");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_value,"_value");
	HX_MARK_MEMBER_NAME(_radius,"_radius");
	HX_MARK_MEMBER_NAME(_sliderHeight,"_sliderHeight");
	HX_MARK_MEMBER_NAME(_curve,"_curve");
	HX_MARK_MEMBER_NAME(_lastPosition,"_lastPosition");
	HX_MARK_MEMBER_NAME(_style7,"_style7");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UISlider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_knob,"_knob");
	HX_VISIT_MEMBER_NAME(_sliderColour,"_sliderColour");
	HX_VISIT_MEMBER_NAME(_highlightColour,"_highlightColour");
	HX_VISIT_MEMBER_NAME(_knobColour,"_knobColour");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_value,"_value");
	HX_VISIT_MEMBER_NAME(_radius,"_radius");
	HX_VISIT_MEMBER_NAME(_sliderHeight,"_sliderHeight");
	HX_VISIT_MEMBER_NAME(_curve,"_curve");
	HX_VISIT_MEMBER_NAME(_lastPosition,"_lastPosition");
	HX_VISIT_MEMBER_NAME(_style7,"_style7");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UISlider_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return get_value(); }
		if (HX_FIELD_EQ(inName,"_knob") ) { return _knob; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_value") ) { return _value; }
		if (HX_FIELD_EQ(inName,"_curve") ) { return _curve; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		if (HX_FIELD_EQ(inName,"_style7") ) { return _style7; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawKnob") ) { return drawKnob_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseMove") ) { return mouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		if (HX_FIELD_EQ(inName,"get_value") ) { return get_value_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createKnob") ) { return createKnob_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_knobColour") ) { return _knobColour; }
		if (HX_FIELD_EQ(inName,"touchCancel") ) { return touchCancel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawIos7Knob") ) { return drawIos7Knob_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fixwidth") ) { return set_fixwidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_theWidth") ) { return get_theWidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sliderColour") ) { return _sliderColour; }
		if (HX_FIELD_EQ(inName,"_sliderHeight") ) { return _sliderHeight; }
		if (HX_FIELD_EQ(inName,"_lastPosition") ) { return _lastPosition; }
		if (HX_FIELD_EQ(inName,"drawComponent") ) { return drawComponent_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"changePosition") ) { return changePosition_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_highlightColour") ) { return _highlightColour; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UISlider_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return set_value(inValue); }
		if (HX_FIELD_EQ(inName,"_knob") ) { _knob=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curve") ) { _curve=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_style7") ) { _style7=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fixwidth") ) { return set_fixwidth(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_knobColour") ) { _knobColour=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sliderColour") ) { _sliderColour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sliderHeight") ) { _sliderHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastPosition") ) { _lastPosition=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_highlightColour") ) { _highlightColour=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UISlider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("fixwidth"));
	outFields->push(HX_CSTRING("_knob"));
	outFields->push(HX_CSTRING("_sliderColour"));
	outFields->push(HX_CSTRING("_highlightColour"));
	outFields->push(HX_CSTRING("_knobColour"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_value"));
	outFields->push(HX_CSTRING("_radius"));
	outFields->push(HX_CSTRING("_sliderHeight"));
	outFields->push(HX_CSTRING("_curve"));
	outFields->push(HX_CSTRING("_lastPosition"));
	outFields->push(HX_CSTRING("_style7"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("WIDTH"),
	HX_CSTRING("RADIUS"),
	HX_CSTRING("RADIUS7"),
	HX_CSTRING("ALT_RADIUS"),
	HX_CSTRING("KNOB_COLOUR"),
	HX_CSTRING("KNOB_COLOUR7"),
	HX_CSTRING("HIGHLIGHT_COLOUR"),
	HX_CSTRING("SLIDER_COLOUR"),
	HX_CSTRING("SLIDER_HEIGHT"),
	HX_CSTRING("SLIDER_HEIGHT7"),
	HX_CSTRING("EXTRA"),
	HX_CSTRING("SHADOW_COLOUR"),
	HX_CSTRING("SHADOW_ALPHA"),
	HX_CSTRING("SHADOW_OFFSET"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UISlider_obj,_knob),HX_CSTRING("_knob")},
	{hx::fsInt,(int)offsetof(UISlider_obj,_sliderColour),HX_CSTRING("_sliderColour")},
	{hx::fsInt,(int)offsetof(UISlider_obj,_highlightColour),HX_CSTRING("_highlightColour")},
	{hx::fsInt,(int)offsetof(UISlider_obj,_knobColour),HX_CSTRING("_knobColour")},
	{hx::fsFloat,(int)offsetof(UISlider_obj,_width),HX_CSTRING("_width")},
	{hx::fsFloat,(int)offsetof(UISlider_obj,_value),HX_CSTRING("_value")},
	{hx::fsFloat,(int)offsetof(UISlider_obj,_radius),HX_CSTRING("_radius")},
	{hx::fsFloat,(int)offsetof(UISlider_obj,_sliderHeight),HX_CSTRING("_sliderHeight")},
	{hx::fsFloat,(int)offsetof(UISlider_obj,_curve),HX_CSTRING("_curve")},
	{hx::fsFloat,(int)offsetof(UISlider_obj,_lastPosition),HX_CSTRING("_lastPosition")},
	{hx::fsBool,(int)offsetof(UISlider_obj,_style7),HX_CSTRING("_style7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_knob"),
	HX_CSTRING("_sliderColour"),
	HX_CSTRING("_highlightColour"),
	HX_CSTRING("_knobColour"),
	HX_CSTRING("_width"),
	HX_CSTRING("_value"),
	HX_CSTRING("_radius"),
	HX_CSTRING("_sliderHeight"),
	HX_CSTRING("_curve"),
	HX_CSTRING("_lastPosition"),
	HX_CSTRING("_style7"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("changePosition"),
	HX_CSTRING("mouseMove"),
	HX_CSTRING("touchCancel"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("createKnob"),
	HX_CSTRING("drawIos7Knob"),
	HX_CSTRING("drawKnob"),
	HX_CSTRING("drawComponent"),
	HX_CSTRING("set_text"),
	HX_CSTRING("set_value"),
	HX_CSTRING("get_value"),
	HX_CSTRING("set_fixwidth"),
	HX_CSTRING("get_theWidth"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UISlider_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UISlider_obj::WIDTH,"WIDTH");
	HX_MARK_MEMBER_NAME(UISlider_obj::RADIUS,"RADIUS");
	HX_MARK_MEMBER_NAME(UISlider_obj::RADIUS7,"RADIUS7");
	HX_MARK_MEMBER_NAME(UISlider_obj::ALT_RADIUS,"ALT_RADIUS");
	HX_MARK_MEMBER_NAME(UISlider_obj::KNOB_COLOUR,"KNOB_COLOUR");
	HX_MARK_MEMBER_NAME(UISlider_obj::KNOB_COLOUR7,"KNOB_COLOUR7");
	HX_MARK_MEMBER_NAME(UISlider_obj::HIGHLIGHT_COLOUR,"HIGHLIGHT_COLOUR");
	HX_MARK_MEMBER_NAME(UISlider_obj::SLIDER_COLOUR,"SLIDER_COLOUR");
	HX_MARK_MEMBER_NAME(UISlider_obj::SLIDER_HEIGHT,"SLIDER_HEIGHT");
	HX_MARK_MEMBER_NAME(UISlider_obj::SLIDER_HEIGHT7,"SLIDER_HEIGHT7");
	HX_MARK_MEMBER_NAME(UISlider_obj::EXTRA,"EXTRA");
	HX_MARK_MEMBER_NAME(UISlider_obj::SHADOW_COLOUR,"SHADOW_COLOUR");
	HX_MARK_MEMBER_NAME(UISlider_obj::SHADOW_ALPHA,"SHADOW_ALPHA");
	HX_MARK_MEMBER_NAME(UISlider_obj::SHADOW_OFFSET,"SHADOW_OFFSET");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UISlider_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UISlider_obj::WIDTH,"WIDTH");
	HX_VISIT_MEMBER_NAME(UISlider_obj::RADIUS,"RADIUS");
	HX_VISIT_MEMBER_NAME(UISlider_obj::RADIUS7,"RADIUS7");
	HX_VISIT_MEMBER_NAME(UISlider_obj::ALT_RADIUS,"ALT_RADIUS");
	HX_VISIT_MEMBER_NAME(UISlider_obj::KNOB_COLOUR,"KNOB_COLOUR");
	HX_VISIT_MEMBER_NAME(UISlider_obj::KNOB_COLOUR7,"KNOB_COLOUR7");
	HX_VISIT_MEMBER_NAME(UISlider_obj::HIGHLIGHT_COLOUR,"HIGHLIGHT_COLOUR");
	HX_VISIT_MEMBER_NAME(UISlider_obj::SLIDER_COLOUR,"SLIDER_COLOUR");
	HX_VISIT_MEMBER_NAME(UISlider_obj::SLIDER_HEIGHT,"SLIDER_HEIGHT");
	HX_VISIT_MEMBER_NAME(UISlider_obj::SLIDER_HEIGHT7,"SLIDER_HEIGHT7");
	HX_VISIT_MEMBER_NAME(UISlider_obj::EXTRA,"EXTRA");
	HX_VISIT_MEMBER_NAME(UISlider_obj::SHADOW_COLOUR,"SHADOW_COLOUR");
	HX_VISIT_MEMBER_NAME(UISlider_obj::SHADOW_ALPHA,"SHADOW_ALPHA");
	HX_VISIT_MEMBER_NAME(UISlider_obj::SHADOW_OFFSET,"SHADOW_OFFSET");
};

#endif

Class UISlider_obj::__mClass;

void UISlider_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UISlider"), hx::TCanCast< UISlider_obj> ,sStaticFields,sMemberFields,
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

void UISlider_obj::__boot()
{
	WIDTH= 120.0;
	RADIUS= 14.0;
	RADIUS7= 16.0;
	ALT_RADIUS= 10.0;
	KNOB_COLOUR= (int)14540253;
	KNOB_COLOUR7= (int)16777215;
	HIGHLIGHT_COLOUR= (int)3355596;
	SLIDER_COLOUR= (int)11184810;
	SLIDER_HEIGHT= 8.0;
	SLIDER_HEIGHT7= (int)3;
	EXTRA= 30.0;
	SHADOW_COLOUR= (int)0;
	SHADOW_ALPHA= 0.1;
	SHADOW_OFFSET= (int)2;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
