#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIPanel
#include <com/danielfreeman/extendedmadness/UIPanel.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadMasking
#include <com/danielfreeman/madcomponents/MadMasking.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIForm
#include <com/danielfreeman/madcomponents/UIForm.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void UIPanel_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,hx::Null< bool >  __o_row,hx::Null< bool >  __o_inGroup)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIPanel","new",0x164d44b6,"com.danielfreeman.extendedmadness.UIPanel.new","com/danielfreeman/extendedmadness/UIPanel.hx",71,0xa77e78fd)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
HX_STACK_ARG(__o_row,"row")
HX_STACK_ARG(__o_inGroup,"inGroup")
bool row = __o_row.Default(false);
bool inGroup = __o_inGroup.Default(false);
{
	HX_STACK_LINE(72)
	super::__construct(screen,xml,attributes,row,inGroup);
	HX_STACK_LINE(73)
	Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(73)
	this->_totalWidth = _g;
	HX_STACK_LINE(74)
	Float _g1 = this->get_height();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(74)
	Float _g2 = (_g1 + 16.0);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(74)
	this->_totalHeight = _g2;
}
;
	return null();
}

//UIPanel_obj::~UIPanel_obj() { }

Dynamic UIPanel_obj::__CreateEmpty() { return  new UIPanel_obj; }
hx::ObjectPtr< UIPanel_obj > UIPanel_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,hx::Null< bool >  __o_row,hx::Null< bool >  __o_inGroup)
{  hx::ObjectPtr< UIPanel_obj > result = new UIPanel_obj();
	result->__construct(screen,xml,attributes,__o_row,__o_inGroup);
	return result;}

Dynamic UIPanel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIPanel_obj > result = new UIPanel_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void UIPanel_obj::setSize( Float width,Float height){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIPanel","setSize",0x181138d9,"com.danielfreeman.extendedmadness.UIPanel.setSize","com/danielfreeman/extendedmadness/UIPanel.hx",78,0xa77e78fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(79)
		this->_totalWidth = width;
		HX_STACK_LINE(80)
		this->_totalHeight = height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIPanel_obj,setSize,(void))

Float UIPanel_obj::get_totalheight( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIPanel","get_totalheight",0xa3d0db98,"com.danielfreeman.extendedmadness.UIPanel.get_totalheight","com/danielfreeman/extendedmadness/UIPanel.hx",85,0xa77e78fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	return this->_totalHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(UIPanel_obj,get_totalheight,return )

Float UIPanel_obj::get_totalwidth( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIPanel","get_totalwidth",0x326da375,"com.danielfreeman.extendedmadness.UIPanel.get_totalwidth","com/danielfreeman/extendedmadness/UIPanel.hx",90,0xa77e78fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	return this->_totalWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(UIPanel_obj,get_totalwidth,return )

Void UIPanel_obj::parseBlock( ::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,::String mode,bool row){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIPanel","parseBlock",0x7cad1e84,"com.danielfreeman.extendedmadness.UIPanel.parseBlock","com/danielfreeman/extendedmadness/UIPanel.hx",95,0xa77e78fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(row,"row")
		HX_STACK_LINE(95)
		this->super::parseBlock(xml,attributes,mode,row);
	}
return null();
}


Float UIPanel_obj::PADDING;


UIPanel_obj::UIPanel_obj()
{
}

Dynamic UIPanel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalwidth") ) { return get_totalwidth(); }
		if (HX_FIELD_EQ(inName,"parseBlock") ) { return parseBlock_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalheight") ) { return get_totalheight(); }
		if (HX_FIELD_EQ(inName,"_totalWidth") ) { return _totalWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_totalHeight") ) { return _totalHeight; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_totalwidth") ) { return get_totalwidth_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_totalheight") ) { return get_totalheight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIPanel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_totalWidth") ) { _totalWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_totalHeight") ) { _totalHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIPanel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("totalheight"));
	outFields->push(HX_CSTRING("totalwidth"));
	outFields->push(HX_CSTRING("_totalWidth"));
	outFields->push(HX_CSTRING("_totalHeight"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("PADDING"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(UIPanel_obj,_totalWidth),HX_CSTRING("_totalWidth")},
	{hx::fsFloat,(int)offsetof(UIPanel_obj,_totalHeight),HX_CSTRING("_totalHeight")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_totalWidth"),
	HX_CSTRING("_totalHeight"),
	HX_CSTRING("setSize"),
	HX_CSTRING("get_totalheight"),
	HX_CSTRING("get_totalwidth"),
	HX_CSTRING("parseBlock"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIPanel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIPanel_obj::PADDING,"PADDING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIPanel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIPanel_obj::PADDING,"PADDING");
};

#endif

Class UIPanel_obj::__mClass;

void UIPanel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UIPanel"), hx::TCanCast< UIPanel_obj> ,sStaticFields,sMemberFields,
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

void UIPanel_obj::__boot()
{
	PADDING= 16.0;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
