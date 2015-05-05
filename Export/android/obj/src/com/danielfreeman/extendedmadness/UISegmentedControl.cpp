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
#ifndef INCLUDED__MadXML_HasNodeAccess
#include <_MadXML/HasNodeAccess.h>
#endif
#ifndef INCLUDED__MadXML_NodeAccess
#include <_MadXML/NodeAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UICutCopyPaste
#include <com/danielfreeman/extendedmadness/UICutCopyPaste.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UISegmentedControl
#include <com/danielfreeman/extendedmadness/UISegmentedControl.h>
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
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void UISegmentedControl_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISegmentedControl","new",0x71052a5d,"com.danielfreeman.extendedmadness.UISegmentedControl.new","com/danielfreeman/extendedmadness/UISegmentedControl.hx",70,0xaec81310)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(71)
	this->_xml = xml;
	HX_STACK_LINE(72)
	this->_attributes = attributes;
	HX_STACK_LINE(73)
	int _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(73)
	if ((attributes->get_style7())){
		HX_STACK_LINE(73)
		_g = ::com::danielfreeman::extendedmadness::UISegmentedControl_obj::TEXT_COLOUR7;
	}
	else{
		HX_STACK_LINE(73)
		_g = (int)6710886;
	}
	HX_STACK_LINE(73)
	this->_textColour = _g;
	HX_STACK_LINE(74)
	if ((xml->has->resolve(HX_CSTRING("pressedColour")))){
		HX_STACK_LINE(75)
		::String _g1 = xml->att->resolve(HX_CSTRING("pressedColour"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(75)
		int _g2 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(75)
		this->_textColour = _g2;
	}
	HX_STACK_LINE(77)
	if ((xml->hasNode->resolve(HX_CSTRING("font")))){
		HX_STACK_LINE(78)
		::MadXML _g3 = xml->node->resolve(HX_CSTRING("font"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(78)
		this->_font = _g3;
	}
	HX_STACK_LINE(80)
	int colour;		HX_STACK_VAR(colour,"colour");
	HX_STACK_LINE(80)
	if (((attributes->get_backgroundColours()->length > (int)0))){
		HX_STACK_LINE(80)
		Array< int > _g4 = attributes->get_backgroundColours();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(80)
		colour = _g4->__get((int)0);
	}
	else{
		HX_STACK_LINE(80)
		if ((attributes->get_style7())){
			HX_STACK_LINE(80)
			colour = (int)16777215;
		}
		else{
			HX_STACK_LINE(80)
			colour = (int)15132390;
		}
	}
	HX_STACK_LINE(81)
	bool _g5 = attributes->get_style7();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(81)
	bool _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(81)
	if ((xml->has->resolve(HX_CSTRING("alt")))){
		HX_STACK_LINE(81)
		::String _g6 = xml->att->resolve(HX_CSTRING("alt"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(81)
		_g7 = (_g6 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(81)
		_g7 = false;
	}
	HX_STACK_LINE(81)
	bool _g8 = (_g5 != _g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(81)
	bool _g9 = attributes->get_style7();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(81)
	super::__construct(screen,(int)0,(int)0,(int)0,colour,_g8,null(),_g9);
	HX_STACK_LINE(83)
	this->colourButtons();
	HX_STACK_LINE(84)
	if ((attributes->get_fillH())){
		HX_STACK_LINE(85)
		Float _g10 = attributes->get_widthH();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(85)
		this->set_fixwidth(_g10);
	}
	HX_STACK_LINE(87)
	this->set_index((int)0);
}
;
	return null();
}

//UISegmentedControl_obj::~UISegmentedControl_obj() { }

Dynamic UISegmentedControl_obj::__CreateEmpty() { return  new UISegmentedControl_obj; }
hx::ObjectPtr< UISegmentedControl_obj > UISegmentedControl_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UISegmentedControl_obj > result = new UISegmentedControl_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UISegmentedControl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UISegmentedControl_obj > result = new UISegmentedControl_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UISegmentedControl_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

Float UISegmentedControl_obj::set_fixwidth( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISegmentedControl","set_fixwidth",0xc62405f1,"com.danielfreeman.extendedmadness.UISegmentedControl.set_fixwidth","com/danielfreeman/extendedmadness/UISegmentedControl.hx",93,0xaec81310)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(94)
	Float textWidth = (int)0;		HX_STACK_VAR(textWidth,"textWidth");
	HX_STACK_LINE(95)
	{
		HX_STACK_LINE(95)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(95)
		Array< ::Dynamic > _g1 = this->_labels;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(95)
		while((true)){
			HX_STACK_LINE(95)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(95)
				break;
			}
			HX_STACK_LINE(95)
			::com::danielfreeman::madcomponents::UILabel label0 = _g1->__get(_g).StaticCast< ::com::danielfreeman::madcomponents::UILabel >();		HX_STACK_VAR(label0,"label0");
			HX_STACK_LINE(95)
			++(_g);
			HX_STACK_LINE(96)
			Float _g2 = label0->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(96)
			hx::AddEq(textWidth,_g2);
		}
	}
	HX_STACK_LINE(97)
	this->_gap = (Float(((value - textWidth))) / Float((((int)2 * this->_labels->length))));
	HX_STACK_LINE(98)
	Float left = this->_gap;		HX_STACK_VAR(left,"left");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		Array< ::Dynamic > _g1 = this->_labels;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(99)
		while((true)){
			HX_STACK_LINE(99)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(99)
				break;
			}
			HX_STACK_LINE(99)
			::com::danielfreeman::madcomponents::UILabel label1 = _g1->__get(_g).StaticCast< ::com::danielfreeman::madcomponents::UILabel >();		HX_STACK_VAR(label1,"label1");
			HX_STACK_LINE(99)
			++(_g);
			HX_STACK_LINE(100)
			label1->set_x(left);
			HX_STACK_LINE(101)
			Float _g11 = label1->get_width();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(101)
			Float _g2 = (_g11 + ((int)2 * this->_gap));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(101)
			hx::AddEq(left,_g2);
		}
	}
	HX_STACK_LINE(103)
	this->buttonChrome(value,null());
	HX_STACK_LINE(104)
	this->showPressed();
	HX_STACK_LINE(105)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UISegmentedControl_obj,set_fixwidth,return )

Void UISegmentedControl_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISegmentedControl","layout",0x27dff0cd,"com.danielfreeman.extendedmadness.UISegmentedControl.layout","com/danielfreeman/extendedmadness/UISegmentedControl.hx",109,0xaec81310)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(110)
		this->super::layout(attributes);
		HX_STACK_LINE(111)
		if ((attributes->get_fillH())){
			HX_STACK_LINE(112)
			Float _g = attributes->get_widthH();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(112)
			this->set_fixwidth(_g);
		}
		HX_STACK_LINE(114)
		if ((attributes->get_fillV())){
			HX_STACK_LINE(115)
			Float _g1 = attributes->get_heightV();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(115)
			this->_height = _g1;
		}
	}
return null();
}


Void UISegmentedControl_obj::initialise( Array< ::String > words){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISegmentedControl","initialise",0x74b1bada,"com.danielfreeman.extendedmadness.UISegmentedControl.initialise","com/danielfreeman/extendedmadness/UISegmentedControl.hx",120,0xaec81310)
		HX_STACK_THIS(this)
		HX_STACK_ARG(words,"words")
		HX_STACK_LINE(121)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(121)
		if ((this->_attributes->get_style7())){
			HX_STACK_LINE(121)
			_g = ::com::danielfreeman::extendedmadness::UISegmentedControl_obj::TEXT_COLOUR7;
		}
		else{
			HX_STACK_LINE(121)
			_g = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,(int)-32);
		}
		HX_STACK_LINE(121)
		this->_lineColour = _g;
		HX_STACK_LINE(122)
		if ((this->_xml->has->resolve(HX_CSTRING("lineColour")))){
			HX_STACK_LINE(123)
			::String _g1 = this->_xml->att->resolve(HX_CSTRING("lineColour"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(123)
			int _g2 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(123)
			this->_lineColour = _g2;
		}
		HX_STACK_LINE(125)
		Float _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(125)
		if ((this->_attributes->get_style7())){
			HX_STACK_LINE(125)
			_g4 = 4.0;
		}
		else{
			HX_STACK_LINE(125)
			if (((this->_attributes->get_backgroundColours()->length > (int)2))){
				HX_STACK_LINE(125)
				Array< int > _g3 = this->_attributes->get_backgroundColours();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(125)
				_g4 = _g3->__get((int)2);
			}
			else{
				HX_STACK_LINE(125)
				_g4 = 12.0;
			}
		}
		HX_STACK_LINE(125)
		this->_curve = _g4;
		HX_STACK_LINE(126)
		int _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(126)
		if (((this->_attributes->get_backgroundColours()->length > (int)1))){
			HX_STACK_LINE(126)
			Array< int > _g5 = this->_attributes->get_backgroundColours();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(126)
			_g6 = _g5->__get((int)1);
		}
		else{
			HX_STACK_LINE(126)
			_g6 = (int)6710988;
		}
		HX_STACK_LINE(126)
		this->_pressedColour = _g6;
		HX_STACK_LINE(127)
		if ((this->_attributes->get_fillV())){
			HX_STACK_LINE(128)
			Float _g7 = this->_attributes->get_heightV();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(128)
			this->_height = _g7;
		}
		HX_STACK_LINE(130)
		if ((this->_xml->hasNode->resolve(HX_CSTRING("data")))){
			HX_STACK_LINE(131)
			::MadXML _g8 = this->_xml->node->resolve(HX_CSTRING("data"));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(131)
			Array< ::String > _g9 = this->extractData(_g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(131)
			this->drawButtons(_g9,null());
		}
	}
return null();
}


Array< ::String > UISegmentedControl_obj::set_vectorData( Array< ::String > value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISegmentedControl","set_vectorData",0x7ca55e6d,"com.danielfreeman.extendedmadness.UISegmentedControl.set_vectorData","com/danielfreeman/extendedmadness/UISegmentedControl.hx",136,0xaec81310)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(137)
	this->clear();
	HX_STACK_LINE(138)
	this->drawButtons(value,null());
	HX_STACK_LINE(139)
	this->colourButtons();
	HX_STACK_LINE(140)
	this->set_index(this->_index);
	HX_STACK_LINE(141)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UISegmentedControl_obj,set_vectorData,return )

Dynamic UISegmentedControl_obj::set_data( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISegmentedControl","set_data",0xc991bc0a,"com.danielfreeman.extendedmadness.UISegmentedControl.set_data","com/danielfreeman/extendedmadness/UISegmentedControl.hx",145,0xaec81310)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(146)
	Array< ::String > vector = Array_obj< ::String >::__new();		HX_STACK_VAR(vector,"vector");
	HX_STACK_LINE(147)
	{
		HX_STACK_LINE(147)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(147)
		while((true)){
			HX_STACK_LINE(147)
			if ((!(((_g < value->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(147)
				break;
			}
			HX_STACK_LINE(147)
			Dynamic item = value->__GetItem(_g);		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(147)
			++(_g);
			HX_STACK_LINE(148)
			if ((::Std_obj::is(item,hx::ClassOf< ::String >()))){
				HX_STACK_LINE(149)
				vector->push(item);
			}
			else{
				HX_STACK_LINE(152)
				vector->push(item->__Field(HX_CSTRING("label"),true));
			}
		}
	}
	HX_STACK_LINE(155)
	this->set_vectorData(vector);
	HX_STACK_LINE(156)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UISegmentedControl_obj,set_data,return )

::MadXML UISegmentedControl_obj::set_xmlData( ::MadXML value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISegmentedControl","set_xmlData",0x6fa7adc1,"com.danielfreeman.extendedmadness.UISegmentedControl.set_xmlData","com/danielfreeman/extendedmadness/UISegmentedControl.hx",160,0xaec81310)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(161)
	Array< ::String > _g = this->extractData(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(161)
	this->set_vectorData(_g);
	HX_STACK_LINE(162)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UISegmentedControl_obj,set_xmlData,return )

Array< ::String > UISegmentedControl_obj::extractData( ::MadXML xml){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISegmentedControl","extractData",0xc6f88b08,"com.danielfreeman.extendedmadness.UISegmentedControl.extractData","com/danielfreeman/extendedmadness/UISegmentedControl.hx",166,0xaec81310)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_LINE(167)
	Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(168)
	for(::cpp::FastIterator_obj< ::MadXML > *__it = ::cpp::CreateFastIterator< ::MadXML >(xml->children(null())->iterator());  __it->hasNext(); ){
		::MadXML item = __it->next();
		if ((item->has->resolve(HX_CSTRING("label")))){
			HX_STACK_LINE(170)
			::String _g = item->att->resolve(HX_CSTRING("label"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(170)
			::String _g1 = ::Std_obj::string(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(170)
			result->push(_g1);
		}
		else{
			HX_STACK_LINE(173)
			::String _g2 = item->get_name();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(173)
			result->push(_g2);
		}
;
	}
	HX_STACK_LINE(176)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(UISegmentedControl_obj,extractData,return )

Void UISegmentedControl_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISegmentedControl","mouseUp",0x33a5905d,"com.danielfreeman.extendedmadness.UISegmentedControl.mouseUp","com/danielfreeman/extendedmadness/UISegmentedControl.hx",180,0xaec81310)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(181)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UISegmentedControl_obj > __this,::openfl::events::MouseEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UISegmentedControl.hx",182,0xaec81310)
				{
					HX_STACK_LINE(182)
					Dynamic _g = event->get_target();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(182)
					return (_g == __this);
				}
				return null();
			}
		};
		HX_STACK_LINE(182)
		if (((  ((this->_ready)) ? bool(_Function_1_1::Block(this,event)) : bool(false) ))){
			HX_STACK_LINE(183)
			if (((bool((this->_index >= (int)0)) && bool((this->_font == null()))))){
				HX_STACK_LINE(184)
				this->_labels->__get(this->_index).StaticCast< ::com::danielfreeman::madcomponents::UILabel >()->set_textColor(this->_textColour);
			}
			HX_STACK_LINE(186)
			this->updateIndex();
			HX_STACK_LINE(187)
			::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(187)
			this->dispatchEvent(_g1);
			HX_STACK_LINE(188)
			this->showPressed();
		}
		HX_STACK_LINE(190)
		this->_ready = false;
	}
return null();
}


int UISegmentedControl_obj::set_index( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISegmentedControl","set_index",0x7f7f5932,"com.danielfreeman.extendedmadness.UISegmentedControl.set_index","com/danielfreeman/extendedmadness/UISegmentedControl.hx",197,0xaec81310)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(198)
	if (((bool((this->_index >= (int)0)) && bool((this->_font == null()))))){
		HX_STACK_LINE(199)
		this->_labels->__get(this->_index).StaticCast< ::com::danielfreeman::madcomponents::UILabel >()->set_textColor(this->_textColour);
	}
	HX_STACK_LINE(201)
	this->_index = value;
	HX_STACK_LINE(202)
	this->showPressed();
	HX_STACK_LINE(203)
	return value;
}


Void UISegmentedControl_obj::colourButtons( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISegmentedControl","colourButtons",0xf92d2b92,"com.danielfreeman.extendedmadness.UISegmentedControl.colourButtons","com/danielfreeman/extendedmadness/UISegmentedControl.hx",207,0xaec81310)
		HX_STACK_THIS(this)
		HX_STACK_LINE(207)
		::haxe::Log_obj::trace(HX_CSTRING("colourButtons"),hx::SourceInfo(HX_CSTRING("UISegmentedControl.hx"),207,HX_CSTRING("com.danielfreeman.extendedmadness.UISegmentedControl"),HX_CSTRING("colourButtons")));
		HX_STACK_LINE(208)
		if (((this->_font == null()))){
			HX_STACK_LINE(209)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(209)
			Array< ::Dynamic > _g1 = this->_labels;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(209)
			while((true)){
				HX_STACK_LINE(209)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(209)
					break;
				}
				HX_STACK_LINE(209)
				::com::danielfreeman::madcomponents::UILabel label = _g1->__get(_g).StaticCast< ::com::danielfreeman::madcomponents::UILabel >();		HX_STACK_VAR(label,"label");
				HX_STACK_LINE(209)
				++(_g);
				HX_STACK_LINE(210)
				::String _g2 = label->get_text();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(210)
				Dynamic _g11 = Dynamic( Array_obj<Dynamic>::__new().Add(_g2));		HX_STACK_VAR(_g11,"_g11");
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &_g11){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UISegmentedControl.hx",210,0xaec81310)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UISegmentedControl.hx"),false);
							__result->Add(HX_CSTRING("lineNumber") , (int)210,false);
							__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.extendedmadness.UISegmentedControl"),false);
							__result->Add(HX_CSTRING("methodName") , HX_CSTRING("colourButtons"),false);
							__result->Add(HX_CSTRING("customParams") , _g11,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(210)
				Dynamic _g21 = _Function_3_1::Block(_g11);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(210)
				::haxe::Log_obj::trace(HX_CSTRING("colourButtons"),_g21);
				HX_STACK_LINE(211)
				label->set_textColor(this->_textColour);
				HX_STACK_LINE(212)
				Float _g3 = label->get_height();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(212)
				Float _g4 = (this->_height - _g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(212)
				Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(212)
				label->set_y(_g5);
			}
		}
	}
return null();
}


Void UISegmentedControl_obj::clear( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISegmentedControl","clear",0x4b9504ca,"com.danielfreeman.extendedmadness.UISegmentedControl.clear","com/danielfreeman/extendedmadness/UISegmentedControl.hx",218,0xaec81310)
		HX_STACK_THIS(this)
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(219)
			Array< ::Dynamic > _g1 = this->_labels;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(219)
			while((true)){
				HX_STACK_LINE(219)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(219)
					break;
				}
				HX_STACK_LINE(219)
				::com::danielfreeman::madcomponents::UILabel label = _g1->__get(_g).StaticCast< ::com::danielfreeman::madcomponents::UILabel >();		HX_STACK_VAR(label,"label");
				HX_STACK_LINE(219)
				++(_g);
				HX_STACK_LINE(220)
				this->removeChild(label);
			}
		}
		HX_STACK_LINE(221)
		this->_labels = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISegmentedControl_obj,clear,(void))

Void UISegmentedControl_obj::clearPressed( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISegmentedControl","clearPressed",0x73d982f8,"com.danielfreeman.extendedmadness.UISegmentedControl.clearPressed","com/danielfreeman/extendedmadness/UISegmentedControl.hx",226,0xaec81310)
		HX_STACK_THIS(this)
		HX_STACK_LINE(226)
		this->_pressedLayer->get_graphics()->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISegmentedControl_obj,clearPressed,(void))

Void UISegmentedControl_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISegmentedControl","destructor",0x9c086adc,"com.danielfreeman.extendedmadness.UISegmentedControl.destructor","com/danielfreeman/extendedmadness/UISegmentedControl.hx",230,0xaec81310)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		this->super::destructor();
		HX_STACK_LINE(232)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null());
	}
return null();
}


int UISegmentedControl_obj::BUTTON_COLOUR;

int UISegmentedControl_obj::BUTTON_COLOUR7;

int UISegmentedControl_obj::TEXT_COLOUR;

int UISegmentedControl_obj::TEXT_COLOUR7;

Float UISegmentedControl_obj::CONTROL_CURVE;


UISegmentedControl_obj::UISegmentedControl_obj()
{
}

void UISegmentedControl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UISegmentedControl);
	HX_MARK_MEMBER_NAME(_xml,"_xml");
	HX_MARK_MEMBER_NAME(_textColour,"_textColour");
	::com::danielfreeman::extendedmadness::UICutCopyPaste_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UISegmentedControl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_xml,"_xml");
	HX_VISIT_MEMBER_NAME(_textColour,"_textColour");
	::com::danielfreeman::extendedmadness::UICutCopyPaste_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UISegmentedControl_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_xml") ) { return _xml; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_index") ) { return set_index_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialise") ) { return initialise_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textColour") ) { return _textColour; }
		if (HX_FIELD_EQ(inName,"set_xmlData") ) { return set_xmlData_dyn(); }
		if (HX_FIELD_EQ(inName,"extractData") ) { return extractData_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"TEXT_COLOUR7") ) { return TEXT_COLOUR7; }
		if (HX_FIELD_EQ(inName,"set_fixwidth") ) { return set_fixwidth_dyn(); }
		if (HX_FIELD_EQ(inName,"clearPressed") ) { return clearPressed_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"colourButtons") ) { return colourButtons_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_vectorData") ) { return set_vectorData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UISegmentedControl_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return set_data(inValue); }
		if (HX_FIELD_EQ(inName,"_xml") ) { _xml=inValue.Cast< ::MadXML >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xmlData") ) { return set_xmlData(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fixwidth") ) { return set_fixwidth(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vectorData") ) { return set_vectorData(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textColour") ) { _textColour=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"TEXT_COLOUR7") ) { TEXT_COLOUR7=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UISegmentedControl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fixwidth"));
	outFields->push(HX_CSTRING("vectorData"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("xmlData"));
	outFields->push(HX_CSTRING("_xml"));
	outFields->push(HX_CSTRING("_textColour"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BUTTON_COLOUR"),
	HX_CSTRING("BUTTON_COLOUR7"),
	HX_CSTRING("TEXT_COLOUR"),
	HX_CSTRING("TEXT_COLOUR7"),
	HX_CSTRING("CONTROL_CURVE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::MadXML*/ ,(int)offsetof(UISegmentedControl_obj,_xml),HX_CSTRING("_xml")},
	{hx::fsInt,(int)offsetof(UISegmentedControl_obj,_textColour),HX_CSTRING("_textColour")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_xml"),
	HX_CSTRING("_textColour"),
	HX_CSTRING("set_fixwidth"),
	HX_CSTRING("layout"),
	HX_CSTRING("initialise"),
	HX_CSTRING("set_vectorData"),
	HX_CSTRING("set_data"),
	HX_CSTRING("set_xmlData"),
	HX_CSTRING("extractData"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("set_index"),
	HX_CSTRING("colourButtons"),
	HX_CSTRING("clear"),
	HX_CSTRING("clearPressed"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UISegmentedControl_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UISegmentedControl_obj::BUTTON_COLOUR,"BUTTON_COLOUR");
	HX_MARK_MEMBER_NAME(UISegmentedControl_obj::BUTTON_COLOUR7,"BUTTON_COLOUR7");
	HX_MARK_MEMBER_NAME(UISegmentedControl_obj::TEXT_COLOUR,"TEXT_COLOUR");
	HX_MARK_MEMBER_NAME(UISegmentedControl_obj::TEXT_COLOUR7,"TEXT_COLOUR7");
	HX_MARK_MEMBER_NAME(UISegmentedControl_obj::CONTROL_CURVE,"CONTROL_CURVE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UISegmentedControl_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UISegmentedControl_obj::BUTTON_COLOUR,"BUTTON_COLOUR");
	HX_VISIT_MEMBER_NAME(UISegmentedControl_obj::BUTTON_COLOUR7,"BUTTON_COLOUR7");
	HX_VISIT_MEMBER_NAME(UISegmentedControl_obj::TEXT_COLOUR,"TEXT_COLOUR");
	HX_VISIT_MEMBER_NAME(UISegmentedControl_obj::TEXT_COLOUR7,"TEXT_COLOUR7");
	HX_VISIT_MEMBER_NAME(UISegmentedControl_obj::CONTROL_CURVE,"CONTROL_CURVE");
};

#endif

Class UISegmentedControl_obj::__mClass;

void UISegmentedControl_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UISegmentedControl"), hx::TCanCast< UISegmentedControl_obj> ,sStaticFields,sMemberFields,
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

void UISegmentedControl_obj::__boot()
{
	BUTTON_COLOUR= (int)15132390;
	BUTTON_COLOUR7= (int)16777215;
	TEXT_COLOUR= (int)6710886;
	TEXT_COLOUR7= (int)6710988;
	CONTROL_CURVE= 12.0;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
