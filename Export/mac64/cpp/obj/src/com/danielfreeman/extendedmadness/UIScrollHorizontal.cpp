#include <hxcpp.h>

#ifndef INCLUDED_com_danielfreeman_AnimationTimer
#include <com/danielfreeman/AnimationTimer.h>
#endif
#ifndef INCLUDED_com_danielfreeman_MadXML
#include <com/danielfreeman/MadXML.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIScrollHorizontal
#include <com/danielfreeman/extendedmadness/UIScrollHorizontal.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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

Void UIScrollHorizontal_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollHorizontal","new",0xf5d00a03,"com.danielfreeman.extendedmadness.UIScrollHorizontal.new","com/danielfreeman/extendedmadness/UIScrollHorizontal.hx",63,0x7f296a2a)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(63)
	super::__construct(screen,xml,attributes);
}
;
	return null();
}

//UIScrollHorizontal_obj::~UIScrollHorizontal_obj() { }

Dynamic UIScrollHorizontal_obj::__CreateEmpty() { return  new UIScrollHorizontal_obj; }
hx::ObjectPtr< UIScrollHorizontal_obj > UIScrollHorizontal_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIScrollHorizontal_obj > result = new UIScrollHorizontal_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIScrollHorizontal_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIScrollHorizontal_obj > result = new UIScrollHorizontal_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void UIScrollHorizontal_obj::adjustMaximumSlide( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollHorizontal","adjustMaximumSlide",0x2764421d,"com.danielfreeman.extendedmadness.UIScrollHorizontal.adjustMaximumSlide","com/danielfreeman/extendedmadness/UIScrollHorizontal.hx",69,0x7f296a2a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		Float sliderWidth;		HX_STACK_VAR(sliderWidth,"sliderWidth");
		HX_STACK_LINE(70)
		if (((this->_scrollerWidth > (int)0))){
			HX_STACK_LINE(70)
			sliderWidth = (this->_scrollerWidth * this->_scale);
		}
		else{
			HX_STACK_LINE(70)
			sliderWidth = this->_slider->get_width();
		}
		HX_STACK_LINE(71)
		this->_maximumSlide = ((sliderWidth - this->_width) + (10.0 * ((  (((this->_border == HX_CSTRING("false")))) ? int((int)0) : int((int)1) ))));
		HX_STACK_LINE(72)
		if (((this->_maximumSlide < (int)0))){
			HX_STACK_LINE(73)
			this->_maximumSlide = (int)0;
		}
		HX_STACK_LINE(74)
		Float _g = this->_slider->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(74)
		if (((_g < -(this->_maximumSlide)))){
			HX_STACK_LINE(75)
			this->_slider->set_x(-(this->_maximumSlide));
		}
	}
return null();
}


Void UIScrollHorizontal_obj::mouseMove( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollHorizontal","mouseMove",0xf0cd31b9,"com.danielfreeman.extendedmadness.UIScrollHorizontal.mouseMove","com/danielfreeman/extendedmadness/UIScrollHorizontal.hx",81,0x7f296a2a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(82)
		if ((!(this->_noScroll))){
			HX_STACK_LINE(83)
			Float delta = -(this->get_sliderX());		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(84)
			{
				HX_STACK_LINE(84)
				::com::danielfreeman::extendedmadness::UIScrollHorizontal _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(84)
				Float _g1 = _g->get_sliderX();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(84)
				Float _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(84)
				if ((this->get_outsideSlideRangeX())){
					HX_STACK_LINE(84)
					_g11 = this->_dampen;
				}
				else{
					HX_STACK_LINE(84)
					_g11 = 1.0;
				}
				HX_STACK_LINE(84)
				Float _g2 = this->get_mouseX();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(84)
				Float _g3 = (_g2 - this->_lastMouse->x);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(84)
				Float _g4 = (_g11 * _g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(84)
				Float _g5 = (_g1 + _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(84)
				_g->set_sliderX(_g5);
			}
			HX_STACK_LINE(85)
			Float _g6 = this->get_sliderX();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(85)
			hx::AddEq(delta,_g6);
			HX_STACK_LINE(87)
			Float _g7 = ::Math_obj::abs(delta);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(87)
			if (((_g7 > 2.0))){
				HX_STACK_LINE(88)
				if ((((delta * this->_delta) > (int)0))){
					HX_STACK_LINE(89)
					this->_delta = ((0.5 * this->_delta) + (0.5 * delta));
				}
				else{
					HX_STACK_LINE(92)
					this->_delta = delta;
				}
				HX_STACK_LINE(94)
				this->_noSwipeCount = (int)0;
			}
			else{
				HX_STACK_LINE(96)
				int _g8 = ++(this->_noSwipeCount);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(96)
				if (((_g8 > (int)1))){
					HX_STACK_LINE(97)
					this->_delta = (int)0;
				}
			}
			HX_STACK_LINE(99)
			Float _g9 = this->get_mouseX();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(99)
			Float _g10 = (_g9 - this->_lastMouse->x);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(99)
			Float _g11 = ::Math_obj::abs(_g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(99)
			hx::AddEq(this->_distance,_g11);
			HX_STACK_LINE(100)
			Float _g12 = this->get_mouseX();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(100)
			this->_lastMouse->x = _g12;
			HX_STACK_LINE(101)
			Float _g13 = this->get_mouseY();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(101)
			this->_lastMouse->y = _g13;
		}
		HX_STACK_LINE(103)
		if (((bool(!(this->_noScroll)) && bool((this->_distance > 8.0))))){
			HX_STACK_LINE(104)
			this->showScrollBar();
		}
		else{
			HX_STACK_LINE(106)
			int _g14 = this->_touchTimer->get_currentCount();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(106)
			if (((  (((  (((_g14 == (int)3))) ? bool(this->_classic) : bool(false) ))) ? bool((this->_distance < 8.0)) : bool(false) ))){
				HX_STACK_LINE(107)
				this->pressButton(null());
			}
			else{
				HX_STACK_LINE(109)
				int _g15 = this->_touchTimer->get_currentCount();		HX_STACK_VAR(_g15,"_g15");
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollHorizontal_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollHorizontal.hx",109,0x7f296a2a)
						{
							HX_STACK_LINE(109)
							Float _g16 = ::Math_obj::abs(__this->_delta);		HX_STACK_VAR(_g16,"_g16");
							HX_STACK_LINE(109)
							return (_g16 <= 2.0);
						}
						return null();
					}
				};
				HX_STACK_LINE(109)
				if (((  (((  (((_g15 == (int)8))) ? bool(!(this->_classic)) : bool(false) ))) ? bool(_Function_3_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(110)
					this->pressButton(null());
				}
			}
		}
	}
return null();
}


bool UIScrollHorizontal_obj::get_outsideSlideRangeX( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollHorizontal","get_outsideSlideRangeX",0xff1fc86d,"com.danielfreeman.extendedmadness.UIScrollHorizontal.get_outsideSlideRangeX","com/danielfreeman/extendedmadness/UIScrollHorizontal.hx",115,0x7f296a2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	Float _g = this->_slider->get_x();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(116)
	if ((!(((_g > (int)0))))){
		HX_STACK_LINE(116)
		Float _g1 = this->_slider->get_x();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(116)
		return (_g1 < -(this->_maximumSlide));
	}
	else{
		HX_STACK_LINE(116)
		return true;
	}
	HX_STACK_LINE(116)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollHorizontal_obj,get_outsideSlideRangeX,return )

bool UIScrollHorizontal_obj::startMovement0( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollHorizontal","startMovement0",0x0fe7069c,"com.danielfreeman.extendedmadness.UIScrollHorizontal.startMovement0","com/danielfreeman/extendedmadness/UIScrollHorizontal.hx",120,0x7f296a2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(121)
	Float _g = this->_slider->get_x();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(121)
	if (((_g > this->_offset))){
		HX_STACK_LINE(122)
		this->_endSlider = -(this->_offset);
		HX_STACK_LINE(123)
		return true;
	}
	else{
		HX_STACK_LINE(125)
		Float _g1 = this->_slider->get_x();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(125)
		if (((_g1 < -(this->_maximumSlide)))){
			HX_STACK_LINE(126)
			this->_endSlider = this->_maximumSlide;
			HX_STACK_LINE(127)
			return true;
		}
	}
	HX_STACK_LINE(129)
	return false;
}


Void UIScrollHorizontal_obj::movement( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollHorizontal","movement",0x2cf87cac,"com.danielfreeman.extendedmadness.UIScrollHorizontal.movement","com/danielfreeman/extendedmadness/UIScrollHorizontal.hx",137,0x7f296a2a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(137)
		if (((this->_endSlider < ::com::danielfreeman::madcomponents::UIScrollVertical_obj::FINISHED))){
			HX_STACK_LINE(139)
			Float _g = this->deltaToDecay(this->_delta);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(139)
			hx::MultEq(this->_delta,_g);
			HX_STACK_LINE(140)
			Float _g1 = this->get_sliderX();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(140)
			Float _g2 = (_g1 + this->_delta);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(140)
			this->set_sliderX(_g2);
			HX_STACK_LINE(141)
			if (((this->_distance > 8.0))){
				HX_STACK_LINE(142)
				this->showScrollBar();
			}
			HX_STACK_LINE(144)
			Float _g3 = ::Math_obj::abs(this->_delta);		HX_STACK_VAR(_g3,"_g3");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollHorizontal_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollHorizontal.hx",144,0x7f296a2a)
					{
						HX_STACK_LINE(144)
						Float _g4 = __this->get_sliderX();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(144)
						return (_g4 > (int)0);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollHorizontal_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollHorizontal.hx",144,0x7f296a2a)
					{
						HX_STACK_LINE(144)
						Float _g5 = __this->get_sliderX();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(144)
						return (_g5 < -(__this->_maximumSlide));
					}
					return null();
				}
			};
			HX_STACK_LINE(144)
			if (((  ((!(((  ((!(((_g3 < this->_deltaThreshold))))) ? bool(_Function_2_1::Block(this)) : bool(true) ))))) ? bool(_Function_2_2::Block(this)) : bool(true) ))){
				HX_STACK_LINE(145)
				if ((!(this->startMovement0()))){
					HX_STACK_LINE(146)
					this->stopMovement();
				}
			}
		}
		else{
			HX_STACK_LINE(150)
			Float _g6 = this->_slider->get_x();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(150)
			Float _g7 = (-(this->_endSlider) - _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(150)
			Float _g8 = (_g7 * ::com::danielfreeman::madcomponents::UIScrollVertical_obj::BOUNCE);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(150)
			this->_delta = _g8;
			HX_STACK_LINE(151)
			Float _g9 = this->get_sliderX();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(151)
			Float _g10 = (_g9 + this->_delta);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(151)
			this->set_sliderX(_g10);
			HX_STACK_LINE(152)
			this->showScrollBar();
			HX_STACK_LINE(153)
			Float _g11 = ::Math_obj::abs(this->_delta);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(153)
			if (((_g11 < this->_deltaThreshold))){
				HX_STACK_LINE(154)
				this->stopMovement();
				HX_STACK_LINE(155)
				this->set_sliderX(-(this->_endSlider));
			}
		}
	}
return null();
}


Void UIScrollHorizontal_obj::drawScrollBar( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollHorizontal","drawScrollBar",0x591f2e85,"com.danielfreeman.extendedmadness.UIScrollHorizontal.drawScrollBar","com/danielfreeman/extendedmadness/UIScrollHorizontal.hx",163,0x7f296a2a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(164)
		Float sliderWidth;		HX_STACK_VAR(sliderWidth,"sliderWidth");
		HX_STACK_LINE(164)
		if (((this->_scrollerWidth > (int)0))){
			HX_STACK_LINE(164)
			sliderWidth = (this->_scrollerWidth * this->_scale);
		}
		else{
			HX_STACK_LINE(164)
			sliderWidth = this->_slider->get_width();
		}
		HX_STACK_LINE(165)
		this->_scrollBarLayer->get_graphics()->clear();
		HX_STACK_LINE(166)
		Float barWidth = ((Float(this->_width) / Float(sliderWidth)) * this->_width);		HX_STACK_VAR(barWidth,"barWidth");
		HX_STACK_LINE(167)
		Float _g = -(this->_slider->get_x());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		Float _g1 = (Float(_g) / Float(sliderWidth));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(167)
		Float _g2 = (_g1 * this->_width);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(167)
		Float barPositionX = (_g2 + 4.);		HX_STACK_VAR(barPositionX,"barPositionX");
		HX_STACK_LINE(168)
		if (((barPositionX < 2.0))){
			HX_STACK_LINE(169)
			hx::AddEq(barWidth,barPositionX);
			HX_STACK_LINE(170)
			barPositionX = 2.0;
		}
		HX_STACK_LINE(172)
		if ((((barPositionX + barWidth) > (this->_width - 8.)))){
			HX_STACK_LINE(173)
			hx::SubEq(barWidth,(((barPositionX + barWidth) - this->_width) + 8.));
		}
		HX_STACK_LINE(175)
		if (((bool((barWidth > (int)0)) && bool((barPositionX >= (int)0))))){
			HX_STACK_LINE(176)
			this->_scrollBarLayer->get_graphics()->beginFill(this->_scrollBarColour,null());
			HX_STACK_LINE(177)
			this->_scrollBarLayer->get_graphics()->drawRoundRect(barPositionX,((this->_height - 5.0) - 2.0),barWidth,5.0,5.0,null());
		}
	}
return null();
}


Float UIScrollHorizontal_obj::set_sliderX( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollHorizontal","set_sliderX",0x062312dd,"com.danielfreeman.extendedmadness.UIScrollHorizontal.set_sliderX","com/danielfreeman/extendedmadness/UIScrollHorizontal.hx",182,0x7f296a2a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(183)
	Float _g = this->_slider->get_x();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(183)
	Float _g1 = (value - _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(183)
	Float _g2 = ::Math_obj::abs(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(183)
	if (((_g2 < 2048.0))){
		HX_STACK_LINE(184)
		this->_slider->set_x(value);
	}
	HX_STACK_LINE(186)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollHorizontal_obj,set_sliderX,return )

Float UIScrollHorizontal_obj::get_sliderX( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollHorizontal","get_sliderX",0xfbb60bd1,"com.danielfreeman.extendedmadness.UIScrollHorizontal.get_sliderX","com/danielfreeman/extendedmadness/UIScrollHorizontal.hx",191,0x7f296a2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(191)
	return this->_slider->get_x();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollHorizontal_obj,get_sliderX,return )

Float UIScrollHorizontal_obj::set_scrollPositionX( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollHorizontal","set_scrollPositionX",0xd751c388,"com.danielfreeman.extendedmadness.UIScrollHorizontal.set_scrollPositionX","com/danielfreeman/extendedmadness/UIScrollHorizontal.hx",197,0x7f296a2a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(198)
	this->_slider->set_x(-(value));
	HX_STACK_LINE(199)
	if (((value > this->_maximumSlide))){
		HX_STACK_LINE(200)
		this->_slider->set_x(-(this->_maximumSlide));
	}
	HX_STACK_LINE(202)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollHorizontal_obj,set_scrollPositionX,return )

Float UIScrollHorizontal_obj::get_scrollPositionX( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollHorizontal","get_scrollPositionX",0x9ab4d07c,"com.danielfreeman.extendedmadness.UIScrollHorizontal.get_scrollPositionX","com/danielfreeman/extendedmadness/UIScrollHorizontal.hx",207,0x7f296a2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(207)
	return -(this->_slider->get_x());
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollHorizontal_obj,get_scrollPositionX,return )


UIScrollHorizontal_obj::UIScrollHorizontal_obj()
{
}

Dynamic UIScrollHorizontal_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sliderX") ) { return get_sliderX(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"movement") ) { return movement_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mouseMove") ) { return mouseMove_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_sliderX") ) { return set_sliderX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sliderX") ) { return get_sliderX_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawScrollBar") ) { return drawScrollBar_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"startMovement0") ) { return startMovement0_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"scrollPositionX") ) { return get_scrollPositionX(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"outsideSlideRangeX") ) { return get_outsideSlideRangeX(); }
		if (HX_FIELD_EQ(inName,"adjustMaximumSlide") ) { return adjustMaximumSlide_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_scrollPositionX") ) { return set_scrollPositionX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollPositionX") ) { return get_scrollPositionX_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_outsideSlideRangeX") ) { return get_outsideSlideRangeX_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIScrollHorizontal_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sliderX") ) { return set_sliderX(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"scrollPositionX") ) { return set_scrollPositionX(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIScrollHorizontal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outsideSlideRangeX"));
	outFields->push(HX_CSTRING("sliderX"));
	outFields->push(HX_CSTRING("scrollPositionX"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("adjustMaximumSlide"),
	HX_CSTRING("mouseMove"),
	HX_CSTRING("get_outsideSlideRangeX"),
	HX_CSTRING("startMovement0"),
	HX_CSTRING("movement"),
	HX_CSTRING("drawScrollBar"),
	HX_CSTRING("set_sliderX"),
	HX_CSTRING("get_sliderX"),
	HX_CSTRING("set_scrollPositionX"),
	HX_CSTRING("get_scrollPositionX"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIScrollHorizontal_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIScrollHorizontal_obj::__mClass,"__mClass");
};

#endif

Class UIScrollHorizontal_obj::__mClass;

void UIScrollHorizontal_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UIScrollHorizontal"), hx::TCanCast< UIScrollHorizontal_obj> ,sStaticFields,sMemberFields,
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

void UIScrollHorizontal_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
