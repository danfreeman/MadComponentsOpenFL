#include <hxcpp.h>

#ifndef INCLUDED_com_danielfreeman_madcomponents_Attributes
#include <com/danielfreeman/madcomponents/Attributes.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void MadSprite_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.MadSprite","new",0xcc849fd3,"com.danielfreeman.madcomponents.MadSprite.new","com/danielfreeman/madcomponents/MadSprite.hx",36,0x9439c2c0)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(48)
	this->_attributes = null();
	HX_STACK_LINE(47)
	this->_includeInLayout = true;
	HX_STACK_LINE(46)
	this->_clickable = true;
	HX_STACK_LINE(53)
	super::__construct();
	HX_STACK_LINE(54)
	if (((screen != null()))){
		HX_STACK_LINE(55)
		screen->addChild(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(57)
	if (((attributes != null()))){
		HX_STACK_LINE(58)
		this->_attributes = attributes;
	}
	else{
		HX_STACK_LINE(61)
		::com::danielfreeman::madcomponents::Attributes _g = ::com::danielfreeman::madcomponents::Attributes_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		this->_attributes = _g;
	}
}
;
	return null();
}

//MadSprite_obj::~MadSprite_obj() { }

Dynamic MadSprite_obj::__CreateEmpty() { return  new MadSprite_obj; }
hx::ObjectPtr< MadSprite_obj > MadSprite_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< MadSprite_obj > result = new MadSprite_obj();
	result->__construct(screen,attributes);
	return result;}

Dynamic MadSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MadSprite_obj > result = new MadSprite_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *MadSprite_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

bool MadSprite_obj::set_clickable( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.MadSprite","set_clickable",0xdfcc20f8,"com.danielfreeman.madcomponents.MadSprite.set_clickable","com/danielfreeman/madcomponents/MadSprite.hx",65,0x9439c2c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(66)
	this->_clickable = value;
	HX_STACK_LINE(67)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(MadSprite_obj,set_clickable,return )

bool MadSprite_obj::get_clickable( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.MadSprite","get_clickable",0x9ac63eec,"com.danielfreeman.madcomponents.MadSprite.get_clickable","com/danielfreeman/madcomponents/MadSprite.hx",71,0x9439c2c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	return this->_clickable;
}


HX_DEFINE_DYNAMIC_FUNC0(MadSprite_obj,get_clickable,return )

bool MadSprite_obj::set_includeInLayout( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.MadSprite","set_includeInLayout",0x5cf4024d,"com.danielfreeman.madcomponents.MadSprite.set_includeInLayout","com/danielfreeman/madcomponents/MadSprite.hx",74,0x9439c2c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(75)
	this->_includeInLayout = value;
	HX_STACK_LINE(76)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(MadSprite_obj,set_includeInLayout,return )

bool MadSprite_obj::get_includeInLayout( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.MadSprite","get_includeInLayout",0x20570f41,"com.danielfreeman.madcomponents.MadSprite.get_includeInLayout","com/danielfreeman/madcomponents/MadSprite.hx",80,0x9439c2c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	return this->_includeInLayout;
}


HX_DEFINE_DYNAMIC_FUNC0(MadSprite_obj,get_includeInLayout,return )

Void MadSprite_obj::touchCancel( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.MadSprite","touchCancel",0x8ff44d0c,"com.danielfreeman.madcomponents.MadSprite.touchCancel","com/danielfreeman/madcomponents/MadSprite.hx",83,0x9439c2c0)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MadSprite_obj,touchCancel,(void))

::com::danielfreeman::madcomponents::Attributes MadSprite_obj::get_attributes( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.MadSprite","get_attributes",0xa1d9008d,"com.danielfreeman.madcomponents.MadSprite.get_attributes","com/danielfreeman/madcomponents/MadSprite.hx",89,0x9439c2c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	return this->_attributes;
}


HX_DEFINE_DYNAMIC_FUNC0(MadSprite_obj,get_attributes,return )

Void MadSprite_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.MadSprite","layout",0x69b6c917,"com.danielfreeman.madcomponents.MadSprite.layout","com/danielfreeman/madcomponents/MadSprite.hx",93,0x9439c2c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(93)
		this->_attributes = attributes;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MadSprite_obj,layout,(void))

Float MadSprite_obj::get_theWidth( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.MadSprite","get_theWidth",0x0a7a6a0b,"com.danielfreeman.madcomponents.MadSprite.get_theWidth","com/danielfreeman/madcomponents/MadSprite.hx",97,0x9439c2c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	return this->get_width();
}


HX_DEFINE_DYNAMIC_FUNC0(MadSprite_obj,get_theWidth,return )

Float MadSprite_obj::get_theHeight( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.MadSprite","get_theHeight",0xd6f1d842,"com.danielfreeman.madcomponents.MadSprite.get_theHeight","com/danielfreeman/madcomponents/MadSprite.hx",101,0x9439c2c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	return this->get_height();
}


HX_DEFINE_DYNAMIC_FUNC0(MadSprite_obj,get_theHeight,return )

bool MadSprite_obj::set_isVisible( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.MadSprite","set_isVisible",0x526068be,"com.danielfreeman.madcomponents.MadSprite.set_isVisible","com/danielfreeman/madcomponents/MadSprite.hx",104,0x9439c2c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(105)
	this->set_visible(value);
	HX_STACK_LINE(106)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(MadSprite_obj,set_isVisible,return )

bool MadSprite_obj::get_isVisible( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.MadSprite","get_isVisible",0x0d5a86b2,"com.danielfreeman.madcomponents.MadSprite.get_isVisible","com/danielfreeman/madcomponents/MadSprite.hx",110,0x9439c2c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(110)
	return this->get_visible();
}


HX_DEFINE_DYNAMIC_FUNC0(MadSprite_obj,get_isVisible,return )

::String MadSprite_obj::set_text( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.MadSprite","set_text",0x5b9d3157,"com.danielfreeman.madcomponents.MadSprite.set_text","com/danielfreeman/madcomponents/MadSprite.hx",114,0x9439c2c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(114)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(MadSprite_obj,set_text,return )

::String MadSprite_obj::get_text( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.MadSprite","get_text",0xad3fd7e3,"com.danielfreeman.madcomponents.MadSprite.get_text","com/danielfreeman/madcomponents/MadSprite.hx",118,0x9439c2c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC0(MadSprite_obj,get_text,return )

::openfl::geom::Point MadSprite_obj::toPixelBoundary( ::openfl::display::DisplayObject target,Float x,Float y){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.MadSprite","toPixelBoundary",0x687e8b08,"com.danielfreeman.madcomponents.MadSprite.toPixelBoundary","com/danielfreeman/madcomponents/MadSprite.hx",122,0x9439c2c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(123)
	::openfl::geom::Point _g = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(123)
	::openfl::geom::Point globalPoint = target->localToGlobal(_g);		HX_STACK_VAR(globalPoint,"globalPoint");
	HX_STACK_LINE(124)
	Float _g1 = ::com::danielfreeman::madcomponents::UI_obj::get_scale();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(124)
	Float _g2 = (Float(globalPoint->x) / Float(_g1));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(124)
	int _g3 = ::Math_obj::round(_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(124)
	Float _g4 = ::com::danielfreeman::madcomponents::UI_obj::get_scale();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(124)
	Float _g5 = (_g3 * _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(124)
	Float _g6 = ::com::danielfreeman::madcomponents::UI_obj::get_scale();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(124)
	Float _g7 = (Float(globalPoint->y) / Float(_g6));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(124)
	int _g8 = ::Math_obj::round(_g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(124)
	Float _g9 = ::com::danielfreeman::madcomponents::UI_obj::get_scale();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(124)
	Float _g10 = (_g8 * _g9);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(124)
	::openfl::geom::Point _g11 = ::openfl::geom::Point_obj::__new(_g5,_g10);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(124)
	return target->globalToLocal(_g11);
}


HX_DEFINE_DYNAMIC_FUNC3(MadSprite_obj,toPixelBoundary,return )

::openfl::geom::Point MadSprite_obj::toPixelBoundaryDouble( ::openfl::display::DisplayObject target,Float x,Float y){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.MadSprite","toPixelBoundaryDouble",0xb6842039,"com.danielfreeman.madcomponents.MadSprite.toPixelBoundaryDouble","com/danielfreeman/madcomponents/MadSprite.hx",128,0x9439c2c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(129)
	::openfl::geom::Point _g = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(129)
	::openfl::geom::Point globalPoint = target->localToGlobal(_g);		HX_STACK_VAR(globalPoint,"globalPoint");
	HX_STACK_LINE(130)
	Float _g1 = ::com::danielfreeman::madcomponents::UI_obj::get_scale();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(130)
	Float _g2 = (Float(globalPoint->x) / Float(_g1));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(130)
	int _g3 = ::Math_obj::round(_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(130)
	Float _g4 = ::com::danielfreeman::madcomponents::UI_obj::get_scale();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(130)
	Float _g5 = (_g3 * _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(130)
	Float _g6 = ::com::danielfreeman::madcomponents::UI_obj::get_scale();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(130)
	Float _g7 = ((int)2 * _g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(130)
	Float _g8 = (Float(globalPoint->y) / Float(_g7));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(130)
	int _g9 = ::Math_obj::round(_g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(130)
	int _g10 = (_g9 * (int)2);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(130)
	Float _g11 = ::com::danielfreeman::madcomponents::UI_obj::get_scale();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(130)
	Float _g12 = (_g10 * _g11);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(130)
	::openfl::geom::Point _g13 = ::openfl::geom::Point_obj::__new(_g5,_g12);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(130)
	return target->globalToLocal(_g13);
}


HX_DEFINE_DYNAMIC_FUNC3(MadSprite_obj,toPixelBoundaryDouble,return )

Void MadSprite_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.MadSprite","destructor",0xa9d23026,"com.danielfreeman.madcomponents.MadSprite.destructor","com/danielfreeman/madcomponents/MadSprite.hx",134,0x9439c2c0)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MadSprite_obj,destructor,(void))


MadSprite_obj::MadSprite_obj()
{
}

void MadSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MadSprite);
	HX_MARK_MEMBER_NAME(_clickable,"_clickable");
	HX_MARK_MEMBER_NAME(_includeInLayout,"_includeInLayout");
	HX_MARK_MEMBER_NAME(_attributes,"_attributes");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MadSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_clickable,"_clickable");
	HX_VISIT_MEMBER_NAME(_includeInLayout,"_includeInLayout");
	HX_VISIT_MEMBER_NAME(_attributes,"_attributes");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MadSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"theWidth") ) { return get_theWidth(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickable") ) { return get_clickable(); }
		if (HX_FIELD_EQ(inName,"theHeight") ) { return get_theHeight(); }
		if (HX_FIELD_EQ(inName,"isVisible") ) { return get_isVisible(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attributes") ) { return get_attributes(); }
		if (HX_FIELD_EQ(inName,"_clickable") ) { return _clickable; }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_attributes") ) { return _attributes; }
		if (HX_FIELD_EQ(inName,"touchCancel") ) { return touchCancel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_theWidth") ) { return get_theWidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_clickable") ) { return set_clickable_dyn(); }
		if (HX_FIELD_EQ(inName,"get_clickable") ) { return get_clickable_dyn(); }
		if (HX_FIELD_EQ(inName,"get_theHeight") ) { return get_theHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_isVisible") ) { return set_isVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"get_isVisible") ) { return get_isVisible_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_attributes") ) { return get_attributes_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"includeInLayout") ) { return get_includeInLayout(); }
		if (HX_FIELD_EQ(inName,"toPixelBoundary") ) { return toPixelBoundary_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_includeInLayout") ) { return _includeInLayout; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_includeInLayout") ) { return set_includeInLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"get_includeInLayout") ) { return get_includeInLayout_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"toPixelBoundaryDouble") ) { return toPixelBoundaryDouble_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MadSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickable") ) { return set_clickable(inValue); }
		if (HX_FIELD_EQ(inName,"isVisible") ) { return set_isVisible(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_clickable") ) { _clickable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_attributes") ) { _attributes=inValue.Cast< ::com::danielfreeman::madcomponents::Attributes >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"includeInLayout") ) { return set_includeInLayout(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_includeInLayout") ) { _includeInLayout=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MadSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("clickable"));
	outFields->push(HX_CSTRING("includeInLayout"));
	outFields->push(HX_CSTRING("attributes"));
	outFields->push(HX_CSTRING("theWidth"));
	outFields->push(HX_CSTRING("theHeight"));
	outFields->push(HX_CSTRING("isVisible"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("_clickable"));
	outFields->push(HX_CSTRING("_includeInLayout"));
	outFields->push(HX_CSTRING("_attributes"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(MadSprite_obj,_clickable),HX_CSTRING("_clickable")},
	{hx::fsBool,(int)offsetof(MadSprite_obj,_includeInLayout),HX_CSTRING("_includeInLayout")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::Attributes*/ ,(int)offsetof(MadSprite_obj,_attributes),HX_CSTRING("_attributes")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_clickable"),
	HX_CSTRING("_includeInLayout"),
	HX_CSTRING("_attributes"),
	HX_CSTRING("set_clickable"),
	HX_CSTRING("get_clickable"),
	HX_CSTRING("set_includeInLayout"),
	HX_CSTRING("get_includeInLayout"),
	HX_CSTRING("touchCancel"),
	HX_CSTRING("get_attributes"),
	HX_CSTRING("layout"),
	HX_CSTRING("get_theWidth"),
	HX_CSTRING("get_theHeight"),
	HX_CSTRING("set_isVisible"),
	HX_CSTRING("get_isVisible"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_text"),
	HX_CSTRING("toPixelBoundary"),
	HX_CSTRING("toPixelBoundaryDouble"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MadSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MadSprite_obj::__mClass,"__mClass");
};

#endif

Class MadSprite_obj::__mClass;

void MadSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.MadSprite"), hx::TCanCast< MadSprite_obj> ,sStaticFields,sMemberFields,
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

void MadSprite_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
