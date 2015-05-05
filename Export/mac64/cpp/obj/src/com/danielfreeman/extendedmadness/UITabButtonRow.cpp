#include <hxcpp.h>

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
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UITabButtonRow
#include <com/danielfreeman/extendedmadness/UITabButtonRow.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_Attributes
#include <com/danielfreeman/madcomponents/Attributes.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_Colour
#include <com/danielfreeman/madcomponents/Colour.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIList
#include <com/danielfreeman/madcomponents/UIList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical
#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
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
#ifndef INCLUDED_openfl_display_GradientType
#include <openfl/display/GradientType.h>
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
#ifndef INCLUDED_openfl_display_InterpolationMethod
#include <openfl/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
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
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void UITabButtonRow_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabButtonRow","new",0x20aac5e5,"com.danielfreeman.extendedmadness.UITabButtonRow.new","com/danielfreeman/extendedmadness/UITabButtonRow.hx",35,0x7ed40e08)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(62)
	this->_backgroundColour = (int)0;
	HX_STACK_LINE(61)
	this->_onColour = (int)16382457;
	HX_STACK_LINE(60)
	this->_offColour = (int)10066329;
	HX_STACK_LINE(55)
	this->_height = 64.0;
	HX_STACK_LINE(53)
	this->_pressedIndex = (int)-1;
	HX_STACK_LINE(52)
	this->_index = (int)0;
	HX_STACK_LINE(66)
	::String tabButtonColours;		HX_STACK_VAR(tabButtonColours,"tabButtonColours");
	HX_STACK_LINE(66)
	if ((xml->has->resolve(HX_CSTRING("tabButtonColours")))){
		HX_STACK_LINE(66)
		tabButtonColours = xml->att->resolve(HX_CSTRING("tabButtonColours"));
	}
	else{
		HX_STACK_LINE(66)
		tabButtonColours = HX_CSTRING("");
	}
	HX_STACK_LINE(67)
	if (((tabButtonColours != null()))){
		HX_STACK_LINE(68)
		Array< int > colourVector = ::com::danielfreeman::madcomponents::UI_obj::toColourVector(tabButtonColours);		HX_STACK_VAR(colourVector,"colourVector");
		HX_STACK_LINE(69)
		if (((colourVector->length > (int)0))){
			HX_STACK_LINE(70)
			this->_backgroundColour = colourVector->__get((int)0);
		}
		HX_STACK_LINE(72)
		if (((colourVector->length > (int)1))){
			HX_STACK_LINE(73)
			this->_onColour = colourVector->__get((int)1);
		}
		HX_STACK_LINE(75)
		if (((colourVector->length > (int)2))){
			HX_STACK_LINE(76)
			this->_offColour = colourVector->__get((int)2);
		}
	}
	else{
		HX_STACK_LINE(80)
		Array< int > colours = attributes->get_backgroundColours();		HX_STACK_VAR(colours,"colours");
		HX_STACK_LINE(81)
		if (((colours->length > (int)0))){
			HX_STACK_LINE(82)
			this->_onColour = colours->__get((int)0);
		}
		HX_STACK_LINE(84)
		if (((colours->length > (int)1))){
			HX_STACK_LINE(85)
			this->_offColour = colours->__get((int)1);
		}
	}
	HX_STACK_LINE(89)
	super::__construct(screen,attributes);
	HX_STACK_LINE(90)
	this->_numButtons = (int)0;
	struct _Function_1_1{
		inline static bool Block( ::com::danielfreeman::MadXML &child){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UITabButtonRow.hx",92,0x7ed40e08)
			{
				HX_STACK_LINE(92)
				::String _g = child->get_name();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(92)
				return (_g != HX_CSTRING("data"));
			}
			return null();
		}
	};
	HX_STACK_LINE(91)
	for(::cpp::FastIterator_obj< ::com::danielfreeman::MadXML > *__it = ::cpp::CreateFastIterator< ::com::danielfreeman::MadXML >(xml->children(null())->iterator());  __it->hasNext(); ){
		::com::danielfreeman::MadXML child = __it->next();
		if (((  ((!(child->get_nodeKindIsText()))) ? bool(_Function_1_1::Block(child)) : bool(false) ))){
			HX_STACK_LINE(93)
			(this->_numButtons)++;
		}
;
	}
	HX_STACK_LINE(96)
	::openfl::display::Sprite _g1 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(96)
	::openfl::display::Sprite _g2 = this->_pressed = _g1;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(96)
	this->addChild(_g2);
	HX_STACK_LINE(97)
	::openfl::display::Sprite _g3 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(97)
	::openfl::display::Sprite _g4 = this->_highlight = _g3;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(97)
	this->addChild(_g4);
	HX_STACK_LINE(98)
	bool _g5 = this->useHandCursor = true;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(98)
	this->buttonMode = _g5;
	HX_STACK_LINE(99)
	this->layout(attributes);
}
;
	return null();
}

//UITabButtonRow_obj::~UITabButtonRow_obj() { }

Dynamic UITabButtonRow_obj::__CreateEmpty() { return  new UITabButtonRow_obj; }
hx::ObjectPtr< UITabButtonRow_obj > UITabButtonRow_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UITabButtonRow_obj > result = new UITabButtonRow_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UITabButtonRow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UITabButtonRow_obj > result = new UITabButtonRow_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UITabButtonRow_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

int UITabButtonRow_obj::get_onColour( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabButtonRow","get_onColour",0xaba024af,"com.danielfreeman.extendedmadness.UITabButtonRow.get_onColour","com/danielfreeman/extendedmadness/UITabButtonRow.hx",104,0x7ed40e08)
	HX_STACK_THIS(this)
	HX_STACK_LINE(104)
	return this->_onColour;
}


HX_DEFINE_DYNAMIC_FUNC0(UITabButtonRow_obj,get_onColour,return )

int UITabButtonRow_obj::get_offColour( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabButtonRow","get_offColour",0x86db4eb7,"com.danielfreeman.extendedmadness.UITabButtonRow.get_offColour","com/danielfreeman/extendedmadness/UITabButtonRow.hx",109,0x7ed40e08)
	HX_STACK_THIS(this)
	HX_STACK_LINE(109)
	return this->_offColour;
}


HX_DEFINE_DYNAMIC_FUNC0(UITabButtonRow_obj,get_offColour,return )

int UITabButtonRow_obj::get_backgroundColour( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabButtonRow","get_backgroundColour",0xfff860be,"com.danielfreeman.extendedmadness.UITabButtonRow.get_backgroundColour","com/danielfreeman/extendedmadness/UITabButtonRow.hx",114,0x7ed40e08)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	return this->_backgroundColour;
}


HX_DEFINE_DYNAMIC_FUNC0(UITabButtonRow_obj,get_backgroundColour,return )

int UITabButtonRow_obj::set_onColour( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabButtonRow","set_onColour",0xc0994823,"com.danielfreeman.extendedmadness.UITabButtonRow.set_onColour","com/danielfreeman/extendedmadness/UITabButtonRow.hx",118,0x7ed40e08)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(119)
	this->_onColour = value;
	HX_STACK_LINE(120)
	this->refresh();
	HX_STACK_LINE(121)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UITabButtonRow_obj,set_onColour,return )

int UITabButtonRow_obj::set_offColour( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabButtonRow","set_offColour",0xcbe130c3,"com.danielfreeman.extendedmadness.UITabButtonRow.set_offColour","com/danielfreeman/extendedmadness/UITabButtonRow.hx",125,0x7ed40e08)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(126)
	this->_offColour = value;
	HX_STACK_LINE(127)
	this->refresh();
	HX_STACK_LINE(128)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UITabButtonRow_obj,set_offColour,return )

int UITabButtonRow_obj::set_backgroundColour( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabButtonRow","set_backgroundColour",0xccb01832,"com.danielfreeman.extendedmadness.UITabButtonRow.set_backgroundColour","com/danielfreeman/extendedmadness/UITabButtonRow.hx",132,0x7ed40e08)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(133)
	this->_backgroundColour = value;
	HX_STACK_LINE(134)
	this->refresh();
	HX_STACK_LINE(135)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UITabButtonRow_obj,set_backgroundColour,return )

int UITabButtonRow_obj::get_index( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabButtonRow","get_index",0xabe15eae,"com.danielfreeman.extendedmadness.UITabButtonRow.get_index","com/danielfreeman/extendedmadness/UITabButtonRow.hx",140,0x7ed40e08)
	HX_STACK_THIS(this)
	HX_STACK_LINE(140)
	return this->_index;
}


HX_DEFINE_DYNAMIC_FUNC0(UITabButtonRow_obj,get_index,return )

int UITabButtonRow_obj::set_index( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabButtonRow","set_index",0x8f324aba,"com.danielfreeman.extendedmadness.UITabButtonRow.set_index","com/danielfreeman/extendedmadness/UITabButtonRow.hx",144,0x7ed40e08)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(145)
	this->_index = value;
	HX_STACK_LINE(146)
	this->_highlight->get_graphics()->clear();
	HX_STACK_LINE(147)
	this->drawAButton(this->_highlight,this->_index,this->_onColour);
	HX_STACK_LINE(148)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UITabButtonRow_obj,set_index,return )

Void UITabButtonRow_obj::refresh( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabButtonRow","refresh",0xb0e175e0,"com.danielfreeman.extendedmadness.UITabButtonRow.refresh","com/danielfreeman/extendedmadness/UITabButtonRow.hx",152,0x7ed40e08)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		this->_pressed->get_graphics()->clear();
		HX_STACK_LINE(154)
		this->_highlight->get_graphics()->clear();
		HX_STACK_LINE(155)
		this->drawTabButtons(this->_numButtons);
		HX_STACK_LINE(156)
		this->drawAButton(this->_highlight,this->_index,this->_onColour);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UITabButtonRow_obj,refresh,(void))

Void UITabButtonRow_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabButtonRow","layout",0xdb523a45,"com.danielfreeman.extendedmadness.UITabButtonRow.layout","com/danielfreeman/extendedmadness/UITabButtonRow.hx",160,0x7ed40e08)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(161)
		this->super::layout(attributes);
		HX_STACK_LINE(162)
		this->_width = attributes->width;
		HX_STACK_LINE(163)
		this->_buttonWidth = (Float(this->_width) / Float(this->_numButtons));
		HX_STACK_LINE(164)
		this->refresh();
	}
return null();
}


Void UITabButtonRow_obj::drawTabButtons( int n){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabButtonRow","drawTabButtons",0x7f1e402b,"com.danielfreeman.extendedmadness.UITabButtonRow.drawTabButtons","com/danielfreeman/extendedmadness/UITabButtonRow.hx",168,0x7ed40e08)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(169)
		this->get_graphics()->clear();
		HX_STACK_LINE(170)
		this->get_graphics()->beginFill(this->_backgroundColour,null());
		HX_STACK_LINE(171)
		this->get_graphics()->drawRect((int)0,(int)0,this->_width,this->_height);
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(172)
			while((true)){
				HX_STACK_LINE(172)
				if ((!(((_g < n))))){
					HX_STACK_LINE(172)
					break;
				}
				HX_STACK_LINE(172)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(173)
				this->drawAButton(hx::ObjectPtr<OBJ_>(this),i,this->_offColour);
			}
		}
		HX_STACK_LINE(175)
		int _g = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_onColour,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(175)
		this->get_graphics()->beginFill(_g,null());
		HX_STACK_LINE(176)
		this->get_graphics()->drawRect((int)0,this->_height,this->_width,4.0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UITabButtonRow_obj,drawTabButtons,(void))

Void UITabButtonRow_obj::drawAButton( ::openfl::display::Sprite layer,int i,int colour){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabButtonRow","drawAButton",0x209e9c14,"com.danielfreeman.extendedmadness.UITabButtonRow.drawAButton","com/danielfreeman/extendedmadness/UITabButtonRow.hx",180,0x7ed40e08)
		HX_STACK_THIS(this)
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(i,"i")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(181)
		::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(182)
		matr->createGradientBox(this->_buttonWidth,this->_height,(Float(::Math_obj::PI) / Float((int)2)),(int)0,(int)0);
		HX_STACK_LINE(183)
		int _g = ::com::danielfreeman::madcomponents::Colour_obj::darken(colour,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(183)
		Dynamic _g1 = Dynamic( Array_obj<Dynamic>::__new().Add(colour).Add(colour).Add(_g));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(183)
		layer->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,_g1,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)170).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(184)
		layer->get_graphics()->moveTo(((i * this->_buttonWidth) + 2.0),9.);
		HX_STACK_LINE(185)
		layer->get_graphics()->curveTo(((i * this->_buttonWidth) + 2.0),(int)1,(((i * this->_buttonWidth) + 2.0) + 8.0),(int)1);
		HX_STACK_LINE(186)
		layer->get_graphics()->lineTo((((((i + (int)1)) * this->_buttonWidth) - 2.0) - 8.0),(int)1);
		HX_STACK_LINE(187)
		layer->get_graphics()->curveTo(((((i + (int)1)) * this->_buttonWidth) - 2.0),(int)1,((((i + (int)1)) * this->_buttonWidth) - 2.0),9.);
		HX_STACK_LINE(188)
		layer->get_graphics()->lineTo(((((i + (int)1)) * this->_buttonWidth) - 2.0),(this->_height - 14.0));
		HX_STACK_LINE(189)
		layer->get_graphics()->curveTo(((((i + (int)1)) * this->_buttonWidth) - 2.0),this->_height,(((((i + (int)1)) * this->_buttonWidth) - 2.0) + 14.0),this->_height);
		HX_STACK_LINE(190)
		layer->get_graphics()->lineTo(((i * this->_buttonWidth) - 14.0),this->_height);
		HX_STACK_LINE(191)
		layer->get_graphics()->curveTo(((i * this->_buttonWidth) + 2.0),this->_height,((i * this->_buttonWidth) + 2.0),(this->_height - 14.0));
		HX_STACK_LINE(192)
		layer->get_graphics()->lineTo(((i * this->_buttonWidth) + 2.0),9.);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(UITabButtonRow_obj,drawAButton,(void))

Void UITabButtonRow_obj::mouseDown( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabButtonRow","mouseDown",0x98e6186c,"com.danielfreeman.extendedmadness.UITabButtonRow.mouseDown","com/danielfreeman/extendedmadness/UITabButtonRow.hx",196,0x7ed40e08)
		HX_STACK_THIS(this)
		HX_STACK_LINE(197)
		Float _g = this->get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(197)
		Float _g1 = (Float(_g) / Float(this->_buttonWidth));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(197)
		int _g2 = ::Math_obj::floor(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(197)
		this->_pressedIndex = _g2;
		HX_STACK_LINE(198)
		this->drawAButton(this->_pressed,this->_pressedIndex,::com::danielfreeman::madcomponents::UIList_obj::HIGHLIGHT);
		HX_STACK_LINE(199)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->clearPressed_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UITabButtonRow_obj,mouseDown,(void))

Void UITabButtonRow_obj::clearPressed( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabButtonRow","clearPressed",0x65b83670,"com.danielfreeman.extendedmadness.UITabButtonRow.clearPressed","com/danielfreeman/extendedmadness/UITabButtonRow.hx",203,0x7ed40e08)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(204)
		this->_pressed->get_graphics()->clear();
		HX_STACK_LINE(205)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->clearPressed_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UITabButtonRow_obj,clearPressed,(void))

int UITabButtonRow_obj::mouseUp( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabButtonRow","mouseUp",0x84338fe5,"com.danielfreeman.extendedmadness.UITabButtonRow.mouseUp","com/danielfreeman/extendedmadness/UITabButtonRow.hx",209,0x7ed40e08)
	HX_STACK_THIS(this)
	HX_STACK_LINE(210)
	Float _g = this->get_mouseX();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(210)
	Float _g1 = (Float(_g) / Float(this->_buttonWidth));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(210)
	int index = ::Math_obj::floor(_g1);		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(211)
	if (((index == this->_pressedIndex))){
		HX_STACK_LINE(212)
		this->_index = index;
	}
	HX_STACK_LINE(213)
	this->_highlight->get_graphics()->clear();
	HX_STACK_LINE(214)
	this->drawAButton(this->_highlight,this->_index,this->_onColour);
	HX_STACK_LINE(215)
	return this->_index;
}


HX_DEFINE_DYNAMIC_FUNC0(UITabButtonRow_obj,mouseUp,return )

int UITabButtonRow_obj::OFF_COLOUR;

int UITabButtonRow_obj::ON_COLOUR;

int UITabButtonRow_obj::BACKGROUND_COLOUR;

Float UITabButtonRow_obj::HEIGHT;

Float UITabButtonRow_obj::GAP;

Float UITabButtonRow_obj::CURVE;

Float UITabButtonRow_obj::CURVE2;

Float UITabButtonRow_obj::BAR_HEIGHT;


UITabButtonRow_obj::UITabButtonRow_obj()
{
}

void UITabButtonRow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UITabButtonRow);
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_pressedIndex,"_pressedIndex");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_numButtons,"_numButtons");
	HX_MARK_MEMBER_NAME(_buttonWidth,"_buttonWidth");
	HX_MARK_MEMBER_NAME(_pressed,"_pressed");
	HX_MARK_MEMBER_NAME(_highlight,"_highlight");
	HX_MARK_MEMBER_NAME(_offColour,"_offColour");
	HX_MARK_MEMBER_NAME(_onColour,"_onColour");
	HX_MARK_MEMBER_NAME(_backgroundColour,"_backgroundColour");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UITabButtonRow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_pressedIndex,"_pressedIndex");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_numButtons,"_numButtons");
	HX_VISIT_MEMBER_NAME(_buttonWidth,"_buttonWidth");
	HX_VISIT_MEMBER_NAME(_pressed,"_pressed");
	HX_VISIT_MEMBER_NAME(_highlight,"_highlight");
	HX_VISIT_MEMBER_NAME(_offColour,"_offColour");
	HX_VISIT_MEMBER_NAME(_onColour,"_onColour");
	HX_VISIT_MEMBER_NAME(_backgroundColour,"_backgroundColour");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UITabButtonRow_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return get_index(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_index") ) { return _index; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onColour") ) { return get_onColour(); }
		if (HX_FIELD_EQ(inName,"_pressed") ) { return _pressed; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"offColour") ) { return get_offColour(); }
		if (HX_FIELD_EQ(inName,"_onColour") ) { return _onColour; }
		if (HX_FIELD_EQ(inName,"get_index") ) { return get_index_dyn(); }
		if (HX_FIELD_EQ(inName,"set_index") ) { return set_index_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_highlight") ) { return _highlight; }
		if (HX_FIELD_EQ(inName,"_offColour") ) { return _offColour; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_numButtons") ) { return _numButtons; }
		if (HX_FIELD_EQ(inName,"drawAButton") ) { return drawAButton_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_buttonWidth") ) { return _buttonWidth; }
		if (HX_FIELD_EQ(inName,"get_onColour") ) { return get_onColour_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onColour") ) { return set_onColour_dyn(); }
		if (HX_FIELD_EQ(inName,"clearPressed") ) { return clearPressed_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pressedIndex") ) { return _pressedIndex; }
		if (HX_FIELD_EQ(inName,"get_offColour") ) { return get_offColour_dyn(); }
		if (HX_FIELD_EQ(inName,"set_offColour") ) { return set_offColour_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"drawTabButtons") ) { return drawTabButtons_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"backgroundColour") ) { return get_backgroundColour(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_backgroundColour") ) { return _backgroundColour; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_backgroundColour") ) { return get_backgroundColour_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColour") ) { return set_backgroundColour_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UITabButtonRow_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return set_index(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onColour") ) { return set_onColour(inValue); }
		if (HX_FIELD_EQ(inName,"_pressed") ) { _pressed=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"offColour") ) { return set_offColour(inValue); }
		if (HX_FIELD_EQ(inName,"_onColour") ) { _onColour=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_highlight") ) { _highlight=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_offColour") ) { _offColour=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_numButtons") ) { _numButtons=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_buttonWidth") ) { _buttonWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pressedIndex") ) { _pressedIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"backgroundColour") ) { return set_backgroundColour(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_backgroundColour") ) { _backgroundColour=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UITabButtonRow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("onColour"));
	outFields->push(HX_CSTRING("offColour"));
	outFields->push(HX_CSTRING("backgroundColour"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("_index"));
	outFields->push(HX_CSTRING("_pressedIndex"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_numButtons"));
	outFields->push(HX_CSTRING("_buttonWidth"));
	outFields->push(HX_CSTRING("_pressed"));
	outFields->push(HX_CSTRING("_highlight"));
	outFields->push(HX_CSTRING("_offColour"));
	outFields->push(HX_CSTRING("_onColour"));
	outFields->push(HX_CSTRING("_backgroundColour"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("OFF_COLOUR"),
	HX_CSTRING("ON_COLOUR"),
	HX_CSTRING("BACKGROUND_COLOUR"),
	HX_CSTRING("HEIGHT"),
	HX_CSTRING("GAP"),
	HX_CSTRING("CURVE"),
	HX_CSTRING("CURVE2"),
	HX_CSTRING("BAR_HEIGHT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(UITabButtonRow_obj,_index),HX_CSTRING("_index")},
	{hx::fsInt,(int)offsetof(UITabButtonRow_obj,_pressedIndex),HX_CSTRING("_pressedIndex")},
	{hx::fsFloat,(int)offsetof(UITabButtonRow_obj,_width),HX_CSTRING("_width")},
	{hx::fsFloat,(int)offsetof(UITabButtonRow_obj,_height),HX_CSTRING("_height")},
	{hx::fsInt,(int)offsetof(UITabButtonRow_obj,_numButtons),HX_CSTRING("_numButtons")},
	{hx::fsFloat,(int)offsetof(UITabButtonRow_obj,_buttonWidth),HX_CSTRING("_buttonWidth")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UITabButtonRow_obj,_pressed),HX_CSTRING("_pressed")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UITabButtonRow_obj,_highlight),HX_CSTRING("_highlight")},
	{hx::fsInt,(int)offsetof(UITabButtonRow_obj,_offColour),HX_CSTRING("_offColour")},
	{hx::fsInt,(int)offsetof(UITabButtonRow_obj,_onColour),HX_CSTRING("_onColour")},
	{hx::fsInt,(int)offsetof(UITabButtonRow_obj,_backgroundColour),HX_CSTRING("_backgroundColour")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_index"),
	HX_CSTRING("_pressedIndex"),
	HX_CSTRING("_width"),
	HX_CSTRING("_height"),
	HX_CSTRING("_numButtons"),
	HX_CSTRING("_buttonWidth"),
	HX_CSTRING("_pressed"),
	HX_CSTRING("_highlight"),
	HX_CSTRING("_offColour"),
	HX_CSTRING("_onColour"),
	HX_CSTRING("_backgroundColour"),
	HX_CSTRING("get_onColour"),
	HX_CSTRING("get_offColour"),
	HX_CSTRING("get_backgroundColour"),
	HX_CSTRING("set_onColour"),
	HX_CSTRING("set_offColour"),
	HX_CSTRING("set_backgroundColour"),
	HX_CSTRING("get_index"),
	HX_CSTRING("set_index"),
	HX_CSTRING("refresh"),
	HX_CSTRING("layout"),
	HX_CSTRING("drawTabButtons"),
	HX_CSTRING("drawAButton"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("clearPressed"),
	HX_CSTRING("mouseUp"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UITabButtonRow_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UITabButtonRow_obj::OFF_COLOUR,"OFF_COLOUR");
	HX_MARK_MEMBER_NAME(UITabButtonRow_obj::ON_COLOUR,"ON_COLOUR");
	HX_MARK_MEMBER_NAME(UITabButtonRow_obj::BACKGROUND_COLOUR,"BACKGROUND_COLOUR");
	HX_MARK_MEMBER_NAME(UITabButtonRow_obj::HEIGHT,"HEIGHT");
	HX_MARK_MEMBER_NAME(UITabButtonRow_obj::GAP,"GAP");
	HX_MARK_MEMBER_NAME(UITabButtonRow_obj::CURVE,"CURVE");
	HX_MARK_MEMBER_NAME(UITabButtonRow_obj::CURVE2,"CURVE2");
	HX_MARK_MEMBER_NAME(UITabButtonRow_obj::BAR_HEIGHT,"BAR_HEIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UITabButtonRow_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UITabButtonRow_obj::OFF_COLOUR,"OFF_COLOUR");
	HX_VISIT_MEMBER_NAME(UITabButtonRow_obj::ON_COLOUR,"ON_COLOUR");
	HX_VISIT_MEMBER_NAME(UITabButtonRow_obj::BACKGROUND_COLOUR,"BACKGROUND_COLOUR");
	HX_VISIT_MEMBER_NAME(UITabButtonRow_obj::HEIGHT,"HEIGHT");
	HX_VISIT_MEMBER_NAME(UITabButtonRow_obj::GAP,"GAP");
	HX_VISIT_MEMBER_NAME(UITabButtonRow_obj::CURVE,"CURVE");
	HX_VISIT_MEMBER_NAME(UITabButtonRow_obj::CURVE2,"CURVE2");
	HX_VISIT_MEMBER_NAME(UITabButtonRow_obj::BAR_HEIGHT,"BAR_HEIGHT");
};

#endif

Class UITabButtonRow_obj::__mClass;

void UITabButtonRow_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UITabButtonRow"), hx::TCanCast< UITabButtonRow_obj> ,sStaticFields,sMemberFields,
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

void UITabButtonRow_obj::__boot()
{
	OFF_COLOUR= (int)10066329;
	ON_COLOUR= (int)16382457;
	BACKGROUND_COLOUR= (int)0;
	HEIGHT= 64.0;
	GAP= 2.0;
	CURVE= 8.0;
	CURVE2= 14.0;
	BAR_HEIGHT= 4.0;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
