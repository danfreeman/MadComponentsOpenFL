#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED__MadXML_AttribAccess
#include <_MadXML/AttribAccess.h>
#endif
#ifndef INCLUDED__MadXML_HasAttribAccess
#include <_MadXML/HasAttribAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIScrollDataGrid
#include <com/danielfreeman/extendedmadness/UIScrollDataGrid.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIScrollDataGrids
#include <com/danielfreeman/extendedmadness/UIScrollDataGrids.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIScrollTouchGrids
#include <com/danielfreeman/extendedmadness/UIScrollTouchGrids.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIScrollXY
#include <com/danielfreeman/extendedmadness/UIScrollXY.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UISimpleDataGrid
#include <com/danielfreeman/extendedmadness/UISimpleDataGrid.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UI
#include <com/danielfreeman/madcomponents/UI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical
#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
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
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_Timer
#include <openfl/utils/Timer.h>
#endif
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void UIScrollTouchGrids_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","new",0xb140b4cd,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.new","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",84,0xff6da6a0)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(159)
	this->_pageButtonTarget = null();
	HX_STACK_LINE(158)
	this->_downButtonArrow = null();
	HX_STACK_LINE(157)
	this->_upButtonArrow = null();
	HX_STACK_LINE(156)
	this->_downButton = null();
	HX_STACK_LINE(155)
	this->_upButton = null();
	HX_STACK_LINE(154)
	this->_longClickDispatched = false;
	HX_STACK_LINE(153)
	this->_timer = ::openfl::utils::Timer_obj::__new((int)400,(int)1);
	HX_STACK_LINE(150)
	this->_editButtonMoved = false;
	HX_STACK_LINE(148)
	this->_editButtonMouseDown = false;
	HX_STACK_LINE(146)
	this->_editButtonColour = (int)13408614;
	HX_STACK_LINE(145)
	this->_editButton = null();
	HX_STACK_LINE(142)
	this->_rowSelect = false;
	HX_STACK_LINE(141)
	this->_mouseDistanceY = (int)0;
	HX_STACK_LINE(140)
	this->_mouseDistanceX = (int)0;
	HX_STACK_LINE(139)
	this->_mouseDistance = (int)0;
	HX_STACK_LINE(138)
	this->_lastMousePoint = ::openfl::geom::Point_obj::__new((int)0,(int)0);
	HX_STACK_LINE(135)
	this->_highlightedDataGrid = null();
	HX_STACK_LINE(134)
	this->_highlightedRowIndex = (int)-1;
	HX_STACK_LINE(133)
	this->_rowSelectColour = (int)11184895;
	HX_STACK_LINE(132)
	this->_slideTimer = ::openfl::utils::Timer_obj::__new((int)20,(int)4);
	HX_STACK_LINE(131)
	this->_clickDelay = ::openfl::utils::Timer_obj::__new((int)150,(int)1);
	HX_STACK_LINE(164)
	bool _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(164)
	if ((xml->has->resolve(HX_CSTRING("alt")))){
		HX_STACK_LINE(164)
		::String _g = xml->att->resolve(HX_CSTRING("alt"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(164)
		_g1 = (_g == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(164)
		_g1 = false;
	}
	HX_STACK_LINE(164)
	this->_alt = _g1;
	HX_STACK_LINE(165)
	bool _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(165)
	if ((xml->has->resolve(HX_CSTRING("showPressed")))){
		HX_STACK_LINE(165)
		::String _g2 = xml->att->resolve(HX_CSTRING("showPressed"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(165)
		_g3 = (_g2 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(165)
		_g3 = false;
	}
	HX_STACK_LINE(165)
	this->_showPressed = _g3;
	HX_STACK_LINE(166)
	::openfl::display::Shape _g4 = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(166)
	this->_temporaryRowHighlight = _g4;
	HX_STACK_LINE(167)
	this->_temporaryRowHighlight->set_blendMode(::openfl::display::BlendMode_obj::MULTIPLY);
	HX_STACK_LINE(168)
	::openfl::display::Sprite _g5 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(168)
	this->_editButtonLayer = _g5;
	HX_STACK_LINE(169)
	super::__construct(screen,xml,attributes);
	HX_STACK_LINE(170)
	this->addChild(this->_temporaryRowHighlight);
	HX_STACK_LINE(171)
	this->addChild(this->_editButtonLayer);
	HX_STACK_LINE(172)
	int _g6 = this->getChildIndex(this->_titleSlider);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(172)
	int _g7 = (_g6 - (int)1);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(172)
	this->setChildIndex(this->_temporaryRowHighlight,_g7);
	HX_STACK_LINE(173)
	int _g8 = this->get_numChildren();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(173)
	int _g9 = (_g8 - (int)1);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(173)
	this->setChildIndex(this->_editButtonLayer,_g9);
	HX_STACK_LINE(174)
	this->_clickDelay->addEventListener(::openfl::events::TimerEvent_obj::TIMER_COMPLETE,this->timerComplete_dyn(),null(),null(),null());
	HX_STACK_LINE(175)
	this->_slideTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->slideMovement_dyn(),null(),null(),null());
	HX_STACK_LINE(176)
	this->_originalNoScroll = this->_noScroll;
	HX_STACK_LINE(177)
	if ((xml->has->resolve(HX_CSTRING("editButtonColour")))){
		HX_STACK_LINE(178)
		::String _g10 = xml->att->resolve(HX_CSTRING("editButtonColour"));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(178)
		int _g11 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(178)
		this->_editButtonColour = _g11;
	}
	struct _Function_1_1{
		inline static bool Block( ::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",180,0xff6da6a0)
			{
				HX_STACK_LINE(180)
				::String _g12 = xml->att->resolve(HX_CSTRING("editButton"));		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(180)
				return (_g12 == HX_CSTRING("true"));
			}
			return null();
		}
	};
	HX_STACK_LINE(180)
	if (((  ((xml->has->resolve(HX_CSTRING("editButton")))) ? bool(_Function_1_1::Block(xml)) : bool(false) ))){
		HX_STACK_LINE(181)
		this->createEditButton();
	}
	HX_STACK_LINE(183)
	this->_scrollBarThreshold = 99999.9;
	struct _Function_1_2{
		inline static bool Block( ::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",184,0xff6da6a0)
			{
				HX_STACK_LINE(184)
				::String _g13 = xml->att->resolve(HX_CSTRING("longClickEnabled"));		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(184)
				return (_g13 == HX_CSTRING("true"));
			}
			return null();
		}
	};
	HX_STACK_LINE(184)
	if (((  ((xml->has->resolve(HX_CSTRING("longClickEnabled")))) ? bool(_Function_1_2::Block(xml)) : bool(false) ))){
		HX_STACK_LINE(185)
		this->_timer->addEventListener(::openfl::events::TimerEvent_obj::TIMER_COMPLETE,this->longClick_dyn(),null(),null(),null());
	}
	struct _Function_1_3{
		inline static bool Block( ::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",187,0xff6da6a0)
			{
				HX_STACK_LINE(187)
				::String _g14 = xml->att->resolve(HX_CSTRING("pageButtons"));		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(187)
				return (_g14 == HX_CSTRING("true"));
			}
			return null();
		}
	};
	HX_STACK_LINE(187)
	if (((  ((xml->has->resolve(HX_CSTRING("pageButtons")))) ? bool(_Function_1_3::Block(xml)) : bool(false) ))){
		HX_STACK_LINE(188)
		::openfl::display::Sprite _g15 = this->pageButton(null(),true,true,null());		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(188)
		this->_upButtonArrow = _g15;
		HX_STACK_LINE(189)
		::openfl::display::Sprite _g16 = this->pageButton(null(),false,true,null());		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(189)
		this->_downButtonArrow = _g16;
		HX_STACK_LINE(190)
		::openfl::display::Sprite _g17 = this->pageButton(null(),true,null(),null());		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(190)
		this->_upButton = _g17;
		HX_STACK_LINE(191)
		::openfl::display::Sprite _g18 = this->pageButton(null(),false,null(),null());		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(191)
		this->_downButton = _g18;
		HX_STACK_LINE(192)
		this->positionPageButtons();
	}
}
;
	return null();
}

//UIScrollTouchGrids_obj::~UIScrollTouchGrids_obj() { }

Dynamic UIScrollTouchGrids_obj::__CreateEmpty() { return  new UIScrollTouchGrids_obj; }
hx::ObjectPtr< UIScrollTouchGrids_obj > UIScrollTouchGrids_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIScrollTouchGrids_obj > result = new UIScrollTouchGrids_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIScrollTouchGrids_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIScrollTouchGrids_obj > result = new UIScrollTouchGrids_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool UIScrollTouchGrids_obj::set_showPressed( bool value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","set_showPressed",0x58d7f7b5,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.set_showPressed","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",197,0xff6da6a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(198)
	this->_showPressed = value;
	HX_STACK_LINE(199)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollTouchGrids_obj,set_showPressed,return )

bool UIScrollTouchGrids_obj::set_pageUpVisible( bool value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","set_pageUpVisible",0x4e821b98,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.set_pageUpVisible","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",203,0xff6da6a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(204)
	bool _g = this->_upButtonArrow->set_visible(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(204)
	this->_upButton->set_visible(_g);
	HX_STACK_LINE(205)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollTouchGrids_obj,set_pageUpVisible,return )

bool UIScrollTouchGrids_obj::set_pageDownVisible( bool value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","set_pageDownVisible",0x99e13ab1,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.set_pageDownVisible","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",209,0xff6da6a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(210)
	bool _g = this->_downButtonArrow->set_visible(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(210)
	this->_downButton->set_visible(_g);
	HX_STACK_LINE(211)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollTouchGrids_obj,set_pageDownVisible,return )

::openfl::display::Sprite UIScrollTouchGrids_obj::pageButton( ::openfl::display::Sprite result,bool up,hx::Null< bool >  __o_justArrow,hx::Null< bool >  __o_highlight){
bool justArrow = __o_justArrow.Default(false);
bool highlight = __o_highlight.Default(false);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","pageButton",0x547808d4,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.pageButton","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",215,0xff6da6a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(result,"result")
	HX_STACK_ARG(up,"up")
	HX_STACK_ARG(justArrow,"justArrow")
	HX_STACK_ARG(highlight,"highlight")
{
		HX_STACK_LINE(216)
		if (((result == null()))){
			HX_STACK_LINE(217)
			::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(217)
			result = _g;
			HX_STACK_LINE(218)
			this->addChild(result);
		}
		HX_STACK_LINE(220)
		result->get_graphics()->clear();
		HX_STACK_LINE(221)
		if ((!(justArrow))){
			HX_STACK_LINE(222)
			result->get_graphics()->beginFill((int)3355443,null());
			HX_STACK_LINE(223)
			if ((highlight)){
				HX_STACK_LINE(224)
				result->get_graphics()->drawCircle((int)0,(int)0,40.0);
				HX_STACK_LINE(225)
				result->get_graphics()->drawCircle((int)0,(int)0,34.);
			}
			HX_STACK_LINE(227)
			result->get_graphics()->drawCircle((int)0,(int)0,30.0);
		}
		else{
			HX_STACK_LINE(230)
			result->get_graphics()->beginFill((int)3355443,null());
		}
		HX_STACK_LINE(232)
		Float arrow;		HX_STACK_VAR(arrow,"arrow");
		HX_STACK_LINE(232)
		if ((up)){
			HX_STACK_LINE(232)
			arrow = -20.;
		}
		else{
			HX_STACK_LINE(232)
			arrow = 20.0;
		}
		HX_STACK_LINE(234)
		result->get_graphics()->moveTo((int)0,(0.7 * arrow));
		HX_STACK_LINE(235)
		result->get_graphics()->lineTo(18.,(Float(-(arrow)) / Float((int)2)));
		HX_STACK_LINE(236)
		result->get_graphics()->lineTo(-18.,(Float(-(arrow)) / Float((int)2)));
		HX_STACK_LINE(237)
		result->get_graphics()->lineTo((int)0,(0.7 * arrow));
		HX_STACK_LINE(238)
		result->set_blendMode((  ((justArrow)) ? ::openfl::display::BlendMode(::openfl::display::BlendMode_obj::ADD) : ::openfl::display::BlendMode(::openfl::display::BlendMode_obj::SUBTRACT) ));
		HX_STACK_LINE(239)
		return result;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(UIScrollTouchGrids_obj,pageButton,return )

Void UIScrollTouchGrids_obj::resetPageButtons( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","resetPageButtons",0xd56cc596,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.resetPageButtons","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",243,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(244)
		this->pageButton(this->_upButton,true,null(),null());
		HX_STACK_LINE(245)
		this->pageButton(this->_downButton,false,null(),null());
		HX_STACK_LINE(246)
		this->_pageButtonTarget = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollTouchGrids_obj,resetPageButtons,(void))

Void UIScrollTouchGrids_obj::createEditButton( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","createEditButton",0x425c5d2b,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.createEditButton","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",252,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(253)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(253)
		::openfl::display::Sprite _g1 = this->_editButton = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(253)
		this->_editButtonLayer->addChild(_g1);
		HX_STACK_LINE(254)
		this->makeEditButton();
		HX_STACK_LINE(255)
		this->_editButton->set_visible(false);
		HX_STACK_LINE(256)
		this->_editButton->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->editButtonMouseDown_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollTouchGrids_obj,createEditButton,(void))

bool UIScrollTouchGrids_obj::set_editButton( bool value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","set_editButton",0x105a7d0c,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.set_editButton","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",262,0xff6da6a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(263)
	if (((  (((bool(!(value)) && bool((this->_editButton != null()))))) ? bool(this->_editButtonLayer->contains(this->_editButton)) : bool(false) ))){
		HX_STACK_LINE(264)
		this->_editButtonLayer->removeChild(this->_editButton);
		HX_STACK_LINE(265)
		this->_editButton->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->editButtonMouseDown_dyn(),null());
		HX_STACK_LINE(266)
		this->_editButton = null();
	}
	else{
		HX_STACK_LINE(268)
		if (((bool(value) && bool((this->_editButton == null()))))){
			HX_STACK_LINE(269)
			this->createEditButton();
		}
	}
	HX_STACK_LINE(271)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollTouchGrids_obj,set_editButton,return )

Void UIScrollTouchGrids_obj::longClick( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","longClick",0xaf925959,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.longClick","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",278,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(278)
		if ((!(this->_editButtonMoved))){
			HX_STACK_LINE(279)
			::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("editButtonLongClick"),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(279)
			this->dispatchEvent(_g);
			HX_STACK_LINE(280)
			this->_longClickDispatched = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollTouchGrids_obj,longClick,(void))

Void UIScrollTouchGrids_obj::editButtonMouseDown( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","editButtonMouseDown",0x2fddc858,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.editButtonMouseDown","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",287,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(288)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->editButtonMouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(289)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->editButtonMouseMove_dyn(),null(),null(),null());
		HX_STACK_LINE(290)
		this->_editButtonMouseDown = true;
		HX_STACK_LINE(291)
		this->_editButtonMoved = false;
		HX_STACK_LINE(292)
		Float _g = this->get_mouseY();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(292)
		this->_lastMousePoint->y = _g;
		HX_STACK_LINE(293)
		this->_mouseDistanceY = (int)0;
		HX_STACK_LINE(294)
		::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(HX_CSTRING("editButtonMouseDown"),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(294)
		this->dispatchEvent(_g1);
		HX_STACK_LINE(295)
		this->_longClickDispatched = false;
		HX_STACK_LINE(296)
		this->_timer->reset();
		HX_STACK_LINE(297)
		this->_timer->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollTouchGrids_obj,editButtonMouseDown,(void))

Void UIScrollTouchGrids_obj::editButtonMouseMove( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","editButtonMouseMove",0x35d0b307,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.editButtonMouseMove","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",304,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(304)
		if ((!(this->_longClickDispatched))){
			HX_STACK_LINE(305)
			Float _g = this->get_mouseY();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(305)
			Float _g1 = (this->_lastMousePoint->y - _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(305)
			Float _g2 = ::Math_obj::abs(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(305)
			hx::AddEq(this->_mouseDistanceY,_g2);
			HX_STACK_LINE(306)
			Float _g3 = this->get_mouseY();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(306)
			this->_lastMousePoint->y = _g3;
			HX_STACK_LINE(307)
			if (((  (((this->_mouseDistanceY > 20.0))) ? bool(this->rowSelectHandler()) : bool(false) ))){
				HX_STACK_LINE(308)
				this->setHighlightRow(true);
				HX_STACK_LINE(309)
				this->_editButtonMoved = true;
				HX_STACK_LINE(310)
				this->dispatchRowSelected();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollTouchGrids_obj,editButtonMouseMove,(void))

Void UIScrollTouchGrids_obj::editButtonMouseUp( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","editButtonMouseUp",0x70d92cd1,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.editButtonMouseUp","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",318,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(319)
		this->_timer->stop();
		HX_STACK_LINE(320)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->editButtonMouseUp_dyn(),null());
		HX_STACK_LINE(321)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->editButtonMouseMove_dyn(),null());
		HX_STACK_LINE(322)
		this->_editButtonMouseDown = false;
		HX_STACK_LINE(323)
		if ((this->_longClickDispatched)){
			HX_STACK_LINE(324)
			::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("editButtonLongClickEnd"),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(324)
			this->dispatchEvent(_g);
		}
		else{
			HX_STACK_LINE(326)
			if ((this->_editButtonMoved)){
				HX_STACK_LINE(327)
				::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(HX_CSTRING("rowSelected"),null(),null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(327)
				this->dispatchEvent(_g1);
			}
			else{
				HX_STACK_LINE(330)
				::openfl::events::Event _g2 = ::openfl::events::Event_obj::__new(HX_CSTRING("editButtonMouseUp"),null(),null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(330)
				this->dispatchEvent(_g2);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollTouchGrids_obj,editButtonMouseUp,(void))

Void UIScrollTouchGrids_obj::slideEditButton( hx::Null< bool >  __o_direction){
bool direction = __o_direction.Default(true);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","slideEditButton",0x4c89a81a,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.slideEditButton","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",337,0xff6da6a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(direction,"direction")
{
		HX_STACK_LINE(338)
		if (((this->_editButton == null()))){
			HX_STACK_LINE(339)
			return null();
		}
		HX_STACK_LINE(341)
		if ((!(this->_slideTimer->running))){
			HX_STACK_LINE(342)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(342)
			if ((!(direction))){
				HX_STACK_LINE(342)
				Float _g = this->_editButton->get_width();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(342)
				_g1 = (this->_attributes->width - _g);
			}
			else{
				HX_STACK_LINE(342)
				_g1 = this->_attributes->width;
			}
			HX_STACK_LINE(342)
			this->_editButton->set_x(_g1);
		}
		HX_STACK_LINE(344)
		Float fromX;		HX_STACK_VAR(fromX,"fromX");
		HX_STACK_LINE(344)
		if ((this->_slideTimer->running)){
			HX_STACK_LINE(344)
			fromX = this->_editButton->get_x();
		}
		else{
			HX_STACK_LINE(344)
			fromX = this->_attributes->width;
		}
		HX_STACK_LINE(345)
		Float _g2 = this->_editButton->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(345)
		Float toX = (this->_attributes->width - _g2);		HX_STACK_VAR(toX,"toX");
		HX_STACK_LINE(346)
		this->_deltaEditButtonX = (Float((((  ((direction)) ? Float(1.0) : Float(-1.0) )) * ((toX - fromX)))) / Float((int)4));
		HX_STACK_LINE(347)
		this->_slideTimer->stop();
		HX_STACK_LINE(348)
		this->_slideTimer->reset();
		HX_STACK_LINE(349)
		this->_slideTimer->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollTouchGrids_obj,slideEditButton,(void))

Void UIScrollTouchGrids_obj::slideMovement( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","slideMovement",0xa3d8ae2d,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.slideMovement","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",354,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(354)
		::openfl::display::Sprite _g = this->_editButton;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(354)
		Float _g1 = _g->get_x();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(354)
		Float _g11 = (_g1 + this->_deltaEditButtonX);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(354)
		_g->set_x(_g11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollTouchGrids_obj,slideMovement,(void))

int UIScrollTouchGrids_obj::set_rowSelectColour( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","set_rowSelectColour",0x99ecba32,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.set_rowSelectColour","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",360,0xff6da6a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(361)
	this->_rowSelectColour = value;
	HX_STACK_LINE(362)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollTouchGrids_obj,set_rowSelectColour,return )

bool UIScrollTouchGrids_obj::set_scrollEnabled( bool value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","set_scrollEnabled",0x99acec84,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.set_scrollEnabled","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",368,0xff6da6a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(369)
	this->super::set_scrollEnabled(value);
	HX_STACK_LINE(370)
	this->_originalNoScroll = this->_noScroll;
	HX_STACK_LINE(371)
	return value;
}


::com::danielfreeman::extendedmadness::UISimpleDataGrid UIScrollTouchGrids_obj::yToDataGrid( Float y){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","yToDataGrid",0x250899f1,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.yToDataGrid","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",377,0xff6da6a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(378)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(379)
	while((true)){
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollTouchGrids_obj > __this,int &index,Float &y){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",379,0xff6da6a0)
				{
					HX_STACK_LINE(379)
					Float _g = __this->_dataGrids->__get((index + (int)1)).StaticCast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >()->get_y();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(379)
					return (y > _g);
				}
				return null();
			}
		};
		HX_STACK_LINE(379)
		if ((!(((  (((  ((((index + (int)1) < this->_dataGrids->length))) ? bool(this->_dataGrids->__get((index + (int)1)).StaticCast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >()->get_includeInLayout()) : bool(false) ))) ? bool(_Function_2_1::Block(this,index,y)) : bool(false) ))))){
			HX_STACK_LINE(379)
			break;
		}
		HX_STACK_LINE(380)
		(index)++;
	}
	HX_STACK_LINE(382)
	if (((index >= (int)0))){
		HX_STACK_LINE(382)
		return this->_dataGrids->__get(index).StaticCast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >();
	}
	else{
		HX_STACK_LINE(382)
		return null();
	}
	HX_STACK_LINE(382)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollTouchGrids_obj,yToDataGrid,return )

Void UIScrollTouchGrids_obj::temporaryRowHighlightDraw( ::com::danielfreeman::extendedmadness::UISimpleDataGrid highlightedDataGrid,int highlightedRowIndex,hx::Null< int >  __o_colour){
int colour = __o_colour.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","temporaryRowHighlightDraw",0x6564f3bc,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.temporaryRowHighlightDraw","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",386,0xff6da6a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(highlightedDataGrid,"highlightedDataGrid")
	HX_STACK_ARG(highlightedRowIndex,"highlightedRowIndex")
	HX_STACK_ARG(colour,"colour")
{
		HX_STACK_LINE(387)
		this->_temporaryRowHighlight->get_graphics()->clear();
		struct _Function_1_1{
			inline static bool Block( ::com::danielfreeman::extendedmadness::UISimpleDataGrid &highlightedDataGrid,int &highlightedRowIndex){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",388,0xff6da6a0)
				{
					HX_STACK_LINE(388)
					int _g = highlightedDataGrid->get_numberOfRows();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(388)
					return (highlightedRowIndex < _g);
				}
				return null();
			}
		};
		HX_STACK_LINE(388)
		if (((  (((bool(this->_showPressed) && bool((highlightedRowIndex >= (int)0))))) ? bool(_Function_1_1::Block(highlightedDataGrid,highlightedRowIndex)) : bool(false) ))){
			HX_STACK_LINE(389)
			this->_temporaryRowHighlight->set_visible(true);
			HX_STACK_LINE(390)
			this->_temporaryRowHighlight->get_graphics()->beginFill((  (((colour >= (int)0))) ? int(colour) : int(this->_rowSelectColour) ),null());
			HX_STACK_LINE(391)
			Float _g1 = highlightedDataGrid->get_y();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(391)
			Float _g2 = highlightedDataGrid->rowPosition(highlightedRowIndex);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(391)
			Float _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(391)
			int _g4 = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(391)
			Float _g5 = ::com::danielfreeman::madcomponents::UI_obj::get_scale();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(391)
			Float _g6 = (_g4 * _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(391)
			Float _g7 = highlightedDataGrid->rowHeight(highlightedRowIndex);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(391)
			this->_temporaryRowHighlight->get_graphics()->drawRect((int)0,_g3,_g6,_g7);
			HX_STACK_LINE(392)
			this->_temporaryRowHighlight->get_graphics()->endFill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(UIScrollTouchGrids_obj,temporaryRowHighlightDraw,(void))

Void UIScrollTouchGrids_obj::temporaryRowHighlight( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","temporaryRowHighlight",0xbb0fef98,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.temporaryRowHighlight","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",397,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(398)
		Float _g = this->_slider->get_mouseY();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(398)
		::com::danielfreeman::extendedmadness::UISimpleDataGrid highlightedDataGrid = this->yToDataGrid(_g);		HX_STACK_VAR(highlightedDataGrid,"highlightedDataGrid");
		HX_STACK_LINE(399)
		int highlightedRowIndex;		HX_STACK_VAR(highlightedRowIndex,"highlightedRowIndex");
		HX_STACK_LINE(399)
		if (((highlightedDataGrid != null()))){
			HX_STACK_LINE(399)
			Float _g1 = highlightedDataGrid->get_mouseY();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(399)
			highlightedRowIndex = highlightedDataGrid->yToRow(_g1);
		}
		else{
			HX_STACK_LINE(399)
			highlightedRowIndex = (int)-1;
		}
		struct _Function_1_1{
			inline static Dynamic Block( int &highlightedRowIndex){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",400,0xff6da6a0)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UIScrollTouchGrids.hx"),false);
					__result->Add(HX_CSTRING("lineNumber") , (int)400,false);
					__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.extendedmadness.UIScrollTouchGrids"),false);
					__result->Add(HX_CSTRING("methodName") , HX_CSTRING("temporaryRowHighlight"),false);
					__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(highlightedRowIndex)),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(400)
		::haxe::Log_obj::trace(highlightedDataGrid,_Function_1_1::Block(highlightedRowIndex));
		HX_STACK_LINE(401)
		this->temporaryRowHighlightDraw(highlightedDataGrid,highlightedRowIndex,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollTouchGrids_obj,temporaryRowHighlight,(void))

Float UIScrollTouchGrids_obj::set_sliderX( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","set_sliderX",0x73ca97a7,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.set_sliderX","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",405,0xff6da6a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(406)
	this->super::set_sliderX(value);
	HX_STACK_LINE(407)
	return value;
}


Float UIScrollTouchGrids_obj::set_sliderY( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","set_sliderY",0x73ca97a8,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.set_sliderY","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",411,0xff6da6a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(412)
	this->super::set_sliderY(value);
	HX_STACK_LINE(413)
	Float _g = this->_temporaryRowHighlight->set_y(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(413)
	this->_editButtonLayer->set_y(_g);
	HX_STACK_LINE(414)
	return value;
}


Void UIScrollTouchGrids_obj::temporaryRowClear( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","temporaryRowClear",0x800188f1,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.temporaryRowClear","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",418,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(419)
		this->_temporaryRowHighlight->set_visible(false);
		HX_STACK_LINE(420)
		if (((this->_editButton != null()))){
			HX_STACK_LINE(421)
			this->_editButton->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollTouchGrids_obj,temporaryRowClear,(void))

Void UIScrollTouchGrids_obj::buttonShape( Float x,Float y,Float buttonWidth,Float height){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","buttonShape",0x19023d3c,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.buttonShape","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",428,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(buttonWidth,"buttonWidth")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(429)
		Float quotient = 0.5;		HX_STACK_VAR(quotient,"quotient");
		HX_STACK_LINE(430)
		this->_editButton->get_graphics()->moveTo(x,(y + 18.));
		HX_STACK_LINE(431)
		this->_editButton->get_graphics()->lineTo((x + (quotient * 10.0)),(y + (Float(((((int)1 - quotient)) * 36.0)) / Float((int)2))));
		HX_STACK_LINE(432)
		this->_editButton->get_graphics()->curveTo((x + 10.0),y,(x + 15.),y);
		HX_STACK_LINE(433)
		this->_editButton->get_graphics()->lineTo((x + buttonWidth),y);
		HX_STACK_LINE(434)
		this->_editButton->get_graphics()->lineTo((x + buttonWidth),(y + height));
		HX_STACK_LINE(435)
		this->_editButton->get_graphics()->lineTo((x + 15.),(y + height));
		HX_STACK_LINE(436)
		this->_editButton->get_graphics()->curveTo((x + 10.0),(y + height),(x + (quotient * 10.0)),((y + height) - (Float(((((int)1 - quotient)) * 36.0)) / Float((int)2))));
		HX_STACK_LINE(437)
		this->_editButton->get_graphics()->lineTo(x,(y + 18.));
		HX_STACK_LINE(438)
		bool _g = this->_editButton->useHandCursor = true;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(438)
		this->_editButton->buttonMode = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(UIScrollTouchGrids_obj,buttonShape,(void))

Void UIScrollTouchGrids_obj::makeEditButton( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","makeEditButton",0x15753fdd,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.makeEditButton","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",444,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(445)
		this->_editButton->get_graphics()->clear();
		HX_STACK_LINE(446)
		::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(447)
		this->_editButton->get_graphics()->beginFill((int)0,(int)0);
		HX_STACK_LINE(448)
		this->_editButton->get_graphics()->drawRect((int)0,(int)0,40.0,76.);
		HX_STACK_LINE(449)
		matr->createGradientBox(40.0,36.0,(Float(::Math_obj::PI) / Float((int)2)),(int)0,20.0);
		HX_STACK_LINE(450)
		int _g = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_editButtonColour,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(450)
		this->_editButton->get_graphics()->beginFill(_g,null());
		HX_STACK_LINE(451)
		this->buttonShape(0.0,20.0,40.0,36.0);
		HX_STACK_LINE(452)
		this->_editButton->get_graphics()->endFill();
		HX_STACK_LINE(453)
		int _g1 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_editButtonColour,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(453)
		int _g2 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_editButtonColour,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(453)
		int _g3 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_editButtonColour,null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(453)
		Dynamic _g4 = Dynamic( Array_obj<Dynamic>::__new().Add(_g1).Add(_g2).Add(_g3));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(453)
		this->_editButton->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,_g4,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)128).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(454)
		this->buttonShape(1.0,21.,39.,34.5);
		HX_STACK_LINE(455)
		this->_editButton->get_graphics()->endFill();
		HX_STACK_LINE(456)
		int _g5 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_editButtonColour,null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(456)
		int _g6 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_editButtonColour,null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(456)
		int _g7 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_editButtonColour,null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(456)
		Dynamic _g8 = Dynamic( Array_obj<Dynamic>::__new().Add(_g5).Add(_g6).Add(_g7));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(456)
		this->_editButton->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,_g8,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)128).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(457)
		this->_editButton->get_graphics()->drawCircle(22.5,38.,12.0);
		HX_STACK_LINE(458)
		this->_editButton->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollTouchGrids_obj,makeEditButton,(void))

Void UIScrollTouchGrids_obj::clearHighlightRow( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","clearHighlightRow",0xbca662a0,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.clearHighlightRow","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",462,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(463)
		this->temporaryRowClear();
		HX_STACK_LINE(464)
		this->_highlightedRowIndex = (int)-1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollTouchGrids_obj,clearHighlightRow,(void))

Void UIScrollTouchGrids_obj::setHighlightRow( hx::Null< bool >  __o_slidein){
bool slidein = __o_slidein.Default(false);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","setHighlightRow",0xd25542f5,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.setHighlightRow","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",469,0xff6da6a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(slidein,"slidein")
{
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollTouchGrids_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",469,0xff6da6a0)
				{
					HX_STACK_LINE(469)
					int _g = __this->_highlightedDataGrid->get_numberOfRows();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(469)
					return (__this->_highlightedRowIndex < _g);
				}
				return null();
			}
		};
		HX_STACK_LINE(469)
		if (((  (((bool((this->_highlightedDataGrid != null())) && bool((this->_highlightedRowIndex >= (int)0))))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollTouchGrids_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",470,0xff6da6a0)
					{
						HX_STACK_LINE(470)
						return (  ((!((!(__this->_highlightedDataGrid->get_hasHeader()))))) ? bool((__this->_highlightedRowIndex > (int)0)) : bool(true) );
					}
					return null();
				}
			};
			HX_STACK_LINE(470)
			if (((  (((this->_editButton != null()))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(471)
				Float _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(471)
				if ((slidein)){
					HX_STACK_LINE(471)
					_g1 = this->_editButton->get_width();
				}
				else{
					HX_STACK_LINE(471)
					_g1 = (int)0;
				}
				HX_STACK_LINE(471)
				Float _g2 = (this->_attributes->width - _g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(471)
				this->_editButton->set_x(_g2);
				HX_STACK_LINE(472)
				Float _g3 = this->_highlightedDataGrid->get_y();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(472)
				Float _g4 = this->_highlightedDataGrid->rowPosition(this->_highlightedRowIndex);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(472)
				Float _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(472)
				Float _g6 = this->_highlightedDataGrid->rowHeight(this->_highlightedRowIndex);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(472)
				Float _g7 = (Float(_g6) / Float((int)2));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(472)
				Float _g8 = (_g5 + _g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(472)
				Float _g9 = this->_editButton->get_height();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(472)
				Float _g10 = (Float(_g9) / Float((int)2));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(472)
				Float _g11 = (_g8 - _g10);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(472)
				this->_editButton->set_y(_g11);
				HX_STACK_LINE(473)
				this->_editButton->set_visible(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollTouchGrids_obj,setHighlightRow,(void))

Void UIScrollTouchGrids_obj::abortRowSelection( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","abortRowSelection",0xc5f8abcf,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.abortRowSelection","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",479,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(480)
		this->_noScroll = this->_originalNoScroll;
		HX_STACK_LINE(481)
		this->showScrollBar();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollTouchGrids_obj,abortRowSelection,(void))

Void UIScrollTouchGrids_obj::mouseMove( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","mouseMove",0xf1091003,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.mouseMove","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",485,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(486)
		if ((this->_editButtonMouseDown)){
			HX_STACK_LINE(487)
			return null();
		}
		HX_STACK_LINE(489)
		Float _g = this->get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(489)
		Float _g1 = (this->_lastMousePoint->x - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(489)
		Float deltaMoveX = ::Math_obj::abs(_g1);		HX_STACK_VAR(deltaMoveX,"deltaMoveX");
		HX_STACK_LINE(490)
		Float _g2 = this->get_mouseY();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(490)
		Float _g3 = (this->_lastMousePoint->y - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(490)
		Float deltaMoveY = ::Math_obj::abs(_g3);		HX_STACK_VAR(deltaMoveY,"deltaMoveY");
		HX_STACK_LINE(491)
		hx::AddEq(this->_mouseDistance,(deltaMoveX + deltaMoveY));
		HX_STACK_LINE(492)
		hx::AddEq(this->_mouseDistanceX,deltaMoveX);
		HX_STACK_LINE(493)
		hx::AddEq(this->_mouseDistanceY,deltaMoveY);
		HX_STACK_LINE(494)
		Float _g4 = this->get_mouseX();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(494)
		this->_lastMousePoint->x = _g4;
		HX_STACK_LINE(495)
		Float _g5 = this->get_mouseY();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(495)
		this->_lastMousePoint->y = _g5;
		HX_STACK_LINE(497)
		if (((this->_mouseDistance > 20.0))){
			HX_STACK_LINE(498)
			this->_headerClicked = false;
			HX_STACK_LINE(499)
			if (((this->_pageButtonTarget != null()))){
				HX_STACK_LINE(500)
				this->resetPageButtons();
			}
		}
		HX_STACK_LINE(504)
		this->super::mouseMove(event);
		HX_STACK_LINE(505)
		if ((this->_rowSelect)){
			HX_STACK_LINE(506)
			if ((this->_alt)){
				HX_STACK_LINE(507)
				if (((bool((bool((deltaMoveX > 64.0)) || bool((deltaMoveY > 128.0)))) || bool((bool((this->_mouseDistanceX > this->_mouseDistanceY)) && bool((this->_mouseDistanceX > 8.0))))))){
					HX_STACK_LINE(508)
					this->abortRowSelection();
				}
				else{
					HX_STACK_LINE(511)
					this->rowSelectHandler();
				}
			}
			else{
				HX_STACK_LINE(515)
				if (((bool((deltaMoveX > 64.0)) || bool((this->_mouseDistanceY > 16.0))))){
					HX_STACK_LINE(516)
					this->abortClick();
				}
			}
			HX_STACK_LINE(519)
			if (((bool(((hx::TCast< openfl::utils::Timer >::cast(event->get_currentTarget()))->currentCount == (int)64)) && bool((this->_mouseDistance < 16.))))){
				HX_STACK_LINE(520)
				::openfl::events::Event _g6 = ::openfl::events::Event_obj::__new(HX_CSTRING("longRowSelected"),null(),null());		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(520)
				this->dispatchEvent(_g6);
			}
		}
	}
return null();
}


Void UIScrollTouchGrids_obj::abortClick( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","abortClick",0xf7b3f5ab,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.abortClick","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",526,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(527)
		this->refreshHighlight();
		HX_STACK_LINE(528)
		this->abortRowSelection();
		HX_STACK_LINE(529)
		this->_rowSelect = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollTouchGrids_obj,abortClick,(void))

Void UIScrollTouchGrids_obj::confirmClick( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","confirmClick",0x6864d51b,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.confirmClick","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",533,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(534)
		this->rowSelectHandler();
		HX_STACK_LINE(535)
		if (((this->_highlightedDataGrid != null()))){
			HX_STACK_LINE(536)
			this->_clickedRowIndex = this->_highlightedRowIndex;
			HX_STACK_LINE(537)
			this->_dataGrid = this->_highlightedDataGrid;
		}
		HX_STACK_LINE(539)
		this->stopScrolling();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollTouchGrids_obj,confirmClick,(void))

bool UIScrollTouchGrids_obj::rowSelectHandler( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","rowSelectHandler",0x93431527,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.rowSelectHandler","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",543,0xff6da6a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(544)
	Float _g = this->_slider->get_mouseY();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(544)
	::com::danielfreeman::extendedmadness::UISimpleDataGrid highlightedDataGrid = this->yToDataGrid(_g);		HX_STACK_VAR(highlightedDataGrid,"highlightedDataGrid");
	HX_STACK_LINE(545)
	int highlightedRowIndex;		HX_STACK_VAR(highlightedRowIndex,"highlightedRowIndex");
	HX_STACK_LINE(545)
	if (((highlightedDataGrid != null()))){
		HX_STACK_LINE(545)
		Float _g1 = highlightedDataGrid->get_mouseY();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(545)
		highlightedRowIndex = highlightedDataGrid->yToRow(_g1);
	}
	else{
		HX_STACK_LINE(545)
		highlightedRowIndex = (int)-1;
	}
	HX_STACK_LINE(546)
	if (((bool((highlightedRowIndex >= (int)0)) && bool(((bool((highlightedDataGrid != this->_highlightedDataGrid)) || bool((highlightedRowIndex != this->_highlightedRowIndex)))))))){
		HX_STACK_LINE(547)
		this->temporaryRowHighlightDraw(highlightedDataGrid,highlightedRowIndex,null());
		HX_STACK_LINE(548)
		this->_highlightedDataGrid = highlightedDataGrid;
		HX_STACK_LINE(549)
		this->_highlightedRowIndex = highlightedRowIndex;
		HX_STACK_LINE(550)
		return true;
	}
	else{
		HX_STACK_LINE(553)
		return false;
	}
	HX_STACK_LINE(546)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollTouchGrids_obj,rowSelectHandler,return )

Void UIScrollTouchGrids_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","mouseDown",0xeb162554,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.mouseDown","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",560,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(561)
		this->_pageButtonTarget = null();
		HX_STACK_LINE(562)
		Dynamic _g = event->get_target();		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollTouchGrids_obj > __this,::openfl::events::MouseEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",562,0xff6da6a0)
				{
					HX_STACK_LINE(562)
					Dynamic _g1 = event->get_target();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(562)
					return (_g1 == __this->_upButtonArrow);
				}
				return null();
			}
		};
		HX_STACK_LINE(562)
		if (((  ((!(((_g == this->_upButton))))) ? bool(_Function_1_1::Block(this,event)) : bool(true) ))){
			HX_STACK_LINE(563)
			Dynamic _g2 = event->get_target();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(563)
			this->_pageButtonTarget = _g2;
			HX_STACK_LINE(564)
			this->_rowSelect = false;
			HX_STACK_LINE(565)
			this->pageButton(this->_upButton,true,false,true);
			HX_STACK_LINE(566)
			this->super::mouseDown(event);
		}
		else{
			HX_STACK_LINE(568)
			Dynamic _g3 = event->get_target();		HX_STACK_VAR(_g3,"_g3");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollTouchGrids_obj > __this,::openfl::events::MouseEvent &event){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",568,0xff6da6a0)
					{
						HX_STACK_LINE(568)
						Dynamic _g4 = event->get_target();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(568)
						return (_g4 == __this->_downButtonArrow);
					}
					return null();
				}
			};
			HX_STACK_LINE(568)
			if (((  ((!(((_g3 == this->_downButton))))) ? bool(_Function_2_1::Block(this,event)) : bool(true) ))){
				HX_STACK_LINE(569)
				Dynamic _g5 = event->get_target();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(569)
				this->_pageButtonTarget = _g5;
				HX_STACK_LINE(570)
				this->_rowSelect = false;
				HX_STACK_LINE(571)
				this->pageButton(this->_downButton,false,false,true);
				HX_STACK_LINE(572)
				this->super::mouseDown(event);
			}
			else{
				HX_STACK_LINE(574)
				if (((bool((event->get_target()->__Field(HX_CSTRING("name"),true) == HX_CSTRING("#header"))) || bool((event->get_target()->__Field(HX_CSTRING("name"),true) == HX_CSTRING("_titleSlider")))))){
					HX_STACK_LINE(575)
					this->_headerClicked = true;
					HX_STACK_LINE(576)
					this->_rowSelect = false;
					HX_STACK_LINE(577)
					this->super::mouseDown(event);
					HX_STACK_LINE(578)
					::openfl::events::Event _g6 = ::openfl::events::Event_obj::__new(HX_CSTRING("headerDown"),null(),null());		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(578)
					this->dispatchEvent(_g6);
				}
				else{
					HX_STACK_LINE(580)
					Dynamic _g7 = event->get_target();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(580)
					if (((_g7 != this->_editButton))){
						HX_STACK_LINE(581)
						this->_headerClicked = false;
						HX_STACK_LINE(582)
						this->super::mouseDown(event);
						HX_STACK_LINE(583)
						this->_rowSelect = false;
						HX_STACK_LINE(584)
						this->_clickDelay->reset();
						HX_STACK_LINE(585)
						this->_clickDelay->start();
					}
				}
			}
		}
		HX_STACK_LINE(587)
		Float _g8 = this->get_mouseX();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(587)
		this->_lastMousePoint->x = _g8;
		HX_STACK_LINE(588)
		Float _g9 = this->get_mouseY();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(588)
		this->_lastMousePoint->y = _g9;
		HX_STACK_LINE(589)
		this->_mouseDistance = (int)0;
		HX_STACK_LINE(590)
		this->_mouseDistanceX = (int)0;
		HX_STACK_LINE(591)
		this->_mouseDistanceY = (int)0;
	}
return null();
}


Void UIScrollTouchGrids_obj::dispatchRowSelected( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","dispatchRowSelected",0x486cf068,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.dispatchRowSelected","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",596,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(596)
		if (((this->_highlightedDataGrid != null()))){
			HX_STACK_LINE(597)
			this->_clickedRowIndex = this->_highlightedRowIndex;
			HX_STACK_LINE(598)
			this->_dataGrid = this->_highlightedDataGrid;
			HX_STACK_LINE(599)
			if ((!(this->_editButtonMouseDown))){
				HX_STACK_LINE(600)
				::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("rowSelected"),null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(600)
				this->dispatchEvent(_g);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollTouchGrids_obj,dispatchRowSelected,(void))

Void UIScrollTouchGrids_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","mouseUp",0x764f12cd,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.mouseUp","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",607,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(607)
		if (((this->_pageButtonTarget != null()))){
			HX_STACK_LINE(608)
			::openfl::events::Event _g = ::openfl::events::Event_obj::__new((  (((bool((this->_pageButtonTarget == this->_upButton)) || bool((this->_pageButtonTarget == this->_upButtonArrow))))) ? ::String(HX_CSTRING("pageUp")) : ::String(HX_CSTRING("pageDown")) ),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(608)
			this->dispatchEvent(_g);
			HX_STACK_LINE(609)
			this->resetPageButtons();
			HX_STACK_LINE(610)
			this->super::mouseUp(event);
		}
		else{
			HX_STACK_LINE(612)
			if (((event->get_target()->__Field(HX_CSTRING("name"),true) == HX_CSTRING("_titleSlider")))){
				HX_STACK_LINE(613)
				::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(HX_CSTRING("headerClicked"),null(),null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(613)
				this->dispatchEvent(_g1);
				HX_STACK_LINE(614)
				this->super::mouseUp(event);
			}
			else{
				HX_STACK_LINE(616)
				if (((bool(this->_headerClicked) && bool((event->get_target()->__Field(HX_CSTRING("name"),true) == HX_CSTRING("#header")))))){
					HX_STACK_LINE(617)
					::openfl::events::Event _g2 = ::openfl::events::Event_obj::__new(HX_CSTRING("headerClicked"),null(),null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(617)
					this->dispatchEvent(_g2);
					HX_STACK_LINE(618)
					this->super::mouseUp(event);
				}
				else{
					HX_STACK_LINE(620)
					Dynamic _g3 = event->get_target();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(620)
					if (((_g3 != this->_editButton))){
						HX_STACK_LINE(621)
						this->super::mouseUp(event);
						HX_STACK_LINE(622)
						this->_clickDelay->stop();
						HX_STACK_LINE(623)
						if (((bool(this->_rowSelect) || bool((this->_mouseDistance < 8.0))))){
							HX_STACK_LINE(624)
							this->_rowSelect = false;
							HX_STACK_LINE(625)
							this->_noScroll = this->_originalNoScroll;
							HX_STACK_LINE(626)
							this->rowSelectHandler();
							HX_STACK_LINE(627)
							if (((  (((bool((this->_highlightedDataGrid != null())) && bool((this->_highlightedRowIndex == (int)0))))) ? bool(this->_highlightedDataGrid->get_hasHeader()) : bool(false) ))){
								HX_STACK_LINE(628)
								::openfl::events::Event _g4 = ::openfl::events::Event_obj::__new(HX_CSTRING("headerClicked"),null(),null());		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(628)
								this->dispatchEvent(_g4);
								HX_STACK_LINE(629)
								this->super::mouseUp(event);
							}
							HX_STACK_LINE(631)
							if ((!(this->_alt))){
								HX_STACK_LINE(632)
								if (((this->_editButton != null()))){
									HX_STACK_LINE(633)
									this->_editButton->set_visible(true);
								}
								HX_STACK_LINE(635)
								this->setHighlightRow(null());
								HX_STACK_LINE(636)
								this->slideEditButton(true);
							}
							HX_STACK_LINE(638)
							if ((!(this->_headerClicked))){
								HX_STACK_LINE(639)
								this->dispatchRowSelected();
								HX_STACK_LINE(640)
								if (((this->_distance < 8.0))){
									HX_STACK_LINE(641)
									::openfl::events::Event _g5 = ::openfl::events::Event_obj::__new(HX_CSTRING("rowClicked"),null(),null());		HX_STACK_VAR(_g5,"_g5");
									HX_STACK_LINE(641)
									this->dispatchEvent(_g5);
								}
							}
						}
						else{
							HX_STACK_LINE(645)
							if ((this->_alt)){
								HX_STACK_LINE(646)
								this->temporaryRowClear();
								HX_STACK_LINE(647)
								this->temporaryRowHighlightDraw(this->_highlightedDataGrid,this->_highlightedRowIndex,null());
							}
							else{
								HX_STACK_LINE(650)
								this->refreshHighlight();
							}
						}
						HX_STACK_LINE(652)
						this->_mouseDistance = 999999.9;
						HX_STACK_LINE(653)
						if (((bool((bool(this->_alt) && bool((this->_editButton != null())))) && bool(!(this->_headerClicked))))){
							HX_STACK_LINE(654)
							this->setHighlightRow(null());
							HX_STACK_LINE(655)
							this->slideEditButton(null());
						}
					}
				}
			}
		}
	}
return null();
}


int UIScrollTouchGrids_obj::get_index( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","get_index",0xfe116b96,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.get_index","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",664,0xff6da6a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(664)
	return this->_clickedRowIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollTouchGrids_obj,get_index,return )

int UIScrollTouchGrids_obj::get_selectIndex( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","get_selectIndex",0x5e09a9fa,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.get_selectIndex","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",671,0xff6da6a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(671)
	return this->_highlightedRowIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollTouchGrids_obj,get_selectIndex,return )

int UIScrollTouchGrids_obj::set_selectIndex( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","set_selectIndex",0x59d52706,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.set_selectIndex","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",675,0xff6da6a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(676)
	this->temporaryRowClear();
	HX_STACK_LINE(677)
	int _g = this->_highlightedRowIndex = value;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(677)
	this->_clickedRowIndex = _g;
	HX_STACK_LINE(678)
	this->temporaryRowHighlightDraw(this->_highlightedDataGrid,this->_highlightedRowIndex,null());
	HX_STACK_LINE(679)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollTouchGrids_obj,set_selectIndex,return )

int UIScrollTouchGrids_obj::get_selectDataGrid( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","get_selectDataGrid",0x6560e828,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.get_selectDataGrid","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",685,0xff6da6a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(686)
	if (((this->_highlightedDataGrid != null()))){
		HX_STACK_LINE(687)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(687)
		Array< ::String > _g1 = ::Reflect_obj::fields(this->_dataGrids);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(687)
		while((true)){
			HX_STACK_LINE(687)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(687)
				break;
			}
			HX_STACK_LINE(687)
			::String index = _g1->__get(_g);		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(687)
			++(_g);
			HX_STACK_LINE(689)
			Dynamic _g2 = ::Std_obj::parseInt(index);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(689)
			::com::danielfreeman::extendedmadness::UISimpleDataGrid _g11 = this->_dataGrids->__get(_g2).StaticCast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(689)
			if (((this->_highlightedDataGrid == _g11))){
				HX_STACK_LINE(690)
				return ::Std_obj::parseInt(index);
			}
		}
	}
	HX_STACK_LINE(694)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollTouchGrids_obj,get_selectDataGrid,return )

Void UIScrollTouchGrids_obj::timerComplete( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","timerComplete",0x1df1d84b,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.timerComplete","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",698,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollTouchGrids_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",699,0xff6da6a0)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UIScrollTouchGrids.hx"),false);
					__result->Add(HX_CSTRING("lineNumber") , (int)699,false);
					__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.extendedmadness.UIScrollTouchGrids"),false);
					__result->Add(HX_CSTRING("methodName") , HX_CSTRING("timerComplete"),false);
					__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(__this->_mouseDistance).Add(HX_CSTRING("<")).Add(8.0)),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(699)
		::haxe::Log_obj::trace(HX_CSTRING("timerComplete"),_Function_1_1::Block(this));
		HX_STACK_LINE(700)
		if (((this->_mouseDistance < 8.0))){
			HX_STACK_LINE(701)
			this->_noScroll = this->_alt;
			HX_STACK_LINE(702)
			this->_rowSelect = true;
			HX_STACK_LINE(703)
			this->temporaryRowHighlight();
			HX_STACK_LINE(704)
			if (((  (((this->_editButton != null()))) ? bool(this->_editButton->get_visible()) : bool(false) ))){
				HX_STACK_LINE(705)
				this->slideEditButton(false);
			}
		}
		else{
			HX_STACK_LINE(708)
			if ((!(this->_alt))){
				HX_STACK_LINE(709)
				this->refreshHighlight();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollTouchGrids_obj,timerComplete,(void))

Void UIScrollTouchGrids_obj::positionPageButtons( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","positionPageButtons",0xea75bbf6,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.positionPageButtons","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",714,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(715)
		if (((this->_upButton != null()))){
			HX_STACK_LINE(716)
			Float _g = this->_upButton->set_x((Float(this->get_attributes()->width) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(716)
			this->_upButtonArrow->set_x(_g);
			HX_STACK_LINE(717)
			Float _g1 = this->_upButton->set_y(((Float(this->get_attributes()->height) / Float((int)2)) - 40.0));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(717)
			this->_upButtonArrow->set_y(_g1);
		}
		HX_STACK_LINE(719)
		if (((this->_downButton != null()))){
			HX_STACK_LINE(720)
			Float _g2 = this->_downButton->set_x((Float(this->get_attributes()->width) / Float((int)2)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(720)
			this->_downButtonArrow->set_x(_g2);
			HX_STACK_LINE(721)
			Float _g3 = this->_downButton->set_y(((Float(this->get_attributes()->height) / Float((int)2)) + 40.0));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(721)
			this->_downButtonArrow->set_y(_g3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollTouchGrids_obj,positionPageButtons,(void))

Void UIScrollTouchGrids_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","layout",0xfffe8c5d,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.layout","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",726,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(727)
		this->super::layout(attributes);
		HX_STACK_LINE(728)
		this->refreshHighlight();
		HX_STACK_LINE(729)
		this->positionPageButtons();
	}
return null();
}


Void UIScrollTouchGrids_obj::refreshHighlight( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","refreshHighlight",0x0aa4e44c,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.refreshHighlight","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",733,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(734)
		this->temporaryRowClear();
		HX_STACK_LINE(735)
		this->temporaryRowHighlightDraw(this->_highlightedDataGrid,this->_highlightedRowIndex,null());
		HX_STACK_LINE(736)
		this->setHighlightRow(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollTouchGrids_obj,refreshHighlight,(void))

Float UIScrollTouchGrids_obj::set_textSize( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","set_textSize",0x1d6d717e,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.set_textSize","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",742,0xff6da6a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(743)
	this->super::set_textSize(value);
	HX_STACK_LINE(744)
	this->refreshHighlight();
	HX_STACK_LINE(745)
	return value;
}


Void UIScrollTouchGrids_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollTouchGrids","destructor",0xe0c40e6c,"com.danielfreeman.extendedmadness.UIScrollTouchGrids.destructor","com/danielfreeman/extendedmadness/UIScrollTouchGrids.hx",749,0xff6da6a0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(750)
		this->super::destructor();
		HX_STACK_LINE(751)
		this->_clickDelay->removeEventListener(::openfl::events::TimerEvent_obj::TIMER_COMPLETE,this->timerComplete_dyn(),null());
	}
return null();
}


::String UIScrollTouchGrids_obj::EDIT_BUTTON_MOUSE_DOWN;

::String UIScrollTouchGrids_obj::EDIT_BUTTON_MOUSE_UP;

::String UIScrollTouchGrids_obj::EDIT_BUTTON_LONG_CLICK;

::String UIScrollTouchGrids_obj::EDIT_BUTTON_LONG_CLICK_END;

::String UIScrollTouchGrids_obj::ROW_CLICKED;

::String UIScrollTouchGrids_obj::ROW_SELECTED;

::String UIScrollTouchGrids_obj::LONG_ROW_SELECTED;

::String UIScrollTouchGrids_obj::HEADER_DOWN;

::String UIScrollTouchGrids_obj::HEADER_CLICKED;

::String UIScrollTouchGrids_obj::PAGE_UP;

::String UIScrollTouchGrids_obj::PAGE_DOWN;

int UIScrollTouchGrids_obj::ROW_SELECT_COLOUR;

int UIScrollTouchGrids_obj::EDIT_BUTTON_COLOUR;

Float UIScrollTouchGrids_obj::ROW_SELECT_LIMIT;

Float UIScrollTouchGrids_obj::BUTTON_WIDTH;

Float UIScrollTouchGrids_obj::BUTTON_HEIGHT;

Float UIScrollTouchGrids_obj::SENSOR;

Float UIScrollTouchGrids_obj::ARROW;

Float UIScrollTouchGrids_obj::CURVE;

Float UIScrollTouchGrids_obj::RADIUS;

Float UIScrollTouchGrids_obj::ALPHA;

Float UIScrollTouchGrids_obj::ROW_BORDER;

Float UIScrollTouchGrids_obj::DELTAY_THRESHOLD;

Float UIScrollTouchGrids_obj::SMALL_Y_THRESHOLD;

Float UIScrollTouchGrids_obj::BUTTON_MOVE_THRESHOLD;

int UIScrollTouchGrids_obj::ARROW_COLOUR;

int UIScrollTouchGrids_obj::ARROW_HIGHLIGHT_COLOUR;

Float UIScrollTouchGrids_obj::PAGE_BUTTON_ALPHA;

Float UIScrollTouchGrids_obj::ARROW_SIZE;

int UIScrollTouchGrids_obj::BUTTON_COLOUR;

Float UIScrollTouchGrids_obj::PAGE_BUTTON_SENSOR_RADIUS;

Float UIScrollTouchGrids_obj::PAGE_BUTTON_RADIUS;

int UIScrollTouchGrids_obj::LONG_ROW_THRESHOLD;


UIScrollTouchGrids_obj::UIScrollTouchGrids_obj()
{
}

void UIScrollTouchGrids_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIScrollTouchGrids);
	HX_MARK_MEMBER_NAME(_clickDelay,"_clickDelay");
	HX_MARK_MEMBER_NAME(_slideTimer,"_slideTimer");
	HX_MARK_MEMBER_NAME(_rowSelectColour,"_rowSelectColour");
	HX_MARK_MEMBER_NAME(_highlightedRowIndex,"_highlightedRowIndex");
	HX_MARK_MEMBER_NAME(_highlightedDataGrid,"_highlightedDataGrid");
	HX_MARK_MEMBER_NAME(_originalNoScroll,"_originalNoScroll");
	HX_MARK_MEMBER_NAME(_clickedRowIndex,"_clickedRowIndex");
	HX_MARK_MEMBER_NAME(_lastMousePoint,"_lastMousePoint");
	HX_MARK_MEMBER_NAME(_mouseDistance,"_mouseDistance");
	HX_MARK_MEMBER_NAME(_mouseDistanceX,"_mouseDistanceX");
	HX_MARK_MEMBER_NAME(_mouseDistanceY,"_mouseDistanceY");
	HX_MARK_MEMBER_NAME(_rowSelect,"_rowSelect");
	HX_MARK_MEMBER_NAME(_showPressed,"_showPressed");
	HX_MARK_MEMBER_NAME(_temporaryRowHighlight,"_temporaryRowHighlight");
	HX_MARK_MEMBER_NAME(_editButton,"_editButton");
	HX_MARK_MEMBER_NAME(_editButtonColour,"_editButtonColour");
	HX_MARK_MEMBER_NAME(_deltaEditButtonX,"_deltaEditButtonX");
	HX_MARK_MEMBER_NAME(_editButtonMouseDown,"_editButtonMouseDown");
	HX_MARK_MEMBER_NAME(_alt,"_alt");
	HX_MARK_MEMBER_NAME(_editButtonMoved,"_editButtonMoved");
	HX_MARK_MEMBER_NAME(_editButtonLayer,"_editButtonLayer");
	HX_MARK_MEMBER_NAME(_headerClicked,"_headerClicked");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_longClickDispatched,"_longClickDispatched");
	HX_MARK_MEMBER_NAME(_upButton,"_upButton");
	HX_MARK_MEMBER_NAME(_downButton,"_downButton");
	HX_MARK_MEMBER_NAME(_upButtonArrow,"_upButtonArrow");
	HX_MARK_MEMBER_NAME(_downButtonArrow,"_downButtonArrow");
	HX_MARK_MEMBER_NAME(_pageButtonTarget,"_pageButtonTarget");
	::com::danielfreeman::extendedmadness::UIScrollDataGrids_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIScrollTouchGrids_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_clickDelay,"_clickDelay");
	HX_VISIT_MEMBER_NAME(_slideTimer,"_slideTimer");
	HX_VISIT_MEMBER_NAME(_rowSelectColour,"_rowSelectColour");
	HX_VISIT_MEMBER_NAME(_highlightedRowIndex,"_highlightedRowIndex");
	HX_VISIT_MEMBER_NAME(_highlightedDataGrid,"_highlightedDataGrid");
	HX_VISIT_MEMBER_NAME(_originalNoScroll,"_originalNoScroll");
	HX_VISIT_MEMBER_NAME(_clickedRowIndex,"_clickedRowIndex");
	HX_VISIT_MEMBER_NAME(_lastMousePoint,"_lastMousePoint");
	HX_VISIT_MEMBER_NAME(_mouseDistance,"_mouseDistance");
	HX_VISIT_MEMBER_NAME(_mouseDistanceX,"_mouseDistanceX");
	HX_VISIT_MEMBER_NAME(_mouseDistanceY,"_mouseDistanceY");
	HX_VISIT_MEMBER_NAME(_rowSelect,"_rowSelect");
	HX_VISIT_MEMBER_NAME(_showPressed,"_showPressed");
	HX_VISIT_MEMBER_NAME(_temporaryRowHighlight,"_temporaryRowHighlight");
	HX_VISIT_MEMBER_NAME(_editButton,"_editButton");
	HX_VISIT_MEMBER_NAME(_editButtonColour,"_editButtonColour");
	HX_VISIT_MEMBER_NAME(_deltaEditButtonX,"_deltaEditButtonX");
	HX_VISIT_MEMBER_NAME(_editButtonMouseDown,"_editButtonMouseDown");
	HX_VISIT_MEMBER_NAME(_alt,"_alt");
	HX_VISIT_MEMBER_NAME(_editButtonMoved,"_editButtonMoved");
	HX_VISIT_MEMBER_NAME(_editButtonLayer,"_editButtonLayer");
	HX_VISIT_MEMBER_NAME(_headerClicked,"_headerClicked");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_longClickDispatched,"_longClickDispatched");
	HX_VISIT_MEMBER_NAME(_upButton,"_upButton");
	HX_VISIT_MEMBER_NAME(_downButton,"_downButton");
	HX_VISIT_MEMBER_NAME(_upButtonArrow,"_upButtonArrow");
	HX_VISIT_MEMBER_NAME(_downButtonArrow,"_downButtonArrow");
	HX_VISIT_MEMBER_NAME(_pageButtonTarget,"_pageButtonTarget");
	::com::danielfreeman::extendedmadness::UIScrollDataGrids_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIScrollTouchGrids_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_alt") ) { return _alt; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return get_index(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_upButton") ) { return _upButton; }
		if (HX_FIELD_EQ(inName,"longClick") ) { return longClick_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseMove") ) { return mouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"get_index") ) { return get_index_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_rowSelect") ) { return _rowSelect; }
		if (HX_FIELD_EQ(inName,"pageButton") ) { return pageButton_dyn(); }
		if (HX_FIELD_EQ(inName,"abortClick") ) { return abortClick_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"selectIndex") ) { return get_selectIndex(); }
		if (HX_FIELD_EQ(inName,"_clickDelay") ) { return _clickDelay; }
		if (HX_FIELD_EQ(inName,"_slideTimer") ) { return _slideTimer; }
		if (HX_FIELD_EQ(inName,"_editButton") ) { return _editButton; }
		if (HX_FIELD_EQ(inName,"_downButton") ) { return _downButton; }
		if (HX_FIELD_EQ(inName,"yToDataGrid") ) { return yToDataGrid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sliderX") ) { return set_sliderX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sliderY") ) { return set_sliderY_dyn(); }
		if (HX_FIELD_EQ(inName,"buttonShape") ) { return buttonShape_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_showPressed") ) { return _showPressed; }
		if (HX_FIELD_EQ(inName,"confirmClick") ) { return confirmClick_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textSize") ) { return set_textSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"slideMovement") ) { return slideMovement_dyn(); }
		if (HX_FIELD_EQ(inName,"timerComplete") ) { return timerComplete_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_mouseDistance") ) { return _mouseDistance; }
		if (HX_FIELD_EQ(inName,"_headerClicked") ) { return _headerClicked; }
		if (HX_FIELD_EQ(inName,"_upButtonArrow") ) { return _upButtonArrow; }
		if (HX_FIELD_EQ(inName,"set_editButton") ) { return set_editButton_dyn(); }
		if (HX_FIELD_EQ(inName,"makeEditButton") ) { return makeEditButton_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_lastMousePoint") ) { return _lastMousePoint; }
		if (HX_FIELD_EQ(inName,"_mouseDistanceX") ) { return _mouseDistanceX; }
		if (HX_FIELD_EQ(inName,"_mouseDistanceY") ) { return _mouseDistanceY; }
		if (HX_FIELD_EQ(inName,"set_showPressed") ) { return set_showPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"slideEditButton") ) { return slideEditButton_dyn(); }
		if (HX_FIELD_EQ(inName,"setHighlightRow") ) { return setHighlightRow_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectIndex") ) { return get_selectIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectIndex") ) { return set_selectIndex_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_rowSelectColour") ) { return _rowSelectColour; }
		if (HX_FIELD_EQ(inName,"_clickedRowIndex") ) { return _clickedRowIndex; }
		if (HX_FIELD_EQ(inName,"_editButtonMoved") ) { return _editButtonMoved; }
		if (HX_FIELD_EQ(inName,"_editButtonLayer") ) { return _editButtonLayer; }
		if (HX_FIELD_EQ(inName,"_downButtonArrow") ) { return _downButtonArrow; }
		if (HX_FIELD_EQ(inName,"resetPageButtons") ) { return resetPageButtons_dyn(); }
		if (HX_FIELD_EQ(inName,"createEditButton") ) { return createEditButton_dyn(); }
		if (HX_FIELD_EQ(inName,"rowSelectHandler") ) { return rowSelectHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"refreshHighlight") ) { return refreshHighlight_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_originalNoScroll") ) { return _originalNoScroll; }
		if (HX_FIELD_EQ(inName,"_editButtonColour") ) { return _editButtonColour; }
		if (HX_FIELD_EQ(inName,"_deltaEditButtonX") ) { return _deltaEditButtonX; }
		if (HX_FIELD_EQ(inName,"_pageButtonTarget") ) { return _pageButtonTarget; }
		if (HX_FIELD_EQ(inName,"set_pageUpVisible") ) { return set_pageUpVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"editButtonMouseUp") ) { return editButtonMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollEnabled") ) { return set_scrollEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"temporaryRowClear") ) { return temporaryRowClear_dyn(); }
		if (HX_FIELD_EQ(inName,"clearHighlightRow") ) { return clearHighlightRow_dyn(); }
		if (HX_FIELD_EQ(inName,"abortRowSelection") ) { return abortRowSelection_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_selectDataGrid") ) { return get_selectDataGrid_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_pageDownVisible") ) { return set_pageDownVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"editButtonMouseDown") ) { return editButtonMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"editButtonMouseMove") ) { return editButtonMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rowSelectColour") ) { return set_rowSelectColour_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatchRowSelected") ) { return dispatchRowSelected_dyn(); }
		if (HX_FIELD_EQ(inName,"positionPageButtons") ) { return positionPageButtons_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_highlightedRowIndex") ) { return _highlightedRowIndex; }
		if (HX_FIELD_EQ(inName,"_highlightedDataGrid") ) { return _highlightedDataGrid; }
		if (HX_FIELD_EQ(inName,"_editButtonMouseDown") ) { return _editButtonMouseDown; }
		if (HX_FIELD_EQ(inName,"_longClickDispatched") ) { return _longClickDispatched; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"temporaryRowHighlight") ) { return temporaryRowHighlight_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_temporaryRowHighlight") ) { return _temporaryRowHighlight; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"temporaryRowHighlightDraw") ) { return temporaryRowHighlightDraw_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIScrollTouchGrids_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_alt") ) { _alt=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< ::openfl::utils::Timer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_upButton") ) { _upButton=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"editButton") ) { return set_editButton(inValue); }
		if (HX_FIELD_EQ(inName,"_rowSelect") ) { _rowSelect=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"showPressed") ) { return set_showPressed(inValue); }
		if (HX_FIELD_EQ(inName,"selectIndex") ) { return set_selectIndex(inValue); }
		if (HX_FIELD_EQ(inName,"_clickDelay") ) { _clickDelay=inValue.Cast< ::openfl::utils::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slideTimer") ) { _slideTimer=inValue.Cast< ::openfl::utils::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_editButton") ) { _editButton=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_downButton") ) { _downButton=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_showPressed") ) { _showPressed=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pageUpVisible") ) { return set_pageUpVisible(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_mouseDistance") ) { _mouseDistance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headerClicked") ) { _headerClicked=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_upButtonArrow") ) { _upButtonArrow=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"pageDownVisible") ) { return set_pageDownVisible(inValue); }
		if (HX_FIELD_EQ(inName,"rowSelectColour") ) { return set_rowSelectColour(inValue); }
		if (HX_FIELD_EQ(inName,"_lastMousePoint") ) { _lastMousePoint=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouseDistanceX") ) { _mouseDistanceX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouseDistanceY") ) { _mouseDistanceY=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_rowSelectColour") ) { _rowSelectColour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clickedRowIndex") ) { _clickedRowIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_editButtonMoved") ) { _editButtonMoved=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_editButtonLayer") ) { _editButtonLayer=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_downButtonArrow") ) { _downButtonArrow=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_originalNoScroll") ) { _originalNoScroll=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_editButtonColour") ) { _editButtonColour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_deltaEditButtonX") ) { _deltaEditButtonX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pageButtonTarget") ) { _pageButtonTarget=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_highlightedRowIndex") ) { _highlightedRowIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_highlightedDataGrid") ) { _highlightedDataGrid=inValue.Cast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_editButtonMouseDown") ) { _editButtonMouseDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_longClickDispatched") ) { _longClickDispatched=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_temporaryRowHighlight") ) { _temporaryRowHighlight=inValue.Cast< ::openfl::display::Shape >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIScrollTouchGrids_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("showPressed"));
	outFields->push(HX_CSTRING("pageUpVisible"));
	outFields->push(HX_CSTRING("pageDownVisible"));
	outFields->push(HX_CSTRING("editButton"));
	outFields->push(HX_CSTRING("rowSelectColour"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("selectIndex"));
	outFields->push(HX_CSTRING("_clickDelay"));
	outFields->push(HX_CSTRING("_slideTimer"));
	outFields->push(HX_CSTRING("_rowSelectColour"));
	outFields->push(HX_CSTRING("_highlightedRowIndex"));
	outFields->push(HX_CSTRING("_highlightedDataGrid"));
	outFields->push(HX_CSTRING("_originalNoScroll"));
	outFields->push(HX_CSTRING("_clickedRowIndex"));
	outFields->push(HX_CSTRING("_lastMousePoint"));
	outFields->push(HX_CSTRING("_mouseDistance"));
	outFields->push(HX_CSTRING("_mouseDistanceX"));
	outFields->push(HX_CSTRING("_mouseDistanceY"));
	outFields->push(HX_CSTRING("_rowSelect"));
	outFields->push(HX_CSTRING("_showPressed"));
	outFields->push(HX_CSTRING("_temporaryRowHighlight"));
	outFields->push(HX_CSTRING("_editButton"));
	outFields->push(HX_CSTRING("_editButtonColour"));
	outFields->push(HX_CSTRING("_deltaEditButtonX"));
	outFields->push(HX_CSTRING("_editButtonMouseDown"));
	outFields->push(HX_CSTRING("_alt"));
	outFields->push(HX_CSTRING("_editButtonMoved"));
	outFields->push(HX_CSTRING("_editButtonLayer"));
	outFields->push(HX_CSTRING("_headerClicked"));
	outFields->push(HX_CSTRING("_timer"));
	outFields->push(HX_CSTRING("_longClickDispatched"));
	outFields->push(HX_CSTRING("_upButton"));
	outFields->push(HX_CSTRING("_downButton"));
	outFields->push(HX_CSTRING("_upButtonArrow"));
	outFields->push(HX_CSTRING("_downButtonArrow"));
	outFields->push(HX_CSTRING("_pageButtonTarget"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("EDIT_BUTTON_MOUSE_DOWN"),
	HX_CSTRING("EDIT_BUTTON_MOUSE_UP"),
	HX_CSTRING("EDIT_BUTTON_LONG_CLICK"),
	HX_CSTRING("EDIT_BUTTON_LONG_CLICK_END"),
	HX_CSTRING("ROW_CLICKED"),
	HX_CSTRING("ROW_SELECTED"),
	HX_CSTRING("LONG_ROW_SELECTED"),
	HX_CSTRING("HEADER_DOWN"),
	HX_CSTRING("HEADER_CLICKED"),
	HX_CSTRING("PAGE_UP"),
	HX_CSTRING("PAGE_DOWN"),
	HX_CSTRING("ROW_SELECT_COLOUR"),
	HX_CSTRING("EDIT_BUTTON_COLOUR"),
	HX_CSTRING("ROW_SELECT_LIMIT"),
	HX_CSTRING("BUTTON_WIDTH"),
	HX_CSTRING("BUTTON_HEIGHT"),
	HX_CSTRING("SENSOR"),
	HX_CSTRING("ARROW"),
	HX_CSTRING("CURVE"),
	HX_CSTRING("RADIUS"),
	HX_CSTRING("ALPHA"),
	HX_CSTRING("ROW_BORDER"),
	HX_CSTRING("DELTAY_THRESHOLD"),
	HX_CSTRING("SMALL_Y_THRESHOLD"),
	HX_CSTRING("BUTTON_MOVE_THRESHOLD"),
	HX_CSTRING("ARROW_COLOUR"),
	HX_CSTRING("ARROW_HIGHLIGHT_COLOUR"),
	HX_CSTRING("PAGE_BUTTON_ALPHA"),
	HX_CSTRING("ARROW_SIZE"),
	HX_CSTRING("BUTTON_COLOUR"),
	HX_CSTRING("PAGE_BUTTON_SENSOR_RADIUS"),
	HX_CSTRING("PAGE_BUTTON_RADIUS"),
	HX_CSTRING("LONG_ROW_THRESHOLD"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::utils::Timer*/ ,(int)offsetof(UIScrollTouchGrids_obj,_clickDelay),HX_CSTRING("_clickDelay")},
	{hx::fsObject /*::openfl::utils::Timer*/ ,(int)offsetof(UIScrollTouchGrids_obj,_slideTimer),HX_CSTRING("_slideTimer")},
	{hx::fsInt,(int)offsetof(UIScrollTouchGrids_obj,_rowSelectColour),HX_CSTRING("_rowSelectColour")},
	{hx::fsInt,(int)offsetof(UIScrollTouchGrids_obj,_highlightedRowIndex),HX_CSTRING("_highlightedRowIndex")},
	{hx::fsObject /*::com::danielfreeman::extendedmadness::UISimpleDataGrid*/ ,(int)offsetof(UIScrollTouchGrids_obj,_highlightedDataGrid),HX_CSTRING("_highlightedDataGrid")},
	{hx::fsBool,(int)offsetof(UIScrollTouchGrids_obj,_originalNoScroll),HX_CSTRING("_originalNoScroll")},
	{hx::fsInt,(int)offsetof(UIScrollTouchGrids_obj,_clickedRowIndex),HX_CSTRING("_clickedRowIndex")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(UIScrollTouchGrids_obj,_lastMousePoint),HX_CSTRING("_lastMousePoint")},
	{hx::fsFloat,(int)offsetof(UIScrollTouchGrids_obj,_mouseDistance),HX_CSTRING("_mouseDistance")},
	{hx::fsFloat,(int)offsetof(UIScrollTouchGrids_obj,_mouseDistanceX),HX_CSTRING("_mouseDistanceX")},
	{hx::fsFloat,(int)offsetof(UIScrollTouchGrids_obj,_mouseDistanceY),HX_CSTRING("_mouseDistanceY")},
	{hx::fsBool,(int)offsetof(UIScrollTouchGrids_obj,_rowSelect),HX_CSTRING("_rowSelect")},
	{hx::fsBool,(int)offsetof(UIScrollTouchGrids_obj,_showPressed),HX_CSTRING("_showPressed")},
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(UIScrollTouchGrids_obj,_temporaryRowHighlight),HX_CSTRING("_temporaryRowHighlight")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UIScrollTouchGrids_obj,_editButton),HX_CSTRING("_editButton")},
	{hx::fsInt,(int)offsetof(UIScrollTouchGrids_obj,_editButtonColour),HX_CSTRING("_editButtonColour")},
	{hx::fsFloat,(int)offsetof(UIScrollTouchGrids_obj,_deltaEditButtonX),HX_CSTRING("_deltaEditButtonX")},
	{hx::fsBool,(int)offsetof(UIScrollTouchGrids_obj,_editButtonMouseDown),HX_CSTRING("_editButtonMouseDown")},
	{hx::fsBool,(int)offsetof(UIScrollTouchGrids_obj,_alt),HX_CSTRING("_alt")},
	{hx::fsBool,(int)offsetof(UIScrollTouchGrids_obj,_editButtonMoved),HX_CSTRING("_editButtonMoved")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UIScrollTouchGrids_obj,_editButtonLayer),HX_CSTRING("_editButtonLayer")},
	{hx::fsBool,(int)offsetof(UIScrollTouchGrids_obj,_headerClicked),HX_CSTRING("_headerClicked")},
	{hx::fsObject /*::openfl::utils::Timer*/ ,(int)offsetof(UIScrollTouchGrids_obj,_timer),HX_CSTRING("_timer")},
	{hx::fsBool,(int)offsetof(UIScrollTouchGrids_obj,_longClickDispatched),HX_CSTRING("_longClickDispatched")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UIScrollTouchGrids_obj,_upButton),HX_CSTRING("_upButton")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UIScrollTouchGrids_obj,_downButton),HX_CSTRING("_downButton")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UIScrollTouchGrids_obj,_upButtonArrow),HX_CSTRING("_upButtonArrow")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UIScrollTouchGrids_obj,_downButtonArrow),HX_CSTRING("_downButtonArrow")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UIScrollTouchGrids_obj,_pageButtonTarget),HX_CSTRING("_pageButtonTarget")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_clickDelay"),
	HX_CSTRING("_slideTimer"),
	HX_CSTRING("_rowSelectColour"),
	HX_CSTRING("_highlightedRowIndex"),
	HX_CSTRING("_highlightedDataGrid"),
	HX_CSTRING("_originalNoScroll"),
	HX_CSTRING("_clickedRowIndex"),
	HX_CSTRING("_lastMousePoint"),
	HX_CSTRING("_mouseDistance"),
	HX_CSTRING("_mouseDistanceX"),
	HX_CSTRING("_mouseDistanceY"),
	HX_CSTRING("_rowSelect"),
	HX_CSTRING("_showPressed"),
	HX_CSTRING("_temporaryRowHighlight"),
	HX_CSTRING("_editButton"),
	HX_CSTRING("_editButtonColour"),
	HX_CSTRING("_deltaEditButtonX"),
	HX_CSTRING("_editButtonMouseDown"),
	HX_CSTRING("_alt"),
	HX_CSTRING("_editButtonMoved"),
	HX_CSTRING("_editButtonLayer"),
	HX_CSTRING("_headerClicked"),
	HX_CSTRING("_timer"),
	HX_CSTRING("_longClickDispatched"),
	HX_CSTRING("_upButton"),
	HX_CSTRING("_downButton"),
	HX_CSTRING("_upButtonArrow"),
	HX_CSTRING("_downButtonArrow"),
	HX_CSTRING("_pageButtonTarget"),
	HX_CSTRING("set_showPressed"),
	HX_CSTRING("set_pageUpVisible"),
	HX_CSTRING("set_pageDownVisible"),
	HX_CSTRING("pageButton"),
	HX_CSTRING("resetPageButtons"),
	HX_CSTRING("createEditButton"),
	HX_CSTRING("set_editButton"),
	HX_CSTRING("longClick"),
	HX_CSTRING("editButtonMouseDown"),
	HX_CSTRING("editButtonMouseMove"),
	HX_CSTRING("editButtonMouseUp"),
	HX_CSTRING("slideEditButton"),
	HX_CSTRING("slideMovement"),
	HX_CSTRING("set_rowSelectColour"),
	HX_CSTRING("set_scrollEnabled"),
	HX_CSTRING("yToDataGrid"),
	HX_CSTRING("temporaryRowHighlightDraw"),
	HX_CSTRING("temporaryRowHighlight"),
	HX_CSTRING("set_sliderX"),
	HX_CSTRING("set_sliderY"),
	HX_CSTRING("temporaryRowClear"),
	HX_CSTRING("buttonShape"),
	HX_CSTRING("makeEditButton"),
	HX_CSTRING("clearHighlightRow"),
	HX_CSTRING("setHighlightRow"),
	HX_CSTRING("abortRowSelection"),
	HX_CSTRING("mouseMove"),
	HX_CSTRING("abortClick"),
	HX_CSTRING("confirmClick"),
	HX_CSTRING("rowSelectHandler"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("dispatchRowSelected"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("get_index"),
	HX_CSTRING("get_selectIndex"),
	HX_CSTRING("set_selectIndex"),
	HX_CSTRING("get_selectDataGrid"),
	HX_CSTRING("timerComplete"),
	HX_CSTRING("positionPageButtons"),
	HX_CSTRING("layout"),
	HX_CSTRING("refreshHighlight"),
	HX_CSTRING("set_textSize"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::EDIT_BUTTON_MOUSE_DOWN,"EDIT_BUTTON_MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::EDIT_BUTTON_MOUSE_UP,"EDIT_BUTTON_MOUSE_UP");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::EDIT_BUTTON_LONG_CLICK,"EDIT_BUTTON_LONG_CLICK");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::EDIT_BUTTON_LONG_CLICK_END,"EDIT_BUTTON_LONG_CLICK_END");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::ROW_CLICKED,"ROW_CLICKED");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::ROW_SELECTED,"ROW_SELECTED");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::LONG_ROW_SELECTED,"LONG_ROW_SELECTED");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::HEADER_DOWN,"HEADER_DOWN");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::HEADER_CLICKED,"HEADER_CLICKED");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::PAGE_UP,"PAGE_UP");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::PAGE_DOWN,"PAGE_DOWN");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::ROW_SELECT_COLOUR,"ROW_SELECT_COLOUR");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::EDIT_BUTTON_COLOUR,"EDIT_BUTTON_COLOUR");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::ROW_SELECT_LIMIT,"ROW_SELECT_LIMIT");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::BUTTON_WIDTH,"BUTTON_WIDTH");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::BUTTON_HEIGHT,"BUTTON_HEIGHT");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::SENSOR,"SENSOR");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::ARROW,"ARROW");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::CURVE,"CURVE");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::RADIUS,"RADIUS");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::ROW_BORDER,"ROW_BORDER");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::DELTAY_THRESHOLD,"DELTAY_THRESHOLD");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::SMALL_Y_THRESHOLD,"SMALL_Y_THRESHOLD");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::BUTTON_MOVE_THRESHOLD,"BUTTON_MOVE_THRESHOLD");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::ARROW_COLOUR,"ARROW_COLOUR");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::ARROW_HIGHLIGHT_COLOUR,"ARROW_HIGHLIGHT_COLOUR");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::PAGE_BUTTON_ALPHA,"PAGE_BUTTON_ALPHA");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::ARROW_SIZE,"ARROW_SIZE");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::BUTTON_COLOUR,"BUTTON_COLOUR");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::PAGE_BUTTON_SENSOR_RADIUS,"PAGE_BUTTON_SENSOR_RADIUS");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::PAGE_BUTTON_RADIUS,"PAGE_BUTTON_RADIUS");
	HX_MARK_MEMBER_NAME(UIScrollTouchGrids_obj::LONG_ROW_THRESHOLD,"LONG_ROW_THRESHOLD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::EDIT_BUTTON_MOUSE_DOWN,"EDIT_BUTTON_MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::EDIT_BUTTON_MOUSE_UP,"EDIT_BUTTON_MOUSE_UP");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::EDIT_BUTTON_LONG_CLICK,"EDIT_BUTTON_LONG_CLICK");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::EDIT_BUTTON_LONG_CLICK_END,"EDIT_BUTTON_LONG_CLICK_END");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::ROW_CLICKED,"ROW_CLICKED");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::ROW_SELECTED,"ROW_SELECTED");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::LONG_ROW_SELECTED,"LONG_ROW_SELECTED");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::HEADER_DOWN,"HEADER_DOWN");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::HEADER_CLICKED,"HEADER_CLICKED");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::PAGE_UP,"PAGE_UP");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::PAGE_DOWN,"PAGE_DOWN");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::ROW_SELECT_COLOUR,"ROW_SELECT_COLOUR");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::EDIT_BUTTON_COLOUR,"EDIT_BUTTON_COLOUR");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::ROW_SELECT_LIMIT,"ROW_SELECT_LIMIT");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::BUTTON_WIDTH,"BUTTON_WIDTH");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::BUTTON_HEIGHT,"BUTTON_HEIGHT");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::SENSOR,"SENSOR");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::ARROW,"ARROW");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::CURVE,"CURVE");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::RADIUS,"RADIUS");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::ROW_BORDER,"ROW_BORDER");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::DELTAY_THRESHOLD,"DELTAY_THRESHOLD");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::SMALL_Y_THRESHOLD,"SMALL_Y_THRESHOLD");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::BUTTON_MOVE_THRESHOLD,"BUTTON_MOVE_THRESHOLD");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::ARROW_COLOUR,"ARROW_COLOUR");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::ARROW_HIGHLIGHT_COLOUR,"ARROW_HIGHLIGHT_COLOUR");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::PAGE_BUTTON_ALPHA,"PAGE_BUTTON_ALPHA");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::ARROW_SIZE,"ARROW_SIZE");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::BUTTON_COLOUR,"BUTTON_COLOUR");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::PAGE_BUTTON_SENSOR_RADIUS,"PAGE_BUTTON_SENSOR_RADIUS");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::PAGE_BUTTON_RADIUS,"PAGE_BUTTON_RADIUS");
	HX_VISIT_MEMBER_NAME(UIScrollTouchGrids_obj::LONG_ROW_THRESHOLD,"LONG_ROW_THRESHOLD");
};

#endif

Class UIScrollTouchGrids_obj::__mClass;

void UIScrollTouchGrids_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UIScrollTouchGrids"), hx::TCanCast< UIScrollTouchGrids_obj> ,sStaticFields,sMemberFields,
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

void UIScrollTouchGrids_obj::__boot()
{
	EDIT_BUTTON_MOUSE_DOWN= HX_CSTRING("editButtonMouseDown");
	EDIT_BUTTON_MOUSE_UP= HX_CSTRING("editButtonMouseUp");
	EDIT_BUTTON_LONG_CLICK= HX_CSTRING("editButtonLongClick");
	EDIT_BUTTON_LONG_CLICK_END= HX_CSTRING("editButtonLongClickEnd");
	ROW_CLICKED= HX_CSTRING("rowClicked");
	ROW_SELECTED= HX_CSTRING("rowSelected");
	LONG_ROW_SELECTED= HX_CSTRING("longRowSelected");
	HEADER_DOWN= HX_CSTRING("headerDown");
	HEADER_CLICKED= HX_CSTRING("headerClicked");
	PAGE_UP= HX_CSTRING("pageUp");
	PAGE_DOWN= HX_CSTRING("pageDown");
	ROW_SELECT_COLOUR= (int)11184895;
	EDIT_BUTTON_COLOUR= (int)13408614;
	ROW_SELECT_LIMIT= 64.0;
	BUTTON_WIDTH= 40.0;
	BUTTON_HEIGHT= 36.0;
	SENSOR= 20.0;
	ARROW= 10.0;
	CURVE= 5.0;
	RADIUS= 12.0;
	ALPHA= 0.5;
	ROW_BORDER= 6.0;
	DELTAY_THRESHOLD= 128.0;
	SMALL_Y_THRESHOLD= 16.0;
	BUTTON_MOVE_THRESHOLD= 20.0;
	ARROW_COLOUR= (int)3355443;
	ARROW_HIGHLIGHT_COLOUR= (int)16777215;
	PAGE_BUTTON_ALPHA= 0.2;
	ARROW_SIZE= 20.0;
	BUTTON_COLOUR= (int)3355443;
	PAGE_BUTTON_SENSOR_RADIUS= 40.0;
	PAGE_BUTTON_RADIUS= 30.0;
	LONG_ROW_THRESHOLD= (int)64;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
