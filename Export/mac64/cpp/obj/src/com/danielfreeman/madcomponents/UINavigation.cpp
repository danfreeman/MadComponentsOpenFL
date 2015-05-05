#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_danielfreeman_AnimationTimer
#include <com/danielfreeman/AnimationTimer.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIBackButton
#include <com/danielfreeman/madcomponents/UIBackButton.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIButton
#include <com/danielfreeman/madcomponents/UIButton.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIForm
#include <com/danielfreeman/madcomponents/UIForm.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIList
#include <com/danielfreeman/madcomponents/UIList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UINavigation
#include <com/danielfreeman/madcomponents/UINavigation.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UINavigationBar
#include <com/danielfreeman/madcomponents/UINavigationBar.h>
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
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UINavigation_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,hx::Null< bool >  __o_hasNavBar)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","new",0x0888b9ae,"com.danielfreeman.madcomponents.UINavigation.new","com/danielfreeman/madcomponents/UINavigation.hx",81,0x375b499f)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
HX_STACK_ARG(__o_hasNavBar,"hasNavBar")
bool hasNavBar = __o_hasNavBar.Default(true);
{
	HX_STACK_LINE(105)
	this->_fullPage = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(101)
	this->_alt = false;
	HX_STACK_LINE(100)
	this->_backToExit = false;
	HX_STACK_LINE(99)
	this->_titles = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(98)
	this->_row = null();
	HX_STACK_LINE(97)
	this->_autoFill = false;
	HX_STACK_LINE(96)
	this->_autoTitle = HX_CSTRING("");
	HX_STACK_LINE(95)
	this->_autoBack = true;
	HX_STACK_LINE(94)
	this->_autoForward = true;
	HX_STACK_LINE(93)
	this->_pressedCell = (int)-1;
	HX_STACK_LINE(110)
	::String _g = this->get_name();		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static Dynamic Block( bool &hasNavBar){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UINavigation.hx",110,0x375b499f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UINavigation.hx"),false);
				__result->Add(HX_CSTRING("lineNumber") , (int)110,false);
				__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.madcomponents.UINavigation"),false);
				__result->Add(HX_CSTRING("methodName") , HX_CSTRING("new"),false);
				__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("______________________________hasNavBar=")).Add(hasNavBar)),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(110)
	::haxe::Log_obj::trace(_g,_Function_1_1::Block(hasNavBar));
	HX_STACK_LINE(111)
	::com::danielfreeman::madcomponents::Attributes pagesAttributes = attributes->copy(xml,null());		HX_STACK_VAR(pagesAttributes,"pagesAttributes");
	HX_STACK_LINE(112)
	this->_hasNavBar = hasNavBar;
	HX_STACK_LINE(113)
	super::__construct(screen,xml,pagesAttributes);
	HX_STACK_LINE(114)
	::com::danielfreeman::madcomponents::UINavigationBar _g1 = ::com::danielfreeman::madcomponents::UINavigationBar_obj::__new(hx::ObjectPtr<OBJ_>(this),xml,attributes);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(114)
	this->_navigationBar = _g1;
	HX_STACK_LINE(115)
	this->_navigationBar->set_visible(hasNavBar);
	HX_STACK_LINE(117)
	bool _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(117)
	if ((xml->has->resolve(HX_CSTRING("backKey")))){
		HX_STACK_LINE(117)
		::String _g2 = xml->att->resolve(HX_CSTRING("backKey"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(117)
		_g3 = (_g2 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(117)
		_g3 = false;
	}
	HX_STACK_LINE(117)
	this->_backKey = _g3;
	HX_STACK_LINE(118)
	if ((xml->has->resolve(HX_CSTRING("autoForward")))){
		HX_STACK_LINE(119)
		::String _g4 = xml->att->resolve(HX_CSTRING("autoForward"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(119)
		bool _g5 = (_g4 == HX_CSTRING("true"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(119)
		this->_autoForward = _g5;
	}
	HX_STACK_LINE(121)
	this->_fullPageAttributes = attributes;
	HX_STACK_LINE(123)
	bool _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(123)
	if ((xml->has->resolve(HX_CSTRING("alt")))){
		HX_STACK_LINE(123)
		::String _g6 = xml->att->resolve(HX_CSTRING("alt"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(123)
		_g7 = (_g6 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(123)
		_g7 = false;
	}
	HX_STACK_LINE(123)
	this->_alt = _g7;
	HX_STACK_LINE(124)
	if ((hasNavBar)){
		HX_STACK_LINE(125)
		hx::SubEq(pagesAttributes->height,46.0);
		HX_STACK_LINE(126)
		if ((this->_alt)){
			HX_STACK_LINE(126)
			pagesAttributes->y = (int)0;
		}
		else{
			HX_STACK_LINE(126)
			pagesAttributes->y = 46.0;
		}
		HX_STACK_LINE(127)
		this->_navigationBar->set_y((  ((this->_alt)) ? Float(pagesAttributes->height) : Float((int)0) ));
	}
	HX_STACK_LINE(129)
	for(::cpp::FastIterator_obj< ::com::danielfreeman::MadXML > *__it = ::cpp::CreateFastIterator< ::com::danielfreeman::MadXML >(xml->children(null())->iterator());  __it->hasNext(); ){
		::com::danielfreeman::MadXML child = __it->next();
		{
			HX_STACK_LINE(130)
			bool _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(130)
			if ((child->has->resolve(HX_CSTRING("fullPage")))){
				HX_STACK_LINE(130)
				::String _g8 = child->att->resolve(HX_CSTRING("fullPage"));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(130)
				_g9 = (_g8 == HX_CSTRING("true"));
			}
			else{
				HX_STACK_LINE(130)
				_g9 = false;
			}
			HX_STACK_LINE(130)
			this->_fullPage->__Field(HX_CSTRING("push"),true)(_g9);
		}
;
	}
	HX_STACK_LINE(133)
	this->refreshMasking(attributes);
	HX_STACK_LINE(134)
	if ((hasNavBar)){
		HX_STACK_LINE(135)
		if ((this->_alt)){
			HX_STACK_LINE(135)
			this->_attributes->y = (int)0;
		}
		else{
			HX_STACK_LINE(135)
			this->_attributes->y = 46.0;
		}
		HX_STACK_LINE(136)
		if (((this->_thisPage != null()))){
			HX_STACK_LINE(137)
			this->_thisPage->set_y((  ((this->_alt)) ? Float((int)0) : Float(46.0) ));
		}
	}
	HX_STACK_LINE(140)
	::String _g10 = this->get_name();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(140)
	Float _g11 = this->_thisPage->get_y();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(140)
	Dynamic _g12 = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("_________hasNavBar")).Add(hasNavBar).Add(HX_CSTRING("_thisPage.y")).Add(_g11));		HX_STACK_VAR(_g12,"_g12");
	struct _Function_1_2{
		inline static Dynamic Block( Dynamic &_g12){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UINavigation.hx",140,0x375b499f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UINavigation.hx"),false);
				__result->Add(HX_CSTRING("lineNumber") , (int)140,false);
				__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.madcomponents.UINavigation"),false);
				__result->Add(HX_CSTRING("methodName") , HX_CSTRING("new"),false);
				__result->Add(HX_CSTRING("customParams") , _g12,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(140)
	Dynamic _g13 = _Function_1_2::Block(_g12);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(140)
	::haxe::Log_obj::trace(_g10,_g13);
	HX_STACK_LINE(141)
	this->_navigationBar->get_backButton()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->goBack_dyn(),null(),null(),null());
	HX_STACK_LINE(142)
	this->_navigationBar->get_backButton()->set_visible(false);
	HX_STACK_LINE(143)
	this->addEventListener(HX_CSTRING("clicked"),this->goForward_dyn(),null(),null(),null());
	HX_STACK_LINE(144)
	this->get_stage()->addEventListener(::openfl::events::KeyboardEvent_obj::KEY_DOWN,this->keyHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(145)
	int _g14 = this->get_numChildren();		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(145)
	int _g15 = (_g14 - (int)1);		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(145)
	this->setChildIndex(this->_navigationBar,_g15);
	HX_STACK_LINE(146)
	if ((xml->has->resolve(HX_CSTRING("title")))){
		HX_STACK_LINE(147)
		::String _g16 = xml->att->resolve(HX_CSTRING("title"));		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(147)
		::String _g17 = ::Std_obj::string(_g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(147)
		hx::IndexRef((this->_titles).mPtr,(int)0) = this->_navigationBar->set_text(_g17);
	}
	HX_STACK_LINE(149)
	if ((xml->has->resolve(HX_CSTRING("autoFill")))){
		HX_STACK_LINE(150)
		::String _g18 = xml->att->resolve(HX_CSTRING("autoFill"));		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(150)
		bool _g19 = (_g18 != HX_CSTRING("false"));		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(150)
		this->_autoFill = _g19;
	}
	HX_STACK_LINE(152)
	if ((xml->has->resolve(HX_CSTRING("autoTitle")))){
		HX_STACK_LINE(153)
		::String _g20 = xml->att->resolve(HX_CSTRING("autoTitle"));		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(153)
		this->_autoTitle = _g20;
	}
	HX_STACK_LINE(155)
	if ((xml->has->resolve(HX_CSTRING("backToExit")))){
		HX_STACK_LINE(156)
		::String _g21 = xml->att->resolve(HX_CSTRING("backToExit"));		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(156)
		bool _g22 = (_g21 != HX_CSTRING("false"));		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(156)
		this->_backToExit = _g22;
	}
	HX_STACK_LINE(158)
	if ((xml->has->resolve(HX_CSTRING("leftButtonColour")))){
		HX_STACK_LINE(159)
		::String _g23 = xml->att->resolve(HX_CSTRING("leftButtonColour"));		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(159)
		int _g24 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g23);		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(159)
		this->_navigationBar->get_leftButton()->set_colour(_g24);
	}
	HX_STACK_LINE(161)
	if ((xml->has->resolve(HX_CSTRING("rightButtonColour")))){
		HX_STACK_LINE(162)
		::String _g25 = xml->att->resolve(HX_CSTRING("rightButtonColour"));		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(162)
		int _g26 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g25);		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(162)
		this->_navigationBar->get_rightButton()->set_colour(_g26);
	}
	HX_STACK_LINE(164)
	if ((xml->has->resolve(HX_CSTRING("arrowColour")))){
		HX_STACK_LINE(165)
		::String _g27 = xml->att->resolve(HX_CSTRING("arrowColour"));		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(165)
		int _g28 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g27);		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(165)
		int _g29 = this->_navigationBar->get_rightArrow()->set_colour(_g28);		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(165)
		this->_navigationBar->get_backButton()->set_colour(_g29);
	}
}
;
	return null();
}

//UINavigation_obj::~UINavigation_obj() { }

Dynamic UINavigation_obj::__CreateEmpty() { return  new UINavigation_obj; }
hx::ObjectPtr< UINavigation_obj > UINavigation_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,hx::Null< bool >  __o_hasNavBar)
{  hx::ObjectPtr< UINavigation_obj > result = new UINavigation_obj();
	result->__construct(screen,xml,attributes,__o_hasNavBar);
	return result;}

Dynamic UINavigation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UINavigation_obj > result = new UINavigation_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::com::danielfreeman::madcomponents::Attributes UINavigation_obj::childAttributes( int index){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","childAttributes",0xea8797e1,"com.danielfreeman.madcomponents.UINavigation.childAttributes","com/danielfreeman/madcomponents/UINavigation.hx",171,0x375b499f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(171)
	if ((this->_fullPage->__GetItem(index))){
		HX_STACK_LINE(172)
		return this->_fullPageAttributes->copy(null(),null());
	}
	else{
		HX_STACK_LINE(175)
		return this->_attributes->copy(null(),null());
	}
	HX_STACK_LINE(171)
	return null();
}


bool UINavigation_obj::get_fullPage( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","get_fullPage",0xc2959479,"com.danielfreeman.madcomponents.UINavigation.get_fullPage","com/danielfreeman/madcomponents/UINavigation.hx",181,0x375b499f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(181)
	return this->_fullPage->__GetItem(this->_page);
}


HX_DEFINE_DYNAMIC_FUNC0(UINavigation_obj,get_fullPage,return )

bool UINavigation_obj::set_fullPage( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","set_fullPage",0xd78eb7ed,"com.danielfreeman.madcomponents.UINavigation.set_fullPage","com/danielfreeman/madcomponents/UINavigation.hx",185,0x375b499f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(186)
	hx::IndexRef((this->_fullPage).mPtr,this->_page) = value;
	HX_STACK_LINE(187)
	this->doLayout();
	HX_STACK_LINE(188)
	this->_thisPage->set_y((  (((bool((bool(!(this->_hasNavBar)) || bool(this->_alt))) || bool(value)))) ? Float((int)0) : Float(46.0) ));
	HX_STACK_LINE(189)
	this->_navigationBar->set_visible(!(value));
	HX_STACK_LINE(190)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UINavigation_obj,set_fullPage,return )

::com::danielfreeman::madcomponents::Attributes UINavigation_obj::get_attributes( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","get_attributes",0x8ccc4e92,"com.danielfreeman.madcomponents.UINavigation.get_attributes","com/danielfreeman/madcomponents/UINavigation.hx",195,0x375b499f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(195)
	return this->_fullPageAttributes;
}


bool UINavigation_obj::set_isVisible( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","set_isVisible",0x32238259,"com.danielfreeman.madcomponents.UINavigation.set_isVisible","com/danielfreeman/madcomponents/UINavigation.hx",199,0x375b499f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(200)
	if ((value)){
		HX_STACK_LINE(201)
		this->addEventListener(HX_CSTRING("clicked"),this->goForward_dyn(),null(),null(),null());
		HX_STACK_LINE(202)
		this->get_stage()->addEventListener(::openfl::events::KeyboardEvent_obj::KEY_DOWN,this->keyHandler_dyn(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(205)
		this->removeEventListener(HX_CSTRING("clicked"),this->goForward_dyn(),null());
		HX_STACK_LINE(206)
		this->get_stage()->removeEventListener(::openfl::events::KeyboardEvent_obj::KEY_DOWN,this->keyHandler_dyn(),null());
	}
	HX_STACK_LINE(208)
	this->super::set_isVisible(value);
	HX_STACK_LINE(209)
	return value;
}


Void UINavigation_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","layout",0x9f4a0a1c,"com.danielfreeman.madcomponents.UINavigation.layout","com/danielfreeman/madcomponents/UINavigation.hx",215,0x375b499f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(216)
		this->_fullPageAttributes = attributes;
		HX_STACK_LINE(217)
		if ((this->_slideTimer->get_running())){
			HX_STACK_LINE(218)
			this->_layoutAfterSlide = attributes;
			HX_STACK_LINE(219)
			return null();
		}
		HX_STACK_LINE(221)
		this->_navigationBar->set_fixwidth(attributes->width);
		HX_STACK_LINE(222)
		::com::danielfreeman::madcomponents::Attributes pagesAttributes = attributes->copy(null(),null());		HX_STACK_VAR(pagesAttributes,"pagesAttributes");
		HX_STACK_LINE(223)
		if ((this->_hasNavBar)){
			HX_STACK_LINE(224)
			hx::SubEq(pagesAttributes->height,46.0);
			HX_STACK_LINE(225)
			if ((this->_alt)){
				HX_STACK_LINE(225)
				pagesAttributes->y = (int)0;
			}
			else{
				HX_STACK_LINE(225)
				pagesAttributes->y = 46.0;
			}
			HX_STACK_LINE(226)
			this->_navigationBar->set_y((  ((this->_alt)) ? Float(pagesAttributes->height) : Float((int)0) ));
		}
		HX_STACK_LINE(228)
		this->super::layout(pagesAttributes);
		HX_STACK_LINE(229)
		if ((this->_hasNavBar)){
			HX_STACK_LINE(230)
			if ((this->_alt)){
				HX_STACK_LINE(230)
				this->_attributes->y = (int)0;
			}
			else{
				HX_STACK_LINE(230)
				this->_attributes->y = 46.0;
			}
		}
		HX_STACK_LINE(232)
		if (((this->_thisPage != null()))){
			HX_STACK_LINE(233)
			this->_thisPage->set_y((  (((bool(this->_alt) || bool(!(this->_hasNavBar))))) ? Float((int)0) : Float(46.0) ));
		}
		HX_STACK_LINE(235)
		this->refreshMasking(attributes);
	}
return null();
}


::String UINavigation_obj::set_title( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","set_title",0x130935c9,"com.danielfreeman.madcomponents.UINavigation.set_title","com/danielfreeman/madcomponents/UINavigation.hx",242,0x375b499f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(243)
	hx::IndexRef((this->_titles).mPtr,this->_page) = value;
	HX_STACK_LINE(244)
	this->_navigationBar->set_text(value);
	HX_STACK_LINE(245)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UINavigation_obj,set_title,return )

bool UINavigation_obj::set_autoForward( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","set_autoForward",0x81706107,"com.danielfreeman.madcomponents.UINavigation.set_autoForward","com/danielfreeman/madcomponents/UINavigation.hx",251,0x375b499f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(252)
	this->_autoForward = value;
	HX_STACK_LINE(253)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UINavigation_obj,set_autoForward,return )

bool UINavigation_obj::set_autoBack( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","set_autoBack",0x9d601da5,"com.danielfreeman.madcomponents.UINavigation.set_autoBack","com/danielfreeman/madcomponents/UINavigation.hx",260,0x375b499f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(261)
	this->_autoBack = value;
	HX_STACK_LINE(262)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UINavigation_obj,set_autoBack,return )

::com::danielfreeman::madcomponents::UINavigationBar UINavigation_obj::get_navigationBar( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","get_navigationBar",0xa2d7e7c4,"com.danielfreeman.madcomponents.UINavigation.get_navigationBar","com/danielfreeman/madcomponents/UINavigation.hx",269,0x375b499f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(269)
	return this->_navigationBar;
}


HX_DEFINE_DYNAMIC_FUNC0(UINavigation_obj,get_navigationBar,return )

Void UINavigation_obj::goForward( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","goForward",0x3af09c4b,"com.danielfreeman.madcomponents.UINavigation.goForward","com/danielfreeman/madcomponents/UINavigation.hx",276,0x375b499f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(276)
		if ((!(this->_slideTimer->get_running()))){
			HX_STACK_LINE(277)
			int _g = (hx::TCast< com::danielfreeman::madcomponents::UIList >::cast(event->get_target()))->get_index();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(277)
			this->_pressedCell = _g;
			HX_STACK_LINE(278)
			Dynamic _g1 = (hx::TCast< com::danielfreeman::madcomponents::UIList >::cast(event->get_target()))->get_row();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(278)
			this->_row = _g1;
			HX_STACK_LINE(279)
			if ((this->_autoForward)){
				HX_STACK_LINE(280)
				if (((  (((this->_autoTitle != HX_CSTRING("")))) ? bool(::Reflect_obj::field(this->_row,this->_autoTitle)) : bool(false) ))){
					HX_STACK_LINE(281)
					::String _g2 = hx::IndexRef((this->_titles).mPtr,(this->_page + (int)1)) = ::Reflect_obj::field(this->_row,this->_autoTitle);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(281)
					this->_navigationBar->set_text(_g2);
				}
				HX_STACK_LINE(283)
				this->nextPage(HX_CSTRING("left"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UINavigation_obj,goForward,(void))

Void UINavigation_obj::goBack( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","goBack",0x8ab7efe1,"com.danielfreeman.madcomponents.UINavigation.goBack","com/danielfreeman/madcomponents/UINavigation.hx",291,0x375b499f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(292)
		this->_savePageIndex = this->_page;
		HX_STACK_LINE(293)
		if (((  ((!(this->_slideTimer->get_running()))) ? bool(this->_autoBack) : bool(false) ))){
			HX_STACK_LINE(294)
			if (((this->_autoTitle != HX_CSTRING("")))){
				HX_STACK_LINE(295)
				this->_navigationBar->set_text((  (((bool((this->_page > (int)1)) && bool(this->_titles->__GetItem((this->_page - (int)1)))))) ? ::String(this->_titles->__GetItem((this->_page - (int)1))) : ::String(HX_CSTRING("")) ));
			}
			HX_STACK_LINE(297)
			this->previousPage(HX_CSTRING("right"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UINavigation_obj,goBack,(void))

Void UINavigation_obj::updateTitle( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","updateTitle",0x5027661d,"com.danielfreeman.madcomponents.UINavigation.updateTitle","com/danielfreeman/madcomponents/UINavigation.hx",303,0x375b499f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(303)
		if (((this->_page > this->_lastPageIndex))){
			HX_STACK_LINE(304)
			if (((  (((this->_autoTitle != HX_CSTRING("")))) ? bool(::Reflect_obj::field(this->_row,this->_autoTitle)) : bool(false) ))){
				HX_STACK_LINE(305)
				::String _g = hx::IndexRef((this->_titles).mPtr,this->_page) = ::Reflect_obj::field(this->_row,this->_autoTitle);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(305)
				this->_navigationBar->set_text(_g);
			}
		}
		else{
			HX_STACK_LINE(309)
			if (((this->_autoTitle != HX_CSTRING("")))){
				HX_STACK_LINE(310)
				this->_navigationBar->set_text((  (((bool((this->_page > (int)1)) && bool(this->_titles->__GetItem(this->_page))))) ? ::String(this->_titles->__GetItem(this->_page)) : ::String(HX_CSTRING("")) ));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UINavigation_obj,updateTitle,(void))

Void UINavigation_obj::doTransition( ::String transition){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","doTransition",0x8dae61f2,"com.danielfreeman.madcomponents.UINavigation.doTransition","com/danielfreeman/madcomponents/UINavigation.hx",318,0x375b499f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transition,"transition")
		HX_STACK_LINE(318)
		::openfl::display::DisplayObject lastContainer = (hx::TCast< openfl::display::Sprite >::cast(this->_lastPage))->getChildAt((int)0);		HX_STACK_VAR(lastContainer,"lastContainer");
		HX_STACK_LINE(319)
		if ((::Std_obj::is(lastContainer,hx::ClassOf< ::com::danielfreeman::madcomponents::UIList >()))){
			HX_STACK_LINE(320)
			int _g = (hx::TCast< com::danielfreeman::madcomponents::UIList >::cast(lastContainer))->get_index();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(320)
			this->_pressedCell = _g;
			HX_STACK_LINE(321)
			Dynamic _g1 = (hx::TCast< com::danielfreeman::madcomponents::UIList >::cast(lastContainer))->get_row();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(321)
			this->_row = _g1;
		}
		HX_STACK_LINE(323)
		::openfl::display::DisplayObject thisContainer = (hx::TCast< openfl::display::Sprite >::cast(this->_thisPage))->getChildAt((int)0);		HX_STACK_VAR(thisContainer,"thisContainer");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UINavigation_obj > __this,::openfl::display::DisplayObject &thisContainer){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UINavigation.hx",324,0x375b499f)
				{
					struct _Function_2_1{
						inline static bool Block( ::openfl::display::DisplayObject &thisContainer){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UINavigation.hx",324,0x375b499f)
							{
								struct _Function_3_1{
									inline static bool Block( ::openfl::display::DisplayObject &thisContainer){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UINavigation.hx",324,0x375b499f)
										{
											HX_STACK_LINE(324)
											::String _g2 = (hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(thisContainer))->__Field(HX_CSTRING("get_xml"),true)()->__Field(HX_CSTRING("att"),true)->__Field(HX_CSTRING("resolve"),true)(HX_CSTRING("autoFill"));		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(324)
											return (_g2 != HX_CSTRING("false"));
										}
										return null();
									}
								};
								HX_STACK_LINE(324)
								return (  (((hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(thisContainer))->__Field(HX_CSTRING("get_xml"),true)()->__Field(HX_CSTRING("has"),true)->__Field(HX_CSTRING("resolve"),true)(HX_CSTRING("autoFill")))) ? bool(_Function_3_1::Block(thisContainer)) : bool(false) );
							}
							return null();
						}
					};
					HX_STACK_LINE(324)
					return (  ((!(__this->_autoFill))) ? bool(_Function_2_1::Block(thisContainer)) : bool(true) );
				}
				return null();
			}
		};
		HX_STACK_LINE(324)
		if (((  (((  (((this->_row != null()))) ? bool(::Std_obj::is(thisContainer,hx::ClassOf< ::com::danielfreeman::madcomponents::IContainerUI >())) : bool(false) ))) ? bool(_Function_1_1::Block(this,thisContainer)) : bool(false) ))){
			HX_STACK_LINE(325)
			if ((::Std_obj::is(thisContainer,hx::ClassOf< ::com::danielfreeman::madcomponents::UIForm >()))){
				HX_STACK_LINE(326)
				(hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(thisContainer))->set_data(this->_row);
			}
			else{
				HX_STACK_LINE(328)
				if (((  ((::Std_obj::is(thisContainer,hx::ClassOf< ::com::danielfreeman::madcomponents::UIScrollVertical >()))) ? bool(!(::Std_obj::is(thisContainer,hx::ClassOf< ::com::danielfreeman::madcomponents::UIList >()))) : bool(false) ))){
					HX_STACK_LINE(329)
					(hx::TCast< com::danielfreeman::madcomponents::UIScrollVertical >::cast(thisContainer))->set_data(this->_row);
				}
			}
		}
		HX_STACK_LINE(332)
		this->super::doTransition(transition);
		HX_STACK_LINE(333)
		int _g3 = this->get_pageNumber();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(333)
		bool _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(333)
		if (((_g3 > (int)0))){
			HX_STACK_LINE(333)
			::String _g4 = this->_navigationBar->get_backButton()->get_text();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(333)
			_g5 = (_g4 != HX_CSTRING(""));
		}
		else{
			HX_STACK_LINE(333)
			_g5 = false;
		}
		HX_STACK_LINE(333)
		this->_navigationBar->get_backButton()->set_visible(_g5);
		HX_STACK_LINE(334)
		bool _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(334)
		if ((!(this->_navigationBar->get_backButton()->get_visible()))){
			HX_STACK_LINE(334)
			_g6 = this->_xml->has->resolve(HX_CSTRING("leftButton"));
		}
		else{
			HX_STACK_LINE(334)
			_g6 = false;
		}
		HX_STACK_LINE(334)
		this->_navigationBar->get_leftButton()->set_visible(_g6);
	}
return null();
}


int UINavigation_obj::get_index( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","get_index",0xdd91cf37,"com.danielfreeman.madcomponents.UINavigation.get_index","com/danielfreeman/madcomponents/UINavigation.hx",341,0x375b499f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(341)
	return this->_pressedCell;
}


HX_DEFINE_DYNAMIC_FUNC0(UINavigation_obj,get_index,return )

Dynamic UINavigation_obj::get_row( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","get_row",0x9f6a52ff,"com.danielfreeman.madcomponents.UINavigation.get_row","com/danielfreeman/madcomponents/UINavigation.hx",348,0x375b499f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(348)
	return this->_row;
}


HX_DEFINE_DYNAMIC_FUNC0(UINavigation_obj,get_row,return )

::String UINavigation_obj::get_label( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","get_label",0x8f2c4219,"com.danielfreeman.madcomponents.UINavigation.get_label","com/danielfreeman/madcomponents/UINavigation.hx",355,0x375b499f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(355)
	if (((this->_row != null()))){
		HX_STACK_LINE(355)
		return this->_row->__Field(HX_CSTRING("label"),true);
	}
	else{
		HX_STACK_LINE(355)
		return HX_CSTRING("");
	}
	HX_STACK_LINE(355)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UINavigation_obj,get_label,return )

Void UINavigation_obj::goToPage( int value,::String __o_transition){
::String transition = __o_transition.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","goToPage",0xd1eebda4,"com.danielfreeman.madcomponents.UINavigation.goToPage","com/danielfreeman/madcomponents/UINavigation.hx",361,0x375b499f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(transition,"transition")
{
		HX_STACK_LINE(362)
		if ((this->_slideTimer->get_running())){
			HX_STACK_LINE(363)
			return null();
		}
		HX_STACK_LINE(365)
		this->super::goToPage(value,transition);
		HX_STACK_LINE(366)
		this->updateTitle();
		HX_STACK_LINE(367)
		this->updateNavigationBar();
	}
return null();
}


Void UINavigation_obj::nextPage( ::String __o_transition){
::String transition = __o_transition.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","nextPage",0x08531cd4,"com.danielfreeman.madcomponents.UINavigation.nextPage","com/danielfreeman/madcomponents/UINavigation.hx",373,0x375b499f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(transition,"transition")
{
		HX_STACK_LINE(374)
		if ((this->_slideTimer->get_running())){
			HX_STACK_LINE(375)
			return null();
		}
		HX_STACK_LINE(377)
		this->super::nextPage(transition);
		HX_STACK_LINE(377)
		this->updateNavigationBar();
	}
return null();
}


Void UINavigation_obj::previousPage( ::String __o_transition){
::String transition = __o_transition.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","previousPage",0xa00a2718,"com.danielfreeman.madcomponents.UINavigation.previousPage","com/danielfreeman/madcomponents/UINavigation.hx",383,0x375b499f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(transition,"transition")
{
		HX_STACK_LINE(384)
		if ((this->_slideTimer->get_running())){
			HX_STACK_LINE(385)
			return null();
		}
		HX_STACK_LINE(387)
		this->super::previousPage(transition);
		HX_STACK_LINE(388)
		this->updateNavigationBar();
	}
return null();
}


Void UINavigation_obj::updateNavigationBar( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","updateNavigationBar",0xcc4a6424,"com.danielfreeman.madcomponents.UINavigation.updateNavigationBar","com/danielfreeman/madcomponents/UINavigation.hx",394,0x375b499f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(395)
		bool isFullPage;		HX_STACK_VAR(isFullPage,"isFullPage");
		HX_STACK_LINE(395)
		if (((this->_page >= (int)0))){
			HX_STACK_LINE(395)
			isFullPage = this->_fullPage->__GetItem(this->_page);
		}
		else{
			HX_STACK_LINE(395)
			isFullPage = false;
		}
		HX_STACK_LINE(396)
		this->_navigationBar->set_visible((bool(this->_hasNavBar) && bool(!(isFullPage))));
		HX_STACK_LINE(397)
		this->_thisPage->set_y((  (((bool((bool(!(this->_hasNavBar)) || bool(this->_alt))) || bool(isFullPage)))) ? Float((int)0) : Float(46.0) ));
		HX_STACK_LINE(398)
		if (((bool((this->_transition == HX_CSTRING("down"))) || bool((this->_transition == HX_CSTRING("drawerDown")))))){
			HX_STACK_LINE(399)
			bool _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(399)
			if (((this->_lastPageIndex > (int)0))){
				HX_STACK_LINE(399)
				::String _g = this->_navigationBar->get_backButton()->get_text();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(399)
				_g1 = (_g != HX_CSTRING(""));
			}
			else{
				HX_STACK_LINE(399)
				_g1 = false;
			}
			HX_STACK_LINE(399)
			this->_navigationBar->get_backButton()->set_visible(_g1);
		}
		else{
			HX_STACK_LINE(402)
			bool _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(402)
			if (((  ((this->isSimpleTransition(this->_transition))) ? bool((this->_page > (int)0)) : bool(false) ))){
				HX_STACK_LINE(402)
				::String _g2 = this->_navigationBar->get_backButton()->get_text();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(402)
				_g3 = (_g2 != HX_CSTRING(""));
			}
			else{
				HX_STACK_LINE(402)
				_g3 = false;
			}
			HX_STACK_LINE(402)
			this->_navigationBar->get_backButton()->set_visible(_g3);
		}
		HX_STACK_LINE(404)
		if (((this->_autoTitle != HX_CSTRING("")))){
			HX_STACK_LINE(405)
			this->_navigationBar->set_text((  (((bool((this->_page >= (int)0)) && bool(this->_titles->__GetItem(this->_page))))) ? ::String(this->_titles->__GetItem(this->_page)) : ::String(HX_CSTRING("")) ));
		}
		HX_STACK_LINE(407)
		::openfl::display::DisplayObject actualPage = (hx::TCast< openfl::display::Sprite >::cast(this->_thisPage))->getChildAt((int)0);		HX_STACK_VAR(actualPage,"actualPage");
		HX_STACK_LINE(408)
		if (((  ((::Std_obj::is(actualPage,hx::ClassOf< ::com::danielfreeman::madcomponents::IContainerUI >()))) ? bool((hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(actualPage))->__Field(HX_CSTRING("get_xml"),true)()->__Field(HX_CSTRING("has"),true)->__Field(HX_CSTRING("resolve"),true)(HX_CSTRING("title"))) : bool(false) ))){
			HX_STACK_LINE(409)
			::String _g4 = (hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(actualPage))->get_xml()->att->resolve(HX_CSTRING("title"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(409)
			this->_navigationBar->set_text(_g4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UINavigation_obj,updateNavigationBar,(void))

Void UINavigation_obj::keyHandler( ::openfl::events::KeyboardEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","keyHandler",0x31e64c5d,"com.danielfreeman.madcomponents.UINavigation.keyHandler","com/danielfreeman/madcomponents/UINavigation.hx",417,0x375b499f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(417)
		if (((bool((bool(this->_backKey) && bool((event->keyCode == (int)16777238)))) && bool(!(((bool(this->_backToExit) && bool((this->_page == (int)0))))))))){
			HX_STACK_LINE(419)
			this->goBack(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UINavigation_obj,keyHandler,(void))

Void UINavigation_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UINavigation","destructor",0x919ad7ab,"com.danielfreeman.madcomponents.UINavigation.destructor","com/danielfreeman/madcomponents/UINavigation.hx",424,0x375b499f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(425)
		this->_navigationBar->get_backButton()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->goBack_dyn(),null());
		HX_STACK_LINE(426)
		this->_navigationBar->destructor();
		HX_STACK_LINE(427)
		this->super::destructor();
		HX_STACK_LINE(428)
		this->removeEventListener(HX_CSTRING("clicked"),this->goForward_dyn(),null());
		HX_STACK_LINE(429)
		this->get_stage()->removeEventListener(::openfl::events::KeyboardEvent_obj::KEY_DOWN,this->keyHandler_dyn(),null());
	}
return null();
}


int UINavigation_obj::BACK;


UINavigation_obj::UINavigation_obj()
{
}

void UINavigation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UINavigation);
	HX_MARK_MEMBER_NAME(_navigationBar,"_navigationBar");
	HX_MARK_MEMBER_NAME(_pressedCell,"_pressedCell");
	HX_MARK_MEMBER_NAME(_autoForward,"_autoForward");
	HX_MARK_MEMBER_NAME(_autoBack,"_autoBack");
	HX_MARK_MEMBER_NAME(_autoTitle,"_autoTitle");
	HX_MARK_MEMBER_NAME(_autoFill,"_autoFill");
	HX_MARK_MEMBER_NAME(_row,"_row");
	HX_MARK_MEMBER_NAME(_titles,"_titles");
	HX_MARK_MEMBER_NAME(_backToExit,"_backToExit");
	HX_MARK_MEMBER_NAME(_alt,"_alt");
	HX_MARK_MEMBER_NAME(_backKey,"_backKey");
	HX_MARK_MEMBER_NAME(_fullPageAttributes,"_fullPageAttributes");
	HX_MARK_MEMBER_NAME(_hasNavBar,"_hasNavBar");
	HX_MARK_MEMBER_NAME(_fullPage,"_fullPage");
	::com::danielfreeman::madcomponents::UIPages_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UINavigation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_navigationBar,"_navigationBar");
	HX_VISIT_MEMBER_NAME(_pressedCell,"_pressedCell");
	HX_VISIT_MEMBER_NAME(_autoForward,"_autoForward");
	HX_VISIT_MEMBER_NAME(_autoBack,"_autoBack");
	HX_VISIT_MEMBER_NAME(_autoTitle,"_autoTitle");
	HX_VISIT_MEMBER_NAME(_autoFill,"_autoFill");
	HX_VISIT_MEMBER_NAME(_row,"_row");
	HX_VISIT_MEMBER_NAME(_titles,"_titles");
	HX_VISIT_MEMBER_NAME(_backToExit,"_backToExit");
	HX_VISIT_MEMBER_NAME(_alt,"_alt");
	HX_VISIT_MEMBER_NAME(_backKey,"_backKey");
	HX_VISIT_MEMBER_NAME(_fullPageAttributes,"_fullPageAttributes");
	HX_VISIT_MEMBER_NAME(_hasNavBar,"_hasNavBar");
	HX_VISIT_MEMBER_NAME(_fullPage,"_fullPage");
	::com::danielfreeman::madcomponents::UIPages_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UINavigation_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"row") ) { return get_row(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_row") ) { return _row; }
		if (HX_FIELD_EQ(inName,"_alt") ) { return _alt; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return get_index(); }
		if (HX_FIELD_EQ(inName,"label") ) { return get_label(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		if (HX_FIELD_EQ(inName,"goBack") ) { return goBack_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_titles") ) { return _titles; }
		if (HX_FIELD_EQ(inName,"get_row") ) { return get_row_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fullPage") ) { return get_fullPage(); }
		if (HX_FIELD_EQ(inName,"_backKey") ) { return _backKey; }
		if (HX_FIELD_EQ(inName,"goToPage") ) { return goToPage_dyn(); }
		if (HX_FIELD_EQ(inName,"nextPage") ) { return nextPage_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_autoBack") ) { return _autoBack; }
		if (HX_FIELD_EQ(inName,"_autoFill") ) { return _autoFill; }
		if (HX_FIELD_EQ(inName,"_fullPage") ) { return _fullPage; }
		if (HX_FIELD_EQ(inName,"set_title") ) { return set_title_dyn(); }
		if (HX_FIELD_EQ(inName,"goForward") ) { return goForward_dyn(); }
		if (HX_FIELD_EQ(inName,"get_index") ) { return get_index_dyn(); }
		if (HX_FIELD_EQ(inName,"get_label") ) { return get_label_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_autoTitle") ) { return _autoTitle; }
		if (HX_FIELD_EQ(inName,"_hasNavBar") ) { return _hasNavBar; }
		if (HX_FIELD_EQ(inName,"keyHandler") ) { return keyHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_backToExit") ) { return _backToExit; }
		if (HX_FIELD_EQ(inName,"updateTitle") ) { return updateTitle_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_pressedCell") ) { return _pressedCell; }
		if (HX_FIELD_EQ(inName,"_autoForward") ) { return _autoForward; }
		if (HX_FIELD_EQ(inName,"get_fullPage") ) { return get_fullPage_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fullPage") ) { return set_fullPage_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoBack") ) { return set_autoBack_dyn(); }
		if (HX_FIELD_EQ(inName,"doTransition") ) { return doTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"previousPage") ) { return previousPage_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"navigationBar") ) { return get_navigationBar(); }
		if (HX_FIELD_EQ(inName,"set_isVisible") ) { return set_isVisible_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_navigationBar") ) { return _navigationBar; }
		if (HX_FIELD_EQ(inName,"get_attributes") ) { return get_attributes_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"childAttributes") ) { return childAttributes_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoForward") ) { return set_autoForward_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_navigationBar") ) { return get_navigationBar_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_fullPageAttributes") ) { return _fullPageAttributes; }
		if (HX_FIELD_EQ(inName,"updateNavigationBar") ) { return updateNavigationBar_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UINavigation_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_row") ) { _row=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alt") ) { _alt=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return set_title(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_titles") ) { _titles=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fullPage") ) { return set_fullPage(inValue); }
		if (HX_FIELD_EQ(inName,"autoBack") ) { return set_autoBack(inValue); }
		if (HX_FIELD_EQ(inName,"_backKey") ) { _backKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_autoBack") ) { _autoBack=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_autoFill") ) { _autoFill=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fullPage") ) { _fullPage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_autoTitle") ) { _autoTitle=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hasNavBar") ) { _hasNavBar=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"autoForward") ) { return set_autoForward(inValue); }
		if (HX_FIELD_EQ(inName,"_backToExit") ) { _backToExit=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_pressedCell") ) { _pressedCell=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_autoForward") ) { _autoForward=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_navigationBar") ) { _navigationBar=inValue.Cast< ::com::danielfreeman::madcomponents::UINavigationBar >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_fullPageAttributes") ) { _fullPageAttributes=inValue.Cast< ::com::danielfreeman::madcomponents::Attributes >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UINavigation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fullPage"));
	outFields->push(HX_CSTRING("title"));
	outFields->push(HX_CSTRING("autoForward"));
	outFields->push(HX_CSTRING("autoBack"));
	outFields->push(HX_CSTRING("navigationBar"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("row"));
	outFields->push(HX_CSTRING("label"));
	outFields->push(HX_CSTRING("_navigationBar"));
	outFields->push(HX_CSTRING("_pressedCell"));
	outFields->push(HX_CSTRING("_autoForward"));
	outFields->push(HX_CSTRING("_autoBack"));
	outFields->push(HX_CSTRING("_autoTitle"));
	outFields->push(HX_CSTRING("_autoFill"));
	outFields->push(HX_CSTRING("_row"));
	outFields->push(HX_CSTRING("_titles"));
	outFields->push(HX_CSTRING("_backToExit"));
	outFields->push(HX_CSTRING("_alt"));
	outFields->push(HX_CSTRING("_backKey"));
	outFields->push(HX_CSTRING("_fullPageAttributes"));
	outFields->push(HX_CSTRING("_hasNavBar"));
	outFields->push(HX_CSTRING("_fullPage"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BACK"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::danielfreeman::madcomponents::UINavigationBar*/ ,(int)offsetof(UINavigation_obj,_navigationBar),HX_CSTRING("_navigationBar")},
	{hx::fsInt,(int)offsetof(UINavigation_obj,_pressedCell),HX_CSTRING("_pressedCell")},
	{hx::fsBool,(int)offsetof(UINavigation_obj,_autoForward),HX_CSTRING("_autoForward")},
	{hx::fsBool,(int)offsetof(UINavigation_obj,_autoBack),HX_CSTRING("_autoBack")},
	{hx::fsString,(int)offsetof(UINavigation_obj,_autoTitle),HX_CSTRING("_autoTitle")},
	{hx::fsBool,(int)offsetof(UINavigation_obj,_autoFill),HX_CSTRING("_autoFill")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UINavigation_obj,_row),HX_CSTRING("_row")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UINavigation_obj,_titles),HX_CSTRING("_titles")},
	{hx::fsBool,(int)offsetof(UINavigation_obj,_backToExit),HX_CSTRING("_backToExit")},
	{hx::fsBool,(int)offsetof(UINavigation_obj,_alt),HX_CSTRING("_alt")},
	{hx::fsBool,(int)offsetof(UINavigation_obj,_backKey),HX_CSTRING("_backKey")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::Attributes*/ ,(int)offsetof(UINavigation_obj,_fullPageAttributes),HX_CSTRING("_fullPageAttributes")},
	{hx::fsBool,(int)offsetof(UINavigation_obj,_hasNavBar),HX_CSTRING("_hasNavBar")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UINavigation_obj,_fullPage),HX_CSTRING("_fullPage")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_navigationBar"),
	HX_CSTRING("_pressedCell"),
	HX_CSTRING("_autoForward"),
	HX_CSTRING("_autoBack"),
	HX_CSTRING("_autoTitle"),
	HX_CSTRING("_autoFill"),
	HX_CSTRING("_row"),
	HX_CSTRING("_titles"),
	HX_CSTRING("_backToExit"),
	HX_CSTRING("_alt"),
	HX_CSTRING("_backKey"),
	HX_CSTRING("_fullPageAttributes"),
	HX_CSTRING("_hasNavBar"),
	HX_CSTRING("_fullPage"),
	HX_CSTRING("childAttributes"),
	HX_CSTRING("get_fullPage"),
	HX_CSTRING("set_fullPage"),
	HX_CSTRING("get_attributes"),
	HX_CSTRING("set_isVisible"),
	HX_CSTRING("layout"),
	HX_CSTRING("set_title"),
	HX_CSTRING("set_autoForward"),
	HX_CSTRING("set_autoBack"),
	HX_CSTRING("get_navigationBar"),
	HX_CSTRING("goForward"),
	HX_CSTRING("goBack"),
	HX_CSTRING("updateTitle"),
	HX_CSTRING("doTransition"),
	HX_CSTRING("get_index"),
	HX_CSTRING("get_row"),
	HX_CSTRING("get_label"),
	HX_CSTRING("goToPage"),
	HX_CSTRING("nextPage"),
	HX_CSTRING("previousPage"),
	HX_CSTRING("updateNavigationBar"),
	HX_CSTRING("keyHandler"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UINavigation_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UINavigation_obj::BACK,"BACK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UINavigation_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UINavigation_obj::BACK,"BACK");
};

#endif

Class UINavigation_obj::__mClass;

void UINavigation_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UINavigation"), hx::TCanCast< UINavigation_obj> ,sStaticFields,sMemberFields,
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

void UINavigation_obj::__boot()
{
	BACK= (int)16777238;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
