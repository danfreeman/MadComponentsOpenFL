#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
#endif
#ifndef INCLUDED_MadXMLList
#include <MadXMLList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UITouch
#include <com/danielfreeman/extendedmadness/UITouch.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_Attributes
#include <com/danielfreeman/madcomponents/Attributes.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IComponentUI
#include <com/danielfreeman/madcomponents/IComponentUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IContainerUI
#include <com/danielfreeman/madcomponents/IContainerUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadMasking
#include <com/danielfreeman/madcomponents/MadMasking.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIContainerBaseClass
#include <com/danielfreeman/madcomponents/UIContainerBaseClass.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIForm
#include <com/danielfreeman/madcomponents/UIForm.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void UITouch_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITouch","new",0x8b9a5af1,"com.danielfreeman.extendedmadness.UITouch.new","com/danielfreeman/extendedmadness/UITouch.hx",40,0x75824322)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(41)
	super::__construct(screen,xml,attributes);
	HX_STACK_LINE(42)
	::com::danielfreeman::madcomponents::Attributes childAttributes = attributes->copy(xml,null());		HX_STACK_VAR(childAttributes,"childAttributes");
	HX_STACK_LINE(43)
	::String _g = xml->children(null())->get((int)0)->toXMLString();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(43)
	::String _g1 = (HX_CSTRING("<up>") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(43)
	::String _g2 = (_g1 + HX_CSTRING("</up>"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(43)
	::MadXML _g3 = ::MadXML_obj::parse(_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(43)
	::com::danielfreeman::madcomponents::UIForm _g4 = ::com::danielfreeman::madcomponents::UIForm_obj::__new(hx::ObjectPtr<OBJ_>(this),_g3,childAttributes,null(),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(43)
	this->_up = _g4;
	HX_STACK_LINE(44)
	::String _g5 = xml->children(null())->get((int)1)->toXMLString();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(44)
	::String _g6 = (HX_CSTRING("<down>") + _g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(44)
	::String _g7 = (_g6 + HX_CSTRING("</down>"));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(44)
	::MadXML _g8 = ::MadXML_obj::parse(_g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(44)
	::com::danielfreeman::madcomponents::UIForm _g9 = ::com::danielfreeman::madcomponents::UIForm_obj::__new(hx::ObjectPtr<OBJ_>(this),_g8,childAttributes,null(),null());		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(44)
	this->_down = _g9;
	HX_STACK_LINE(45)
	this->_down->set_visible(false);
	HX_STACK_LINE(46)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null(),null(),null());
}
;
	return null();
}

//UITouch_obj::~UITouch_obj() { }

Dynamic UITouch_obj::__CreateEmpty() { return  new UITouch_obj; }
hx::ObjectPtr< UITouch_obj > UITouch_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UITouch_obj > result = new UITouch_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UITouch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UITouch_obj > result = new UITouch_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void UITouch_obj::touchCancel( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITouch","touchCancel",0xfc07562a,"com.danielfreeman.extendedmadness.UITouch.touchCancel","com/danielfreeman/extendedmadness/UITouch.hx",51,0x75824322)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		this->mouseUp(null());
	}
return null();
}


Void UITouch_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITouch","layout",0x347c54b9,"com.danielfreeman.extendedmadness.UITouch.layout","com/danielfreeman/extendedmadness/UITouch.hx",55,0x75824322)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(56)
		::com::danielfreeman::madcomponents::Attributes childAttributes = attributes->copy(this->_xml,null());		HX_STACK_VAR(childAttributes,"childAttributes");
		HX_STACK_LINE(57)
		this->_up->layout(childAttributes);
		HX_STACK_LINE(58)
		this->_down->layout(childAttributes);
	}
return null();
}


Void UITouch_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITouch","mouseDown",0x5234fe78,"com.danielfreeman.extendedmadness.UITouch.mouseDown","com/danielfreeman/extendedmadness/UITouch.hx",62,0x75824322)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(63)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(64)
		this->_up->set_visible(false);
		HX_STACK_LINE(65)
		this->_down->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UITouch_obj,mouseDown,(void))

Void UITouch_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITouch","mouseUp",0x2fe09af1,"com.danielfreeman.extendedmadness.UITouch.mouseUp","com/danielfreeman/extendedmadness/UITouch.hx",69,0x75824322)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(70)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(71)
		this->_up->set_visible(true);
		HX_STACK_LINE(72)
		this->_down->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UITouch_obj,mouseUp,(void))

Void UITouch_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITouch","destructor",0xb4a334c8,"com.danielfreeman.extendedmadness.UITouch.destructor","com/danielfreeman/extendedmadness/UITouch.hx",76,0x75824322)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null());
		HX_STACK_LINE(78)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
	}
return null();
}



UITouch_obj::UITouch_obj()
{
}

void UITouch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UITouch);
	HX_MARK_MEMBER_NAME(_up,"_up");
	HX_MARK_MEMBER_NAME(_down,"_down");
	::com::danielfreeman::madcomponents::UIContainerBaseClass_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UITouch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_up,"_up");
	HX_VISIT_MEMBER_NAME(_down,"_down");
	::com::danielfreeman::madcomponents::UIContainerBaseClass_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UITouch_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_up") ) { return _up; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { return _down; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"touchCancel") ) { return touchCancel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UITouch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_up") ) { _up=inValue.Cast< ::com::danielfreeman::madcomponents::UIForm >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast< ::com::danielfreeman::madcomponents::UIForm >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UITouch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_up"));
	outFields->push(HX_CSTRING("_down"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::danielfreeman::madcomponents::UIForm*/ ,(int)offsetof(UITouch_obj,_up),HX_CSTRING("_up")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UIForm*/ ,(int)offsetof(UITouch_obj,_down),HX_CSTRING("_down")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_up"),
	HX_CSTRING("_down"),
	HX_CSTRING("touchCancel"),
	HX_CSTRING("layout"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UITouch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UITouch_obj::__mClass,"__mClass");
};

#endif

Class UITouch_obj::__mClass;

void UITouch_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UITouch"), hx::TCanCast< UITouch_obj> ,sStaticFields,sMemberFields,
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

void UITouch_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
