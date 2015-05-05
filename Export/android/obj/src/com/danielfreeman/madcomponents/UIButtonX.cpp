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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIButton
#include <com/danielfreeman/madcomponents/UIButton.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIButtonX
#include <com/danielfreeman/madcomponents/UIButtonX.h>
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

Void UIButtonX_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButtonX","new",0x12418df0,"com.danielfreeman.madcomponents.UIButtonX.new","com/danielfreeman/madcomponents/UIButtonX.hx",15,0x28a0c743)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(16)
	::String _g = xml->toXMLString();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(16)
	int _g1 = attributes->get_colour();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(16)
	Array< int > _g2 = attributes->get_backgroundColours();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(16)
	bool _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(16)
	if ((xml->has->resolve(HX_CSTRING("alt")))){
		HX_STACK_LINE(16)
		::String _g3 = xml->att->resolve(HX_CSTRING("alt"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(16)
		_g4 = (_g3 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(16)
		_g4 = false;
	}
	HX_STACK_LINE(16)
	bool _g5 = attributes->get_style7();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(16)
	super::__construct(screen,attributes->x,attributes->y,_g,_g1,_g2,_g4,_g5);
	HX_STACK_LINE(17)
	this->_attributes = attributes;
	HX_STACK_LINE(23)
	if ((attributes->get_fillH())){
		HX_STACK_LINE(24)
		Float _g6 = attributes->get_widthH();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(24)
		this->set_fixwidth(_g6);
	}
	HX_STACK_LINE(26)
	if ((attributes->get_fillV())){
		HX_STACK_LINE(27)
		Float _g7 = attributes->get_heightV();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(27)
		this->set_skinHeight(_g7);
	}
	HX_STACK_LINE(30)
	if ((xml->has->resolve(HX_CSTRING("curve")))){
		HX_STACK_LINE(31)
		::String _g8 = xml->att->resolve(HX_CSTRING("curve"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(31)
		Float _g9 = ::Std_obj::parseFloat(_g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(31)
		this->set_curve(_g9);
	}
	HX_STACK_LINE(34)
	if ((xml->has->resolve(HX_CSTRING("goTo")))){
		HX_STACK_LINE(35)
		::String _g10 = xml->att->resolve(HX_CSTRING("goTo"));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(35)
		::String _g11;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(35)
		if ((xml->has->resolve(HX_CSTRING("transition")))){
			HX_STACK_LINE(35)
			_g11 = xml->att->resolve(HX_CSTRING("transition"));
		}
		else{
			HX_STACK_LINE(35)
			_g11 = HX_CSTRING("");
		}
		HX_STACK_LINE(35)
		this->setGoTo(_g10,_g11);
	}
}
;
	return null();
}

//UIButtonX_obj::~UIButtonX_obj() { }

Dynamic UIButtonX_obj::__CreateEmpty() { return  new UIButtonX_obj; }
hx::ObjectPtr< UIButtonX_obj > UIButtonX_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIButtonX_obj > result = new UIButtonX_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIButtonX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIButtonX_obj > result = new UIButtonX_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UIButtonX_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

Void UIButtonX_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIButtonX","layout",0xc56dcb1a,"com.danielfreeman.madcomponents.UIButtonX.layout","com/danielfreeman/madcomponents/UIButtonX.hx",40,0x28a0c743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(41)
		this->super::layout(attributes);
		HX_STACK_LINE(42)
		if ((attributes->get_fillV())){
			HX_STACK_LINE(43)
			Float _g = attributes->get_heightV();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(43)
			this->set_skinHeight(_g);
		}
		HX_STACK_LINE(45)
		if ((attributes->get_fillH())){
			HX_STACK_LINE(46)
			Float _g1 = attributes->get_widthH();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(46)
			this->set_fixwidth(_g1);
		}
	}
return null();
}



UIButtonX_obj::UIButtonX_obj()
{
}

Dynamic UIButtonX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIButtonX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void UIButtonX_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(UIButtonX_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIButtonX_obj::__mClass,"__mClass");
};

#endif

Class UIButtonX_obj::__mClass;

void UIButtonX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIButtonX"), hx::TCanCast< UIButtonX_obj> ,sStaticFields,sMemberFields,
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

void UIButtonX_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
