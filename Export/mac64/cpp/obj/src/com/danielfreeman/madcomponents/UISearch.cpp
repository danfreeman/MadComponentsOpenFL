#include <hxcpp.h>

#ifndef INCLUDED_com_danielfreeman_MadXML
#include <com/danielfreeman/MadXML.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_Colour
#include <com/danielfreeman/madcomponents/Colour.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IComponentUI
#include <com/danielfreeman/madcomponents/IComponentUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIInput
#include <com/danielfreeman/madcomponents/UIInput.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UISearch
#include <com/danielfreeman/madcomponents/UISearch.h>
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
namespace madcomponents{

Void UISearch_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UISearch","new",0x49a24782,"com.danielfreeman.madcomponents.UISearch.new","com/danielfreeman/madcomponents/UISearch.hx",77,0xabfbbfcb)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(78)
	this->_attributes = attributes;
	HX_STACK_LINE(79)
	::openfl::display::Shape _g = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(79)
	::openfl::display::Shape _g1 = this->_over = _g;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(79)
	this->addChild(_g1);
	HX_STACK_LINE(80)
	int _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(80)
	if (((attributes->get_backgroundColours()->length > (int)2))){
		HX_STACK_LINE(80)
		Array< int > _g2 = attributes->get_backgroundColours();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(80)
		_g3 = _g2->__get((int)2);
	}
	else{
		HX_STACK_LINE(80)
		_g3 = (int)10066329;
	}
	HX_STACK_LINE(80)
	this->_iconColour = _g3;
	HX_STACK_LINE(81)
	::String _g4 = xml->get_innerHTML();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(81)
	Array< int > _g5 = attributes->get_backgroundColours();		HX_STACK_VAR(_g5,"_g5");
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
	super::__construct(screen,attributes->x,attributes->y,_g4,_g5,_g7,null(),null(),null());
	HX_STACK_LINE(82)
	this->setChildIndex(this->_label,(int)0);
	struct _Function_1_1{
		inline static bool Block( ::com::danielfreeman::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UISearch.hx",83,0xabfbbfcb)
			{
				HX_STACK_LINE(83)
				::String _g8 = xml->att->resolve(HX_CSTRING("clearButton"));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(83)
				return (_g8 == HX_CSTRING("true"));
			}
			return null();
		}
	};
	HX_STACK_LINE(83)
	if (((  ((xml->has->resolve(HX_CSTRING("clearButton")))) ? bool(_Function_1_1::Block(xml)) : bool(false) ))){
		HX_STACK_LINE(84)
		this->makeClearButton();
	}
}
;
	return null();
}

//UISearch_obj::~UISearch_obj() { }

Dynamic UISearch_obj::__CreateEmpty() { return  new UISearch_obj; }
hx::ObjectPtr< UISearch_obj > UISearch_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UISearch_obj > result = new UISearch_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UISearch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UISearch_obj > result = new UISearch_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UISearch_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

Void UISearch_obj::drawOutline( hx::Null< bool >  __o_pressed){
bool pressed = __o_pressed.Default(false);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UISearch","drawOutline",0xae33c500,"com.danielfreeman.madcomponents.UISearch.drawOutline","com/danielfreeman/madcomponents/UISearch.hx",91,0xabfbbfcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pressed,"pressed")
{
		HX_STACK_LINE(92)
		::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(93)
		int colour;		HX_STACK_VAR(colour,"colour");
		HX_STACK_LINE(93)
		if (((this->_colours->length > (int)0))){
			HX_STACK_LINE(93)
			colour = this->_colours->__get((int)0);
		}
		else{
			HX_STACK_LINE(93)
			colour = this->_attributes->get_colour();
		}
		HX_STACK_LINE(94)
		Float curve;		HX_STACK_VAR(curve,"curve");
		HX_STACK_LINE(94)
		if ((this->_attributes->get_style7())){
			HX_STACK_LINE(94)
			curve = 10.0;
		}
		else{
			HX_STACK_LINE(94)
			curve = 25.0;
		}
		HX_STACK_LINE(95)
		matr->createGradientBox(this->_attributes->width,40.0,(Float(::Math_obj::PI) / Float((int)2)),(int)0,(int)0);
		HX_STACK_LINE(96)
		this->_over->get_graphics()->clear();
		HX_STACK_LINE(97)
		if ((!(this->_alt))){
			HX_STACK_LINE(98)
			if ((this->_attributes->get_style7())){
				HX_STACK_LINE(99)
				this->_over->get_graphics()->beginFill(colour,null());
			}
			else{
				HX_STACK_LINE(102)
				int _g = ::com::danielfreeman::madcomponents::Colour_obj::lighten(colour,(int)64);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(102)
				int _g1 = ::com::danielfreeman::madcomponents::Colour_obj::darken(colour,null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(102)
				Dynamic _g2 = Dynamic( Array_obj<Dynamic>::__new().Add(_g).Add(_g1));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(102)
				this->_over->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,_g2,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)255)),matr,null(),null(),null());
			}
			HX_STACK_LINE(104)
			this->_over->get_graphics()->drawRect((int)0,(int)0,this->_attributes->width,40.0);
			HX_STACK_LINE(105)
			this->_over->get_graphics()->drawRoundRect(10.0,7.5,(this->_attributes->width - 20.),25.0,curve,null());
			HX_STACK_LINE(106)
			int _g3 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(colour,(int)64);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(106)
			this->_over->get_graphics()->beginFill(_g3,null());
			HX_STACK_LINE(107)
			if ((!(this->_attributes->get_style7()))){
				HX_STACK_LINE(108)
				this->_over->get_graphics()->drawRect((int)0,(int)0,this->_attributes->width,(int)1);
				HX_STACK_LINE(109)
				int _g4 = ::com::danielfreeman::madcomponents::Colour_obj::darken(colour,(int)-64);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(109)
				this->_over->get_graphics()->beginFill(_g4,null());
				HX_STACK_LINE(110)
				this->_over->get_graphics()->drawRect((int)0,40.0,this->_attributes->width,(int)2);
			}
		}
		HX_STACK_LINE(113)
		this->_over->get_graphics()->beginFill((int)0,(int)0);
		HX_STACK_LINE(114)
		this->_over->get_graphics()->lineStyle((int)2,this->_iconColour,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(115)
		this->_over->get_graphics()->drawCircle(22.5,19.,(int)6);
		HX_STACK_LINE(116)
		this->_over->get_graphics()->moveTo(27.5,24.);
		HX_STACK_LINE(117)
		this->_over->get_graphics()->lineTo(30.5,27.);
		HX_STACK_LINE(119)
		int fieldColour;		HX_STACK_VAR(fieldColour,"fieldColour");
		HX_STACK_LINE(119)
		if (((this->_colours->length > (int)1))){
			HX_STACK_LINE(119)
			fieldColour = this->_colours->__get((int)1);
		}
		else{
			HX_STACK_LINE(119)
			fieldColour = (int)16777215;
		}
		HX_STACK_LINE(120)
		this->get_graphics()->clear();
		HX_STACK_LINE(121)
		int _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(121)
		if ((this->_attributes->get_style7())){
			HX_STACK_LINE(121)
			_g5 = fieldColour;
		}
		else{
			HX_STACK_LINE(121)
			_g5 = ::com::danielfreeman::madcomponents::Colour_obj::darken(colour,(int)-64);
		}
		HX_STACK_LINE(121)
		this->get_graphics()->beginFill(_g5,null());
		HX_STACK_LINE(122)
		this->get_graphics()->drawRect((int)0,(int)0,this->_attributes->width,40.0);
		HX_STACK_LINE(123)
		this->get_graphics()->beginFill(fieldColour,null());
		HX_STACK_LINE(124)
		this->get_graphics()->drawRoundRect(11.,8.5,(this->_attributes->width - 20.),25.0,curve,null());
		HX_STACK_LINE(126)
		this->_label->__FieldRef(HX_CSTRING("x")) = 35.;
		HX_STACK_LINE(127)
		this->_label->__FieldRef(HX_CSTRING("fixwidth")) = ((this->_attributes->width - (int)45) - ((  ((this->_alt)) ? Float(10.0) : Float((int)0) )));
		HX_STACK_LINE(128)
		this->_label->__FieldRef(HX_CSTRING("y")) = 8.5;
	}
return null();
}


Float UISearch_obj::set_fixwidth( Float value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UISearch","set_fixwidth",0xac3e9c2c,"com.danielfreeman.madcomponents.UISearch.set_fixwidth","com/danielfreeman/madcomponents/UISearch.hx",134,0xabfbbfcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(135)
	this->_attributes->width = value;
	HX_STACK_LINE(136)
	if (((this->_clear != null()))){
		HX_STACK_LINE(137)
		this->_clear->set_x(((this->_attributes->width - 10.0) - 12.5));
	}
	HX_STACK_LINE(139)
	this->drawOutline(null());
	HX_STACK_LINE(140)
	return value;
}


Void UISearch_obj::clearLabel( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISearch","clearLabel",0xeceade45,"com.danielfreeman.madcomponents.UISearch.clearLabel","com/danielfreeman/madcomponents/UISearch.hx",144,0xabfbbfcb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(145)
		this->_label->__FieldRef(HX_CSTRING("text")) = HX_CSTRING("");
		HX_STACK_LINE(147)
		this->super::focus();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISearch_obj,clearLabel,(void))

Void UISearch_obj::makeClearButton( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISearch","makeClearButton",0x60fffa33,"com.danielfreeman.madcomponents.UISearch.makeClearButton","com/danielfreeman/madcomponents/UISearch.hx",151,0xabfbbfcb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(152)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(152)
		::openfl::display::Sprite _g1 = this->_clear = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(152)
		this->addChild(_g1);
		HX_STACK_LINE(153)
		this->_clear->get_graphics()->beginFill((int)0,(int)0);
		HX_STACK_LINE(154)
		this->_clear->get_graphics()->drawCircle((int)0,(int)0,(int)18);
		HX_STACK_LINE(155)
		this->_clear->get_graphics()->beginFill(this->_iconColour,null());
		HX_STACK_LINE(156)
		this->_clear->get_graphics()->drawCircle((int)0,(int)0,(int)9);
		HX_STACK_LINE(157)
		int _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(157)
		if (((this->_colours->length > (int)1))){
			HX_STACK_LINE(157)
			_g2 = this->_colours->__get((int)1);
		}
		else{
			HX_STACK_LINE(157)
			_g2 = this->_attributes->get_colour();
		}
		HX_STACK_LINE(157)
		this->_clear->get_graphics()->beginFill(_g2,null());
		HX_STACK_LINE(158)
		this->_clear->get_graphics()->drawRect((int)-1,(int)-6,(int)2,(int)5);
		HX_STACK_LINE(159)
		this->_clear->get_graphics()->drawRect((int)-1,(int)1,(int)2,(int)5);
		HX_STACK_LINE(160)
		this->_clear->get_graphics()->drawRect((int)-6,(int)-1,(int)12,(int)2);
		HX_STACK_LINE(161)
		this->_clear->set_rotation((int)45);
		HX_STACK_LINE(162)
		this->_clear->set_y(20.);
		HX_STACK_LINE(164)
		this->_clear->set_x(((this->_attributes->width - 10.0) - 12.5));
		HX_STACK_LINE(165)
		this->_clear->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->clearLabel_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISearch_obj,makeClearButton,(void))

Void UISearch_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISearch","layout",0x1307d8c8,"com.danielfreeman.madcomponents.UISearch.layout","com/danielfreeman/madcomponents/UISearch.hx",169,0xabfbbfcb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(170)
		this->super::layout(attributes);
		HX_STACK_LINE(171)
		this->set_fixwidth(attributes->width);
	}
return null();
}


Void UISearch_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UISearch","destructor",0xbc436c57,"com.danielfreeman.madcomponents.UISearch.destructor","com/danielfreeman/madcomponents/UISearch.hx",175,0xabfbbfcb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(176)
		this->super::destructor();
		HX_STACK_LINE(177)
		if (((this->_clear != null()))){
			HX_STACK_LINE(178)
			this->_clear->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->clearLabel_dyn(),null());
		}
	}
return null();
}


Float UISearch_obj::HEIGHT;

Float UISearch_obj::GAP;

Float UISearch_obj::WINDOW_HEIGHT;

int UISearch_obj::ICON_COLOUR;

int UISearch_obj::RADIUS;

int UISearch_obj::LINE;

int UISearch_obj::RIGHT_GAP;

Float UISearch_obj::CURVE7;


UISearch_obj::UISearch_obj()
{
}

void UISearch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UISearch);
	HX_MARK_MEMBER_NAME(_over,"_over");
	HX_MARK_MEMBER_NAME(_iconColour,"_iconColour");
	HX_MARK_MEMBER_NAME(_clear,"_clear");
	::com::danielfreeman::madcomponents::UIInput_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UISearch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_over,"_over");
	HX_VISIT_MEMBER_NAME(_iconColour,"_iconColour");
	HX_VISIT_MEMBER_NAME(_clear,"_clear");
	::com::danielfreeman::madcomponents::UIInput_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UISearch_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_over") ) { return _over; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_clear") ) { return _clear; }
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearLabel") ) { return clearLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_iconColour") ) { return _iconColour; }
		if (HX_FIELD_EQ(inName,"drawOutline") ) { return drawOutline_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_fixwidth") ) { return set_fixwidth_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"makeClearButton") ) { return makeClearButton_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UISearch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_over") ) { _over=inValue.Cast< ::openfl::display::Shape >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_clear") ) { _clear=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_iconColour") ) { _iconColour=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UISearch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_over"));
	outFields->push(HX_CSTRING("_iconColour"));
	outFields->push(HX_CSTRING("_clear"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("HEIGHT"),
	HX_CSTRING("GAP"),
	HX_CSTRING("WINDOW_HEIGHT"),
	HX_CSTRING("ICON_COLOUR"),
	HX_CSTRING("RADIUS"),
	HX_CSTRING("LINE"),
	HX_CSTRING("RIGHT_GAP"),
	HX_CSTRING("CURVE7"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(UISearch_obj,_over),HX_CSTRING("_over")},
	{hx::fsInt,(int)offsetof(UISearch_obj,_iconColour),HX_CSTRING("_iconColour")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UISearch_obj,_clear),HX_CSTRING("_clear")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_over"),
	HX_CSTRING("_iconColour"),
	HX_CSTRING("_clear"),
	HX_CSTRING("drawOutline"),
	HX_CSTRING("set_fixwidth"),
	HX_CSTRING("clearLabel"),
	HX_CSTRING("makeClearButton"),
	HX_CSTRING("layout"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UISearch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UISearch_obj::HEIGHT,"HEIGHT");
	HX_MARK_MEMBER_NAME(UISearch_obj::GAP,"GAP");
	HX_MARK_MEMBER_NAME(UISearch_obj::WINDOW_HEIGHT,"WINDOW_HEIGHT");
	HX_MARK_MEMBER_NAME(UISearch_obj::ICON_COLOUR,"ICON_COLOUR");
	HX_MARK_MEMBER_NAME(UISearch_obj::RADIUS,"RADIUS");
	HX_MARK_MEMBER_NAME(UISearch_obj::LINE,"LINE");
	HX_MARK_MEMBER_NAME(UISearch_obj::RIGHT_GAP,"RIGHT_GAP");
	HX_MARK_MEMBER_NAME(UISearch_obj::CURVE7,"CURVE7");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UISearch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UISearch_obj::HEIGHT,"HEIGHT");
	HX_VISIT_MEMBER_NAME(UISearch_obj::GAP,"GAP");
	HX_VISIT_MEMBER_NAME(UISearch_obj::WINDOW_HEIGHT,"WINDOW_HEIGHT");
	HX_VISIT_MEMBER_NAME(UISearch_obj::ICON_COLOUR,"ICON_COLOUR");
	HX_VISIT_MEMBER_NAME(UISearch_obj::RADIUS,"RADIUS");
	HX_VISIT_MEMBER_NAME(UISearch_obj::LINE,"LINE");
	HX_VISIT_MEMBER_NAME(UISearch_obj::RIGHT_GAP,"RIGHT_GAP");
	HX_VISIT_MEMBER_NAME(UISearch_obj::CURVE7,"CURVE7");
};

#endif

Class UISearch_obj::__mClass;

void UISearch_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UISearch"), hx::TCanCast< UISearch_obj> ,sStaticFields,sMemberFields,
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

void UISearch_obj::__boot()
{
	HEIGHT= 40.0;
	GAP= 10.0;
	WINDOW_HEIGHT= 25.0;
	ICON_COLOUR= (int)10066329;
	RADIUS= (int)9;
	LINE= (int)6;
	RIGHT_GAP= (int)45;
	CURVE7= 10.0;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
