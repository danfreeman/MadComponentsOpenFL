#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_com_danielfreeman_AnimationTimer
#include <com/danielfreeman/AnimationTimer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
#endif
#ifndef INCLUDED_openfl_utils_Timer
#include <openfl/utils/Timer.h>
#endif
namespace com{
namespace danielfreeman{

Void AnimationTimer_obj::__construct(::openfl::display::Sprite parentClass,hx::Null< int >  __o_repetitions)
{
HX_STACK_FRAME("com.danielfreeman.AnimationTimer","new",0x5c8d799f,"com.danielfreeman.AnimationTimer.new","com/danielfreeman/AnimationTimer.hx",12,0x9bd664af)
HX_STACK_THIS(this)
HX_STACK_ARG(parentClass,"parentClass")
HX_STACK_ARG(__o_repetitions,"repetitions")
int repetitions = __o_repetitions.Default(-1);
{
	HX_STACK_LINE(25)
	this->_completeCallBack = null();
	HX_STACK_LINE(24)
	this->_callBack = null();
	HX_STACK_LINE(21)
	this->_repetitions = (int)-1;
	HX_STACK_LINE(20)
	this->_count = (int)0;
	HX_STACK_LINE(30)
	this->_parentClass = parentClass;
	HX_STACK_LINE(31)
	this->_repetitions = repetitions;
	HX_STACK_LINE(32)
	::openfl::events::TimerEvent _g = ::openfl::events::TimerEvent_obj::__new(::openfl::events::TimerEvent_obj::TIMER,null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(32)
	this->_timerEvent = _g;
	HX_STACK_LINE(33)
	if (((::com::danielfreeman::AnimationTimer_obj::_animationTimer == null()))){
		HX_STACK_LINE(34)
		::com::danielfreeman::AnimationTimer_obj::initialise(this->_parentClass->__Field(HX_CSTRING("stage"),true));
	}
}
;
	return null();
}

//AnimationTimer_obj::~AnimationTimer_obj() { }

Dynamic AnimationTimer_obj::__CreateEmpty() { return  new AnimationTimer_obj; }
hx::ObjectPtr< AnimationTimer_obj > AnimationTimer_obj::__new(::openfl::display::Sprite parentClass,hx::Null< int >  __o_repetitions)
{  hx::ObjectPtr< AnimationTimer_obj > result = new AnimationTimer_obj();
	result->__construct(parentClass,__o_repetitions);
	return result;}

Dynamic AnimationTimer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationTimer_obj > result = new AnimationTimer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void AnimationTimer_obj::addEventListener( ::String type,Dynamic callBack){
{
		HX_STACK_FRAME("com.danielfreeman.AnimationTimer","addEventListener",0xfa3c472e,"com.danielfreeman.AnimationTimer.addEventListener","com/danielfreeman/AnimationTimer.hx",40,0x9bd664af)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(callBack,"callBack")
		HX_STACK_LINE(40)
		if (((type == ::openfl::events::TimerEvent_obj::TIMER))){
			HX_STACK_LINE(41)
			this->_callBack = callBack;
		}
		else{
			HX_STACK_LINE(43)
			if (((type == ::openfl::events::TimerEvent_obj::TIMER_COMPLETE))){
				HX_STACK_LINE(44)
				this->_completeCallBack = callBack;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationTimer_obj,addEventListener,(void))

Void AnimationTimer_obj::removeEventListener( ::String type,Dynamic callBack){
{
		HX_STACK_FRAME("com.danielfreeman.AnimationTimer","removeEventListener",0xa351df09,"com.danielfreeman.AnimationTimer.removeEventListener","com/danielfreeman/AnimationTimer.hx",50,0x9bd664af)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(callBack,"callBack")
		HX_STACK_LINE(50)
		if (((type == ::openfl::events::TimerEvent_obj::TIMER))){
			HX_STACK_LINE(51)
			this->stop();
			HX_STACK_LINE(52)
			if (((::com::danielfreeman::AnimationTimer_obj::_callBacks->length == (int)0))){
				HX_STACK_LINE(53)
				::com::danielfreeman::AnimationTimer_obj::_animationTimer->stop();
			}
		}
		else{
			HX_STACK_LINE(56)
			if (((type == ::openfl::events::TimerEvent_obj::TIMER_COMPLETE))){
				HX_STACK_LINE(57)
				this->_completeCallBack = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationTimer_obj,removeEventListener,(void))

Void AnimationTimer_obj::exec( ){
{
		HX_STACK_FRAME("com.danielfreeman.AnimationTimer","exec",0x99586172,"com.danielfreeman.AnimationTimer.exec","com/danielfreeman/AnimationTimer.hx",62,0x9bd664af)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		(this->_count)++;
		HX_STACK_LINE(64)
		::Reflect_obj::callMethod(this->_parentClass,this->_callBack_dyn(),Dynamic( Array_obj<Dynamic>::__new().Add(this->_timerEvent)));
		HX_STACK_LINE(65)
		if (((bool((this->_repetitions > (int)0)) && bool((this->_count >= this->_repetitions))))){
			HX_STACK_LINE(66)
			if (((this->_completeCallBack_dyn() != null()))){
				HX_STACK_LINE(67)
				::Reflect_obj::callMethod(this->_parentClass,this->_completeCallBack_dyn(),Dynamic( Array_obj<Dynamic>::__new().Add(this->_timerEvent)));
			}
			HX_STACK_LINE(69)
			this->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationTimer_obj,exec,(void))

int AnimationTimer_obj::get_currentCount( ){
	HX_STACK_FRAME("com.danielfreeman.AnimationTimer","get_currentCount",0x9ee651c0,"com.danielfreeman.AnimationTimer.get_currentCount","com/danielfreeman/AnimationTimer.hx",75,0x9bd664af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	return this->_count;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationTimer_obj,get_currentCount,return )

bool AnimationTimer_obj::get_running( ){
	HX_STACK_FRAME("com.danielfreeman.AnimationTimer","get_running",0x76574e55,"com.danielfreeman.AnimationTimer.get_running","com/danielfreeman/AnimationTimer.hx",79,0x9bd664af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	int _g = ::com::danielfreeman::AnimationTimer_obj::_callBacks->indexOf(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(80)
	return (_g >= (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationTimer_obj,get_running,return )

Void AnimationTimer_obj::reset( ){
{
		HX_STACK_FRAME("com.danielfreeman.AnimationTimer","reset",0x03ae00ce,"com.danielfreeman.AnimationTimer.reset","com/danielfreeman/AnimationTimer.hx",85,0x9bd664af)
		HX_STACK_THIS(this)
		HX_STACK_LINE(85)
		this->_count = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationTimer_obj,reset,(void))

Void AnimationTimer_obj::stop( ){
{
		HX_STACK_FRAME("com.danielfreeman.AnimationTimer","stop",0xa2965de3,"com.danielfreeman.AnimationTimer.stop","com/danielfreeman/AnimationTimer.hx",89,0x9bd664af)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		::com::danielfreeman::AnimationTimer_obj::_callBacks->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(91)
		if (((::com::danielfreeman::AnimationTimer_obj::_callBacks->length == (int)0))){
			HX_STACK_LINE(92)
			::com::danielfreeman::AnimationTimer_obj::_animationTimer->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationTimer_obj,stop,(void))

Void AnimationTimer_obj::start( ){
{
		HX_STACK_FRAME("com.danielfreeman.AnimationTimer","start",0xa0f12b61,"com.danielfreeman.AnimationTimer.start","com/danielfreeman/AnimationTimer.hx",97,0x9bd664af)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		if (((::com::danielfreeman::AnimationTimer_obj::_callBacks->length == (int)0))){
			HX_STACK_LINE(99)
			::com::danielfreeman::AnimationTimer_obj::_animationTimer->reset();
			HX_STACK_LINE(100)
			::com::danielfreeman::AnimationTimer_obj::_animationTimer->start();
		}
		HX_STACK_LINE(102)
		int _g = ::com::danielfreeman::AnimationTimer_obj::_callBacks->indexOf(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		if (((_g < (int)0))){
			HX_STACK_LINE(103)
			::com::danielfreeman::AnimationTimer_obj::_callBacks->push(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationTimer_obj,start,(void))

Array< ::Dynamic > AnimationTimer_obj::_callBacks;

::openfl::utils::Timer AnimationTimer_obj::_animationTimer;

Void AnimationTimer_obj::initialise( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("com.danielfreeman.AnimationTimer","initialise",0xda62b7d8,"com.danielfreeman.AnimationTimer.initialise","com/danielfreeman/AnimationTimer.hx",108,0x9bd664af)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(109)
		::openfl::utils::Timer _g = ::openfl::utils::Timer_obj::__new((Float((int)1000) / Float(stage->frameRate)),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(109)
		::com::danielfreeman::AnimationTimer_obj::_animationTimer = _g;
		HX_STACK_LINE(110)
		::com::danielfreeman::AnimationTimer_obj::_animationTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,::com::danielfreeman::AnimationTimer_obj::animateFrame_dyn(),null(),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnimationTimer_obj,initialise,(void))

Void AnimationTimer_obj::animateFrame( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.AnimationTimer","animateFrame",0xc81f9cad,"com.danielfreeman.AnimationTimer.animateFrame","com/danielfreeman/AnimationTimer.hx",114,0x9bd664af)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(115)
			Array< ::Dynamic > _g1 = ::com::danielfreeman::AnimationTimer_obj::_callBacks;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(115)
			while((true)){
				HX_STACK_LINE(115)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(115)
					break;
				}
				HX_STACK_LINE(115)
				::com::danielfreeman::AnimationTimer callBack = _g1->__get(_g).StaticCast< ::com::danielfreeman::AnimationTimer >();		HX_STACK_VAR(callBack,"callBack");
				HX_STACK_LINE(115)
				++(_g);
				HX_STACK_LINE(116)
				Dynamic _g2 = ::Reflect_obj::field(callBack,HX_CSTRING("exec"));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(116)
				::Reflect_obj::callMethod(callBack,_g2,Dynamic( Array_obj<Dynamic>::__new()));
			}
		}
		HX_STACK_LINE(118)
		event->updateAfterEvent();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnimationTimer_obj,animateFrame,(void))

Void AnimationTimer_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.AnimationTimer","destructor",0x01b967da,"com.danielfreeman.AnimationTimer.destructor","com/danielfreeman/AnimationTimer.hx",122,0x9bd664af)
		HX_STACK_LINE(123)
		::com::danielfreeman::AnimationTimer_obj::_callBacks = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(124)
		::com::danielfreeman::AnimationTimer_obj::_animationTimer->removeEventListener(::openfl::events::TimerEvent_obj::TIMER,::com::danielfreeman::AnimationTimer_obj::animateFrame_dyn(),null());
		HX_STACK_LINE(125)
		::com::danielfreeman::AnimationTimer_obj::_animationTimer = null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AnimationTimer_obj,destructor,(void))


AnimationTimer_obj::AnimationTimer_obj()
{
}

void AnimationTimer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationTimer);
	HX_MARK_MEMBER_NAME(_count,"_count");
	HX_MARK_MEMBER_NAME(_repetitions,"_repetitions");
	HX_MARK_MEMBER_NAME(_parentClass,"_parentClass");
	HX_MARK_MEMBER_NAME(_callBack,"_callBack");
	HX_MARK_MEMBER_NAME(_completeCallBack,"_completeCallBack");
	HX_MARK_MEMBER_NAME(_timerEvent,"_timerEvent");
	HX_MARK_END_CLASS();
}

void AnimationTimer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_count,"_count");
	HX_VISIT_MEMBER_NAME(_repetitions,"_repetitions");
	HX_VISIT_MEMBER_NAME(_parentClass,"_parentClass");
	HX_VISIT_MEMBER_NAME(_callBack,"_callBack");
	HX_VISIT_MEMBER_NAME(_completeCallBack,"_completeCallBack");
	HX_VISIT_MEMBER_NAME(_timerEvent,"_timerEvent");
}

Dynamic AnimationTimer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exec") ) { return exec_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { return _count; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { return get_running(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_callBack") ) { return _callBack; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_callBacks") ) { return _callBacks; }
		if (HX_FIELD_EQ(inName,"initialise") ) { return initialise_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_timerEvent") ) { return _timerEvent; }
		if (HX_FIELD_EQ(inName,"get_running") ) { return get_running_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"animateFrame") ) { return animateFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"currentCount") ) { return get_currentCount(); }
		if (HX_FIELD_EQ(inName,"_repetitions") ) { return _repetitions; }
		if (HX_FIELD_EQ(inName,"_parentClass") ) { return _parentClass; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_animationTimer") ) { return _animationTimer; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currentCount") ) { return get_currentCount_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_completeCallBack") ) { return _completeCallBack; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimationTimer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_callBack") ) { _callBack=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_callBacks") ) { _callBacks=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_timerEvent") ) { _timerEvent=inValue.Cast< ::openfl::events::TimerEvent >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_repetitions") ) { _repetitions=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parentClass") ) { _parentClass=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_animationTimer") ) { _animationTimer=inValue.Cast< ::openfl::utils::Timer >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_completeCallBack") ) { _completeCallBack=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationTimer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("currentCount"));
	outFields->push(HX_CSTRING("running"));
	outFields->push(HX_CSTRING("_count"));
	outFields->push(HX_CSTRING("_repetitions"));
	outFields->push(HX_CSTRING("_parentClass"));
	outFields->push(HX_CSTRING("_timerEvent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_callBacks"),
	HX_CSTRING("_animationTimer"),
	HX_CSTRING("initialise"),
	HX_CSTRING("animateFrame"),
	HX_CSTRING("destructor"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AnimationTimer_obj,_count),HX_CSTRING("_count")},
	{hx::fsInt,(int)offsetof(AnimationTimer_obj,_repetitions),HX_CSTRING("_repetitions")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AnimationTimer_obj,_parentClass),HX_CSTRING("_parentClass")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AnimationTimer_obj,_callBack),HX_CSTRING("_callBack")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AnimationTimer_obj,_completeCallBack),HX_CSTRING("_completeCallBack")},
	{hx::fsObject /*::openfl::events::TimerEvent*/ ,(int)offsetof(AnimationTimer_obj,_timerEvent),HX_CSTRING("_timerEvent")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_count"),
	HX_CSTRING("_repetitions"),
	HX_CSTRING("_parentClass"),
	HX_CSTRING("_callBack"),
	HX_CSTRING("_completeCallBack"),
	HX_CSTRING("_timerEvent"),
	HX_CSTRING("addEventListener"),
	HX_CSTRING("removeEventListener"),
	HX_CSTRING("exec"),
	HX_CSTRING("get_currentCount"),
	HX_CSTRING("get_running"),
	HX_CSTRING("reset"),
	HX_CSTRING("stop"),
	HX_CSTRING("start"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationTimer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AnimationTimer_obj::_callBacks,"_callBacks");
	HX_MARK_MEMBER_NAME(AnimationTimer_obj::_animationTimer,"_animationTimer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationTimer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AnimationTimer_obj::_callBacks,"_callBacks");
	HX_VISIT_MEMBER_NAME(AnimationTimer_obj::_animationTimer,"_animationTimer");
};

#endif

Class AnimationTimer_obj::__mClass;

void AnimationTimer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.AnimationTimer"), hx::TCanCast< AnimationTimer_obj> ,sStaticFields,sMemberFields,
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

void AnimationTimer_obj::__boot()
{
	_callBacks= Array_obj< ::Dynamic >::__new();
	_animationTimer= null();
}

} // end namespace com
} // end namespace danielfreeman
