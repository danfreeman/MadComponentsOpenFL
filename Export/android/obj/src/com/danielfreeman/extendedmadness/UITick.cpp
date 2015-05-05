#include <hxcpp.h>

#ifndef INCLUDED_com_danielfreeman_extendedmadness_UITick
#include <com/danielfreeman/extendedmadness/UITick.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void UITick_obj::__construct(::openfl::display::Sprite screen,Float xx,Float yy,int colour,hx::Null< bool >  __o_alt)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITick","new",0xfcd7980f,"com.danielfreeman.extendedmadness.UITick.new","com/danielfreeman/extendedmadness/UITick.hx",49,0x83b98a1e)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xx,"xx")
HX_STACK_ARG(yy,"yy")
HX_STACK_ARG(colour,"colour")
HX_STACK_ARG(__o_alt,"alt")
bool alt = __o_alt.Default(false);
{
	HX_STACK_LINE(60)
	this->_width = 4.0;
	HX_STACK_LINE(65)
	super::__construct();
	HX_STACK_LINE(66)
	screen->addChild(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(67)
	this->set_x(xx);
	HX_STACK_LINE(67)
	this->set_y(yy);
	HX_STACK_LINE(69)
	this->set_mouseEnabled(false);
	HX_STACK_LINE(70)
	if ((alt)){
		HX_STACK_LINE(71)
		this->_width = (int)6;
	}
	HX_STACK_LINE(72)
	this->set_colour(colour);
}
;
	return null();
}

//UITick_obj::~UITick_obj() { }

Dynamic UITick_obj::__CreateEmpty() { return  new UITick_obj; }
hx::ObjectPtr< UITick_obj > UITick_obj::__new(::openfl::display::Sprite screen,Float xx,Float yy,int colour,hx::Null< bool >  __o_alt)
{  hx::ObjectPtr< UITick_obj > result = new UITick_obj();
	result->__construct(screen,xx,yy,colour,__o_alt);
	return result;}

Dynamic UITick_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UITick_obj > result = new UITick_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

int UITick_obj::set_colour( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITick","set_colour",0xf49af2ba,"com.danielfreeman.extendedmadness.UITick.set_colour","com/danielfreeman/extendedmadness/UITick.hx",78,0x83b98a1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(79)
	this->get_graphics()->clear();
	HX_STACK_LINE(80)
	this->get_graphics()->beginFill(value,null());
	HX_STACK_LINE(81)
	this->get_graphics()->moveTo((int)0,(::com::danielfreeman::extendedmadness::UITick_obj::HEIGHT - 6.0));
	HX_STACK_LINE(82)
	this->get_graphics()->lineTo((int)0,((::com::danielfreeman::extendedmadness::UITick_obj::HEIGHT - 6.0) + this->_width));
	HX_STACK_LINE(83)
	this->get_graphics()->lineTo(6.0,(::com::danielfreeman::extendedmadness::UITick_obj::HEIGHT + this->_width));
	HX_STACK_LINE(84)
	this->get_graphics()->lineTo(18.0,this->_width);
	HX_STACK_LINE(85)
	this->get_graphics()->lineTo(18.0,(int)0);
	HX_STACK_LINE(86)
	this->get_graphics()->lineTo(6.0,::com::danielfreeman::extendedmadness::UITick_obj::HEIGHT);
	HX_STACK_LINE(87)
	this->get_graphics()->lineTo((int)0,(::com::danielfreeman::extendedmadness::UITick_obj::HEIGHT - 6.0));
	HX_STACK_LINE(88)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UITick_obj,set_colour,return )

::String UITick_obj::set_text( ::String value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITick","set_text",0x40f0df9b,"com.danielfreeman.extendedmadness.UITick.set_text","com/danielfreeman/extendedmadness/UITick.hx",94,0x83b98a1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(95)
	this->set_visible((value != HX_CSTRING("false")));
	HX_STACK_LINE(96)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UITick_obj,set_text,return )

Float UITick_obj::SIZE;

Float UITick_obj::HEAD;

Float UITick_obj::HEIGHT;

Float UITick_obj::WIDTH;


UITick_obj::UITick_obj()
{
}

Dynamic UITick_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"HEIGHT") ) { return HEIGHT; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_colour") ) { return set_colour_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UITick_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"HEIGHT") ) { HEIGHT=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colour") ) { return set_colour(inValue); }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UITick_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("colour"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("_width"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SIZE"),
	HX_CSTRING("HEAD"),
	HX_CSTRING("HEIGHT"),
	HX_CSTRING("WIDTH"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(UITick_obj,_width),HX_CSTRING("_width")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_width"),
	HX_CSTRING("set_colour"),
	HX_CSTRING("set_text"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UITick_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UITick_obj::SIZE,"SIZE");
	HX_MARK_MEMBER_NAME(UITick_obj::HEAD,"HEAD");
	HX_MARK_MEMBER_NAME(UITick_obj::HEIGHT,"HEIGHT");
	HX_MARK_MEMBER_NAME(UITick_obj::WIDTH,"WIDTH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UITick_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UITick_obj::SIZE,"SIZE");
	HX_VISIT_MEMBER_NAME(UITick_obj::HEAD,"HEAD");
	HX_VISIT_MEMBER_NAME(UITick_obj::HEIGHT,"HEIGHT");
	HX_VISIT_MEMBER_NAME(UITick_obj::WIDTH,"WIDTH");
};

#endif

Class UITick_obj::__mClass;

void UITick_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UITick"), hx::TCanCast< UITick_obj> ,sStaticFields,sMemberFields,
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

void UITick_obj::__boot()
{
	SIZE= 18.0;
	HEAD= 6.0;
	HEIGHT= 16.;
	WIDTH= 4.0;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
