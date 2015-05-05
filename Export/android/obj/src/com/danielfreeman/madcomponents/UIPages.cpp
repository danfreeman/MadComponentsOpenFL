#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
#endif
#ifndef INCLUDED_MadXMLList
#include <MadXMLList.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIForm
#include <com/danielfreeman/madcomponents/UIForm.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIPages
#include <com/danielfreeman/madcomponents/UIPages.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
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
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
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

Void UIPages_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","new",0xeeef280e,"com.danielfreeman.madcomponents.UIPages.new","com/danielfreeman/madcomponents/UIPages.hx",77,0x6e5fd425)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(128)
	this->_slideOver = false;
	HX_STACK_LINE(126)
	this->_drawerHeight = ::com::danielfreeman::madcomponents::UIPages_obj::DRAWER_HEIGHT;
	HX_STACK_LINE(124)
	this->_shade = ::openfl::display::Shape_obj::__new();
	HX_STACK_LINE(123)
	this->_easeOut = 0.5;
	HX_STACK_LINE(122)
	this->_easeIn = 0.5;
	HX_STACK_LINE(121)
	this->_easing = false;
	HX_STACK_LINE(120)
	this->_layoutAfterSlide = null();
	HX_STACK_LINE(119)
	this->_border = true;
	HX_STACK_LINE(116)
	this->_drawer = null();
	HX_STACK_LINE(112)
	this->_slideTimer = ::openfl::utils::Timer_obj::__new(::com::danielfreeman::madcomponents::UIPages_obj::SLIDE_INTERVAL,::com::danielfreeman::madcomponents::UIPages_obj::STEPS);
	HX_STACK_LINE(111)
	this->_slideY = (int)0;
	HX_STACK_LINE(110)
	this->_slideX = (int)0;
	HX_STACK_LINE(108)
	this->_thisPage = null();
	HX_STACK_LINE(107)
	this->_page = (int)0;
	HX_STACK_LINE(106)
	this->_pages = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(133)
	super::__construct(null(),xml,attributes);
	HX_STACK_LINE(134)
	::com::danielfreeman::madcomponents::Attributes _g = attributes->copy(xml,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(134)
	this->_attributes = _g;
	HX_STACK_LINE(136)
	Array< int > _g1 = this->_attributes->get_backgroundColours();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(136)
	::com::danielfreeman::madcomponents::UI_obj::drawBackgroundColour(_g1,this->_attributes->width,(this->_attributes->y + this->_attributes->height),hx::ObjectPtr<OBJ_>(this),null());
	HX_STACK_LINE(137)
	this->_attributes->x = (int)0;
	HX_STACK_LINE(138)
	this->_attributes->y = (int)0;
	HX_STACK_LINE(140)
	bool _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(140)
	if ((xml->has->resolve(HX_CSTRING("easing")))){
		HX_STACK_LINE(140)
		::String _g2 = xml->att->resolve(HX_CSTRING("easing"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(140)
		_g3 = (_g2 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(140)
		_g3 = false;
	}
	HX_STACK_LINE(140)
	this->_easing = _g3;
	HX_STACK_LINE(141)
	if ((xml->has->resolve(HX_CSTRING("easeIn")))){
		HX_STACK_LINE(142)
		::String _g4 = xml->att->resolve(HX_CSTRING("easeIn"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(142)
		Float _g5 = ::Std_obj::parseFloat(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(142)
		this->_easeIn = _g5;
	}
	HX_STACK_LINE(144)
	if ((xml->has->resolve(HX_CSTRING("easeOut")))){
		HX_STACK_LINE(145)
		::String _g6 = xml->att->resolve(HX_CSTRING("easeOut"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(145)
		Float _g7 = ::Std_obj::parseFloat(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(145)
		this->_easeOut = _g7;
	}
	HX_STACK_LINE(147)
	bool _g9;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(147)
	if ((xml->has->resolve(HX_CSTRING("slideOver")))){
		HX_STACK_LINE(147)
		::String _g8 = xml->att->resolve(HX_CSTRING("slideOver"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(147)
		_g9 = (_g8 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(147)
		_g9 = false;
	}
	HX_STACK_LINE(147)
	this->_slideOver = _g9;
	HX_STACK_LINE(149)
	screen->addChildAt(hx::ObjectPtr<OBJ_>(this),(int)0);
	HX_STACK_LINE(150)
	::MadXMLList children = xml->children(null());		HX_STACK_VAR(children,"children");
	HX_STACK_LINE(151)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	struct _Function_1_1{
		inline static bool Block( ::MadXML &child0){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIPages.hx",153,0x6e5fd425)
			{
				HX_STACK_LINE(153)
				::String _g10 = child0->get_name();		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(153)
				return (_g10 != HX_CSTRING("data"));
			}
			return null();
		}
	};
	HX_STACK_LINE(152)
	for(::cpp::FastIterator_obj< ::MadXML > *__it = ::cpp::CreateFastIterator< ::MadXML >(children->iterator());  __it->hasNext(); ){
		::MadXML child0 = __it->next();
		if (((  ((!(child0->get_nodeKindIsText()))) ? bool(_Function_1_1::Block(child0)) : bool(false) ))){
			HX_STACK_LINE(154)
			::String childstr = child0->toXMLString();		HX_STACK_VAR(childstr,"childstr");
			HX_STACK_LINE(155)
			::String _g11;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(155)
			if ((xml->has->resolve(HX_CSTRING("lazyRender")))){
				HX_STACK_LINE(155)
				_g11 = xml->att->resolve(HX_CSTRING("lazyRender"));
			}
			else{
				HX_STACK_LINE(155)
				_g11 = HX_CSTRING("");
			}
			HX_STACK_LINE(155)
			::String _g12 = (HX_CSTRING("<page lazyRender=\"") + _g11);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(155)
			::String _g13 = (_g12 + HX_CSTRING("\" recycle=\""));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(155)
			::String _g14;		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(155)
			if ((xml->has->resolve(HX_CSTRING("recycle")))){
				HX_STACK_LINE(155)
				_g14 = xml->att->resolve(HX_CSTRING("recycle"));
			}
			else{
				HX_STACK_LINE(155)
				_g14 = HX_CSTRING("");
			}
			HX_STACK_LINE(155)
			::String _g15 = (_g13 + _g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(155)
			::String _g16 = (_g15 + HX_CSTRING("\">"));		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(155)
			::String _g17 = (_g16 + childstr);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(155)
			::String _g18 = (_g17 + HX_CSTRING("</page>"));		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(155)
			::MadXML child = ::MadXML_obj::parse(_g18);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(156)
			int _g19 = (index)++;		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(156)
			::com::danielfreeman::madcomponents::Attributes newAttributes = this->childAttributes(_g19);		HX_STACK_VAR(newAttributes,"newAttributes");
			HX_STACK_LINE(157)
			newAttributes->parse(child0);
			struct _Function_2_1{
				inline static bool Block( ::MadXML &child0){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIPages.hx",158,0x6e5fd425)
					{
						HX_STACK_LINE(158)
						::String _g20 = child0->att->resolve(HX_CSTRING("border"));		HX_STACK_VAR(_g20,"_g20");
						HX_STACK_LINE(158)
						return (_g20 != HX_CSTRING("false"));
					}
					return null();
				}
			};
			HX_STACK_LINE(158)
			if (((  ((!((!(child0->has->resolve(HX_CSTRING("border"))))))) ? bool(_Function_2_1::Block(child0)) : bool(true) ))){
				HX_STACK_LINE(159)
				::String _g21 = child0->get_name();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(159)
				this->addPadding(_g21,newAttributes);
			}
			HX_STACK_LINE(161)
			::com::danielfreeman::madcomponents::UIForm page = ::com::danielfreeman::madcomponents::UIForm_obj::__new(hx::ObjectPtr<OBJ_>(this),child,newAttributes,null(),null());		HX_STACK_VAR(page,"page");
			HX_STACK_LINE(162)
			this->_attributes->position(page,null());
			HX_STACK_LINE(163)
			page->set_name(HX_CSTRING("+"));
			HX_STACK_LINE(165)
			this->setVisible(page,false);
			HX_STACK_LINE(166)
			this->_pages->push(page);
		}
;
	}
	HX_STACK_LINE(169)
	this->setInitialPage();
	HX_STACK_LINE(170)
	this->_slideTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->slide_dyn(),null(),null(),null());
	HX_STACK_LINE(172)
	this->startMasking();
	HX_STACK_LINE(173)
	this->drawShade();
}
;
	return null();
}

//UIPages_obj::~UIPages_obj() { }

Dynamic UIPages_obj::__CreateEmpty() { return  new UIPages_obj; }
hx::ObjectPtr< UIPages_obj > UIPages_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIPages_obj > result = new UIPages_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIPages_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIPages_obj > result = new UIPages_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UIPages_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	if (inType==typeid( ::com::danielfreeman::madcomponents::IContainerUI_obj)) return operator ::com::danielfreeman::madcomponents::IContainerUI_obj *();
	return super::__ToInterface(inType);
}

::com::danielfreeman::madcomponents::Attributes UIPages_obj::childAttributes( int index){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","childAttributes",0xb00a1641,"com.danielfreeman.madcomponents.UIPages.childAttributes","com/danielfreeman/madcomponents/UIPages.hx",178,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(178)
	return this->_attributes->copy(null(),null());
}


HX_DEFINE_DYNAMIC_FUNC1(UIPages_obj,childAttributes,return )

Void UIPages_obj::setVisible( ::openfl::display::DisplayObject page,bool value){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","setVisible",0xe5dab702,"com.danielfreeman.madcomponents.UIPages.setVisible","com/danielfreeman/madcomponents/UIPages.hx",183,0x6e5fd425)
		HX_STACK_THIS(this)
		HX_STACK_ARG(page,"page")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(183)
		if ((::Std_obj::is(page,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))){
			HX_STACK_LINE(184)
			(hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(page))->set_isVisible(value);
		}
		else{
			HX_STACK_LINE(187)
			page->set_visible(value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIPages_obj,setVisible,(void))

Float UIPages_obj::set_drawerHeight( Float value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","set_drawerHeight",0xa92201c7,"com.danielfreeman.madcomponents.UIPages.set_drawerHeight","com/danielfreeman/madcomponents/UIPages.hx",194,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(195)
	::openfl::display::DisplayObjectContainer _g = this->_shade->get_parent();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(195)
	if (((_g != null()))){
		HX_STACK_LINE(196)
		this->_thisPage->set_y(((this->_attributes->height + this->_attributes->y) - value));
	}
	HX_STACK_LINE(198)
	this->_drawerHeight = value;
	HX_STACK_LINE(199)
	this->drawShade();
	HX_STACK_LINE(200)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIPages_obj,set_drawerHeight,return )

Void UIPages_obj::setInitialPage( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","setInitialPage",0xbdd76f83,"com.danielfreeman.madcomponents.UIPages.setInitialPage","com/danielfreeman/madcomponents/UIPages.hx",205,0x6e5fd425)
		HX_STACK_THIS(this)
		HX_STACK_LINE(205)
		if (((this->_pages->length > (int)0))){
			HX_STACK_LINE(206)
			this->_thisPage = this->_pages->__get((int)0).StaticCast< ::openfl::display::DisplayObject >();
			HX_STACK_LINE(207)
			this->_page = (int)0;
			HX_STACK_LINE(209)
			this->setVisible(this->_thisPage,true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPages_obj,setInitialPage,(void))

Array< ::Dynamic > UIPages_obj::get_pages( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","get_pages",0x64c3d5c9,"com.danielfreeman.madcomponents.UIPages.get_pages","com/danielfreeman/madcomponents/UIPages.hx",217,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_LINE(217)
	return this->_pages;
}


HX_DEFINE_DYNAMIC_FUNC0(UIPages_obj,get_pages,return )

::MadXML UIPages_obj::get_xml( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","get_xml",0x0b1bfd1c,"com.danielfreeman.madcomponents.UIPages.get_xml","com/danielfreeman/madcomponents/UIPages.hx",222,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_LINE(222)
	return this->_xml;
}


HX_DEFINE_DYNAMIC_FUNC0(UIPages_obj,get_xml,return )

Void UIPages_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","layout",0x3190d7bc,"com.danielfreeman.madcomponents.UIPages.layout","com/danielfreeman/madcomponents/UIPages.hx",228,0x6e5fd425)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(229)
		if ((this->_slideTimer->running)){
			HX_STACK_LINE(230)
			this->_layoutAfterSlide = attributes;
			HX_STACK_LINE(231)
			return null();
		}
		HX_STACK_LINE(233)
		::MadXMLList children = this->_xml->children(null());		HX_STACK_VAR(children,"children");
		HX_STACK_LINE(234)
		::com::danielfreeman::madcomponents::Attributes _g = attributes->copy(this->_xml,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(234)
		this->super::layout(_g);
		HX_STACK_LINE(235)
		Array< int > _g1 = this->_attributes->get_backgroundColours();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(235)
		::com::danielfreeman::madcomponents::UI_obj::drawBackgroundColour(_g1,this->_attributes->width,(this->_attributes->y + this->_attributes->height),hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(236)
		this->_attributes->x = (int)0;
		HX_STACK_LINE(237)
		this->_attributes->y = (int)0;
		HX_STACK_LINE(238)
		int idx = (int)0;		HX_STACK_VAR(idx,"idx");
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(239)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(239)
			int _g2 = children->length();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(239)
			while((true)){
				HX_STACK_LINE(239)
				if ((!(((_g11 < _g2))))){
					HX_STACK_LINE(239)
					break;
				}
				HX_STACK_LINE(239)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(240)
				::MadXML childXML = children->get(i);		HX_STACK_VAR(childXML,"childXML");
				HX_STACK_LINE(241)
				::String _g21 = childXML->get_name();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(241)
				if (((  (((_g21 != HX_CSTRING("data")))) ? bool(!(childXML->get_nodeKindIsText())) : bool(false) ))){
					HX_STACK_LINE(243)
					::com::danielfreeman::madcomponents::Attributes newAttributes = this->childAttributes(i);		HX_STACK_VAR(newAttributes,"newAttributes");
					HX_STACK_LINE(244)
					newAttributes->parse(childXML);
					struct _Function_4_1{
						inline static bool Block( ::MadXML &childXML){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIPages.hx",245,0x6e5fd425)
							{
								HX_STACK_LINE(245)
								::String _g3 = childXML->att->resolve(HX_CSTRING("border"));		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(245)
								return (_g3 != HX_CSTRING("false"));
							}
							return null();
						}
					};
					HX_STACK_LINE(245)
					if (((  ((!((!(childXML->has->resolve(HX_CSTRING("border"))))))) ? bool(_Function_4_1::Block(childXML)) : bool(true) ))){
						HX_STACK_LINE(246)
						::String _g4 = childXML->get_name();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(246)
						this->addPadding(_g4,newAttributes);
					}
					HX_STACK_LINE(248)
					int _g5 = (idx)++;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(248)
					::openfl::display::DisplayObject page = this->_pages->__get(_g5).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(page,"page");
					HX_STACK_LINE(249)
					if ((::Std_obj::is(page,hx::ClassOf< ::com::danielfreeman::madcomponents::IContainerUI >()))){
						HX_STACK_LINE(250)
						(hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(page))->__Field(HX_CSTRING("layout"),true)(newAttributes);
					}
					HX_STACK_LINE(253)
					if (((page == this->_drawer))){
						HX_STACK_LINE(254)
						this->_drawer->set_y(((this->_attributes->height + this->_attributes->y) - this->_drawerHeight));
					}
					else{
						HX_STACK_LINE(257)
						this->_attributes->position(page,null());
					}
				}
			}
		}
		HX_STACK_LINE(265)
		this->refreshMasking(null());
		HX_STACK_LINE(266)
		this->drawShade();
	}
return null();
}


Void UIPages_obj::addPadding( ::String localName,::com::danielfreeman::madcomponents::Attributes newAttributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","addPadding",0x27de9fc2,"com.danielfreeman.madcomponents.UIPages.addPadding","com/danielfreeman/madcomponents/UIPages.hx",272,0x6e5fd425)
		HX_STACK_THIS(this)
		HX_STACK_ARG(localName,"localName")
		HX_STACK_ARG(newAttributes,"newAttributes")
		HX_STACK_LINE(273)
		int _g = localName.toLowerCase().indexOf(HX_CSTRING("pages"),null());		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( ::String &localName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIPages.hx",273,0x6e5fd425)
				{
					HX_STACK_LINE(273)
					int _g1 = localName.toLowerCase().indexOf(HX_CSTRING("list"),null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(273)
					return (_g1 < (int)0);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( ::String &localName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIPages.hx",273,0x6e5fd425)
				{
					HX_STACK_LINE(273)
					int _g2 = localName.toLowerCase().indexOf(HX_CSTRING("navigation"),null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(273)
					return (_g2 < (int)0);
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static bool Block( ::String &localName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIPages.hx",273,0x6e5fd425)
				{
					HX_STACK_LINE(273)
					int _g3 = localName.toLowerCase().indexOf(HX_CSTRING("scroll"),null());		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(273)
					return (_g3 < (int)0);
				}
				return null();
			}
		};
		HX_STACK_LINE(273)
		if (((  (((  (((  (((  (((  (((_g < (int)0))) ? bool(_Function_1_1::Block(localName)) : bool(false) ))) ? bool(_Function_1_2::Block(localName)) : bool(false) ))) ? bool(_Function_1_3::Block(localName)) : bool(false) ))) ? bool((localName != HX_CSTRING("viewFlipper"))) : bool(false) ))) ? bool((localName != HX_CSTRING("frame"))) : bool(false) ))){
			struct _Function_2_1{
				inline static Dynamic Block( ::String &localName){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIPages.hx",273,0x6e5fd425)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UIPages.hx"),false);
						__result->Add(HX_CSTRING("lineNumber") , (int)273,false);
						__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.madcomponents.UIPages"),false);
						__result->Add(HX_CSTRING("methodName") , HX_CSTRING("addPadding"),false);
						__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(localName)),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(273)
			::haxe::Log_obj::trace(HX_CSTRING("adding padding!"),_Function_2_1::Block(localName));
			HX_STACK_LINE(274)
			hx::AddEq(newAttributes->x,10.0);
			HX_STACK_LINE(275)
			hx::AddEq(newAttributes->y,10.0);
			HX_STACK_LINE(276)
			hx::SubEq(newAttributes->width,20.);
			HX_STACK_LINE(277)
			hx::SubEq(newAttributes->height,20.);
			HX_STACK_LINE(278)
			newAttributes->set_hasBorder(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIPages_obj,addPadding,(void))

Void UIPages_obj::nextPage( ::String __o_transition){
::String transition = __o_transition.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","nextPage",0xd4209274,"com.danielfreeman.madcomponents.UIPages.nextPage","com/danielfreeman/madcomponents/UIPages.hx",286,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_ARG(transition,"transition")
{
		HX_STACK_LINE(286)
		if (((bool((bool(!(this->_slideTimer->running)) && bool((this->_lastPage == null())))) && bool((this->_page < (this->_pages->length - (int)1)))))){
			HX_STACK_LINE(287)
			this->_lastPageIndex = this->_page;
			HX_STACK_LINE(288)
			this->_lastPage = this->_pages->__get(this->_page).StaticCast< ::openfl::display::DisplayObject >();
			HX_STACK_LINE(289)
			(this->_page)++;
			HX_STACK_LINE(290)
			this->_thisPage = this->_pages->__get(this->_page).StaticCast< ::openfl::display::DisplayObject >();
			HX_STACK_LINE(292)
			this->setVisible(this->_thisPage,true);
			HX_STACK_LINE(293)
			this->doTransition(transition);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIPages_obj,nextPage,(void))

Void UIPages_obj::previousPage( ::String __o_transition){
::String transition = __o_transition.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","previousPage",0xd852ecb8,"com.danielfreeman.madcomponents.UIPages.previousPage","com/danielfreeman/madcomponents/UIPages.hx",301,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_ARG(transition,"transition")
{
		HX_STACK_LINE(301)
		if (((bool((bool(!(this->_slideTimer->running)) && bool((this->_lastPage == null())))) && bool((this->_page > (int)0))))){
			HX_STACK_LINE(302)
			this->_lastPageIndex = this->_page;
			HX_STACK_LINE(303)
			this->_lastPage = this->_pages->__get(this->_page).StaticCast< ::openfl::display::DisplayObject >();
			HX_STACK_LINE(304)
			(this->_page)--;
			HX_STACK_LINE(305)
			this->_thisPage = this->_pages->__get(this->_page).StaticCast< ::openfl::display::DisplayObject >();
			HX_STACK_LINE(307)
			this->setVisible(this->_thisPage,true);
			HX_STACK_LINE(308)
			this->doTransition(transition);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIPages_obj,previousPage,(void))

Void UIPages_obj::attachPages( Array< ::Dynamic > pages,hx::Null< bool >  __o_alt){
bool alt = __o_alt.Default(false);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","attachPages",0x1e4a8aed,"com.danielfreeman.madcomponents.UIPages.attachPages","com/danielfreeman/madcomponents/UIPages.hx",315,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pages,"pages")
	HX_STACK_ARG(alt,"alt")
{
		HX_STACK_LINE(316)
		this->_pages = pages;
		HX_STACK_LINE(317)
		{
			HX_STACK_LINE(317)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(317)
			int _g = pages->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(317)
			while((true)){
				HX_STACK_LINE(317)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(317)
					break;
				}
				HX_STACK_LINE(317)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(319)
				this->setVisible(pages->__get(i).StaticCast< ::openfl::display::DisplayObject >(),false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIPages_obj,attachPages,(void))

Void UIPages_obj::doTransition( ::String transition){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","doTransition",0xc5f72792,"com.danielfreeman.madcomponents.UIPages.doTransition","com/danielfreeman/madcomponents/UIPages.hx",326,0x6e5fd425)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transition,"transition")
		HX_STACK_LINE(327)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("changeStarting"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(327)
		this->get_stage()->dispatchEvent(_g);
		HX_STACK_LINE(328)
		this->_transition = transition;
		HX_STACK_LINE(329)
		this->_thisPage->set_x(this->_attributes->x);
		HX_STACK_LINE(330)
		this->_thisPage->set_y(this->_attributes->y);
		HX_STACK_LINE(331)
		this->_over = this->_slideOver;
		HX_STACK_LINE(332)
		::String _switch_1 = (transition);
		if (  ( _switch_1==HX_CSTRING("leftOver")) ||  ( _switch_1==HX_CSTRING("left"))){
			HX_STACK_LINE(336)
			::String _switch_2 = (transition);
			if (  ( _switch_2==HX_CSTRING("leftOver"))){
				HX_STACK_LINE(338)
				this->_over = true;
			}
			HX_STACK_LINE(340)
			this->_thisPage->set_x((this->_attributes->width + this->_attributes->x));
			HX_STACK_LINE(341)
			this->startSlide(null());
		}
		else if (  ( _switch_1==HX_CSTRING("rightOver")) ||  ( _switch_1==HX_CSTRING("right"))){
			HX_STACK_LINE(344)
			::String _switch_3 = (transition);
			if (  ( _switch_3==HX_CSTRING("rightOver"))){
				HX_STACK_LINE(346)
				this->_over = true;
			}
			HX_STACK_LINE(348)
			this->_thisPage->set_x(((-(((  ((this->_over)) ? Float(0.2) : Float(1.0) ))) * this->_attributes->width) + this->_attributes->x));
			HX_STACK_LINE(349)
			this->startSlide(null());
		}
		else if (  ( _switch_1==HX_CSTRING("up"))){
			HX_STACK_LINE(351)
			this->_thisPage->set_y((this->_attributes->height + this->_attributes->y));
			HX_STACK_LINE(352)
			this->startSlide(null());
		}
		else if (  ( _switch_1==HX_CSTRING("down"))){
			HX_STACK_LINE(354)
			this->startSlide((Float(((this->_attributes->height + this->_attributes->y))) / Float(::com::danielfreeman::madcomponents::UIPages_obj::STEPS)));
		}
		else if (  ( _switch_1==HX_CSTRING("drawerUp"))){
			HX_STACK_LINE(356)
			::com::danielfreeman::madcomponents::UIForm _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(356)
			_g1 = hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(this->_thisPage);
			HX_STACK_LINE(356)
			this->_drawer = _g1;
			HX_STACK_LINE(357)
			this->_thisPage->set_y((this->_attributes->height + this->_attributes->y));
			HX_STACK_LINE(358)
			this->startSlide((Float(-(this->_drawerHeight)) / Float(::com::danielfreeman::madcomponents::UIPages_obj::STEPS)));
		}
		else if (  ( _switch_1==HX_CSTRING("drawerDown"))){
			HX_STACK_LINE(360)
			this->_thisPage->set_y(((this->_attributes->height + this->_attributes->y) - this->_drawerHeight));
			HX_STACK_LINE(361)
			::openfl::display::DisplayObjectContainer _g2 = this->_shade->get_parent();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(361)
			if (((_g2 != null()))){
				HX_STACK_LINE(362)
				this->_shade->get_parent()->removeChild(this->_shade);
			}
			HX_STACK_LINE(364)
			this->startSlide((Float(((this->_attributes->height + this->_attributes->y))) / Float(::com::danielfreeman::madcomponents::UIPages_obj::STEPS)));
			HX_STACK_LINE(365)
			this->_drawer = null();
		}
		else  {
			HX_STACK_LINE(367)
			this->setVisible(this->_lastPage,false);
			HX_STACK_LINE(368)
			this->_lastPage = null();
			HX_STACK_LINE(369)
			::openfl::events::Event _g3 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(369)
			this->dispatchEvent(_g3);
			HX_STACK_LINE(370)
			::openfl::events::Event _g4 = ::openfl::events::Event_obj::__new(HX_CSTRING("changeComplete"),null(),null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(370)
			this->dispatchEvent(_g4);
		}
;
;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIPages_obj,doTransition,(void))

Void UIPages_obj::drawShade( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","drawShade",0xa7f55c37,"com.danielfreeman.madcomponents.UIPages.drawShade","com/danielfreeman/madcomponents/UIPages.hx",377,0x6e5fd425)
		HX_STACK_THIS(this)
		HX_STACK_LINE(378)
		this->_shade->get_graphics()->clear();
		HX_STACK_LINE(379)
		this->_shade->get_graphics()->beginFill((int)0,0.4);
		HX_STACK_LINE(380)
		Float height = (this->_attributes->height - this->_drawerHeight);		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(381)
		this->_shade->get_graphics()->drawRect((int)0,-(height),this->_attributes->width,height);
		HX_STACK_LINE(382)
		this->_shade->get_graphics()->beginFill((int)0,null());
		HX_STACK_LINE(383)
		this->_shade->get_graphics()->drawRect((int)0,(int)-4,this->_attributes->width,(int)4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPages_obj,drawShade,(void))

Void UIPages_obj::startSlide( hx::Null< Float >  __o_slideY){
Float slideY = __o_slideY.Default(0);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","startSlide",0x8ab5b781,"com.danielfreeman.madcomponents.UIPages.startSlide","com/danielfreeman/madcomponents/UIPages.hx",389,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_ARG(slideY,"slideY")
{
		HX_STACK_LINE(392)
		Float _g = this->_thisPage->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(392)
		Float _g1 = (this->_attributes->x - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(392)
		Float _g2 = (Float(_g1) / Float(::com::danielfreeman::madcomponents::UIPages_obj::STEPS));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(392)
		this->_slideX = _g2;
		HX_STACK_LINE(393)
		Float _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(393)
		if (((slideY == (int)0))){
			HX_STACK_LINE(393)
			Float _g3 = this->_thisPage->get_y();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(393)
			Float _g4 = (this->_attributes->y - _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(393)
			_g5 = (Float(_g4) / Float(::com::danielfreeman::madcomponents::UIPages_obj::STEPS));
		}
		else{
			HX_STACK_LINE(393)
			_g5 = slideY;
		}
		HX_STACK_LINE(393)
		this->_slideY = _g5;
		HX_STACK_LINE(394)
		Float _g6 = this->_thisPage->get_x();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(394)
		::String _g7 = ((((this->_slideX + HX_CSTRING(" = (")) + this->_attributes->x) + HX_CSTRING(" - ")) + _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(394)
		::String _g8 = (_g7 + HX_CSTRING(") / "));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(394)
		::String _g9 = (_g8 + ::com::danielfreeman::madcomponents::UIPages_obj::STEPS);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(394)
		::haxe::Log_obj::trace(_g9,hx::SourceInfo(HX_CSTRING("UIPages.hx"),394,HX_CSTRING("com.danielfreeman.madcomponents.UIPages"),HX_CSTRING("startSlide")));
		HX_STACK_LINE(395)
		this->_slideTimer->reset();
		HX_STACK_LINE(396)
		this->_slideTimer->start();
		HX_STACK_LINE(397)
		::openfl::events::Event _g10 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(397)
		this->dispatchEvent(_g10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIPages_obj,startSlide,(void))

bool UIPages_obj::isSimpleTransition( ::String transition){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","isSimpleTransition",0xd2b73083,"com.danielfreeman.madcomponents.UIPages.isSimpleTransition","com/danielfreeman/madcomponents/UIPages.hx",404,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_ARG(transition,"transition")
	HX_STACK_LINE(404)
	return (bool((bool((bool((bool((transition == HX_CSTRING(""))) || bool((transition == HX_CSTRING("left"))))) || bool((transition == HX_CSTRING("right"))))) || bool((transition == HX_CSTRING("leftOver"))))) || bool((transition == HX_CSTRING("rightOver"))));
}


HX_DEFINE_DYNAMIC_FUNC1(UIPages_obj,isSimpleTransition,return )

bool UIPages_obj::upTransition( ::String transition){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","upTransition",0xa48bda62,"com.danielfreeman.madcomponents.UIPages.upTransition","com/danielfreeman/madcomponents/UIPages.hx",409,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_ARG(transition,"transition")
	HX_STACK_LINE(409)
	return (bool((transition == HX_CSTRING("up"))) || bool((transition == HX_CSTRING("drawerUp"))));
}


HX_DEFINE_DYNAMIC_FUNC1(UIPages_obj,upTransition,return )

bool UIPages_obj::downTransition( ::String transition){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","downTransition",0x78bc23a9,"com.danielfreeman.madcomponents.UIPages.downTransition","com/danielfreeman/madcomponents/UIPages.hx",414,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_ARG(transition,"transition")
	HX_STACK_LINE(414)
	return (bool((transition == HX_CSTRING("down"))) || bool((transition == HX_CSTRING("drawerDown"))));
}


HX_DEFINE_DYNAMIC_FUNC1(UIPages_obj,downTransition,return )

Float UIPages_obj::bezier( Float p0,Float p1,Float p2,Float t){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","bezier",0x803e2931,"com.danielfreeman.madcomponents.UIPages.bezier","com/danielfreeman/madcomponents/UIPages.hx",419,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p0,"p0")
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(419)
	return ((((t * t) * p0) + ((((int)2 * t) * (((int)1 - t))) * p1)) + (((((int)1 - t)) * (((int)1 - t))) * p2));
}


HX_DEFINE_DYNAMIC_FUNC4(UIPages_obj,bezier,return )

Float UIPages_obj::easing( Float t){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","easing",0x611575bd,"com.danielfreeman.madcomponents.UIPages.easing","com/danielfreeman/madcomponents/UIPages.hx",424,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(424)
	if (((t < 0.5))){
		HX_STACK_LINE(425)
		return this->bezier(0.0,((Float(-(this->_easeIn)) / Float((int)2)) + 0.25),0.5,((int)1 - (t * (int)2)));
	}
	else{
		HX_STACK_LINE(427)
		return this->bezier(0.5,((Float(this->_easeOut) / Float((int)2)) + 0.75),1.0,((((int)1 - t)) * (int)2));
	}
	HX_STACK_LINE(424)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC1(UIPages_obj,easing,return )

Float UIPages_obj::delta( Float t,Float increment){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","delta",0x250a0726,"com.danielfreeman.madcomponents.UIPages.delta","com/danielfreeman/madcomponents/UIPages.hx",432,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(increment,"increment")
	HX_STACK_LINE(432)
	if ((this->_easing)){
		HX_STACK_LINE(433)
		if (((t == (int)0))){
			HX_STACK_LINE(433)
			return (int)0;
		}
		else{
			HX_STACK_LINE(433)
			Float _g = this->easing(t);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(433)
			Float _g1 = this->easing((t - (Float((int)1) / Float(::com::danielfreeman::madcomponents::UIPages_obj::STEPS))));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(433)
			Float _g2 = (_g - _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(433)
			return ((increment * ::com::danielfreeman::madcomponents::UIPages_obj::STEPS) * _g2);
		}
	}
	else{
		HX_STACK_LINE(436)
		return increment;
	}
	HX_STACK_LINE(432)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC2(UIPages_obj,delta,return )

Void UIPages_obj::slideComplete( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","slideComplete",0x293e9838,"com.danielfreeman.madcomponents.UIPages.slideComplete","com/danielfreeman/madcomponents/UIPages.hx",441,0x6e5fd425)
		HX_STACK_THIS(this)
		HX_STACK_LINE(442)
		this->_slideTimer->stop();
		HX_STACK_LINE(444)
		if (((bool((this->_transition == HX_CSTRING("down"))) || bool((this->_transition == HX_CSTRING("drawerDown")))))){
			HX_STACK_LINE(446)
			this->setVisible(this->_thisPage,false);
		}
		else{
			HX_STACK_LINE(448)
			if (((bool((this->_transition != HX_CSTRING("up"))) && bool((this->_transition != HX_CSTRING("drawerUp")))))){
				HX_STACK_LINE(449)
				this->removeLastPage();
				HX_STACK_LINE(450)
				this->_thisPage->set_x((int)0);
			}
		}
		HX_STACK_LINE(453)
		if ((this->upTransition(this->_transition))){
			HX_STACK_LINE(454)
			this->_savePageIndex = this->_lastPageIndex;
		}
		else{
			HX_STACK_LINE(456)
			if ((this->downTransition(this->_transition))){
				HX_STACK_LINE(457)
				this->_page = this->_savePageIndex;
			}
			else{
				HX_STACK_LINE(459)
				if ((!(this->isSimpleTransition(this->_transition)))){
					HX_STACK_LINE(460)
					this->_page = this->_lastPageIndex;
				}
			}
		}
		HX_STACK_LINE(463)
		if (((this->_layoutAfterSlide != null()))){
			HX_STACK_LINE(464)
			this->layout(this->_layoutAfterSlide);
			HX_STACK_LINE(465)
			this->_layoutAfterSlide = null();
		}
		HX_STACK_LINE(467)
		if (((this->_transition == HX_CSTRING("drawerUp")))){
			HX_STACK_LINE(468)
			(hx::TCast< openfl::display::Sprite >::cast(this->_thisPage))->addChild(this->_shade);
		}
		HX_STACK_LINE(470)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("changeComplete"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(470)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPages_obj,slideComplete,(void))

Void UIPages_obj::slide( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","slide",0xccaae45f,"com.danielfreeman.madcomponents.UIPages.slide","com/danielfreeman/madcomponents/UIPages.hx",476,0x6e5fd425)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(477)
		if (((this->_lastPage == null()))){
			HX_STACK_LINE(478)
			::haxe::Log_obj::trace(HX_CSTRING("abort slide"),hx::SourceInfo(HX_CSTRING("UIPages.hx"),478,HX_CSTRING("com.danielfreeman.madcomponents.UIPages"),HX_CSTRING("slide")));
			HX_STACK_LINE(479)
			return null();
		}
		HX_STACK_LINE(481)
		Float t = (Float((hx::TCast< openfl::utils::Timer >::cast(event->get_currentTarget()))->currentCount) / Float(::com::danielfreeman::madcomponents::UIPages_obj::STEPS));		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(483)
		{
			HX_STACK_LINE(483)
			::openfl::display::DisplayObject _g = this->_lastPage;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(483)
			Float _g1 = _g->get_x();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(483)
			Float _g11 = this->delta(t,this->_slideX);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(483)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(483)
			_g2 = (((  (((bool(this->_over) && bool((this->_slideX < (int)0))))) ? Float(0.2) : Float((  (((bool(this->_over) && bool((this->_slideX > (int)0))))) ? Float(5.) : Float(1.0) )) )) * _g11);
			HX_STACK_LINE(483)
			Float _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(483)
			_g->set_x(_g3);
		}
		HX_STACK_LINE(484)
		{
			HX_STACK_LINE(484)
			::openfl::display::DisplayObject _g = this->_thisPage;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(484)
			Float _g4 = _g->get_x();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(484)
			Float _g5 = this->delta(t,this->_slideX);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(484)
			Float _g6 = (_g4 + _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(484)
			_g->set_x(_g6);
		}
		HX_STACK_LINE(485)
		{
			HX_STACK_LINE(485)
			::openfl::display::DisplayObject _g = this->_thisPage;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(485)
			Float _g7 = _g->get_y();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(485)
			Float _g8 = this->delta(t,this->_slideY);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(485)
			Float _g9 = (_g7 + _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(485)
			_g->set_y(_g9);
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::openfl::events::TimerEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIPages.hx",486,0x6e5fd425)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UIPages.hx"),false);
					__result->Add(HX_CSTRING("lineNumber") , (int)486,false);
					__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.madcomponents.UIPages"),false);
					__result->Add(HX_CSTRING("methodName") , HX_CSTRING("slide"),false);
					__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add((hx::TCast< openfl::utils::Timer >::cast(event->get_currentTarget()))->currentCount)),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(486)
		::haxe::Log_obj::trace(HX_CSTRING("currentCount="),_Function_1_1::Block(event));
		HX_STACK_LINE(487)
		if ((((hx::TCast< openfl::utils::Timer >::cast(event->get_currentTarget()))->currentCount == ::com::danielfreeman::madcomponents::UIPages_obj::STEPS))){
			HX_STACK_LINE(488)
			this->slideComplete();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIPages_obj,slide,(void))

Void UIPages_obj::doLayout( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","doLayout",0xcad24627,"com.danielfreeman.madcomponents.UIPages.doLayout","com/danielfreeman/madcomponents/UIPages.hx",493,0x6e5fd425)
		HX_STACK_THIS(this)
		HX_STACK_LINE(494)
		::com::danielfreeman::madcomponents::Attributes _g = this->get_attributes();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(494)
		this->layout(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPages_obj,doLayout,(void))

Void UIPages_obj::removeLastPage( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","removeLastPage",0x9793bb3b,"com.danielfreeman.madcomponents.UIPages.removeLastPage","com/danielfreeman/madcomponents/UIPages.hx",500,0x6e5fd425)
		HX_STACK_THIS(this)
		HX_STACK_LINE(502)
		this->setVisible(this->_lastPage,false);
		HX_STACK_LINE(503)
		this->_lastPage = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPages_obj,removeLastPage,(void))

Void UIPages_obj::goToPage( int page,::String __o_transition){
::String transition = __o_transition.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","goToPage",0x9dbc3344,"com.danielfreeman.madcomponents.UIPages.goToPage","com/danielfreeman/madcomponents/UIPages.hx",509,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_ARG(page,"page")
	HX_STACK_ARG(transition,"transition")
{
		HX_STACK_LINE(510)
		if ((this->_slideTimer->running)){
			HX_STACK_LINE(511)
			return null();
		}
		HX_STACK_LINE(513)
		this->_lastPageIndex = this->_page;
		HX_STACK_LINE(514)
		if (((  (((page == this->_page))) ? bool(this->isSimpleTransition(transition)) : bool(false) ))){
			HX_STACK_LINE(515)
			return null();
		}
		HX_STACK_LINE(517)
		this->_lastPage = this->_pages->__get(this->_page).StaticCast< ::openfl::display::DisplayObject >();
		HX_STACK_LINE(518)
		this->_page = page;
		HX_STACK_LINE(519)
		this->_thisPage = this->_pages->__get(this->_page).StaticCast< ::openfl::display::DisplayObject >();
		HX_STACK_LINE(521)
		this->setVisible(this->_thisPage,true);
		HX_STACK_LINE(522)
		this->doTransition(transition);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIPages_obj,goToPage,(void))

bool UIPages_obj::goToPageId( ::String id,::String __o_transition){
::String transition = __o_transition.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","goToPageId",0xaba2cc3f,"com.danielfreeman.madcomponents.UIPages.goToPageId","com/danielfreeman/madcomponents/UIPages.hx",528,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(transition,"transition")
{
		HX_STACK_LINE(529)
		{
			HX_STACK_LINE(529)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(529)
			int _g = this->_pages->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(529)
			while((true)){
				HX_STACK_LINE(529)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(529)
					break;
				}
				HX_STACK_LINE(529)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(530)
				::String _g2 = (hx::TCast< openfl::display::Sprite >::cast(this->_pages->__get(i).StaticCast< ::openfl::display::DisplayObject >()))->getChildAt((int)0)->get_name();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(530)
				if (((_g2 == id))){
					HX_STACK_LINE(531)
					this->goToPage(i,transition);
					HX_STACK_LINE(532)
					return true;
				}
			}
		}
		HX_STACK_LINE(535)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(UIPages_obj,goToPageId,return )

::openfl::display::DisplayObject UIPages_obj::pageId( ::String id){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","pageId",0xbf10b51c,"com.danielfreeman.madcomponents.UIPages.pageId","com/danielfreeman/madcomponents/UIPages.hx",539,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(540)
	{
		HX_STACK_LINE(540)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(540)
		int _g = this->_pages->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(540)
		while((true)){
			HX_STACK_LINE(540)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(540)
				break;
			}
			HX_STACK_LINE(540)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(541)
			::String _g2 = (hx::TCast< openfl::display::Sprite >::cast(this->_pages->__get(i).StaticCast< ::openfl::display::DisplayObject >()))->getChildAt((int)0)->get_name();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(541)
			if (((_g2 == id))){
				HX_STACK_LINE(542)
				return (hx::TCast< openfl::display::Sprite >::cast(this->_pages->__get(i).StaticCast< ::openfl::display::DisplayObject >()))->getChildAt((int)0);
			}
		}
	}
	HX_STACK_LINE(545)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIPages_obj,pageId,return )

int UIPages_obj::get_pageNumber( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","get_pageNumber",0xb4f80dd3,"com.danielfreeman.madcomponents.UIPages.get_pageNumber","com/danielfreeman/madcomponents/UIPages.hx",552,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_LINE(552)
	return this->_page;
}


HX_DEFINE_DYNAMIC_FUNC0(UIPages_obj,get_pageNumber,return )

int UIPages_obj::set_pageNumber( int value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","set_pageNumber",0xd517f647,"com.danielfreeman.madcomponents.UIPages.set_pageNumber","com/danielfreeman/madcomponents/UIPages.hx",556,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(557)
	this->goToPage(value,null());
	HX_STACK_LINE(558)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIPages_obj,set_pageNumber,return )

int UIPages_obj::get_pageUnder( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","get_pageUnder",0x9a59394e,"com.danielfreeman.madcomponents.UIPages.get_pageUnder","com/danielfreeman/madcomponents/UIPages.hx",563,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_LINE(563)
	return this->_savePageIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(UIPages_obj,get_pageUnder,return )

Void UIPages_obj::clear( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","clear",0x963e90bb,"com.danielfreeman.madcomponents.UIPages.clear","com/danielfreeman/madcomponents/UIPages.hx",570,0x6e5fd425)
		HX_STACK_THIS(this)
		HX_STACK_LINE(570)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(570)
		Array< ::Dynamic > _g1 = this->_pages;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(570)
		while((true)){
			HX_STACK_LINE(570)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(570)
				break;
			}
			HX_STACK_LINE(570)
			::openfl::display::DisplayObject view = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(view,"view");
			HX_STACK_LINE(570)
			++(_g);
			HX_STACK_LINE(571)
			if ((::Std_obj::is(view,hx::ClassOf< ::com::danielfreeman::madcomponents::IContainerUI >()))){
				HX_STACK_LINE(572)
				(hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(view))->clear();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPages_obj,clear,(void))

::openfl::display::DisplayObject UIPages_obj::findViewById( ::String id,hx::Null< int >  __o_row,hx::Null< int >  __o_group){
int row = __o_row.Default(-1);
int group = __o_group.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","findViewById",0x53221e82,"com.danielfreeman.madcomponents.UIPages.findViewById","com/danielfreeman/madcomponents/UIPages.hx",580,0x6e5fd425)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(group,"group")
{
		HX_STACK_LINE(581)
		{
			HX_STACK_LINE(581)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(581)
			Array< ::Dynamic > _g1 = this->_pages;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(581)
			while((true)){
				HX_STACK_LINE(581)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(581)
					break;
				}
				HX_STACK_LINE(581)
				::openfl::display::DisplayObject view = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(581)
				++(_g);
				HX_STACK_LINE(582)
				::String _g2 = view->get_name();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(582)
				if (((_g2 == id))){
					HX_STACK_LINE(583)
					return view;
				}
				else{
					HX_STACK_LINE(586)
					if ((::Std_obj::is(view,hx::ClassOf< ::com::danielfreeman::madcomponents::IContainerUI >()))){
						HX_STACK_LINE(587)
						::openfl::display::DisplayObject result = (hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(view))->findViewById(id,row,group);		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(588)
						if (((result != null()))){
							HX_STACK_LINE(589)
							return result;
						}
					}
				}
			}
		}
		HX_STACK_LINE(593)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(UIPages_obj,findViewById,return )

Void UIPages_obj::drawComponent( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","drawComponent",0xfa760147,"com.danielfreeman.madcomponents.UIPages.drawComponent","com/danielfreeman/madcomponents/UIPages.hx",597,0x6e5fd425)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPages_obj,drawComponent,(void))

Void UIPages_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPages","destructor",0x03e8f54b,"com.danielfreeman.madcomponents.UIPages.destructor","com/danielfreeman/madcomponents/UIPages.hx",602,0x6e5fd425)
		HX_STACK_THIS(this)
		HX_STACK_LINE(603)
		this->super::destructor();
		HX_STACK_LINE(604)
		this->_slideTimer->removeEventListener(::openfl::events::TimerEvent_obj::TIMER,this->slide_dyn(),null());
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(605)
			Array< ::Dynamic > _g1 = this->_pages;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(605)
			while((true)){
				HX_STACK_LINE(605)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(605)
					break;
				}
				HX_STACK_LINE(605)
				::openfl::display::DisplayObject view = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(605)
				++(_g);
				HX_STACK_LINE(606)
				if ((::Std_obj::is(view,hx::ClassOf< ::com::danielfreeman::madcomponents::IContainerUI >()))){
					HX_STACK_LINE(607)
					(hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(view))->__Field(HX_CSTRING("destructor"),true)();
				}
			}
		}
	}
return null();
}


::String UIPages_obj::STARTING;

::String UIPages_obj::COMPLETE;

::String UIPages_obj::SLIDE_LEFT;

::String UIPages_obj::SLIDE_RIGHT;

::String UIPages_obj::SLIDE_UP;

::String UIPages_obj::SLIDE_DOWN;

::String UIPages_obj::DRAWER_UP;

::String UIPages_obj::DRAWER_DOWN;

::String UIPages_obj::SLIDE_LEFT_OVER;

::String UIPages_obj::SLIDE_RIGHT_OVER;

Float UIPages_obj::DRAWER_HEIGHT;

int UIPages_obj::SLIDE_INTERVAL;

int UIPages_obj::STEPS;

Float UIPages_obj::PADDING;

Float UIPages_obj::DIM_ALPHA;

Float UIPages_obj::UNDER;


UIPages_obj::UIPages_obj()
{
}

void UIPages_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIPages);
	HX_MARK_MEMBER_NAME(_pages,"_pages");
	HX_MARK_MEMBER_NAME(_page,"_page");
	HX_MARK_MEMBER_NAME(_thisPage,"_thisPage");
	HX_MARK_MEMBER_NAME(_lastPage,"_lastPage");
	HX_MARK_MEMBER_NAME(_slideX,"_slideX");
	HX_MARK_MEMBER_NAME(_slideY,"_slideY");
	HX_MARK_MEMBER_NAME(_slideTimer,"_slideTimer");
	HX_MARK_MEMBER_NAME(_drawer,"_drawer");
	HX_MARK_MEMBER_NAME(_transition,"_transition");
	HX_MARK_MEMBER_NAME(_lastPageIndex,"_lastPageIndex");
	HX_MARK_MEMBER_NAME(_border,"_border");
	HX_MARK_MEMBER_NAME(_layoutAfterSlide,"_layoutAfterSlide");
	HX_MARK_MEMBER_NAME(_easing,"_easing");
	HX_MARK_MEMBER_NAME(_easeIn,"_easeIn");
	HX_MARK_MEMBER_NAME(_easeOut,"_easeOut");
	HX_MARK_MEMBER_NAME(_shade,"_shade");
	HX_MARK_MEMBER_NAME(_savePageIndex,"_savePageIndex");
	HX_MARK_MEMBER_NAME(_drawerHeight,"_drawerHeight");
	HX_MARK_MEMBER_NAME(_over,"_over");
	HX_MARK_MEMBER_NAME(_slideOver,"_slideOver");
	::com::danielfreeman::madcomponents::MadMasking_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIPages_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pages,"_pages");
	HX_VISIT_MEMBER_NAME(_page,"_page");
	HX_VISIT_MEMBER_NAME(_thisPage,"_thisPage");
	HX_VISIT_MEMBER_NAME(_lastPage,"_lastPage");
	HX_VISIT_MEMBER_NAME(_slideX,"_slideX");
	HX_VISIT_MEMBER_NAME(_slideY,"_slideY");
	HX_VISIT_MEMBER_NAME(_slideTimer,"_slideTimer");
	HX_VISIT_MEMBER_NAME(_drawer,"_drawer");
	HX_VISIT_MEMBER_NAME(_transition,"_transition");
	HX_VISIT_MEMBER_NAME(_lastPageIndex,"_lastPageIndex");
	HX_VISIT_MEMBER_NAME(_border,"_border");
	HX_VISIT_MEMBER_NAME(_layoutAfterSlide,"_layoutAfterSlide");
	HX_VISIT_MEMBER_NAME(_easing,"_easing");
	HX_VISIT_MEMBER_NAME(_easeIn,"_easeIn");
	HX_VISIT_MEMBER_NAME(_easeOut,"_easeOut");
	HX_VISIT_MEMBER_NAME(_shade,"_shade");
	HX_VISIT_MEMBER_NAME(_savePageIndex,"_savePageIndex");
	HX_VISIT_MEMBER_NAME(_drawerHeight,"_drawerHeight");
	HX_VISIT_MEMBER_NAME(_over,"_over");
	HX_VISIT_MEMBER_NAME(_slideOver,"_slideOver");
	::com::danielfreeman::madcomponents::MadMasking_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIPages_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { return get_xml(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"STEPS") ) { return STEPS; }
		if (HX_FIELD_EQ(inName,"pages") ) { return get_pages(); }
		if (HX_FIELD_EQ(inName,"_page") ) { return _page; }
		if (HX_FIELD_EQ(inName,"_over") ) { return _over; }
		if (HX_FIELD_EQ(inName,"delta") ) { return delta_dyn(); }
		if (HX_FIELD_EQ(inName,"slide") ) { return slide_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_pages") ) { return _pages; }
		if (HX_FIELD_EQ(inName,"_shade") ) { return _shade; }
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		if (HX_FIELD_EQ(inName,"bezier") ) { return bezier_dyn(); }
		if (HX_FIELD_EQ(inName,"easing") ) { return easing_dyn(); }
		if (HX_FIELD_EQ(inName,"pageId") ) { return pageId_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_slideX") ) { return _slideX; }
		if (HX_FIELD_EQ(inName,"_slideY") ) { return _slideY; }
		if (HX_FIELD_EQ(inName,"_drawer") ) { return _drawer; }
		if (HX_FIELD_EQ(inName,"_border") ) { return _border; }
		if (HX_FIELD_EQ(inName,"_easing") ) { return _easing; }
		if (HX_FIELD_EQ(inName,"_easeIn") ) { return _easeIn; }
		if (HX_FIELD_EQ(inName,"get_xml") ) { return get_xml_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_easeOut") ) { return _easeOut; }
		if (HX_FIELD_EQ(inName,"nextPage") ) { return nextPage_dyn(); }
		if (HX_FIELD_EQ(inName,"doLayout") ) { return doLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"goToPage") ) { return goToPage_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pageUnder") ) { return get_pageUnder(); }
		if (HX_FIELD_EQ(inName,"_thisPage") ) { return _thisPage; }
		if (HX_FIELD_EQ(inName,"_lastPage") ) { return _lastPage; }
		if (HX_FIELD_EQ(inName,"get_pages") ) { return get_pages_dyn(); }
		if (HX_FIELD_EQ(inName,"drawShade") ) { return drawShade_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pageNumber") ) { return get_pageNumber(); }
		if (HX_FIELD_EQ(inName,"_slideOver") ) { return _slideOver; }
		if (HX_FIELD_EQ(inName,"setVisible") ) { return setVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"addPadding") ) { return addPadding_dyn(); }
		if (HX_FIELD_EQ(inName,"startSlide") ) { return startSlide_dyn(); }
		if (HX_FIELD_EQ(inName,"goToPageId") ) { return goToPageId_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_slideTimer") ) { return _slideTimer; }
		if (HX_FIELD_EQ(inName,"_transition") ) { return _transition; }
		if (HX_FIELD_EQ(inName,"attachPages") ) { return attachPages_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousPage") ) { return previousPage_dyn(); }
		if (HX_FIELD_EQ(inName,"doTransition") ) { return doTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"upTransition") ) { return upTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"findViewById") ) { return findViewById_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DRAWER_HEIGHT") ) { return DRAWER_HEIGHT; }
		if (HX_FIELD_EQ(inName,"_drawerHeight") ) { return _drawerHeight; }
		if (HX_FIELD_EQ(inName,"slideComplete") ) { return slideComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pageUnder") ) { return get_pageUnder_dyn(); }
		if (HX_FIELD_EQ(inName,"drawComponent") ) { return drawComponent_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SLIDE_INTERVAL") ) { return SLIDE_INTERVAL; }
		if (HX_FIELD_EQ(inName,"_lastPageIndex") ) { return _lastPageIndex; }
		if (HX_FIELD_EQ(inName,"_savePageIndex") ) { return _savePageIndex; }
		if (HX_FIELD_EQ(inName,"setInitialPage") ) { return setInitialPage_dyn(); }
		if (HX_FIELD_EQ(inName,"downTransition") ) { return downTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"removeLastPage") ) { return removeLastPage_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pageNumber") ) { return get_pageNumber_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pageNumber") ) { return set_pageNumber_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"childAttributes") ) { return childAttributes_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_drawerHeight") ) { return set_drawerHeight_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_layoutAfterSlide") ) { return _layoutAfterSlide; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isSimpleTransition") ) { return isSimpleTransition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIPages_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"STEPS") ) { STEPS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_page") ) { _page=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_over") ) { _over=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_pages") ) { _pages=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shade") ) { _shade=inValue.Cast< ::openfl::display::Shape >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_slideX") ) { _slideX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slideY") ) { _slideY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawer") ) { _drawer=inValue.Cast< ::com::danielfreeman::madcomponents::UIForm >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_border") ) { _border=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_easing") ) { _easing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_easeIn") ) { _easeIn=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_easeOut") ) { _easeOut=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_thisPage") ) { _thisPage=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastPage") ) { _lastPage=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pageNumber") ) { return set_pageNumber(inValue); }
		if (HX_FIELD_EQ(inName,"_slideOver") ) { _slideOver=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_slideTimer") ) { _slideTimer=inValue.Cast< ::openfl::utils::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_transition") ) { _transition=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawerHeight") ) { return set_drawerHeight(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DRAWER_HEIGHT") ) { DRAWER_HEIGHT=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawerHeight") ) { _drawerHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SLIDE_INTERVAL") ) { SLIDE_INTERVAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastPageIndex") ) { _lastPageIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_savePageIndex") ) { _savePageIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_layoutAfterSlide") ) { _layoutAfterSlide=inValue.Cast< ::com::danielfreeman::madcomponents::Attributes >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIPages_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("drawerHeight"));
	outFields->push(HX_CSTRING("pages"));
	outFields->push(HX_CSTRING("xml"));
	outFields->push(HX_CSTRING("pageNumber"));
	outFields->push(HX_CSTRING("pageUnder"));
	outFields->push(HX_CSTRING("_pages"));
	outFields->push(HX_CSTRING("_page"));
	outFields->push(HX_CSTRING("_thisPage"));
	outFields->push(HX_CSTRING("_lastPage"));
	outFields->push(HX_CSTRING("_slideX"));
	outFields->push(HX_CSTRING("_slideY"));
	outFields->push(HX_CSTRING("_slideTimer"));
	outFields->push(HX_CSTRING("_drawer"));
	outFields->push(HX_CSTRING("_transition"));
	outFields->push(HX_CSTRING("_lastPageIndex"));
	outFields->push(HX_CSTRING("_border"));
	outFields->push(HX_CSTRING("_layoutAfterSlide"));
	outFields->push(HX_CSTRING("_easing"));
	outFields->push(HX_CSTRING("_easeIn"));
	outFields->push(HX_CSTRING("_easeOut"));
	outFields->push(HX_CSTRING("_shade"));
	outFields->push(HX_CSTRING("_savePageIndex"));
	outFields->push(HX_CSTRING("_drawerHeight"));
	outFields->push(HX_CSTRING("_over"));
	outFields->push(HX_CSTRING("_slideOver"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("STARTING"),
	HX_CSTRING("COMPLETE"),
	HX_CSTRING("SLIDE_LEFT"),
	HX_CSTRING("SLIDE_RIGHT"),
	HX_CSTRING("SLIDE_UP"),
	HX_CSTRING("SLIDE_DOWN"),
	HX_CSTRING("DRAWER_UP"),
	HX_CSTRING("DRAWER_DOWN"),
	HX_CSTRING("SLIDE_LEFT_OVER"),
	HX_CSTRING("SLIDE_RIGHT_OVER"),
	HX_CSTRING("DRAWER_HEIGHT"),
	HX_CSTRING("SLIDE_INTERVAL"),
	HX_CSTRING("STEPS"),
	HX_CSTRING("PADDING"),
	HX_CSTRING("DIM_ALPHA"),
	HX_CSTRING("UNDER"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UIPages_obj,_pages),HX_CSTRING("_pages")},
	{hx::fsInt,(int)offsetof(UIPages_obj,_page),HX_CSTRING("_page")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(UIPages_obj,_thisPage),HX_CSTRING("_thisPage")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(UIPages_obj,_lastPage),HX_CSTRING("_lastPage")},
	{hx::fsFloat,(int)offsetof(UIPages_obj,_slideX),HX_CSTRING("_slideX")},
	{hx::fsFloat,(int)offsetof(UIPages_obj,_slideY),HX_CSTRING("_slideY")},
	{hx::fsObject /*::openfl::utils::Timer*/ ,(int)offsetof(UIPages_obj,_slideTimer),HX_CSTRING("_slideTimer")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UIForm*/ ,(int)offsetof(UIPages_obj,_drawer),HX_CSTRING("_drawer")},
	{hx::fsString,(int)offsetof(UIPages_obj,_transition),HX_CSTRING("_transition")},
	{hx::fsInt,(int)offsetof(UIPages_obj,_lastPageIndex),HX_CSTRING("_lastPageIndex")},
	{hx::fsBool,(int)offsetof(UIPages_obj,_border),HX_CSTRING("_border")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::Attributes*/ ,(int)offsetof(UIPages_obj,_layoutAfterSlide),HX_CSTRING("_layoutAfterSlide")},
	{hx::fsBool,(int)offsetof(UIPages_obj,_easing),HX_CSTRING("_easing")},
	{hx::fsFloat,(int)offsetof(UIPages_obj,_easeIn),HX_CSTRING("_easeIn")},
	{hx::fsFloat,(int)offsetof(UIPages_obj,_easeOut),HX_CSTRING("_easeOut")},
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(UIPages_obj,_shade),HX_CSTRING("_shade")},
	{hx::fsInt,(int)offsetof(UIPages_obj,_savePageIndex),HX_CSTRING("_savePageIndex")},
	{hx::fsFloat,(int)offsetof(UIPages_obj,_drawerHeight),HX_CSTRING("_drawerHeight")},
	{hx::fsBool,(int)offsetof(UIPages_obj,_over),HX_CSTRING("_over")},
	{hx::fsBool,(int)offsetof(UIPages_obj,_slideOver),HX_CSTRING("_slideOver")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_pages"),
	HX_CSTRING("_page"),
	HX_CSTRING("_thisPage"),
	HX_CSTRING("_lastPage"),
	HX_CSTRING("_slideX"),
	HX_CSTRING("_slideY"),
	HX_CSTRING("_slideTimer"),
	HX_CSTRING("_drawer"),
	HX_CSTRING("_transition"),
	HX_CSTRING("_lastPageIndex"),
	HX_CSTRING("_border"),
	HX_CSTRING("_layoutAfterSlide"),
	HX_CSTRING("_easing"),
	HX_CSTRING("_easeIn"),
	HX_CSTRING("_easeOut"),
	HX_CSTRING("_shade"),
	HX_CSTRING("_savePageIndex"),
	HX_CSTRING("_drawerHeight"),
	HX_CSTRING("_over"),
	HX_CSTRING("_slideOver"),
	HX_CSTRING("childAttributes"),
	HX_CSTRING("setVisible"),
	HX_CSTRING("set_drawerHeight"),
	HX_CSTRING("setInitialPage"),
	HX_CSTRING("get_pages"),
	HX_CSTRING("get_xml"),
	HX_CSTRING("layout"),
	HX_CSTRING("addPadding"),
	HX_CSTRING("nextPage"),
	HX_CSTRING("previousPage"),
	HX_CSTRING("attachPages"),
	HX_CSTRING("doTransition"),
	HX_CSTRING("drawShade"),
	HX_CSTRING("startSlide"),
	HX_CSTRING("isSimpleTransition"),
	HX_CSTRING("upTransition"),
	HX_CSTRING("downTransition"),
	HX_CSTRING("bezier"),
	HX_CSTRING("easing"),
	HX_CSTRING("delta"),
	HX_CSTRING("slideComplete"),
	HX_CSTRING("slide"),
	HX_CSTRING("doLayout"),
	HX_CSTRING("removeLastPage"),
	HX_CSTRING("goToPage"),
	HX_CSTRING("goToPageId"),
	HX_CSTRING("pageId"),
	HX_CSTRING("get_pageNumber"),
	HX_CSTRING("set_pageNumber"),
	HX_CSTRING("get_pageUnder"),
	HX_CSTRING("clear"),
	HX_CSTRING("findViewById"),
	HX_CSTRING("drawComponent"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIPages_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIPages_obj::STARTING,"STARTING");
	HX_MARK_MEMBER_NAME(UIPages_obj::COMPLETE,"COMPLETE");
	HX_MARK_MEMBER_NAME(UIPages_obj::SLIDE_LEFT,"SLIDE_LEFT");
	HX_MARK_MEMBER_NAME(UIPages_obj::SLIDE_RIGHT,"SLIDE_RIGHT");
	HX_MARK_MEMBER_NAME(UIPages_obj::SLIDE_UP,"SLIDE_UP");
	HX_MARK_MEMBER_NAME(UIPages_obj::SLIDE_DOWN,"SLIDE_DOWN");
	HX_MARK_MEMBER_NAME(UIPages_obj::DRAWER_UP,"DRAWER_UP");
	HX_MARK_MEMBER_NAME(UIPages_obj::DRAWER_DOWN,"DRAWER_DOWN");
	HX_MARK_MEMBER_NAME(UIPages_obj::SLIDE_LEFT_OVER,"SLIDE_LEFT_OVER");
	HX_MARK_MEMBER_NAME(UIPages_obj::SLIDE_RIGHT_OVER,"SLIDE_RIGHT_OVER");
	HX_MARK_MEMBER_NAME(UIPages_obj::DRAWER_HEIGHT,"DRAWER_HEIGHT");
	HX_MARK_MEMBER_NAME(UIPages_obj::SLIDE_INTERVAL,"SLIDE_INTERVAL");
	HX_MARK_MEMBER_NAME(UIPages_obj::STEPS,"STEPS");
	HX_MARK_MEMBER_NAME(UIPages_obj::PADDING,"PADDING");
	HX_MARK_MEMBER_NAME(UIPages_obj::DIM_ALPHA,"DIM_ALPHA");
	HX_MARK_MEMBER_NAME(UIPages_obj::UNDER,"UNDER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIPages_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIPages_obj::STARTING,"STARTING");
	HX_VISIT_MEMBER_NAME(UIPages_obj::COMPLETE,"COMPLETE");
	HX_VISIT_MEMBER_NAME(UIPages_obj::SLIDE_LEFT,"SLIDE_LEFT");
	HX_VISIT_MEMBER_NAME(UIPages_obj::SLIDE_RIGHT,"SLIDE_RIGHT");
	HX_VISIT_MEMBER_NAME(UIPages_obj::SLIDE_UP,"SLIDE_UP");
	HX_VISIT_MEMBER_NAME(UIPages_obj::SLIDE_DOWN,"SLIDE_DOWN");
	HX_VISIT_MEMBER_NAME(UIPages_obj::DRAWER_UP,"DRAWER_UP");
	HX_VISIT_MEMBER_NAME(UIPages_obj::DRAWER_DOWN,"DRAWER_DOWN");
	HX_VISIT_MEMBER_NAME(UIPages_obj::SLIDE_LEFT_OVER,"SLIDE_LEFT_OVER");
	HX_VISIT_MEMBER_NAME(UIPages_obj::SLIDE_RIGHT_OVER,"SLIDE_RIGHT_OVER");
	HX_VISIT_MEMBER_NAME(UIPages_obj::DRAWER_HEIGHT,"DRAWER_HEIGHT");
	HX_VISIT_MEMBER_NAME(UIPages_obj::SLIDE_INTERVAL,"SLIDE_INTERVAL");
	HX_VISIT_MEMBER_NAME(UIPages_obj::STEPS,"STEPS");
	HX_VISIT_MEMBER_NAME(UIPages_obj::PADDING,"PADDING");
	HX_VISIT_MEMBER_NAME(UIPages_obj::DIM_ALPHA,"DIM_ALPHA");
	HX_VISIT_MEMBER_NAME(UIPages_obj::UNDER,"UNDER");
};

#endif

Class UIPages_obj::__mClass;

void UIPages_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIPages"), hx::TCanCast< UIPages_obj> ,sStaticFields,sMemberFields,
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

void UIPages_obj::__boot()
{
	STARTING= HX_CSTRING("changeStarting");
	COMPLETE= HX_CSTRING("changeComplete");
	SLIDE_LEFT= HX_CSTRING("left");
	SLIDE_RIGHT= HX_CSTRING("right");
	SLIDE_UP= HX_CSTRING("up");
	SLIDE_DOWN= HX_CSTRING("down");
	DRAWER_UP= HX_CSTRING("drawerUp");
	DRAWER_DOWN= HX_CSTRING("drawerDown");
	SLIDE_LEFT_OVER= HX_CSTRING("leftOver");
	SLIDE_RIGHT_OVER= HX_CSTRING("rightOver");
	DRAWER_HEIGHT= (int)220;
	SLIDE_INTERVAL= (int)40;
	STEPS= (int)4;
	PADDING= 10.0;
	DIM_ALPHA= 0.4;
	UNDER= 0.2;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
