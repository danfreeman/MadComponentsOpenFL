#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IComponentUI
#include <com/danielfreeman/madcomponents/IComponentUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IContainerUI
#include <com/danielfreeman/madcomponents/IContainerUI.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

HX_DEFINE_DYNAMIC_FUNC0(IContainerUI_obj,clear,)

HX_DEFINE_DYNAMIC_FUNC3(IContainerUI_obj,findViewById,return )

HX_DEFINE_DYNAMIC_FUNC0(IContainerUI_obj,drawComponent,)


static ::String sMemberFields[] = {
	HX_CSTRING("clear"),
	HX_CSTRING("findViewById"),
	HX_CSTRING("drawComponent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IContainerUI_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IContainerUI_obj::__mClass,"__mClass");
};

#endif

Class IContainerUI_obj::__mClass;

void IContainerUI_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.IContainerUI"), hx::TCanCast< IContainerUI_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void IContainerUI_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
