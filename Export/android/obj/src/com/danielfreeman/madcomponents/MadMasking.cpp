#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadMasking
#include <com/danielfreeman/madcomponents/MadMasking.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
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
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
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

Void MadMasking_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.MadMasking","new",0x9aa44f8c,"com.danielfreeman.madcomponents.MadMasking.new","com/danielfreeman/madcomponents/MadMasking.hx",37,0xbaf96841)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(42)
	this->_mask = null();
	HX_STACK_LINE(41)
	this->_masking = false;
	HX_STACK_LINE(49)
	this->_xml = xml;
	HX_STACK_LINE(50)
	::com::danielfreeman::madcomponents::Attributes _g = attributes->copy(null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(50)
	super::__construct(screen,_g);
	HX_STACK_LINE(51)
	Float _g1 = attributes->get_widthH();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(51)
	Float _g2 = attributes->get_heightV();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(51)
	::openfl::geom::Point _g3 = ::openfl::geom::Point_obj::__new(_g1,_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(51)
	this->_maskSize = _g3;
}
;
	return null();
}

//MadMasking_obj::~MadMasking_obj() { }

Dynamic MadMasking_obj::__CreateEmpty() { return  new MadMasking_obj; }
hx::ObjectPtr< MadMasking_obj > MadMasking_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< MadMasking_obj > result = new MadMasking_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic MadMasking_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MadMasking_obj > result = new MadMasking_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool MadMasking_obj::set_masking( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.MadMasking","set_masking",0xfaad19c5,"com.danielfreeman.madcomponents.MadMasking.set_masking","com/danielfreeman/madcomponents/MadMasking.hx",55,0xbaf96841)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(56)
	if ((value)){
		HX_STACK_LINE(57)
		this->doMasking(null());
	}
	else{
		HX_STACK_LINE(59)
		if (((this->_mask != null()))){
			HX_STACK_LINE(60)
			this->_mask->get_graphics()->clear();
			HX_STACK_LINE(61)
			this->_mask->get_graphics()->beginFill((int)0,null());
		}
	}
	HX_STACK_LINE(63)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(MadMasking_obj,set_masking,return )

Void MadMasking_obj::startMasking( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.MadMasking","startMasking",0x07004688,"com.danielfreeman.madcomponents.MadMasking.startMasking","com/danielfreeman/madcomponents/MadMasking.hx",67,0xbaf96841)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		bool _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(68)
		if ((this->_xml->has->resolve(HX_CSTRING("mask")))){
			HX_STACK_LINE(68)
			::String _g = this->_xml->att->resolve(HX_CSTRING("mask"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(68)
			_g1 = (_g == HX_CSTRING("true"));
		}
		else{
			HX_STACK_LINE(68)
			_g1 = false;
		}
		HX_STACK_LINE(68)
		bool _g2 = this->_masking = _g1;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(68)
		this->set_masking(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MadMasking_obj,startMasking,(void))

Void MadMasking_obj::refreshMasking( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.MadMasking","refreshMasking",0x9c6def2f,"com.danielfreeman.madcomponents.MadMasking.refreshMasking","com/danielfreeman/madcomponents/MadMasking.hx",72,0xbaf96841)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(73)
		this->setMaskSize((  (((attributes != null()))) ? ::com::danielfreeman::madcomponents::Attributes(attributes) : ::com::danielfreeman::madcomponents::Attributes(this->_attributes) ));
		HX_STACK_LINE(74)
		this->set_masking(this->_masking);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MadMasking_obj,refreshMasking,(void))

Void MadMasking_obj::setMaskSize( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.MadMasking","setMaskSize",0x897a48bb,"com.danielfreeman.madcomponents.MadMasking.setMaskSize","com/danielfreeman/madcomponents/MadMasking.hx",78,0xbaf96841)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(79)
		Float _g = attributes->get_widthH();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(79)
		this->_maskSize->x = _g;
		HX_STACK_LINE(80)
		Float _g1 = attributes->get_heightV();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(80)
		this->_maskSize->y = _g1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MadMasking_obj,setMaskSize,(void))

Void MadMasking_obj::doMasking( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.MadMasking","doMasking",0x7dc7f757,"com.danielfreeman.madcomponents.MadMasking.doMasking","com/danielfreeman/madcomponents/MadMasking.hx",84,0xbaf96841)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(85)
		if (((attributes == null()))){
			HX_STACK_LINE(86)
			attributes = this->_attributes;
		}
		HX_STACK_LINE(88)
		if (((this->_mask == null()))){
			HX_STACK_LINE(89)
			::openfl::display::Shape _g = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(89)
			this->_mask = _g;
			HX_STACK_LINE(90)
			::openfl::display::DisplayObject _g1 = this->set_mask(this->_mask);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(90)
			this->addChild(_g1);
		}
		else{
			HX_STACK_LINE(93)
			this->_mask->get_graphics()->clear();
		}
		HX_STACK_LINE(95)
		this->_mask->get_graphics()->beginFill((int)0,null());
		HX_STACK_LINE(96)
		this->_mask->get_graphics()->drawRect((int)0,(int)0,this->_maskSize->x,this->_maskSize->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MadMasking_obj,doMasking,(void))

Void MadMasking_obj::cutout( ::openfl::geom::Rectangle rectangle){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.MadMasking","cutout",0x07163ca0,"com.danielfreeman.madcomponents.MadMasking.cutout","com/danielfreeman/madcomponents/MadMasking.hx",100,0xbaf96841)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rectangle,"rectangle")
		HX_STACK_LINE(101)
		if (((this->_mask == null()))){
			HX_STACK_LINE(102)
			this->doMasking(null());
		}
		HX_STACK_LINE(104)
		this->_mask->get_graphics()->drawRect(rectangle->x,rectangle->y,rectangle->width,rectangle->height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MadMasking_obj,cutout,(void))


MadMasking_obj::MadMasking_obj()
{
}

void MadMasking_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MadMasking);
	HX_MARK_MEMBER_NAME(_masking,"_masking");
	HX_MARK_MEMBER_NAME(_mask,"_mask");
	HX_MARK_MEMBER_NAME(_xml,"_xml");
	HX_MARK_MEMBER_NAME(_maskSize,"_maskSize");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MadMasking_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_masking,"_masking");
	HX_VISIT_MEMBER_NAME(_mask,"_mask");
	HX_VISIT_MEMBER_NAME(_xml,"_xml");
	HX_VISIT_MEMBER_NAME(_maskSize,"_maskSize");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MadMasking_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_xml") ) { return _xml; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_mask") ) { return _mask; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cutout") ) { return cutout_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_masking") ) { return _masking; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_maskSize") ) { return _maskSize; }
		if (HX_FIELD_EQ(inName,"doMasking") ) { return doMasking_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_masking") ) { return set_masking_dyn(); }
		if (HX_FIELD_EQ(inName,"setMaskSize") ) { return setMaskSize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"startMasking") ) { return startMasking_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"refreshMasking") ) { return refreshMasking_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MadMasking_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_xml") ) { _xml=inValue.Cast< ::MadXML >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_mask") ) { _mask=inValue.Cast< ::openfl::display::Shape >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"masking") ) { return set_masking(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_masking") ) { _masking=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_maskSize") ) { _maskSize=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MadMasking_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("masking"));
	outFields->push(HX_CSTRING("_masking"));
	outFields->push(HX_CSTRING("_mask"));
	outFields->push(HX_CSTRING("_xml"));
	outFields->push(HX_CSTRING("_maskSize"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(MadMasking_obj,_masking),HX_CSTRING("_masking")},
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(MadMasking_obj,_mask),HX_CSTRING("_mask")},
	{hx::fsObject /*::MadXML*/ ,(int)offsetof(MadMasking_obj,_xml),HX_CSTRING("_xml")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(MadMasking_obj,_maskSize),HX_CSTRING("_maskSize")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_masking"),
	HX_CSTRING("_mask"),
	HX_CSTRING("_xml"),
	HX_CSTRING("_maskSize"),
	HX_CSTRING("set_masking"),
	HX_CSTRING("startMasking"),
	HX_CSTRING("refreshMasking"),
	HX_CSTRING("setMaskSize"),
	HX_CSTRING("doMasking"),
	HX_CSTRING("cutout"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MadMasking_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MadMasking_obj::__mClass,"__mClass");
};

#endif

Class MadMasking_obj::__mClass;

void MadMasking_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.MadMasking"), hx::TCanCast< MadMasking_obj> ,sStaticFields,sMemberFields,
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

void MadMasking_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
