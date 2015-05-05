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
#ifndef INCLUDED_com_danielfreeman_extendedmadness_Star
#include <com/danielfreeman/extendedmadness/Star.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIStarRating
#include <com/danielfreeman/extendedmadness/UIStarRating.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_Attributes
#include <com/danielfreeman/madcomponents/Attributes.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IComponentUI
#include <com/danielfreeman/madcomponents/IComponentUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
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
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void UIStarRating_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIStarRating","new",0xf5cb7b41,"com.danielfreeman.extendedmadness.UIStarRating.new","com/danielfreeman/extendedmadness/UIStarRating.hx",48,0xdcc756ec)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(57)
	this->_amount = 0.0;
	HX_STACK_LINE(56)
	this->_stars = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(65)
	Float size;		HX_STACK_VAR(size,"size");
	struct _Function_1_1{
		inline static bool Block( ::com::danielfreeman::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIStarRating.hx",65,0xdcc756ec)
			{
				HX_STACK_LINE(65)
				::String _g = xml->att->resolve(HX_CSTRING("alt"));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(65)
				return (_g == HX_CSTRING("true"));
			}
			return null();
		}
	};
	HX_STACK_LINE(65)
	if (((  ((xml->has->resolve(HX_CSTRING("alt")))) ? bool(_Function_1_1::Block(xml)) : bool(false) ))){
		HX_STACK_LINE(65)
		size = (int)18;
	}
	else{
		HX_STACK_LINE(65)
		size = (int)40;
	}
	HX_STACK_LINE(66)
	int onColour;		HX_STACK_VAR(onColour,"onColour");
	HX_STACK_LINE(66)
	if (((attributes->get_backgroundColours()->length > (int)0))){
		HX_STACK_LINE(66)
		Array< int > _g1 = attributes->get_backgroundColours();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(66)
		onColour = _g1->__get((int)0);
	}
	else{
		HX_STACK_LINE(66)
		onColour = (int)15658734;
	}
	HX_STACK_LINE(67)
	int offColour;		HX_STACK_VAR(offColour,"offColour");
	HX_STACK_LINE(67)
	if (((attributes->get_backgroundColours()->length > (int)1))){
		HX_STACK_LINE(67)
		Array< int > _g2 = attributes->get_backgroundColours();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(67)
		offColour = _g2->__get((int)1);
	}
	else{
		HX_STACK_LINE(67)
		offColour = (int)2236962;
	}
	HX_STACK_LINE(69)
	super::__construct(screen,attributes);
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		while((true)){
			HX_STACK_LINE(70)
			if ((!(((_g < (int)5))))){
				HX_STACK_LINE(70)
				break;
			}
			HX_STACK_LINE(70)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(71)
			::com::danielfreeman::extendedmadness::Star star = ::com::danielfreeman::extendedmadness::Star_obj::__new(hx::ObjectPtr<OBJ_>(this),(i * ((2.0 + size))),(int)0,size,onColour,offColour);		HX_STACK_VAR(star,"star");
			HX_STACK_LINE(72)
			::String _g3 = ::Std_obj::string(i);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(72)
			star->set_name(_g3);
			HX_STACK_LINE(73)
			this->_stars->push(star);
		}
	}
	HX_STACK_LINE(75)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null(),null(),null());
	HX_STACK_LINE(76)
	if ((xml->has->resolve(HX_CSTRING("value")))){
		HX_STACK_LINE(77)
		::String _g4 = xml->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(77)
		Float _g5 = ::Std_obj::parseFloat(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(77)
		this->set_value(_g5);
	}
}
;
	return null();
}

//UIStarRating_obj::~UIStarRating_obj() { }

Dynamic UIStarRating_obj::__CreateEmpty() { return  new UIStarRating_obj; }
hx::ObjectPtr< UIStarRating_obj > UIStarRating_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIStarRating_obj > result = new UIStarRating_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIStarRating_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIStarRating_obj > result = new UIStarRating_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UIStarRating_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

Void UIStarRating_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIStarRating","mouseDown",0xa4b33ac8,"com.danielfreeman.extendedmadness.UIStarRating.mouseDown","com/danielfreeman/extendedmadness/UIStarRating.hx",82,0xdcc756ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(83)
		this->_lastAmount = this->_amount;
		HX_STACK_LINE(84)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null(),null(),null());
		HX_STACK_LINE(85)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIStarRating_obj,mouseDown,(void))

Void UIStarRating_obj::touchCancel( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIStarRating","touchCancel",0x97c9467a,"com.danielfreeman.extendedmadness.UIStarRating.touchCancel","com/danielfreeman/extendedmadness/UIStarRating.hx",89,0xdcc756ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		this->set_value(this->_lastAmount);
		HX_STACK_LINE(91)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null());
		HX_STACK_LINE(92)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
	}
return null();
}


Void UIStarRating_obj::mouseMove( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIStarRating","mouseMove",0xaaa62577,"com.danielfreeman.extendedmadness.UIStarRating.mouseMove","com/danielfreeman/extendedmadness/UIStarRating.hx",96,0xdcc756ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(97)
		Float _g = this->get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(97)
		Float _g1 = ((int)10 * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(97)
		Float _g2 = this->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(97)
		Float _g3 = (Float(_g1) / Float(_g2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(97)
		int _g4 = ::Math_obj::round(_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(97)
		Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(97)
		this->set_value(_g5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIStarRating_obj,mouseMove,(void))

Void UIStarRating_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIStarRating","mouseUp",0xe9302341,"com.danielfreeman.extendedmadness.UIStarRating.mouseUp","com/danielfreeman/extendedmadness/UIStarRating.hx",101,0xdcc756ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(102)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null());
		HX_STACK_LINE(103)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(104)
		Float _g = this->get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(104)
		Float _g1 = ((int)10 * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(104)
		Float _g2 = this->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(104)
		Float _g3 = (Float(_g1) / Float(_g2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(104)
		int _g4 = ::Math_obj::round(_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(104)
		Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(104)
		this->set_value(_g5);
		HX_STACK_LINE(105)
		::openfl::events::Event _g6 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(105)
		this->dispatchEvent(_g6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIStarRating_obj,mouseUp,(void))

Float UIStarRating_obj::set_value( Float valu){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIStarRating","set_value",0x0ea35175,"com.danielfreeman.extendedmadness.UIStarRating.set_value","com/danielfreeman/extendedmadness/UIStarRating.hx",109,0xdcc756ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(valu,"valu")
	HX_STACK_LINE(110)
	Float _g = ::Math_obj::min(valu,(int)5);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(110)
	Float _g1 = ::Math_obj::max((int)0,_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(110)
	valu = _g1;
	HX_STACK_LINE(111)
	this->_amount = valu;
	HX_STACK_LINE(112)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(113)
	int _g2 = ::Math_obj::floor(valu);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(113)
	Float fractional = (valu - _g2);		HX_STACK_VAR(fractional,"fractional");
	HX_STACK_LINE(114)
	{
		HX_STACK_LINE(114)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(114)
		int _g3 = ::Math_obj::floor(valu);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(114)
		while((true)){
			HX_STACK_LINE(114)
			if ((!(((_g11 < _g3))))){
				HX_STACK_LINE(114)
				break;
			}
			HX_STACK_LINE(114)
			int i1 = (_g11)++;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(115)
			this->_stars->__get(i1).StaticCast< ::com::danielfreeman::extendedmadness::Star >()->set_amount(1.0);
		}
	}
	HX_STACK_LINE(117)
	{
		HX_STACK_LINE(117)
		int _g3 = ::Math_obj::floor(valu);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(117)
		int _g4 = (_g3 + (int)1);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(117)
		while((true)){
			HX_STACK_LINE(117)
			if ((!(((_g4 < (int)5))))){
				HX_STACK_LINE(117)
				break;
			}
			HX_STACK_LINE(117)
			int i1 = (_g4)++;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(118)
			this->_stars->__get(i1).StaticCast< ::com::danielfreeman::extendedmadness::Star >()->set_amount(0.0);
		}
	}
	HX_STACK_LINE(120)
	if (((valu < (int)5))){
		HX_STACK_LINE(121)
		int _g4 = ::Math_obj::floor(valu);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(121)
		this->_stars->__get(_g4).StaticCast< ::com::danielfreeman::extendedmadness::Star >()->set_amount(fractional);
	}
	HX_STACK_LINE(123)
	return valu;
}


HX_DEFINE_DYNAMIC_FUNC1(UIStarRating_obj,set_value,return )

Float UIStarRating_obj::get_value( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIStarRating","get_value",0x2b526569,"com.danielfreeman.extendedmadness.UIStarRating.get_value","com/danielfreeman/extendedmadness/UIStarRating.hx",128,0xdcc756ec)
	HX_STACK_THIS(this)
	HX_STACK_LINE(128)
	return this->_amount;
}


HX_DEFINE_DYNAMIC_FUNC0(UIStarRating_obj,get_value,return )

Void UIStarRating_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIStarRating","destructor",0x9099be78,"com.danielfreeman.extendedmadness.UIStarRating.destructor","com/danielfreeman/extendedmadness/UIStarRating.hx",132,0xdcc756ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		this->super::destructor();
		HX_STACK_LINE(134)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null());
		HX_STACK_LINE(135)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->mouseMove_dyn(),null());
		HX_STACK_LINE(136)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
	}
return null();
}


int UIStarRating_obj::STARS;

Float UIStarRating_obj::ALT_SIZE;

Float UIStarRating_obj::SIZE;


UIStarRating_obj::UIStarRating_obj()
{
}

void UIStarRating_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIStarRating);
	HX_MARK_MEMBER_NAME(_stars,"_stars");
	HX_MARK_MEMBER_NAME(_amount,"_amount");
	HX_MARK_MEMBER_NAME(_backColour,"_backColour");
	HX_MARK_MEMBER_NAME(_frontColour,"_frontColour");
	HX_MARK_MEMBER_NAME(_lastAmount,"_lastAmount");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIStarRating_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_stars,"_stars");
	HX_VISIT_MEMBER_NAME(_amount,"_amount");
	HX_VISIT_MEMBER_NAME(_backColour,"_backColour");
	HX_VISIT_MEMBER_NAME(_frontColour,"_frontColour");
	HX_VISIT_MEMBER_NAME(_lastAmount,"_lastAmount");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIStarRating_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return get_value(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_stars") ) { return _stars; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_amount") ) { return _amount; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseMove") ) { return mouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		if (HX_FIELD_EQ(inName,"get_value") ) { return get_value_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_backColour") ) { return _backColour; }
		if (HX_FIELD_EQ(inName,"_lastAmount") ) { return _lastAmount; }
		if (HX_FIELD_EQ(inName,"touchCancel") ) { return touchCancel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_frontColour") ) { return _frontColour; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIStarRating_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return set_value(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_stars") ) { _stars=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_amount") ) { _amount=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_backColour") ) { _backColour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastAmount") ) { _lastAmount=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_frontColour") ) { _frontColour=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIStarRating_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("_stars"));
	outFields->push(HX_CSTRING("_amount"));
	outFields->push(HX_CSTRING("_backColour"));
	outFields->push(HX_CSTRING("_frontColour"));
	outFields->push(HX_CSTRING("_lastAmount"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("STARS"),
	HX_CSTRING("ALT_SIZE"),
	HX_CSTRING("SIZE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UIStarRating_obj,_stars),HX_CSTRING("_stars")},
	{hx::fsFloat,(int)offsetof(UIStarRating_obj,_amount),HX_CSTRING("_amount")},
	{hx::fsInt,(int)offsetof(UIStarRating_obj,_backColour),HX_CSTRING("_backColour")},
	{hx::fsInt,(int)offsetof(UIStarRating_obj,_frontColour),HX_CSTRING("_frontColour")},
	{hx::fsFloat,(int)offsetof(UIStarRating_obj,_lastAmount),HX_CSTRING("_lastAmount")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_stars"),
	HX_CSTRING("_amount"),
	HX_CSTRING("_backColour"),
	HX_CSTRING("_frontColour"),
	HX_CSTRING("_lastAmount"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("touchCancel"),
	HX_CSTRING("mouseMove"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("set_value"),
	HX_CSTRING("get_value"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIStarRating_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIStarRating_obj::STARS,"STARS");
	HX_MARK_MEMBER_NAME(UIStarRating_obj::ALT_SIZE,"ALT_SIZE");
	HX_MARK_MEMBER_NAME(UIStarRating_obj::SIZE,"SIZE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIStarRating_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIStarRating_obj::STARS,"STARS");
	HX_VISIT_MEMBER_NAME(UIStarRating_obj::ALT_SIZE,"ALT_SIZE");
	HX_VISIT_MEMBER_NAME(UIStarRating_obj::SIZE,"SIZE");
};

#endif

Class UIStarRating_obj::__mClass;

void UIStarRating_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UIStarRating"), hx::TCanCast< UIStarRating_obj> ,sStaticFields,sMemberFields,
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

void UIStarRating_obj::__boot()
{
	STARS= (int)5;
	ALT_SIZE= (int)18;
	SIZE= (int)40;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
