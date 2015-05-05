#include <hxcpp.h>

#ifndef INCLUDED_com_danielfreeman_madcomponents_UIActivity
#include <com/danielfreeman/madcomponents/UIActivity.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIRefresh
#include <com/danielfreeman/madcomponents/UIRefresh.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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

Void UIRefresh_obj::__construct(::openfl::display::Sprite screen,Float xx,Float yy,int colour,::String label)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIRefresh","new",0xb6439425,"com.danielfreeman.madcomponents.UIRefresh.new","com/danielfreeman/madcomponents/UIRefresh.hx",41,0x76473eae)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xx,"xx")
HX_STACK_ARG(yy,"yy")
HX_STACK_ARG(colour,"colour")
HX_STACK_ARG(label,"label")
{
	HX_STACK_LINE(42)
	super::__construct();
	HX_STACK_LINE(43)
	screen->addChild(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(44)
	this->set_x(xx);
	HX_STACK_LINE(44)
	this->set_y(yy);
	HX_STACK_LINE(45)
	::com::danielfreeman::madcomponents::UIActivity _g = ::com::danielfreeman::madcomponents::UIActivity_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)0,(int)0,true,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(45)
	this->_refresh = _g;
	HX_STACK_LINE(46)
	Float _g1 = this->_refresh->set_scaleY(0.3);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(46)
	this->_refresh->set_scaleX(_g1);
	HX_STACK_LINE(47)
	::openfl::text::TextFormat _g2 = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)14,colour,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(47)
	::com::danielfreeman::madcomponents::UILabel _g3 = ::com::danielfreeman::madcomponents::UILabel_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)16,(int)-10,label,_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(47)
	this->_label = _g3;
}
;
	return null();
}

//UIRefresh_obj::~UIRefresh_obj() { }

Dynamic UIRefresh_obj::__CreateEmpty() { return  new UIRefresh_obj; }
hx::ObjectPtr< UIRefresh_obj > UIRefresh_obj::__new(::openfl::display::Sprite screen,Float xx,Float yy,int colour,::String label)
{  hx::ObjectPtr< UIRefresh_obj > result = new UIRefresh_obj();
	result->__construct(screen,xx,yy,colour,label);
	return result;}

Dynamic UIRefresh_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIRefresh_obj > result = new UIRefresh_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void UIRefresh_obj::changeState( ::String label,bool rotate){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIRefresh","changeState",0x9d81af46,"com.danielfreeman.madcomponents.UIRefresh.changeState","com/danielfreeman/madcomponents/UIRefresh.hx",51,0x76473eae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(label,"label")
		HX_STACK_ARG(rotate,"rotate")
		HX_STACK_LINE(52)
		this->_label->set_text(label);
		HX_STACK_LINE(53)
		this->_refresh->set_rotate(rotate);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIRefresh_obj,changeState,(void))


UIRefresh_obj::UIRefresh_obj()
{
}

void UIRefresh_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIRefresh);
	HX_MARK_MEMBER_NAME(_refresh,"_refresh");
	HX_MARK_MEMBER_NAME(_label,"_label");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIRefresh_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_refresh,"_refresh");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIRefresh_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { return _label; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_refresh") ) { return _refresh; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"changeState") ) { return changeState_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIRefresh_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::com::danielfreeman::madcomponents::UILabel >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_refresh") ) { _refresh=inValue.Cast< ::com::danielfreeman::madcomponents::UIActivity >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIRefresh_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_refresh"));
	outFields->push(HX_CSTRING("_label"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::danielfreeman::madcomponents::UIActivity*/ ,(int)offsetof(UIRefresh_obj,_refresh),HX_CSTRING("_refresh")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UILabel*/ ,(int)offsetof(UIRefresh_obj,_label),HX_CSTRING("_label")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_refresh"),
	HX_CSTRING("_label"),
	HX_CSTRING("changeState"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIRefresh_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIRefresh_obj::__mClass,"__mClass");
};

#endif

Class UIRefresh_obj::__mClass;

void UIRefresh_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIRefresh"), hx::TCanCast< UIRefresh_obj> ,sStaticFields,sMemberFields,
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

void UIRefresh_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
