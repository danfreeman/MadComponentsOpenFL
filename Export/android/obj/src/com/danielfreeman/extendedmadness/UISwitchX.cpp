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
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UISwitchX
#include <com/danielfreeman/extendedmadness/UISwitchX.h>
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
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
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
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
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
#ifndef INCLUDED_openfl_utils_Timer
#include <openfl/utils/Timer.h>
#endif
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void UISwitchX_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISwitchX","new",0x672f5596,"com.danielfreeman.extendedmadness.UISwitchX.new","com/danielfreeman/extendedmadness/UISwitchX.hx",62,0xd36ccadd)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(98)
	this->_extra = (int)0;
	HX_STACK_LINE(96)
	this->_outlineColour = (int)11184810;
	HX_STACK_LINE(95)
	this->_buttonColour = (int)16382457;
	HX_STACK_LINE(94)
	this->_offColour = (int)3355443;
	HX_STACK_LINE(93)
	this->_formatOff = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Tahoma"),(int)15,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(92)
	this->_formatOn = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Tahoma"),(int)15,(int)3355443,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(91)
	this->_state = false;
	HX_STACK_LINE(90)
	this->_timer = ::openfl::utils::Timer_obj::__new((int)40,null());
	HX_STACK_LINE(105)
	super::__construct(screen,attributes);
	HX_STACK_LINE(107)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static bool Block( ::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UISwitchX.hx",107,0xd36ccadd)
			{
				HX_STACK_LINE(107)
				::String _g = xml->att->resolve(HX_CSTRING("alt"));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(107)
				return (_g == HX_CSTRING("true"));
			}
			return null();
		}
	};
	HX_STACK_LINE(107)
	if (((  ((xml->has->resolve(HX_CSTRING("alt")))) ? bool(_Function_1_1::Block(xml)) : bool(false) ))){
		HX_STACK_LINE(107)
		_g1 = (int)8;
	}
	else{
		HX_STACK_LINE(107)
		_g1 = (int)0;
	}
	HX_STACK_LINE(107)
	this->_extra = _g1;
	HX_STACK_LINE(108)
	Float _g3;		HX_STACK_VAR(_g3,"_g3");
	struct _Function_1_2{
		inline static bool Block( ::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UISwitchX.hx",108,0xd36ccadd)
			{
				HX_STACK_LINE(108)
				::String _g2 = xml->att->resolve(HX_CSTRING("alt"));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(108)
				return (_g2 == HX_CSTRING("true"));
			}
			return null();
		}
	};
	HX_STACK_LINE(108)
	if (((  ((xml->has->resolve(HX_CSTRING("alt")))) ? bool(_Function_1_2::Block(xml)) : bool(false) ))){
		HX_STACK_LINE(108)
		_g3 = 32.0;
	}
	else{
		HX_STACK_LINE(108)
		_g3 = 8.0;
	}
	HX_STACK_LINE(108)
	this->_curve = _g3;
	HX_STACK_LINE(110)
	int _g4 = attributes->get_colour();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(110)
	this->_colour = _g4;
	HX_STACK_LINE(111)
	Array< int > colours = attributes->get_backgroundColours();		HX_STACK_VAR(colours,"colours");
	HX_STACK_LINE(112)
	if (((colours != null()))){
		HX_STACK_LINE(113)
		if (((colours->length > (int)0))){
			HX_STACK_LINE(114)
			this->_colour = colours->__get((int)0);
		}
		HX_STACK_LINE(115)
		if (((colours->length > (int)1))){
			HX_STACK_LINE(116)
			this->_offColour = colours->__get((int)1);
		}
		HX_STACK_LINE(117)
		if (((colours->length > (int)2))){
			HX_STACK_LINE(118)
			Dynamic _g5 = this->_formatOff->color = colours->__get((int)2);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(118)
			this->_formatOn->color = _g5;
		}
		HX_STACK_LINE(119)
		if (((colours->length > (int)3))){
			HX_STACK_LINE(120)
			this->_formatOff->color = colours->__get((int)3);
		}
		HX_STACK_LINE(121)
		if (((colours->length > (int)4))){
			HX_STACK_LINE(122)
			this->_buttonColour = colours->__get((int)4);
		}
		HX_STACK_LINE(123)
		if (((colours->length > (int)5))){
			HX_STACK_LINE(124)
			this->_outlineColour = colours->__get((int)5);
		}
	}
	HX_STACK_LINE(126)
	Dynamic labels = ::Std_obj::string(xml).split(HX_CSTRING(","));		HX_STACK_VAR(labels,"labels");
	HX_STACK_LINE(127)
	if (((labels->__Field(HX_CSTRING("length"),true) > (int)1))){
		HX_STACK_LINE(127)
		this->_labels = labels;
	}
	else{
		HX_STACK_LINE(127)
		this->_labels = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("ON")).Add(HX_CSTRING("OFF")));
	}
	HX_STACK_LINE(129)
	this->initialiseButton(this->_labels->__GetItem((int)0),this->_labels->__GetItem((int)1));
	HX_STACK_LINE(130)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null(),null(),null());
	HX_STACK_LINE(131)
	this->_timer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->slide_dyn(),null(),null(),null());
	HX_STACK_LINE(133)
	::openfl::display::Sprite mask = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(mask,"mask");
	HX_STACK_LINE(134)
	mask->get_graphics()->beginFill((int)0,null());
	HX_STACK_LINE(135)
	mask->get_graphics()->drawRoundRect((int)0,(int)0,90.0,30.0,this->_curve,null());
	HX_STACK_LINE(136)
	::openfl::display::DisplayObject _g6 = this->_layer->set_mask(mask);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(136)
	this->_layer->addChild(_g6);
	HX_STACK_LINE(137)
	bool _g7 = this->useHandCursor = true;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(137)
	this->buttonMode = _g7;
	struct _Function_1_3{
		inline static bool Block( ::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UISwitchX.hx",138,0xd36ccadd)
			{
				HX_STACK_LINE(138)
				::String _g8 = xml->att->resolve(HX_CSTRING("state"));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(138)
				return (_g8 == HX_CSTRING("true"));
			}
			return null();
		}
	};
	HX_STACK_LINE(138)
	if (((  ((xml->has->resolve(HX_CSTRING("state")))) ? bool(_Function_1_3::Block(xml)) : bool(false) ))){
		HX_STACK_LINE(139)
		this->set_state(true);
	}
}
;
	return null();
}

//UISwitchX_obj::~UISwitchX_obj() { }

Dynamic UISwitchX_obj::__CreateEmpty() { return  new UISwitchX_obj; }
hx::ObjectPtr< UISwitchX_obj > UISwitchX_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UISwitchX_obj > result = new UISwitchX_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UISwitchX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UISwitchX_obj > result = new UISwitchX_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UISwitchX_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

bool UISwitchX_obj::set_state( bool value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISwitchX","set_state",0x945a102a,"com.danielfreeman.extendedmadness.UISwitchX.set_state","com/danielfreeman/extendedmadness/UISwitchX.hx",146,0xd36ccadd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(147)
	this->_state = value;
	HX_STACK_LINE(148)
	this->_button->set_x((  ((this->_state)) ? Float((45. + this->_extra)) : Float((int)0) ));
	HX_STACK_LINE(149)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UISwitchX_obj,set_state,return )

::String UISwitchX_obj::set_text( ::String value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISwitchX","set_text",0x6899b8b4,"com.danielfreeman.extendedmadness.UISwitchX.set_text","com/danielfreeman/extendedmadness/UISwitchX.hx",155,0xd36ccadd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(156)
	this->set_state((value == HX_CSTRING("on")));
	HX_STACK_LINE(157)
	return value;
}


::String UISwitchX_obj::get_text( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISwitchX","get_text",0xba3c5f40,"com.danielfreeman.extendedmadness.UISwitchX.get_text","com/danielfreeman/extendedmadness/UISwitchX.hx",164,0xd36ccadd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(164)
	if ((this->_state)){
		HX_STACK_LINE(164)
		return HX_CSTRING("on");
	}
	else{
		HX_STACK_LINE(164)
		return HX_CSTRING("off");
	}
	HX_STACK_LINE(164)
	return null();
}


bool UISwitchX_obj::get_state( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISwitchX","get_state",0xb109241e,"com.danielfreeman.extendedmadness.UISwitchX.get_state","com/danielfreeman/extendedmadness/UISwitchX.hx",171,0xd36ccadd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(171)
	return this->_state;
}


HX_DEFINE_DYNAMIC_FUNC0(UISwitchX_obj,get_state,return )

Void UISwitchX_obj::initialiseButton( ::String onText,::String offText){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISwitchX","initialiseButton",0x0ca3b593,"com.danielfreeman.extendedmadness.UISwitchX.initialiseButton","com/danielfreeman/extendedmadness/UISwitchX.hx",177,0xd36ccadd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(onText,"onText")
		HX_STACK_ARG(offText,"offText")
		HX_STACK_LINE(178)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(178)
		::openfl::display::Sprite _g1 = this->_layer = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(178)
		this->addChild(_g1);
		HX_STACK_LINE(179)
		::openfl::display::Sprite _g2 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(179)
		::openfl::display::Sprite _g3 = this->_button = _g2;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(179)
		this->_layer->addChild(_g3);
		HX_STACK_LINE(180)
		::openfl::display::Shape _g4 = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(180)
		::openfl::display::Shape _g5 = this->_over = _g4;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(180)
		this->addChild(_g5);
		HX_STACK_LINE(181)
		this->_over->get_graphics()->clear();
		HX_STACK_LINE(182)
		this->_over->get_graphics()->beginFill((int)0,(int)0);
		HX_STACK_LINE(183)
		this->_over->get_graphics()->drawRect(-30.,(int)0,150.,30.0);
		HX_STACK_LINE(184)
		this->_over->get_graphics()->endFill();
		HX_STACK_LINE(185)
		this->_over->get_graphics()->lineStyle((int)2,(int)11184810,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(186)
		this->_over->get_graphics()->drawRoundRect((int)0,(int)0,90.0,30.0,this->_curve,null());
		HX_STACK_LINE(187)
		this->drawButton(null());
		HX_STACK_LINE(189)
		::com::danielfreeman::madcomponents::UILabel _g6 = ::com::danielfreeman::madcomponents::UILabel_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)0,(int)1,onText,this->_formatOn);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(189)
		::com::danielfreeman::madcomponents::UILabel _g7 = this->_onLabel = _g6;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(189)
		this->_button->addChild(_g7);
		HX_STACK_LINE(190)
		Float _g8 = this->_onLabel->get_width();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(190)
		Float _g9 = (45. - _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(190)
		Float _g10 = (Float(_g9) / Float((int)2));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(190)
		Float _g11 = (_g10 - 90.0);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(190)
		Float _g12 = (_g11 + 45.0);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(190)
		this->_onLabel->set_x(_g12);
		HX_STACK_LINE(191)
		::com::danielfreeman::madcomponents::UILabel _g13 = ::com::danielfreeman::madcomponents::UILabel_obj::__new(hx::ObjectPtr<OBJ_>(this),45.,(int)1,offText,this->_formatOff);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(191)
		::com::danielfreeman::madcomponents::UILabel _g14 = this->_offLabel = _g13;		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(191)
		this->_button->addChild(_g14);
		HX_STACK_LINE(192)
		Float _g15 = this->_offLabel->get_width();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(192)
		Float _g16 = (45. - _g15);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(192)
		Float _g17 = (Float(_g16) / Float((int)2));		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(192)
		Float _g18 = (45.0 + _g17);		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(192)
		Float _g19 = (_g18 - this->_extra);		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(192)
		this->_offLabel->set_x(_g19);
		HX_STACK_LINE(193)
		Float _g20 = this->_onLabel->get_height();		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(193)
		Float _g21 = (30.0 - _g20);		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(193)
		Float _g22 = (Float(_g21) / Float((int)2));		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(193)
		Float _g23 = this->_offLabel->set_y(_g22);		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(193)
		this->_onLabel->set_y(_g23);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UISwitchX_obj,initialiseButton,(void))

Void UISwitchX_obj::drawButton( hx::Null< bool >  __o_state){
bool state = __o_state.Default(false);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISwitchX","drawButton",0x5c170aa0,"com.danielfreeman.extendedmadness.UISwitchX.drawButton","com/danielfreeman/extendedmadness/UISwitchX.hx",199,0xd36ccadd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
{
		HX_STACK_LINE(202)
		this->_button->get_graphics()->clear();
		HX_STACK_LINE(203)
		::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(204)
		matr->createGradientBox(120.,30.0,(Float(::Math_obj::PI) / Float((int)2)),(int)0,(int)0);
		HX_STACK_LINE(205)
		int _g = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,(int)-16);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(205)
		int _g1 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_colour,(int)64);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(205)
		int _g2 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_colour,(int)64);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(205)
		int _g3 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_colour,(int)32);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(205)
		Array< int > gradientOn = Array_obj< int >::__new().Add(_g).Add(_g1).Add(_g2).Add(_g3);		HX_STACK_VAR(gradientOn,"gradientOn");
		HX_STACK_LINE(206)
		this->_button->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,gradientOn,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)64).Add((int)128).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(207)
		this->_button->get_graphics()->drawRect((-45. - this->_extra),(int)1,(47. + ((int)2 * this->_extra)),28.);
		HX_STACK_LINE(209)
		int _g4 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_offColour,(int)-16);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(209)
		int _g5 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_offColour,(int)-16);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(209)
		int _g6 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_offColour,(int)64);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(209)
		int _g7 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_offColour,(int)32);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(209)
		Array< int > gradientOff = Array_obj< int >::__new().Add(_g4).Add(_g5).Add(_g6).Add(_g7);		HX_STACK_VAR(gradientOff,"gradientOff");
		HX_STACK_LINE(210)
		this->_button->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,gradientOff,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)64).Add((int)128).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(211)
		this->_button->get_graphics()->drawRect((43. - ((int)2 * this->_extra)),(int)1,(47. + ((int)2 * this->_extra)),28.);
		HX_STACK_LINE(213)
		matr->createGradientBox(45.0,30.0,(Float(::Math_obj::PI) / Float((int)2)),(int)0,(int)0);
		HX_STACK_LINE(214)
		Array< int > buttonGradient;		HX_STACK_VAR(buttonGradient,"buttonGradient");
		HX_STACK_LINE(214)
		if ((state)){
			HX_STACK_LINE(214)
			int _g8 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_buttonColour,null());		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(214)
			int _g9 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_buttonColour,(int)-32);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(214)
			int _g10 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_buttonColour,(int)32);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(214)
			buttonGradient = Array_obj< int >::__new().Add(_g8).Add(_g9).Add(_g10);
		}
		else{
			HX_STACK_LINE(214)
			int _g11 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_buttonColour,(int)-32);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(214)
			int _g12 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_buttonColour,(int)32);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(214)
			buttonGradient = Array_obj< int >::__new().Add(this->_buttonColour).Add(_g11).Add(_g12);
		}
		HX_STACK_LINE(216)
		this->_button->get_graphics()->beginFill((int)11184810,null());
		HX_STACK_LINE(217)
		this->_button->get_graphics()->drawRoundRect((int)0,(int)0,((45.0 - (Float(this->_curve) / Float((int)4))) + (int)2),30.0,this->_curve,null());
		HX_STACK_LINE(218)
		this->_button->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,buttonGradient,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)128).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(219)
		this->_button->get_graphics()->drawRoundRect((int)1,(int)1,((43. - (Float(this->_curve) / Float((int)4))) + (int)2),28.,this->_curve,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISwitchX_obj,drawButton,(void))

Void UISwitchX_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISwitchX","mouseDown",0xd81702dd,"com.danielfreeman.extendedmadness.UISwitchX.mouseDown","com/danielfreeman/extendedmadness/UISwitchX.hx",223,0xd36ccadd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(224)
		Float _g = this->_button->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(224)
		this->_lastPosition = _g;
		HX_STACK_LINE(225)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null(),null(),null());
		HX_STACK_LINE(226)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(227)
		Float _g1 = this->get_mouseX();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(227)
		Float _g2 = this->_button->get_x();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(227)
		Float _g3 = (_g1 - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(227)
		this->_start = _g3;
		HX_STACK_LINE(228)
		this->_delta = (int)0;
		HX_STACK_LINE(229)
		this->drawButton(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISwitchX_obj,mouseDown,(void))

Void UISwitchX_obj::touchCancel( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISwitchX","touchCancel",0x41befdcf,"com.danielfreeman.extendedmadness.UISwitchX.touchCancel","com/danielfreeman/extendedmadness/UISwitchX.hx",233,0xd36ccadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(234)
		this->_button->set_x(this->_lastPosition);
		HX_STACK_LINE(235)
		this->drawButton(false);
		HX_STACK_LINE(236)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null());
		HX_STACK_LINE(237)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
	}
return null();
}


Void UISwitchX_obj::mouseMove( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISwitchX","mouseMove",0xde09ed8c,"com.danielfreeman.extendedmadness.UISwitchX.mouseMove","com/danielfreeman/extendedmadness/UISwitchX.hx",241,0xd36ccadd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(242)
		Float _g = this->get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(242)
		Float position = (_g - this->_start);		HX_STACK_VAR(position,"position");
		HX_STACK_LINE(243)
		if (((position < (int)0))){
			HX_STACK_LINE(244)
			position = (int)0;
		}
		else{
			HX_STACK_LINE(245)
			if (((position > (45. + this->_extra)))){
				HX_STACK_LINE(246)
				position = (45. + this->_extra);
			}
		}
		HX_STACK_LINE(247)
		Float _g1 = this->_button->get_x();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(247)
		Float _g2 = (_g1 - position);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(247)
		Float _g3 = ::Math_obj::abs(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(247)
		hx::AddEq(this->_delta,_g3);
		HX_STACK_LINE(248)
		this->_button->set_x(position);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISwitchX_obj,mouseMove,(void))

Void UISwitchX_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISwitchX","mouseUp",0x93984c16,"com.danielfreeman.extendedmadness.UISwitchX.mouseUp","com/danielfreeman/extendedmadness/UISwitchX.hx",252,0xd36ccadd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(253)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null());
		HX_STACK_LINE(254)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(255)
		this->drawButton(false);
		HX_STACK_LINE(256)
		if (((this->_delta < 10.0))){
			HX_STACK_LINE(257)
			if ((this->_state)){
				HX_STACK_LINE(257)
				this->_move = -10.;
			}
			else{
				HX_STACK_LINE(257)
				this->_move = 10.0;
			}
		}
		else{
			HX_STACK_LINE(259)
			Float _g = this->_button->get_x();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(259)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(259)
			if (((_g < (Float(((45. + this->_extra))) / Float((int)2))))){
				HX_STACK_LINE(259)
				_g1 = -10.;
			}
			else{
				HX_STACK_LINE(259)
				_g1 = 10.0;
			}
			HX_STACK_LINE(259)
			this->_move = _g1;
		}
		HX_STACK_LINE(260)
		Float _g2 = this->get_mouseX();		HX_STACK_VAR(_g2,"_g2");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UISwitchX_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UISwitchX.hx",260,0xd36ccadd)
				{
					HX_STACK_LINE(260)
					Float _g3 = __this->get_mouseX();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(260)
					return (_g3 < 90.0);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UISwitchX_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UISwitchX.hx",260,0xd36ccadd)
				{
					HX_STACK_LINE(260)
					Float _g4 = __this->get_mouseY();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(260)
					return (_g4 > (int)0);
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UISwitchX_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UISwitchX.hx",260,0xd36ccadd)
				{
					HX_STACK_LINE(260)
					Float _g5 = __this->get_mouseY();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(260)
					return (_g5 < 30.0);
				}
				return null();
			}
		};
		HX_STACK_LINE(260)
		if (((  ((!(((  (((  (((  (((_g2 > (int)0))) ? bool(_Function_1_1::Block(this)) : bool(false) ))) ? bool(_Function_1_2::Block(this)) : bool(false) ))) ? bool(_Function_1_3::Block(this)) : bool(false) ))))) ? bool((this->_delta > (int)0)) : bool(true) ))){
			HX_STACK_LINE(261)
			this->_timer->reset();
			HX_STACK_LINE(262)
			this->_timer->start();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISwitchX_obj,mouseUp,(void))

Void UISwitchX_obj::slide( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISwitchX","slide",0xf77783e7,"com.danielfreeman.extendedmadness.UISwitchX.slide","com/danielfreeman/extendedmadness/UISwitchX.hx",269,0xd36ccadd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(270)
		{
			HX_STACK_LINE(270)
			::openfl::display::Sprite _g = this->_button;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(270)
			Float _g1 = _g->get_x();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(270)
			Float _g11 = (_g1 + this->_move);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(270)
			_g->set_x(_g11);
		}
		HX_STACK_LINE(271)
		Float _g2 = this->_button->get_x();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(271)
		if (((_g2 <= (int)0))){
			HX_STACK_LINE(272)
			this->_button->set_x((int)0);
			HX_STACK_LINE(273)
			this->_state = false;
			HX_STACK_LINE(274)
			this->stop();
		}
		else{
			HX_STACK_LINE(276)
			Float _g3 = this->_button->get_x();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(276)
			if (((_g3 >= 45.))){
				HX_STACK_LINE(277)
				this->_button->set_x((45. + this->_extra));
				HX_STACK_LINE(278)
				this->_state = true;
				HX_STACK_LINE(279)
				this->stop();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISwitchX_obj,slide,(void))

Float UISwitchX_obj::get_theWidth( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISwitchX","get_theWidth",0xea0a63e8,"com.danielfreeman.extendedmadness.UISwitchX.get_theWidth","com/danielfreeman/extendedmadness/UISwitchX.hx",285,0xd36ccadd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(285)
	return 90.0;
}


Void UISwitchX_obj::stop( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISwitchX","stop",0xe594fa0c,"com.danielfreeman.extendedmadness.UISwitchX.stop","com/danielfreeman/extendedmadness/UISwitchX.hx",291,0xd36ccadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(292)
		this->_timer->stop();
		HX_STACK_LINE(293)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(293)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISwitchX_obj,stop,(void))

Void UISwitchX_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISwitchX","destructor",0x548508c3,"com.danielfreeman.extendedmadness.UISwitchX.destructor","com/danielfreeman/extendedmadness/UISwitchX.hx",297,0xd36ccadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(298)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null());
		HX_STACK_LINE(299)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null());
		HX_STACK_LINE(300)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(301)
		this->_timer->removeEventListener(::openfl::events::TimerEvent_obj::TIMER,this->slide_dyn(),null());
	}
return null();
}


int UISwitchX_obj::DELTA;

Float UISwitchX_obj::MOVE_X;

Float UISwitchX_obj::WIDTH;

Float UISwitchX_obj::HEIGHT;

Float UISwitchX_obj::BUTTON_WIDTH;

int UISwitchX_obj::BUTTON_COLOUR;

int UISwitchX_obj::OUTLINE;

int UISwitchX_obj::OFF_COLOUR;

Float UISwitchX_obj::CURVE;

Float UISwitchX_obj::ALT_CURVE;

Float UISwitchX_obj::THRESHOLD;

Float UISwitchX_obj::EXTRA;


UISwitchX_obj::UISwitchX_obj()
{
}

void UISwitchX_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UISwitchX);
	HX_MARK_MEMBER_NAME(_layer,"_layer");
	HX_MARK_MEMBER_NAME(_button,"_button");
	HX_MARK_MEMBER_NAME(_over,"_over");
	HX_MARK_MEMBER_NAME(_colour,"_colour");
	HX_MARK_MEMBER_NAME(_onLabel,"_onLabel");
	HX_MARK_MEMBER_NAME(_offLabel,"_offLabel");
	HX_MARK_MEMBER_NAME(_start,"_start");
	HX_MARK_MEMBER_NAME(_move,"_move");
	HX_MARK_MEMBER_NAME(_delta,"_delta");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_state,"_state");
	HX_MARK_MEMBER_NAME(_formatOn,"_formatOn");
	HX_MARK_MEMBER_NAME(_formatOff,"_formatOff");
	HX_MARK_MEMBER_NAME(_offColour,"_offColour");
	HX_MARK_MEMBER_NAME(_buttonColour,"_buttonColour");
	HX_MARK_MEMBER_NAME(_outlineColour,"_outlineColour");
	HX_MARK_MEMBER_NAME(_curve,"_curve");
	HX_MARK_MEMBER_NAME(_extra,"_extra");
	HX_MARK_MEMBER_NAME(_lastPosition,"_lastPosition");
	HX_MARK_MEMBER_NAME(_labels,"_labels");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UISwitchX_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_layer,"_layer");
	HX_VISIT_MEMBER_NAME(_button,"_button");
	HX_VISIT_MEMBER_NAME(_over,"_over");
	HX_VISIT_MEMBER_NAME(_colour,"_colour");
	HX_VISIT_MEMBER_NAME(_onLabel,"_onLabel");
	HX_VISIT_MEMBER_NAME(_offLabel,"_offLabel");
	HX_VISIT_MEMBER_NAME(_start,"_start");
	HX_VISIT_MEMBER_NAME(_move,"_move");
	HX_VISIT_MEMBER_NAME(_delta,"_delta");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_state,"_state");
	HX_VISIT_MEMBER_NAME(_formatOn,"_formatOn");
	HX_VISIT_MEMBER_NAME(_formatOff,"_formatOff");
	HX_VISIT_MEMBER_NAME(_offColour,"_offColour");
	HX_VISIT_MEMBER_NAME(_buttonColour,"_buttonColour");
	HX_VISIT_MEMBER_NAME(_outlineColour,"_outlineColour");
	HX_VISIT_MEMBER_NAME(_curve,"_curve");
	HX_VISIT_MEMBER_NAME(_extra,"_extra");
	HX_VISIT_MEMBER_NAME(_lastPosition,"_lastPosition");
	HX_VISIT_MEMBER_NAME(_labels,"_labels");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UISwitchX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return get_state(); }
		if (HX_FIELD_EQ(inName,"_over") ) { return _over; }
		if (HX_FIELD_EQ(inName,"_move") ) { return _move; }
		if (HX_FIELD_EQ(inName,"slide") ) { return slide_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_layer") ) { return _layer; }
		if (HX_FIELD_EQ(inName,"_start") ) { return _start; }
		if (HX_FIELD_EQ(inName,"_delta") ) { return _delta; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		if (HX_FIELD_EQ(inName,"_curve") ) { return _curve; }
		if (HX_FIELD_EQ(inName,"_extra") ) { return _extra; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { return _button; }
		if (HX_FIELD_EQ(inName,"_colour") ) { return _colour; }
		if (HX_FIELD_EQ(inName,"_labels") ) { return _labels; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_onLabel") ) { return _onLabel; }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_offLabel") ) { return _offLabel; }
		if (HX_FIELD_EQ(inName,"_formatOn") ) { return _formatOn; }
		if (HX_FIELD_EQ(inName,"set_state") ) { return set_state_dyn(); }
		if (HX_FIELD_EQ(inName,"get_state") ) { return get_state_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseMove") ) { return mouseMove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_formatOff") ) { return _formatOff; }
		if (HX_FIELD_EQ(inName,"_offColour") ) { return _offColour; }
		if (HX_FIELD_EQ(inName,"drawButton") ) { return drawButton_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"touchCancel") ) { return touchCancel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_theWidth") ) { return get_theWidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_buttonColour") ) { return _buttonColour; }
		if (HX_FIELD_EQ(inName,"_lastPosition") ) { return _lastPosition; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_outlineColour") ) { return _outlineColour; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"initialiseButton") ) { return initialiseButton_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UISwitchX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return set_state(inValue); }
		if (HX_FIELD_EQ(inName,"_over") ) { _over=inValue.Cast< ::openfl::display::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_move") ) { _move=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_layer") ) { _layer=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_start") ) { _start=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_delta") ) { _delta=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< ::openfl::utils::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curve") ) { _curve=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_extra") ) { _extra=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { _button=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colour") ) { _colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_labels") ) { _labels=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_onLabel") ) { _onLabel=inValue.Cast< ::com::danielfreeman::madcomponents::UILabel >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_offLabel") ) { _offLabel=inValue.Cast< ::com::danielfreeman::madcomponents::UILabel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_formatOn") ) { _formatOn=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_formatOff") ) { _formatOff=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_offColour") ) { _offColour=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_buttonColour") ) { _buttonColour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastPosition") ) { _lastPosition=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_outlineColour") ) { _outlineColour=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UISwitchX_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("_layer"));
	outFields->push(HX_CSTRING("_button"));
	outFields->push(HX_CSTRING("_over"));
	outFields->push(HX_CSTRING("_colour"));
	outFields->push(HX_CSTRING("_onLabel"));
	outFields->push(HX_CSTRING("_offLabel"));
	outFields->push(HX_CSTRING("_start"));
	outFields->push(HX_CSTRING("_move"));
	outFields->push(HX_CSTRING("_delta"));
	outFields->push(HX_CSTRING("_timer"));
	outFields->push(HX_CSTRING("_state"));
	outFields->push(HX_CSTRING("_formatOn"));
	outFields->push(HX_CSTRING("_formatOff"));
	outFields->push(HX_CSTRING("_offColour"));
	outFields->push(HX_CSTRING("_buttonColour"));
	outFields->push(HX_CSTRING("_outlineColour"));
	outFields->push(HX_CSTRING("_curve"));
	outFields->push(HX_CSTRING("_extra"));
	outFields->push(HX_CSTRING("_lastPosition"));
	outFields->push(HX_CSTRING("_labels"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DELTA"),
	HX_CSTRING("MOVE_X"),
	HX_CSTRING("WIDTH"),
	HX_CSTRING("HEIGHT"),
	HX_CSTRING("BUTTON_WIDTH"),
	HX_CSTRING("BUTTON_COLOUR"),
	HX_CSTRING("OUTLINE"),
	HX_CSTRING("OFF_COLOUR"),
	HX_CSTRING("CURVE"),
	HX_CSTRING("ALT_CURVE"),
	HX_CSTRING("THRESHOLD"),
	HX_CSTRING("EXTRA"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UISwitchX_obj,_layer),HX_CSTRING("_layer")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UISwitchX_obj,_button),HX_CSTRING("_button")},
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(UISwitchX_obj,_over),HX_CSTRING("_over")},
	{hx::fsInt,(int)offsetof(UISwitchX_obj,_colour),HX_CSTRING("_colour")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UILabel*/ ,(int)offsetof(UISwitchX_obj,_onLabel),HX_CSTRING("_onLabel")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UILabel*/ ,(int)offsetof(UISwitchX_obj,_offLabel),HX_CSTRING("_offLabel")},
	{hx::fsFloat,(int)offsetof(UISwitchX_obj,_start),HX_CSTRING("_start")},
	{hx::fsFloat,(int)offsetof(UISwitchX_obj,_move),HX_CSTRING("_move")},
	{hx::fsFloat,(int)offsetof(UISwitchX_obj,_delta),HX_CSTRING("_delta")},
	{hx::fsObject /*::openfl::utils::Timer*/ ,(int)offsetof(UISwitchX_obj,_timer),HX_CSTRING("_timer")},
	{hx::fsBool,(int)offsetof(UISwitchX_obj,_state),HX_CSTRING("_state")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UISwitchX_obj,_formatOn),HX_CSTRING("_formatOn")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UISwitchX_obj,_formatOff),HX_CSTRING("_formatOff")},
	{hx::fsInt,(int)offsetof(UISwitchX_obj,_offColour),HX_CSTRING("_offColour")},
	{hx::fsInt,(int)offsetof(UISwitchX_obj,_buttonColour),HX_CSTRING("_buttonColour")},
	{hx::fsInt,(int)offsetof(UISwitchX_obj,_outlineColour),HX_CSTRING("_outlineColour")},
	{hx::fsFloat,(int)offsetof(UISwitchX_obj,_curve),HX_CSTRING("_curve")},
	{hx::fsFloat,(int)offsetof(UISwitchX_obj,_extra),HX_CSTRING("_extra")},
	{hx::fsFloat,(int)offsetof(UISwitchX_obj,_lastPosition),HX_CSTRING("_lastPosition")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UISwitchX_obj,_labels),HX_CSTRING("_labels")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_layer"),
	HX_CSTRING("_button"),
	HX_CSTRING("_over"),
	HX_CSTRING("_colour"),
	HX_CSTRING("_onLabel"),
	HX_CSTRING("_offLabel"),
	HX_CSTRING("_start"),
	HX_CSTRING("_move"),
	HX_CSTRING("_delta"),
	HX_CSTRING("_timer"),
	HX_CSTRING("_state"),
	HX_CSTRING("_formatOn"),
	HX_CSTRING("_formatOff"),
	HX_CSTRING("_offColour"),
	HX_CSTRING("_buttonColour"),
	HX_CSTRING("_outlineColour"),
	HX_CSTRING("_curve"),
	HX_CSTRING("_extra"),
	HX_CSTRING("_lastPosition"),
	HX_CSTRING("_labels"),
	HX_CSTRING("set_state"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_text"),
	HX_CSTRING("get_state"),
	HX_CSTRING("initialiseButton"),
	HX_CSTRING("drawButton"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("touchCancel"),
	HX_CSTRING("mouseMove"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("slide"),
	HX_CSTRING("get_theWidth"),
	HX_CSTRING("stop"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UISwitchX_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UISwitchX_obj::DELTA,"DELTA");
	HX_MARK_MEMBER_NAME(UISwitchX_obj::MOVE_X,"MOVE_X");
	HX_MARK_MEMBER_NAME(UISwitchX_obj::WIDTH,"WIDTH");
	HX_MARK_MEMBER_NAME(UISwitchX_obj::HEIGHT,"HEIGHT");
	HX_MARK_MEMBER_NAME(UISwitchX_obj::BUTTON_WIDTH,"BUTTON_WIDTH");
	HX_MARK_MEMBER_NAME(UISwitchX_obj::BUTTON_COLOUR,"BUTTON_COLOUR");
	HX_MARK_MEMBER_NAME(UISwitchX_obj::OUTLINE,"OUTLINE");
	HX_MARK_MEMBER_NAME(UISwitchX_obj::OFF_COLOUR,"OFF_COLOUR");
	HX_MARK_MEMBER_NAME(UISwitchX_obj::CURVE,"CURVE");
	HX_MARK_MEMBER_NAME(UISwitchX_obj::ALT_CURVE,"ALT_CURVE");
	HX_MARK_MEMBER_NAME(UISwitchX_obj::THRESHOLD,"THRESHOLD");
	HX_MARK_MEMBER_NAME(UISwitchX_obj::EXTRA,"EXTRA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UISwitchX_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UISwitchX_obj::DELTA,"DELTA");
	HX_VISIT_MEMBER_NAME(UISwitchX_obj::MOVE_X,"MOVE_X");
	HX_VISIT_MEMBER_NAME(UISwitchX_obj::WIDTH,"WIDTH");
	HX_VISIT_MEMBER_NAME(UISwitchX_obj::HEIGHT,"HEIGHT");
	HX_VISIT_MEMBER_NAME(UISwitchX_obj::BUTTON_WIDTH,"BUTTON_WIDTH");
	HX_VISIT_MEMBER_NAME(UISwitchX_obj::BUTTON_COLOUR,"BUTTON_COLOUR");
	HX_VISIT_MEMBER_NAME(UISwitchX_obj::OUTLINE,"OUTLINE");
	HX_VISIT_MEMBER_NAME(UISwitchX_obj::OFF_COLOUR,"OFF_COLOUR");
	HX_VISIT_MEMBER_NAME(UISwitchX_obj::CURVE,"CURVE");
	HX_VISIT_MEMBER_NAME(UISwitchX_obj::ALT_CURVE,"ALT_CURVE");
	HX_VISIT_MEMBER_NAME(UISwitchX_obj::THRESHOLD,"THRESHOLD");
	HX_VISIT_MEMBER_NAME(UISwitchX_obj::EXTRA,"EXTRA");
};

#endif

Class UISwitchX_obj::__mClass;

void UISwitchX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UISwitchX"), hx::TCanCast< UISwitchX_obj> ,sStaticFields,sMemberFields,
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

void UISwitchX_obj::__boot()
{
	DELTA= (int)40;
	MOVE_X= 10.0;
	WIDTH= 90.0;
	HEIGHT= 30.0;
	BUTTON_WIDTH= 45.0;
	BUTTON_COLOUR= (int)16382457;
	OUTLINE= (int)11184810;
	OFF_COLOUR= (int)3355443;
	CURVE= 8.0;
	ALT_CURVE= 32.0;
	THRESHOLD= 10.0;
	EXTRA= 30.0;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
