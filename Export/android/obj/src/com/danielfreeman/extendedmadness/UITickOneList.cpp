#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UITick
#include <com/danielfreeman/extendedmadness/UITick.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UITickList
#include <com/danielfreeman/extendedmadness/UITickList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UITickOneList
#include <com/danielfreeman/extendedmadness/UITickOneList.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIList
#include <com/danielfreeman/madcomponents/UIList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical
#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
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

Void UITickOneList_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITickOneList","new",0x9d81df39,"com.danielfreeman.extendedmadness.UITickOneList.new","com/danielfreeman/extendedmadness/UITickOneList.hx",109,0x8f15641a)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(109)
	super::__construct(screen,xml,attributes);
}
;
	return null();
}

//UITickOneList_obj::~UITickOneList_obj() { }

Dynamic UITickOneList_obj::__CreateEmpty() { return  new UITickOneList_obj; }
hx::ObjectPtr< UITickOneList_obj > UITickOneList_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UITickOneList_obj > result = new UITickOneList_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UITickOneList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UITickOneList_obj > result = new UITickOneList_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void UITickOneList_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITickOneList","mouseDown",0x0ea0e8c0,"com.danielfreeman.extendedmadness.UITickOneList.mouseDown","com/danielfreeman/extendedmadness/UITickOneList.hx",113,0x8f15641a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(114)
		this->_lastPressedCell = this->_pressedCell;
		HX_STACK_LINE(115)
		this->super::mouseDown(event);
	}
return null();
}


Void UITickOneList_obj::doClick( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITickOneList","doClick",0xd5cc4c16,"com.danielfreeman.extendedmadness.UITickOneList.doClick","com/danielfreeman/extendedmadness/UITickOneList.hx",119,0x8f15641a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		if (((bool((bool((this->_lastPressedCell != this->_pressedCell)) && bool((this->_pressButton == null())))) && bool(this->_clickRow)))){
			HX_STACK_LINE(121)
			::String _g = ::Std_obj::string(this->_lastPressedCell);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(121)
			::String _g1 = (HX_CSTRING("tick_") + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(121)
			::com::danielfreeman::extendedmadness::UITick lastTick;		HX_STACK_VAR(lastTick,"lastTick");
			HX_STACK_LINE(121)
			lastTick = hx::TCast< com::danielfreeman::extendedmadness::UITick >::cast(this->_slider->getChildByName(_g1));
			HX_STACK_LINE(122)
			if (((lastTick != null()))){
				HX_STACK_LINE(123)
				lastTick->set_visible(false);
			}
		}
		HX_STACK_LINE(126)
		this->super::doClick();
	}
return null();
}


::openfl::display::DisplayObject UITickOneList_obj::pressButton( hx::Null< bool >  __o_show){
bool show = __o_show.Default(true);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITickOneList","pressButton",0x27873dae,"com.danielfreeman.extendedmadness.UITickOneList.pressButton","com/danielfreeman/extendedmadness/UITickOneList.hx",130,0x8f15641a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(show,"show")
{
		HX_STACK_LINE(131)
		this->super::pressButton(null());
		HX_STACK_LINE(132)
		if (((bool((bool(this->_classic) && bool((this->_lastPressedCell != this->_pressedCell)))) && bool(this->_clickRow)))){
			HX_STACK_LINE(133)
			::String _g = ::Std_obj::string(this->_lastPressedCell);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(133)
			::String _g1 = (HX_CSTRING("tick_") + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(133)
			::com::danielfreeman::extendedmadness::UITick lastTick;		HX_STACK_VAR(lastTick,"lastTick");
			HX_STACK_LINE(133)
			lastTick = hx::TCast< com::danielfreeman::extendedmadness::UITick >::cast(this->_slider->getChildByName(_g1));
			HX_STACK_LINE(134)
			if (((lastTick != null()))){
				HX_STACK_LINE(135)
				lastTick->set_visible(false);
			}
			HX_STACK_LINE(137)
			::openfl::events::Event _g2 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(137)
			this->dispatchEvent(_g2);
		}
		HX_STACK_LINE(139)
		return this->_pressButton;
	}
}



UITickOneList_obj::UITickOneList_obj()
{
}

Dynamic UITickOneList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"doClick") ) { return doClick_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pressButton") ) { return pressButton_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_lastPressedCell") ) { return _lastPressedCell; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UITickOneList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"_lastPressedCell") ) { _lastPressedCell=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UITickOneList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_lastPressedCell"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(UITickOneList_obj,_lastPressedCell),HX_CSTRING("_lastPressedCell")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_lastPressedCell"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("doClick"),
	HX_CSTRING("pressButton"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UITickOneList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UITickOneList_obj::__mClass,"__mClass");
};

#endif

Class UITickOneList_obj::__mClass;

void UITickOneList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UITickOneList"), hx::TCanCast< UITickOneList_obj> ,sStaticFields,sMemberFields,
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

void UITickOneList_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
