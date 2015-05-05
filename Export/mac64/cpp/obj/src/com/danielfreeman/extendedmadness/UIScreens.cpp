#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_danielfreeman_MadXML
#include <com/danielfreeman/MadXML.h>
#endif
#ifndef INCLUDED_com_danielfreeman_MadXMLList
#include <com/danielfreeman/MadXMLList.h>
#endif
#ifndef INCLUDED_com_danielfreeman__MadXML_AttribAccess
#include <com/danielfreeman/_MadXML/AttribAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman__MadXML_HasAttribAccess
#include <com/danielfreeman/_MadXML/HasAttribAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIScreens
#include <com/danielfreeman/extendedmadness/UIScreens.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UI
#include <com/danielfreeman/madcomponents/UI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIPages
#include <com/danielfreeman/madcomponents/UIPages.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_system_Capabilities
#include <openfl/system/Capabilities.h>
#endif
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void UIScreens_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScreens","new",0xb706bab9,"com.danielfreeman.extendedmadness.UIScreens.new","com/danielfreeman/extendedmadness/UIScreens.hx",26,0x3e8b9b1a)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(26)
	super::__construct(screen,xml,attributes);
}
;
	return null();
}

//UIScreens_obj::~UIScreens_obj() { }

Dynamic UIScreens_obj::__CreateEmpty() { return  new UIScreens_obj; }
hx::ObjectPtr< UIScreens_obj > UIScreens_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIScreens_obj > result = new UIScreens_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIScreens_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIScreens_obj > result = new UIScreens_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool UIScreens_obj::useThisOne( ::String size){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScreens","useThisOne",0x93453fe8,"com.danielfreeman.extendedmadness.UIScreens.useThisOne","com/danielfreeman/extendedmadness/UIScreens.hx",30,0x3e8b9b1a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(31)
	bool result = true;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(32)
	::String _g = size.substr((int)-3,(int)3).toUpperCase();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(32)
	if (((_g == HX_CSTRING("DPI")))){
		HX_STACK_LINE(33)
		::String _g1 = size.substr((int)0,(int)-3);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(33)
		Float _g2 = ::Std_obj::parseFloat(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(33)
		Float _g3 = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(33)
		return (_g2 >= _g3);
	}
	HX_STACK_LINE(35)
	::String _g4 = size.substr((int)-1,(int)1).toUpperCase();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(35)
	if (((_g4 == HX_CSTRING("C")))){
		HX_STACK_LINE(36)
		::String _g5 = size.substr((int)0,(int)-1);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(36)
		size = _g5;
	}
	HX_STACK_LINE(38)
	::String _g6 = size.substr((int)0,(int)1).toUpperCase();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(38)
	if (((_g6 == HX_CSTRING("L")))){
		HX_STACK_LINE(39)
		result = (::com::danielfreeman::madcomponents::UI_obj::get_attributes()->width >= ::com::danielfreeman::madcomponents::UI_obj::get_attributes()->height);
		HX_STACK_LINE(40)
		::String _g7 = size.substr((int)1,null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(40)
		size = _g7;
	}
	else{
		HX_STACK_LINE(42)
		::String _g8 = size.substr((int)0,(int)1).toUpperCase();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(42)
		if (((_g8 == HX_CSTRING("P")))){
			HX_STACK_LINE(43)
			result = (::com::danielfreeman::madcomponents::UI_obj::get_attributes()->width <= ::com::danielfreeman::madcomponents::UI_obj::get_attributes()->height);
			HX_STACK_LINE(44)
			::String _g9 = size.substr((int)1,null());		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(44)
			size = _g9;
		}
	}
	HX_STACK_LINE(46)
	if (((size.length > (int)0))){
		HX_STACK_LINE(47)
		int _g10 = size.indexOf(HX_CSTRING("X"),null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(47)
		int _g11 = size.indexOf(HX_CSTRING("x"),null());		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(47)
		Float _g12 = ::Math_obj::max(_g10,_g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(47)
		int xPosition = ::Math_obj::round(_g12);		HX_STACK_VAR(xPosition,"xPosition");
		HX_STACK_LINE(48)
		if (((xPosition > (int)0))){
			HX_STACK_LINE(49)
			bool _g17;		HX_STACK_VAR(_g17,"_g17");
			struct _Function_3_1{
				inline static bool Block( int &xPosition,::String &size){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScreens.hx",49,0x3e8b9b1a)
					{
						HX_STACK_LINE(49)
						::String _g13 = size.substring((int)0,xPosition);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(49)
						Dynamic _g14 = ::Std_obj::parseInt(_g13);		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(49)
						return (::com::danielfreeman::madcomponents::UI_obj::get_attributes()->width >= _g14);
					}
					return null();
				}
			};
			HX_STACK_LINE(49)
			if (((  ((result)) ? bool(_Function_3_1::Block(xPosition,size)) : bool(false) ))){
				HX_STACK_LINE(49)
				::String _g15 = size.substring((xPosition + (int)1),null());		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(49)
				Dynamic _g16 = ::Std_obj::parseInt(_g15);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(49)
				_g17 = (::com::danielfreeman::madcomponents::UI_obj::get_attributes()->height >= _g16);
			}
			else{
				HX_STACK_LINE(49)
				_g17 = false;
			}
			HX_STACK_LINE(49)
			result = _g17;
		}
		else{
			HX_STACK_LINE(52)
			bool _g19;		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(52)
			if ((result)){
				HX_STACK_LINE(52)
				Dynamic _g18 = ::Std_obj::parseInt(size);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(52)
				_g19 = (::com::danielfreeman::madcomponents::UI_obj::get_attributes()->width >= _g18);
			}
			else{
				HX_STACK_LINE(52)
				_g19 = false;
			}
			HX_STACK_LINE(52)
			result = _g19;
		}
	}
	HX_STACK_LINE(55)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScreens_obj,useThisOne,return )

int UIScreens_obj::whichScreenIndex( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScreens","whichScreenIndex",0x9e399930,"com.danielfreeman.extendedmadness.UIScreens.whichScreenIndex","com/danielfreeman/extendedmadness/UIScreens.hx",59,0x3e8b9b1a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	int result = (int)0;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(61)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(62)
	for(::cpp::FastIterator_obj< ::com::danielfreeman::MadXML > *__it = ::cpp::CreateFastIterator< ::com::danielfreeman::MadXML >(this->_xml->children(null())->iterator());  __it->hasNext(); ){
		::com::danielfreeman::MadXML child = __it->next();
		{
			struct _Function_2_1{
				inline static bool Block( ::com::danielfreeman::MadXML &child,hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScreens_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScreens.hx",63,0x3e8b9b1a)
					{
						HX_STACK_LINE(63)
						::String _g = child->att->resolve(HX_CSTRING("size"));		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(63)
						::String _g1 = ::Std_obj::string(_g).toUpperCase();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(63)
						return __this->useThisOne(_g1);
					}
					return null();
				}
			};
			HX_STACK_LINE(63)
			if (((  ((child->has->resolve(HX_CSTRING("size")))) ? bool(_Function_2_1::Block(child,this)) : bool(false) ))){
				HX_STACK_LINE(64)
				result = index;
			}
			HX_STACK_LINE(66)
			(index)++;
		}
;
	}
	HX_STACK_LINE(68)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(UIScreens_obj,whichScreenIndex,return )

Void UIScreens_obj::setInitialPage( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScreens","setInitialPage",0xe68356b8,"com.danielfreeman.extendedmadness.UIScreens.setInitialPage","com/danielfreeman/extendedmadness/UIScreens.hx",73,0x3e8b9b1a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		if (((this->_pages->length > (int)0))){
			HX_STACK_LINE(74)
			int index = this->whichScreenIndex();		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(75)
			this->_thisPage = this->_pages->__get(index).StaticCast< ::openfl::display::DisplayObject >();
			HX_STACK_LINE(76)
			this->_page = index;
			HX_STACK_LINE(78)
			this->setVisible(this->_thisPage,true);
		}
	}
return null();
}


::openfl::display::DisplayObject UIScreens_obj::findViewById( ::String id,hx::Null< int >  __o_row,hx::Null< int >  __o_group){
int row = __o_row.Default(-1);
int group = __o_group.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScreens","findViewById",0x3a465e77,"com.danielfreeman.extendedmadness.UIScreens.findViewById","com/danielfreeman/extendedmadness/UIScreens.hx",85,0x3e8b9b1a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(group,"group")
{
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(86)
			Array< ::Dynamic > _g1 = this->_pages;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(86)
			while((true)){
				HX_STACK_LINE(86)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(86)
					break;
				}
				HX_STACK_LINE(86)
				::openfl::display::DisplayObject view = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(86)
				++(_g);
				HX_STACK_LINE(87)
				::String _g2 = view->get_name();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(87)
				if (((_g2 == id))){
					HX_STACK_LINE(88)
					return view;
				}
			}
		}
		HX_STACK_LINE(91)
		return (hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(this->_thisPage))->findViewById(id,row,group);
	}
}


Void UIScreens_obj::touchCancel( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScreens","touchCancel",0xd604bdf2,"com.danielfreeman.extendedmadness.UIScreens.touchCancel","com/danielfreeman/extendedmadness/UIScreens.hx",96,0x3e8b9b1a)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScreens_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScreens.hx",96,0x3e8b9b1a)
				{
					HX_STACK_LINE(96)
					::openfl::display::DisplayObject _g = (hx::TCast< openfl::display::Sprite >::cast(__this->_thisPage))->getChildAt((int)0);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(96)
					return ::Std_obj::is(_g,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >());
				}
				return null();
			}
		};
		HX_STACK_LINE(96)
		if (((  ((::Std_obj::is(this->_thisPage,hx::ClassOf< ::openfl::display::Sprite >()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(97)
			(hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast((hx::TCast< openfl::display::Sprite >::cast(this->_thisPage))->getChildAt((int)0)))->touchCancel();
		}
	}
return null();
}


Void UIScreens_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScreens","layout",0x440801f1,"com.danielfreeman.extendedmadness.UIScreens.layout","com/danielfreeman/extendedmadness/UIScreens.hx",104,0x3e8b9b1a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(105)
		int newPageIndex = this->whichScreenIndex();		HX_STACK_VAR(newPageIndex,"newPageIndex");
		HX_STACK_LINE(106)
		if (((this->_page != newPageIndex))){
			HX_STACK_LINE(108)
			this->setVisible(this->_thisPage,false);
			HX_STACK_LINE(109)
			this->_thisPage = this->_pages->__get(newPageIndex).StaticCast< ::openfl::display::DisplayObject >();
			HX_STACK_LINE(111)
			this->setVisible(this->_thisPage,true);
			HX_STACK_LINE(112)
			this->_page = newPageIndex;
			HX_STACK_LINE(113)
			::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("screenChanged"),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(113)
			this->dispatchEvent(_g);
		}
		HX_STACK_LINE(115)
		this->super::layout(attributes);
	}
return null();
}


::String UIScreens_obj::SCREEN_CHANGED;


UIScreens_obj::UIScreens_obj()
{
}

Dynamic UIScreens_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"useThisOne") ) { return useThisOne_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"touchCancel") ) { return touchCancel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"findViewById") ) { return findViewById_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setInitialPage") ) { return setInitialPage_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"whichScreenIndex") ) { return whichScreenIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIScreens_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void UIScreens_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SCREEN_CHANGED"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("useThisOne"),
	HX_CSTRING("whichScreenIndex"),
	HX_CSTRING("setInitialPage"),
	HX_CSTRING("findViewById"),
	HX_CSTRING("touchCancel"),
	HX_CSTRING("layout"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIScreens_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIScreens_obj::SCREEN_CHANGED,"SCREEN_CHANGED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIScreens_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIScreens_obj::SCREEN_CHANGED,"SCREEN_CHANGED");
};

#endif

Class UIScreens_obj::__mClass;

void UIScreens_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UIScreens"), hx::TCanCast< UIScreens_obj> ,sStaticFields,sMemberFields,
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

void UIScreens_obj::__boot()
{
	SCREEN_CHANGED= HX_CSTRING("screenChanged");
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
