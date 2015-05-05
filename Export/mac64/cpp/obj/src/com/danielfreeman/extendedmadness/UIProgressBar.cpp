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
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIProgressBar
#include <com/danielfreeman/extendedmadness/UIProgressBar.h>
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
namespace extendedmadness{

Void UIProgressBar_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIProgressBar","new",0xcc624ed8,"com.danielfreeman.extendedmadness.UIProgressBar.new","com/danielfreeman/extendedmadness/UIProgressBar.hx",61,0x69690d5b)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(62)
	this->_xml = xml;
	HX_STACK_LINE(64)
	Array< int > _g = attributes->get_backgroundColours();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(64)
	bool _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(64)
	if ((xml->has->resolve(HX_CSTRING("alt")))){
		HX_STACK_LINE(64)
		::String _g1 = xml->att->resolve(HX_CSTRING("alt"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(64)
		_g2 = (_g1 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(64)
		_g2 = false;
	}
	HX_STACK_LINE(64)
	super::__construct(screen,(int)0,(int)0,_g,_g2,null());
	HX_STACK_LINE(65)
	if ((attributes->get_fillH())){
		HX_STACK_LINE(66)
		Float _g3 = attributes->get_widthH();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(66)
		this->set_fixwidth(_g3);
	}
	HX_STACK_LINE(68)
	if ((xml->has->resolve(HX_CSTRING("value")))){
		HX_STACK_LINE(69)
		::String _g4 = xml->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(69)
		Float _g5 = ::Std_obj::parseFloat(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(69)
		this->set_value(_g5);
	}
}
;
	return null();
}

//UIProgressBar_obj::~UIProgressBar_obj() { }

Dynamic UIProgressBar_obj::__CreateEmpty() { return  new UIProgressBar_obj; }
hx::ObjectPtr< UIProgressBar_obj > UIProgressBar_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIProgressBar_obj > result = new UIProgressBar_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIProgressBar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIProgressBar_obj > result = new UIProgressBar_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UIProgressBar_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

Void UIProgressBar_obj::createKnob( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIProgressBar","createKnob",0xef1e2f1a,"com.danielfreeman.extendedmadness.UIProgressBar.createKnob","com/danielfreeman/extendedmadness/UIProgressBar.hx",74,0x69690d5b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(75)
		this->_knob = _g;
		HX_STACK_LINE(76)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(76)
		if ((this->_attributes->get_style7())){
			HX_STACK_LINE(76)
			_g1 = (int)3;
		}
		else{
			HX_STACK_LINE(76)
			_g1 = this->_radius;
		}
		HX_STACK_LINE(76)
		this->_sliderHeight = _g1;
		HX_STACK_LINE(77)
		Float _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(77)
		if ((this->_xml->has->resolve(HX_CSTRING("curve")))){
			HX_STACK_LINE(77)
			::String _g2 = this->_xml->att->resolve(HX_CSTRING("curve"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(77)
			_g3 = ::Std_obj::parseFloat(_g2);
		}
		else{
			HX_STACK_LINE(77)
			_g3 = this->_sliderHeight;
		}
		HX_STACK_LINE(77)
		this->_curve = _g3;
	}
return null();
}


Void UIProgressBar_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIProgressBar","layout",0xa19e8b32,"com.danielfreeman.extendedmadness.UIProgressBar.layout","com/danielfreeman/extendedmadness/UIProgressBar.hx",81,0x69690d5b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(82)
		this->super::layout(attributes);
		HX_STACK_LINE(83)
		if ((attributes->get_fillH())){
			HX_STACK_LINE(84)
			Float _g = attributes->get_widthH();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(84)
			this->set_fixwidth(_g);
		}
	}
return null();
}


Float UIProgressBar_obj::set_value( Float valuu){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIProgressBar","set_value",0xb1c3704c,"com.danielfreeman.extendedmadness.UIProgressBar.set_value","com/danielfreeman/extendedmadness/UIProgressBar.hx",117,0x69690d5b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(valuu,"valuu")
	HX_STACK_LINE(118)
	this->_value = valuu;
	HX_STACK_LINE(119)
	this->_knob->set_x(((valuu * this->_width) - (Float(this->_curve) / Float((int)2))));
	HX_STACK_LINE(120)
	this->drawComponent();
	HX_STACK_LINE(121)
	return valuu;
}



UIProgressBar_obj::UIProgressBar_obj()
{
}

void UIProgressBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIProgressBar);
	HX_MARK_MEMBER_NAME(_xml,"_xml");
	::com::danielfreeman::madcomponents::UISlider_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIProgressBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_xml,"_xml");
	::com::danielfreeman::madcomponents::UISlider_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIProgressBar_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_xml") ) { return _xml; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createKnob") ) { return createKnob_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIProgressBar_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_xml") ) { _xml=inValue.Cast< ::com::danielfreeman::MadXML >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIProgressBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_xml"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::danielfreeman::MadXML*/ ,(int)offsetof(UIProgressBar_obj,_xml),HX_CSTRING("_xml")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_xml"),
	HX_CSTRING("createKnob"),
	HX_CSTRING("layout"),
	HX_CSTRING("set_value"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIProgressBar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIProgressBar_obj::__mClass,"__mClass");
};

#endif

Class UIProgressBar_obj::__mClass;

void UIProgressBar_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UIProgressBar"), hx::TCanCast< UIProgressBar_obj> ,sStaticFields,sMemberFields,
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

void UIProgressBar_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
