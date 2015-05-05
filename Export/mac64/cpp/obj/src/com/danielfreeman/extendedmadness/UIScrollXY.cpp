#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_danielfreeman_AnimationTimer
#include <com/danielfreeman/AnimationTimer.h>
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
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIScrollXY
#include <com/danielfreeman/extendedmadness/UIScrollXY.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical
#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
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
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void UIScrollXY_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","new",0xb5d24380,"com.danielfreeman.extendedmadness.UIScrollXY.new","com/danielfreeman/extendedmadness/UIScrollXY.hx",59,0x9e628a4d)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(91)
	this->_scrollEnabledX = true;
	HX_STACK_LINE(90)
	this->_noSwipeCountX = (int)0;
	HX_STACK_LINE(83)
	this->_scrollBarThreshold = 8.0;
	HX_STACK_LINE(76)
	this->_tapToScale = (int)-1;
	HX_STACK_LINE(74)
	this->_offsetX = (int)0;
	HX_STACK_LINE(73)
	this->_endSliderX = (int)-1;
	HX_STACK_LINE(72)
	this->_deltaX = (int)0;
	HX_STACK_LINE(116)
	super::__construct(screen,xml,attributes);
	HX_STACK_LINE(117)
	::com::danielfreeman::AnimationTimer _g = ::com::danielfreeman::AnimationTimer_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)5);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(117)
	this->_scaleTimer = _g;
	HX_STACK_LINE(118)
	bool _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(118)
	if ((xml->has->resolve(HX_CSTRING("auto")))){
		HX_STACK_LINE(118)
		::String _g1 = xml->att->resolve(HX_CSTRING("auto"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(118)
		_g2 = (_g1 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(118)
		_g2 = false;
	}
	HX_STACK_LINE(118)
	this->_auto = _g2;
	HX_STACK_LINE(119)
	bool _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(119)
	if ((xml->has->resolve(HX_CSTRING("lockSides")))){
		HX_STACK_LINE(119)
		::String _g3 = xml->att->resolve(HX_CSTRING("lockSides"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(119)
		_g4 = (_g3 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(119)
		_g4 = false;
	}
	HX_STACK_LINE(119)
	this->_lockSides = _g4;
	HX_STACK_LINE(120)
	bool _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(120)
	if ((xml->has->resolve(HX_CSTRING("lockTopBottom")))){
		HX_STACK_LINE(120)
		::String _g5 = xml->att->resolve(HX_CSTRING("lockTopBottom"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(120)
		_g6 = (_g5 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(120)
		_g6 = false;
	}
	HX_STACK_LINE(120)
	this->_lockTopBottom = _g6;
	HX_STACK_LINE(121)
	bool _g8;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(121)
	if ((xml->has->resolve(HX_CSTRING("manhattan")))){
		HX_STACK_LINE(121)
		::String _g7 = xml->att->resolve(HX_CSTRING("manhattan"));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(121)
		_g8 = (_g7 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(121)
		_g8 = false;
	}
	HX_STACK_LINE(121)
	this->_manhattan = _g8;
	HX_STACK_LINE(122)
	bool _g10;		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(122)
	if ((!((!(xml->has->resolve(HX_CSTRING("scrollH"))))))){
		HX_STACK_LINE(122)
		::String _g9 = xml->att->resolve(HX_CSTRING("scrollH"));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(122)
		_g10 = (_g9 != HX_CSTRING("no scroll"));
	}
	else{
		HX_STACK_LINE(122)
		_g10 = true;
	}
	HX_STACK_LINE(122)
	this->_scrollEnabledX = _g10;
	HX_STACK_LINE(123)
	if ((xml->has->resolve(HX_CSTRING("tapToScale")))){
		HX_STACK_LINE(124)
		::String _g11 = xml->att->resolve(HX_CSTRING("tapToScale"));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(124)
		Float _g12 = ::Std_obj::parseFloat(_g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(124)
		this->_tapToScale = _g12;
		HX_STACK_LINE(125)
		this->_slider->doubleClickEnabled = true;
		HX_STACK_LINE(126)
		this->_slider->addEventListener(::openfl::events::MouseEvent_obj::DOUBLE_CLICK,this->doubleClick_dyn(),null(),null(),null());
		HX_STACK_LINE(127)
		this->_scaleTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->scaleTimerHandler_dyn());
	}
}
;
	return null();
}

//UIScrollXY_obj::~UIScrollXY_obj() { }

Dynamic UIScrollXY_obj::__CreateEmpty() { return  new UIScrollXY_obj; }
hx::ObjectPtr< UIScrollXY_obj > UIScrollXY_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIScrollXY_obj > result = new UIScrollXY_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIScrollXY_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIScrollXY_obj > result = new UIScrollXY_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void UIScrollXY_obj::doubleClick( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","doubleClick",0x014c9697,"com.danielfreeman.extendedmadness.UIScrollXY.doubleClick","com/danielfreeman/extendedmadness/UIScrollXY.hx",135,0x9e628a4d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(135)
		if ((!(this->_scaleTimer->get_running()))){
			HX_STACK_LINE(136)
			Float _g = ::Math_obj::abs((this->_scale - 1.0));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(136)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(136)
			if (((_g < 1e-6))){
				HX_STACK_LINE(136)
				_g1 = this->_tapToScale;
			}
			else{
				HX_STACK_LINE(136)
				_g1 = 1.0;
			}
			HX_STACK_LINE(136)
			Float _g2 = this->get_stage()->get_mouseX();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(136)
			Float _g3 = this->get_stage()->get_mouseY();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(136)
			this->scaleAnimated(_g1,_g2,_g3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollXY_obj,doubleClick,(void))

Void UIScrollXY_obj::scaleAnimated( Float value,Float x,Float y){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","scaleAnimated",0x170d326d,"com.danielfreeman.extendedmadness.UIScrollXY.scaleAnimated","com/danielfreeman/extendedmadness/UIScrollXY.hx",144,0x9e628a4d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(145)
		::openfl::geom::Point _g = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(145)
		::openfl::geom::Point _g1 = this->_slider->globalToLocal(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(145)
		this->_sliderPoint = _g1;
		HX_STACK_LINE(146)
		::openfl::geom::Point _g2 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(146)
		::openfl::geom::Point _g3 = this->globalToLocal(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(146)
		this->_thisPoint = _g3;
		HX_STACK_LINE(147)
		this->_oldScale = this->_scale;
		HX_STACK_LINE(148)
		this->_newScale = value;
		HX_STACK_LINE(149)
		this->_scaleTimer->reset();
		HX_STACK_LINE(150)
		this->_scaleTimer->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(UIScrollXY_obj,scaleAnimated,(void))

Void UIScrollXY_obj::scaleAtXY( Float value,Float x,Float y){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","scaleAtXY",0x62ee977e,"com.danielfreeman.extendedmadness.UIScrollXY.scaleAtXY","com/danielfreeman/extendedmadness/UIScrollXY.hx",158,0x9e628a4d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(159)
		::openfl::geom::Point _g = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(159)
		::openfl::geom::Point sliderPoint = this->_slider->globalToLocal(_g);		HX_STACK_VAR(sliderPoint,"sliderPoint");
		HX_STACK_LINE(160)
		::openfl::geom::Point _g1 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(160)
		::openfl::geom::Point thisPoint = this->globalToLocal(_g1);		HX_STACK_VAR(thisPoint,"thisPoint");
		HX_STACK_LINE(161)
		this->doScaleAtXY(value,thisPoint,sliderPoint);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(UIScrollXY_obj,scaleAtXY,(void))

bool UIScrollXY_obj::set_scrollEnabledX( bool value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","set_scrollEnabledX",0xa1acfa01,"com.danielfreeman.extendedmadness.UIScrollXY.set_scrollEnabledX","com/danielfreeman/extendedmadness/UIScrollXY.hx",165,0x9e628a4d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(166)
	this->_scrollEnabledX = value;
	HX_STACK_LINE(167)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollXY_obj,set_scrollEnabledX,return )

Void UIScrollXY_obj::doScaleAtXY( Float value,::openfl::geom::Point thisPoint,::openfl::geom::Point sliderPoint){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","doScaleAtXY",0xb0be5e73,"com.danielfreeman.extendedmadness.UIScrollXY.doScaleAtXY","com/danielfreeman/extendedmadness/UIScrollXY.hx",173,0x9e628a4d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(thisPoint,"thisPoint")
		HX_STACK_ARG(sliderPoint,"sliderPoint")
		HX_STACK_LINE(174)
		{
			HX_STACK_LINE(174)
			::openfl::display::Sprite _g = this->_slider;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(174)
			Float _g1 = _g->get_x();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(174)
			Float _g11 = this->_slider->get_x();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(174)
			Float _g2 = ((value * sliderPoint->x) + _g11);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(174)
			Float _g3 = (thisPoint->x - _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(174)
			Float _g4 = (_g1 + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(174)
			_g->set_x(_g4);
		}
		HX_STACK_LINE(175)
		Float _g5 = this->_slider->get_x();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(175)
		if (((_g5 > (int)0))){
			HX_STACK_LINE(176)
			this->_slider->set_x((int)0);
		}
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			::com::danielfreeman::extendedmadness::UIScrollXY _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(177)
			Float _g6 = _g->get_sliderY();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(177)
			Float _g7 = this->get_sliderY();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(177)
			Float _g8 = ((value * sliderPoint->y) + _g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(177)
			Float _g9 = (thisPoint->y - _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(177)
			Float _g10 = (_g6 + _g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(177)
			_g->set_sliderY(_g10);
		}
		HX_STACK_LINE(178)
		Float _g11 = this->get_sliderY();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(178)
		if (((_g11 > (int)0))){
			HX_STACK_LINE(179)
			this->set_sliderY((int)0);
		}
		HX_STACK_LINE(180)
		this->set_scale(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(UIScrollXY_obj,doScaleAtXY,(void))

Void UIScrollXY_obj::scaleTimerHandler( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","scaleTimerHandler",0xc560374f,"com.danielfreeman.extendedmadness.UIScrollXY.scaleTimerHandler","com/danielfreeman/extendedmadness/UIScrollXY.hx",186,0x9e628a4d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(187)
		int _g = this->_scaleTimer->get_currentCount();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(187)
		Float _g1 = (_g * ((this->_newScale - this->_oldScale)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(187)
		Float _g2 = (Float(_g1) / Float((int)5));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(187)
		Float _g3 = (this->_oldScale + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(187)
		this->doScaleAtXY(_g3,this->_thisPoint,this->_sliderPoint);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollXY_obj,scaleTimerHandler,(void))

Void UIScrollXY_obj::adjustHorizontalSlide( Float sliderWidth){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","adjustHorizontalSlide",0x86966cfe,"com.danielfreeman.extendedmadness.UIScrollXY.adjustHorizontalSlide","com/danielfreeman/extendedmadness/UIScrollXY.hx",191,0x9e628a4d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sliderWidth,"sliderWidth")
		HX_STACK_LINE(192)
		this->_maximumSlideX = ((sliderWidth - this->_width) + (10.0 * ((  (((this->_border == HX_CSTRING("false")))) ? int((int)0) : int((int)1) ))));
		HX_STACK_LINE(193)
		if (((this->_maximumSlideX < (int)0))){
			HX_STACK_LINE(194)
			this->_maximumSlideX = (int)0;
		}
		HX_STACK_LINE(195)
		Float _g = this->_slider->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(195)
		if (((_g < -(this->_maximumSlideX)))){
			HX_STACK_LINE(196)
			this->_slider->set_x(-(this->_maximumSlideX));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollXY_obj,adjustHorizontalSlide,(void))

Void UIScrollXY_obj::adjustMaximumSlide( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","adjustMaximumSlide",0xb54e3d40,"com.danielfreeman.extendedmadness.UIScrollXY.adjustMaximumSlide","com/danielfreeman/extendedmadness/UIScrollXY.hx",202,0x9e628a4d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(203)
		this->super::adjustMaximumSlide();
		HX_STACK_LINE(204)
		Float sliderWidth;		HX_STACK_VAR(sliderWidth,"sliderWidth");
		HX_STACK_LINE(204)
		if (((this->_scrollerWidth > (int)0))){
			HX_STACK_LINE(204)
			sliderWidth = (this->_scrollerWidth * this->_scale);
		}
		else{
			HX_STACK_LINE(204)
			sliderWidth = this->_slider->getBounds(hx::ObjectPtr<OBJ_>(this))->get_right();
		}
		HX_STACK_LINE(205)
		this->adjustHorizontalSlide(sliderWidth);
		HX_STACK_LINE(206)
		this->hideScrollBar();
	}
return null();
}


Void UIScrollXY_obj::handleFlick( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","handleFlick",0xe8b27823,"com.danielfreeman.extendedmadness.UIScrollXY.handleFlick","com/danielfreeman/extendedmadness/UIScrollXY.hx",210,0x9e628a4d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(211)
		int _g = this->_touchTimer->get_currentCount();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(211)
		if (((_g <= ::com::danielfreeman::madcomponents::UIScrollVertical_obj::FLICK_THRESHOLD))){
			HX_STACK_LINE(212)
			int _g1 = this->_touchTimer->get_currentCount();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(212)
			Float divisor;		HX_STACK_VAR(divisor,"divisor");
			HX_STACK_LINE(212)
			if (((_g1 == (int)0))){
				HX_STACK_LINE(212)
				divisor = (int)1;
			}
			else{
				HX_STACK_LINE(212)
				divisor = this->_touchTimer->get_currentCount();
			}
			HX_STACK_LINE(213)
			Float _g2 = this->get_mouseY();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(213)
			Float _g3 = (_g2 - this->_startMouse->y);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(213)
			Float _g4 = (Float(_g3) / Float(divisor));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(213)
			this->_delta = _g4;
			HX_STACK_LINE(214)
			Float _g5 = this->get_mouseX();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(214)
			Float _g6 = (_g5 - this->_startMouse->x);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(214)
			Float _g7 = (Float(_g6) / Float(divisor));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(214)
			this->_deltaX = _g7;
		}
	}
return null();
}


Void UIScrollXY_obj::mouseMove( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","mouseMove",0x33bb26f6,"com.danielfreeman.extendedmadness.UIScrollXY.mouseMove","com/danielfreeman/extendedmadness/UIScrollXY.hx",221,0x9e628a4d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(222)
		if ((this->_scaleTimer->get_running())){
			HX_STACK_LINE(223)
			return null();
		}
		HX_STACK_LINE(226)
		if ((!(this->_noScroll))){
			HX_STACK_LINE(228)
			if (((bool(this->_scrollEnabledX) && bool(((bool(!(this->_auto)) || bool((this->_maximumSlideX > (int)0)))))))){
				HX_STACK_LINE(229)
				Float deltaX = -(this->get_sliderX());		HX_STACK_VAR(deltaX,"deltaX");
				HX_STACK_LINE(230)
				Float _g = this->get_sliderX();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(230)
				Float _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(230)
				if ((this->get_outsideSlideRangeX())){
					HX_STACK_LINE(230)
					_g1 = this->_dampen;
				}
				else{
					HX_STACK_LINE(230)
					_g1 = 1.0;
				}
				HX_STACK_LINE(230)
				Float _g2 = this->get_mouseX();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(230)
				Float _g3 = (_g2 - this->_lastMouse->x);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(230)
				Float _g4 = (_g1 * _g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(230)
				Float xSlider = (_g + _g4);		HX_STACK_VAR(xSlider,"xSlider");
				HX_STACK_LINE(231)
				if ((this->_lockSides)){
					HX_STACK_LINE(232)
					Float _g5 = ::Math_obj::min((int)0,xSlider);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(232)
					Float _g6 = ::Math_obj::max(_g5,-(this->_maximumSlideX));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(232)
					xSlider = _g6;
				}
				HX_STACK_LINE(234)
				this->set_sliderX(xSlider);
				HX_STACK_LINE(235)
				hx::AddEq(deltaX,xSlider);
				HX_STACK_LINE(237)
				Float _g7 = ::Math_obj::abs(deltaX);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(237)
				if (((_g7 > 2.0))){
					HX_STACK_LINE(238)
					if ((((deltaX * this->_deltaX) > (int)0))){
						HX_STACK_LINE(239)
						this->_deltaX = ((0.5 * this->_deltaX) + (0.5 * deltaX));
					}
					else{
						HX_STACK_LINE(242)
						this->_deltaX = deltaX;
					}
					HX_STACK_LINE(244)
					this->_noSwipeCountX = (int)0;
				}
				else{
					HX_STACK_LINE(257)
					int _g8 = ++(this->_noSwipeCountX);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(257)
					if (((_g8 > (int)1))){
						HX_STACK_LINE(258)
						this->_deltaX = (int)0;
					}
				}
			}
			HX_STACK_LINE(262)
			if (((bool(!(this->_auto)) || bool((this->_maximumSlide > (int)0))))){
				HX_STACK_LINE(267)
				Float delta = -(this->get_sliderY());		HX_STACK_VAR(delta,"delta");
				HX_STACK_LINE(268)
				Float _g9 = this->get_sliderY();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(268)
				Float _g10;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(268)
				if ((this->get_outsideSlideRange())){
					HX_STACK_LINE(268)
					_g10 = this->_dampen;
				}
				else{
					HX_STACK_LINE(268)
					_g10 = 1.0;
				}
				HX_STACK_LINE(268)
				Float _g11 = this->get_mouseY();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(268)
				Float _g12 = (_g11 - this->_lastMouse->y);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(268)
				Float _g13 = (_g10 * _g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(268)
				Float ySlider = (_g9 + _g13);		HX_STACK_VAR(ySlider,"ySlider");
				HX_STACK_LINE(269)
				if ((this->_lockTopBottom)){
					HX_STACK_LINE(270)
					Float _g14 = ::Math_obj::min((int)0,ySlider);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(270)
					Float _g15 = ::Math_obj::max(_g14,-(this->_maximumSlide));		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(270)
					ySlider = _g15;
				}
				HX_STACK_LINE(272)
				this->set_sliderY(ySlider);
				HX_STACK_LINE(273)
				hx::AddEq(delta,ySlider);
				HX_STACK_LINE(275)
				Float _g16 = ::Math_obj::abs(delta);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(275)
				if (((_g16 > 2.0))){
					HX_STACK_LINE(276)
					if ((((delta * this->_delta) > (int)0))){
						HX_STACK_LINE(277)
						this->_delta = ((0.5 * this->_delta) + (0.5 * delta));
					}
					else{
						HX_STACK_LINE(280)
						this->_delta = delta;
					}
					HX_STACK_LINE(282)
					this->_noSwipeCount = (int)0;
				}
				else{
					HX_STACK_LINE(284)
					int _g17 = ++(this->_noSwipeCount);		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(284)
					if (((_g17 > (int)1))){
						HX_STACK_LINE(285)
						this->_delta = (int)0;
					}
				}
			}
			HX_STACK_LINE(289)
			if ((this->_manhattan)){
				HX_STACK_LINE(290)
				this->justMoveVerticallyOrHorizontally();
			}
			HX_STACK_LINE(293)
			Float _g18 = this->get_mouseX();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(293)
			Float _g19 = (_g18 - this->_lastMouse->x);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(293)
			Float _g20 = ::Math_obj::abs(_g19);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(293)
			Float _g21 = this->get_mouseY();		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(293)
			Float _g22 = (_g21 - this->_lastMouse->y);		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(293)
			Float _g23 = ::Math_obj::abs(_g22);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(293)
			Float _g24 = (_g20 + _g23);		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(293)
			hx::AddEq(this->_distance,_g24);
		}
		HX_STACK_LINE(295)
		Float _g25 = this->get_mouseX();		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(295)
		this->_lastMouse->x = _g25;
		HX_STACK_LINE(296)
		Float _g26 = this->get_mouseY();		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(296)
		this->_lastMouse->y = _g26;
		HX_STACK_LINE(297)
		if (((bool((bool(!(this->_noScroll)) && bool(this->_scrollEnabledX))) && bool((this->_distance > 8.0))))){
			HX_STACK_LINE(298)
			this->showScrollBar();
		}
		else{
			HX_STACK_LINE(300)
			int _g27 = this->_touchTimer->get_currentCount();		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(300)
			if (((  (((  (((_g27 == (int)3))) ? bool(this->_classic) : bool(false) ))) ? bool((this->_distance < 8.0)) : bool(false) ))){
				HX_STACK_LINE(301)
				this->pressButton(null());
			}
			else{
				HX_STACK_LINE(303)
				int _g28 = this->_touchTimer->get_currentCount();		HX_STACK_VAR(_g28,"_g28");
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollXY_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollXY.hx",303,0x9e628a4d)
						{
							HX_STACK_LINE(303)
							Float _g29 = ::Math_obj::abs(__this->_delta);		HX_STACK_VAR(_g29,"_g29");
							HX_STACK_LINE(303)
							return (_g29 <= 2.0);
						}
						return null();
					}
				};
				HX_STACK_LINE(303)
				if (((  (((  (((_g28 == (int)8))) ? bool(!(this->_classic)) : bool(false) ))) ? bool(_Function_3_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(304)
					this->pressButton(null());
				}
			}
		}
	}
return null();
}


Void UIScrollXY_obj::justMoveVerticallyOrHorizontally( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","justMoveVerticallyOrHorizontally",0xee634d74,"com.danielfreeman.extendedmadness.UIScrollXY.justMoveVerticallyOrHorizontally","com/danielfreeman/extendedmadness/UIScrollXY.hx",309,0x9e628a4d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(310)
		Float _g = ::Math_obj::abs(this->_delta);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(310)
		Float _g1 = ::Math_obj::abs(this->_deltaX);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(310)
		Float _g2 = (4.0 * _g1);		HX_STACK_VAR(_g2,"_g2");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollXY_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollXY.hx",310,0x9e628a4d)
				{
					HX_STACK_LINE(310)
					Float _g3 = ::Math_obj::abs(__this->_delta);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(310)
					return (_g3 > 10.0);
				}
				return null();
			}
		};
		HX_STACK_LINE(310)
		if (((  (((_g > _g2))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(311)
			this->_deltaX = (int)0;
		}
		else{
			HX_STACK_LINE(313)
			Float _g4 = ::Math_obj::abs(this->_deltaX);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(313)
			Float _g5 = ::Math_obj::abs(this->_delta);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(313)
			Float _g6 = (4.0 * _g5);		HX_STACK_VAR(_g6,"_g6");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollXY_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollXY.hx",313,0x9e628a4d)
					{
						HX_STACK_LINE(313)
						Float _g7 = ::Math_obj::abs(__this->_deltaX);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(313)
						return (_g7 > 10.0);
					}
					return null();
				}
			};
			HX_STACK_LINE(313)
			if (((  (((_g4 > _g6))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(314)
				this->_delta = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollXY_obj,justMoveVerticallyOrHorizontally,(void))

bool UIScrollXY_obj::get_outsideSlideRangeX( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","get_outsideSlideRangeX",0xf0299110,"com.danielfreeman.extendedmadness.UIScrollXY.get_outsideSlideRangeX","com/danielfreeman/extendedmadness/UIScrollXY.hx",319,0x9e628a4d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(320)
	Float _g = this->_slider->get_x();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(320)
	if ((!(((_g >= (int)0))))){
		HX_STACK_LINE(320)
		Float _g1 = this->_slider->get_x();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(320)
		return (_g1 <= -(this->_maximumSlideX));
	}
	else{
		HX_STACK_LINE(320)
		return true;
	}
	HX_STACK_LINE(320)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollXY_obj,get_outsideSlideRangeX,return )

Void UIScrollXY_obj::startMovement( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","startMovement",0xc9ec82d1,"com.danielfreeman.extendedmadness.UIScrollXY.startMovement","com/danielfreeman/extendedmadness/UIScrollXY.hx",326,0x9e628a4d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(327)
		this->_endSliderX = (::com::danielfreeman::madcomponents::UIScrollVertical_obj::FINISHED - (int)1);
		HX_STACK_LINE(328)
		this->super::startMovement();
	}
return null();
}


bool UIScrollXY_obj::startMovement0( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","startMovement0",0xe505f43f,"com.danielfreeman.extendedmadness.UIScrollXY.startMovement0","com/danielfreeman/extendedmadness/UIScrollXY.hx",332,0x9e628a4d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(333)
	bool result = false;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(334)
	Float _g = this->_slider->get_y();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(334)
	if (((_g > this->_offset))){
		HX_STACK_LINE(335)
		this->_endSlider = -(this->_offset);
		HX_STACK_LINE(336)
		result = true;
	}
	else{
		HX_STACK_LINE(338)
		Float _g1 = this->_slider->get_y();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(338)
		if (((_g1 < -(this->_maximumSlide)))){
			HX_STACK_LINE(339)
			this->_endSlider = this->_maximumSlide;
			HX_STACK_LINE(340)
			result = (bool(result) || bool(true));
		}
	}
	HX_STACK_LINE(342)
	Float _g2 = this->_slider->get_x();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(342)
	if (((_g2 > this->_offsetX))){
		HX_STACK_LINE(343)
		this->_endSliderX = -(this->_offsetX);
		HX_STACK_LINE(344)
		result = (bool(result) || bool(true));
	}
	else{
		HX_STACK_LINE(346)
		Float _g3 = this->_slider->get_x();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(346)
		if (((_g3 < -(this->_maximumSlideX)))){
			HX_STACK_LINE(347)
			this->_endSliderX = this->_maximumSlideX;
			HX_STACK_LINE(348)
			result = (bool(result) || bool(true));
		}
	}
	HX_STACK_LINE(350)
	return result;
}


Void UIScrollXY_obj::stopMovement( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","stopMovement",0x99822c31,"com.danielfreeman.extendedmadness.UIScrollXY.stopMovement","com/danielfreeman/extendedmadness/UIScrollXY.hx",357,0x9e628a4d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(357)
		this->_stopY = true;
	}
return null();
}


Void UIScrollXY_obj::movement( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","movement",0x77e3be0f,"com.danielfreeman.extendedmadness.UIScrollXY.movement","com/danielfreeman/extendedmadness/UIScrollXY.hx",363,0x9e628a4d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(364)
		if ((this->_scaleTimer->get_running())){
			HX_STACK_LINE(365)
			return null();
		}
		HX_STACK_LINE(367)
		if ((!(this->_noScroll))){
			HX_STACK_LINE(368)
			this->_stopY = false;
			HX_STACK_LINE(369)
			bool stopX = false;		HX_STACK_VAR(stopX,"stopX");
			HX_STACK_LINE(370)
			this->super::movement(event);
			HX_STACK_LINE(371)
			if (((this->_endSliderX < ::com::danielfreeman::madcomponents::UIScrollVertical_obj::FINISHED))){
				HX_STACK_LINE(372)
				Float _g = this->deltaToDecay(this->_deltaX);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(372)
				hx::MultEq(this->_deltaX,_g);
				HX_STACK_LINE(373)
				Float _g1 = this->get_sliderX();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(373)
				Float _g2 = (_g1 + this->_deltaX);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(373)
				this->set_sliderX(_g2);
				HX_STACK_LINE(374)
				if (((this->_distance > 8.0))){
					HX_STACK_LINE(375)
					this->showScrollBar();
				}
				HX_STACK_LINE(377)
				Float _g3 = ::Math_obj::abs(this->_deltaX);		HX_STACK_VAR(_g3,"_g3");
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollXY_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollXY.hx",377,0x9e628a4d)
						{
							HX_STACK_LINE(377)
							Float _g4 = __this->get_sliderX();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(377)
							return (_g4 > (int)0);
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollXY_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollXY.hx",377,0x9e628a4d)
						{
							HX_STACK_LINE(377)
							Float _g5 = __this->get_sliderX();		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(377)
							return (_g5 < -(__this->_maximumSlideX));
						}
						return null();
					}
				};
				HX_STACK_LINE(377)
				if (((  ((!(((  ((!(((_g3 < this->_deltaThreshold))))) ? bool(_Function_3_1::Block(this)) : bool(true) ))))) ? bool(_Function_3_2::Block(this)) : bool(true) ))){
					HX_STACK_LINE(378)
					if ((!(this->startMovement0()))){
						HX_STACK_LINE(379)
						stopX = true;
					}
				}
			}
			else{
				HX_STACK_LINE(383)
				Float _g6 = this->get_sliderX();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(383)
				Float _g7 = (-(this->_endSliderX) - _g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(383)
				Float _g8 = (_g7 * ::com::danielfreeman::madcomponents::UIScrollVertical_obj::BOUNCE);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(383)
				this->_deltaX = _g8;
				HX_STACK_LINE(384)
				Float _g9 = this->get_sliderX();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(384)
				Float _g10 = (_g9 + this->_deltaX);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(384)
				this->set_sliderX(_g10);
				HX_STACK_LINE(385)
				this->showScrollBar();
				HX_STACK_LINE(386)
				Float _g11 = ::Math_obj::abs(this->_deltaX);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(386)
				if (((_g11 < this->_deltaThreshold))){
					HX_STACK_LINE(387)
					stopX = true;
					HX_STACK_LINE(388)
					this->set_sliderX(-(this->_endSliderX));
				}
			}
			HX_STACK_LINE(391)
			if (((bool(stopX) && bool(this->_stopY)))){
				HX_STACK_LINE(392)
				this->super::stopMovement();
			}
		}
	}
return null();
}


Float UIScrollXY_obj::getSliderWidth( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","getSliderWidth",0x5750fc0f,"com.danielfreeman.extendedmadness.UIScrollXY.getSliderWidth","com/danielfreeman/extendedmadness/UIScrollXY.hx",399,0x9e628a4d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(399)
	if (((this->_scrollerWidth > (int)0))){
		HX_STACK_LINE(399)
		return (this->_scrollerWidth * this->_scale);
	}
	else{
		HX_STACK_LINE(399)
		return this->_slider->getBounds(hx::ObjectPtr<OBJ_>(this))->get_right();
	}
	HX_STACK_LINE(399)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollXY_obj,getSliderWidth,return )

Void UIScrollXY_obj::showScrollBar( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","showScrollBar",0xf313f629,"com.danielfreeman.extendedmadness.UIScrollXY.showScrollBar","com/danielfreeman/extendedmadness/UIScrollXY.hx",405,0x9e628a4d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(406)
		if (((bool(!(this->_auto)) || bool((this->_maximumSlide > (int)0))))){
			HX_STACK_LINE(407)
			this->super::showScrollBar();
		}
		else{
			HX_STACK_LINE(410)
			this->_scrollBarLayer->get_graphics()->clear();
			HX_STACK_LINE(411)
			this->_scrollBarVisible = true;
		}
		HX_STACK_LINE(413)
		if (((bool(!(this->_auto)) || bool((this->_maximumSlideX > (int)0))))){
			HX_STACK_LINE(414)
			Float sliderWidth = this->getSliderWidth();		HX_STACK_VAR(sliderWidth,"sliderWidth");
			HX_STACK_LINE(415)
			Float barWidth = ((Float(this->_width) / Float(sliderWidth)) * this->_width);		HX_STACK_VAR(barWidth,"barWidth");
			HX_STACK_LINE(416)
			Float _g = -(this->_slider->get_x());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(416)
			Float _g1 = (Float(_g) / Float(sliderWidth));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(416)
			Float _g2 = (_g1 * this->_width);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(416)
			Float barPositionX = (_g2 + 4.);		HX_STACK_VAR(barPositionX,"barPositionX");
			HX_STACK_LINE(417)
			if (((barPositionX < 2.0))){
				HX_STACK_LINE(418)
				hx::AddEq(barWidth,barPositionX);
				HX_STACK_LINE(419)
				barPositionX = 2.0;
			}
			HX_STACK_LINE(421)
			if ((((barPositionX + barWidth) > (this->_width - 8.)))){
				HX_STACK_LINE(422)
				hx::SubEq(barWidth,(((barPositionX + barWidth) - this->_width) + 8.));
			}
			HX_STACK_LINE(424)
			if (((bool((barWidth > (int)0)) && bool((barPositionX >= (int)0))))){
				HX_STACK_LINE(425)
				this->_scrollBarLayer->get_graphics()->beginFill(this->_scrollBarColour,null());
				HX_STACK_LINE(426)
				this->_scrollBarLayer->get_graphics()->drawRoundRect(barPositionX,((this->_height - 5.0) - 2.0),barWidth,5.0,5.0,null());
			}
		}
	}
return null();
}


Float UIScrollXY_obj::set_sliderX( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","set_sliderX",0x5866915a,"com.danielfreeman.extendedmadness.UIScrollXY.set_sliderX","com/danielfreeman/extendedmadness/UIScrollXY.hx",432,0x9e628a4d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(433)
	Float _g = this->_slider->get_x();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(433)
	Float _g1 = (value - _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(433)
	Float _g2 = ::Math_obj::abs(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(433)
	if (((_g2 < 2048.0))){
		HX_STACK_LINE(434)
		this->_slider->set_x(value);
	}
	HX_STACK_LINE(436)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollXY_obj,set_sliderX,return )

Float UIScrollXY_obj::get_sliderX( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","get_sliderX",0x4df98a4e,"com.danielfreeman.extendedmadness.UIScrollXY.get_sliderX","com/danielfreeman/extendedmadness/UIScrollXY.hx",441,0x9e628a4d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(441)
	return this->_slider->get_x();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollXY_obj,get_sliderX,return )

Float UIScrollXY_obj::set_scrollPositionX( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","set_scrollPositionX",0x76238705,"com.danielfreeman.extendedmadness.UIScrollXY.set_scrollPositionX","com/danielfreeman/extendedmadness/UIScrollXY.hx",447,0x9e628a4d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(448)
	this->_slider->set_x(-(value));
	HX_STACK_LINE(449)
	if (((value > this->_maximumSlideX))){
		HX_STACK_LINE(450)
		this->_slider->set_x(-(this->_maximumSlideX));
	}
	HX_STACK_LINE(452)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollXY_obj,set_scrollPositionX,return )

Float UIScrollXY_obj::get_scrollPositionX( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","get_scrollPositionX",0x398693f9,"com.danielfreeman.extendedmadness.UIScrollXY.get_scrollPositionX","com/danielfreeman/extendedmadness/UIScrollXY.hx",457,0x9e628a4d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(457)
	return -(this->_slider->get_x());
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollXY_obj,get_scrollPositionX,return )

Float UIScrollXY_obj::set_scale( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","set_scale",0xdecea20d,"com.danielfreeman.extendedmadness.UIScrollXY.set_scale","com/danielfreeman/extendedmadness/UIScrollXY.hx",463,0x9e628a4d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(464)
	Float _g = this->_slider->set_scaleY(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(464)
	Float _g1 = this->_slider->set_scaleX(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(464)
	this->_scale = _g1;
	HX_STACK_LINE(465)
	this->adjustMaximumSlide();
	HX_STACK_LINE(466)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollXY_obj,set_scale,return )

Float UIScrollXY_obj::get_scale( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","get_scale",0xfb7db601,"com.danielfreeman.extendedmadness.UIScrollXY.get_scale","com/danielfreeman/extendedmadness/UIScrollXY.hx",471,0x9e628a4d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(471)
	return this->_scale;
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollXY_obj,get_scale,return )

Void UIScrollXY_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollXY","destructor",0xf9e60c19,"com.danielfreeman.extendedmadness.UIScrollXY.destructor","com/danielfreeman/extendedmadness/UIScrollXY.hx",475,0x9e628a4d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(476)
		this->removeEventListener(::openfl::events::MouseEvent_obj::DOUBLE_CLICK,this->doubleClick_dyn(),null());
		HX_STACK_LINE(477)
		this->_scaleTimer->removeEventListener(::openfl::events::TimerEvent_obj::TIMER,this->scaleTimerHandler_dyn());
	}
return null();
}


int UIScrollXY_obj::STEPS;

Float UIScrollXY_obj::ALT_FACTOR;

Float UIScrollXY_obj::ALT_THRESHOLD;


UIScrollXY_obj::UIScrollXY_obj()
{
}

void UIScrollXY_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIScrollXY);
	HX_MARK_MEMBER_NAME(_maximumSlideX,"_maximumSlideX");
	HX_MARK_MEMBER_NAME(_deltaX,"_deltaX");
	HX_MARK_MEMBER_NAME(_endSliderX,"_endSliderX");
	HX_MARK_MEMBER_NAME(_offsetX,"_offsetX");
	HX_MARK_MEMBER_NAME(_stopY,"_stopY");
	HX_MARK_MEMBER_NAME(_tapToScale,"_tapToScale");
	HX_MARK_MEMBER_NAME(_scaleTimer,"_scaleTimer");
	HX_MARK_MEMBER_NAME(_thisPoint,"_thisPoint");
	HX_MARK_MEMBER_NAME(_sliderPoint,"_sliderPoint");
	HX_MARK_MEMBER_NAME(_oldScale,"_oldScale");
	HX_MARK_MEMBER_NAME(_newScale,"_newScale");
	HX_MARK_MEMBER_NAME(_auto,"_auto");
	HX_MARK_MEMBER_NAME(_scrollBarThreshold,"_scrollBarThreshold");
	HX_MARK_MEMBER_NAME(_lockSides,"_lockSides");
	HX_MARK_MEMBER_NAME(_lockTopBottom,"_lockTopBottom");
	HX_MARK_MEMBER_NAME(_noSwipeCountX,"_noSwipeCountX");
	HX_MARK_MEMBER_NAME(_scrollEnabledX,"_scrollEnabledX");
	HX_MARK_MEMBER_NAME(_manhattan,"_manhattan");
	::com::danielfreeman::madcomponents::UIScrollVertical_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIScrollXY_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_maximumSlideX,"_maximumSlideX");
	HX_VISIT_MEMBER_NAME(_deltaX,"_deltaX");
	HX_VISIT_MEMBER_NAME(_endSliderX,"_endSliderX");
	HX_VISIT_MEMBER_NAME(_offsetX,"_offsetX");
	HX_VISIT_MEMBER_NAME(_stopY,"_stopY");
	HX_VISIT_MEMBER_NAME(_tapToScale,"_tapToScale");
	HX_VISIT_MEMBER_NAME(_scaleTimer,"_scaleTimer");
	HX_VISIT_MEMBER_NAME(_thisPoint,"_thisPoint");
	HX_VISIT_MEMBER_NAME(_sliderPoint,"_sliderPoint");
	HX_VISIT_MEMBER_NAME(_oldScale,"_oldScale");
	HX_VISIT_MEMBER_NAME(_newScale,"_newScale");
	HX_VISIT_MEMBER_NAME(_auto,"_auto");
	HX_VISIT_MEMBER_NAME(_scrollBarThreshold,"_scrollBarThreshold");
	HX_VISIT_MEMBER_NAME(_lockSides,"_lockSides");
	HX_VISIT_MEMBER_NAME(_lockTopBottom,"_lockTopBottom");
	HX_VISIT_MEMBER_NAME(_noSwipeCountX,"_noSwipeCountX");
	HX_VISIT_MEMBER_NAME(_scrollEnabledX,"_scrollEnabledX");
	HX_VISIT_MEMBER_NAME(_manhattan,"_manhattan");
	::com::danielfreeman::madcomponents::UIScrollVertical_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIScrollXY_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return get_scale(); }
		if (HX_FIELD_EQ(inName,"_auto") ) { return _auto; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_stopY") ) { return _stopY; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sliderX") ) { return get_sliderX(); }
		if (HX_FIELD_EQ(inName,"_deltaX") ) { return _deltaX; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_offsetX") ) { return _offsetX; }
		if (HX_FIELD_EQ(inName,"movement") ) { return movement_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_oldScale") ) { return _oldScale; }
		if (HX_FIELD_EQ(inName,"_newScale") ) { return _newScale; }
		if (HX_FIELD_EQ(inName,"scaleAtXY") ) { return scaleAtXY_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseMove") ) { return mouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_thisPoint") ) { return _thisPoint; }
		if (HX_FIELD_EQ(inName,"_lockSides") ) { return _lockSides; }
		if (HX_FIELD_EQ(inName,"_manhattan") ) { return _manhattan; }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_endSliderX") ) { return _endSliderX; }
		if (HX_FIELD_EQ(inName,"_tapToScale") ) { return _tapToScale; }
		if (HX_FIELD_EQ(inName,"_scaleTimer") ) { return _scaleTimer; }
		if (HX_FIELD_EQ(inName,"doubleClick") ) { return doubleClick_dyn(); }
		if (HX_FIELD_EQ(inName,"doScaleAtXY") ) { return doScaleAtXY_dyn(); }
		if (HX_FIELD_EQ(inName,"handleFlick") ) { return handleFlick_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sliderX") ) { return set_sliderX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sliderX") ) { return get_sliderX_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_sliderPoint") ) { return _sliderPoint; }
		if (HX_FIELD_EQ(inName,"stopMovement") ) { return stopMovement_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scaleAnimated") ) { return scaleAnimated_dyn(); }
		if (HX_FIELD_EQ(inName,"startMovement") ) { return startMovement_dyn(); }
		if (HX_FIELD_EQ(inName,"showScrollBar") ) { return showScrollBar_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_maximumSlideX") ) { return _maximumSlideX; }
		if (HX_FIELD_EQ(inName,"_lockTopBottom") ) { return _lockTopBottom; }
		if (HX_FIELD_EQ(inName,"_noSwipeCountX") ) { return _noSwipeCountX; }
		if (HX_FIELD_EQ(inName,"startMovement0") ) { return startMovement0_dyn(); }
		if (HX_FIELD_EQ(inName,"getSliderWidth") ) { return getSliderWidth_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"scrollPositionX") ) { return get_scrollPositionX(); }
		if (HX_FIELD_EQ(inName,"_scrollEnabledX") ) { return _scrollEnabledX; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"scaleTimerHandler") ) { return scaleTimerHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"outsideSlideRangeX") ) { return get_outsideSlideRangeX(); }
		if (HX_FIELD_EQ(inName,"set_scrollEnabledX") ) { return set_scrollEnabledX_dyn(); }
		if (HX_FIELD_EQ(inName,"adjustMaximumSlide") ) { return adjustMaximumSlide_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_scrollBarThreshold") ) { return _scrollBarThreshold; }
		if (HX_FIELD_EQ(inName,"set_scrollPositionX") ) { return set_scrollPositionX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollPositionX") ) { return get_scrollPositionX_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"adjustHorizontalSlide") ) { return adjustHorizontalSlide_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_outsideSlideRangeX") ) { return get_outsideSlideRangeX_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"justMoveVerticallyOrHorizontally") ) { return justMoveVerticallyOrHorizontally_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIScrollXY_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return set_scale(inValue); }
		if (HX_FIELD_EQ(inName,"_auto") ) { _auto=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_stopY") ) { _stopY=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sliderX") ) { return set_sliderX(inValue); }
		if (HX_FIELD_EQ(inName,"_deltaX") ) { _deltaX=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_offsetX") ) { _offsetX=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_oldScale") ) { _oldScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_newScale") ) { _newScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_thisPoint") ) { _thisPoint=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lockSides") ) { _lockSides=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_manhattan") ) { _manhattan=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_endSliderX") ) { _endSliderX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tapToScale") ) { _tapToScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleTimer") ) { _scaleTimer=inValue.Cast< ::com::danielfreeman::AnimationTimer >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_sliderPoint") ) { _sliderPoint=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"scrollEnabledX") ) { return set_scrollEnabledX(inValue); }
		if (HX_FIELD_EQ(inName,"_maximumSlideX") ) { _maximumSlideX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lockTopBottom") ) { _lockTopBottom=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_noSwipeCountX") ) { _noSwipeCountX=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"scrollPositionX") ) { return set_scrollPositionX(inValue); }
		if (HX_FIELD_EQ(inName,"_scrollEnabledX") ) { _scrollEnabledX=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_scrollBarThreshold") ) { _scrollBarThreshold=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIScrollXY_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("scrollEnabledX"));
	outFields->push(HX_CSTRING("outsideSlideRangeX"));
	outFields->push(HX_CSTRING("sliderX"));
	outFields->push(HX_CSTRING("scrollPositionX"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("_maximumSlideX"));
	outFields->push(HX_CSTRING("_deltaX"));
	outFields->push(HX_CSTRING("_endSliderX"));
	outFields->push(HX_CSTRING("_offsetX"));
	outFields->push(HX_CSTRING("_stopY"));
	outFields->push(HX_CSTRING("_tapToScale"));
	outFields->push(HX_CSTRING("_scaleTimer"));
	outFields->push(HX_CSTRING("_thisPoint"));
	outFields->push(HX_CSTRING("_sliderPoint"));
	outFields->push(HX_CSTRING("_oldScale"));
	outFields->push(HX_CSTRING("_newScale"));
	outFields->push(HX_CSTRING("_auto"));
	outFields->push(HX_CSTRING("_scrollBarThreshold"));
	outFields->push(HX_CSTRING("_lockSides"));
	outFields->push(HX_CSTRING("_lockTopBottom"));
	outFields->push(HX_CSTRING("_noSwipeCountX"));
	outFields->push(HX_CSTRING("_scrollEnabledX"));
	outFields->push(HX_CSTRING("_manhattan"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("STEPS"),
	HX_CSTRING("ALT_FACTOR"),
	HX_CSTRING("ALT_THRESHOLD"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(UIScrollXY_obj,_maximumSlideX),HX_CSTRING("_maximumSlideX")},
	{hx::fsFloat,(int)offsetof(UIScrollXY_obj,_deltaX),HX_CSTRING("_deltaX")},
	{hx::fsFloat,(int)offsetof(UIScrollXY_obj,_endSliderX),HX_CSTRING("_endSliderX")},
	{hx::fsFloat,(int)offsetof(UIScrollXY_obj,_offsetX),HX_CSTRING("_offsetX")},
	{hx::fsBool,(int)offsetof(UIScrollXY_obj,_stopY),HX_CSTRING("_stopY")},
	{hx::fsFloat,(int)offsetof(UIScrollXY_obj,_tapToScale),HX_CSTRING("_tapToScale")},
	{hx::fsObject /*::com::danielfreeman::AnimationTimer*/ ,(int)offsetof(UIScrollXY_obj,_scaleTimer),HX_CSTRING("_scaleTimer")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(UIScrollXY_obj,_thisPoint),HX_CSTRING("_thisPoint")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(UIScrollXY_obj,_sliderPoint),HX_CSTRING("_sliderPoint")},
	{hx::fsFloat,(int)offsetof(UIScrollXY_obj,_oldScale),HX_CSTRING("_oldScale")},
	{hx::fsFloat,(int)offsetof(UIScrollXY_obj,_newScale),HX_CSTRING("_newScale")},
	{hx::fsBool,(int)offsetof(UIScrollXY_obj,_auto),HX_CSTRING("_auto")},
	{hx::fsFloat,(int)offsetof(UIScrollXY_obj,_scrollBarThreshold),HX_CSTRING("_scrollBarThreshold")},
	{hx::fsBool,(int)offsetof(UIScrollXY_obj,_lockSides),HX_CSTRING("_lockSides")},
	{hx::fsBool,(int)offsetof(UIScrollXY_obj,_lockTopBottom),HX_CSTRING("_lockTopBottom")},
	{hx::fsInt,(int)offsetof(UIScrollXY_obj,_noSwipeCountX),HX_CSTRING("_noSwipeCountX")},
	{hx::fsBool,(int)offsetof(UIScrollXY_obj,_scrollEnabledX),HX_CSTRING("_scrollEnabledX")},
	{hx::fsBool,(int)offsetof(UIScrollXY_obj,_manhattan),HX_CSTRING("_manhattan")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_maximumSlideX"),
	HX_CSTRING("_deltaX"),
	HX_CSTRING("_endSliderX"),
	HX_CSTRING("_offsetX"),
	HX_CSTRING("_stopY"),
	HX_CSTRING("_tapToScale"),
	HX_CSTRING("_scaleTimer"),
	HX_CSTRING("_thisPoint"),
	HX_CSTRING("_sliderPoint"),
	HX_CSTRING("_oldScale"),
	HX_CSTRING("_newScale"),
	HX_CSTRING("_auto"),
	HX_CSTRING("_scrollBarThreshold"),
	HX_CSTRING("_lockSides"),
	HX_CSTRING("_lockTopBottom"),
	HX_CSTRING("_noSwipeCountX"),
	HX_CSTRING("_scrollEnabledX"),
	HX_CSTRING("_manhattan"),
	HX_CSTRING("doubleClick"),
	HX_CSTRING("scaleAnimated"),
	HX_CSTRING("scaleAtXY"),
	HX_CSTRING("set_scrollEnabledX"),
	HX_CSTRING("doScaleAtXY"),
	HX_CSTRING("scaleTimerHandler"),
	HX_CSTRING("adjustHorizontalSlide"),
	HX_CSTRING("adjustMaximumSlide"),
	HX_CSTRING("handleFlick"),
	HX_CSTRING("mouseMove"),
	HX_CSTRING("justMoveVerticallyOrHorizontally"),
	HX_CSTRING("get_outsideSlideRangeX"),
	HX_CSTRING("startMovement"),
	HX_CSTRING("startMovement0"),
	HX_CSTRING("stopMovement"),
	HX_CSTRING("movement"),
	HX_CSTRING("getSliderWidth"),
	HX_CSTRING("showScrollBar"),
	HX_CSTRING("set_sliderX"),
	HX_CSTRING("get_sliderX"),
	HX_CSTRING("set_scrollPositionX"),
	HX_CSTRING("get_scrollPositionX"),
	HX_CSTRING("set_scale"),
	HX_CSTRING("get_scale"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIScrollXY_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIScrollXY_obj::STEPS,"STEPS");
	HX_MARK_MEMBER_NAME(UIScrollXY_obj::ALT_FACTOR,"ALT_FACTOR");
	HX_MARK_MEMBER_NAME(UIScrollXY_obj::ALT_THRESHOLD,"ALT_THRESHOLD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIScrollXY_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIScrollXY_obj::STEPS,"STEPS");
	HX_VISIT_MEMBER_NAME(UIScrollXY_obj::ALT_FACTOR,"ALT_FACTOR");
	HX_VISIT_MEMBER_NAME(UIScrollXY_obj::ALT_THRESHOLD,"ALT_THRESHOLD");
};

#endif

Class UIScrollXY_obj::__mClass;

void UIScrollXY_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UIScrollXY"), hx::TCanCast< UIScrollXY_obj> ,sStaticFields,sMemberFields,
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

void UIScrollXY_obj::__boot()
{
	STEPS= (int)5;
	ALT_FACTOR= 4.0;
	ALT_THRESHOLD= 10.0;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
