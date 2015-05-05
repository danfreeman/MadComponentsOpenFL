#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
#endif
#ifndef INCLUDED_MadXMLList
#include <MadXMLList.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIForm
#include <com/danielfreeman/madcomponents/UIForm.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical
#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIViewFlipper
#include <com/danielfreeman/madcomponents/UIViewFlipper.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
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
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
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
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
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

Void UIViewFlipper_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIViewFlipper","new",0xd6f1b6b5,"com.danielfreeman.madcomponents.UIViewFlipper.new","com/danielfreeman/madcomponents/UIViewFlipper.hx",55,0x839f3b9e)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(72)
	this->_lastPage = (int)-1;
	HX_STACK_LINE(71)
	this->_page = (int)0;
	HX_STACK_LINE(70)
	this->_pages = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(76)
	::com::danielfreeman::madcomponents::Attributes newAttributes = attributes->copy(null(),null());		HX_STACK_VAR(newAttributes,"newAttributes");
	HX_STACK_LINE(77)
	newAttributes->x = (int)0;
	HX_STACK_LINE(78)
	newAttributes->y = (int)0;
	HX_STACK_LINE(79)
	super::__construct(screen,xml,newAttributes);
	HX_STACK_LINE(80)
	this->showScrollBar();
}
;
	return null();
}

//UIViewFlipper_obj::~UIViewFlipper_obj() { }

Dynamic UIViewFlipper_obj::__CreateEmpty() { return  new UIViewFlipper_obj; }
hx::ObjectPtr< UIViewFlipper_obj > UIViewFlipper_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIViewFlipper_obj > result = new UIViewFlipper_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIViewFlipper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIViewFlipper_obj > result = new UIViewFlipper_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void UIViewFlipper_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes0){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIViewFlipper","layout",0x017dab75,"com.danielfreeman.madcomponents.UIViewFlipper.layout","com/danielfreeman/madcomponents/UIViewFlipper.hx",86,0x839f3b9e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes0,"attributes0")
		HX_STACK_LINE(87)
		::com::danielfreeman::madcomponents::Attributes attributes = attributes0->copy(null(),null());		HX_STACK_VAR(attributes,"attributes");
		HX_STACK_LINE(88)
		attributes->x = (int)0;
		HX_STACK_LINE(89)
		attributes->y = (int)0;
		HX_STACK_LINE(90)
		this->_attributes = attributes;
		HX_STACK_LINE(91)
		this->_width = attributes->width;
		HX_STACK_LINE(92)
		this->_height = attributes->height;
		HX_STACK_LINE(93)
		this->drawComponent();
		HX_STACK_LINE(94)
		::MadXMLList children = this->get_xml()->children(null());		HX_STACK_VAR(children,"children");
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(95)
			int _g = children->length();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			while((true)){
				HX_STACK_LINE(95)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(95)
					break;
				}
				HX_STACK_LINE(95)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(96)
				::MadXML pageXML = children->get(i);		HX_STACK_VAR(pageXML,"pageXML");
				HX_STACK_LINE(98)
				::com::danielfreeman::madcomponents::Attributes newAttributes = attributes->copy(null(),null());		HX_STACK_VAR(newAttributes,"newAttributes");
				HX_STACK_LINE(99)
				Float shiftX = (i * this->_width);		HX_STACK_VAR(shiftX,"shiftX");
				struct _Function_3_1{
					inline static bool Block( ::MadXML &pageXML){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIViewFlipper.hx",100,0x839f3b9e)
						{
							HX_STACK_LINE(100)
							::String _g2 = pageXML->att->resolve(HX_CSTRING("border"));		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(100)
							return (_g2 == HX_CSTRING("true"));
						}
						return null();
					}
				};
				HX_STACK_LINE(100)
				if (((  ((pageXML->has->resolve(HX_CSTRING("border")))) ? bool(_Function_3_1::Block(pageXML)) : bool(false) ))){
					HX_STACK_LINE(101)
					::String _g11 = pageXML->get_name();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(101)
					this->addPadding(_g11,newAttributes);
				}
				HX_STACK_LINE(103)
				::com::danielfreeman::madcomponents::UIForm page;		HX_STACK_VAR(page,"page");
				HX_STACK_LINE(103)
				page = hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(this->_slider->getChildAt(i));
				HX_STACK_LINE(104)
				attributes->position(page,null());
				HX_STACK_LINE(105)
				page->layout(newAttributes);
				HX_STACK_LINE(106)
				{
					HX_STACK_LINE(106)
					::com::danielfreeman::madcomponents::UIForm _g2 = page;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(106)
					Float _g21 = _g2->get_x();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(106)
					Float _g3 = (_g21 + shiftX);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(106)
					_g2->set_x(_g3);
				}
			}
		}
		HX_STACK_LINE(108)
		this->_maximumSlide = (((this->_pages->__Field(HX_CSTRING("length"),true) - (int)1)) * this->_width);
		HX_STACK_LINE(109)
		if (((this->_maximumSlide < (int)0))){
			HX_STACK_LINE(110)
			this->_maximumSlide = (int)0;
		}
		HX_STACK_LINE(112)
		this->_slider->set_x((-(this->_page) * this->_width));
		HX_STACK_LINE(113)
		this->_lastPage = (int)-1;
		HX_STACK_LINE(114)
		this->showScrollBar();
		HX_STACK_LINE(115)
		this->_scrollBarVisible = false;
		HX_STACK_LINE(116)
		this->refreshMasking(null());
	}
return null();
}


Void UIViewFlipper_obj::addPadding( ::String localName,::com::danielfreeman::madcomponents::Attributes newAttributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIViewFlipper","addPadding",0x6f5243fb,"com.danielfreeman.madcomponents.UIViewFlipper.addPadding","com/danielfreeman/madcomponents/UIViewFlipper.hx",123,0x839f3b9e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(localName,"localName")
		HX_STACK_ARG(newAttributes,"newAttributes")
		struct _Function_1_1{
			inline static bool Block( ::String &localName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIViewFlipper.hx",123,0x839f3b9e)
				{
					HX_STACK_LINE(123)
					int _g = localName.indexOf(HX_CSTRING("List"),null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(123)
					return (_g < (int)0);
				}
				return null();
			}
		};
		HX_STACK_LINE(123)
		if (((  (((bool((bool((bool((localName != HX_CSTRING("list"))) && bool((localName != HX_CSTRING("navigation"))))) && bool((localName != HX_CSTRING("viewFlipper"))))) && bool((localName != HX_CSTRING("frame")))))) ? bool(_Function_1_1::Block(localName)) : bool(false) ))){
			HX_STACK_LINE(124)
			hx::AddEq(newAttributes->x,10.0);
			HX_STACK_LINE(125)
			hx::AddEq(newAttributes->y,10.0);
			HX_STACK_LINE(126)
			hx::SubEq(newAttributes->width,20.);
			HX_STACK_LINE(127)
			hx::SubEq(newAttributes->height,20.);
			HX_STACK_LINE(128)
			newAttributes->set_hasBorder(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIViewFlipper_obj,addPadding,(void))

Void UIViewFlipper_obj::createSlider( ::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIViewFlipper","createSlider",0x40892d48,"com.danielfreeman.madcomponents.UIViewFlipper.createSlider","com/danielfreeman/madcomponents/UIViewFlipper.hx",135,0x839f3b9e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(136)
		this->_width = attributes->width;
		HX_STACK_LINE(137)
		this->_height = attributes->height;
		HX_STACK_LINE(138)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(138)
		::openfl::display::Sprite _g1 = this->_slider = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(138)
		this->addChild(_g1);
		HX_STACK_LINE(139)
		::MadXMLList children = xml->children(null());		HX_STACK_VAR(children,"children");
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(140)
			int _g2 = children->length();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(140)
			while((true)){
				HX_STACK_LINE(140)
				if ((!(((_g11 < _g2))))){
					HX_STACK_LINE(140)
					break;
				}
				HX_STACK_LINE(140)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(141)
				::MadXML pageXML = children->get(i);		HX_STACK_VAR(pageXML,"pageXML");
				HX_STACK_LINE(142)
				::String _g21 = pageXML->toXMLString();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(142)
				::String _g3 = (HX_CSTRING("<page>") + _g21);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(142)
				::String _g4 = (_g3 + HX_CSTRING("</page>"));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(142)
				::MadXML child = ::MadXML_obj::parse(_g4);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(143)
				::com::danielfreeman::madcomponents::Attributes newAttributes = attributes->copy(null(),null());		HX_STACK_VAR(newAttributes,"newAttributes");
				HX_STACK_LINE(144)
				Float shiftX = (i * this->_width);		HX_STACK_VAR(shiftX,"shiftX");
				struct _Function_3_1{
					inline static bool Block( ::MadXML &pageXML){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIViewFlipper.hx",145,0x839f3b9e)
						{
							HX_STACK_LINE(145)
							::String _g5 = pageXML->att->resolve(HX_CSTRING("border"));		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(145)
							return (_g5 == HX_CSTRING("true"));
						}
						return null();
					}
				};
				HX_STACK_LINE(145)
				if (((  ((pageXML->has->resolve(HX_CSTRING("border")))) ? bool(_Function_3_1::Block(pageXML)) : bool(false) ))){
					HX_STACK_LINE(146)
					::String _g6 = pageXML->get_name();		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(146)
					this->addPadding(_g6,newAttributes);
				}
				HX_STACK_LINE(148)
				::com::danielfreeman::madcomponents::UIForm page = ::com::danielfreeman::madcomponents::UIForm_obj::__new(this->_slider,child,newAttributes,null(),null());		HX_STACK_VAR(page,"page");
				HX_STACK_LINE(149)
				attributes->position(page,null());
				HX_STACK_LINE(150)
				{
					HX_STACK_LINE(150)
					::com::danielfreeman::madcomponents::UIForm _g22 = page;		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(150)
					Float _g7 = _g22->get_x();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(150)
					Float _g8 = (_g7 + shiftX);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(150)
					_g22->set_x(_g8);
				}
				HX_STACK_LINE(151)
				this->_pages->__Field(HX_CSTRING("push"),true)(page);
			}
		}
		HX_STACK_LINE(153)
		this->_maximumSlide = (((this->_pages->__Field(HX_CSTRING("length"),true) - (int)1)) * this->_width);
		HX_STACK_LINE(154)
		if (((this->_maximumSlide < (int)0))){
			HX_STACK_LINE(155)
			this->_maximumSlide = (int)0;
		}
	}
return null();
}


Void UIViewFlipper_obj::attachPages( Dynamic pages){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIViewFlipper","attachPages",0x5c069894,"com.danielfreeman.madcomponents.UIViewFlipper.attachPages","com/danielfreeman/madcomponents/UIViewFlipper.hx",162,0x839f3b9e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pages,"pages")
		HX_STACK_LINE(163)
		Float position = (int)0;		HX_STACK_VAR(position,"position");
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(164)
			while((true)){
				HX_STACK_LINE(164)
				if ((!(((_g < pages->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(164)
					break;
				}
				HX_STACK_LINE(164)
				Dynamic page = pages->__GetItem(_g);		HX_STACK_VAR(page,"page");
				HX_STACK_LINE(164)
				++(_g);
				HX_STACK_LINE(165)
				this->_slider->addChild(page);
				HX_STACK_LINE(166)
				this->_pages->__Field(HX_CSTRING("push"),true)(page);
				HX_STACK_LINE(167)
				page->__FieldRef(HX_CSTRING("x")) = position;
				HX_STACK_LINE(168)
				hx::AddEq(position,this->_width);
			}
		}
		HX_STACK_LINE(170)
		this->_maximumSlide = (((pages->__Field(HX_CSTRING("length"),true) - (int)1)) * this->_width);
		HX_STACK_LINE(171)
		this->showScrollBar();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIViewFlipper_obj,attachPages,(void))

Void UIViewFlipper_obj::drawScrollBar( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIViewFlipper","drawScrollBar",0x58366db7,"com.danielfreeman.madcomponents.UIViewFlipper.drawScrollBar","com/danielfreeman/madcomponents/UIViewFlipper.hx",177,0x839f3b9e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(178)
		Float _g = -(this->_slider->get_x());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(178)
		Float _g1 = (Float(_g) / Float(this->_width));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(178)
		int _g2 = ::Math_obj::round(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(178)
		this->_page = _g2;
		HX_STACK_LINE(179)
		if (((bool((this->_page == this->_lastPage)) || bool((this->_scrollBarLayer == null()))))){
			HX_STACK_LINE(180)
			return null();
		}
		HX_STACK_LINE(182)
		this->_scrollBarLayer->get_graphics()->clear();
		HX_STACK_LINE(183)
		if (((this->_scrollBarColour != ::com::danielfreeman::madcomponents::Attributes_obj::TRANSPARENT))){
			HX_STACK_LINE(184)
			Float barPosition = (Float(((this->_width - (16.0 * this->_pages->__Field(HX_CSTRING("length"),true))))) / Float((int)2));		HX_STACK_VAR(barPosition,"barPosition");
			HX_STACK_LINE(185)
			this->_scrollBarLayer->get_graphics()->lineStyle(1.0,this->_scrollBarColour,null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(186)
			{
				HX_STACK_LINE(186)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(186)
				int _g3 = this->_pages->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(186)
				while((true)){
					HX_STACK_LINE(186)
					if ((!(((_g11 < _g3))))){
						HX_STACK_LINE(186)
						break;
					}
					HX_STACK_LINE(186)
					int i = (_g11)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(187)
					if (((i == this->_page))){
						HX_STACK_LINE(188)
						this->_scrollBarLayer->get_graphics()->beginFill(this->_scrollBarColour,null());
					}
					HX_STACK_LINE(190)
					this->_scrollBarLayer->get_graphics()->drawCircle(((barPosition + (i * 16.0)) + 8.),(this->_height - 20.0),4.0);
					HX_STACK_LINE(191)
					this->_scrollBarLayer->get_graphics()->endFill();
				}
			}
		}
		HX_STACK_LINE(194)
		this->_lastPage = this->_page;
	}
return null();
}


Void UIViewFlipper_obj::mouseMove( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIViewFlipper","mouseMove",0x36646feb,"com.danielfreeman.madcomponents.UIViewFlipper.mouseMove","com/danielfreeman/madcomponents/UIViewFlipper.hx",198,0x839f3b9e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(199)
		Float _g = -(this->_slider->get_x());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(199)
		this->_delta = _g;
		HX_STACK_LINE(200)
		Float _g1 = this->get_mouseX();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(200)
		Float _g2 = (_g1 - this->_startMouse->x);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(200)
		Float _g3 = (this->_startSlider->x + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(200)
		this->set_sliderX(_g3);
		HX_STACK_LINE(201)
		Float _g4 = this->_slider->get_x();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(201)
		hx::AddEq(this->_delta,_g4);
		HX_STACK_LINE(202)
		Float _g5 = ::Math_obj::abs(this->_delta);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(202)
		hx::AddEq(this->_distance,_g5);
		HX_STACK_LINE(203)
		if (((this->_distance > 8.0))){
			HX_STACK_LINE(204)
			this->showScrollBar();
		}
		else{
			HX_STACK_LINE(206)
			if (((bool(this->_classic) && bool((this->_touchTimer->currentCount == (int)3))))){
				HX_STACK_LINE(207)
				this->pressButton(null());
			}
			else{
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIViewFlipper_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIViewFlipper.hx",209,0x839f3b9e)
						{
							HX_STACK_LINE(209)
							Float _g6 = ::Math_obj::abs(__this->_delta);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(209)
							return (_g6 <= 2.0);
						}
						return null();
					}
				};
				HX_STACK_LINE(209)
				if (((  (((bool((this->_touchTimer->currentCount == (int)8)) && bool(!(this->_classic))))) ? bool(_Function_3_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(210)
					this->pressButton(null());
				}
			}
		}
	}
return null();
}


bool UIViewFlipper_obj::slideCondition( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIViewFlipper","slideCondition",0xa06e95f5,"com.danielfreeman.madcomponents.UIViewFlipper.slideCondition","com/danielfreeman/madcomponents/UIViewFlipper.hx",216,0x839f3b9e)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIViewFlipper_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIViewFlipper.hx",216,0x839f3b9e)
			{
				HX_STACK_LINE(216)
				Float _g = __this->get_mouseX();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(216)
				Float _g1 = (_g - __this->_startMouse->x);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(216)
				Float _g2 = ::Math_obj::abs(_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(216)
				Float _g3 = (Float(_g2) / Float(__this->_touchTimer->currentCount));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(216)
				return (_g3 > 10.0);
			}
			return null();
		}
	};
	HX_STACK_LINE(216)
	if (((  (((this->_pressButton == null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(216)
		return (this->_touchTimer->currentCount < (int)5);
	}
	else{
		HX_STACK_LINE(216)
		return false;
	}
	HX_STACK_LINE(216)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(UIViewFlipper_obj,slideCondition,return )

bool UIViewFlipper_obj::startMovement0( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIViewFlipper","startMovement0",0x4527132a,"com.danielfreeman.madcomponents.UIViewFlipper.startMovement0","com/danielfreeman/madcomponents/UIViewFlipper.hx",220,0x839f3b9e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(221)
	if ((this->slideCondition())){
		HX_STACK_LINE(222)
		Float _g = this->get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(222)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(222)
		if (((_g < this->_startMouse->x))){
			HX_STACK_LINE(222)
			_g1 = this->_width;
		}
		else{
			HX_STACK_LINE(222)
			_g1 = -(this->_width);
		}
		HX_STACK_LINE(222)
		Float _g2 = (-(this->_startSlider->x) + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(222)
		this->_endSlider = _g2;
	}
	else{
		HX_STACK_LINE(225)
		Float _g3 = -(this->_slider->get_x());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(225)
		Float _g4 = (Float(_g3) / Float(this->_width));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(225)
		int _g5 = ::Math_obj::round(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(225)
		Float _g6 = (_g5 * this->_width);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(225)
		this->_endSlider = _g6;
	}
	HX_STACK_LINE(228)
	if (((this->_endSlider < (int)0))){
		HX_STACK_LINE(229)
		this->_endSlider = (int)0;
	}
	else{
		HX_STACK_LINE(231)
		if (((this->_endSlider > this->_maximumSlide))){
			HX_STACK_LINE(232)
			this->_endSlider = this->_maximumSlide;
		}
	}
	HX_STACK_LINE(235)
	return true;
}


::openfl::display::DisplayObject UIViewFlipper_obj::findViewById( ::String id,hx::Null< int >  __o_row,hx::Null< int >  __o_group){
int row = __o_row.Default(-1);
int group = __o_group.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIViewFlipper","findViewById",0x19f202fb,"com.danielfreeman.madcomponents.UIViewFlipper.findViewById","com/danielfreeman/madcomponents/UIViewFlipper.hx",241,0x839f3b9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(group,"group")
{
		HX_STACK_LINE(242)
		{
			HX_STACK_LINE(242)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(242)
			Dynamic _g1 = this->_pages;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(242)
			while((true)){
				HX_STACK_LINE(242)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(242)
					break;
				}
				HX_STACK_LINE(242)
				Dynamic view = _g1->__GetItem(_g);		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(242)
				++(_g);
				HX_STACK_LINE(243)
				if (((view->__Field(HX_CSTRING("name"),true) == id))){
					HX_STACK_LINE(244)
					return view;
				}
				else{
					HX_STACK_LINE(247)
					::openfl::display::DisplayObject result;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(247)
					result = hx::TCast< openfl::display::DisplayObject >::cast(view->__Field(HX_CSTRING("findViewById"),true)(id,row,group));
					HX_STACK_LINE(248)
					if (((result != null()))){
						HX_STACK_LINE(249)
						return result;
					}
				}
			}
		}
		HX_STACK_LINE(252)
		return null();
	}
}


Float UIViewFlipper_obj::set_sliderX( Float value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIViewFlipper","set_sliderX",0x4eabc18f,"com.danielfreeman.madcomponents.UIViewFlipper.set_sliderX","com/danielfreeman/madcomponents/UIViewFlipper.hx",258,0x839f3b9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(259)
	Float _g = this->_slider->get_x();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(259)
	Float _g1 = (value - _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(259)
	Float _g2 = ::Math_obj::abs(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(259)
	if (((_g2 < 2048.0))){
		HX_STACK_LINE(260)
		this->_slider->set_x(value);
	}
	HX_STACK_LINE(262)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIViewFlipper_obj,set_sliderX,return )

Void UIViewFlipper_obj::movement( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIViewFlipper","movement",0x21cd8aba,"com.danielfreeman.madcomponents.UIViewFlipper.movement","com/danielfreeman/madcomponents/UIViewFlipper.hx",269,0x839f3b9e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(269)
		if (((this->_endSlider < (int)0))){
			HX_STACK_LINE(271)
			Float _g = this->deltaToDecay(this->_delta);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(271)
			hx::MultEq(this->_delta,_g);
			HX_STACK_LINE(272)
			Float _g1 = this->_slider->get_x();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(272)
			Float _g2 = (_g1 + this->_delta);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(272)
			this->set_sliderX(_g2);
			HX_STACK_LINE(273)
			if (((this->_distance > 8.0))){
				HX_STACK_LINE(274)
				this->showScrollBar();
			}
			HX_STACK_LINE(275)
			Float _g3 = ::Math_obj::abs(this->_delta);		HX_STACK_VAR(_g3,"_g3");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIViewFlipper_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIViewFlipper.hx",275,0x839f3b9e)
					{
						HX_STACK_LINE(275)
						Float _g4 = __this->_slider->get_x();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(275)
						return (_g4 > (int)0);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIViewFlipper_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIViewFlipper.hx",275,0x839f3b9e)
					{
						HX_STACK_LINE(275)
						Float _g5 = __this->_slider->get_x();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(275)
						return (_g5 < -(__this->_maximumSlide));
					}
					return null();
				}
			};
			HX_STACK_LINE(275)
			if (((  ((!(((  ((!(((_g3 < 1.0))))) ? bool(_Function_2_1::Block(this)) : bool(true) ))))) ? bool(_Function_2_2::Block(this)) : bool(true) ))){
				HX_STACK_LINE(276)
				if ((!(this->startMovement0()))){
					HX_STACK_LINE(277)
					this->stopMovement();
				}
			}
		}
		else{
			HX_STACK_LINE(281)
			Float _g6 = this->_slider->get_x();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(281)
			Float _g7 = (-(this->_endSlider) - _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(281)
			Float _g8 = (_g7 * ::com::danielfreeman::madcomponents::UIScrollVertical_obj::BOUNCE);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(281)
			this->_delta = _g8;
			HX_STACK_LINE(282)
			Float _g9 = this->_slider->get_x();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(282)
			Float _g10 = (_g9 + this->_delta);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(282)
			this->set_sliderX(_g10);
			HX_STACK_LINE(283)
			this->showScrollBar();
			HX_STACK_LINE(284)
			Float _g11 = ::Math_obj::abs(this->_delta);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(284)
			if (((_g11 < 1.0))){
				HX_STACK_LINE(285)
				this->set_sliderX(-(this->_endSlider));
				HX_STACK_LINE(286)
				this->stopMovement();
			}
		}
	}
return null();
}


int UIViewFlipper_obj::set_pageNumber( int value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIViewFlipper","set_pageNumber",0xdb04ab00,"com.danielfreeman.madcomponents.UIViewFlipper.set_pageNumber","com/danielfreeman/madcomponents/UIViewFlipper.hx",292,0x839f3b9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(293)
	this->_page = value;
	HX_STACK_LINE(294)
	this->_slider->set_x((-(this->_page) * this->_width));
	HX_STACK_LINE(295)
	this->showScrollBar();
	HX_STACK_LINE(296)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIViewFlipper_obj,set_pageNumber,return )

int UIViewFlipper_obj::get_pageNumber( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIViewFlipper","get_pageNumber",0xbae4c28c,"com.danielfreeman.madcomponents.UIViewFlipper.get_pageNumber","com/danielfreeman/madcomponents/UIViewFlipper.hx",301,0x839f3b9e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(301)
	return this->_page;
}


HX_DEFINE_DYNAMIC_FUNC0(UIViewFlipper_obj,get_pageNumber,return )

Void UIViewFlipper_obj::hideScrollBar( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIViewFlipper","hideScrollBar",0x1cdc5d39,"com.danielfreeman.madcomponents.UIViewFlipper.hideScrollBar","com/danielfreeman/madcomponents/UIViewFlipper.hx",305,0x839f3b9e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(306)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("scrollStopped"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(306)
		this->dispatchEvent(_g);
		HX_STACK_LINE(307)
		if ((this->_scrollBarVisible)){
			HX_STACK_LINE(308)
			this->_scrollBarVisible = false;
		}
	}
return null();
}


Float UIViewFlipper_obj::RADIUS;

Float UIViewFlipper_obj::SPACING;

Float UIViewFlipper_obj::SCROLLBAR_GAP;

Float UIViewFlipper_obj::DISTANCE_PER_TICK;

int UIViewFlipper_obj::TICKS_THRESHOLD;

int UIViewFlipper_obj::MAXIMUM_TICKS;

Float UIViewFlipper_obj::PADDING;


UIViewFlipper_obj::UIViewFlipper_obj()
{
}

void UIViewFlipper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIViewFlipper);
	HX_MARK_MEMBER_NAME(_pages,"_pages");
	HX_MARK_MEMBER_NAME(_page,"_page");
	HX_MARK_MEMBER_NAME(_lastPage,"_lastPage");
	::com::danielfreeman::madcomponents::UIScrollVertical_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIViewFlipper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pages,"_pages");
	HX_VISIT_MEMBER_NAME(_page,"_page");
	HX_VISIT_MEMBER_NAME(_lastPage,"_lastPage");
	::com::danielfreeman::madcomponents::UIScrollVertical_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIViewFlipper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_page") ) { return _page; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_pages") ) { return _pages; }
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"movement") ) { return movement_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_lastPage") ) { return _lastPage; }
		if (HX_FIELD_EQ(inName,"mouseMove") ) { return mouseMove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pageNumber") ) { return get_pageNumber(); }
		if (HX_FIELD_EQ(inName,"addPadding") ) { return addPadding_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"attachPages") ) { return attachPages_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sliderX") ) { return set_sliderX_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createSlider") ) { return createSlider_dyn(); }
		if (HX_FIELD_EQ(inName,"findViewById") ) { return findViewById_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawScrollBar") ) { return drawScrollBar_dyn(); }
		if (HX_FIELD_EQ(inName,"hideScrollBar") ) { return hideScrollBar_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"slideCondition") ) { return slideCondition_dyn(); }
		if (HX_FIELD_EQ(inName,"startMovement0") ) { return startMovement0_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pageNumber") ) { return set_pageNumber_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pageNumber") ) { return get_pageNumber_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIViewFlipper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_page") ) { _page=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_pages") ) { _pages=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sliderX") ) { return set_sliderX(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_lastPage") ) { _lastPage=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pageNumber") ) { return set_pageNumber(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIViewFlipper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sliderX"));
	outFields->push(HX_CSTRING("pageNumber"));
	outFields->push(HX_CSTRING("_pages"));
	outFields->push(HX_CSTRING("_page"));
	outFields->push(HX_CSTRING("_lastPage"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("RADIUS"),
	HX_CSTRING("SPACING"),
	HX_CSTRING("SCROLLBAR_GAP"),
	HX_CSTRING("DISTANCE_PER_TICK"),
	HX_CSTRING("TICKS_THRESHOLD"),
	HX_CSTRING("MAXIMUM_TICKS"),
	HX_CSTRING("PADDING"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UIViewFlipper_obj,_pages),HX_CSTRING("_pages")},
	{hx::fsInt,(int)offsetof(UIViewFlipper_obj,_page),HX_CSTRING("_page")},
	{hx::fsInt,(int)offsetof(UIViewFlipper_obj,_lastPage),HX_CSTRING("_lastPage")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_pages"),
	HX_CSTRING("_page"),
	HX_CSTRING("_lastPage"),
	HX_CSTRING("layout"),
	HX_CSTRING("addPadding"),
	HX_CSTRING("createSlider"),
	HX_CSTRING("attachPages"),
	HX_CSTRING("drawScrollBar"),
	HX_CSTRING("mouseMove"),
	HX_CSTRING("slideCondition"),
	HX_CSTRING("startMovement0"),
	HX_CSTRING("findViewById"),
	HX_CSTRING("set_sliderX"),
	HX_CSTRING("movement"),
	HX_CSTRING("set_pageNumber"),
	HX_CSTRING("get_pageNumber"),
	HX_CSTRING("hideScrollBar"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIViewFlipper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIViewFlipper_obj::RADIUS,"RADIUS");
	HX_MARK_MEMBER_NAME(UIViewFlipper_obj::SPACING,"SPACING");
	HX_MARK_MEMBER_NAME(UIViewFlipper_obj::SCROLLBAR_GAP,"SCROLLBAR_GAP");
	HX_MARK_MEMBER_NAME(UIViewFlipper_obj::DISTANCE_PER_TICK,"DISTANCE_PER_TICK");
	HX_MARK_MEMBER_NAME(UIViewFlipper_obj::TICKS_THRESHOLD,"TICKS_THRESHOLD");
	HX_MARK_MEMBER_NAME(UIViewFlipper_obj::MAXIMUM_TICKS,"MAXIMUM_TICKS");
	HX_MARK_MEMBER_NAME(UIViewFlipper_obj::PADDING,"PADDING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIViewFlipper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIViewFlipper_obj::RADIUS,"RADIUS");
	HX_VISIT_MEMBER_NAME(UIViewFlipper_obj::SPACING,"SPACING");
	HX_VISIT_MEMBER_NAME(UIViewFlipper_obj::SCROLLBAR_GAP,"SCROLLBAR_GAP");
	HX_VISIT_MEMBER_NAME(UIViewFlipper_obj::DISTANCE_PER_TICK,"DISTANCE_PER_TICK");
	HX_VISIT_MEMBER_NAME(UIViewFlipper_obj::TICKS_THRESHOLD,"TICKS_THRESHOLD");
	HX_VISIT_MEMBER_NAME(UIViewFlipper_obj::MAXIMUM_TICKS,"MAXIMUM_TICKS");
	HX_VISIT_MEMBER_NAME(UIViewFlipper_obj::PADDING,"PADDING");
};

#endif

Class UIViewFlipper_obj::__mClass;

void UIViewFlipper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIViewFlipper"), hx::TCanCast< UIViewFlipper_obj> ,sStaticFields,sMemberFields,
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

void UIViewFlipper_obj::__boot()
{
	RADIUS= 4.0;
	SPACING= 16.0;
	SCROLLBAR_GAP= 20.0;
	DISTANCE_PER_TICK= 10.0;
	TICKS_THRESHOLD= (int)5;
	MAXIMUM_TICKS= (int)3;
	PADDING= 10.0;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
