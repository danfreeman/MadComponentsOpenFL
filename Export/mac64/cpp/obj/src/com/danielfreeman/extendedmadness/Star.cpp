#include <hxcpp.h>

#ifndef INCLUDED_com_danielfreeman_extendedmadness_Star
#include <com/danielfreeman/extendedmadness/Star.h>
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
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void Star_obj::__construct(::openfl::display::Sprite screen,Float xx,Float yy,hx::Null< Float >  __o_size,hx::Null< int >  __o_frontColour,hx::Null< int >  __o_backColour)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.Star","new",0xb5584db0,"com.danielfreeman.extendedmadness.Star.new","com/danielfreeman/extendedmadness/Star.hx",34,0xa7f1825d)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xx,"xx")
HX_STACK_ARG(yy,"yy")
HX_STACK_ARG(__o_size,"size")
HX_STACK_ARG(__o_frontColour,"frontColour")
HX_STACK_ARG(__o_backColour,"backColour")
Float size = __o_size.Default(18);
int frontColour = __o_frontColour.Default(15658734);
int backColour = __o_backColour.Default(2236962);
{
	HX_STACK_LINE(48)
	this->_amount = -1.0;
	HX_STACK_LINE(56)
	super::__construct();
	HX_STACK_LINE(57)
	this->_backColour = backColour;
	HX_STACK_LINE(58)
	this->_frontColour = frontColour;
	HX_STACK_LINE(59)
	this->_lineColour = frontColour;
	HX_STACK_LINE(60)
	this->_radius = (Float(size) / Float((int)2));
	HX_STACK_LINE(61)
	screen->addChild(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(62)
	this->set_x(xx);
	HX_STACK_LINE(62)
	this->set_y(yy);
	HX_STACK_LINE(63)
	this->redraw();
	HX_STACK_LINE(64)
	bool _g = this->useHandCursor = true;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(64)
	this->buttonMode = _g;
}
;
	return null();
}

//Star_obj::~Star_obj() { }

Dynamic Star_obj::__CreateEmpty() { return  new Star_obj; }
hx::ObjectPtr< Star_obj > Star_obj::__new(::openfl::display::Sprite screen,Float xx,Float yy,hx::Null< Float >  __o_size,hx::Null< int >  __o_frontColour,hx::Null< int >  __o_backColour)
{  hx::ObjectPtr< Star_obj > result = new Star_obj();
	result->__construct(screen,xx,yy,__o_size,__o_frontColour,__o_backColour);
	return result;}

Dynamic Star_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Star_obj > result = new Star_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Star_obj::redraw( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.Star","redraw",0x18a099e7,"com.danielfreeman.extendedmadness.Star.redraw","com/danielfreeman/extendedmadness/Star.hx",69,0xa7f1825d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(71)
		matr->createGradientBox(((int)2 * this->_radius),((int)2 * this->_radius),(int)0,null(),null());
		HX_STACK_LINE(72)
		this->get_graphics()->clear();
		HX_STACK_LINE(73)
		this->get_graphics()->beginFill((int)0,(int)0);
		HX_STACK_LINE(74)
		this->get_graphics()->drawRect((int)0,(int)0,(((int)2 * this->_radius) + 2.0),((int)2 * this->_radius));
		HX_STACK_LINE(75)
		this->get_graphics()->lineStyle((int)1,this->_lineColour,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(76)
		if (((this->_amount < 0.0))){
			HX_STACK_LINE(76)
			this->get_graphics()->beginFill((int)4473924,null());
		}
		else{
			HX_STACK_LINE(77)
			this->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,Dynamic( Array_obj<Dynamic>::__new().Add(this->_frontColour).Add(this->_frontColour).Add(this->_backColour).Add(this->_backColour)),Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((this->_amount * (int)255)).Add((this->_amount * (int)255)).Add((int)255)),matr,null(),null(),null());
		}
		HX_STACK_LINE(78)
		this->get_graphics()->moveTo(this->_radius,(int)0);
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(79)
			int _g = (int)6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(79)
			while((true)){
				HX_STACK_LINE(79)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(79)
					break;
				}
				HX_STACK_LINE(79)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(80)
				Float _g2 = ::Math_obj::sin((Float((((int)2 * ::Math_obj::PI) * ((i - .5)))) / Float((int)5)));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(80)
				Float _g11 = ((Float(this->_radius) / Float((int)2)) * _g2);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(80)
				Float _g21 = (this->_radius + _g11);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(80)
				Float _g3 = ::Math_obj::cos((Float((((int)2 * ::Math_obj::PI) * ((i - .5)))) / Float((int)5)));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(80)
				Float _g4 = ((Float(this->_radius) / Float((int)2)) * _g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(80)
				Float _g5 = (this->_radius - _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(80)
				this->get_graphics()->lineTo(_g21,_g5);
				HX_STACK_LINE(81)
				Float _g6 = ::Math_obj::sin((Float((((int)2 * ::Math_obj::PI) * i)) / Float((int)5)));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(81)
				Float _g7 = (this->_radius * _g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(81)
				Float _g8 = (this->_radius + _g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(81)
				Float _g9 = ::Math_obj::cos((Float((((int)2 * ::Math_obj::PI) * i)) / Float((int)5)));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(81)
				Float _g10 = (this->_radius * _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(81)
				Float _g111 = (this->_radius - _g10);		HX_STACK_VAR(_g111,"_g111");
				HX_STACK_LINE(81)
				this->get_graphics()->lineTo(_g8,_g111);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Star_obj,redraw,(void))

Float Star_obj::set_amount( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.Star","set_amount",0xfe00ecc5,"com.danielfreeman.extendedmadness.Star.set_amount","com/danielfreeman/extendedmadness/Star.hx",89,0xa7f1825d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(90)
	this->_amount = value;
	HX_STACK_LINE(91)
	this->redraw();
	HX_STACK_LINE(92)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Star_obj,set_amount,return )

int Star_obj::BACK_COLOUR;

int Star_obj::FRONT_COLOUR;

Float Star_obj::GAP;

int Star_obj::UNDEFINED_COLOUR;

Float Star_obj::SIZE;

Float Star_obj::RADIUS;

Float Star_obj::INNER_RADIUS;

int Star_obj::SIDES;


Star_obj::Star_obj()
{
}

Dynamic Star_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"RADIUS") ) { return RADIUS; }
		if (HX_FIELD_EQ(inName,"redraw") ) { return redraw_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_amount") ) { return _amount; }
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_amount") ) { return set_amount_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_backColour") ) { return _backColour; }
		if (HX_FIELD_EQ(inName,"_lineColour") ) { return _lineColour; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"INNER_RADIUS") ) { return INNER_RADIUS; }
		if (HX_FIELD_EQ(inName,"_frontColour") ) { return _frontColour; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Star_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"RADIUS") ) { RADIUS=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"amount") ) { return set_amount(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_amount") ) { _amount=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_backColour") ) { _backColour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lineColour") ) { _lineColour=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"INNER_RADIUS") ) { INNER_RADIUS=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frontColour") ) { _frontColour=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Star_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("amount"));
	outFields->push(HX_CSTRING("_amount"));
	outFields->push(HX_CSTRING("_radius"));
	outFields->push(HX_CSTRING("_backColour"));
	outFields->push(HX_CSTRING("_frontColour"));
	outFields->push(HX_CSTRING("_lineColour"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BACK_COLOUR"),
	HX_CSTRING("FRONT_COLOUR"),
	HX_CSTRING("GAP"),
	HX_CSTRING("UNDEFINED_COLOUR"),
	HX_CSTRING("SIZE"),
	HX_CSTRING("RADIUS"),
	HX_CSTRING("INNER_RADIUS"),
	HX_CSTRING("SIDES"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Star_obj,_amount),HX_CSTRING("_amount")},
	{hx::fsFloat,(int)offsetof(Star_obj,_radius),HX_CSTRING("_radius")},
	{hx::fsInt,(int)offsetof(Star_obj,_backColour),HX_CSTRING("_backColour")},
	{hx::fsInt,(int)offsetof(Star_obj,_frontColour),HX_CSTRING("_frontColour")},
	{hx::fsInt,(int)offsetof(Star_obj,_lineColour),HX_CSTRING("_lineColour")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_amount"),
	HX_CSTRING("_radius"),
	HX_CSTRING("_backColour"),
	HX_CSTRING("_frontColour"),
	HX_CSTRING("_lineColour"),
	HX_CSTRING("redraw"),
	HX_CSTRING("set_amount"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Star_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Star_obj::BACK_COLOUR,"BACK_COLOUR");
	HX_MARK_MEMBER_NAME(Star_obj::FRONT_COLOUR,"FRONT_COLOUR");
	HX_MARK_MEMBER_NAME(Star_obj::GAP,"GAP");
	HX_MARK_MEMBER_NAME(Star_obj::UNDEFINED_COLOUR,"UNDEFINED_COLOUR");
	HX_MARK_MEMBER_NAME(Star_obj::SIZE,"SIZE");
	HX_MARK_MEMBER_NAME(Star_obj::RADIUS,"RADIUS");
	HX_MARK_MEMBER_NAME(Star_obj::INNER_RADIUS,"INNER_RADIUS");
	HX_MARK_MEMBER_NAME(Star_obj::SIDES,"SIDES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Star_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Star_obj::BACK_COLOUR,"BACK_COLOUR");
	HX_VISIT_MEMBER_NAME(Star_obj::FRONT_COLOUR,"FRONT_COLOUR");
	HX_VISIT_MEMBER_NAME(Star_obj::GAP,"GAP");
	HX_VISIT_MEMBER_NAME(Star_obj::UNDEFINED_COLOUR,"UNDEFINED_COLOUR");
	HX_VISIT_MEMBER_NAME(Star_obj::SIZE,"SIZE");
	HX_VISIT_MEMBER_NAME(Star_obj::RADIUS,"RADIUS");
	HX_VISIT_MEMBER_NAME(Star_obj::INNER_RADIUS,"INNER_RADIUS");
	HX_VISIT_MEMBER_NAME(Star_obj::SIDES,"SIDES");
};

#endif

Class Star_obj::__mClass;

void Star_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.Star"), hx::TCanCast< Star_obj> ,sStaticFields,sMemberFields,
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

void Star_obj::__boot()
{
	BACK_COLOUR= (int)2236962;
	FRONT_COLOUR= (int)15658734;
	GAP= 2.0;
	UNDEFINED_COLOUR= (int)4473924;
	SIZE= (int)18;
	RADIUS= (Float((int)18) / Float((int)2));
	INNER_RADIUS= (Float((int)18) / Float((int)4));
	SIDES= (int)5;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
