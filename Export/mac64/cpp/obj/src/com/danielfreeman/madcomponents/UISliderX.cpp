#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UISlider
#include <com/danielfreeman/madcomponents/UISlider.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UISliderX
#include <com/danielfreeman/madcomponents/UISliderX.h>
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

Void UISliderX_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UISliderX","new",0x34789f61,"com.danielfreeman.madcomponents.UISliderX.new","com/danielfreeman/madcomponents/UISliderX.hx",62,0xc29c6ef2)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(63)
	Array< int > _g = attributes->get_backgroundColours();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(63)
	bool _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(63)
	if ((xml->has->resolve(HX_CSTRING("alt")))){
		HX_STACK_LINE(63)
		::String _g1 = xml->att->resolve(HX_CSTRING("alt"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(63)
		_g2 = (_g1 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(63)
		_g2 = false;
	}
	HX_STACK_LINE(63)
	bool _g3 = attributes->get_style7();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(63)
	super::__construct(screen,attributes->x,attributes->y,_g,_g2,_g3);
	HX_STACK_LINE(64)
	this->_attributes = attributes;
	HX_STACK_LINE(66)
	if ((attributes->get_fillH())){
		HX_STACK_LINE(67)
		Float _g4 = attributes->get_widthH();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(67)
		this->set_fixwidth(_g4);
	}
	HX_STACK_LINE(69)
	if ((xml->has->resolve(HX_CSTRING("value")))){
		HX_STACK_LINE(70)
		::String _g5 = xml->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(70)
		Float _g6 = ::Std_obj::parseFloat(_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(70)
		this->set_value(_g6);
	}
}
;
	return null();
}

//UISliderX_obj::~UISliderX_obj() { }

Dynamic UISliderX_obj::__CreateEmpty() { return  new UISliderX_obj; }
hx::ObjectPtr< UISliderX_obj > UISliderX_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UISliderX_obj > result = new UISliderX_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UISliderX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UISliderX_obj > result = new UISliderX_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UISliderX_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

Void UISliderX_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISliderX","layout",0x26e87649,"com.danielfreeman.madcomponents.UISliderX.layout","com/danielfreeman/madcomponents/UISliderX.hx",75,0xc29c6ef2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(76)
		this->super::layout(attributes);
		HX_STACK_LINE(77)
		if ((attributes->get_fillH())){
			HX_STACK_LINE(78)
			Float _g = attributes->get_widthH();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(78)
			this->set_fixwidth(_g);
		}
	}
return null();
}



UISliderX_obj::UISliderX_obj()
{
}

Dynamic UISliderX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UISliderX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void UISliderX_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("layout"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UISliderX_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UISliderX_obj::__mClass,"__mClass");
};

#endif

Class UISliderX_obj::__mClass;

void UISliderX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UISliderX"), hx::TCanCast< UISliderX_obj> ,sStaticFields,sMemberFields,
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

void UISliderX_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
