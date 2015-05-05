#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UINavigation
#include <com/danielfreeman/madcomponents/UINavigation.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UINavigationPages
#include <com/danielfreeman/madcomponents/UINavigationPages.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIPages
#include <com/danielfreeman/madcomponents/UIPages.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical
#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_openfl_utils_Timer
#include <openfl/utils/Timer.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UINavigationPages_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationPages","new",0x35605bda,"com.danielfreeman.madcomponents.UINavigationPages.new","com/danielfreeman/madcomponents/UINavigationPages.hx",71,0xfc059f99)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(73)
	this->_inside = false;
	HX_STACK_LINE(77)
	::openfl::display::DisplayObjectContainer _g = screen->get_parent();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(77)
	bool _g1 = !(::Std_obj::is(_g,hx::ClassOf< ::com::danielfreeman::madcomponents::UINavigationPages >()));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(77)
	super::__construct(screen,xml,attributes,_g1);
}
;
	return null();
}

//UINavigationPages_obj::~UINavigationPages_obj() { }

Dynamic UINavigationPages_obj::__CreateEmpty() { return  new UINavigationPages_obj; }
hx::ObjectPtr< UINavigationPages_obj > UINavigationPages_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UINavigationPages_obj > result = new UINavigationPages_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UINavigationPages_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UINavigationPages_obj > result = new UINavigationPages_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool UINavigationPages_obj::backChain( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationPages","backChain",0xa1266054,"com.danielfreeman.madcomponents.UINavigationPages.backChain","com/danielfreeman/madcomponents/UINavigationPages.hx",81,0xfc059f99)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	::openfl::display::DisplayObject pageContents;		HX_STACK_VAR(pageContents,"pageContents");
	HX_STACK_LINE(82)
	if ((::Std_obj::is(this->_thisPage,hx::ClassOf< ::openfl::display::Sprite >()))){
		HX_STACK_LINE(82)
		pageContents = (hx::TCast< openfl::display::Sprite >::cast(this->_thisPage))->getChildAt((int)0);
	}
	else{
		HX_STACK_LINE(82)
		pageContents = null();
	}
	HX_STACK_LINE(83)
	::String _g = this->get_name();		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static Dynamic Block( ::openfl::display::DisplayObject &pageContents,hx::ObjectPtr< ::com::danielfreeman::madcomponents::UINavigationPages_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UINavigationPages.hx",83,0xfc059f99)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UINavigationPages.hx"),false);
				__result->Add(HX_CSTRING("lineNumber") , (int)83,false);
				__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.madcomponents.UINavigationPages"),false);
				__result->Add(HX_CSTRING("methodName") , HX_CSTRING("backChain"),false);
				__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("_______backChain")).Add(__this->_thisPage).Add(pageContents)),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(83)
	::haxe::Log_obj::trace(_g,_Function_1_1::Block(pageContents,this));
	HX_STACK_LINE(84)
	if ((!(((  ((::Std_obj::is(pageContents,hx::ClassOf< ::com::danielfreeman::madcomponents::UINavigationPages >()))) ? bool((hx::TCast< com::danielfreeman::madcomponents::UINavigationPages >::cast(pageContents))->backChain()) : bool(false) ))))){
		HX_STACK_LINE(85)
		if (((bool((bool(!(this->_slideTimer->running)) && bool(this->_autoBack))) && bool((this->_page > (int)0))))){
			HX_STACK_LINE(86)
			if (((this->_autoTitle != HX_CSTRING("")))){
				HX_STACK_LINE(87)
				this->set_title(this->_titles->__GetItem((int)0));
			}
			HX_STACK_LINE(89)
			this->goToPage((int)0,HX_CSTRING("right"));
			HX_STACK_LINE(90)
			::String _g1 = this->get_name();		HX_STACK_VAR(_g1,"_g1");
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UINavigationPages.hx",90,0xfc059f99)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UINavigationPages.hx"),false);
						__result->Add(HX_CSTRING("lineNumber") , (int)90,false);
						__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.madcomponents.UINavigationPages"),false);
						__result->Add(HX_CSTRING("methodName") , HX_CSTRING("backChain"),false);
						__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("_______TRUE"))),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(90)
			::haxe::Log_obj::trace(_g1,_Function_3_1::Block());
			HX_STACK_LINE(91)
			return true;
		}
	}
	HX_STACK_LINE(94)
	::String _g2 = this->get_name();		HX_STACK_VAR(_g2,"_g2");
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UINavigationPages.hx",94,0xfc059f99)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UINavigationPages.hx"),false);
				__result->Add(HX_CSTRING("lineNumber") , (int)94,false);
				__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.madcomponents.UINavigationPages"),false);
				__result->Add(HX_CSTRING("methodName") , HX_CSTRING("backChain"),false);
				__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("_______FALSE"))),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(94)
	::haxe::Log_obj::trace(_g2,_Function_1_2::Block());
	HX_STACK_LINE(95)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(UINavigationPages_obj,backChain,return )

Void UINavigationPages_obj::goForward( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationPages","goForward",0xddde2777,"com.danielfreeman.madcomponents.UINavigationPages.goForward","com/danielfreeman/madcomponents/UINavigationPages.hx",102,0xfc059f99)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(103)
		event->stopPropagation();
		HX_STACK_LINE(104)
		::String _g = this->get_name();		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UINavigationPages.hx",104,0xfc059f99)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UINavigationPages.hx"),false);
					__result->Add(HX_CSTRING("lineNumber") , (int)104,false);
					__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.madcomponents.UINavigationPages"),false);
					__result->Add(HX_CSTRING("methodName") , HX_CSTRING("goForward"),false);
					__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("_____goForward"))),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(104)
		::haxe::Log_obj::trace(_g,_Function_1_1::Block());
		HX_STACK_LINE(105)
		if ((!(this->_slideTimer->running))){
			HX_STACK_LINE(106)
			int _g1 = (hx::TCast< com::danielfreeman::madcomponents::UIList >::cast(event->get_target()))->get_index();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(106)
			this->_pressedCell = _g1;
			HX_STACK_LINE(107)
			Dynamic _g2 = (hx::TCast< com::danielfreeman::madcomponents::UIList >::cast(event->get_target()))->get_row();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(107)
			this->_row = _g2;
			HX_STACK_LINE(108)
			if ((this->_autoForward)){
				HX_STACK_LINE(109)
				if (((  (((this->_autoTitle != HX_CSTRING("")))) ? bool(::Reflect_obj::hasField(this->_row,this->_autoTitle)) : bool(false) ))){
					HX_STACK_LINE(110)
					::String _g3 = hx::IndexRef((this->_titles).mPtr,(this->_pressedCell + (int)1)) = ::Reflect_obj::field(this->_row,this->_autoTitle);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(110)
					this->set_title(_g3);
				}
				HX_STACK_LINE(112)
				Float _g4 = ::Math_obj::min((this->_pressedCell + (int)1),(this->_pages->length - (int)1));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(112)
				int newPage = ::Math_obj::round(_g4);		HX_STACK_VAR(newPage,"newPage");
				HX_STACK_LINE(113)
				this->goToPage(newPage,HX_CSTRING("left"));
			}
		}
	}
return null();
}


Void UINavigationPages_obj::goBack( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigationPages","goBack",0xefe6f135,"com.danielfreeman.madcomponents.UINavigationPages.goBack","com/danielfreeman/madcomponents/UINavigationPages.hx",123,0xfc059f99)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(123)
		this->backChain();
	}
return null();
}



UINavigationPages_obj::UINavigationPages_obj()
{
}

Dynamic UINavigationPages_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"goBack") ) { return goBack_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inside") ) { return _inside; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"backChain") ) { return backChain_dyn(); }
		if (HX_FIELD_EQ(inName,"goForward") ) { return goForward_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UINavigationPages_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_inside") ) { _inside=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UINavigationPages_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_inside"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(UINavigationPages_obj,_inside),HX_CSTRING("_inside")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_inside"),
	HX_CSTRING("backChain"),
	HX_CSTRING("goForward"),
	HX_CSTRING("goBack"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UINavigationPages_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UINavigationPages_obj::__mClass,"__mClass");
};

#endif

Class UINavigationPages_obj::__mClass;

void UINavigationPages_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UINavigationPages"), hx::TCanCast< UINavigationPages_obj> ,sStaticFields,sMemberFields,
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

void UINavigationPages_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
