#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
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
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIRadialSlider
#include <com/danielfreeman/extendedmadness/UIRadialSlider.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UI
#include <com/danielfreeman/madcomponents/UI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void UIRadialSlider_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","new",0x39963c92,"com.danielfreeman.extendedmadness.UIRadialSlider.new","com/danielfreeman/extendedmadness/UIRadialSlider.hx",74,0x914ecbfb)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(110)
	this->_index = (int)-1;
	HX_STACK_LINE(108)
	this->_margin = 0.0;
	HX_STACK_LINE(107)
	this->_spacing = 4.0;
	HX_STACK_LINE(106)
	this->_sliderThickness = 22.0;
	HX_STACK_LINE(105)
	this->_outlineColours = null();
	HX_STACK_LINE(104)
	this->_buttonColours = null();
	HX_STACK_LINE(103)
	this->_colours = null();
	HX_STACK_LINE(102)
	this->_offset = (int)0;
	HX_STACK_LINE(100)
	this->_maximum = 1.0;
	HX_STACK_LINE(99)
	this->_minimum = (int)0;
	HX_STACK_LINE(96)
	this->_numberOfSliders = (int)2;
	HX_STACK_LINE(95)
	this->_maximumRadius = 80.0;
	HX_STACK_LINE(117)
	super::__construct(screen,attributes);
	HX_STACK_LINE(118)
	this->extractParameters(xml);
	HX_STACK_LINE(119)
	this->drawBackground();
	HX_STACK_LINE(120)
	this->makeRadials();
	HX_STACK_LINE(121)
	::com::danielfreeman::madcomponents::UILabel _g = ::com::danielfreeman::madcomponents::UILabel_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)0,(int)0,HX_CSTRING(""),::com::danielfreeman::extendedmadness::UIRadialSlider_obj::FORMAT);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(121)
	this->_label = _g;
	HX_STACK_LINE(122)
	::String _g1 = xml->toString();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(122)
	this->set_text(_g1);
	HX_STACK_LINE(123)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null(),null(),null());
}
;
	return null();
}

//UIRadialSlider_obj::~UIRadialSlider_obj() { }

Dynamic UIRadialSlider_obj::__CreateEmpty() { return  new UIRadialSlider_obj; }
hx::ObjectPtr< UIRadialSlider_obj > UIRadialSlider_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIRadialSlider_obj > result = new UIRadialSlider_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIRadialSlider_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIRadialSlider_obj > result = new UIRadialSlider_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UIRadialSlider_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

int UIRadialSlider_obj::toIndex( Float x,Float y){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","toIndex",0x9d8a54c9,"com.danielfreeman.extendedmadness.UIRadialSlider.toIndex","com/danielfreeman/extendedmadness/UIRadialSlider.hx",127,0x914ecbfb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(128)
	Float thickness = ((((int)2 * this->_margin) + this->_sliderThickness) + this->_spacing);		HX_STACK_VAR(thickness,"thickness");
	HX_STACK_LINE(129)
	Float distance = ::Math_obj::sqrt(((((x - this->_maximumRadius)) * ((x - this->_maximumRadius))) + (((y - this->_maximumRadius)) * ((y - this->_maximumRadius)))));		HX_STACK_VAR(distance,"distance");
	HX_STACK_LINE(130)
	int _g = ::Math_obj::ceil((this->_maximumRadius - distance));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(130)
	Float _g1 = (Float(_g) / Float(thickness));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(130)
	int result = ::Math_obj::round(_g1);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(131)
	if (((bool((result >= (int)0)) && bool((result < this->_numberOfSliders))))){
		HX_STACK_LINE(132)
		Float angle = (((int)2 * ::Math_obj::PI) * this->_values->__GetItem(result));		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(133)
		Float _g2 = ::Math_obj::sin((this->_offset + angle));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(133)
		Float _g3 = (((this->_maximumRadius - (((result + 0.5)) * thickness))) * _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(133)
		Float xx = (this->_maximumRadius + _g3);		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(134)
		Float _g4 = ::Math_obj::cos((this->_offset + angle));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(134)
		Float _g5 = (((this->_maximumRadius - (((result + 0.5)) * thickness))) * _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(134)
		Float yy = (this->_maximumRadius - _g5);		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(135)
		Float closeness = ((((xx - x)) * ((xx - x))) + (((yy - y)) * ((yy - y))));		HX_STACK_VAR(closeness,"closeness");
		HX_STACK_LINE(136)
		if (((closeness < 2048.0))){
			HX_STACK_LINE(137)
			return result;
		}
		else{
			HX_STACK_LINE(140)
			return (int)-1;
		}
	}
	HX_STACK_LINE(143)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(UIRadialSlider_obj,toIndex,return )

Void UIRadialSlider_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","mouseDown",0xb2cf4ed9,"com.danielfreeman.extendedmadness.UIRadialSlider.mouseDown","com/danielfreeman/extendedmadness/UIRadialSlider.hx",147,0x914ecbfb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(148)
		Float _g = this->get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(148)
		Float _g1 = this->get_mouseY();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(148)
		int _g2 = this->toIndex(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(148)
		this->_index = _g2;
		HX_STACK_LINE(149)
		if (((this->_index >= (int)0))){
			HX_STACK_LINE(150)
			this->_saveValue = this->_values->__GetItem(hx::Mod(this->_index,this->_numberOfSliders));
			HX_STACK_LINE(151)
			this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null(),null(),null());
			HX_STACK_LINE(152)
			this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIRadialSlider_obj,mouseDown,(void))

Void UIRadialSlider_obj::mouseMove( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","mouseMove",0xb8c23988,"com.danielfreeman.extendedmadness.UIRadialSlider.mouseMove","com/danielfreeman/extendedmadness/UIRadialSlider.hx",157,0x914ecbfb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(158)
		Float _g = this->get_mouseY();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(158)
		Float _g1 = (_g - this->_maximumRadius);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(158)
		Float _g2 = this->get_mouseX();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(158)
		Float _g3 = (_g2 - this->_maximumRadius);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(158)
		Float _g4 = ::Math_obj::atan2(_g1,_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(158)
		Float _g5 = (_g4 - this->_offset);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(158)
		Float angle = (_g5 + (Float(::Math_obj::PI) / Float((int)2)));		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(159)
		while((true)){
			HX_STACK_LINE(159)
			if ((!(((angle < (int)0))))){
				HX_STACK_LINE(159)
				break;
			}
			HX_STACK_LINE(160)
			hx::AddEq(angle,((int)2 * ::Math_obj::PI));
		}
		HX_STACK_LINE(162)
		while((true)){
			HX_STACK_LINE(162)
			if ((!(((angle > ((int)2 * ::Math_obj::PI)))))){
				HX_STACK_LINE(162)
				break;
			}
			HX_STACK_LINE(163)
			hx::SubEq(angle,((int)2 * ::Math_obj::PI));
		}
		HX_STACK_LINE(165)
		Float oldValue = this->_values->__GetItem(this->_index);		HX_STACK_VAR(oldValue,"oldValue");
		HX_STACK_LINE(166)
		Float value = (Float(angle) / Float((((int)2 * ::Math_obj::PI))));		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(168)
		Float _g6 = ::Math_obj::abs((oldValue - ((value - (int)1))));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(168)
		if (((_g6 < 0.5))){
			HX_STACK_LINE(169)
			value = (value - (int)1);
		}
		else{
			HX_STACK_LINE(171)
			if (((bool((this->_minimum >= (int)0)) && bool(((oldValue - value) > 0.5))))){
				HX_STACK_LINE(172)
				value = 1.0;
			}
		}
		HX_STACK_LINE(175)
		if (((value > this->_maximum))){
			HX_STACK_LINE(176)
			value = this->_maximum;
		}
		else{
			HX_STACK_LINE(178)
			if (((value < this->_minimum))){
				HX_STACK_LINE(179)
				value = this->_minimum;
			}
		}
		HX_STACK_LINE(182)
		hx::IndexRef((this->_values).mPtr,this->_index) = value;
		HX_STACK_LINE(183)
		this->drawRadial(this->_index);
		HX_STACK_LINE(184)
		::openfl::events::Event _g7 = ::openfl::events::Event_obj::__new(HX_CSTRING("sliderChange"),null(),null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(184)
		this->dispatchEvent(_g7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIRadialSlider_obj,mouseMove,(void))

Void UIRadialSlider_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","mouseUp",0xd3646112,"com.danielfreeman.extendedmadness.UIRadialSlider.mouseUp","com/danielfreeman/extendedmadness/UIRadialSlider.hx",188,0x914ecbfb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(189)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null());
		HX_STACK_LINE(190)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(191)
		this->mouseMove(event);
		HX_STACK_LINE(192)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("sliderSelect"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(192)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIRadialSlider_obj,mouseUp,(void))

Void UIRadialSlider_obj::extractParameters( ::MadXML xml){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","extractParameters",0x2d3492fd,"com.danielfreeman.extendedmadness.UIRadialSlider.extractParameters","com/danielfreeman/extendedmadness/UIRadialSlider.hx",196,0x914ecbfb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_LINE(197)
		if ((xml->has->resolve(HX_CSTRING("width")))){
			HX_STACK_LINE(198)
			::String _g = xml->att->resolve(HX_CSTRING("width"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			Float _g1 = ::Std_obj::parseFloat(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(198)
			Float _g2 = (Float(_g1) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(198)
			this->_maximumRadius = _g2;
		}
		HX_STACK_LINE(200)
		if ((xml->has->resolve(HX_CSTRING("numberOfSliders")))){
			HX_STACK_LINE(201)
			::String _g3 = xml->att->resolve(HX_CSTRING("numberOfSliders"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(201)
			Dynamic _g4 = ::Std_obj::parseInt(_g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(201)
			this->_numberOfSliders = _g4;
		}
		HX_STACK_LINE(203)
		bool _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(203)
		if ((xml->has->resolve(HX_CSTRING("alt")))){
			HX_STACK_LINE(203)
			::String _g5 = xml->att->resolve(HX_CSTRING("alt"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(203)
			_g6 = (_g5 == HX_CSTRING("true"));
		}
		else{
			HX_STACK_LINE(203)
			_g6 = false;
		}
		HX_STACK_LINE(203)
		this->_alt = _g6;
		HX_STACK_LINE(204)
		if ((xml->has->resolve(HX_CSTRING("values")))){
			HX_STACK_LINE(205)
			::String _g7 = xml->att->resolve(HX_CSTRING("values"));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(205)
			Array< ::String > _g8 = ::Std_obj::string(_g7).split(HX_CSTRING(","));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(205)
			this->_values = _g8;
			HX_STACK_LINE(206)
			Float _g9 = ::Math_obj::max(this->_numberOfSliders,this->_values->__Field(HX_CSTRING("length"),true));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(206)
			int _g10 = ::Math_obj::round(_g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(206)
			this->_numberOfSliders = _g10;
		}
		else{
			HX_STACK_LINE(209)
			this->_values = Dynamic( Array_obj<Dynamic>::__new().Add(0.3));
		}
		HX_STACK_LINE(211)
		if ((xml->has->resolve(HX_CSTRING("minimum")))){
			HX_STACK_LINE(212)
			::String _g11 = xml->att->resolve(HX_CSTRING("minimum"));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(212)
			Float _g12 = ::Std_obj::parseFloat(_g11);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(212)
			this->_minimum = _g12;
		}
		HX_STACK_LINE(214)
		if ((xml->has->resolve(HX_CSTRING("maximum")))){
			HX_STACK_LINE(215)
			::String _g13 = xml->att->resolve(HX_CSTRING("maximum"));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(215)
			Float _g14 = ::Std_obj::parseFloat(_g13);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(215)
			this->_maximum = _g14;
		}
		HX_STACK_LINE(217)
		bool _g16;		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(217)
		if ((!((!(xml->has->resolve(HX_CSTRING("rounded"))))))){
			HX_STACK_LINE(217)
			::String _g15 = xml->att->resolve(HX_CSTRING("rounded"));		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(217)
			_g16 = (_g15 != HX_CSTRING("false"));
		}
		else{
			HX_STACK_LINE(217)
			_g16 = true;
		}
		HX_STACK_LINE(217)
		this->_rounded = _g16;
		HX_STACK_LINE(218)
		if ((xml->has->resolve(HX_CSTRING("offsetAngle")))){
			HX_STACK_LINE(219)
			::String _g17 = xml->att->resolve(HX_CSTRING("offsetAngle"));		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(219)
			Float _g18 = ::Std_obj::parseFloat(_g17);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(219)
			Float _g19 = (::Math_obj::PI * _g18);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(219)
			Float _g20 = (Float(_g19) / Float((int)180));		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(219)
			this->_offset = _g20;
		}
		HX_STACK_LINE(221)
		if ((xml->has->resolve(HX_CSTRING("colours")))){
			HX_STACK_LINE(222)
			::String _g21 = xml->att->resolve(HX_CSTRING("colours"));		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(222)
			Array< int > _g22 = ::com::danielfreeman::madcomponents::UI_obj::toColourVector(_g21);		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(222)
			this->_colours = _g22;
		}
		HX_STACK_LINE(224)
		if ((xml->has->resolve(HX_CSTRING("buttonColours")))){
			HX_STACK_LINE(225)
			::String _g23 = xml->att->resolve(HX_CSTRING("buttonColours"));		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(225)
			Array< int > _g24 = ::com::danielfreeman::madcomponents::UI_obj::toColourVector(_g23);		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(225)
			this->_buttonColours = _g24;
		}
		HX_STACK_LINE(227)
		if ((xml->has->resolve(HX_CSTRING("outlineColours")))){
			HX_STACK_LINE(228)
			::String _g25 = xml->att->resolve(HX_CSTRING("outlineColours"));		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(228)
			Array< int > _g26 = ::com::danielfreeman::madcomponents::UI_obj::toColourVector(_g25);		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(228)
			this->_outlineColours = _g26;
		}
		HX_STACK_LINE(230)
		if ((xml->has->resolve(HX_CSTRING("sliderThickness")))){
			HX_STACK_LINE(231)
			::String _g27 = xml->att->resolve(HX_CSTRING("sliderThickness"));		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(231)
			Float _g28 = ::Std_obj::parseFloat(_g27);		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(231)
			this->_sliderThickness = _g28;
		}
		HX_STACK_LINE(233)
		if ((xml->has->resolve(HX_CSTRING("spacing")))){
			HX_STACK_LINE(234)
			::String _g29 = xml->att->resolve(HX_CSTRING("spacing"));		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(234)
			Float _g30 = ::Std_obj::parseFloat(_g29);		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(234)
			this->_spacing = _g30;
		}
		HX_STACK_LINE(236)
		if ((xml->has->resolve(HX_CSTRING("margin")))){
			HX_STACK_LINE(237)
			::String _g31 = xml->att->resolve(HX_CSTRING("margin"));		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(237)
			Float _g32 = ::Std_obj::parseFloat(_g31);		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(237)
			this->_margin = _g32;
			HX_STACK_LINE(238)
			if (((this->_margin < (int)0))){
				HX_STACK_LINE(239)
				hx::SubEq(this->_spacing,((int)2 * this->_margin));
			}
		}
		HX_STACK_LINE(242)
		Float _g33 = ::Math_obj::max(this->_maximumRadius,(32.0 + (this->_numberOfSliders * (((((int)2 * this->_margin) + this->_spacing) + this->_sliderThickness)))));		HX_STACK_VAR(_g33,"_g33");
		HX_STACK_LINE(242)
		this->_maximumRadius = _g33;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIRadialSlider_obj,extractParameters,(void))

Void UIRadialSlider_obj::drawBackground( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","drawBackground",0x4cc7ee20,"com.danielfreeman.extendedmadness.UIRadialSlider.drawBackground","com/danielfreeman/extendedmadness/UIRadialSlider.hx",246,0x914ecbfb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(247)
		this->get_graphics()->beginFill((int)0,(int)0);
		HX_STACK_LINE(248)
		this->get_graphics()->drawCircle(this->_maximumRadius,this->_maximumRadius,this->_maximumRadius);
		HX_STACK_LINE(249)
		Float barWidth = (this->_sliderThickness + ((int)2 * this->_margin));		HX_STACK_VAR(barWidth,"barWidth");
		HX_STACK_LINE(250)
		Float saveOffset = this->_offset;		HX_STACK_VAR(saveOffset,"saveOffset");
		HX_STACK_LINE(252)
		if (((this->_minimum < (int)0))){
			HX_STACK_LINE(253)
			hx::AddEq(this->_offset,((this->_minimum * (int)2) * ::Math_obj::PI));
		}
		HX_STACK_LINE(256)
		{
			HX_STACK_LINE(256)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(256)
			int _g = this->_numberOfSliders;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(256)
			while((true)){
				HX_STACK_LINE(256)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(256)
					break;
				}
				HX_STACK_LINE(256)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(257)
				int colour;		HX_STACK_VAR(colour,"colour");
				HX_STACK_LINE(258)
				Array< int > _g2 = this->_attributes->get_backgroundColours();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(258)
				if (((  (((_g2 != null()))) ? bool((this->_attributes->get_backgroundColours()->length > (int)0)) : bool(false) ))){
					HX_STACK_LINE(259)
					Array< int > _g11 = this->_attributes->get_backgroundColours();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(259)
					int _g21 = _g11->__get(hx::Mod(i,this->_attributes->get_backgroundColours()->length));		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(259)
					colour = _g21;
				}
				else{
					HX_STACK_LINE(262)
					int _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(262)
					if (((bool((this->_colours != null())) && bool((this->_colours->length > (int)0))))){
						HX_STACK_LINE(262)
						_g3 = this->_colours->__get(hx::Mod(i,this->_colours->length));
					}
					else{
						HX_STACK_LINE(262)
						_g3 = this->_attributes->get_colour();
					}
					HX_STACK_LINE(262)
					int _g4 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(_g3,(int)80);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(262)
					colour = _g4;
				}
				HX_STACK_LINE(264)
				if (((bool(((this->_maximum - this->_minimum) < 1.0)) && bool(this->_rounded)))){
					HX_STACK_LINE(265)
					this->drawRoundedArc(hx::ObjectPtr<OBJ_>(this),((((this->_maximum - this->_minimum)) * (int)2) * ::Math_obj::PI),(this->_maximumRadius - (((i + 0.5)) * ((barWidth + this->_spacing)))),barWidth,colour);
				}
				else{
					HX_STACK_LINE(268)
					this->drawArc(hx::ObjectPtr<OBJ_>(this),((((this->_maximum - this->_minimum)) * (int)2) * ::Math_obj::PI),(this->_maximumRadius - (((i + 0.5)) * ((barWidth + this->_spacing)))),barWidth,colour);
				}
			}
		}
		HX_STACK_LINE(271)
		this->_offset = saveOffset;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIRadialSlider_obj,drawBackground,(void))

Void UIRadialSlider_obj::drawRadial( int index){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","drawRadial",0xb9b79811,"com.danielfreeman.extendedmadness.UIRadialSlider.drawRadial","com/danielfreeman/extendedmadness/UIRadialSlider.hx",275,0x914ecbfb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(276)
		::openfl::display::Sprite sprite;		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(276)
		sprite = hx::TCast< openfl::display::Sprite >::cast(this->getChildAt(index));
		HX_STACK_LINE(277)
		Float angle = (((int)2 * ::Math_obj::PI) * this->_values->__GetItem(hx::Mod(index,this->_values->__Field(HX_CSTRING("length"),true))));		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(278)
		Float buttonAngle = angle;		HX_STACK_VAR(buttonAngle,"buttonAngle");
		HX_STACK_LINE(279)
		Float radius = (this->_maximumRadius - (((index + 0.5)) * (((this->_sliderThickness + this->_spacing) + ((int)2 * this->_margin)))));		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(280)
		int colour;		HX_STACK_VAR(colour,"colour");
		HX_STACK_LINE(280)
		if (((bool((this->_colours != null())) && bool((this->_colours->length > (int)0))))){
			HX_STACK_LINE(280)
			colour = this->_colours->__get(hx::Mod(index,this->_colours->length));
		}
		else{
			HX_STACK_LINE(280)
			colour = this->_attributes->get_colour();
		}
		HX_STACK_LINE(281)
		Float saveOffset = this->_offset;		HX_STACK_VAR(saveOffset,"saveOffset");
		HX_STACK_LINE(282)
		sprite->get_graphics()->clear();
		HX_STACK_LINE(284)
		if (((angle < (int)0))){
			HX_STACK_LINE(285)
			hx::AddEq(this->_offset,angle);
			HX_STACK_LINE(286)
			angle = -(angle);
		}
		HX_STACK_LINE(289)
		if (((bool((this->_outlineColours != null())) && bool((this->_outlineColours->length > (int)0))))){
			HX_STACK_LINE(290)
			sprite->get_graphics()->lineStyle((int)0,this->_outlineColours->__get(hx::Mod(index,this->_outlineColours->length)),null(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(292)
		if ((this->_rounded)){
			HX_STACK_LINE(293)
			this->drawRoundedArc(sprite,angle,radius,this->_sliderThickness,colour);
		}
		else{
			HX_STACK_LINE(296)
			this->drawArc(sprite,angle,radius,this->_sliderThickness,colour);
		}
		HX_STACK_LINE(298)
		this->_offset = saveOffset;
		HX_STACK_LINE(299)
		if ((!(this->_alt))){
			HX_STACK_LINE(300)
			sprite->get_graphics()->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(301)
			int buttonColour;		HX_STACK_VAR(buttonColour,"buttonColour");
			HX_STACK_LINE(301)
			if (((bool((this->_buttonColours != null())) && bool((this->_buttonColours->length > (int)0))))){
				HX_STACK_LINE(301)
				buttonColour = this->_buttonColours->__get(hx::Mod(index,this->_buttonColours->length));
			}
			else{
				HX_STACK_LINE(301)
				buttonColour = ::com::danielfreeman::madcomponents::Colour_obj::lighten(colour,(int)64);
			}
			HX_STACK_LINE(302)
			if ((this->_rounded)){
				HX_STACK_LINE(303)
				this->drawButton(sprite,buttonAngle,radius,(this->_sliderThickness - (int)2),buttonColour);
			}
			else{
				HX_STACK_LINE(306)
				this->drawSquareButton(sprite,buttonAngle,radius,this->_sliderThickness,buttonColour);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIRadialSlider_obj,drawRadial,(void))

Void UIRadialSlider_obj::makeRadials( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","makeRadials",0xc1af5a98,"com.danielfreeman.extendedmadness.UIRadialSlider.makeRadials","com/danielfreeman/extendedmadness/UIRadialSlider.hx",313,0x914ecbfb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(313)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(313)
		int _g = this->_numberOfSliders;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(313)
		while((true)){
			HX_STACK_LINE(313)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(313)
				break;
			}
			HX_STACK_LINE(313)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(314)
			::openfl::display::Sprite _g2 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(314)
			this->addChild(_g2);
			HX_STACK_LINE(315)
			if (((this->_values->__Field(HX_CSTRING("length"),true) <= i))){
				HX_STACK_LINE(316)
				this->_values->__Field(HX_CSTRING("push"),true)(0.3);
			}
			HX_STACK_LINE(318)
			this->drawRadial(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIRadialSlider_obj,makeRadials,(void))

Void UIRadialSlider_obj::touchCancel( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","touchCancel",0x741f40cb,"com.danielfreeman.extendedmadness.UIRadialSlider.touchCancel","com/danielfreeman/extendedmadness/UIRadialSlider.hx",323,0x914ecbfb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(324)
		hx::IndexRef((this->_values).mPtr,hx::Mod(this->_index,this->_numberOfSliders)) = this->_saveValue;
		HX_STACK_LINE(325)
		this->drawRadial(this->_index);
		HX_STACK_LINE(326)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("sliderChange"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(326)
		this->dispatchEvent(_g);
		HX_STACK_LINE(327)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null());
		HX_STACK_LINE(328)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
	}
return null();
}


::String UIRadialSlider_obj::set_text( ::String value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","set_text",0xfb600038,"com.danielfreeman.extendedmadness.UIRadialSlider.set_text","com/danielfreeman/extendedmadness/UIRadialSlider.hx",334,0x914ecbfb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(335)
	this->_label->set_xmlText(value);
	HX_STACK_LINE(336)
	Float _g = this->_label->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(336)
	Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(336)
	Float _g2 = (this->_maximumRadius - _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(336)
	this->_label->set_x(_g2);
	HX_STACK_LINE(337)
	Float _g3 = this->_label->get_height();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(337)
	Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(337)
	Float _g5 = (this->_maximumRadius - _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(337)
	Float _g6 = (_g5 - (int)2);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(337)
	this->_label->set_y(_g6);
	HX_STACK_LINE(338)
	return value;
}


int UIRadialSlider_obj::set_index( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","set_index",0xa91b8127,"com.danielfreeman.extendedmadness.UIRadialSlider.set_index","com/danielfreeman/extendedmadness/UIRadialSlider.hx",342,0x914ecbfb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(343)
	this->_index = value;
	HX_STACK_LINE(344)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIRadialSlider_obj,set_index,return )

int UIRadialSlider_obj::get_index( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","get_index",0xc5ca951b,"com.danielfreeman.extendedmadness.UIRadialSlider.get_index","com/danielfreeman/extendedmadness/UIRadialSlider.hx",351,0x914ecbfb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(351)
	return this->_index;
}


HX_DEFINE_DYNAMIC_FUNC0(UIRadialSlider_obj,get_index,return )

Float UIRadialSlider_obj::set_value( Float valuu){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","set_value",0x1cbf6586,"com.danielfreeman.extendedmadness.UIRadialSlider.set_value","com/danielfreeman/extendedmadness/UIRadialSlider.hx",357,0x914ecbfb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(valuu,"valuu")
	HX_STACK_LINE(358)
	hx::IndexRef((this->_values).mPtr,this->_index) = valuu;
	HX_STACK_LINE(359)
	this->drawRadial(this->_index);
	HX_STACK_LINE(360)
	return valuu;
}


HX_DEFINE_DYNAMIC_FUNC1(UIRadialSlider_obj,set_value,return )

Float UIRadialSlider_obj::get_value( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","get_value",0x396e797a,"com.danielfreeman.extendedmadness.UIRadialSlider.get_value","com/danielfreeman/extendedmadness/UIRadialSlider.hx",367,0x914ecbfb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(367)
	if (((this->_index < (int)0))){
		HX_STACK_LINE(367)
		return (int)0;
	}
	else{
		HX_STACK_LINE(367)
		return this->_values->__GetItem(this->_index);
	}
	HX_STACK_LINE(367)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(UIRadialSlider_obj,get_value,return )

Dynamic UIRadialSlider_obj::set_values( Dynamic valuu){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","set_values",0x0ab9702d,"com.danielfreeman.extendedmadness.UIRadialSlider.set_values","com/danielfreeman/extendedmadness/UIRadialSlider.hx",374,0x914ecbfb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(valuu,"valuu")
	HX_STACK_LINE(375)
	this->_values = valuu;
	HX_STACK_LINE(376)
	{
		HX_STACK_LINE(376)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(376)
		int _g = this->_numberOfSliders;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(376)
		while((true)){
			HX_STACK_LINE(376)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(376)
				break;
			}
			HX_STACK_LINE(376)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(377)
			this->drawRadial(i);
		}
	}
	HX_STACK_LINE(379)
	return valuu;
}


HX_DEFINE_DYNAMIC_FUNC1(UIRadialSlider_obj,set_values,return )

Dynamic UIRadialSlider_obj::get_values( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","get_values",0x073bd1b9,"com.danielfreeman.extendedmadness.UIRadialSlider.get_values","com/danielfreeman/extendedmadness/UIRadialSlider.hx",386,0x914ecbfb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(386)
	return this->_values;
}


HX_DEFINE_DYNAMIC_FUNC0(UIRadialSlider_obj,get_values,return )

Float UIRadialSlider_obj::get_theWidth( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","get_theWidth",0xcbe4bd6c,"com.danielfreeman.extendedmadness.UIRadialSlider.get_theWidth","com/danielfreeman/extendedmadness/UIRadialSlider.hx",391,0x914ecbfb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(391)
	return ((int)2 * this->_maximumRadius);
}


Float UIRadialSlider_obj::get_theHeight( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","get_theHeight",0x529079c1,"com.danielfreeman.extendedmadness.UIRadialSlider.get_theHeight","com/danielfreeman/extendedmadness/UIRadialSlider.hx",396,0x914ecbfb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(396)
	return ((int)2 * this->_maximumRadius);
}


Void UIRadialSlider_obj::drawRoundedArc( ::openfl::display::Sprite sprite,Float angle,Float radius,Float width,int colour){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","drawRoundedArc",0xa63b2a57,"com.danielfreeman.extendedmadness.UIRadialSlider.drawRoundedArc","com/danielfreeman/extendedmadness/UIRadialSlider.hx",400,0x914ecbfb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(401)
		sprite->get_graphics()->beginFill(colour,null());
		HX_STACK_LINE(402)
		this->drawRoundStart(sprite,radius,width);
		HX_STACK_LINE(403)
		this->drawArcOut(sprite,angle,(radius - (Float(width) / Float((int)2))));
		HX_STACK_LINE(404)
		this->drawRoundEnd(sprite,angle,radius,width);
		HX_STACK_LINE(405)
		this->drawArcBack(sprite,angle,(radius + (Float(width) / Float((int)2))));
		HX_STACK_LINE(406)
		sprite->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(UIRadialSlider_obj,drawRoundedArc,(void))

Void UIRadialSlider_obj::drawArc( ::openfl::display::Sprite sprite,Float angle,Float radius,Float width,int colour){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","drawArc",0x0ebb51e0,"com.danielfreeman.extendedmadness.UIRadialSlider.drawArc","com/danielfreeman/extendedmadness/UIRadialSlider.hx",410,0x914ecbfb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(411)
		sprite->get_graphics()->beginFill(colour,null());
		HX_STACK_LINE(412)
		this->drawStart(sprite,radius,width);
		HX_STACK_LINE(413)
		this->drawArcOut(sprite,angle,(radius - (Float(width) / Float((int)2))));
		HX_STACK_LINE(414)
		this->drawEnd(sprite,angle,radius,width);
		HX_STACK_LINE(415)
		this->drawArcBack(sprite,angle,(radius + (Float(width) / Float((int)2))));
		HX_STACK_LINE(416)
		sprite->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(UIRadialSlider_obj,drawArc,(void))

Void UIRadialSlider_obj::drawButton( ::openfl::display::Sprite sprite,Float angle,Float radius,Float width,int colour){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","drawButton",0xe2a13b24,"com.danielfreeman.extendedmadness.UIRadialSlider.drawButton","com/danielfreeman/extendedmadness/UIRadialSlider.hx",420,0x914ecbfb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(421)
		sprite->get_graphics()->beginFill(colour,null());
		HX_STACK_LINE(422)
		Float _g = ::Math_obj::sin((this->_offset + angle));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(422)
		Float _g1 = (radius * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(422)
		Float _g2 = (this->_maximumRadius + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(422)
		Float _g3 = ::Math_obj::cos((this->_offset + angle));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(422)
		Float _g4 = (radius * _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(422)
		Float _g5 = (this->_maximumRadius - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(422)
		sprite->get_graphics()->drawCircle(_g2,_g5,(Float(width) / Float((int)2)));
		HX_STACK_LINE(423)
		sprite->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(UIRadialSlider_obj,drawButton,(void))

Void UIRadialSlider_obj::drawStart( ::openfl::display::Sprite sprite,Float radius,Float width){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","drawStart",0x10234770,"com.danielfreeman.extendedmadness.UIRadialSlider.drawStart","com/danielfreeman/extendedmadness/UIRadialSlider.hx",427,0x914ecbfb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(width,"width")
		HX_STACK_LINE(428)
		Float _g = ::Math_obj::sin(this->_offset);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(428)
		Float _g1 = (((radius + (Float(width) / Float((int)2)))) * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(428)
		Float _g2 = (this->_maximumRadius + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(429)
		Float _g3 = ::Math_obj::cos(this->_offset);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(429)
		Float _g4 = (((radius + (Float(width) / Float((int)2)))) * _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(429)
		Float _g5 = (this->_maximumRadius - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(428)
		sprite->get_graphics()->moveTo(_g2,_g5);
		HX_STACK_LINE(430)
		Float _g6 = ::Math_obj::sin(this->_offset);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(430)
		Float _g7 = (((radius - (Float(width) / Float((int)2)))) * _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(430)
		Float _g8 = (this->_maximumRadius + _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(431)
		Float _g9 = ::Math_obj::cos(this->_offset);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(431)
		Float _g10 = (((radius - (Float(width) / Float((int)2)))) * _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(431)
		Float _g11 = (this->_maximumRadius - _g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(430)
		sprite->get_graphics()->lineTo(_g8,_g11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(UIRadialSlider_obj,drawStart,(void))

Void UIRadialSlider_obj::drawEnd( ::openfl::display::Sprite sprite,Float angle,Float radius,Float width){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","drawEnd",0x0ebe5769,"com.danielfreeman.extendedmadness.UIRadialSlider.drawEnd","com/danielfreeman/extendedmadness/UIRadialSlider.hx",435,0x914ecbfb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(width,"width")
		HX_STACK_LINE(436)
		Float _g = ::Math_obj::sin((this->_offset + angle));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(436)
		Float _g1 = (((radius + (Float(width) / Float((int)2)))) * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(436)
		Float _g2 = (this->_maximumRadius + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(437)
		Float _g3 = ::Math_obj::cos((this->_offset + angle));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(437)
		Float _g4 = (((radius + (Float(width) / Float((int)2)))) * _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(437)
		Float _g5 = (this->_maximumRadius - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(436)
		sprite->get_graphics()->lineTo(_g2,_g5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(UIRadialSlider_obj,drawEnd,(void))

Void UIRadialSlider_obj::drawRoundStart( ::openfl::display::Sprite sprite,Float radius,Float width){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","drawRoundStart",0x53b06b66,"com.danielfreeman.extendedmadness.UIRadialSlider.drawRoundStart","com/danielfreeman/extendedmadness/UIRadialSlider.hx",441,0x914ecbfb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(width,"width")
		HX_STACK_LINE(442)
		Float _offset = -(this->_offset);		HX_STACK_VAR(_offset,"_offset");
		HX_STACK_LINE(443)
		Float _g = ::Math_obj::sin(-(_offset));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(443)
		Float _g1 = (radius * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(443)
		Float cx = (this->_maximumRadius + _g1);		HX_STACK_VAR(cx,"cx");
		HX_STACK_LINE(444)
		Float _g2 = ::Math_obj::cos(-(_offset));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(444)
		Float _g3 = (radius * _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(444)
		Float cy = (this->_maximumRadius - _g3);		HX_STACK_VAR(cy,"cy");
		HX_STACK_LINE(445)
		Float _g4 = ::Math_obj::sin(_offset);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(445)
		Float _g5 = ((Float(width) / Float((int)2)) * _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(445)
		Float _g6 = (cx - _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(446)
		Float _g7 = ::Math_obj::cos(_offset);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(446)
		Float _g8 = ((Float(width) / Float((int)2)) * _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(446)
		Float _g9 = (cy - _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(445)
		sprite->get_graphics()->moveTo(_g6,_g9);
		HX_STACK_LINE(447)
		Float _g10 = ::Math_obj::sin((_offset + (Float(::Math_obj::PI) / Float((int)8))));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(447)
		Float _g11 = ((Float((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * width)) / Float((int)2)) * _g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(447)
		Float _g12 = (cx - _g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(448)
		Float _g13 = ::Math_obj::cos((_offset + (Float(::Math_obj::PI) / Float((int)8))));		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(448)
		Float _g14 = ((Float((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * width)) / Float((int)2)) * _g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(448)
		Float _g15 = (cy - _g14);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(449)
		Float _g16 = ::Math_obj::sin((_offset + (Float(::Math_obj::PI) / Float((int)4))));		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(449)
		Float _g17 = ((Float(width) / Float((int)2)) * _g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(449)
		Float _g18 = (cx - _g17);		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(450)
		Float _g19 = ::Math_obj::cos((_offset + (Float(::Math_obj::PI) / Float((int)4))));		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(450)
		Float _g20 = ((Float(width) / Float((int)2)) * _g19);		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(450)
		Float _g21 = (cy - _g20);		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(447)
		sprite->get_graphics()->curveTo(_g12,_g15,_g18,_g21);
		HX_STACK_LINE(451)
		Float _g22 = ::Math_obj::sin((_offset + (Float(((int)3 * ::Math_obj::PI)) / Float((int)8))));		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(451)
		Float _g23 = ((Float((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * width)) / Float((int)2)) * _g22);		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(451)
		Float _g24 = (cx - _g23);		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(452)
		Float _g25 = ::Math_obj::cos((_offset + (Float(((int)3 * ::Math_obj::PI)) / Float((int)8))));		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(452)
		Float _g26 = ((Float((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * width)) / Float((int)2)) * _g25);		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(452)
		Float _g27 = (cy - _g26);		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(453)
		Float _g28 = ::Math_obj::sin((_offset + (Float(::Math_obj::PI) / Float((int)2))));		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(453)
		Float _g29 = ((Float(width) / Float((int)2)) * _g28);		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(453)
		Float _g30 = (cx - _g29);		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(454)
		Float _g31 = ::Math_obj::cos((_offset + (Float(::Math_obj::PI) / Float((int)2))));		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(454)
		Float _g32 = ((Float(width) / Float((int)2)) * _g31);		HX_STACK_VAR(_g32,"_g32");
		HX_STACK_LINE(454)
		Float _g33 = (cy - _g32);		HX_STACK_VAR(_g33,"_g33");
		HX_STACK_LINE(451)
		sprite->get_graphics()->curveTo(_g24,_g27,_g30,_g33);
		HX_STACK_LINE(455)
		Float _g34 = ::Math_obj::sin((_offset + (Float(((int)5 * ::Math_obj::PI)) / Float((int)8))));		HX_STACK_VAR(_g34,"_g34");
		HX_STACK_LINE(455)
		Float _g35 = ((Float((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * width)) / Float((int)2)) * _g34);		HX_STACK_VAR(_g35,"_g35");
		HX_STACK_LINE(455)
		Float _g36 = (cx - _g35);		HX_STACK_VAR(_g36,"_g36");
		HX_STACK_LINE(456)
		Float _g37 = ::Math_obj::cos((_offset + (Float(((int)5 * ::Math_obj::PI)) / Float((int)8))));		HX_STACK_VAR(_g37,"_g37");
		HX_STACK_LINE(456)
		Float _g38 = ((Float((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * width)) / Float((int)2)) * _g37);		HX_STACK_VAR(_g38,"_g38");
		HX_STACK_LINE(456)
		Float _g39 = (cy - _g38);		HX_STACK_VAR(_g39,"_g39");
		HX_STACK_LINE(457)
		Float _g40 = ::Math_obj::sin((_offset + (Float(((int)6 * ::Math_obj::PI)) / Float((int)8))));		HX_STACK_VAR(_g40,"_g40");
		HX_STACK_LINE(457)
		Float _g41 = ((Float(width) / Float((int)2)) * _g40);		HX_STACK_VAR(_g41,"_g41");
		HX_STACK_LINE(457)
		Float _g42 = (cx - _g41);		HX_STACK_VAR(_g42,"_g42");
		HX_STACK_LINE(458)
		Float _g43 = ::Math_obj::cos((_offset + (Float(((int)6 * ::Math_obj::PI)) / Float((int)8))));		HX_STACK_VAR(_g43,"_g43");
		HX_STACK_LINE(458)
		Float _g44 = ((Float(width) / Float((int)2)) * _g43);		HX_STACK_VAR(_g44,"_g44");
		HX_STACK_LINE(458)
		Float _g45 = (cy - _g44);		HX_STACK_VAR(_g45,"_g45");
		HX_STACK_LINE(455)
		sprite->get_graphics()->curveTo(_g36,_g39,_g42,_g45);
		HX_STACK_LINE(459)
		Float _g46 = ::Math_obj::sin((_offset + (Float(((int)7 * ::Math_obj::PI)) / Float((int)8))));		HX_STACK_VAR(_g46,"_g46");
		HX_STACK_LINE(459)
		Float _g47 = ((Float((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * width)) / Float((int)2)) * _g46);		HX_STACK_VAR(_g47,"_g47");
		HX_STACK_LINE(459)
		Float _g48 = (cx - _g47);		HX_STACK_VAR(_g48,"_g48");
		HX_STACK_LINE(460)
		Float _g49 = ::Math_obj::cos((_offset + (Float(((int)7 * ::Math_obj::PI)) / Float((int)8))));		HX_STACK_VAR(_g49,"_g49");
		HX_STACK_LINE(460)
		Float _g50 = ((Float((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * width)) / Float((int)2)) * _g49);		HX_STACK_VAR(_g50,"_g50");
		HX_STACK_LINE(460)
		Float _g51 = (cy - _g50);		HX_STACK_VAR(_g51,"_g51");
		HX_STACK_LINE(461)
		Float _g52 = ::Math_obj::sin((_offset + ::Math_obj::PI));		HX_STACK_VAR(_g52,"_g52");
		HX_STACK_LINE(461)
		Float _g53 = ((Float(width) / Float((int)2)) * _g52);		HX_STACK_VAR(_g53,"_g53");
		HX_STACK_LINE(461)
		Float _g54 = (cx - _g53);		HX_STACK_VAR(_g54,"_g54");
		HX_STACK_LINE(462)
		Float _g55 = ::Math_obj::cos((_offset + ::Math_obj::PI));		HX_STACK_VAR(_g55,"_g55");
		HX_STACK_LINE(462)
		Float _g56 = ((Float(width) / Float((int)2)) * _g55);		HX_STACK_VAR(_g56,"_g56");
		HX_STACK_LINE(462)
		Float _g57 = (cy - _g56);		HX_STACK_VAR(_g57,"_g57");
		HX_STACK_LINE(459)
		sprite->get_graphics()->curveTo(_g48,_g51,_g54,_g57);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(UIRadialSlider_obj,drawRoundStart,(void))

Void UIRadialSlider_obj::drawRoundEnd( ::openfl::display::Sprite sprite,Float angle,Float radius,Float width){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","drawRoundEnd",0x3df771df,"com.danielfreeman.extendedmadness.UIRadialSlider.drawRoundEnd","com/danielfreeman/extendedmadness/UIRadialSlider.hx",466,0x914ecbfb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(width,"width")
		HX_STACK_LINE(467)
		Float _g = ::Math_obj::sin((this->_offset + angle));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(467)
		Float _g1 = (radius * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(467)
		Float cx = (this->_maximumRadius + _g1);		HX_STACK_VAR(cx,"cx");
		HX_STACK_LINE(468)
		Float _g2 = ::Math_obj::cos((this->_offset + angle));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(468)
		Float _g3 = (radius * _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(468)
		Float cy = (this->_maximumRadius - _g3);		HX_STACK_VAR(cy,"cy");
		HX_STACK_LINE(469)
		Float _g4 = ::Math_obj::sin(((this->_offset + angle) + (Float(((int)7 * ::Math_obj::PI)) / Float((int)8))));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(469)
		Float _g5 = ((Float((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * width)) / Float((int)2)) * _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(469)
		Float _g6 = (cx + _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(470)
		Float _g7 = ::Math_obj::cos(((this->_offset + angle) + (Float(((int)7 * ::Math_obj::PI)) / Float((int)8))));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(470)
		Float _g8 = ((Float((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * width)) / Float((int)2)) * _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(470)
		Float _g9 = (cy - _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(471)
		Float _g10 = ::Math_obj::sin(((this->_offset + angle) + (Float(((int)6 * ::Math_obj::PI)) / Float((int)8))));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(471)
		Float _g11 = ((Float(width) / Float((int)2)) * _g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(471)
		Float _g12 = (cx + _g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(472)
		Float _g13 = ::Math_obj::cos(((this->_offset + angle) + (Float(((int)6 * ::Math_obj::PI)) / Float((int)8))));		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(472)
		Float _g14 = ((Float(width) / Float((int)2)) * _g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(472)
		Float _g15 = (cy - _g14);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(469)
		sprite->get_graphics()->curveTo(_g6,_g9,_g12,_g15);
		HX_STACK_LINE(473)
		Float _g16 = ::Math_obj::sin(((this->_offset + angle) + (Float(((int)5 * ::Math_obj::PI)) / Float((int)8))));		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(473)
		Float _g17 = ((Float((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * width)) / Float((int)2)) * _g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(473)
		Float _g18 = (cx + _g17);		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(474)
		Float _g19 = ::Math_obj::cos(((this->_offset + angle) + (Float(((int)5 * ::Math_obj::PI)) / Float((int)8))));		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(474)
		Float _g20 = ((Float((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * width)) / Float((int)2)) * _g19);		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(474)
		Float _g21 = (cy - _g20);		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(475)
		Float _g22 = ::Math_obj::sin(((this->_offset + angle) + (Float(::Math_obj::PI) / Float((int)2))));		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(475)
		Float _g23 = ((Float(width) / Float((int)2)) * _g22);		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(475)
		Float _g24 = (cx + _g23);		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(476)
		Float _g25 = ::Math_obj::cos(((this->_offset + angle) + (Float(::Math_obj::PI) / Float((int)2))));		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(476)
		Float _g26 = ((Float(width) / Float((int)2)) * _g25);		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(476)
		Float _g27 = (cy - _g26);		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(473)
		sprite->get_graphics()->curveTo(_g18,_g21,_g24,_g27);
		HX_STACK_LINE(477)
		Float _g28 = ::Math_obj::sin(((this->_offset + angle) + (Float(((int)3 * ::Math_obj::PI)) / Float((int)8))));		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(477)
		Float _g29 = ((Float((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * width)) / Float((int)2)) * _g28);		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(477)
		Float _g30 = (cx + _g29);		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(478)
		Float _g31 = ::Math_obj::cos(((this->_offset + angle) + (Float(((int)3 * ::Math_obj::PI)) / Float((int)8))));		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(478)
		Float _g32 = ((Float((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * width)) / Float((int)2)) * _g31);		HX_STACK_VAR(_g32,"_g32");
		HX_STACK_LINE(478)
		Float _g33 = (cy - _g32);		HX_STACK_VAR(_g33,"_g33");
		HX_STACK_LINE(479)
		Float _g34 = ::Math_obj::sin(((this->_offset + angle) + (Float(((int)2 * ::Math_obj::PI)) / Float((int)8))));		HX_STACK_VAR(_g34,"_g34");
		HX_STACK_LINE(479)
		Float _g35 = ((Float(width) / Float((int)2)) * _g34);		HX_STACK_VAR(_g35,"_g35");
		HX_STACK_LINE(479)
		Float _g36 = (cx + _g35);		HX_STACK_VAR(_g36,"_g36");
		HX_STACK_LINE(480)
		Float _g37 = ::Math_obj::cos(((this->_offset + angle) + (Float(((int)2 * ::Math_obj::PI)) / Float((int)8))));		HX_STACK_VAR(_g37,"_g37");
		HX_STACK_LINE(480)
		Float _g38 = ((Float(width) / Float((int)2)) * _g37);		HX_STACK_VAR(_g38,"_g38");
		HX_STACK_LINE(480)
		Float _g39 = (cy - _g38);		HX_STACK_VAR(_g39,"_g39");
		HX_STACK_LINE(477)
		sprite->get_graphics()->curveTo(_g30,_g33,_g36,_g39);
		HX_STACK_LINE(481)
		Float _g40 = ::Math_obj::sin(((this->_offset + angle) + (Float(::Math_obj::PI) / Float((int)8))));		HX_STACK_VAR(_g40,"_g40");
		HX_STACK_LINE(481)
		Float _g41 = ((Float((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * width)) / Float((int)2)) * _g40);		HX_STACK_VAR(_g41,"_g41");
		HX_STACK_LINE(481)
		Float _g42 = (cx + _g41);		HX_STACK_VAR(_g42,"_g42");
		HX_STACK_LINE(482)
		Float _g43 = ::Math_obj::cos(((this->_offset + angle) + (Float(::Math_obj::PI) / Float((int)8))));		HX_STACK_VAR(_g43,"_g43");
		HX_STACK_LINE(482)
		Float _g44 = ((Float((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * width)) / Float((int)2)) * _g43);		HX_STACK_VAR(_g44,"_g44");
		HX_STACK_LINE(482)
		Float _g45 = (cy - _g44);		HX_STACK_VAR(_g45,"_g45");
		HX_STACK_LINE(483)
		Float _g46 = ::Math_obj::sin((this->_offset + angle));		HX_STACK_VAR(_g46,"_g46");
		HX_STACK_LINE(483)
		Float _g47 = ((Float(width) / Float((int)2)) * _g46);		HX_STACK_VAR(_g47,"_g47");
		HX_STACK_LINE(483)
		Float _g48 = (cx + _g47);		HX_STACK_VAR(_g48,"_g48");
		HX_STACK_LINE(484)
		Float _g49 = ::Math_obj::cos((this->_offset + angle));		HX_STACK_VAR(_g49,"_g49");
		HX_STACK_LINE(484)
		Float _g50 = ((Float(width) / Float((int)2)) * _g49);		HX_STACK_VAR(_g50,"_g50");
		HX_STACK_LINE(484)
		Float _g51 = (cy - _g50);		HX_STACK_VAR(_g51,"_g51");
		HX_STACK_LINE(481)
		sprite->get_graphics()->curveTo(_g42,_g45,_g48,_g51);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(UIRadialSlider_obj,drawRoundEnd,(void))

Void UIRadialSlider_obj::drawArcOut( ::openfl::display::Sprite sprite,Float angle,Float radius){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","drawArcOut",0xb6b9728e,"com.danielfreeman.extendedmadness.UIRadialSlider.drawArcOut","com/danielfreeman/extendedmadness/UIRadialSlider.hx",488,0x914ecbfb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_LINE(489)
		int segments = ::Math_obj::floor((Float(angle) / Float(((Float(::Math_obj::PI) / Float((int)4))))));		HX_STACK_VAR(segments,"segments");
		HX_STACK_LINE(490)
		Float remainder = (angle - (Float((segments * ::Math_obj::PI)) / Float((int)4)));		HX_STACK_VAR(remainder,"remainder");
		HX_STACK_LINE(491)
		{
			HX_STACK_LINE(491)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(491)
			int _g = (segments + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(491)
			while((true)){
				HX_STACK_LINE(491)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(491)
					break;
				}
				HX_STACK_LINE(491)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(492)
				Float _g2 = ::Math_obj::sin(((this->_offset + (Float((i * ::Math_obj::PI)) / Float((int)4))) - (Float(::Math_obj::PI) / Float((int)8))));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(492)
				Float _g11 = ((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * radius) * _g2);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(492)
				Float _g21 = (this->_maximumRadius + _g11);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(493)
				Float _g3 = ::Math_obj::cos(((this->_offset + (Float((i * ::Math_obj::PI)) / Float((int)4))) - (Float(::Math_obj::PI) / Float((int)8))));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(493)
				Float _g4 = ((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * radius) * _g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(493)
				Float _g5 = (this->_maximumRadius - _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(494)
				Float _g6 = ::Math_obj::sin((this->_offset + (Float((i * ::Math_obj::PI)) / Float((int)4))));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(494)
				Float _g7 = (radius * _g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(494)
				Float _g8 = (this->_maximumRadius + _g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(495)
				Float _g9 = ::Math_obj::cos((this->_offset + (Float((i * ::Math_obj::PI)) / Float((int)4))));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(495)
				Float _g10 = (radius * _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(495)
				Float _g111 = (this->_maximumRadius - _g10);		HX_STACK_VAR(_g111,"_g111");
				HX_STACK_LINE(492)
				sprite->get_graphics()->curveTo(_g21,_g5,_g8,_g111);
			}
		}
		HX_STACK_LINE(497)
		if (((remainder > (int)0))){
			HX_STACK_LINE(498)
			Float _g12 = ::Math_obj::cos((Float(remainder) / Float((int)2)));		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(498)
			Float rCosHalf = (Float((int)1) / Float(_g12));		HX_STACK_VAR(rCosHalf,"rCosHalf");
			HX_STACK_LINE(499)
			Float _g13 = ::Math_obj::sin(((this->_offset + angle) - (Float(remainder) / Float((int)2))));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(499)
			Float _g14 = ((rCosHalf * radius) * _g13);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(499)
			Float _g15 = (this->_maximumRadius + _g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(500)
			Float _g16 = ::Math_obj::cos(((this->_offset + angle) - (Float(remainder) / Float((int)2))));		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(500)
			Float _g17 = ((rCosHalf * radius) * _g16);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(500)
			Float _g18 = (this->_maximumRadius - _g17);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(501)
			Float _g19 = ::Math_obj::sin((this->_offset + angle));		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(501)
			Float _g20 = (radius * _g19);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(501)
			Float _g21 = (this->_maximumRadius + _g20);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(502)
			Float _g22 = ::Math_obj::cos((this->_offset + angle));		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(502)
			Float _g23 = (radius * _g22);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(502)
			Float _g24 = (this->_maximumRadius - _g23);		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(499)
			sprite->get_graphics()->curveTo(_g15,_g18,_g21,_g24);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(UIRadialSlider_obj,drawArcOut,(void))

Void UIRadialSlider_obj::drawArcBack( ::openfl::display::Sprite sprite,Float angle,Float radius){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","drawArcBack",0x22e3c827,"com.danielfreeman.extendedmadness.UIRadialSlider.drawArcBack","com/danielfreeman/extendedmadness/UIRadialSlider.hx",507,0x914ecbfb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_LINE(508)
		int segments = ::Math_obj::floor((Float(angle) / Float(((Float(::Math_obj::PI) / Float((int)4))))));		HX_STACK_VAR(segments,"segments");
		HX_STACK_LINE(509)
		Float remainder = (angle - (Float((segments * ::Math_obj::PI)) / Float((int)4)));		HX_STACK_VAR(remainder,"remainder");
		HX_STACK_LINE(510)
		if (((remainder > (int)0))){
			HX_STACK_LINE(511)
			Float _g = ::Math_obj::cos((Float(remainder) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(511)
			Float rCosHalf = (Float((int)1) / Float(_g));		HX_STACK_VAR(rCosHalf,"rCosHalf");
			HX_STACK_LINE(512)
			Float _g1 = ::Math_obj::sin(((this->_offset + angle) - (Float(remainder) / Float((int)2))));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(512)
			Float _g2 = ((rCosHalf * radius) * _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(512)
			Float _g3 = (this->_maximumRadius + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(513)
			Float _g4 = ::Math_obj::cos(((this->_offset + angle) - (Float(remainder) / Float((int)2))));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(513)
			Float _g5 = ((rCosHalf * radius) * _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(513)
			Float _g6 = (this->_maximumRadius - _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(514)
			Float _g7 = ::Math_obj::sin(((this->_offset + angle) - remainder));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(514)
			Float _g8 = (radius * _g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(514)
			Float _g9 = (this->_maximumRadius + _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(515)
			Float _g10 = ::Math_obj::cos(((this->_offset + angle) - remainder));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(515)
			Float _g11 = (radius * _g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(515)
			Float _g12 = (this->_maximumRadius - _g11);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(512)
			sprite->get_graphics()->curveTo(_g3,_g6,_g9,_g12);
		}
		HX_STACK_LINE(517)
		int i = (segments - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(518)
		while((true)){
			HX_STACK_LINE(518)
			if ((!(((i >= (int)0))))){
				HX_STACK_LINE(518)
				break;
			}
			HX_STACK_LINE(519)
			Float _g13 = ::Math_obj::sin(((this->_offset + (Float((i * ::Math_obj::PI)) / Float((int)4))) + (Float(::Math_obj::PI) / Float((int)8))));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(519)
			Float _g14 = ((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * radius) * _g13);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(519)
			Float _g15 = (this->_maximumRadius + _g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(520)
			Float _g16 = ::Math_obj::cos(((this->_offset + (Float((i * ::Math_obj::PI)) / Float((int)4))) + (Float(::Math_obj::PI) / Float((int)8))));		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(520)
			Float _g17 = ((::com::danielfreeman::extendedmadness::UIRadialSlider_obj::RCOS_HALF * radius) * _g16);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(520)
			Float _g18 = (this->_maximumRadius - _g17);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(521)
			Float _g19 = ::Math_obj::sin((this->_offset + (Float((i * ::Math_obj::PI)) / Float((int)4))));		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(521)
			Float _g20 = (radius * _g19);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(521)
			Float _g21 = (this->_maximumRadius + _g20);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(522)
			Float _g22 = ::Math_obj::cos((this->_offset + (Float((i * ::Math_obj::PI)) / Float((int)4))));		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(522)
			Float _g23 = (radius * _g22);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(522)
			Float _g24 = (this->_maximumRadius - _g23);		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(519)
			sprite->get_graphics()->curveTo(_g15,_g18,_g21,_g24);
			HX_STACK_LINE(523)
			(i)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(UIRadialSlider_obj,drawArcBack,(void))

Void UIRadialSlider_obj::drawSquareButton( ::openfl::display::Sprite sprite,Float angle,Float radius,Float width,int colour){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","drawSquareButton",0x132b7521,"com.danielfreeman.extendedmadness.UIRadialSlider.drawSquareButton","com/danielfreeman/extendedmadness/UIRadialSlider.hx",528,0x914ecbfb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(529)
		Float delta = ::Math_obj::atan((Float((Float(width) / Float((int)4))) / Float(radius)));		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(530)
		Float _g = ::Math_obj::cos((Float(delta) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(530)
		Float rCosHalf = (Float((int)1) / Float(_g));		HX_STACK_VAR(rCosHalf,"rCosHalf");
		HX_STACK_LINE(531)
		sprite->get_graphics()->beginFill(colour,null());
		HX_STACK_LINE(532)
		Float _g1 = ::Math_obj::sin(((this->_offset + angle) - (Float(delta) / Float((int)2))));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(532)
		Float _g2 = (((radius - (Float(width) / Float((int)2)))) * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(532)
		Float _g3 = (this->_maximumRadius + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(533)
		Float _g4 = ::Math_obj::cos(((this->_offset + angle) - (Float(delta) / Float((int)2))));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(533)
		Float _g5 = (((radius - (Float(width) / Float((int)2)))) * _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(533)
		Float _g6 = (this->_maximumRadius - _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(532)
		sprite->get_graphics()->moveTo(_g3,_g6);
		HX_STACK_LINE(534)
		Float _g7 = ::Math_obj::sin(((this->_offset + angle) - (Float(delta) / Float((int)2))));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(534)
		Float _g8 = (((radius + (Float(width) / Float((int)2)))) * _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(534)
		Float _g9 = (this->_maximumRadius + _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(535)
		Float _g10 = ::Math_obj::cos(((this->_offset + angle) - (Float(delta) / Float((int)2))));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(535)
		Float _g11 = (((radius + (Float(width) / Float((int)2)))) * _g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(535)
		Float _g12 = (this->_maximumRadius - _g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(534)
		sprite->get_graphics()->lineTo(_g9,_g12);
		HX_STACK_LINE(536)
		Float _g13 = ::Math_obj::sin((this->_offset + angle));		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(536)
		Float _g14 = ((rCosHalf * ((radius + (Float(width) / Float((int)2))))) * _g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(536)
		Float _g15 = (this->_maximumRadius + _g14);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(537)
		Float _g16 = ::Math_obj::cos((this->_offset + angle));		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(537)
		Float _g17 = ((rCosHalf * ((radius + (Float(width) / Float((int)2))))) * _g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(537)
		Float _g18 = (this->_maximumRadius - _g17);		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(538)
		Float _g19 = ::Math_obj::sin(((this->_offset + angle) + (Float(delta) / Float((int)2))));		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(538)
		Float _g20 = (((radius + (Float(width) / Float((int)2)))) * _g19);		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(538)
		Float _g21 = (this->_maximumRadius + _g20);		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(539)
		Float _g22 = ::Math_obj::cos(((this->_offset + angle) + (Float(delta) / Float((int)2))));		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(539)
		Float _g23 = (((radius + (Float(width) / Float((int)2)))) * _g22);		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(539)
		Float _g24 = (this->_maximumRadius - _g23);		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(536)
		sprite->get_graphics()->curveTo(_g15,_g18,_g21,_g24);
		HX_STACK_LINE(540)
		Float _g25 = ::Math_obj::sin(((this->_offset + angle) + (Float(delta) / Float((int)2))));		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(540)
		Float _g26 = (((radius - (Float(width) / Float((int)2)))) * _g25);		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(540)
		Float _g27 = (this->_maximumRadius + _g26);		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(541)
		Float _g28 = ::Math_obj::cos(((this->_offset + angle) + (Float(delta) / Float((int)2))));		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(541)
		Float _g29 = (((radius - (Float(width) / Float((int)2)))) * _g28);		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(541)
		Float _g30 = (this->_maximumRadius - _g29);		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(540)
		sprite->get_graphics()->lineTo(_g27,_g30);
		HX_STACK_LINE(542)
		Float _g31 = ::Math_obj::sin((this->_offset + angle));		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(542)
		Float _g32 = ((rCosHalf * ((radius - (Float(width) / Float((int)2))))) * _g31);		HX_STACK_VAR(_g32,"_g32");
		HX_STACK_LINE(542)
		Float _g33 = (this->_maximumRadius + _g32);		HX_STACK_VAR(_g33,"_g33");
		HX_STACK_LINE(543)
		Float _g34 = ::Math_obj::cos((this->_offset + angle));		HX_STACK_VAR(_g34,"_g34");
		HX_STACK_LINE(543)
		Float _g35 = ((rCosHalf * ((radius - (Float(width) / Float((int)2))))) * _g34);		HX_STACK_VAR(_g35,"_g35");
		HX_STACK_LINE(543)
		Float _g36 = (this->_maximumRadius - _g35);		HX_STACK_VAR(_g36,"_g36");
		HX_STACK_LINE(544)
		Float _g37 = ::Math_obj::sin(((this->_offset + angle) - (Float(delta) / Float((int)2))));		HX_STACK_VAR(_g37,"_g37");
		HX_STACK_LINE(544)
		Float _g38 = (((radius - (Float(width) / Float((int)2)))) * _g37);		HX_STACK_VAR(_g38,"_g38");
		HX_STACK_LINE(544)
		Float _g39 = (this->_maximumRadius + _g38);		HX_STACK_VAR(_g39,"_g39");
		HX_STACK_LINE(545)
		Float _g40 = ::Math_obj::cos(((this->_offset + angle) - (Float(delta) / Float((int)2))));		HX_STACK_VAR(_g40,"_g40");
		HX_STACK_LINE(545)
		Float _g41 = (((radius - (Float(width) / Float((int)2)))) * _g40);		HX_STACK_VAR(_g41,"_g41");
		HX_STACK_LINE(545)
		Float _g42 = (this->_maximumRadius - _g41);		HX_STACK_VAR(_g42,"_g42");
		HX_STACK_LINE(542)
		sprite->get_graphics()->curveTo(_g33,_g36,_g39,_g42);
		HX_STACK_LINE(546)
		sprite->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(UIRadialSlider_obj,drawSquareButton,(void))

Void UIRadialSlider_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadialSlider","destructor",0xdb0f3947,"com.danielfreeman.extendedmadness.UIRadialSlider.destructor","com/danielfreeman/extendedmadness/UIRadialSlider.hx",550,0x914ecbfb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(551)
		this->super::destructor();
		HX_STACK_LINE(552)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null());
		HX_STACK_LINE(553)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null());
		HX_STACK_LINE(554)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
	}
return null();
}


::String UIRadialSlider_obj::CHANGE;

::String UIRadialSlider_obj::SELECT;

Float UIRadialSlider_obj::RADIUS;

Float UIRadialSlider_obj::INNER;

Float UIRadialSlider_obj::WIDTH;

Float UIRadialSlider_obj::GAP;

Float UIRadialSlider_obj::MARGIN;

Float UIRadialSlider_obj::DEFAULT_VALUE;

Float UIRadialSlider_obj::THRESHOLD;

::openfl::text::TextFormat UIRadialSlider_obj::FORMAT;

Float UIRadialSlider_obj::RCOS_HALF;


UIRadialSlider_obj::UIRadialSlider_obj()
{
}

void UIRadialSlider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIRadialSlider);
	HX_MARK_MEMBER_NAME(_maximumRadius,"_maximumRadius");
	HX_MARK_MEMBER_NAME(_numberOfSliders,"_numberOfSliders");
	HX_MARK_MEMBER_NAME(_alt,"_alt");
	HX_MARK_MEMBER_NAME(_values,"_values");
	HX_MARK_MEMBER_NAME(_minimum,"_minimum");
	HX_MARK_MEMBER_NAME(_maximum,"_maximum");
	HX_MARK_MEMBER_NAME(_rounded,"_rounded");
	HX_MARK_MEMBER_NAME(_offset,"_offset");
	HX_MARK_MEMBER_NAME(_colours,"_colours");
	HX_MARK_MEMBER_NAME(_buttonColours,"_buttonColours");
	HX_MARK_MEMBER_NAME(_outlineColours,"_outlineColours");
	HX_MARK_MEMBER_NAME(_sliderThickness,"_sliderThickness");
	HX_MARK_MEMBER_NAME(_spacing,"_spacing");
	HX_MARK_MEMBER_NAME(_margin,"_margin");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_saveValue,"_saveValue");
	HX_MARK_MEMBER_NAME(_label,"_label");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIRadialSlider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_maximumRadius,"_maximumRadius");
	HX_VISIT_MEMBER_NAME(_numberOfSliders,"_numberOfSliders");
	HX_VISIT_MEMBER_NAME(_alt,"_alt");
	HX_VISIT_MEMBER_NAME(_values,"_values");
	HX_VISIT_MEMBER_NAME(_minimum,"_minimum");
	HX_VISIT_MEMBER_NAME(_maximum,"_maximum");
	HX_VISIT_MEMBER_NAME(_rounded,"_rounded");
	HX_VISIT_MEMBER_NAME(_offset,"_offset");
	HX_VISIT_MEMBER_NAME(_colours,"_colours");
	HX_VISIT_MEMBER_NAME(_buttonColours,"_buttonColours");
	HX_VISIT_MEMBER_NAME(_outlineColours,"_outlineColours");
	HX_VISIT_MEMBER_NAME(_sliderThickness,"_sliderThickness");
	HX_VISIT_MEMBER_NAME(_spacing,"_spacing");
	HX_VISIT_MEMBER_NAME(_margin,"_margin");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_saveValue,"_saveValue");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIRadialSlider_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_alt") ) { return _alt; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return get_index(); }
		if (HX_FIELD_EQ(inName,"value") ) { return get_value(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"FORMAT") ) { return FORMAT; }
		if (HX_FIELD_EQ(inName,"values") ) { return get_values(); }
		if (HX_FIELD_EQ(inName,"_index") ) { return _index; }
		if (HX_FIELD_EQ(inName,"_label") ) { return _label; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_values") ) { return _values; }
		if (HX_FIELD_EQ(inName,"_offset") ) { return _offset; }
		if (HX_FIELD_EQ(inName,"_margin") ) { return _margin; }
		if (HX_FIELD_EQ(inName,"toIndex") ) { return toIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"drawArc") ) { return drawArc_dyn(); }
		if (HX_FIELD_EQ(inName,"drawEnd") ) { return drawEnd_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_minimum") ) { return _minimum; }
		if (HX_FIELD_EQ(inName,"_maximum") ) { return _maximum; }
		if (HX_FIELD_EQ(inName,"_rounded") ) { return _rounded; }
		if (HX_FIELD_EQ(inName,"_colours") ) { return _colours; }
		if (HX_FIELD_EQ(inName,"_spacing") ) { return _spacing; }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RCOS_HALF") ) { return RCOS_HALF; }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseMove") ) { return mouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"set_index") ) { return set_index_dyn(); }
		if (HX_FIELD_EQ(inName,"get_index") ) { return get_index_dyn(); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		if (HX_FIELD_EQ(inName,"get_value") ) { return get_value_dyn(); }
		if (HX_FIELD_EQ(inName,"drawStart") ) { return drawStart_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_saveValue") ) { return _saveValue; }
		if (HX_FIELD_EQ(inName,"drawRadial") ) { return drawRadial_dyn(); }
		if (HX_FIELD_EQ(inName,"set_values") ) { return set_values_dyn(); }
		if (HX_FIELD_EQ(inName,"get_values") ) { return get_values_dyn(); }
		if (HX_FIELD_EQ(inName,"drawButton") ) { return drawButton_dyn(); }
		if (HX_FIELD_EQ(inName,"drawArcOut") ) { return drawArcOut_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"makeRadials") ) { return makeRadials_dyn(); }
		if (HX_FIELD_EQ(inName,"touchCancel") ) { return touchCancel_dyn(); }
		if (HX_FIELD_EQ(inName,"drawArcBack") ) { return drawArcBack_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_theWidth") ) { return get_theWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRoundEnd") ) { return drawRoundEnd_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_theHeight") ) { return get_theHeight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_maximumRadius") ) { return _maximumRadius; }
		if (HX_FIELD_EQ(inName,"_buttonColours") ) { return _buttonColours; }
		if (HX_FIELD_EQ(inName,"drawBackground") ) { return drawBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRoundedArc") ) { return drawRoundedArc_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRoundStart") ) { return drawRoundStart_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_outlineColours") ) { return _outlineColours; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_numberOfSliders") ) { return _numberOfSliders; }
		if (HX_FIELD_EQ(inName,"_sliderThickness") ) { return _sliderThickness; }
		if (HX_FIELD_EQ(inName,"drawSquareButton") ) { return drawSquareButton_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"extractParameters") ) { return extractParameters_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIRadialSlider_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_alt") ) { _alt=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return set_index(inValue); }
		if (HX_FIELD_EQ(inName,"value") ) { return set_value(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"FORMAT") ) { FORMAT=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"values") ) { return set_values(inValue); }
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::com::danielfreeman::madcomponents::UILabel >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_values") ) { _values=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_offset") ) { _offset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_margin") ) { _margin=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_minimum") ) { _minimum=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maximum") ) { _maximum=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rounded") ) { _rounded=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colours") ) { _colours=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_spacing") ) { _spacing=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RCOS_HALF") ) { RCOS_HALF=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_saveValue") ) { _saveValue=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_maximumRadius") ) { _maximumRadius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buttonColours") ) { _buttonColours=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_outlineColours") ) { _outlineColours=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_numberOfSliders") ) { _numberOfSliders=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sliderThickness") ) { _sliderThickness=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIRadialSlider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("values"));
	outFields->push(HX_CSTRING("_maximumRadius"));
	outFields->push(HX_CSTRING("_numberOfSliders"));
	outFields->push(HX_CSTRING("_alt"));
	outFields->push(HX_CSTRING("_values"));
	outFields->push(HX_CSTRING("_minimum"));
	outFields->push(HX_CSTRING("_maximum"));
	outFields->push(HX_CSTRING("_rounded"));
	outFields->push(HX_CSTRING("_offset"));
	outFields->push(HX_CSTRING("_colours"));
	outFields->push(HX_CSTRING("_buttonColours"));
	outFields->push(HX_CSTRING("_outlineColours"));
	outFields->push(HX_CSTRING("_sliderThickness"));
	outFields->push(HX_CSTRING("_spacing"));
	outFields->push(HX_CSTRING("_margin"));
	outFields->push(HX_CSTRING("_index"));
	outFields->push(HX_CSTRING("_saveValue"));
	outFields->push(HX_CSTRING("_label"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CHANGE"),
	HX_CSTRING("SELECT"),
	HX_CSTRING("RADIUS"),
	HX_CSTRING("INNER"),
	HX_CSTRING("WIDTH"),
	HX_CSTRING("GAP"),
	HX_CSTRING("MARGIN"),
	HX_CSTRING("DEFAULT_VALUE"),
	HX_CSTRING("THRESHOLD"),
	HX_CSTRING("FORMAT"),
	HX_CSTRING("RCOS_HALF"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(UIRadialSlider_obj,_maximumRadius),HX_CSTRING("_maximumRadius")},
	{hx::fsInt,(int)offsetof(UIRadialSlider_obj,_numberOfSliders),HX_CSTRING("_numberOfSliders")},
	{hx::fsBool,(int)offsetof(UIRadialSlider_obj,_alt),HX_CSTRING("_alt")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UIRadialSlider_obj,_values),HX_CSTRING("_values")},
	{hx::fsFloat,(int)offsetof(UIRadialSlider_obj,_minimum),HX_CSTRING("_minimum")},
	{hx::fsFloat,(int)offsetof(UIRadialSlider_obj,_maximum),HX_CSTRING("_maximum")},
	{hx::fsBool,(int)offsetof(UIRadialSlider_obj,_rounded),HX_CSTRING("_rounded")},
	{hx::fsFloat,(int)offsetof(UIRadialSlider_obj,_offset),HX_CSTRING("_offset")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(UIRadialSlider_obj,_colours),HX_CSTRING("_colours")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(UIRadialSlider_obj,_buttonColours),HX_CSTRING("_buttonColours")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(UIRadialSlider_obj,_outlineColours),HX_CSTRING("_outlineColours")},
	{hx::fsFloat,(int)offsetof(UIRadialSlider_obj,_sliderThickness),HX_CSTRING("_sliderThickness")},
	{hx::fsFloat,(int)offsetof(UIRadialSlider_obj,_spacing),HX_CSTRING("_spacing")},
	{hx::fsFloat,(int)offsetof(UIRadialSlider_obj,_margin),HX_CSTRING("_margin")},
	{hx::fsInt,(int)offsetof(UIRadialSlider_obj,_index),HX_CSTRING("_index")},
	{hx::fsFloat,(int)offsetof(UIRadialSlider_obj,_saveValue),HX_CSTRING("_saveValue")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UILabel*/ ,(int)offsetof(UIRadialSlider_obj,_label),HX_CSTRING("_label")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_maximumRadius"),
	HX_CSTRING("_numberOfSliders"),
	HX_CSTRING("_alt"),
	HX_CSTRING("_values"),
	HX_CSTRING("_minimum"),
	HX_CSTRING("_maximum"),
	HX_CSTRING("_rounded"),
	HX_CSTRING("_offset"),
	HX_CSTRING("_colours"),
	HX_CSTRING("_buttonColours"),
	HX_CSTRING("_outlineColours"),
	HX_CSTRING("_sliderThickness"),
	HX_CSTRING("_spacing"),
	HX_CSTRING("_margin"),
	HX_CSTRING("_index"),
	HX_CSTRING("_saveValue"),
	HX_CSTRING("_label"),
	HX_CSTRING("toIndex"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("mouseMove"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("extractParameters"),
	HX_CSTRING("drawBackground"),
	HX_CSTRING("drawRadial"),
	HX_CSTRING("makeRadials"),
	HX_CSTRING("touchCancel"),
	HX_CSTRING("set_text"),
	HX_CSTRING("set_index"),
	HX_CSTRING("get_index"),
	HX_CSTRING("set_value"),
	HX_CSTRING("get_value"),
	HX_CSTRING("set_values"),
	HX_CSTRING("get_values"),
	HX_CSTRING("get_theWidth"),
	HX_CSTRING("get_theHeight"),
	HX_CSTRING("drawRoundedArc"),
	HX_CSTRING("drawArc"),
	HX_CSTRING("drawButton"),
	HX_CSTRING("drawStart"),
	HX_CSTRING("drawEnd"),
	HX_CSTRING("drawRoundStart"),
	HX_CSTRING("drawRoundEnd"),
	HX_CSTRING("drawArcOut"),
	HX_CSTRING("drawArcBack"),
	HX_CSTRING("drawSquareButton"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIRadialSlider_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIRadialSlider_obj::CHANGE,"CHANGE");
	HX_MARK_MEMBER_NAME(UIRadialSlider_obj::SELECT,"SELECT");
	HX_MARK_MEMBER_NAME(UIRadialSlider_obj::RADIUS,"RADIUS");
	HX_MARK_MEMBER_NAME(UIRadialSlider_obj::INNER,"INNER");
	HX_MARK_MEMBER_NAME(UIRadialSlider_obj::WIDTH,"WIDTH");
	HX_MARK_MEMBER_NAME(UIRadialSlider_obj::GAP,"GAP");
	HX_MARK_MEMBER_NAME(UIRadialSlider_obj::MARGIN,"MARGIN");
	HX_MARK_MEMBER_NAME(UIRadialSlider_obj::DEFAULT_VALUE,"DEFAULT_VALUE");
	HX_MARK_MEMBER_NAME(UIRadialSlider_obj::THRESHOLD,"THRESHOLD");
	HX_MARK_MEMBER_NAME(UIRadialSlider_obj::FORMAT,"FORMAT");
	HX_MARK_MEMBER_NAME(UIRadialSlider_obj::RCOS_HALF,"RCOS_HALF");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIRadialSlider_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIRadialSlider_obj::CHANGE,"CHANGE");
	HX_VISIT_MEMBER_NAME(UIRadialSlider_obj::SELECT,"SELECT");
	HX_VISIT_MEMBER_NAME(UIRadialSlider_obj::RADIUS,"RADIUS");
	HX_VISIT_MEMBER_NAME(UIRadialSlider_obj::INNER,"INNER");
	HX_VISIT_MEMBER_NAME(UIRadialSlider_obj::WIDTH,"WIDTH");
	HX_VISIT_MEMBER_NAME(UIRadialSlider_obj::GAP,"GAP");
	HX_VISIT_MEMBER_NAME(UIRadialSlider_obj::MARGIN,"MARGIN");
	HX_VISIT_MEMBER_NAME(UIRadialSlider_obj::DEFAULT_VALUE,"DEFAULT_VALUE");
	HX_VISIT_MEMBER_NAME(UIRadialSlider_obj::THRESHOLD,"THRESHOLD");
	HX_VISIT_MEMBER_NAME(UIRadialSlider_obj::FORMAT,"FORMAT");
	HX_VISIT_MEMBER_NAME(UIRadialSlider_obj::RCOS_HALF,"RCOS_HALF");
};

#endif

Class UIRadialSlider_obj::__mClass;

void UIRadialSlider_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UIRadialSlider"), hx::TCanCast< UIRadialSlider_obj> ,sStaticFields,sMemberFields,
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

void UIRadialSlider_obj::__boot()
{
	CHANGE= HX_CSTRING("sliderChange");
	SELECT= HX_CSTRING("sliderSelect");
	RADIUS= 80.0;
	INNER= 32.0;
	WIDTH= 22.0;
	GAP= 4.0;
	MARGIN= 0.0;
	DEFAULT_VALUE= 0.3;
	THRESHOLD= 2048.0;
	FORMAT= ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)20,(int)13421772,true,null(),null(),null(),null(),null(),null(),null(),null(),null());
struct _Function_0_1{
	inline static Float Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIRadialSlider.hx",93,0x914ecbfb)
		{
			HX_STACK_LINE(93)
			Float _g = ::Math_obj::cos((Float(::Math_obj::PI) / Float((int)8)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(93)
			return (Float((int)1) / Float(_g));
		}
		return null();
	}
};
	RCOS_HALF= _Function_0_1::Block();
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
