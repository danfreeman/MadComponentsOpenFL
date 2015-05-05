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
#ifndef INCLUDED_com_danielfreeman_madcomponents_Model
#include <com/danielfreeman/madcomponents/Model.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UI
#include <com/danielfreeman/madcomponents/UI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIBlueText
#include <com/danielfreeman/madcomponents/UIBlueText.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIForm
#include <com/danielfreeman/madcomponents/UIForm.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIInput
#include <com/danielfreeman/madcomponents/UIInput.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical
#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UISearch
#include <com/danielfreeman/madcomponents/UISearch.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_utils_Timer
#include <openfl/utils/Timer.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UIScrollVertical_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","new",0xdcf3ef3d,"com.danielfreeman.madcomponents.UIScrollVertical.new","com/danielfreeman/madcomponents/UIScrollVertical.hx",65,0x2aec0d70)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(140)
	this->_profile = ::com::danielfreeman::madcomponents::UIScrollVertical_obj::SPEED;
	HX_STACK_LINE(139)
	this->_noSwipeCount = (int)0;
	HX_STACK_LINE(138)
	this->_alwaysScrollBar = false;
	HX_STACK_LINE(136)
	this->_classic = false;
	HX_STACK_LINE(135)
	this->_dampen = 0.3;
	HX_STACK_LINE(134)
	this->_scale = 1.0;
	HX_STACK_LINE(132)
	this->_scrollerHeight = (int)-1;
	HX_STACK_LINE(131)
	this->_scrollerWidth = (int)-1;
	HX_STACK_LINE(130)
	this->_scrollBarVisible = false;
	HX_STACK_LINE(129)
	this->_offset = (int)0;
	HX_STACK_LINE(128)
	this->_autoLayout = false;
	HX_STACK_LINE(127)
	this->_listClickable = true;
	HX_STACK_LINE(126)
	this->_deltaThreshold = 1.0;
	HX_STACK_LINE(117)
	this->_distance = (int)0;
	HX_STACK_LINE(116)
	this->_clickTimer = ::openfl::utils::Timer_obj::__new(::com::danielfreeman::madcomponents::UIScrollVertical_obj::CLICK_DURATION,(int)1);
	HX_STACK_LINE(112)
	this->_sliderPosition = (int)0;
	HX_STACK_LINE(110)
	this->_endSlider = (int)-1;
	HX_STACK_LINE(109)
	this->_startSlider = ::openfl::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(108)
	this->_lastMouse = ::openfl::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(107)
	this->_startMouse = ::openfl::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(106)
	this->_delta = 0.0;
	struct _Function_1_1{
		inline static bool Block( ::com::danielfreeman::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIScrollVertical.hx",148,0x2aec0d70)
			{
				HX_STACK_LINE(148)
				::String _g = xml->att->resolve(HX_CSTRING("speed"));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(148)
				return (_g == HX_CSTRING("slow"));
			}
			return null();
		}
	};
	HX_STACK_LINE(148)
	if (((  ((xml->has->resolve(HX_CSTRING("speed")))) ? bool(_Function_1_1::Block(xml)) : bool(false) ))){
		HX_STACK_LINE(149)
		this->_profile = (int)0;
	}
	else{
		struct _Function_2_1{
			inline static bool Block( ::com::danielfreeman::MadXML &xml){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIScrollVertical.hx",151,0x2aec0d70)
				{
					HX_STACK_LINE(151)
					::String _g1 = xml->att->resolve(HX_CSTRING("speed"));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(151)
					return (_g1 == HX_CSTRING("fast"));
				}
				return null();
			}
		};
		HX_STACK_LINE(151)
		if (((  ((xml->has->resolve(HX_CSTRING("speed")))) ? bool(_Function_2_1::Block(xml)) : bool(false) ))){
			HX_STACK_LINE(152)
			this->_profile = (int)1;
		}
	}
	HX_STACK_LINE(154)
	bool _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(154)
	if ((xml->has->resolve(HX_CSTRING("classic")))){
		HX_STACK_LINE(154)
		::String _g2 = xml->att->resolve(HX_CSTRING("classic"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(154)
		_g3 = (_g2 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(154)
		_g3 = false;
	}
	HX_STACK_LINE(154)
	this->_classic = _g3;
	HX_STACK_LINE(155)
	bool _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(155)
	if ((xml->has->resolve(HX_CSTRING("scrollY")))){
		HX_STACK_LINE(155)
		::String _g4 = xml->att->resolve(HX_CSTRING("scrollY"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(155)
		_g5 = (_g4 == HX_CSTRING("auto"));
	}
	else{
		HX_STACK_LINE(155)
		_g5 = false;
	}
	HX_STACK_LINE(155)
	this->_autoScrollEnabled = _g5;
	HX_STACK_LINE(156)
	bool _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(156)
	if ((xml->has->resolve(HX_CSTRING("alwaysScrollBar")))){
		HX_STACK_LINE(156)
		::String _g6 = xml->att->resolve(HX_CSTRING("alwaysScrollBar"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(156)
		_g7 = (_g6 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(156)
		_g7 = false;
	}
	HX_STACK_LINE(156)
	this->_alwaysScrollBar = _g7;
	HX_STACK_LINE(157)
	super::__construct(null(),xml,attributes);
	HX_STACK_LINE(159)
	if (((screen != null()))){
		HX_STACK_LINE(160)
		screen->addChildAt(hx::ObjectPtr<OBJ_>(this),(int)0);
	}
	HX_STACK_LINE(162)
	::com::danielfreeman::AnimationTimer _g8 = ::com::danielfreeman::AnimationTimer_obj::__new(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(162)
	this->_touchTimer = _g8;
	HX_STACK_LINE(163)
	::com::danielfreeman::AnimationTimer _g9 = ::com::danielfreeman::AnimationTimer_obj::__new(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(163)
	this->_moveTimer = _g9;
	HX_STACK_LINE(164)
	::com::danielfreeman::AnimationTimer _g10 = ::com::danielfreeman::AnimationTimer_obj::__new(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(164)
	this->_dragTimer = _g10;
	HX_STACK_LINE(165)
	::String _g11;		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(165)
	if ((xml->has->resolve(HX_CSTRING("border")))){
		HX_STACK_LINE(165)
		_g11 = xml->att->resolve(HX_CSTRING("border"));
	}
	else{
		HX_STACK_LINE(165)
		_g11 = HX_CSTRING("");
	}
	HX_STACK_LINE(165)
	this->_border = _g11;
	HX_STACK_LINE(166)
	if ((xml->has->resolve(HX_CSTRING("dampen")))){
		HX_STACK_LINE(167)
		::String _g12 = xml->att->resolve(HX_CSTRING("dampen"));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(167)
		Float _g13 = ::Std_obj::parseFloat(_g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(167)
		this->_dampen = _g13;
	}
	HX_STACK_LINE(169)
	int _g14 = attributes->get_colour();		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(169)
	this->_colour = _g14;
	HX_STACK_LINE(170)
	bool _g16;		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(170)
	if ((xml->has->resolve(HX_CSTRING("scrollV")))){
		HX_STACK_LINE(170)
		::String _g15 = xml->att->resolve(HX_CSTRING("scrollV"));		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(170)
		_g16 = (_g15 == HX_CSTRING("false"));
	}
	else{
		HX_STACK_LINE(170)
		_g16 = false;
	}
	HX_STACK_LINE(170)
	this->_noScroll = _g16;
	HX_STACK_LINE(171)
	int _g17 = attributes->get_scrollBarColour();		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(171)
	this->_scrollBarColour = _g17;
	HX_STACK_LINE(172)
	this->createSlider(xml,attributes);
	struct _Function_1_2{
		inline static bool Block( ::com::danielfreeman::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIScrollVertical.hx",173,0x2aec0d70)
			{
				HX_STACK_LINE(173)
				::String _g18 = xml->att->resolve(HX_CSTRING("autoLayout"));		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(173)
				return (_g18 == HX_CSTRING("true"));
			}
			return null();
		}
	};
	HX_STACK_LINE(173)
	if (((  ((xml->has->resolve(HX_CSTRING("autoLayout")))) ? bool(_Function_1_2::Block(xml)) : bool(false) ))){
		HX_STACK_LINE(174)
		this->_slider->addEventListener(HX_CSTRING("imageLoaded"),this->doLayoutHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(175)
		this->_autoLayout = true;
	}
	HX_STACK_LINE(177)
	::openfl::display::Shape _g19 = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(177)
	::openfl::display::Shape _g20 = this->_scrollBarLayer = _g19;		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(177)
	this->addChild(_g20);
	HX_STACK_LINE(178)
	this->_scrollBarLayer->set_alpha(0.8);
	HX_STACK_LINE(179)
	this->_clickTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->clickUp_dyn(),null(),null(),null());
	HX_STACK_LINE(180)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null(),null(),null());
	HX_STACK_LINE(181)
	this->addListeners();
	HX_STACK_LINE(182)
	this->drawComponent();
	HX_STACK_LINE(183)
	this->androidMouseDisable(this->_slider);
	HX_STACK_LINE(184)
	this->startMasking();
	HX_STACK_LINE(185)
	if ((this->_alwaysScrollBar)){
		HX_STACK_LINE(186)
		this->showScrollBar();
	}
}
;
	return null();
}

//UIScrollVertical_obj::~UIScrollVertical_obj() { }

Dynamic UIScrollVertical_obj::__CreateEmpty() { return  new UIScrollVertical_obj; }
hx::ObjectPtr< UIScrollVertical_obj > UIScrollVertical_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIScrollVertical_obj > result = new UIScrollVertical_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIScrollVertical_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIScrollVertical_obj > result = new UIScrollVertical_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UIScrollVertical_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	if (inType==typeid( ::com::danielfreeman::madcomponents::IContainerUI_obj)) return operator ::com::danielfreeman::madcomponents::IContainerUI_obj *();
	return super::__ToInterface(inType);
}

Float UIScrollVertical_obj::set_dampen( Float value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","set_dampen",0x53412589,"com.danielfreeman.madcomponents.UIScrollVertical.set_dampen","com/danielfreeman/madcomponents/UIScrollVertical.hx",191,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(192)
	this->_dampen = value;
	HX_STACK_LINE(193)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,set_dampen,return )

Void UIScrollVertical_obj::addListeners( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","addListeners",0x3c9824a1,"com.danielfreeman.madcomponents.UIScrollVertical.addListeners","com/danielfreeman/madcomponents/UIScrollVertical.hx",197,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		this->_touchTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->mouseMove_dyn());
		HX_STACK_LINE(199)
		this->_dragTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->mouseDrag_dyn());
		HX_STACK_LINE(200)
		this->_moveTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->movement_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,addListeners,(void))

Void UIScrollVertical_obj::removeListeners( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","removeListeners",0x472e76f8,"com.danielfreeman.madcomponents.UIScrollVertical.removeListeners","com/danielfreeman/madcomponents/UIScrollVertical.hx",204,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_LINE(205)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null());
		HX_STACK_LINE(206)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(207)
		this->_touchTimer->removeEventListener(::openfl::events::TimerEvent_obj::TIMER,this->mouseMove_dyn());
		HX_STACK_LINE(208)
		this->_dragTimer->removeEventListener(::openfl::events::TimerEvent_obj::TIMER,this->mouseDrag_dyn());
		HX_STACK_LINE(209)
		this->_moveTimer->removeEventListener(::openfl::events::TimerEvent_obj::TIMER,this->movement_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,removeListeners,(void))

Float UIScrollVertical_obj::deltaToDecay( Float delta){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","deltaToDecay",0xa21d9c2a,"com.danielfreeman.madcomponents.UIScrollVertical.deltaToDecay","com/danielfreeman/madcomponents/UIScrollVertical.hx",213,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(delta,"delta")
	HX_STACK_LINE(214)
	Float factor;		HX_STACK_VAR(factor,"factor");
	HX_STACK_LINE(215)
	Float _g = ::Math_obj::abs(delta);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(215)
	if (((_g < ::com::danielfreeman::madcomponents::UIScrollVertical_obj::SLOW_DECAY_DELTA->__get(this->_profile)))){
		HX_STACK_LINE(216)
		factor = 0.0;
	}
	else{
		HX_STACK_LINE(218)
		Float _g1 = ::Math_obj::abs(delta);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(218)
		if (((_g1 > ::com::danielfreeman::madcomponents::UIScrollVertical_obj::FAST_DECAY_DELTA->__get(this->_profile)))){
			HX_STACK_LINE(219)
			factor = 1.0;
		}
		else{
			HX_STACK_LINE(222)
			Float _g2 = ::Math_obj::abs(delta);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(222)
			Float _g3 = (_g2 - ::com::danielfreeman::madcomponents::UIScrollVertical_obj::SLOW_DECAY_DELTA->__get(this->_profile));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(222)
			Float _g4 = (Float(_g3) / Float(((::com::danielfreeman::madcomponents::UIScrollVertical_obj::FAST_DECAY_DELTA->__get(this->_profile) - ::com::danielfreeman::madcomponents::UIScrollVertical_obj::SLOW_DECAY_DELTA->__get(this->_profile)))));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(222)
			factor = _g4;
		}
	}
	HX_STACK_LINE(224)
	return ((factor * ((::com::danielfreeman::madcomponents::UIScrollVertical_obj::FAST_DECAY->__get(this->_profile) - ::com::danielfreeman::madcomponents::UIScrollVertical_obj::SLOW_DECAY->__get(this->_profile)))) + ::com::danielfreeman::madcomponents::UIScrollVertical_obj::SLOW_DECAY->__get(this->_profile));
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,deltaToDecay,return )

bool UIScrollVertical_obj::set_scrollEnabled( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","set_scrollEnabled",0xe8e78af4,"com.danielfreeman.madcomponents.UIScrollVertical.set_scrollEnabled","com/danielfreeman/madcomponents/UIScrollVertical.hx",231,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(232)
	this->_noScroll = !(value);
	HX_STACK_LINE(233)
	if ((this->_noScroll)){
		HX_STACK_LINE(234)
		this->stopMovement();
	}
	HX_STACK_LINE(236)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,set_scrollEnabled,return )

bool UIScrollVertical_obj::get_scrollEnabled( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","get_scrollEnabled",0xc579b2e8,"com.danielfreeman.madcomponents.UIScrollVertical.get_scrollEnabled","com/danielfreeman/madcomponents/UIScrollVertical.hx",244,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(244)
	return !(this->_noScroll);
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,get_scrollEnabled,return )

Void UIScrollVertical_obj::drawComponent( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","drawComponent",0xa3af3936,"com.danielfreeman.madcomponents.UIScrollVertical.drawComponent","com/danielfreeman/madcomponents/UIScrollVertical.hx",253,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_LINE(253)
		if (((  ((!(::Math_obj::isNaN(this->_width)))) ? bool(!(::Math_obj::isNaN(this->_height))) : bool(false) ))){
			HX_STACK_LINE(254)
			Array< int > _g = this->_attributes->get_backgroundColours();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(254)
			::com::danielfreeman::madcomponents::UI_obj::drawBackgroundColour(_g,this->_width,this->_height,hx::ObjectPtr<OBJ_>(this),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,drawComponent,(void))

Array< ::Dynamic > UIScrollVertical_obj::get_pages( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","get_pages",0x7f88aa38,"com.danielfreeman.madcomponents.UIScrollVertical.get_pages","com/danielfreeman/madcomponents/UIScrollVertical.hx",263,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(263)
	return Array_obj< ::Dynamic >::__new().Add(this->_slider);
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,get_pages,return )

::com::danielfreeman::MadXML UIScrollVertical_obj::get_xml( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","get_xml",0x186587cb,"com.danielfreeman.madcomponents.UIScrollVertical.get_xml","com/danielfreeman/madcomponents/UIScrollVertical.hx",268,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(268)
	return this->_xml;
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,get_xml,return )

Void UIScrollVertical_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","layout",0x869377ed,"com.danielfreeman.madcomponents.UIScrollVertical.layout","com/danielfreeman/madcomponents/UIScrollVertical.hx",275,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(276)
		this->super::layout(attributes);
		HX_STACK_LINE(277)
		if ((::Std_obj::is(this->_slider,hx::ClassOf< ::com::danielfreeman::madcomponents::IComponentUI >()))){
			HX_STACK_LINE(278)
			::com::danielfreeman::madcomponents::Attributes _g = this->sliderAttributes(attributes);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(278)
			(hx::TCast< com::danielfreeman::madcomponents::IComponentUI >::cast(this->_slider))->layout(_g);
		}
		HX_STACK_LINE(280)
		this->drawComponent();
		HX_STACK_LINE(281)
		this->adjustMaximumSlide();
		HX_STACK_LINE(284)
		if ((this->_alwaysScrollBar)){
			HX_STACK_LINE(285)
			this->showScrollBar();
		}
	}
return null();
}


::openfl::geom::Rectangle UIScrollVertical_obj::rowRectangle( Float y){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","rowRectangle",0x8f525c38,"com.danielfreeman.madcomponents.UIScrollVertical.rowRectangle","com/danielfreeman/madcomponents/UIScrollVertical.hx",290,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(291)
	{
		HX_STACK_LINE(291)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(291)
		int _g = this->_slider->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(291)
		int _g2 = (_g - (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(291)
		while((true)){
			HX_STACK_LINE(291)
			if ((!(((_g1 < _g2))))){
				HX_STACK_LINE(291)
				break;
			}
			HX_STACK_LINE(291)
			int l = (_g1)++;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(292)
			::openfl::display::DisplayObject row = this->_slider->getChildAt((l + (int)1));		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(293)
			Float _g11 = row->get_y();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(293)
			Float _g21 = row->get_height();		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(293)
			Float _g3 = (_g11 + _g21);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(293)
			Float _g4 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(293)
			Float _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(293)
			if (((_g5 > y))){
				HX_STACK_LINE(294)
				Float _g6 = row->get_x();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(294)
				Float _g7 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(294)
				Float _g8 = (Float(_g7) / Float((int)2));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(294)
				Float _g9 = (_g6 - _g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(294)
				Float _g10 = row->get_y();		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(294)
				Float _g111 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g111,"_g111");
				HX_STACK_LINE(294)
				Float _g12 = (Float(_g111) / Float((int)2));		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(294)
				Float _g13 = (_g10 - _g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(294)
				Float _g14 = row->get_width();		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(294)
				Float _g15 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(294)
				Float _g16 = (_g14 + _g15);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(294)
				Float _g17 = row->get_height();		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(294)
				Float _g18 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(294)
				Float _g19 = (_g17 + _g18);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(294)
				return ::openfl::geom::Rectangle_obj::__new(_g9,_g13,_g16,_g19);
			}
		}
	}
	HX_STACK_LINE(297)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,rowRectangle,return )

Void UIScrollVertical_obj::adjustVerticalSlide( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","adjustVerticalSlide",0xc3e38ba9,"com.danielfreeman.madcomponents.UIScrollVertical.adjustVerticalSlide","com/danielfreeman/madcomponents/UIScrollVertical.hx",301,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_LINE(302)
		Float sliderHeight;		HX_STACK_VAR(sliderHeight,"sliderHeight");
		HX_STACK_LINE(302)
		if (((this->_scrollerHeight > (int)0))){
			HX_STACK_LINE(302)
			sliderHeight = (this->_scrollerHeight * this->_scale);
		}
		else{
			HX_STACK_LINE(302)
			sliderHeight = this->_slider->getBounds(this->_slider)->get_bottom();
		}
		HX_STACK_LINE(303)
		this->_maximumSlide = ((sliderHeight - this->_height) + (10.0 * ((  (((this->_border == HX_CSTRING("false")))) ? int((int)0) : int((int)1) ))));
		HX_STACK_LINE(304)
		if (((this->_maximumSlide < (int)0))){
			HX_STACK_LINE(305)
			this->_maximumSlide = (int)0;
		}
		HX_STACK_LINE(307)
		if ((this->_autoScrollEnabled)){
			HX_STACK_LINE(308)
			this->_noScroll = (this->_maximumSlide == (int)0);
		}
		HX_STACK_LINE(310)
		Float _g = this->get_sliderY();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(310)
		if (((_g < -(this->_maximumSlide)))){
			HX_STACK_LINE(311)
			this->set_sliderY(-(this->_maximumSlide));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,adjustVerticalSlide,(void))

Void UIScrollVertical_obj::adjustMaximumSlide( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","adjustMaximumSlide",0xf5534e23,"com.danielfreeman.madcomponents.UIScrollVertical.adjustMaximumSlide","com/danielfreeman/madcomponents/UIScrollVertical.hx",320,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_LINE(320)
		this->adjustVerticalSlide();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,adjustMaximumSlide,(void))

Void UIScrollVertical_obj::doLayoutHandler( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","doLayoutHandler",0xfc630612,"com.danielfreeman.madcomponents.UIScrollVertical.doLayoutHandler","com/danielfreeman/madcomponents/UIScrollVertical.hx",324,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(325)
		this->doLayout();
		HX_STACK_LINE(326)
		event->stopPropagation();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,doLayoutHandler,(void))

Float UIScrollVertical_obj::get_maximumSlide( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","get_maximumSlide",0xa0bf00bd,"com.danielfreeman.madcomponents.UIScrollVertical.get_maximumSlide","com/danielfreeman/madcomponents/UIScrollVertical.hx",331,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(331)
	return this->_maximumSlide;
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,get_maximumSlide,return )

Void UIScrollVertical_obj::doLayout( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","doLayout",0x5de21498,"com.danielfreeman.madcomponents.UIScrollVertical.doLayout","com/danielfreeman/madcomponents/UIScrollVertical.hx",338,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_LINE(338)
		if ((::Std_obj::is(this->_slider,hx::ClassOf< ::com::danielfreeman::madcomponents::UIForm >()))){
			HX_STACK_LINE(339)
			if ((this->_autoLayout)){
				HX_STACK_LINE(340)
				(hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(this->_slider))->doLayout();
			}
			HX_STACK_LINE(342)
			this->adjustMaximumSlide();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,doLayout,(void))

::com::danielfreeman::MadXML UIScrollVertical_obj::set_xml( ::com::danielfreeman::MadXML value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","set_xml",0x0b6718d7,"com.danielfreeman.madcomponents.UIScrollVertical.set_xml","com/danielfreeman/madcomponents/UIScrollVertical.hx",347,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(348)
	(hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(this->_slider))->set_xml(value);
	HX_STACK_LINE(349)
	this->adjustMaximumSlide();
	HX_STACK_LINE(350)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,set_xml,return )

Void UIScrollVertical_obj::createSlider( ::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","createSlider",0xdc0fa3c0,"com.danielfreeman.madcomponents.UIScrollVertical.createSlider","com/danielfreeman/madcomponents/UIScrollVertical.hx",357,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(358)
		::com::danielfreeman::madcomponents::Attributes _g = this->sliderAttributes(attributes);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(358)
		::com::danielfreeman::madcomponents::UIForm _g1 = ::com::danielfreeman::madcomponents::UIForm_obj::__new(hx::ObjectPtr<OBJ_>(this),xml,_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(358)
		this->_slider = _g1;
		HX_STACK_LINE(359)
		this->_slider->set_name(HX_CSTRING("-"));
		HX_STACK_LINE(360)
		this->adjustMaximumSlide();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIScrollVertical_obj,createSlider,(void))

::com::danielfreeman::madcomponents::Attributes UIScrollVertical_obj::sliderAttributes( ::com::danielfreeman::madcomponents::Attributes attributes){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","sliderAttributes",0x6d8ce15b,"com.danielfreeman.madcomponents.UIScrollVertical.sliderAttributes","com/danielfreeman/madcomponents/UIScrollVertical.hx",364,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(attributes,"attributes")
	HX_STACK_LINE(365)
	this->_width = attributes->width;
	HX_STACK_LINE(366)
	this->_height = attributes->height;
	HX_STACK_LINE(367)
	::com::danielfreeman::madcomponents::Attributes newAttributes = attributes->copy(null(),null());		HX_STACK_VAR(newAttributes,"newAttributes");
	HX_STACK_LINE(368)
	Float padding;		HX_STACK_VAR(padding,"padding");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIScrollVertical_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIScrollVertical.hx",368,0x2aec0d70)
			{
				struct _Function_2_1{
					inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIScrollVertical_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIScrollVertical.hx",368,0x2aec0d70)
						{
							HX_STACK_LINE(368)
							int _g = __this->_xml->get_name().indexOf(HX_CSTRING("scroll"),null());		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(368)
							return (_g >= (int)0);
						}
						return null();
					}
				};
				HX_STACK_LINE(368)
				return (  (((__this->_border != HX_CSTRING("false")))) ? bool(_Function_2_1::Block(__this)) : bool(false) );
			}
			return null();
		}
	};
	HX_STACK_LINE(368)
	if (((  ((!(((this->_border == HX_CSTRING("true")))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))){
		HX_STACK_LINE(368)
		padding = 10.0;
	}
	else{
		HX_STACK_LINE(368)
		padding = (int)0;
	}
	HX_STACK_LINE(369)
	if ((this->_xml->has->resolve(HX_CSTRING("width")))){
		HX_STACK_LINE(370)
		::String _g1 = this->_xml->att->resolve(HX_CSTRING("width"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(370)
		Float _g2 = ::Std_obj::parseFloat(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(370)
		Float _g3 = this->_scrollerWidth = _g2;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(370)
		newAttributes->width = _g3;
	}
	HX_STACK_LINE(372)
	if ((this->_xml->has->resolve(HX_CSTRING("height")))){
		HX_STACK_LINE(373)
		::String _g4 = this->_xml->att->resolve(HX_CSTRING("height"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(373)
		Float _g5 = ::Std_obj::parseFloat(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(373)
		Float _g6 = this->_scrollerHeight = _g5;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(373)
		newAttributes->height = _g6;
	}
	HX_STACK_LINE(375)
	hx::SubEq(newAttributes->width,((int)2 * padding));
	HX_STACK_LINE(376)
	newAttributes->x = padding;
	HX_STACK_LINE(377)
	newAttributes->y = padding;
	HX_STACK_LINE(378)
	return newAttributes;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,sliderAttributes,return )

Void UIScrollVertical_obj::androidMouseDisable( ::openfl::display::Sprite item){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","androidMouseDisable",0x73c094ef,"com.danielfreeman.madcomponents.UIScrollVertical.androidMouseDisable","com/danielfreeman/madcomponents/UIScrollVertical.hx",385,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(385)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(385)
		int _g = item->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(385)
		while((true)){
			HX_STACK_LINE(385)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(385)
				break;
			}
			HX_STACK_LINE(385)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(386)
			::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(386)
			child = hx::TCast< openfl::display::DisplayObject >::cast(item->getChildAt(i));
			HX_STACK_LINE(387)
			if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))){
				HX_STACK_LINE(388)
				(hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(child))->set_mouseEnabled(false);
			}
			else{
				HX_STACK_LINE(390)
				if (((  ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::IContainerUI >()))) ? bool((hx::TCast< openfl::display::Sprite >::cast(child))->get_mouseChildren()) : bool(false) ))){
					HX_STACK_LINE(391)
					{
						HX_STACK_LINE(391)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(391)
						Array< ::Dynamic > _g3 = (hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(child))->__Field(HX_CSTRING("get_pages"),true)();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(391)
						while((true)){
							HX_STACK_LINE(391)
							if ((!(((_g2 < _g3->length))))){
								HX_STACK_LINE(391)
								break;
							}
							HX_STACK_LINE(391)
							::openfl::display::DisplayObject page = _g3->__get(_g2).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(page,"page");
							HX_STACK_LINE(391)
							++(_g2);
							HX_STACK_LINE(392)
							::openfl::display::Sprite _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(392)
							_g4 = hx::TCast< openfl::display::Sprite >::cast(page);
							HX_STACK_LINE(392)
							this->androidMouseDisable(_g4);
						}
					}
					HX_STACK_LINE(394)
					if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::UIForm >()))){
						HX_STACK_LINE(395)
						(hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(child))->insideScroller();
					}
				}
				else{
					HX_STACK_LINE(398)
					if (((  (((  (((  ((!(::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::UIInput >())))) ? bool(!(::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::UISearch >()))) : bool(false) ))) ? bool(!(::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::UIBlueText >()))) : bool(false) ))) ? bool(::Std_obj::is(child,hx::ClassOf< ::openfl::display::InteractiveObject >())) : bool(false) ))){
						HX_STACK_LINE(399)
						(hx::TCast< openfl::display::InteractiveObject >::cast(child))->set_mouseEnabled(false);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,androidMouseDisable,(void))

Void UIScrollVertical_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","mouseDown",0x6d54d3c4,"com.danielfreeman.madcomponents.UIScrollVertical.mouseDown","com/danielfreeman/madcomponents/UIScrollVertical.hx",405,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(405)
		::haxe::Log_obj::trace(HX_CSTRING("mouseDown"),hx::SourceInfo(HX_CSTRING("UIScrollVertical.hx"),405,HX_CSTRING("com.danielfreeman.madcomponents.UIScrollVertical"),HX_CSTRING("mouseDown")));
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIScrollVertical_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIScrollVertical.hx",406,0x2aec0d70)
				{
					HX_STACK_LINE(406)
					Float _g = __this->get_mouseX();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(406)
					return (_g > __this->_attributes->width);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIScrollVertical_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIScrollVertical.hx",406,0x2aec0d70)
				{
					HX_STACK_LINE(406)
					Float _g1 = __this->_slider->get_mouseY();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(406)
					Float _g2 = __this->_slider->getBounds(__this->_slider)->get_bottom();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(406)
					return (_g1 > _g2);
				}
				return null();
			}
		};
		HX_STACK_LINE(406)
		if (((  ((!(((  ((!(((this->_pressButton != null()))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))))) ? bool(_Function_1_2::Block(this)) : bool(true) ))){
			HX_STACK_LINE(407)
			return null();
		}
		HX_STACK_LINE(410)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null());
		HX_STACK_LINE(411)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(412)
		Float _g3 = this->get_mouseX();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(412)
		Float _g4 = this->_startMouse->x = _g3;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(412)
		this->_lastMouse->x = _g4;
		HX_STACK_LINE(413)
		Float _g5 = this->get_mouseY();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(413)
		Float _g6 = this->_startMouse->y = _g5;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(413)
		this->_lastMouse->y = _g6;
		HX_STACK_LINE(414)
		Float _g7 = this->_slider->get_x();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(414)
		this->_startSlider->x = _g7;
		HX_STACK_LINE(415)
		Float _g8 = this->get_sliderY();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(415)
		this->_startSlider->y = _g8;
		HX_STACK_LINE(416)
		bool _g9 = !(this->_moveTimer->get_running());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(416)
		this->_listClickable = _g9;
		HX_STACK_LINE(417)
		this->_moveTimer->stop();
		HX_STACK_LINE(418)
		this->_touchTimer->reset();
		HX_STACK_LINE(419)
		this->_touchTimer->start();
		HX_STACK_LINE(420)
		this->_distance = (int)0;
		struct _Function_1_3{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIScrollVertical_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIScrollVertical.hx",422,0x2aec0d70)
				{
					HX_STACK_LINE(422)
					Float _g10 = ::Math_obj::abs(__this->_delta);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(422)
					return (_g10 <= 2.0);
				}
				return null();
			}
		};
		HX_STACK_LINE(422)
		if (((  ((!(this->_classic))) ? bool(_Function_1_3::Block(this)) : bool(false) ))){
			HX_STACK_LINE(423)
			this->pressButton(false);
		}
		HX_STACK_LINE(425)
		this->_delta = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,mouseDown,(void))

Void UIScrollVertical_obj::touchCancel( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","touchCancel",0xfec01676,"com.danielfreeman.madcomponents.UIScrollVertical.touchCancel","com/danielfreeman/madcomponents/UIScrollVertical.hx",430,0x2aec0d70)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIScrollVertical_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIScrollVertical.hx",430,0x2aec0d70)
				{
					HX_STACK_LINE(430)
					::String _g = __this->_pressButton->get_name();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(430)
					return (_g == HX_CSTRING("$"));
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIScrollVertical_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIScrollVertical.hx",430,0x2aec0d70)
				{
					HX_STACK_LINE(430)
					::openfl::display::DisplayObjectContainer _g1 = __this->_pressButton->get_parent();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(430)
					return (_g1 != null());
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIScrollVertical_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIScrollVertical.hx",430,0x2aec0d70)
				{
					HX_STACK_LINE(430)
					::openfl::display::DisplayObjectContainer _g2 = __this->_pressButton->get_parent();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(430)
					return ::Std_obj::is(_g2,hx::ClassOf< ::com::danielfreeman::madcomponents::UIForm >());
				}
				return null();
			}
		};
		HX_STACK_LINE(430)
		if (((  (((  (((  (((this->_pressButton != null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))) ? bool(_Function_1_2::Block(this)) : bool(false) ))) ? bool(_Function_1_3::Block(this)) : bool(false) ))){
			HX_STACK_LINE(431)
			(hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(this->_pressButton->get_parent()))->touchCancel();
		}
		else{
			HX_STACK_LINE(433)
			if (((  (((this->_pressButton != null()))) ? bool(::Std_obj::is(this->_pressButton,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >())) : bool(false) ))){
				HX_STACK_LINE(434)
				(hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(this->_pressButton))->touchCancel();
			}
		}
	}
return null();
}


Void UIScrollVertical_obj::stopScrolling( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","stopScrolling",0x365c0fb0,"com.danielfreeman.madcomponents.UIScrollVertical.stopScrolling","com/danielfreeman/madcomponents/UIScrollVertical.hx",439,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_LINE(439)
		::haxe::Log_obj::trace(HX_CSTRING("stopScrolling"),hx::SourceInfo(HX_CSTRING("UIScrollVertical.hx"),439,HX_CSTRING("com.danielfreeman.madcomponents.UIScrollVertical"),HX_CSTRING("stopScrolling")));
		HX_STACK_LINE(440)
		this->handleFlick();
		HX_STACK_LINE(441)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(442)
		this->_dragTimer->stop();
		HX_STACK_LINE(443)
		this->_touchTimer->stop();
		HX_STACK_LINE(445)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null());
		HX_STACK_LINE(446)
		this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,stopScrolling,(void))

Void UIScrollVertical_obj::handleFlick( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","handleFlick",0x9631a8e0,"com.danielfreeman.madcomponents.UIScrollVertical.handleFlick","com/danielfreeman/madcomponents/UIScrollVertical.hx",455,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_LINE(456)
		int _g = this->_touchTimer->get_currentCount();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(456)
		if (((_g <= ::com::danielfreeman::madcomponents::UIScrollVertical_obj::FLICK_THRESHOLD))){
			HX_STACK_LINE(457)
			Float _g1 = this->get_mouseY();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(457)
			Float _g2 = (_g1 - this->_startMouse->y);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(457)
			Float _g3 = (::com::danielfreeman::madcomponents::UIScrollVertical_obj::FLICK_FACTOR * _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(457)
			int _g4 = this->_touchTimer->get_currentCount();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(457)
			int _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(457)
			if (((_g4 == (int)0))){
				HX_STACK_LINE(457)
				_g5 = (int)1;
			}
			else{
				HX_STACK_LINE(457)
				_g5 = this->_touchTimer->get_currentCount();
			}
			HX_STACK_LINE(457)
			Float _g6 = (Float(_g3) / Float(_g5));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(457)
			this->_delta = _g6;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,handleFlick,(void))

Void UIScrollVertical_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","mouseUp",0xb208453d,"com.danielfreeman.madcomponents.UIScrollVertical.mouseUp","com/danielfreeman/madcomponents/UIScrollVertical.hx",462,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(462)
		::haxe::Log_obj::trace(HX_CSTRING("mouseUp"),hx::SourceInfo(HX_CSTRING("UIScrollVertical.hx"),462,HX_CSTRING("com.danielfreeman.madcomponents.UIScrollVertical"),HX_CSTRING("mouseUp")));
		HX_STACK_LINE(463)
		this->stopScrolling();
		HX_STACK_LINE(464)
		if ((!(this->_noScroll))){
			HX_STACK_LINE(465)
			this->startMovement();
		}
		HX_STACK_LINE(467)
		if (((this->_pressButton != null()))){
			HX_STACK_LINE(468)
			::openfl::events::MouseEvent _g = ::openfl::events::MouseEvent_obj::__new(::openfl::events::MouseEvent_obj::MOUSE_UP,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(468)
			this->_pressButton->dispatchEvent(_g);
			HX_STACK_LINE(469)
			::openfl::events::MouseEvent _g1 = ::openfl::events::MouseEvent_obj::__new(::openfl::events::MouseEvent_obj::MOUSE_UP,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(469)
			this->get_stage()->dispatchEvent(_g1);
			HX_STACK_LINE(470)
			this->_pressButton = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,mouseUp,(void))

Void UIScrollVertical_obj::mouseMove( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","mouseMove",0x7347be73,"com.danielfreeman.madcomponents.UIScrollVertical.mouseMove","com/danielfreeman/madcomponents/UIScrollVertical.hx",475,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(475)
		::haxe::Log_obj::trace(HX_CSTRING("mouseMove"),hx::SourceInfo(HX_CSTRING("UIScrollVertical.hx"),475,HX_CSTRING("com.danielfreeman.madcomponents.UIScrollVertical"),HX_CSTRING("mouseMove")));
		HX_STACK_LINE(476)
		if ((!(this->_noScroll))){
			HX_STACK_LINE(477)
			Float delta = -(this->get_sliderY());		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(478)
			{
				HX_STACK_LINE(478)
				::com::danielfreeman::madcomponents::UIScrollVertical _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(478)
				Float _g1 = _g->get_sliderY();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(478)
				Float _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(478)
				if ((this->get_outsideSlideRange())){
					HX_STACK_LINE(478)
					_g11 = this->_dampen;
				}
				else{
					HX_STACK_LINE(478)
					_g11 = 1.0;
				}
				HX_STACK_LINE(478)
				Float _g2 = this->get_mouseY();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(478)
				Float _g3 = (_g2 - this->_lastMouse->y);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(478)
				Float _g4 = (_g11 * _g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(478)
				Float _g5 = (_g1 + _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(478)
				_g->set_sliderY(_g5);
			}
			HX_STACK_LINE(479)
			Float _g6 = this->get_sliderY();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(479)
			hx::AddEq(delta,_g6);
			HX_STACK_LINE(480)
			Float _g7 = ::Math_obj::abs(delta);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(480)
			if (((_g7 > 2.0))){
				HX_STACK_LINE(481)
				if ((((delta * this->_delta) > (int)0))){
					HX_STACK_LINE(482)
					this->_delta = ((0.5 * this->_delta) + (0.5 * delta));
				}
				else{
					HX_STACK_LINE(485)
					this->_delta = delta;
				}
				HX_STACK_LINE(487)
				this->_noSwipeCount = (int)0;
			}
			else{
				HX_STACK_LINE(489)
				int _g8 = ++(this->_noSwipeCount);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(489)
				if (((_g8 > (int)1))){
					HX_STACK_LINE(490)
					this->_delta = (int)0;
				}
			}
			HX_STACK_LINE(492)
			Float _g9 = this->get_mouseY();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(492)
			Float _g10 = (_g9 - this->_lastMouse->y);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(492)
			Float _g11 = ::Math_obj::abs(_g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(492)
			hx::AddEq(this->_distance,_g11);
			HX_STACK_LINE(493)
			Float _g12 = this->get_mouseX();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(493)
			this->_lastMouse->x = _g12;
			HX_STACK_LINE(494)
			Float _g13 = this->get_mouseY();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(494)
			this->_lastMouse->y = _g13;
		}
		HX_STACK_LINE(496)
		if (((bool(!(this->_noScroll)) && bool((this->_distance > 8.0))))){
			HX_STACK_LINE(497)
			this->showScrollBar();
		}
		else{
			HX_STACK_LINE(499)
			int _g14 = this->_touchTimer->get_currentCount();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(499)
			if (((  (((  (((_g14 == (int)3))) ? bool(this->_classic) : bool(false) ))) ? bool((this->_distance < 8.0)) : bool(false) ))){
				HX_STACK_LINE(500)
				this->pressButton(null());
			}
			else{
				HX_STACK_LINE(502)
				int _g15 = this->_touchTimer->get_currentCount();		HX_STACK_VAR(_g15,"_g15");
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIScrollVertical_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIScrollVertical.hx",502,0x2aec0d70)
						{
							HX_STACK_LINE(502)
							Float _g16 = ::Math_obj::abs(__this->_delta);		HX_STACK_VAR(_g16,"_g16");
							HX_STACK_LINE(502)
							return (_g16 <= 2.0);
						}
						return null();
					}
				};
				HX_STACK_LINE(502)
				if (((  (((  (((_g15 == (int)8))) ? bool(!(this->_classic)) : bool(false) ))) ? bool(_Function_3_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(503)
					this->pressButton(null());
				}
			}
		}
		HX_STACK_LINE(505)
		::haxe::Log_obj::trace(HX_CSTRING("end mouseMove"),hx::SourceInfo(HX_CSTRING("UIScrollVertical.hx"),505,HX_CSTRING("com.danielfreeman.madcomponents.UIScrollVertical"),HX_CSTRING("mouseMove")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,mouseMove,(void))

Void UIScrollVertical_obj::mouseDrag( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","mouseDrag",0x6d570756,"com.danielfreeman.madcomponents.UIScrollVertical.mouseDrag","com/danielfreeman/madcomponents/UIScrollVertical.hx",510,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(510)
		if (((this->_pressButton != null()))){
			HX_STACK_LINE(511)
			::openfl::events::MouseEvent _g = ::openfl::events::MouseEvent_obj::__new(::openfl::events::MouseEvent_obj::MOUSE_MOVE,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(511)
			this->get_stage()->dispatchEvent(_g);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,mouseDrag,(void))

Void UIScrollVertical_obj::startMovement( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","startMovement",0x3a271cce,"com.danielfreeman.madcomponents.UIScrollVertical.startMovement","com/danielfreeman/madcomponents/UIScrollVertical.hx",520,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_LINE(521)
		this->_endSlider = (::com::danielfreeman::madcomponents::UIScrollVertical_obj::FINISHED - (int)1);
		HX_STACK_LINE(522)
		this->startMovement0();
		HX_STACK_LINE(523)
		this->_moveTimer->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,startMovement,(void))

bool UIScrollVertical_obj::startMovement0( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","startMovement0",0xa81217a2,"com.danielfreeman.madcomponents.UIScrollVertical.startMovement0","com/danielfreeman/madcomponents/UIScrollVertical.hx",527,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(528)
	Float _g = this->get_sliderY();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(528)
	if (((_g > this->_offset))){
		HX_STACK_LINE(529)
		this->_endSlider = -(this->_offset);
		HX_STACK_LINE(530)
		return true;
	}
	else{
		HX_STACK_LINE(532)
		Float _g1 = this->get_sliderY();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(532)
		if (((_g1 < -(this->_maximumSlide)))){
			HX_STACK_LINE(533)
			this->_endSlider = this->_maximumSlide;
			HX_STACK_LINE(534)
			return true;
		}
	}
	HX_STACK_LINE(536)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,startMovement0,return )

Void UIScrollVertical_obj::movement( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","movement",0x71496532,"com.danielfreeman.madcomponents.UIScrollVertical.movement","com/danielfreeman/madcomponents/UIScrollVertical.hx",543,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(543)
		::haxe::Log_obj::trace(HX_CSTRING("movement"),hx::SourceInfo(HX_CSTRING("UIScrollVertical.hx"),543,HX_CSTRING("com.danielfreeman.madcomponents.UIScrollVertical"),HX_CSTRING("movement")));
		HX_STACK_LINE(544)
		if (((this->_endSlider < ::com::danielfreeman::madcomponents::UIScrollVertical_obj::FINISHED))){
			HX_STACK_LINE(545)
			Float _g = this->deltaToDecay(this->_delta);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(545)
			hx::MultEq(this->_delta,_g);
			HX_STACK_LINE(546)
			Float _g1 = this->get_sliderY();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(546)
			Float _g2 = (_g1 + this->_delta);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(546)
			this->set_sliderY(_g2);
			HX_STACK_LINE(547)
			if (((this->_distance > 8.0))){
				HX_STACK_LINE(548)
				this->showScrollBar();
			}
			HX_STACK_LINE(550)
			Float _g3 = ::Math_obj::abs(this->_actualDeltaY);		HX_STACK_VAR(_g3,"_g3");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIScrollVertical_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIScrollVertical.hx",550,0x2aec0d70)
					{
						HX_STACK_LINE(550)
						Float _g4 = __this->get_sliderY();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(550)
						return (_g4 > (int)0);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIScrollVertical_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIScrollVertical.hx",550,0x2aec0d70)
					{
						HX_STACK_LINE(550)
						Float _g5 = __this->get_sliderY();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(550)
						return (_g5 < -(__this->_maximumSlide));
					}
					return null();
				}
			};
			HX_STACK_LINE(550)
			if (((  ((!(((  ((!(((_g3 < this->_deltaThreshold))))) ? bool(_Function_2_1::Block(this)) : bool(true) ))))) ? bool(_Function_2_2::Block(this)) : bool(true) ))){
				HX_STACK_LINE(551)
				if ((!(this->startMovement0()))){
					HX_STACK_LINE(552)
					this->stopMovement();
				}
			}
		}
		else{
			HX_STACK_LINE(557)
			Float _g6 = this->get_sliderY();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(557)
			Float _g7 = (-(this->_endSlider) - _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(557)
			Float _g8 = (_g7 * ::com::danielfreeman::madcomponents::UIScrollVertical_obj::BOUNCE);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(557)
			this->_delta = _g8;
			HX_STACK_LINE(558)
			Float _g9 = this->get_sliderY();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(558)
			Float _g10 = (_g9 + this->_delta);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(558)
			this->set_sliderY(_g10);
			HX_STACK_LINE(559)
			this->showScrollBar();
			HX_STACK_LINE(560)
			Float _g11 = ::Math_obj::abs(this->_actualDeltaY);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(560)
			if (((_g11 < this->_deltaThreshold))){
				HX_STACK_LINE(561)
				this->set_sliderY(-(this->_endSlider));
				HX_STACK_LINE(562)
				this->stopMovement();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,movement,(void))

Void UIScrollVertical_obj::stopMovement( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","stopMovement",0xbb4da0d4,"com.danielfreeman.madcomponents.UIScrollVertical.stopMovement","com/danielfreeman/madcomponents/UIScrollVertical.hx",571,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_LINE(571)
		::haxe::Log_obj::trace(HX_CSTRING("stopMovement"),hx::SourceInfo(HX_CSTRING("UIScrollVertical.hx"),571,HX_CSTRING("com.danielfreeman.madcomponents.UIScrollVertical"),HX_CSTRING("stopMovement")));
		HX_STACK_LINE(572)
		this->_moveTimer->stop();
		HX_STACK_LINE(573)
		this->_delta = (int)0;
		HX_STACK_LINE(574)
		this->hideScrollBar();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,stopMovement,(void))

Void UIScrollVertical_obj::showScrollBar( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","showScrollBar",0x634e9026,"com.danielfreeman.madcomponents.UIScrollVertical.showScrollBar","com/danielfreeman/madcomponents/UIScrollVertical.hx",581,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_LINE(582)
		if ((!(this->_scrollBarVisible))){
			HX_STACK_LINE(583)
			this->touchCancel();
			HX_STACK_LINE(584)
			this->_scrollBarVisible = true;
			HX_STACK_LINE(585)
			::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("scrollStarted"),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(585)
			this->dispatchEvent(_g);
		}
		HX_STACK_LINE(587)
		this->drawScrollBar();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,showScrollBar,(void))

Float UIScrollVertical_obj::getSliderHeight( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","getSliderHeight",0xad6ddcfb,"com.danielfreeman.madcomponents.UIScrollVertical.getSliderHeight","com/danielfreeman/madcomponents/UIScrollVertical.hx",592,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(592)
	if (((this->_scrollerHeight > (int)0))){
		HX_STACK_LINE(592)
		return (this->_scrollerHeight * this->_scale);
	}
	else{
		HX_STACK_LINE(592)
		return this->_slider->getBounds(this->_slider)->get_bottom();
	}
	HX_STACK_LINE(592)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,getSliderHeight,return )

Void UIScrollVertical_obj::drawScrollBar( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","drawScrollBar",0xd257a03f,"com.danielfreeman.madcomponents.UIScrollVertical.drawScrollBar","com/danielfreeman/madcomponents/UIScrollVertical.hx",599,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_LINE(600)
		if ((this->_noScroll)){
			HX_STACK_LINE(601)
			return null();
		}
		HX_STACK_LINE(603)
		Float sliderHeight = this->getSliderHeight();		HX_STACK_VAR(sliderHeight,"sliderHeight");
		HX_STACK_LINE(604)
		this->_scrollBarLayer->get_graphics()->clear();
		HX_STACK_LINE(605)
		Float barHeight = ((Float(this->_height) / Float(sliderHeight)) * this->_height);		HX_STACK_VAR(barHeight,"barHeight");
		HX_STACK_LINE(606)
		Float _g = -(this->get_sliderY());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(606)
		Float _g1 = (Float(_g) / Float(sliderHeight));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(606)
		Float _g2 = (_g1 * this->_height);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(606)
		Float barPosition = (_g2 + 4.);		HX_STACK_VAR(barPosition,"barPosition");
		HX_STACK_LINE(607)
		if (((barPosition < 2.0))){
			HX_STACK_LINE(608)
			hx::AddEq(barHeight,barPosition);
			HX_STACK_LINE(609)
			barPosition = 2.0;
		}
		HX_STACK_LINE(611)
		if ((((barPosition + barHeight) > (this->_height - 4.)))){
			HX_STACK_LINE(612)
			hx::SubEq(barHeight,(((barPosition + barHeight) - this->_height) + 4.));
		}
		HX_STACK_LINE(614)
		if (((bool((barHeight > (int)0)) && bool((barPosition >= (int)0))))){
			HX_STACK_LINE(615)
			this->_scrollBarLayer->get_graphics()->beginFill(this->_scrollBarColour,null());
			HX_STACK_LINE(616)
			this->_scrollBarLayer->get_graphics()->drawRoundRect(((this->_width - 5.0) - 2.0),barPosition,5.0,barHeight,5.0,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,drawScrollBar,(void))

Void UIScrollVertical_obj::hideScrollBar( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","hideScrollBar",0x96fd8fc1,"com.danielfreeman.madcomponents.UIScrollVertical.hideScrollBar","com/danielfreeman/madcomponents/UIScrollVertical.hx",624,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_LINE(625)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("scrollStopped"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(625)
		this->dispatchEvent(_g);
		HX_STACK_LINE(626)
		if (((bool(this->_scrollBarVisible) && bool(((bool(!(this->_alwaysScrollBar)) || bool(this->_noScroll))))))){
			HX_STACK_LINE(627)
			this->_scrollBarLayer->get_graphics()->clear();
			HX_STACK_LINE(628)
			this->_scrollBarVisible = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,hideScrollBar,(void))

Void UIScrollVertical_obj::doSearchHit( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","doSearchHit",0x299f729d,"com.danielfreeman.madcomponents.UIScrollVertical.doSearchHit","com/danielfreeman/madcomponents/UIScrollVertical.hx",637,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_LINE(637)
		if (((this->_pressButton == null()))){
			HX_STACK_LINE(638)
			::openfl::display::DisplayObject _g = this->searchHit(this->_slider);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(638)
			this->_pressButton = _g;
			HX_STACK_LINE(639)
			if ((::Std_obj::is(this->_pressButton,hx::ClassOf< ::com::danielfreeman::madcomponents::UIInput >()))){
				HX_STACK_LINE(640)
				this->_pressButton = null();
			}
			else{
				HX_STACK_LINE(642)
				if (((  (((this->_pressButton != null()))) ? bool(::Std_obj::is(this->_pressButton,hx::ClassOf< ::openfl::display::InteractiveObject >())) : bool(false) ))){
					HX_STACK_LINE(643)
					::openfl::display::DisplayObject _g1 = this->searchHitChild(this->_pressButton);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(643)
					this->_searchHitChild = _g1;
					HX_STACK_LINE(644)
					::openfl::events::MouseEvent _g2 = ::openfl::events::MouseEvent_obj::__new(::openfl::events::MouseEvent_obj::MOUSE_DOWN,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(644)
					((  (((this->_searchHitChild != null()))) ? ::openfl::display::DisplayObject(this->_searchHitChild) : ::openfl::display::DisplayObject(this->_pressButton) ))->dispatchEvent(_g2);
					HX_STACK_LINE(645)
					this->_dragTimer->start();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,doSearchHit,(void))

::openfl::display::DisplayObject UIScrollVertical_obj::pressButton( hx::Null< bool >  __o_show){
bool show = __o_show.Default(true);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","pressButton",0x8b4ef1b2,"com.danielfreeman.madcomponents.UIScrollVertical.pressButton","com/danielfreeman/madcomponents/UIScrollVertical.hx",651,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(show,"show")
{
		HX_STACK_LINE(652)
		this->doSearchHit();
		HX_STACK_LINE(653)
		return this->_pressButton;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,pressButton,return )

Void UIScrollVertical_obj::clickUp( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","clickUp",0xebc1ba20,"com.danielfreeman.madcomponents.UIScrollVertical.clickUp","com/danielfreeman/madcomponents/UIScrollVertical.hx",662,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(662)
		if (((bool((this->_pressButton != null())) && bool((this->_distance < 8.0))))){
			HX_STACK_LINE(663)
			this->_dragTimer->stop();
			HX_STACK_LINE(664)
			::openfl::events::MouseEvent _g = ::openfl::events::MouseEvent_obj::__new(::openfl::events::MouseEvent_obj::MOUSE_UP,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(664)
			this->_pressButton->dispatchEvent(_g);
			HX_STACK_LINE(665)
			this->_pressButton = null();
			HX_STACK_LINE(666)
			this->stopMovement();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,clickUp,(void))

::openfl::display::DisplayObject UIScrollVertical_obj::searchHit( ::openfl::display::Sprite container){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","searchHit",0x6ddd1268,"com.danielfreeman.madcomponents.UIScrollVertical.searchHit","com/danielfreeman/madcomponents/UIScrollVertical.hx",674,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(container,"container")
	HX_STACK_LINE(675)
	::openfl::display::DisplayObject found = null();		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(676)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(677)
	while((true)){
		HX_STACK_LINE(677)
		int _g = container->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(677)
		if ((!(((  (((i < _g))) ? bool((found == null())) : bool(false) ))))){
			HX_STACK_LINE(677)
			break;
		}
		HX_STACK_LINE(678)
		int _g1 = container->get_numChildren();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(678)
		int _g2 = (_g1 - i);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(678)
		int _g3 = (_g2 - (int)1);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(678)
		Dynamic item = container->getChildAt(_g3);		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(680)
		if (((  (((  ((::Std_obj::is(item,hx::ClassOf< ::com::danielfreeman::madcomponents::IContainerUI >()))) ? bool((hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(item))->get_clickable()) : bool(false) ))) ? bool((hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(item))->get_isVisible()) : bool(false) ))){
			HX_STACK_LINE(681)
			::openfl::display::DisplayObject _g4 = this->searchHit(item);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(681)
			found = _g4;
		}
		else{
			struct _Function_3_1{
				inline static bool Block( Dynamic &item,::openfl::display::Sprite &container){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIScrollVertical.hx",684,0x2aec0d70)
					{
						HX_STACK_LINE(684)
						Float _g5 = container->get_mouseX();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(684)
						Float _g6 = container->get_mouseY();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(684)
						return ::com::danielfreeman::madcomponents::UIScrollVertical_obj::inBounds(item,_g5,_g6);
					}
					return null();
				}
			};
			HX_STACK_LINE(684)
			if (((  (((  (((  (((item != null()))) ? bool(_Function_3_1::Block(item,container)) : bool(false) ))) ? bool(!(::Std_obj::is(item,hx::ClassOf< ::com::danielfreeman::madcomponents::UILabel >()))) : bool(false) ))) ? bool(!(((  ((::Std_obj::is(item,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))) ? bool(!((hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(item))->get_clickable())) : bool(false) )))) : bool(false) ))){
				HX_STACK_LINE(685)
				found = item;
			}
		}
		HX_STACK_LINE(688)
		(i)++;
	}
	HX_STACK_LINE(690)
	return found;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,searchHit,return )

::openfl::display::DisplayObject UIScrollVertical_obj::searchHitChild( ::openfl::display::DisplayObject item){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","searchHitChild",0x0b864e14,"com.danielfreeman.madcomponents.UIScrollVertical.searchHitChild","com/danielfreeman/madcomponents/UIScrollVertical.hx",696,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_LINE(697)
	::openfl::display::DisplayObject found = null();		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(698)
	if (((  ((::Std_obj::is(item,hx::ClassOf< ::openfl::display::Sprite >()))) ? bool((hx::TCast< openfl::display::Sprite >::cast(item))->get_mouseEnabled()) : bool(false) ))){
		HX_STACK_LINE(699)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(700)
		while((true)){
			HX_STACK_LINE(700)
			int _g = (hx::TCast< openfl::display::Sprite >::cast(item))->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(700)
			if ((!(((  (((i < _g))) ? bool((found == null())) : bool(false) ))))){
				HX_STACK_LINE(700)
				break;
			}
			HX_STACK_LINE(701)
			int _g1 = (hx::TCast< openfl::display::Sprite >::cast(item))->get_numChildren();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(701)
			int _g2 = (_g1 - i);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(701)
			int _g3 = (_g2 - (int)1);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(701)
			::openfl::display::DisplayObject _g4 = (hx::TCast< openfl::display::Sprite >::cast(item))->getChildAt(_g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(701)
			::openfl::display::DisplayObject _g5 = this->searchHitChild(_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(701)
			found = _g5;
			HX_STACK_LINE(702)
			(i)++;
		}
	}
	HX_STACK_LINE(705)
	::openfl::geom::Rectangle bounds = item->getBounds(item);		HX_STACK_VAR(bounds,"bounds");
	struct _Function_1_1{
		inline static bool Block( ::openfl::display::DisplayObject &item,::openfl::geom::Rectangle &bounds){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIScrollVertical.hx",706,0x2aec0d70)
			{
				HX_STACK_LINE(706)
				Float _g6 = item->get_mouseX();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(706)
				Float _g7 = (_g6 - bounds->x);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(706)
				Float _g8 = item->get_mouseY();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(706)
				Float _g9 = (_g8 - bounds->y);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(706)
				return ::com::danielfreeman::madcomponents::UIScrollVertical_obj::inBoundsChild(item,_g7,_g9);
			}
			return null();
		}
	};
	HX_STACK_LINE(706)
	if (((  (((  (((found == null()))) ? bool(_Function_1_1::Block(item,bounds)) : bool(false) ))) ? bool(!(((  ((::Std_obj::is(item,hx::ClassOf< ::openfl::display::Sprite >()))) ? bool(!((hx::TCast< openfl::display::Sprite >::cast(item))->get_mouseEnabled())) : bool(false) )))) : bool(false) ))){
		HX_STACK_LINE(707)
		found = item;
	}
	HX_STACK_LINE(709)
	return found;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,searchHitChild,return )

Void UIScrollVertical_obj::clear( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","clear",0xa466c1aa,"com.danielfreeman.madcomponents.UIScrollVertical.clear","com/danielfreeman/madcomponents/UIScrollVertical.hx",729,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_LINE(729)
		(hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(this->_slider))->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,clear,(void))

::openfl::display::DisplayObject UIScrollVertical_obj::findViewById( ::String id,hx::Null< int >  __o_row,hx::Null< int >  __o_group){
int row = __o_row.Default(-1);
int group = __o_group.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","findViewById",0xb5787973,"com.danielfreeman.madcomponents.UIScrollVertical.findViewById","com/danielfreeman/madcomponents/UIScrollVertical.hx",737,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(group,"group")
{
		HX_STACK_LINE(737)
		return (hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(this->_slider))->findViewById(id,row,group);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(UIScrollVertical_obj,findViewById,return )

bool UIScrollVertical_obj::get_outsideSlideRange( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","get_outsideSlideRange",0xb4774d45,"com.danielfreeman.madcomponents.UIScrollVertical.get_outsideSlideRange","com/danielfreeman/madcomponents/UIScrollVertical.hx",742,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(742)
	return (bool((this->_sliderPosition >= (int)0)) || bool((this->_sliderPosition <= -(this->_maximumSlide))));
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,get_outsideSlideRange,return )

Float UIScrollVertical_obj::set_sliderY( Float value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","set_sliderY",0x05e5c218,"com.danielfreeman.madcomponents.UIScrollVertical.set_sliderY","com/danielfreeman/madcomponents/UIScrollVertical.hx",746,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(747)
	value = this->toPixelBoundaryDouble(hx::ObjectPtr<OBJ_>(this),(int)0,value)->y;
	HX_STACK_LINE(748)
	this->_actualDeltaY = (value - this->_sliderPosition);
	HX_STACK_LINE(749)
	this->_sliderPosition = value;
	HX_STACK_LINE(750)
	if ((this->_slider->get_visible())){
		HX_STACK_LINE(751)
		this->_slider->set_y(this->_sliderPosition);
	}
	HX_STACK_LINE(753)
	this->sliderMoved();
	HX_STACK_LINE(754)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,set_sliderY,return )

Float UIScrollVertical_obj::get_sliderY( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","get_sliderY",0xfb78bb0c,"com.danielfreeman.madcomponents.UIScrollVertical.get_sliderY","com/danielfreeman/madcomponents/UIScrollVertical.hx",759,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(759)
	return this->_sliderPosition;
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,get_sliderY,return )

bool UIScrollVertical_obj::set_sliderVisible( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","set_sliderVisible",0x2525bb51,"com.danielfreeman.madcomponents.UIScrollVertical.set_sliderVisible","com/danielfreeman/madcomponents/UIScrollVertical.hx",763,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(763)
	::haxe::Log_obj::trace(HX_CSTRING("sliderVisible"),hx::SourceInfo(HX_CSTRING("UIScrollVertical.hx"),763,HX_CSTRING("com.danielfreeman.madcomponents.UIScrollVertical"),HX_CSTRING("set_sliderVisible")));
	HX_STACK_LINE(764)
	if ((value)){
		HX_STACK_LINE(765)
		this->addListeners();
		HX_STACK_LINE(766)
		this->hideScrollBar();
	}
	else{
		HX_STACK_LINE(769)
		this->removeListeners();
	}
	HX_STACK_LINE(771)
	this->_slider->set_y(this->_sliderPosition);
	HX_STACK_LINE(772)
	this->_slider->set_visible(value);
	HX_STACK_LINE(773)
	this->_moveTimer->stop();
	HX_STACK_LINE(774)
	this->_touchTimer->stop();
	HX_STACK_LINE(775)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,set_sliderVisible,return )

bool UIScrollVertical_obj::get_sliderVisible( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","get_sliderVisible",0x01b7e345,"com.danielfreeman.madcomponents.UIScrollVertical.get_sliderVisible","com/danielfreeman/madcomponents/UIScrollVertical.hx",780,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(780)
	return this->_slider->get_visible();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,get_sliderVisible,return )

Float UIScrollVertical_obj::set_scrollPositionY( Float value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","set_scrollPositionY",0x3a8d3cc3,"com.danielfreeman.madcomponents.UIScrollVertical.set_scrollPositionY","com/danielfreeman/madcomponents/UIScrollVertical.hx",786,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(787)
	this->_sliderPosition = -(value);
	HX_STACK_LINE(788)
	if (((value > this->_maximumSlide))){
		HX_STACK_LINE(789)
		this->_sliderPosition = -(this->_maximumSlide);
	}
	HX_STACK_LINE(791)
	Float _g = this->_sliderPosition = this->toPixelBoundaryDouble(hx::ObjectPtr<OBJ_>(this),(int)0,this->_sliderPosition)->y;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(791)
	this->_slider->set_y(_g);
	HX_STACK_LINE(792)
	this->sliderMoved();
	HX_STACK_LINE(793)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,set_scrollPositionY,return )

Void UIScrollVertical_obj::sliderMoved( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","sliderMoved",0x5d9d622f,"com.danielfreeman.madcomponents.UIScrollVertical.sliderMoved","com/danielfreeman/madcomponents/UIScrollVertical.hx",797,0x2aec0d70)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,sliderMoved,(void))

Float UIScrollVertical_obj::get_scrollPositionY( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","get_scrollPositionY",0xfdf049b7,"com.danielfreeman.madcomponents.UIScrollVertical.get_scrollPositionY","com/danielfreeman/madcomponents/UIScrollVertical.hx",806,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(806)
	return -(this->get_sliderY());
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,get_scrollPositionY,return )

Dynamic UIScrollVertical_obj::set_data( Dynamic values){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","set_data",0xe18d4b2a,"com.danielfreeman.madcomponents.UIScrollVertical.set_data","com/danielfreeman/madcomponents/UIScrollVertical.hx",812,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(values,"values")
	HX_STACK_LINE(813)
	if ((::Std_obj::is(this->_slider,hx::ClassOf< ::com::danielfreeman::madcomponents::UIForm >()))){
		HX_STACK_LINE(814)
		(hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(this->_slider))->set_data(values);
		HX_STACK_LINE(815)
		if ((this->_autoLayout)){
			HX_STACK_LINE(816)
			(hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(this->_slider))->doLayout();
			HX_STACK_LINE(817)
			this->adjustMaximumSlide();
		}
	}
	HX_STACK_LINE(820)
	return values;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollVertical_obj,set_data,return )

::com::danielfreeman::madcomponents::Model UIScrollVertical_obj::get_model( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","get_model",0xce93a29d,"com.danielfreeman.madcomponents.UIScrollVertical.get_model","com/danielfreeman/madcomponents/UIScrollVertical.hx",827,0x2aec0d70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(827)
	if ((::Std_obj::is(this->_slider,hx::ClassOf< ::com::danielfreeman::madcomponents::UIForm >()))){
		HX_STACK_LINE(827)
		return (hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(this->_slider))->get_model();
	}
	else{
		HX_STACK_LINE(827)
		return null();
	}
	HX_STACK_LINE(827)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollVertical_obj,get_model,return )

Void UIScrollVertical_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","destructor",0x555e01fc,"com.danielfreeman.madcomponents.UIScrollVertical.destructor","com/danielfreeman/madcomponents/UIScrollVertical.hx",831,0x2aec0d70)
		HX_STACK_THIS(this)
		HX_STACK_LINE(832)
		this->super::destructor();
		HX_STACK_LINE(833)
		this->removeListeners();
		HX_STACK_LINE(834)
		this->_slider->removeEventListener(HX_CSTRING("imageLoaded"),this->doLayoutHandler_dyn(),null());
		HX_STACK_LINE(835)
		this->_touchTimer->stop();
		HX_STACK_LINE(836)
		this->_moveTimer->stop();
		HX_STACK_LINE(837)
		this->_dragTimer->stop();
		HX_STACK_LINE(838)
		this->_clickTimer->stop();
		HX_STACK_LINE(839)
		::com::danielfreeman::madcomponents::UI_obj::clear(this->_slider);
	}
return null();
}


::String UIScrollVertical_obj::STARTED;

::String UIScrollVertical_obj::STOPPED;

Float UIScrollVertical_obj::DELTA_THRESHOLD;

Float UIScrollVertical_obj::THRESHOLD;

Float UIScrollVertical_obj::ABORT_THRESHOLD;

Float UIScrollVertical_obj::PADDING;

Float UIScrollVertical_obj::SCROLLBAR_POSITION;

Float UIScrollVertical_obj::SCROLLBAR_WIDTH;

Float UIScrollVertical_obj::MAXIMUM_DY;

Float UIScrollVertical_obj::FINISHED;

Float UIScrollVertical_obj::SMOOTH;

Float UIScrollVertical_obj::MARGIN;

int UIScrollVertical_obj::DELTA;

int UIScrollVertical_obj::DELTA_TOUCH;

Float UIScrollVertical_obj::BOUNCE;

int UIScrollVertical_obj::CLICK_DURATION;

Array< Float > UIScrollVertical_obj::SLOW_DECAY;

Array< Float > UIScrollVertical_obj::FAST_DECAY;

Array< Float > UIScrollVertical_obj::SLOW_DECAY_DELTA;

Array< Float > UIScrollVertical_obj::FAST_DECAY_DELTA;

int UIScrollVertical_obj::SPEED;

Float UIScrollVertical_obj::FLICK_THRESHOLD;

Float UIScrollVertical_obj::FLICK_FACTOR;

int UIScrollVertical_obj::MAXIMUM_TICKS;

Float UIScrollVertical_obj::DAMPEN;

int UIScrollVertical_obj::NO_SWIPE_THRESHOLD;

int UIScrollVertical_obj::TOUCH_DELAY;

bool UIScrollVertical_obj::inBounds( ::openfl::display::DisplayObject item,Float x,Float y){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","inBounds",0x5fadb03d,"com.danielfreeman.madcomponents.UIScrollVertical.inBounds","com/danielfreeman/madcomponents/UIScrollVertical.hx",715,0x2aec0d70)
	HX_STACK_ARG(item,"item")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(716)
	Float _g = item->get_x();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(716)
	Float _g1 = (_g - 6.0);		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static bool Block( ::openfl::display::DisplayObject &item,Float &y){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIScrollVertical.hx",716,0x2aec0d70)
			{
				HX_STACK_LINE(716)
				Float _g2 = item->get_y();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(716)
				Float _g3 = (_g2 - 6.0);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(716)
				return (y > _g3);
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( ::openfl::display::DisplayObject &item,Float &x){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIScrollVertical.hx",716,0x2aec0d70)
			{
				HX_STACK_LINE(716)
				Float _g4 = item->get_x();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(716)
				Float _g5 = item->get_width();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(716)
				Float _g6 = (_g4 + _g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(716)
				Float _g7 = (_g6 + 6.0);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(716)
				return (x < _g7);
			}
			return null();
		}
	};
	HX_STACK_LINE(716)
	if (((  (((  (((x > _g1))) ? bool(_Function_1_1::Block(item,y)) : bool(false) ))) ? bool(_Function_1_2::Block(item,x)) : bool(false) ))){
		HX_STACK_LINE(716)
		Float _g8 = item->get_y();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(716)
		Float _g9 = item->get_height();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(716)
		Float _g10 = (_g8 + _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(716)
		Float _g11 = (_g10 + 6.0);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(716)
		return (y < _g11);
	}
	else{
		HX_STACK_LINE(716)
		return false;
	}
	HX_STACK_LINE(716)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(UIScrollVertical_obj,inBounds,return )

bool UIScrollVertical_obj::inBoundsChild( ::openfl::display::DisplayObject item,Float x,Float y){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIScrollVertical","inBoundsChild",0xb9606c1f,"com.danielfreeman.madcomponents.UIScrollVertical.inBoundsChild","com/danielfreeman/madcomponents/UIScrollVertical.hx",723,0x2aec0d70)
	HX_STACK_ARG(item,"item")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	struct _Function_1_1{
		inline static bool Block( ::openfl::display::DisplayObject &item,Float &x){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIScrollVertical.hx",723,0x2aec0d70)
			{
				HX_STACK_LINE(723)
				Float _g = item->get_width();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(723)
				Float _g1 = (_g + 6.0);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(723)
				return (x < _g1);
			}
			return null();
		}
	};
	HX_STACK_LINE(723)
	if (((  (((bool((x > -6.)) && bool((y > -6.))))) ? bool(_Function_1_1::Block(item,x)) : bool(false) ))){
		HX_STACK_LINE(723)
		Float _g2 = item->get_height();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(723)
		Float _g3 = (_g2 + 6.0);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(723)
		return (y < _g3);
	}
	else{
		HX_STACK_LINE(723)
		return false;
	}
	HX_STACK_LINE(723)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(UIScrollVertical_obj,inBoundsChild,return )


UIScrollVertical_obj::UIScrollVertical_obj()
{
}

void UIScrollVertical_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIScrollVertical);
	HX_MARK_MEMBER_NAME(_maximumSlide,"_maximumSlide");
	HX_MARK_MEMBER_NAME(_delta,"_delta");
	HX_MARK_MEMBER_NAME(_startMouse,"_startMouse");
	HX_MARK_MEMBER_NAME(_lastMouse,"_lastMouse");
	HX_MARK_MEMBER_NAME(_startSlider,"_startSlider");
	HX_MARK_MEMBER_NAME(_endSlider,"_endSlider");
	HX_MARK_MEMBER_NAME(_slider,"_slider");
	HX_MARK_MEMBER_NAME(_sliderPosition,"_sliderPosition");
	HX_MARK_MEMBER_NAME(_touchTimer,"_touchTimer");
	HX_MARK_MEMBER_NAME(_moveTimer,"_moveTimer");
	HX_MARK_MEMBER_NAME(_dragTimer,"_dragTimer");
	HX_MARK_MEMBER_NAME(_clickTimer,"_clickTimer");
	HX_MARK_MEMBER_NAME(_distance,"_distance");
	HX_MARK_MEMBER_NAME(_pressButton,"_pressButton");
	HX_MARK_MEMBER_NAME(_searchHitChild,"_searchHitChild");
	HX_MARK_MEMBER_NAME(_scrollBarLayer,"_scrollBarLayer");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_colour,"_colour");
	HX_MARK_MEMBER_NAME(_scrollBarColour,"_scrollBarColour");
	HX_MARK_MEMBER_NAME(_noScroll,"_noScroll");
	HX_MARK_MEMBER_NAME(_deltaThreshold,"_deltaThreshold");
	HX_MARK_MEMBER_NAME(_listClickable,"_listClickable");
	HX_MARK_MEMBER_NAME(_autoLayout,"_autoLayout");
	HX_MARK_MEMBER_NAME(_offset,"_offset");
	HX_MARK_MEMBER_NAME(_scrollBarVisible,"_scrollBarVisible");
	HX_MARK_MEMBER_NAME(_scrollerWidth,"_scrollerWidth");
	HX_MARK_MEMBER_NAME(_scrollerHeight,"_scrollerHeight");
	HX_MARK_MEMBER_NAME(_border,"_border");
	HX_MARK_MEMBER_NAME(_scale,"_scale");
	HX_MARK_MEMBER_NAME(_dampen,"_dampen");
	HX_MARK_MEMBER_NAME(_classic,"_classic");
	HX_MARK_MEMBER_NAME(_autoScrollEnabled,"_autoScrollEnabled");
	HX_MARK_MEMBER_NAME(_alwaysScrollBar,"_alwaysScrollBar");
	HX_MARK_MEMBER_NAME(_noSwipeCount,"_noSwipeCount");
	HX_MARK_MEMBER_NAME(_profile,"_profile");
	HX_MARK_MEMBER_NAME(_actualDeltaY,"_actualDeltaY");
	::com::danielfreeman::madcomponents::MadMasking_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIScrollVertical_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_maximumSlide,"_maximumSlide");
	HX_VISIT_MEMBER_NAME(_delta,"_delta");
	HX_VISIT_MEMBER_NAME(_startMouse,"_startMouse");
	HX_VISIT_MEMBER_NAME(_lastMouse,"_lastMouse");
	HX_VISIT_MEMBER_NAME(_startSlider,"_startSlider");
	HX_VISIT_MEMBER_NAME(_endSlider,"_endSlider");
	HX_VISIT_MEMBER_NAME(_slider,"_slider");
	HX_VISIT_MEMBER_NAME(_sliderPosition,"_sliderPosition");
	HX_VISIT_MEMBER_NAME(_touchTimer,"_touchTimer");
	HX_VISIT_MEMBER_NAME(_moveTimer,"_moveTimer");
	HX_VISIT_MEMBER_NAME(_dragTimer,"_dragTimer");
	HX_VISIT_MEMBER_NAME(_clickTimer,"_clickTimer");
	HX_VISIT_MEMBER_NAME(_distance,"_distance");
	HX_VISIT_MEMBER_NAME(_pressButton,"_pressButton");
	HX_VISIT_MEMBER_NAME(_searchHitChild,"_searchHitChild");
	HX_VISIT_MEMBER_NAME(_scrollBarLayer,"_scrollBarLayer");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_colour,"_colour");
	HX_VISIT_MEMBER_NAME(_scrollBarColour,"_scrollBarColour");
	HX_VISIT_MEMBER_NAME(_noScroll,"_noScroll");
	HX_VISIT_MEMBER_NAME(_deltaThreshold,"_deltaThreshold");
	HX_VISIT_MEMBER_NAME(_listClickable,"_listClickable");
	HX_VISIT_MEMBER_NAME(_autoLayout,"_autoLayout");
	HX_VISIT_MEMBER_NAME(_offset,"_offset");
	HX_VISIT_MEMBER_NAME(_scrollBarVisible,"_scrollBarVisible");
	HX_VISIT_MEMBER_NAME(_scrollerWidth,"_scrollerWidth");
	HX_VISIT_MEMBER_NAME(_scrollerHeight,"_scrollerHeight");
	HX_VISIT_MEMBER_NAME(_border,"_border");
	HX_VISIT_MEMBER_NAME(_scale,"_scale");
	HX_VISIT_MEMBER_NAME(_dampen,"_dampen");
	HX_VISIT_MEMBER_NAME(_classic,"_classic");
	HX_VISIT_MEMBER_NAME(_autoScrollEnabled,"_autoScrollEnabled");
	HX_VISIT_MEMBER_NAME(_alwaysScrollBar,"_alwaysScrollBar");
	HX_VISIT_MEMBER_NAME(_noSwipeCount,"_noSwipeCount");
	HX_VISIT_MEMBER_NAME(_profile,"_profile");
	HX_VISIT_MEMBER_NAME(_actualDeltaY,"_actualDeltaY");
	::com::danielfreeman::madcomponents::MadMasking_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIScrollVertical_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { return get_xml(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"DELTA") ) { return DELTA; }
		if (HX_FIELD_EQ(inName,"SPEED") ) { return SPEED; }
		if (HX_FIELD_EQ(inName,"pages") ) { return get_pages(); }
		if (HX_FIELD_EQ(inName,"model") ) { return get_model(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BOUNCE") ) { return BOUNCE; }
		if (HX_FIELD_EQ(inName,"_delta") ) { return _delta; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_scale") ) { return _scale; }
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sliderY") ) { return get_sliderY(); }
		if (HX_FIELD_EQ(inName,"_slider") ) { return _slider; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"_colour") ) { return _colour; }
		if (HX_FIELD_EQ(inName,"_offset") ) { return _offset; }
		if (HX_FIELD_EQ(inName,"_border") ) { return _border; }
		if (HX_FIELD_EQ(inName,"_dampen") ) { return _dampen; }
		if (HX_FIELD_EQ(inName,"get_xml") ) { return get_xml_dyn(); }
		if (HX_FIELD_EQ(inName,"set_xml") ) { return set_xml_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"clickUp") ) { return clickUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FINISHED") ) { return FINISHED; }
		if (HX_FIELD_EQ(inName,"inBounds") ) { return inBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"_classic") ) { return _classic; }
		if (HX_FIELD_EQ(inName,"_profile") ) { return _profile; }
		if (HX_FIELD_EQ(inName,"doLayout") ) { return doLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"movement") ) { return movement_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { return _distance; }
		if (HX_FIELD_EQ(inName,"_noScroll") ) { return _noScroll; }
		if (HX_FIELD_EQ(inName,"get_pages") ) { return get_pages_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseMove") ) { return mouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseDrag") ) { return mouseDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"searchHit") ) { return searchHit_dyn(); }
		if (HX_FIELD_EQ(inName,"get_model") ) { return get_model_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SLOW_DECAY") ) { return SLOW_DECAY; }
		if (HX_FIELD_EQ(inName,"FAST_DECAY") ) { return FAST_DECAY; }
		if (HX_FIELD_EQ(inName,"_lastMouse") ) { return _lastMouse; }
		if (HX_FIELD_EQ(inName,"_endSlider") ) { return _endSlider; }
		if (HX_FIELD_EQ(inName,"_moveTimer") ) { return _moveTimer; }
		if (HX_FIELD_EQ(inName,"_dragTimer") ) { return _dragTimer; }
		if (HX_FIELD_EQ(inName,"set_dampen") ) { return set_dampen_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"DELTA_TOUCH") ) { return DELTA_TOUCH; }
		if (HX_FIELD_EQ(inName,"_startMouse") ) { return _startMouse; }
		if (HX_FIELD_EQ(inName,"_touchTimer") ) { return _touchTimer; }
		if (HX_FIELD_EQ(inName,"_clickTimer") ) { return _clickTimer; }
		if (HX_FIELD_EQ(inName,"_autoLayout") ) { return _autoLayout; }
		if (HX_FIELD_EQ(inName,"touchCancel") ) { return touchCancel_dyn(); }
		if (HX_FIELD_EQ(inName,"handleFlick") ) { return handleFlick_dyn(); }
		if (HX_FIELD_EQ(inName,"doSearchHit") ) { return doSearchHit_dyn(); }
		if (HX_FIELD_EQ(inName,"pressButton") ) { return pressButton_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sliderY") ) { return set_sliderY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sliderY") ) { return get_sliderY_dyn(); }
		if (HX_FIELD_EQ(inName,"sliderMoved") ) { return sliderMoved_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FLICK_FACTOR") ) { return FLICK_FACTOR; }
		if (HX_FIELD_EQ(inName,"maximumSlide") ) { return get_maximumSlide(); }
		if (HX_FIELD_EQ(inName,"_startSlider") ) { return _startSlider; }
		if (HX_FIELD_EQ(inName,"_pressButton") ) { return _pressButton; }
		if (HX_FIELD_EQ(inName,"addListeners") ) { return addListeners_dyn(); }
		if (HX_FIELD_EQ(inName,"deltaToDecay") ) { return deltaToDecay_dyn(); }
		if (HX_FIELD_EQ(inName,"rowRectangle") ) { return rowRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"createSlider") ) { return createSlider_dyn(); }
		if (HX_FIELD_EQ(inName,"stopMovement") ) { return stopMovement_dyn(); }
		if (HX_FIELD_EQ(inName,"findViewById") ) { return findViewById_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inBoundsChild") ) { return inBoundsChild_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollEnabled") ) { return get_scrollEnabled(); }
		if (HX_FIELD_EQ(inName,"sliderVisible") ) { return get_sliderVisible(); }
		if (HX_FIELD_EQ(inName,"_maximumSlide") ) { return _maximumSlide; }
		if (HX_FIELD_EQ(inName,"_noSwipeCount") ) { return _noSwipeCount; }
		if (HX_FIELD_EQ(inName,"_actualDeltaY") ) { return _actualDeltaY; }
		if (HX_FIELD_EQ(inName,"drawComponent") ) { return drawComponent_dyn(); }
		if (HX_FIELD_EQ(inName,"stopScrolling") ) { return stopScrolling_dyn(); }
		if (HX_FIELD_EQ(inName,"startMovement") ) { return startMovement_dyn(); }
		if (HX_FIELD_EQ(inName,"showScrollBar") ) { return showScrollBar_dyn(); }
		if (HX_FIELD_EQ(inName,"drawScrollBar") ) { return drawScrollBar_dyn(); }
		if (HX_FIELD_EQ(inName,"hideScrollBar") ) { return hideScrollBar_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"CLICK_DURATION") ) { return CLICK_DURATION; }
		if (HX_FIELD_EQ(inName,"_listClickable") ) { return _listClickable; }
		if (HX_FIELD_EQ(inName,"_scrollerWidth") ) { return _scrollerWidth; }
		if (HX_FIELD_EQ(inName,"startMovement0") ) { return startMovement0_dyn(); }
		if (HX_FIELD_EQ(inName,"searchHitChild") ) { return searchHitChild_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"FLICK_THRESHOLD") ) { return FLICK_THRESHOLD; }
		if (HX_FIELD_EQ(inName,"scrollPositionY") ) { return get_scrollPositionY(); }
		if (HX_FIELD_EQ(inName,"_sliderPosition") ) { return _sliderPosition; }
		if (HX_FIELD_EQ(inName,"_searchHitChild") ) { return _searchHitChild; }
		if (HX_FIELD_EQ(inName,"_scrollBarLayer") ) { return _scrollBarLayer; }
		if (HX_FIELD_EQ(inName,"_deltaThreshold") ) { return _deltaThreshold; }
		if (HX_FIELD_EQ(inName,"_scrollerHeight") ) { return _scrollerHeight; }
		if (HX_FIELD_EQ(inName,"removeListeners") ) { return removeListeners_dyn(); }
		if (HX_FIELD_EQ(inName,"doLayoutHandler") ) { return doLayoutHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"getSliderHeight") ) { return getSliderHeight_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"SLOW_DECAY_DELTA") ) { return SLOW_DECAY_DELTA; }
		if (HX_FIELD_EQ(inName,"FAST_DECAY_DELTA") ) { return FAST_DECAY_DELTA; }
		if (HX_FIELD_EQ(inName,"_scrollBarColour") ) { return _scrollBarColour; }
		if (HX_FIELD_EQ(inName,"_alwaysScrollBar") ) { return _alwaysScrollBar; }
		if (HX_FIELD_EQ(inName,"get_maximumSlide") ) { return get_maximumSlide_dyn(); }
		if (HX_FIELD_EQ(inName,"sliderAttributes") ) { return sliderAttributes_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"outsideSlideRange") ) { return get_outsideSlideRange(); }
		if (HX_FIELD_EQ(inName,"_scrollBarVisible") ) { return _scrollBarVisible; }
		if (HX_FIELD_EQ(inName,"set_scrollEnabled") ) { return set_scrollEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollEnabled") ) { return get_scrollEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sliderVisible") ) { return set_sliderVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sliderVisible") ) { return get_sliderVisible_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_autoScrollEnabled") ) { return _autoScrollEnabled; }
		if (HX_FIELD_EQ(inName,"adjustMaximumSlide") ) { return adjustMaximumSlide_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"adjustVerticalSlide") ) { return adjustVerticalSlide_dyn(); }
		if (HX_FIELD_EQ(inName,"androidMouseDisable") ) { return androidMouseDisable_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollPositionY") ) { return set_scrollPositionY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollPositionY") ) { return get_scrollPositionY_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_outsideSlideRange") ) { return get_outsideSlideRange_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIScrollVertical_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { return set_xml(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return set_data(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"DELTA") ) { DELTA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPEED") ) { SPEED=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BOUNCE") ) { BOUNCE=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dampen") ) { return set_dampen(inValue); }
		if (HX_FIELD_EQ(inName,"_delta") ) { _delta=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scale") ) { _scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sliderY") ) { return set_sliderY(inValue); }
		if (HX_FIELD_EQ(inName,"_slider") ) { _slider=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colour") ) { _colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_offset") ) { _offset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_border") ) { _border=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dampen") ) { _dampen=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FINISHED") ) { FINISHED=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_classic") ) { _classic=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_profile") ) { _profile=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { _distance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_noScroll") ) { _noScroll=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SLOW_DECAY") ) { SLOW_DECAY=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FAST_DECAY") ) { FAST_DECAY=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastMouse") ) { _lastMouse=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_endSlider") ) { _endSlider=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveTimer") ) { _moveTimer=inValue.Cast< ::com::danielfreeman::AnimationTimer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragTimer") ) { _dragTimer=inValue.Cast< ::com::danielfreeman::AnimationTimer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"DELTA_TOUCH") ) { DELTA_TOUCH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startMouse") ) { _startMouse=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touchTimer") ) { _touchTimer=inValue.Cast< ::com::danielfreeman::AnimationTimer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clickTimer") ) { _clickTimer=inValue.Cast< ::openfl::utils::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_autoLayout") ) { _autoLayout=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FLICK_FACTOR") ) { FLICK_FACTOR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startSlider") ) { _startSlider=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pressButton") ) { _pressButton=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scrollEnabled") ) { return set_scrollEnabled(inValue); }
		if (HX_FIELD_EQ(inName,"sliderVisible") ) { return set_sliderVisible(inValue); }
		if (HX_FIELD_EQ(inName,"_maximumSlide") ) { _maximumSlide=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_noSwipeCount") ) { _noSwipeCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_actualDeltaY") ) { _actualDeltaY=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"CLICK_DURATION") ) { CLICK_DURATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_listClickable") ) { _listClickable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollerWidth") ) { _scrollerWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"FLICK_THRESHOLD") ) { FLICK_THRESHOLD=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollPositionY") ) { return set_scrollPositionY(inValue); }
		if (HX_FIELD_EQ(inName,"_sliderPosition") ) { _sliderPosition=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_searchHitChild") ) { _searchHitChild=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollBarLayer") ) { _scrollBarLayer=inValue.Cast< ::openfl::display::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_deltaThreshold") ) { _deltaThreshold=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollerHeight") ) { _scrollerHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"SLOW_DECAY_DELTA") ) { SLOW_DECAY_DELTA=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FAST_DECAY_DELTA") ) { FAST_DECAY_DELTA=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollBarColour") ) { _scrollBarColour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alwaysScrollBar") ) { _alwaysScrollBar=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scrollBarVisible") ) { _scrollBarVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_autoScrollEnabled") ) { _autoScrollEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIScrollVertical_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("dampen"));
	outFields->push(HX_CSTRING("scrollEnabled"));
	outFields->push(HX_CSTRING("pages"));
	outFields->push(HX_CSTRING("xml"));
	outFields->push(HX_CSTRING("maximumSlide"));
	outFields->push(HX_CSTRING("outsideSlideRange"));
	outFields->push(HX_CSTRING("sliderY"));
	outFields->push(HX_CSTRING("sliderVisible"));
	outFields->push(HX_CSTRING("scrollPositionY"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("model"));
	outFields->push(HX_CSTRING("_maximumSlide"));
	outFields->push(HX_CSTRING("_delta"));
	outFields->push(HX_CSTRING("_startMouse"));
	outFields->push(HX_CSTRING("_lastMouse"));
	outFields->push(HX_CSTRING("_startSlider"));
	outFields->push(HX_CSTRING("_endSlider"));
	outFields->push(HX_CSTRING("_slider"));
	outFields->push(HX_CSTRING("_sliderPosition"));
	outFields->push(HX_CSTRING("_touchTimer"));
	outFields->push(HX_CSTRING("_moveTimer"));
	outFields->push(HX_CSTRING("_dragTimer"));
	outFields->push(HX_CSTRING("_clickTimer"));
	outFields->push(HX_CSTRING("_distance"));
	outFields->push(HX_CSTRING("_pressButton"));
	outFields->push(HX_CSTRING("_searchHitChild"));
	outFields->push(HX_CSTRING("_scrollBarLayer"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_colour"));
	outFields->push(HX_CSTRING("_scrollBarColour"));
	outFields->push(HX_CSTRING("_noScroll"));
	outFields->push(HX_CSTRING("_deltaThreshold"));
	outFields->push(HX_CSTRING("_listClickable"));
	outFields->push(HX_CSTRING("_autoLayout"));
	outFields->push(HX_CSTRING("_offset"));
	outFields->push(HX_CSTRING("_scrollBarVisible"));
	outFields->push(HX_CSTRING("_scrollerWidth"));
	outFields->push(HX_CSTRING("_scrollerHeight"));
	outFields->push(HX_CSTRING("_border"));
	outFields->push(HX_CSTRING("_scale"));
	outFields->push(HX_CSTRING("_dampen"));
	outFields->push(HX_CSTRING("_classic"));
	outFields->push(HX_CSTRING("_autoScrollEnabled"));
	outFields->push(HX_CSTRING("_alwaysScrollBar"));
	outFields->push(HX_CSTRING("_noSwipeCount"));
	outFields->push(HX_CSTRING("_profile"));
	outFields->push(HX_CSTRING("_actualDeltaY"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("STARTED"),
	HX_CSTRING("STOPPED"),
	HX_CSTRING("DELTA_THRESHOLD"),
	HX_CSTRING("THRESHOLD"),
	HX_CSTRING("ABORT_THRESHOLD"),
	HX_CSTRING("PADDING"),
	HX_CSTRING("SCROLLBAR_POSITION"),
	HX_CSTRING("SCROLLBAR_WIDTH"),
	HX_CSTRING("MAXIMUM_DY"),
	HX_CSTRING("FINISHED"),
	HX_CSTRING("SMOOTH"),
	HX_CSTRING("MARGIN"),
	HX_CSTRING("DELTA"),
	HX_CSTRING("DELTA_TOUCH"),
	HX_CSTRING("BOUNCE"),
	HX_CSTRING("CLICK_DURATION"),
	HX_CSTRING("SLOW_DECAY"),
	HX_CSTRING("FAST_DECAY"),
	HX_CSTRING("SLOW_DECAY_DELTA"),
	HX_CSTRING("FAST_DECAY_DELTA"),
	HX_CSTRING("SPEED"),
	HX_CSTRING("FLICK_THRESHOLD"),
	HX_CSTRING("FLICK_FACTOR"),
	HX_CSTRING("MAXIMUM_TICKS"),
	HX_CSTRING("DAMPEN"),
	HX_CSTRING("NO_SWIPE_THRESHOLD"),
	HX_CSTRING("TOUCH_DELAY"),
	HX_CSTRING("inBounds"),
	HX_CSTRING("inBoundsChild"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(UIScrollVertical_obj,_maximumSlide),HX_CSTRING("_maximumSlide")},
	{hx::fsFloat,(int)offsetof(UIScrollVertical_obj,_delta),HX_CSTRING("_delta")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(UIScrollVertical_obj,_startMouse),HX_CSTRING("_startMouse")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(UIScrollVertical_obj,_lastMouse),HX_CSTRING("_lastMouse")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(UIScrollVertical_obj,_startSlider),HX_CSTRING("_startSlider")},
	{hx::fsFloat,(int)offsetof(UIScrollVertical_obj,_endSlider),HX_CSTRING("_endSlider")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UIScrollVertical_obj,_slider),HX_CSTRING("_slider")},
	{hx::fsFloat,(int)offsetof(UIScrollVertical_obj,_sliderPosition),HX_CSTRING("_sliderPosition")},
	{hx::fsObject /*::com::danielfreeman::AnimationTimer*/ ,(int)offsetof(UIScrollVertical_obj,_touchTimer),HX_CSTRING("_touchTimer")},
	{hx::fsObject /*::com::danielfreeman::AnimationTimer*/ ,(int)offsetof(UIScrollVertical_obj,_moveTimer),HX_CSTRING("_moveTimer")},
	{hx::fsObject /*::com::danielfreeman::AnimationTimer*/ ,(int)offsetof(UIScrollVertical_obj,_dragTimer),HX_CSTRING("_dragTimer")},
	{hx::fsObject /*::openfl::utils::Timer*/ ,(int)offsetof(UIScrollVertical_obj,_clickTimer),HX_CSTRING("_clickTimer")},
	{hx::fsFloat,(int)offsetof(UIScrollVertical_obj,_distance),HX_CSTRING("_distance")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(UIScrollVertical_obj,_pressButton),HX_CSTRING("_pressButton")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(UIScrollVertical_obj,_searchHitChild),HX_CSTRING("_searchHitChild")},
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(UIScrollVertical_obj,_scrollBarLayer),HX_CSTRING("_scrollBarLayer")},
	{hx::fsFloat,(int)offsetof(UIScrollVertical_obj,_width),HX_CSTRING("_width")},
	{hx::fsFloat,(int)offsetof(UIScrollVertical_obj,_height),HX_CSTRING("_height")},
	{hx::fsInt,(int)offsetof(UIScrollVertical_obj,_colour),HX_CSTRING("_colour")},
	{hx::fsInt,(int)offsetof(UIScrollVertical_obj,_scrollBarColour),HX_CSTRING("_scrollBarColour")},
	{hx::fsBool,(int)offsetof(UIScrollVertical_obj,_noScroll),HX_CSTRING("_noScroll")},
	{hx::fsFloat,(int)offsetof(UIScrollVertical_obj,_deltaThreshold),HX_CSTRING("_deltaThreshold")},
	{hx::fsBool,(int)offsetof(UIScrollVertical_obj,_listClickable),HX_CSTRING("_listClickable")},
	{hx::fsBool,(int)offsetof(UIScrollVertical_obj,_autoLayout),HX_CSTRING("_autoLayout")},
	{hx::fsFloat,(int)offsetof(UIScrollVertical_obj,_offset),HX_CSTRING("_offset")},
	{hx::fsBool,(int)offsetof(UIScrollVertical_obj,_scrollBarVisible),HX_CSTRING("_scrollBarVisible")},
	{hx::fsFloat,(int)offsetof(UIScrollVertical_obj,_scrollerWidth),HX_CSTRING("_scrollerWidth")},
	{hx::fsFloat,(int)offsetof(UIScrollVertical_obj,_scrollerHeight),HX_CSTRING("_scrollerHeight")},
	{hx::fsString,(int)offsetof(UIScrollVertical_obj,_border),HX_CSTRING("_border")},
	{hx::fsFloat,(int)offsetof(UIScrollVertical_obj,_scale),HX_CSTRING("_scale")},
	{hx::fsFloat,(int)offsetof(UIScrollVertical_obj,_dampen),HX_CSTRING("_dampen")},
	{hx::fsBool,(int)offsetof(UIScrollVertical_obj,_classic),HX_CSTRING("_classic")},
	{hx::fsBool,(int)offsetof(UIScrollVertical_obj,_autoScrollEnabled),HX_CSTRING("_autoScrollEnabled")},
	{hx::fsBool,(int)offsetof(UIScrollVertical_obj,_alwaysScrollBar),HX_CSTRING("_alwaysScrollBar")},
	{hx::fsInt,(int)offsetof(UIScrollVertical_obj,_noSwipeCount),HX_CSTRING("_noSwipeCount")},
	{hx::fsInt,(int)offsetof(UIScrollVertical_obj,_profile),HX_CSTRING("_profile")},
	{hx::fsFloat,(int)offsetof(UIScrollVertical_obj,_actualDeltaY),HX_CSTRING("_actualDeltaY")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_maximumSlide"),
	HX_CSTRING("_delta"),
	HX_CSTRING("_startMouse"),
	HX_CSTRING("_lastMouse"),
	HX_CSTRING("_startSlider"),
	HX_CSTRING("_endSlider"),
	HX_CSTRING("_slider"),
	HX_CSTRING("_sliderPosition"),
	HX_CSTRING("_touchTimer"),
	HX_CSTRING("_moveTimer"),
	HX_CSTRING("_dragTimer"),
	HX_CSTRING("_clickTimer"),
	HX_CSTRING("_distance"),
	HX_CSTRING("_pressButton"),
	HX_CSTRING("_searchHitChild"),
	HX_CSTRING("_scrollBarLayer"),
	HX_CSTRING("_width"),
	HX_CSTRING("_height"),
	HX_CSTRING("_colour"),
	HX_CSTRING("_scrollBarColour"),
	HX_CSTRING("_noScroll"),
	HX_CSTRING("_deltaThreshold"),
	HX_CSTRING("_listClickable"),
	HX_CSTRING("_autoLayout"),
	HX_CSTRING("_offset"),
	HX_CSTRING("_scrollBarVisible"),
	HX_CSTRING("_scrollerWidth"),
	HX_CSTRING("_scrollerHeight"),
	HX_CSTRING("_border"),
	HX_CSTRING("_scale"),
	HX_CSTRING("_dampen"),
	HX_CSTRING("_classic"),
	HX_CSTRING("_autoScrollEnabled"),
	HX_CSTRING("_alwaysScrollBar"),
	HX_CSTRING("_noSwipeCount"),
	HX_CSTRING("_profile"),
	HX_CSTRING("_actualDeltaY"),
	HX_CSTRING("set_dampen"),
	HX_CSTRING("addListeners"),
	HX_CSTRING("removeListeners"),
	HX_CSTRING("deltaToDecay"),
	HX_CSTRING("set_scrollEnabled"),
	HX_CSTRING("get_scrollEnabled"),
	HX_CSTRING("drawComponent"),
	HX_CSTRING("get_pages"),
	HX_CSTRING("get_xml"),
	HX_CSTRING("layout"),
	HX_CSTRING("rowRectangle"),
	HX_CSTRING("adjustVerticalSlide"),
	HX_CSTRING("adjustMaximumSlide"),
	HX_CSTRING("doLayoutHandler"),
	HX_CSTRING("get_maximumSlide"),
	HX_CSTRING("doLayout"),
	HX_CSTRING("set_xml"),
	HX_CSTRING("createSlider"),
	HX_CSTRING("sliderAttributes"),
	HX_CSTRING("androidMouseDisable"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("touchCancel"),
	HX_CSTRING("stopScrolling"),
	HX_CSTRING("handleFlick"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("mouseMove"),
	HX_CSTRING("mouseDrag"),
	HX_CSTRING("startMovement"),
	HX_CSTRING("startMovement0"),
	HX_CSTRING("movement"),
	HX_CSTRING("stopMovement"),
	HX_CSTRING("showScrollBar"),
	HX_CSTRING("getSliderHeight"),
	HX_CSTRING("drawScrollBar"),
	HX_CSTRING("hideScrollBar"),
	HX_CSTRING("doSearchHit"),
	HX_CSTRING("pressButton"),
	HX_CSTRING("clickUp"),
	HX_CSTRING("searchHit"),
	HX_CSTRING("searchHitChild"),
	HX_CSTRING("clear"),
	HX_CSTRING("findViewById"),
	HX_CSTRING("get_outsideSlideRange"),
	HX_CSTRING("set_sliderY"),
	HX_CSTRING("get_sliderY"),
	HX_CSTRING("set_sliderVisible"),
	HX_CSTRING("get_sliderVisible"),
	HX_CSTRING("set_scrollPositionY"),
	HX_CSTRING("sliderMoved"),
	HX_CSTRING("get_scrollPositionY"),
	HX_CSTRING("set_data"),
	HX_CSTRING("get_model"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::STARTED,"STARTED");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::STOPPED,"STOPPED");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::DELTA_THRESHOLD,"DELTA_THRESHOLD");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::THRESHOLD,"THRESHOLD");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::ABORT_THRESHOLD,"ABORT_THRESHOLD");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::PADDING,"PADDING");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::SCROLLBAR_POSITION,"SCROLLBAR_POSITION");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::SCROLLBAR_WIDTH,"SCROLLBAR_WIDTH");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::MAXIMUM_DY,"MAXIMUM_DY");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::FINISHED,"FINISHED");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::SMOOTH,"SMOOTH");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::MARGIN,"MARGIN");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::DELTA,"DELTA");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::DELTA_TOUCH,"DELTA_TOUCH");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::BOUNCE,"BOUNCE");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::CLICK_DURATION,"CLICK_DURATION");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::SLOW_DECAY,"SLOW_DECAY");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::FAST_DECAY,"FAST_DECAY");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::SLOW_DECAY_DELTA,"SLOW_DECAY_DELTA");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::FAST_DECAY_DELTA,"FAST_DECAY_DELTA");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::SPEED,"SPEED");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::FLICK_THRESHOLD,"FLICK_THRESHOLD");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::FLICK_FACTOR,"FLICK_FACTOR");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::MAXIMUM_TICKS,"MAXIMUM_TICKS");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::DAMPEN,"DAMPEN");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::NO_SWIPE_THRESHOLD,"NO_SWIPE_THRESHOLD");
	HX_MARK_MEMBER_NAME(UIScrollVertical_obj::TOUCH_DELAY,"TOUCH_DELAY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::STARTED,"STARTED");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::STOPPED,"STOPPED");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::DELTA_THRESHOLD,"DELTA_THRESHOLD");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::THRESHOLD,"THRESHOLD");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::ABORT_THRESHOLD,"ABORT_THRESHOLD");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::PADDING,"PADDING");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::SCROLLBAR_POSITION,"SCROLLBAR_POSITION");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::SCROLLBAR_WIDTH,"SCROLLBAR_WIDTH");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::MAXIMUM_DY,"MAXIMUM_DY");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::FINISHED,"FINISHED");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::SMOOTH,"SMOOTH");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::MARGIN,"MARGIN");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::DELTA,"DELTA");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::DELTA_TOUCH,"DELTA_TOUCH");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::BOUNCE,"BOUNCE");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::CLICK_DURATION,"CLICK_DURATION");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::SLOW_DECAY,"SLOW_DECAY");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::FAST_DECAY,"FAST_DECAY");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::SLOW_DECAY_DELTA,"SLOW_DECAY_DELTA");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::FAST_DECAY_DELTA,"FAST_DECAY_DELTA");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::SPEED,"SPEED");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::FLICK_THRESHOLD,"FLICK_THRESHOLD");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::FLICK_FACTOR,"FLICK_FACTOR");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::MAXIMUM_TICKS,"MAXIMUM_TICKS");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::DAMPEN,"DAMPEN");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::NO_SWIPE_THRESHOLD,"NO_SWIPE_THRESHOLD");
	HX_VISIT_MEMBER_NAME(UIScrollVertical_obj::TOUCH_DELAY,"TOUCH_DELAY");
};

#endif

Class UIScrollVertical_obj::__mClass;

void UIScrollVertical_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIScrollVertical"), hx::TCanCast< UIScrollVertical_obj> ,sStaticFields,sMemberFields,
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

void UIScrollVertical_obj::__boot()
{
	STARTED= HX_CSTRING("scrollStarted");
	STOPPED= HX_CSTRING("scrollStopped");
	DELTA_THRESHOLD= 2.0;
	THRESHOLD= 8.0;
	ABORT_THRESHOLD= 8.0;
	PADDING= 10.0;
	SCROLLBAR_POSITION= 2.0;
	SCROLLBAR_WIDTH= 5.0;
	MAXIMUM_DY= 2048.0;
	FINISHED= (int)-99999;
	SMOOTH= 0.5;
	MARGIN= 6.0;
	DELTA= (int)10;
	DELTA_TOUCH= (int)10;
	BOUNCE= 0.5;
	CLICK_DURATION= (int)167;
	SLOW_DECAY= Array_obj< Float >::__new().Add(0.85).Add(0.96);
	FAST_DECAY= Array_obj< Float >::__new().Add(0.99).Add(0.99);
	SLOW_DECAY_DELTA= Array_obj< Float >::__new().Add(0.0).Add(0.40);
	FAST_DECAY_DELTA= Array_obj< Float >::__new().Add(150.0).Add((int)100);
	SPEED= (int)1;
	FLICK_THRESHOLD= 10.0;
	FLICK_FACTOR= 4.0;
	MAXIMUM_TICKS= (int)3;
	DAMPEN= 0.3;
	NO_SWIPE_THRESHOLD= (int)1;
	TOUCH_DELAY= (int)8;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
