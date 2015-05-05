#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_Attributes
#include <com/danielfreeman/madcomponents/Attributes.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IComponentUI
#include <com/danielfreeman/madcomponents/IComponentUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UISpacer
#include <com/danielfreeman/madcomponents/UISpacer.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UISpacer_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UISpacer","new",0x78f85b06,"com.danielfreeman.madcomponents.UISpacer.new","com/danielfreeman/madcomponents/UISpacer.hx",55,0x4f3588c7)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(61)
	this->_height = (int)0;
	HX_STACK_LINE(60)
	this->_width = (int)0;
	HX_STACK_LINE(65)
	super::__construct(screen,attributes);
	HX_STACK_LINE(66)
	if ((xml->has->resolve(HX_CSTRING("width")))){
		HX_STACK_LINE(67)
		::String _g = xml->att->resolve(HX_CSTRING("width"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		Float _g1 = ::Std_obj::parseFloat(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(67)
		this->_width = _g1;
	}
	HX_STACK_LINE(69)
	if ((xml->has->resolve(HX_CSTRING("height")))){
		HX_STACK_LINE(70)
		::String _g2 = xml->att->resolve(HX_CSTRING("height"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(70)
		Float _g3 = ::Std_obj::parseFloat(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(70)
		this->_height = _g3;
	}
}
;
	return null();
}

//UISpacer_obj::~UISpacer_obj() { }

Dynamic UISpacer_obj::__CreateEmpty() { return  new UISpacer_obj; }
hx::ObjectPtr< UISpacer_obj > UISpacer_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UISpacer_obj > result = new UISpacer_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UISpacer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UISpacer_obj > result = new UISpacer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UISpacer_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

Float UISpacer_obj::get_theWidth( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UISpacer","get_theWidth",0x6c0d3078,"com.danielfreeman.madcomponents.UISpacer.get_theWidth","com/danielfreeman/madcomponents/UISpacer.hx",75,0x4f3588c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	Float _g = this->_attributes->get_paddingH();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(76)
	Float _g1 = ((int)2 * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(76)
	return (this->_width - _g1);
}


Float UISpacer_obj::get_theHeight( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UISpacer","get_theHeight",0xd5ccb135,"com.danielfreeman.madcomponents.UISpacer.get_theHeight","com/danielfreeman/madcomponents/UISpacer.hx",79,0x4f3588c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	Float _g = this->_attributes->get_paddingV();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(80)
	Float _g1 = ((int)2 * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(80)
	return (this->_height - _g1);
}



UISpacer_obj::UISpacer_obj()
{
}

Dynamic UISpacer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_theWidth") ) { return get_theWidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_theHeight") ) { return get_theHeight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UISpacer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UISpacer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_height"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(UISpacer_obj,_width),HX_CSTRING("_width")},
	{hx::fsFloat,(int)offsetof(UISpacer_obj,_height),HX_CSTRING("_height")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_width"),
	HX_CSTRING("_height"),
	HX_CSTRING("get_theWidth"),
	HX_CSTRING("get_theHeight"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UISpacer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UISpacer_obj::__mClass,"__mClass");
};

#endif

Class UISpacer_obj::__mClass;

void UISpacer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UISpacer"), hx::TCanCast< UISpacer_obj> ,sStaticFields,sMemberFields,
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

void UISpacer_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
