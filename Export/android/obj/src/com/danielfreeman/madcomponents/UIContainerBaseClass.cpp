#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_Attributes
#include <com/danielfreeman/madcomponents/Attributes.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IComponentUI
#include <com/danielfreeman/madcomponents/IComponentUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IContainerUI
#include <com/danielfreeman/madcomponents/IContainerUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIContainerBaseClass
#include <com/danielfreeman/madcomponents/UIContainerBaseClass.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UIContainerBaseClass_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIContainerBaseClass","new",0x5f4cb800,"com.danielfreeman.madcomponents.UIContainerBaseClass.new","com/danielfreeman/madcomponents/UIContainerBaseClass.hx",18,0xb87fe08d)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(20)
	this->_xml = xml;
	HX_STACK_LINE(23)
	super::__construct(screen,attributes);
	HX_STACK_LINE(24)
	this->initialise(xml,attributes);
	HX_STACK_LINE(25)
	this->drawComponent();
}
;
	return null();
}

//UIContainerBaseClass_obj::~UIContainerBaseClass_obj() { }

Dynamic UIContainerBaseClass_obj::__CreateEmpty() { return  new UIContainerBaseClass_obj; }
hx::ObjectPtr< UIContainerBaseClass_obj > UIContainerBaseClass_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIContainerBaseClass_obj > result = new UIContainerBaseClass_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIContainerBaseClass_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIContainerBaseClass_obj > result = new UIContainerBaseClass_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UIContainerBaseClass_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	if (inType==typeid( ::com::danielfreeman::madcomponents::IContainerUI_obj)) return operator ::com::danielfreeman::madcomponents::IContainerUI_obj *();
	return super::__ToInterface(inType);
}

Void UIContainerBaseClass_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIContainerBaseClass","layout",0xbecc4b0a,"com.danielfreeman.madcomponents.UIContainerBaseClass.layout","com/danielfreeman/madcomponents/UIContainerBaseClass.hx",29,0xb87fe08d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(30)
		this->super::layout(attributes);
		HX_STACK_LINE(31)
		this->drawComponent();
	}
return null();
}


Void UIContainerBaseClass_obj::initialise( ::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIContainerBaseClass","initialise",0x21447797,"com.danielfreeman.madcomponents.UIContainerBaseClass.initialise","com/danielfreeman/madcomponents/UIContainerBaseClass.hx",35,0xb87fe08d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_ARG(attributes,"attributes")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIContainerBaseClass_obj,initialise,(void))

Void UIContainerBaseClass_obj::drawComponent( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIContainerBaseClass","drawComponent",0x713db3b9,"com.danielfreeman.madcomponents.UIContainerBaseClass.drawComponent","com/danielfreeman/madcomponents/UIContainerBaseClass.hx",40,0xb87fe08d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIContainerBaseClass_obj,drawComponent,(void))

::MadXML UIContainerBaseClass_obj::get_xml( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIContainerBaseClass","get_xml",0x11e56e0e,"com.danielfreeman.madcomponents.UIContainerBaseClass.get_xml","com/danielfreeman/madcomponents/UIContainerBaseClass.hx",46,0xb87fe08d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	return this->_xml;
}


HX_DEFINE_DYNAMIC_FUNC0(UIContainerBaseClass_obj,get_xml,return )

::openfl::display::DisplayObject UIContainerBaseClass_obj::findViewById( ::String id,hx::Null< int >  __o_row,hx::Null< int >  __o_group){
int row = __o_row.Default(-1);
int group = __o_group.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIContainerBaseClass","findViewById",0xce800050,"com.danielfreeman.madcomponents.UIContainerBaseClass.findViewById","com/danielfreeman/madcomponents/UIContainerBaseClass.hx",51,0xb87fe08d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(group,"group")
{
		HX_STACK_LINE(51)
		return this->getChildByName(id);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(UIContainerBaseClass_obj,findViewById,return )

Void UIContainerBaseClass_obj::clear( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIContainerBaseClass","clear",0x0515812d,"com.danielfreeman.madcomponents.UIContainerBaseClass.clear","com/danielfreeman/madcomponents/UIContainerBaseClass.hx",56,0xb87fe08d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		this->get_graphics()->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIContainerBaseClass_obj,clear,(void))

Array< ::Dynamic > UIContainerBaseClass_obj::get_pages( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIContainerBaseClass","get_pages",0xc580e73b,"com.danielfreeman.madcomponents.UIContainerBaseClass.get_pages","com/danielfreeman/madcomponents/UIContainerBaseClass.hx",61,0xb87fe08d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	return Array_obj< ::Dynamic >::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(UIContainerBaseClass_obj,get_pages,return )


UIContainerBaseClass_obj::UIContainerBaseClass_obj()
{
}

void UIContainerBaseClass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIContainerBaseClass);
	HX_MARK_MEMBER_NAME(_xml,"_xml");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIContainerBaseClass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_xml,"_xml");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIContainerBaseClass_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { return get_xml(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_xml") ) { return _xml; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pages") ) { return get_pages(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_xml") ) { return get_xml_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_pages") ) { return get_pages_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialise") ) { return initialise_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"findViewById") ) { return findViewById_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawComponent") ) { return drawComponent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIContainerBaseClass_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_xml") ) { _xml=inValue.Cast< ::MadXML >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIContainerBaseClass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("xml"));
	outFields->push(HX_CSTRING("pages"));
	outFields->push(HX_CSTRING("_xml"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::MadXML*/ ,(int)offsetof(UIContainerBaseClass_obj,_xml),HX_CSTRING("_xml")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_xml"),
	HX_CSTRING("layout"),
	HX_CSTRING("initialise"),
	HX_CSTRING("drawComponent"),
	HX_CSTRING("get_xml"),
	HX_CSTRING("findViewById"),
	HX_CSTRING("clear"),
	HX_CSTRING("get_pages"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIContainerBaseClass_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIContainerBaseClass_obj::__mClass,"__mClass");
};

#endif

Class UIContainerBaseClass_obj::__mClass;

void UIContainerBaseClass_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIContainerBaseClass"), hx::TCanCast< UIContainerBaseClass_obj> ,sStaticFields,sMemberFields,
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

void UIContainerBaseClass_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
