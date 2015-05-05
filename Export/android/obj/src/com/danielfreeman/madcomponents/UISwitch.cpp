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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UISwitch
#include <com/danielfreeman/madcomponents/UISwitch.h>
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
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_Timer
#include <openfl/utils/Timer.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UISwitch_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UISwitch","new",0x3b5a280e,"com.danielfreeman.madcomponents.UISwitch.new","com/danielfreeman/madcomponents/UISwitch.hx",42,0xcaea34bf)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(69)
	this->_ready = false;
	HX_STACK_LINE(67)
	this->_timer = ::openfl::utils::Timer_obj::__new((int)32,(int)8);
	HX_STACK_LINE(66)
	this->_position = (int)0;
	HX_STACK_LINE(65)
	this->_state = false;
	HX_STACK_LINE(64)
	this->_sliderColour = (int)16777215;
	HX_STACK_LINE(63)
	this->_shadowColour = (int)0;
	HX_STACK_LINE(62)
	this->_outlineColour = (int)14540253;
	HX_STACK_LINE(61)
	this->_offColour = (int)16777215;
	HX_STACK_LINE(60)
	this->_onColour = (int)5034595;
	HX_STACK_LINE(74)
	super::__construct(screen,attributes);
	HX_STACK_LINE(75)
	if ((xml->has->resolve(HX_CSTRING("onColour")))){
		HX_STACK_LINE(76)
		::String _g = xml->att->resolve(HX_CSTRING("onColour"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		int _g1 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(76)
		this->_onColour = _g1;
	}
	HX_STACK_LINE(78)
	if ((xml->has->resolve(HX_CSTRING("offColour")))){
		HX_STACK_LINE(79)
		::String _g2 = xml->att->resolve(HX_CSTRING("offColour"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(79)
		int _g3 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(79)
		this->_offColour = _g3;
	}
	HX_STACK_LINE(81)
	if ((xml->has->resolve(HX_CSTRING("outlineColour")))){
		HX_STACK_LINE(82)
		::String _g4 = xml->att->resolve(HX_CSTRING("outlineColour"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(82)
		int _g5 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(82)
		this->_outlineColour = _g5;
	}
	HX_STACK_LINE(84)
	if ((xml->has->resolve(HX_CSTRING("shadowColour")))){
		HX_STACK_LINE(85)
		::String _g6 = xml->att->resolve(HX_CSTRING("shadowColour"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(85)
		int _g7 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(85)
		this->_shadowColour = _g7;
	}
	HX_STACK_LINE(87)
	if ((xml->has->resolve(HX_CSTRING("sliderColour")))){
		HX_STACK_LINE(88)
		::String _g8 = xml->att->resolve(HX_CSTRING("sliderColour"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(88)
		int _g9 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(88)
		this->_sliderColour = _g9;
	}
	HX_STACK_LINE(90)
	bool _g11;		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(90)
	if ((xml->has->resolve(HX_CSTRING("state")))){
		HX_STACK_LINE(90)
		::String _g10 = xml->att->resolve(HX_CSTRING("state"));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(90)
		_g11 = (_g10 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(90)
		_g11 = false;
	}
	HX_STACK_LINE(90)
	this->_state = _g11;
	HX_STACK_LINE(91)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null(),null(),null());
	HX_STACK_LINE(92)
	this->_timer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->animate_dyn(),null(),null(),null());
	HX_STACK_LINE(93)
	this->drawComponent();
}
;
	return null();
}

//UISwitch_obj::~UISwitch_obj() { }

Dynamic UISwitch_obj::__CreateEmpty() { return  new UISwitch_obj; }
hx::ObjectPtr< UISwitch_obj > UISwitch_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UISwitch_obj > result = new UISwitch_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UISwitch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UISwitch_obj > result = new UISwitch_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UISwitch_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

Void UISwitch_obj::animate( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISwitch","animate",0xbc83a14f,"com.danielfreeman.madcomponents.UISwitch.animate","com/danielfreeman/madcomponents/UISwitch.hx",97,0xcaea34bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(98)
		::openfl::utils::Timer timer;		HX_STACK_VAR(timer,"timer");
		HX_STACK_LINE(98)
		timer = hx::TCast< openfl::utils::Timer >::cast(event->get_currentTarget());
		HX_STACK_LINE(99)
		Float factor = (Float(((timer->currentCount + (int)1))) / Float((int)8));		HX_STACK_VAR(factor,"factor");
		HX_STACK_LINE(100)
		Float position;		HX_STACK_VAR(position,"position");
		HX_STACK_LINE(100)
		position = (((((int)1 - factor)) * this->_position) + (factor * ((  ((this->_state)) ? Float(1.0) : Float(0.0) ))));
		HX_STACK_LINE(101)
		this->drawSwitch(position);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISwitch_obj,animate,(void))

Void UISwitch_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISwitch","mouseDown",0x413aff55,"com.danielfreeman.madcomponents.UISwitch.mouseDown","com/danielfreeman/madcomponents/UISwitch.hx",105,0xcaea34bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(106)
		this->_ready = true;
		HX_STACK_LINE(107)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null());
		HX_STACK_LINE(108)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(109)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(110)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null());
		HX_STACK_LINE(111)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null(),null(),null());
		HX_STACK_LINE(112)
		this->_deltaPosition = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISwitch_obj,mouseDown,(void))

Void UISwitch_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISwitch","mouseUp",0x02a9ba8e,"com.danielfreeman.madcomponents.UISwitch.mouseUp","com/danielfreeman/madcomponents/UISwitch.hx",117,0xcaea34bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(117)
		if ((this->_ready)){
			HX_STACK_LINE(118)
			this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null());
			HX_STACK_LINE(119)
			this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null(),null(),null());
			HX_STACK_LINE(120)
			this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
			HX_STACK_LINE(121)
			this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null());
			HX_STACK_LINE(122)
			if (((this->_deltaPosition > 14.0))){
				HX_STACK_LINE(123)
				this->_state = (this->_position > 0.5);
			}
			else{
				HX_STACK_LINE(126)
				this->_state = !(this->_state);
			}
			HX_STACK_LINE(128)
			this->_timer->reset();
			HX_STACK_LINE(129)
			this->_timer->start();
			HX_STACK_LINE(130)
			::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(130)
			this->dispatchEvent(_g);
			HX_STACK_LINE(131)
			this->_ready = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISwitch_obj,mouseUp,(void))

Void UISwitch_obj::mouseMove( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISwitch","mouseMove",0x472dea04,"com.danielfreeman.madcomponents.UISwitch.mouseMove","com/danielfreeman/madcomponents/UISwitch.hx",136,0xcaea34bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(137)
		Float _g = this->get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(137)
		Float _g1 = (_g - 14.0);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(137)
		Float _g2 = (Float(_g1) / Float(24.));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(137)
		Float _g3 = ::Math_obj::max((int)0,_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(137)
		Float position = ::Math_obj::min(1.0,_g3);		HX_STACK_VAR(position,"position");
		HX_STACK_LINE(138)
		Float _g4 = ::Math_obj::abs((position - this->_position));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(138)
		if (((_g4 > 0.1))){
			HX_STACK_LINE(139)
			position = (this->_position + ((  (((position > this->_position))) ? Float(0.1) : Float(-0.1) )));
		}
		HX_STACK_LINE(141)
		hx::AddEq(this->_deltaPosition,position);
		HX_STACK_LINE(142)
		this->drawSwitch(position);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISwitch_obj,mouseMove,(void))

int UISwitch_obj::interpolate( int colourA,int colourB,Float factor){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UISwitch","interpolate",0x3afd8a6f,"com.danielfreeman.madcomponents.UISwitch.interpolate","com/danielfreeman/madcomponents/UISwitch.hx",146,0xcaea34bf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(colourA,"colourA")
	HX_STACK_ARG(colourB,"colourB")
	HX_STACK_ARG(factor,"factor")
	HX_STACK_LINE(147)
	int _g = ::Math_obj::round((((((int)1 - factor)) * ((int(colourA) & int((int)16711680)))) + (factor * ((int(colourB) & int((int)16711680))))));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(147)
	int _g1 = (int(_g) & int((int)16711680));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(148)
	int _g2 = ::Math_obj::round((((((int)1 - factor)) * ((int(colourA) & int((int)65280)))) + (factor * ((int(colourB) & int((int)65280))))));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(148)
	int _g3 = (int(_g2) & int((int)65280));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(147)
	int _g4 = (_g1 + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(149)
	int _g5 = ::Math_obj::round((((((int)1 - factor)) * ((int(colourA) & int((int)255)))) + (factor * ((int(colourB) & int((int)255))))));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(149)
	int _g6 = (int(_g5) & int((int)255));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(147)
	return (_g4 + _g6);
}


HX_DEFINE_DYNAMIC_FUNC3(UISwitch_obj,interpolate,return )

Void UISwitch_obj::drawSwitch( Float position){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISwitch","drawSwitch",0xde08df2a,"com.danielfreeman.madcomponents.UISwitch.drawSwitch","com/danielfreeman/madcomponents/UISwitch.hx",153,0xcaea34bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_LINE(154)
		int colour = this->interpolate(this->_outlineColour,this->_onColour,position);		HX_STACK_VAR(colour,"colour");
		HX_STACK_LINE(156)
		this->get_graphics()->clear();
		HX_STACK_LINE(157)
		this->get_graphics()->beginFill(colour,null());
		HX_STACK_LINE(158)
		this->get_graphics()->drawRoundRect((int)0,(int)0,52.0,31.0,31.0,31.0);
		HX_STACK_LINE(159)
		this->get_graphics()->endFill();
		HX_STACK_LINE(160)
		this->get_graphics()->beginFill(this->_offColour,null());
		HX_STACK_LINE(161)
		Float width = ((((int)1 - position)) * 49.);		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(162)
		Float height = ((((int)1 - position)) * 28.);		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(163)
		this->get_graphics()->drawRoundRect((Float(((52.0 - width))) / Float((int)2)),(Float(((31.0 - height))) / Float((int)2)),width,height,29.,29.);
		HX_STACK_LINE(164)
		this->get_graphics()->endFill();
		HX_STACK_LINE(166)
		Float sliderPosition = ((position * 22.) + (int)1);		HX_STACK_VAR(sliderPosition,"sliderPosition");
		HX_STACK_LINE(169)
		::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(170)
		matr->createGradientBox(30.,30.,(Float(::Math_obj::PI) / Float((int)2)),(int)0,-15.);
		HX_STACK_LINE(171)
		this->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)),Dynamic( Array_obj<Dynamic>::__new().Add(0.1).Add(0.05)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(173)
		this->get_graphics()->drawCircle((sliderPosition + 14.0),(16. + (int)2),15.);
		HX_STACK_LINE(174)
		this->get_graphics()->endFill();
		HX_STACK_LINE(175)
		this->get_graphics()->beginFill(this->_sliderColour,null());
		HX_STACK_LINE(176)
		int _g = ::com::danielfreeman::madcomponents::Colour_obj::darken(colour,(int)-32);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(176)
		this->get_graphics()->lineStyle((int)0,_g,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(177)
		this->get_graphics()->drawCircle((sliderPosition + 14.0),15.,14.0);
		HX_STACK_LINE(178)
		this->get_graphics()->endFill();
		HX_STACK_LINE(180)
		this->_position = position;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISwitch_obj,drawSwitch,(void))

bool UISwitch_obj::get_state( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UISwitch","get_state",0x1a2d2096,"com.danielfreeman.madcomponents.UISwitch.get_state","com/danielfreeman/madcomponents/UISwitch.hx",185,0xcaea34bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(185)
	return this->_state;
}


HX_DEFINE_DYNAMIC_FUNC0(UISwitch_obj,get_state,return )

bool UISwitch_obj::set_state( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UISwitch","set_state",0xfd7e0ca2,"com.danielfreeman.madcomponents.UISwitch.set_state","com/danielfreeman/madcomponents/UISwitch.hx",189,0xcaea34bf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(190)
	this->drawSwitch((  ((value)) ? Float(1.0) : Float(0.0) ));
	HX_STACK_LINE(191)
	this->_state = value;
	HX_STACK_LINE(192)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UISwitch_obj,set_state,return )

::String UISwitch_obj::set_text( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UISwitch","set_text",0x28c8f33c,"com.danielfreeman.madcomponents.UISwitch.set_text","com/danielfreeman/madcomponents/UISwitch.hx",198,0xcaea34bf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(199)
	this->set_state((value == HX_CSTRING("on")));
	HX_STACK_LINE(200)
	return value;
}


::String UISwitch_obj::get_text( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UISwitch","get_text",0x7a6b99c8,"com.danielfreeman.madcomponents.UISwitch.get_text","com/danielfreeman/madcomponents/UISwitch.hx",207,0xcaea34bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(207)
	if ((this->_state)){
		HX_STACK_LINE(207)
		return HX_CSTRING("on");
	}
	else{
		HX_STACK_LINE(207)
		return HX_CSTRING("off");
	}
	HX_STACK_LINE(207)
	return null();
}


Void UISwitch_obj::drawComponent( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISwitch","drawComponent",0x1aa10147,"com.danielfreeman.madcomponents.UISwitch.drawComponent","com/danielfreeman/madcomponents/UISwitch.hx",212,0xcaea34bf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(212)
		this->drawSwitch((  ((this->_state)) ? Float(1.0) : Float(0.0) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISwitch_obj,drawComponent,(void))

Void UISwitch_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISwitch","destructor",0xeaddf54b,"com.danielfreeman.madcomponents.UISwitch.destructor","com/danielfreeman/madcomponents/UISwitch.hx",216,0xcaea34bf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(217)
		this->super::destructor();
		HX_STACK_LINE(218)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null());
		HX_STACK_LINE(219)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(220)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null());
		HX_STACK_LINE(221)
		this->_timer->removeEventListener(::openfl::events::TimerEvent_obj::TIMER,this->animate_dyn(),null());
	}
return null();
}


int UISwitch_obj::ON_COLOUR;

int UISwitch_obj::OFF_COLOUR;

int UISwitch_obj::OUTLINE_COLOUR;

int UISwitch_obj::SHADOW_COLOUR;

Float UISwitch_obj::SHADOW_ALPHA;

Float UISwitch_obj::SHADOW_OFFSET;

Float UISwitch_obj::WIDTH;

Float UISwitch_obj::HEIGHT;

Float UISwitch_obj::RADIUS;

int UISwitch_obj::STEPS;

Float UISwitch_obj::DELTA;


UISwitch_obj::UISwitch_obj()
{
}

void UISwitch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UISwitch);
	HX_MARK_MEMBER_NAME(_onColour,"_onColour");
	HX_MARK_MEMBER_NAME(_offColour,"_offColour");
	HX_MARK_MEMBER_NAME(_outlineColour,"_outlineColour");
	HX_MARK_MEMBER_NAME(_shadowColour,"_shadowColour");
	HX_MARK_MEMBER_NAME(_sliderColour,"_sliderColour");
	HX_MARK_MEMBER_NAME(_state,"_state");
	HX_MARK_MEMBER_NAME(_position,"_position");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_deltaPosition,"_deltaPosition");
	HX_MARK_MEMBER_NAME(_ready,"_ready");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UISwitch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_onColour,"_onColour");
	HX_VISIT_MEMBER_NAME(_offColour,"_offColour");
	HX_VISIT_MEMBER_NAME(_outlineColour,"_outlineColour");
	HX_VISIT_MEMBER_NAME(_shadowColour,"_shadowColour");
	HX_VISIT_MEMBER_NAME(_sliderColour,"_sliderColour");
	HX_VISIT_MEMBER_NAME(_state,"_state");
	HX_VISIT_MEMBER_NAME(_position,"_position");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_deltaPosition,"_deltaPosition");
	HX_VISIT_MEMBER_NAME(_ready,"_ready");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UISwitch_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return get_state(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"_ready") ) { return _ready; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"animate") ) { return animate_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_onColour") ) { return _onColour; }
		if (HX_FIELD_EQ(inName,"_position") ) { return _position; }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseMove") ) { return mouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"get_state") ) { return get_state_dyn(); }
		if (HX_FIELD_EQ(inName,"set_state") ) { return set_state_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_offColour") ) { return _offColour; }
		if (HX_FIELD_EQ(inName,"drawSwitch") ) { return drawSwitch_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { return interpolate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_shadowColour") ) { return _shadowColour; }
		if (HX_FIELD_EQ(inName,"_sliderColour") ) { return _sliderColour; }
		if (HX_FIELD_EQ(inName,"drawComponent") ) { return drawComponent_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_outlineColour") ) { return _outlineColour; }
		if (HX_FIELD_EQ(inName,"_deltaPosition") ) { return _deltaPosition; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UISwitch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return set_state(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< ::openfl::utils::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ready") ) { _ready=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_onColour") ) { _onColour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_position") ) { _position=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_offColour") ) { _offColour=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_shadowColour") ) { _shadowColour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sliderColour") ) { _sliderColour=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_outlineColour") ) { _outlineColour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_deltaPosition") ) { _deltaPosition=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UISwitch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("_onColour"));
	outFields->push(HX_CSTRING("_offColour"));
	outFields->push(HX_CSTRING("_outlineColour"));
	outFields->push(HX_CSTRING("_shadowColour"));
	outFields->push(HX_CSTRING("_sliderColour"));
	outFields->push(HX_CSTRING("_state"));
	outFields->push(HX_CSTRING("_position"));
	outFields->push(HX_CSTRING("_timer"));
	outFields->push(HX_CSTRING("_deltaPosition"));
	outFields->push(HX_CSTRING("_ready"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ON_COLOUR"),
	HX_CSTRING("OFF_COLOUR"),
	HX_CSTRING("OUTLINE_COLOUR"),
	HX_CSTRING("SHADOW_COLOUR"),
	HX_CSTRING("SHADOW_ALPHA"),
	HX_CSTRING("SHADOW_OFFSET"),
	HX_CSTRING("WIDTH"),
	HX_CSTRING("HEIGHT"),
	HX_CSTRING("RADIUS"),
	HX_CSTRING("STEPS"),
	HX_CSTRING("DELTA"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(UISwitch_obj,_onColour),HX_CSTRING("_onColour")},
	{hx::fsInt,(int)offsetof(UISwitch_obj,_offColour),HX_CSTRING("_offColour")},
	{hx::fsInt,(int)offsetof(UISwitch_obj,_outlineColour),HX_CSTRING("_outlineColour")},
	{hx::fsInt,(int)offsetof(UISwitch_obj,_shadowColour),HX_CSTRING("_shadowColour")},
	{hx::fsInt,(int)offsetof(UISwitch_obj,_sliderColour),HX_CSTRING("_sliderColour")},
	{hx::fsBool,(int)offsetof(UISwitch_obj,_state),HX_CSTRING("_state")},
	{hx::fsFloat,(int)offsetof(UISwitch_obj,_position),HX_CSTRING("_position")},
	{hx::fsObject /*::openfl::utils::Timer*/ ,(int)offsetof(UISwitch_obj,_timer),HX_CSTRING("_timer")},
	{hx::fsFloat,(int)offsetof(UISwitch_obj,_deltaPosition),HX_CSTRING("_deltaPosition")},
	{hx::fsBool,(int)offsetof(UISwitch_obj,_ready),HX_CSTRING("_ready")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_onColour"),
	HX_CSTRING("_offColour"),
	HX_CSTRING("_outlineColour"),
	HX_CSTRING("_shadowColour"),
	HX_CSTRING("_sliderColour"),
	HX_CSTRING("_state"),
	HX_CSTRING("_position"),
	HX_CSTRING("_timer"),
	HX_CSTRING("_deltaPosition"),
	HX_CSTRING("_ready"),
	HX_CSTRING("animate"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("mouseMove"),
	HX_CSTRING("interpolate"),
	HX_CSTRING("drawSwitch"),
	HX_CSTRING("get_state"),
	HX_CSTRING("set_state"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_text"),
	HX_CSTRING("drawComponent"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UISwitch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UISwitch_obj::ON_COLOUR,"ON_COLOUR");
	HX_MARK_MEMBER_NAME(UISwitch_obj::OFF_COLOUR,"OFF_COLOUR");
	HX_MARK_MEMBER_NAME(UISwitch_obj::OUTLINE_COLOUR,"OUTLINE_COLOUR");
	HX_MARK_MEMBER_NAME(UISwitch_obj::SHADOW_COLOUR,"SHADOW_COLOUR");
	HX_MARK_MEMBER_NAME(UISwitch_obj::SHADOW_ALPHA,"SHADOW_ALPHA");
	HX_MARK_MEMBER_NAME(UISwitch_obj::SHADOW_OFFSET,"SHADOW_OFFSET");
	HX_MARK_MEMBER_NAME(UISwitch_obj::WIDTH,"WIDTH");
	HX_MARK_MEMBER_NAME(UISwitch_obj::HEIGHT,"HEIGHT");
	HX_MARK_MEMBER_NAME(UISwitch_obj::RADIUS,"RADIUS");
	HX_MARK_MEMBER_NAME(UISwitch_obj::STEPS,"STEPS");
	HX_MARK_MEMBER_NAME(UISwitch_obj::DELTA,"DELTA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UISwitch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UISwitch_obj::ON_COLOUR,"ON_COLOUR");
	HX_VISIT_MEMBER_NAME(UISwitch_obj::OFF_COLOUR,"OFF_COLOUR");
	HX_VISIT_MEMBER_NAME(UISwitch_obj::OUTLINE_COLOUR,"OUTLINE_COLOUR");
	HX_VISIT_MEMBER_NAME(UISwitch_obj::SHADOW_COLOUR,"SHADOW_COLOUR");
	HX_VISIT_MEMBER_NAME(UISwitch_obj::SHADOW_ALPHA,"SHADOW_ALPHA");
	HX_VISIT_MEMBER_NAME(UISwitch_obj::SHADOW_OFFSET,"SHADOW_OFFSET");
	HX_VISIT_MEMBER_NAME(UISwitch_obj::WIDTH,"WIDTH");
	HX_VISIT_MEMBER_NAME(UISwitch_obj::HEIGHT,"HEIGHT");
	HX_VISIT_MEMBER_NAME(UISwitch_obj::RADIUS,"RADIUS");
	HX_VISIT_MEMBER_NAME(UISwitch_obj::STEPS,"STEPS");
	HX_VISIT_MEMBER_NAME(UISwitch_obj::DELTA,"DELTA");
};

#endif

Class UISwitch_obj::__mClass;

void UISwitch_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UISwitch"), hx::TCanCast< UISwitch_obj> ,sStaticFields,sMemberFields,
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

void UISwitch_obj::__boot()
{
	ON_COLOUR= (int)5034595;
	OFF_COLOUR= (int)16777215;
	OUTLINE_COLOUR= (int)14540253;
	SHADOW_COLOUR= (int)0;
	SHADOW_ALPHA= 0.1;
	SHADOW_OFFSET= (int)2;
	WIDTH= 52.0;
	HEIGHT= 31.0;
	RADIUS= 14.0;
	STEPS= (int)8;
	DELTA= 0.1;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
