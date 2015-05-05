#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_danielfreeman_MadXML
#include <com/danielfreeman/MadXML.h>
#endif
#ifndef INCLUDED_com_danielfreeman__MadXML_AttribAccess
#include <com/danielfreeman/_MadXML/AttribAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman__MadXML_HasAttribAccess
#include <com/danielfreeman/_MadXML/HasAttribAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UICheckBox
#include <com/danielfreeman/extendedmadness/UICheckBox.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UITick
#include <com/danielfreeman/extendedmadness/UITick.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void UICheckBox_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICheckBox","new",0x7703d9d5,"com.danielfreeman.extendedmadness.UICheckBox.new","com/danielfreeman/extendedmadness/UICheckBox.hx",49,0x4b72d598)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(72)
	this->_ready = false;
	HX_STACK_LINE(70)
	this->_alt = false;
	HX_STACK_LINE(68)
	this->_onColour = (int)16775577;
	HX_STACK_LINE(67)
	this->_state = false;
	HX_STACK_LINE(65)
	this->_colour = (int)16579836;
	HX_STACK_LINE(77)
	super::__construct(screen,attributes);
	HX_STACK_LINE(78)
	bool _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(78)
	if ((xml->has->resolve(HX_CSTRING("alt")))){
		HX_STACK_LINE(78)
		::String _g = xml->att->resolve(HX_CSTRING("alt"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		_g1 = (_g != HX_CSTRING("false"));
	}
	else{
		HX_STACK_LINE(78)
		_g1 = false;
	}
	HX_STACK_LINE(78)
	this->_alt = _g1;
	HX_STACK_LINE(79)
	int _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(79)
	if (((attributes->get_backgroundColours()->length > (int)0))){
		HX_STACK_LINE(79)
		Array< int > _g2 = attributes->get_backgroundColours();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(79)
		_g3 = _g2->__get((int)0);
	}
	else{
		HX_STACK_LINE(79)
		_g3 = (int)16579836;
	}
	HX_STACK_LINE(79)
	this->_colour = _g3;
	HX_STACK_LINE(80)
	int _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(80)
	if (((attributes->get_backgroundColours()->length > (int)1))){
		HX_STACK_LINE(80)
		Array< int > _g4 = attributes->get_backgroundColours();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(80)
		_g5 = _g4->__get((int)1);
	}
	else{
		HX_STACK_LINE(80)
		_g5 = (int)16775577;
	}
	HX_STACK_LINE(80)
	this->_onColour = _g5;
	HX_STACK_LINE(81)
	int _g6 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,(int)-90);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(81)
	this->_offColour = _g6;
	HX_STACK_LINE(83)
	this->buttonChrome();
	HX_STACK_LINE(84)
	this->makeTick();
	HX_STACK_LINE(85)
	bool _g8;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(85)
	if ((xml->has->resolve(HX_CSTRING("state")))){
		HX_STACK_LINE(85)
		::String _g7 = xml->att->resolve(HX_CSTRING("state"));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(85)
		_g8 = (_g7 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(85)
		_g8 = false;
	}
	HX_STACK_LINE(85)
	this->set_state(_g8);
	HX_STACK_LINE(86)
	bool _g9 = this->set_mouseEnabled(true);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(86)
	this->buttonMode = _g9;
	HX_STACK_LINE(87)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null(),null(),null());
	HX_STACK_LINE(88)
	::String _g10 = ::Std_obj::string(xml);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(88)
	::com::danielfreeman::madcomponents::UILabel _g11 = ::com::danielfreeman::madcomponents::UILabel_obj::__new(hx::ObjectPtr<OBJ_>(this),(  ((this->_alt)) ? Float(22.) : Float(36.) ),(int)0,_g10,null());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(88)
	this->_label = _g11;
	HX_STACK_LINE(89)
	this->assignToLabel(xml,this->_label);
}
;
	return null();
}

//UICheckBox_obj::~UICheckBox_obj() { }

Dynamic UICheckBox_obj::__CreateEmpty() { return  new UICheckBox_obj; }
hx::ObjectPtr< UICheckBox_obj > UICheckBox_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UICheckBox_obj > result = new UICheckBox_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UICheckBox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UICheckBox_obj > result = new UICheckBox_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UICheckBox_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

Void UICheckBox_obj::assignToLabel( ::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::UILabel label){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICheckBox","assignToLabel",0x9fd23dbf,"com.danielfreeman.extendedmadness.UICheckBox.assignToLabel","com/danielfreeman/extendedmadness/UICheckBox.hx",93,0x4b72d598)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_ARG(label,"label")
		HX_STACK_LINE(94)
		if ((xml->get_hasChildren())){
			HX_STACK_LINE(95)
			::String xmlString = xml->toXMLString();		HX_STACK_VAR(xmlString,"xmlString");
			HX_STACK_LINE(96)
			int _g = xmlString.indexOf(HX_CSTRING(">"),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(96)
			int _g1 = (_g + (int)1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(96)
			int _g2 = xmlString.lastIndexOf(HX_CSTRING("<"),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(96)
			::String htmlText = xmlString.substring(_g1,_g2);		HX_STACK_VAR(htmlText,"htmlText");
			HX_STACK_LINE(98)
			label->set_htmlText(htmlText);
			HX_STACK_LINE(99)
			::String _g3 = label->get_text();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(99)
			if (((_g3 == HX_CSTRING("")))){
				HX_STACK_LINE(100)
				label->set_text(HX_CSTRING(" "));
			}
		}
		HX_STACK_LINE(103)
		Float _g4 = label->get_height();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(103)
		Float _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(103)
		_g5 = (((  ((this->_alt)) ? Float(18.0) : Float(26.0) )) - _g4);
		HX_STACK_LINE(103)
		Float _g6 = (Float(_g5) / Float((int)2));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(103)
		Float _g7 = ::Math_obj::max(_g6,(int)0);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(103)
		label->set_y(_g7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UICheckBox_obj,assignToLabel,(void))

::com::danielfreeman::madcomponents::UILabel UICheckBox_obj::get_label( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICheckBox","get_label",0x90847980,"com.danielfreeman.extendedmadness.UICheckBox.get_label","com/danielfreeman/extendedmadness/UICheckBox.hx",110,0x4b72d598)
	HX_STACK_THIS(this)
	HX_STACK_LINE(110)
	return this->_label;
}


HX_DEFINE_DYNAMIC_FUNC0(UICheckBox_obj,get_label,return )

::String UICheckBox_obj::set_text( ::String value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICheckBox","set_text",0xc4627015,"com.danielfreeman.extendedmadness.UICheckBox.set_text","com/danielfreeman/extendedmadness/UICheckBox.hx",116,0x4b72d598)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(117)
	this->_label->set_text(value);
	HX_STACK_LINE(118)
	Float _g = this->get_label()->get_height();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(118)
	Float _g1 = (26.0 - _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(118)
	Float _g2 = (Float(_g1) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(118)
	Float _g3 = ::Math_obj::max(_g2,(int)0);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(118)
	this->get_label()->set_y(_g3);
	HX_STACK_LINE(119)
	return value;
}


::String UICheckBox_obj::set_htmlText( ::String value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICheckBox","set_htmlText",0x8dda9720,"com.danielfreeman.extendedmadness.UICheckBox.set_htmlText","com/danielfreeman/extendedmadness/UICheckBox.hx",125,0x4b72d598)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(126)
	this->_label->set_htmlText(value);
	HX_STACK_LINE(127)
	Float _g = this->get_label()->get_height();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(127)
	Float _g1 = (26.0 - _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(127)
	Float _g2 = (Float(_g1) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(127)
	Float _g3 = ::Math_obj::max(_g2,(int)0);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(127)
	this->get_label()->set_y(_g3);
	HX_STACK_LINE(128)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UICheckBox_obj,set_htmlText,return )

Void UICheckBox_obj::makeTick( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICheckBox","makeTick",0x8ceb46d6,"com.danielfreeman.extendedmadness.UICheckBox.makeTick","com/danielfreeman/extendedmadness/UICheckBox.hx",132,0x4b72d598)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		int _g = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,(int)-128);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(133)
		::com::danielfreeman::extendedmadness::UITick shadow = ::com::danielfreeman::extendedmadness::UITick_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)3,(int)2,_g,true);		HX_STACK_VAR(shadow,"shadow");
		HX_STACK_LINE(134)
		::com::danielfreeman::extendedmadness::UITick _g1 = ::com::danielfreeman::extendedmadness::UITick_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)4,(int)2,this->_offColour,true);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(134)
		this->_tick = _g1;
		HX_STACK_LINE(135)
		if ((this->_alt)){
			HX_STACK_LINE(136)
			Float _g2 = shadow->set_scaleY(0.692307692307692291);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(136)
			Float _g3 = shadow->set_scaleX(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(136)
			Float _g4 = this->_tick->set_scaleY(_g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(136)
			this->_tick->set_scaleX(_g4);
			HX_STACK_LINE(137)
			this->_tick->set_x(2.5);
			HX_STACK_LINE(137)
			shadow->set_x(2.0);
			HX_STACK_LINE(138)
			Float _g5 = shadow->set_y(1.0);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(138)
			this->_tick->set_y(_g5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UICheckBox_obj,makeTick,(void))

Void UICheckBox_obj::buttonChrome( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICheckBox","buttonChrome",0x1dfd70f7,"com.danielfreeman.extendedmadness.UICheckBox.buttonChrome","com/danielfreeman/extendedmadness/UICheckBox.hx",143,0x4b72d598)
		HX_STACK_THIS(this)
		HX_STACK_LINE(144)
		::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(145)
		int _g = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_colour,(int)80);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(145)
		int _g1 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(145)
		int _g2 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(145)
		Array< int > gradient = Array_obj< int >::__new().Add(_g).Add(_g1).Add(_g2);		HX_STACK_VAR(gradient,"gradient");
		HX_STACK_LINE(146)
		Float size;		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(146)
		if ((this->_alt)){
			HX_STACK_LINE(146)
			size = 18.0;
		}
		else{
			HX_STACK_LINE(146)
			size = 26.0;
		}
		HX_STACK_LINE(148)
		matr->createGradientBox(size,size,(Float(::Math_obj::PI) / Float((int)2)),(int)0,(int)0);
		HX_STACK_LINE(149)
		this->get_graphics()->clear();
		HX_STACK_LINE(150)
		this->get_graphics()->beginFill((int)0,(int)0);
		HX_STACK_LINE(151)
		this->get_graphics()->drawRect((int)0,(int)0,(size + 10.0),size);
		HX_STACK_LINE(152)
		int _g3 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,(int)-80);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(152)
		this->get_graphics()->beginFill(_g3,null());
		HX_STACK_LINE(153)
		this->get_graphics()->drawRoundRect((int)0,(int)0,size,size,6.0,null());
		HX_STACK_LINE(154)
		this->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,gradient,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)128).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(155)
		this->get_graphics()->drawRoundRect((int)1,(int)1,(size - (int)2),(size - (int)2),6.0,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UICheckBox_obj,buttonChrome,(void))

Void UICheckBox_obj::redraw( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICheckBox","redraw",0x162972e2,"com.danielfreeman.extendedmadness.UICheckBox.redraw","com/danielfreeman/extendedmadness/UICheckBox.hx",160,0x4b72d598)
		HX_STACK_THIS(this)
		HX_STACK_LINE(160)
		this->_tick->set_colour((  ((this->_state)) ? int(this->_onColour) : int(this->_offColour) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UICheckBox_obj,redraw,(void))

Void UICheckBox_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICheckBox","mouseDown",0xcbeec05c,"com.danielfreeman.extendedmadness.UICheckBox.mouseDown","com/danielfreeman/extendedmadness/UICheckBox.hx",164,0x4b72d598)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(165)
		this->_ready = true;
		HX_STACK_LINE(166)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UICheckBox_obj,mouseDown,(void))

Void UICheckBox_obj::touchCancel( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICheckBox","touchCancel",0xa920590e,"com.danielfreeman.extendedmadness.UICheckBox.touchCancel","com/danielfreeman/extendedmadness/UICheckBox.hx",170,0x4b72d598)
		HX_STACK_THIS(this)
		HX_STACK_LINE(171)
		this->_ready = false;
		HX_STACK_LINE(172)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
	}
return null();
}


Void UICheckBox_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICheckBox","mouseUp",0x483d5bd5,"com.danielfreeman.extendedmadness.UICheckBox.mouseUp","com/danielfreeman/extendedmadness/UICheckBox.hx",176,0x4b72d598)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(177)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UICheckBox_obj > __this,::openfl::events::MouseEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UICheckBox.hx",178,0x4b72d598)
				{
					HX_STACK_LINE(178)
					Dynamic _g = event->get_target();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(178)
					return (_g == __this);
				}
				return null();
			}
		};
		HX_STACK_LINE(178)
		if (((  ((this->_ready)) ? bool(_Function_1_1::Block(this,event)) : bool(false) ))){
			HX_STACK_LINE(179)
			this->_state = !(this->_state);
			HX_STACK_LINE(180)
			this->redraw();
			HX_STACK_LINE(181)
			::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(181)
			this->dispatchEvent(_g1);
		}
		HX_STACK_LINE(183)
		this->_ready = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UICheckBox_obj,mouseUp,(void))

bool UICheckBox_obj::set_state( bool value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICheckBox","set_state",0x8831cda9,"com.danielfreeman.extendedmadness.UICheckBox.set_state","com/danielfreeman/extendedmadness/UICheckBox.hx",189,0x4b72d598)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(190)
	this->_state = value;
	HX_STACK_LINE(191)
	this->redraw();
	HX_STACK_LINE(192)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UICheckBox_obj,set_state,return )

bool UICheckBox_obj::get_state( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICheckBox","get_state",0xa4e0e19d,"com.danielfreeman.extendedmadness.UICheckBox.get_state","com/danielfreeman/extendedmadness/UICheckBox.hx",199,0x4b72d598)
	HX_STACK_THIS(this)
	HX_STACK_LINE(199)
	return this->_state;
}


HX_DEFINE_DYNAMIC_FUNC0(UICheckBox_obj,get_state,return )

Void UICheckBox_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICheckBox","destructor",0xbd731a64,"com.danielfreeman.extendedmadness.UICheckBox.destructor","com/danielfreeman/extendedmadness/UICheckBox.hx",203,0x4b72d598)
		HX_STACK_THIS(this)
		HX_STACK_LINE(204)
		this->super::destructor();
		HX_STACK_LINE(205)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
	}
return null();
}


Float UICheckBox_obj::SIZE;

Float UICheckBox_obj::ALT_SIZE;

Float UICheckBox_obj::CURVE;

Float UICheckBox_obj::ON;

int UICheckBox_obj::ON_COLOUR;

int UICheckBox_obj::COLOUR;

Float UICheckBox_obj::GAP;

Float UICheckBox_obj::SMALL_GAP;


UICheckBox_obj::UICheckBox_obj()
{
}

void UICheckBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UICheckBox);
	HX_MARK_MEMBER_NAME(_colour,"_colour");
	HX_MARK_MEMBER_NAME(_tick,"_tick");
	HX_MARK_MEMBER_NAME(_state,"_state");
	HX_MARK_MEMBER_NAME(_onColour,"_onColour");
	HX_MARK_MEMBER_NAME(_offColour,"_offColour");
	HX_MARK_MEMBER_NAME(_alt,"_alt");
	HX_MARK_MEMBER_NAME(_label,"_label");
	HX_MARK_MEMBER_NAME(_ready,"_ready");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UICheckBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_colour,"_colour");
	HX_VISIT_MEMBER_NAME(_tick,"_tick");
	HX_VISIT_MEMBER_NAME(_state,"_state");
	HX_VISIT_MEMBER_NAME(_onColour,"_onColour");
	HX_VISIT_MEMBER_NAME(_offColour,"_offColour");
	HX_VISIT_MEMBER_NAME(_alt,"_alt");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	HX_VISIT_MEMBER_NAME(_ready,"_ready");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UICheckBox_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_alt") ) { return _alt; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return get_label(); }
		if (HX_FIELD_EQ(inName,"state") ) { return get_state(); }
		if (HX_FIELD_EQ(inName,"_tick") ) { return _tick; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		if (HX_FIELD_EQ(inName,"_label") ) { return _label; }
		if (HX_FIELD_EQ(inName,"_ready") ) { return _ready; }
		if (HX_FIELD_EQ(inName,"redraw") ) { return redraw_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_colour") ) { return _colour; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"makeTick") ) { return makeTick_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_onColour") ) { return _onColour; }
		if (HX_FIELD_EQ(inName,"get_label") ) { return get_label_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"set_state") ) { return set_state_dyn(); }
		if (HX_FIELD_EQ(inName,"get_state") ) { return get_state_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_offColour") ) { return _offColour; }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"touchCancel") ) { return touchCancel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return set_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"buttonChrome") ) { return buttonChrome_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"assignToLabel") ) { return assignToLabel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UICheckBox_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_alt") ) { _alt=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return set_state(inValue); }
		if (HX_FIELD_EQ(inName,"_tick") ) { _tick=inValue.Cast< ::com::danielfreeman::extendedmadness::UITick >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::com::danielfreeman::madcomponents::UILabel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ready") ) { _ready=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_colour") ) { _colour=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"htmlText") ) { return set_htmlText(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_onColour") ) { _onColour=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_offColour") ) { _offColour=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UICheckBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("label"));
	outFields->push(HX_CSTRING("htmlText"));
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("_colour"));
	outFields->push(HX_CSTRING("_tick"));
	outFields->push(HX_CSTRING("_state"));
	outFields->push(HX_CSTRING("_onColour"));
	outFields->push(HX_CSTRING("_offColour"));
	outFields->push(HX_CSTRING("_alt"));
	outFields->push(HX_CSTRING("_label"));
	outFields->push(HX_CSTRING("_ready"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SIZE"),
	HX_CSTRING("ALT_SIZE"),
	HX_CSTRING("CURVE"),
	HX_CSTRING("ON"),
	HX_CSTRING("ON_COLOUR"),
	HX_CSTRING("COLOUR"),
	HX_CSTRING("GAP"),
	HX_CSTRING("SMALL_GAP"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(UICheckBox_obj,_colour),HX_CSTRING("_colour")},
	{hx::fsObject /*::com::danielfreeman::extendedmadness::UITick*/ ,(int)offsetof(UICheckBox_obj,_tick),HX_CSTRING("_tick")},
	{hx::fsBool,(int)offsetof(UICheckBox_obj,_state),HX_CSTRING("_state")},
	{hx::fsInt,(int)offsetof(UICheckBox_obj,_onColour),HX_CSTRING("_onColour")},
	{hx::fsInt,(int)offsetof(UICheckBox_obj,_offColour),HX_CSTRING("_offColour")},
	{hx::fsBool,(int)offsetof(UICheckBox_obj,_alt),HX_CSTRING("_alt")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UILabel*/ ,(int)offsetof(UICheckBox_obj,_label),HX_CSTRING("_label")},
	{hx::fsBool,(int)offsetof(UICheckBox_obj,_ready),HX_CSTRING("_ready")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_colour"),
	HX_CSTRING("_tick"),
	HX_CSTRING("_state"),
	HX_CSTRING("_onColour"),
	HX_CSTRING("_offColour"),
	HX_CSTRING("_alt"),
	HX_CSTRING("_label"),
	HX_CSTRING("_ready"),
	HX_CSTRING("assignToLabel"),
	HX_CSTRING("get_label"),
	HX_CSTRING("set_text"),
	HX_CSTRING("set_htmlText"),
	HX_CSTRING("makeTick"),
	HX_CSTRING("buttonChrome"),
	HX_CSTRING("redraw"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("touchCancel"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("set_state"),
	HX_CSTRING("get_state"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UICheckBox_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UICheckBox_obj::SIZE,"SIZE");
	HX_MARK_MEMBER_NAME(UICheckBox_obj::ALT_SIZE,"ALT_SIZE");
	HX_MARK_MEMBER_NAME(UICheckBox_obj::CURVE,"CURVE");
	HX_MARK_MEMBER_NAME(UICheckBox_obj::ON,"ON");
	HX_MARK_MEMBER_NAME(UICheckBox_obj::ON_COLOUR,"ON_COLOUR");
	HX_MARK_MEMBER_NAME(UICheckBox_obj::COLOUR,"COLOUR");
	HX_MARK_MEMBER_NAME(UICheckBox_obj::GAP,"GAP");
	HX_MARK_MEMBER_NAME(UICheckBox_obj::SMALL_GAP,"SMALL_GAP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UICheckBox_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UICheckBox_obj::SIZE,"SIZE");
	HX_VISIT_MEMBER_NAME(UICheckBox_obj::ALT_SIZE,"ALT_SIZE");
	HX_VISIT_MEMBER_NAME(UICheckBox_obj::CURVE,"CURVE");
	HX_VISIT_MEMBER_NAME(UICheckBox_obj::ON,"ON");
	HX_VISIT_MEMBER_NAME(UICheckBox_obj::ON_COLOUR,"ON_COLOUR");
	HX_VISIT_MEMBER_NAME(UICheckBox_obj::COLOUR,"COLOUR");
	HX_VISIT_MEMBER_NAME(UICheckBox_obj::GAP,"GAP");
	HX_VISIT_MEMBER_NAME(UICheckBox_obj::SMALL_GAP,"SMALL_GAP");
};

#endif

Class UICheckBox_obj::__mClass;

void UICheckBox_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UICheckBox"), hx::TCanCast< UICheckBox_obj> ,sStaticFields,sMemberFields,
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

void UICheckBox_obj::__boot()
{
	SIZE= 26.0;
	ALT_SIZE= 18.0;
	CURVE= 6.0;
	ON= 6.0;
	ON_COLOUR= (int)16775577;
	COLOUR= (int)16579836;
	GAP= 10.0;
	SMALL_GAP= 4.0;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
