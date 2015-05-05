#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UI
#include <com/danielfreeman/madcomponents/UI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIBlueText
#include <com/danielfreeman/madcomponents/UIBlueText.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIInput
#include <com/danielfreeman/madcomponents/UIInput.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIInputX
#include <com/danielfreeman/madcomponents/UIInputX.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UIInputX_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIInputX","new",0x9d933828,"com.danielfreeman.madcomponents.UIInputX.new","com/danielfreeman/madcomponents/UIInputX.hx",9,0xd36425e5)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(10)
	::String _g = xml->get_innerHTML();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(10)
	Array< int > _g1 = attributes->get_backgroundColours();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(10)
	bool _g2 = attributes->get_style7();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(10)
	bool _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(10)
	if ((xml->has->resolve(HX_CSTRING("alt")))){
		HX_STACK_LINE(10)
		::String _g3 = xml->att->resolve(HX_CSTRING("alt"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(10)
		_g4 = (_g3 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(10)
		_g4 = false;
	}
	HX_STACK_LINE(10)
	bool _g5 = (_g2 != _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(10)
	::String _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(10)
	if ((xml->has->resolve(HX_CSTRING("prompt")))){
		HX_STACK_LINE(10)
		_g6 = xml->att->resolve(HX_CSTRING("prompt"));
	}
	else{
		HX_STACK_LINE(10)
		_g6 = HX_CSTRING("");
	}
	HX_STACK_LINE(10)
	int _g8;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(10)
	if ((xml->has->resolve(HX_CSTRING("promptColour")))){
		HX_STACK_LINE(10)
		::String _g7 = xml->att->resolve(HX_CSTRING("promptColour"));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(10)
		_g8 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g7);
	}
	else{
		HX_STACK_LINE(10)
		_g8 = (int)10066329;
	}
	HX_STACK_LINE(10)
	bool _g9 = attributes->get_style7();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(10)
	super::__construct(screen,attributes->x,attributes->y,_g,_g1,_g5,_g6,_g8,_g9);
	HX_STACK_LINE(11)
	if ((attributes->get_fillH())){
		HX_STACK_LINE(12)
		Float _g10 = attributes->get_widthH();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(12)
		this->set_fixwidth(_g10);
	}
	HX_STACK_LINE(14)
	bool _g12;		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(14)
	if ((xml->has->resolve(HX_CSTRING("password")))){
		HX_STACK_LINE(14)
		::String _g11 = xml->att->resolve(HX_CSTRING("password"));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(14)
		_g12 = (_g11 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(14)
		_g12 = false;
	}
	HX_STACK_LINE(14)
	(hx::TCast< com::danielfreeman::madcomponents::UIBlueText >::cast(this->get_inputField()))->set_password(_g12);
}
;
	return null();
}

//UIInputX_obj::~UIInputX_obj() { }

Dynamic UIInputX_obj::__CreateEmpty() { return  new UIInputX_obj; }
hx::ObjectPtr< UIInputX_obj > UIInputX_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIInputX_obj > result = new UIInputX_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIInputX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIInputX_obj > result = new UIInputX_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UIInputX_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

Void UIInputX_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIInputX","layout",0xe60653e2,"com.danielfreeman.madcomponents.UIInputX.layout","com/danielfreeman/madcomponents/UIInputX.hx",18,0xd36425e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(19)
		this->super::layout(attributes);
		HX_STACK_LINE(20)
		if ((attributes->get_fillH())){
			HX_STACK_LINE(21)
			Float _g = attributes->get_widthH();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(21)
			this->set_fixwidth(_g);
		}
	}
return null();
}



UIInputX_obj::UIInputX_obj()
{
}

Dynamic UIInputX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIInputX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void UIInputX_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(UIInputX_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIInputX_obj::__mClass,"__mClass");
};

#endif

Class UIInputX_obj::__mClass;

void UIInputX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIInputX"), hx::TCanCast< UIInputX_obj> ,sStaticFields,sMemberFields,
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

void UIInputX_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
