#include <hxcpp.h>

#ifndef INCLUDED_com_danielfreeman_madcomponents_Colour
#include <com/danielfreeman/madcomponents/Colour.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIActivity
#include <com/danielfreeman/madcomponents/UIActivity.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
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
#ifndef INCLUDED_openfl_utils_Timer
#include <openfl/utils/Timer.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UIActivity_obj::__construct(::openfl::display::Sprite screen,Float xx,Float yy,hx::Null< bool >  __o_visible,hx::Null< int >  __o_colour)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIActivity","new",0x7c92af69,"com.danielfreeman.madcomponents.UIActivity.new","com/danielfreeman/madcomponents/UIActivity.hx",7,0x5cb47304)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xx,"xx")
HX_STACK_ARG(yy,"yy")
HX_STACK_ARG(__o_visible,"visible")
HX_STACK_ARG(__o_colour,"colour")
bool visible = __o_visible.Default(false);
int colour = __o_colour.Default(16777215);
{
	HX_STACK_LINE(27)
	this->timer = ::openfl::utils::Timer_obj::__new(::com::danielfreeman::madcomponents::UIActivity_obj::INTERVAL,null());
	HX_STACK_LINE(32)
	super::__construct();
	HX_STACK_LINE(33)
	screen->addChild(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(34)
	this->set_x(xx);
	HX_STACK_LINE(35)
	this->set_y(yy);
	HX_STACK_LINE(36)
	this->drawActivityIndicator(colour);
	HX_STACK_LINE(37)
	this->timer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->rotateHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(38)
	this->set_mouseEnabled(false);
	HX_STACK_LINE(39)
	this->super::set_visible(visible);
}
;
	return null();
}

//UIActivity_obj::~UIActivity_obj() { }

Dynamic UIActivity_obj::__CreateEmpty() { return  new UIActivity_obj; }
hx::ObjectPtr< UIActivity_obj > UIActivity_obj::__new(::openfl::display::Sprite screen,Float xx,Float yy,hx::Null< bool >  __o_visible,hx::Null< int >  __o_colour)
{  hx::ObjectPtr< UIActivity_obj > result = new UIActivity_obj();
	result->__construct(screen,xx,yy,__o_visible,__o_colour);
	return result;}

Dynamic UIActivity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIActivity_obj > result = new UIActivity_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void UIActivity_obj::rotateHandler( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIActivity","rotateHandler",0xc92746f8,"com.danielfreeman.madcomponents.UIActivity.rotateHandler","com/danielfreeman/madcomponents/UIActivity.hx",44,0x5cb47304)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(44)
		::com::danielfreeman::madcomponents::UIActivity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		Float _g1 = _g->get_rotation();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(44)
		Float _g11 = (_g1 + (Float((int)360) / Float(::com::danielfreeman::madcomponents::UIActivity_obj::SPOKES)));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(44)
		_g->set_rotation(_g11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIActivity_obj,rotateHandler,(void))

Void UIActivity_obj::drawActivityIndicator( int colour){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIActivity","drawActivityIndicator",0xaa640ca5,"com.danielfreeman.madcomponents.UIActivity.drawActivityIndicator","com/danielfreeman/madcomponents/UIActivity.hx",49,0x5cb47304)
		HX_STACK_THIS(this)
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(49)
		int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(49)
		int _g = (::com::danielfreeman::madcomponents::UIActivity_obj::SPOKES + (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		while((true)){
			HX_STACK_LINE(49)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(49)
				break;
			}
			HX_STACK_LINE(49)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(50)
			int _g2 = ::com::danielfreeman::madcomponents::Colour_obj::darken(colour,(-(i) * (int)8));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(50)
			this->get_graphics()->lineStyle(4.0,_g2,null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(51)
			Float _g11 = ::Math_obj::sin((Float((::com::danielfreeman::madcomponents::UIActivity_obj::DEGTORAD * i)) / Float(::com::danielfreeman::madcomponents::UIActivity_obj::SPOKES)));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(51)
			Float _g21 = (-16. * _g11);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(51)
			Float _g3 = ::Math_obj::cos((Float((::com::danielfreeman::madcomponents::UIActivity_obj::DEGTORAD * i)) / Float(::com::danielfreeman::madcomponents::UIActivity_obj::SPOKES)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(51)
			Float _g4 = (-16. * _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(51)
			this->get_graphics()->moveTo(_g21,_g4);
			HX_STACK_LINE(52)
			Float _g5 = ::Math_obj::sin((Float((::com::danielfreeman::madcomponents::UIActivity_obj::DEGTORAD * i)) / Float(::com::danielfreeman::madcomponents::UIActivity_obj::SPOKES)));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(52)
			Float _g6 = (-40. * _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(52)
			Float _g7 = ::Math_obj::cos((Float((::com::danielfreeman::madcomponents::UIActivity_obj::DEGTORAD * i)) / Float(::com::danielfreeman::madcomponents::UIActivity_obj::SPOKES)));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(52)
			Float _g8 = (-40. * _g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(52)
			this->get_graphics()->lineTo(_g6,_g8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIActivity_obj,drawActivityIndicator,(void))

bool UIActivity_obj::set_rotate( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIActivity","set_rotate",0x5ad658af,"com.danielfreeman.madcomponents.UIActivity.set_rotate","com/danielfreeman/madcomponents/UIActivity.hx",57,0x5cb47304)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(58)
	if ((value)){
		HX_STACK_LINE(59)
		this->timer->reset();
		HX_STACK_LINE(60)
		this->timer->start();
	}
	else{
		HX_STACK_LINE(62)
		this->timer->stop();
	}
	HX_STACK_LINE(64)
	this->super::set_visible(true);
	HX_STACK_LINE(65)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIActivity_obj,set_rotate,return )

bool UIActivity_obj::set_isVisible( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIActivity","set_isVisible",0x6a8a0fd4,"com.danielfreeman.madcomponents.UIActivity.set_isVisible","com/danielfreeman/madcomponents/UIActivity.hx",69,0x5cb47304)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(70)
	this->set_rotate(value);
	HX_STACK_LINE(71)
	this->set_visible(value);
	HX_STACK_LINE(72)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIActivity_obj,set_isVisible,return )

Void UIActivity_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIActivity","destructor",0xafc2df50,"com.danielfreeman.madcomponents.UIActivity.destructor","com/danielfreeman/madcomponents/UIActivity.hx",77,0x5cb47304)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		this->timer->removeEventListener(::openfl::events::TimerEvent_obj::TIMER,this->rotateHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIActivity_obj,destructor,(void))

int UIActivity_obj::SPOKES;

int UIActivity_obj::INTERVAL;

Float UIActivity_obj::INNER;

Float UIActivity_obj::OUTER;

Float UIActivity_obj::THICKNESS;

int UIActivity_obj::INCREMENT;

Float UIActivity_obj::DEGTORAD;


UIActivity_obj::UIActivity_obj()
{
}

void UIActivity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIActivity);
	HX_MARK_MEMBER_NAME(timer,"timer");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIActivity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timer,"timer");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIActivity_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SPOKES") ) { return SPOKES; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"INTERVAL") ) { return INTERVAL; }
		if (HX_FIELD_EQ(inName,"DEGTORAD") ) { return DEGTORAD; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_rotate") ) { return set_rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rotateHandler") ) { return rotateHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"set_isVisible") ) { return set_isVisible_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"drawActivityIndicator") ) { return drawActivityIndicator_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIActivity_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::openfl::utils::Timer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SPOKES") ) { SPOKES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotate") ) { return set_rotate(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"INTERVAL") ) { INTERVAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEGTORAD") ) { DEGTORAD=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isVisible") ) { return set_isVisible(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIActivity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rotate"));
	outFields->push(HX_CSTRING("isVisible"));
	outFields->push(HX_CSTRING("timer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SPOKES"),
	HX_CSTRING("INTERVAL"),
	HX_CSTRING("INNER"),
	HX_CSTRING("OUTER"),
	HX_CSTRING("THICKNESS"),
	HX_CSTRING("INCREMENT"),
	HX_CSTRING("DEGTORAD"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::utils::Timer*/ ,(int)offsetof(UIActivity_obj,timer),HX_CSTRING("timer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("timer"),
	HX_CSTRING("rotateHandler"),
	HX_CSTRING("drawActivityIndicator"),
	HX_CSTRING("set_rotate"),
	HX_CSTRING("set_isVisible"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIActivity_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIActivity_obj::SPOKES,"SPOKES");
	HX_MARK_MEMBER_NAME(UIActivity_obj::INTERVAL,"INTERVAL");
	HX_MARK_MEMBER_NAME(UIActivity_obj::INNER,"INNER");
	HX_MARK_MEMBER_NAME(UIActivity_obj::OUTER,"OUTER");
	HX_MARK_MEMBER_NAME(UIActivity_obj::THICKNESS,"THICKNESS");
	HX_MARK_MEMBER_NAME(UIActivity_obj::INCREMENT,"INCREMENT");
	HX_MARK_MEMBER_NAME(UIActivity_obj::DEGTORAD,"DEGTORAD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIActivity_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIActivity_obj::SPOKES,"SPOKES");
	HX_VISIT_MEMBER_NAME(UIActivity_obj::INTERVAL,"INTERVAL");
	HX_VISIT_MEMBER_NAME(UIActivity_obj::INNER,"INNER");
	HX_VISIT_MEMBER_NAME(UIActivity_obj::OUTER,"OUTER");
	HX_VISIT_MEMBER_NAME(UIActivity_obj::THICKNESS,"THICKNESS");
	HX_VISIT_MEMBER_NAME(UIActivity_obj::INCREMENT,"INCREMENT");
	HX_VISIT_MEMBER_NAME(UIActivity_obj::DEGTORAD,"DEGTORAD");
};

#endif

Class UIActivity_obj::__mClass;

void UIActivity_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIActivity"), hx::TCanCast< UIActivity_obj> ,sStaticFields,sMemberFields,
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

void UIActivity_obj::__boot()
{
	SPOKES= (int)12;
	INTERVAL= (int)100;
	INNER= 16.0;
	OUTER= 40.0;
	THICKNESS= 4.0;
	INCREMENT= (int)8;
	DEGTORAD= ((int)2 * ::Math_obj::PI);
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
