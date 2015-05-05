#include <hxcpp.h>

#ifndef INCLUDED_com_danielfreeman_MadXML
#include <com/danielfreeman/MadXML.h>
#endif
#ifndef INCLUDED_com_danielfreeman__MadXML_AttribAccess
#include <com/danielfreeman/_MadXML/AttribAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman__MadXML_HasAttribAccess
#include <com/danielfreeman/_MadXML/HasAttribAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UILine
#include <com/danielfreeman/extendedmadness/UILine.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UI
#include <com/danielfreeman/madcomponents/UI.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void UILine_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UILine","new",0x24c98426,"com.danielfreeman.extendedmadness.UILine.new","com/danielfreeman/extendedmadness/UILine.hx",55,0x887eede7)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(56)
	bool _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(56)
	if ((!((!(xml->has->resolve(HX_CSTRING("border"))))))){
		HX_STACK_LINE(56)
		::String _g = xml->att->resolve(HX_CSTRING("border"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(56)
		_g1 = (_g == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(56)
		_g1 = true;
	}
	HX_STACK_LINE(56)
	this->_border = _g1;
	HX_STACK_LINE(57)
	super::__construct(screen,attributes);
	HX_STACK_LINE(58)
	this->drawComponent();
}
;
	return null();
}

//UILine_obj::~UILine_obj() { }

Dynamic UILine_obj::__CreateEmpty() { return  new UILine_obj; }
hx::ObjectPtr< UILine_obj > UILine_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UILine_obj > result = new UILine_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UILine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UILine_obj > result = new UILine_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UILine_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

Void UILine_obj::drawComponent( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UILine","drawComponent",0xc8356b5f,"com.danielfreeman.extendedmadness.UILine.drawComponent","com/danielfreeman/extendedmadness/UILine.hx",62,0x887eede7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		this->get_graphics()->clear();
		HX_STACK_LINE(64)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(64)
		if (((this->_attributes->get_backgroundColours()->length > (int)0))){
			HX_STACK_LINE(64)
			Array< int > _g = this->_attributes->get_backgroundColours();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(64)
			_g1 = _g->__get((int)0);
		}
		else{
			HX_STACK_LINE(64)
			_g1 = (int)3355443;
		}
		HX_STACK_LINE(64)
		this->get_graphics()->beginFill(_g1,null());
		HX_STACK_LINE(65)
		Float _g2 = this->_attributes->get_widthH();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(65)
		Float _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(65)
		_g3 = (_g2 + ((  ((this->_border)) ? Float((int)0) : Float(((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING)) )));
		HX_STACK_LINE(65)
		this->get_graphics()->drawRect((  ((this->_border)) ? Float((int)0) : Float(-(::com::danielfreeman::madcomponents::UI_obj::PADDING)) ),(int)0,_g3,(int)1);
		HX_STACK_LINE(66)
		int _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(66)
		if (((this->_attributes->get_backgroundColours()->length > (int)1))){
			HX_STACK_LINE(66)
			Array< int > _g4 = this->_attributes->get_backgroundColours();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(66)
			_g5 = _g4->__get((int)1);
		}
		else{
			HX_STACK_LINE(66)
			_g5 = (int)16777215;
		}
		HX_STACK_LINE(66)
		this->get_graphics()->beginFill(_g5,null());
		HX_STACK_LINE(67)
		Float _g6 = this->_attributes->get_widthH();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(67)
		Float _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(67)
		_g7 = (_g6 + ((  ((this->_border)) ? Float((int)0) : Float(((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING)) )));
		HX_STACK_LINE(67)
		this->get_graphics()->drawRect((  ((this->_border)) ? Float((int)0) : Float(-(::com::danielfreeman::madcomponents::UI_obj::PADDING)) ),(int)1,_g7,(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UILine_obj,drawComponent,(void))

int UILine_obj::DARK;

int UILine_obj::LIGHT;


UILine_obj::UILine_obj()
{
}

Dynamic UILine_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_border") ) { return _border; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawComponent") ) { return drawComponent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UILine_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_border") ) { _border=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UILine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_border"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DARK"),
	HX_CSTRING("LIGHT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(UILine_obj,_border),HX_CSTRING("_border")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_border"),
	HX_CSTRING("drawComponent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UILine_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UILine_obj::DARK,"DARK");
	HX_MARK_MEMBER_NAME(UILine_obj::LIGHT,"LIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UILine_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UILine_obj::DARK,"DARK");
	HX_VISIT_MEMBER_NAME(UILine_obj::LIGHT,"LIGHT");
};

#endif

Class UILine_obj::__mClass;

void UILine_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UILine"), hx::TCanCast< UILine_obj> ,sStaticFields,sMemberFields,
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

void UILine_obj::__boot()
{
	DARK= (int)3355443;
	LIGHT= (int)16777215;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
