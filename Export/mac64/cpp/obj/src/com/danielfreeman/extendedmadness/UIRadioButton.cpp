#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIRadioButton
#include <com/danielfreeman/extendedmadness/UIRadioButton.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void UIRadioButton_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadioButton","new",0x09f2077f,"com.danielfreeman.extendedmadness.UIRadioButton.new","com/danielfreeman/extendedmadness/UIRadioButton.hx",61,0x0a676694)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(62)
	this->_group = screen;
	HX_STACK_LINE(63)
	if ((xml->has->resolve(HX_CSTRING("group")))){
		HX_STACK_LINE(64)
		::String key = xml->att->resolve(HX_CSTRING("group"));		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(65)
		::openfl::events::EventDispatcher _g = ::com::danielfreeman::extendedmadness::UIRadioButton_obj::_GROUPS->get(key);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		this->_group = _g;
		HX_STACK_LINE(66)
		if (((this->_group == null()))){
			HX_STACK_LINE(67)
			::openfl::events::EventDispatcher _g1 = ::openfl::events::EventDispatcher_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(67)
			this->_group = _g1;
			HX_STACK_LINE(68)
			::com::danielfreeman::extendedmadness::UIRadioButton_obj::_GROUPS->set(key,this->_group);
		}
	}
	HX_STACK_LINE(71)
	super::__construct(screen,xml,attributes);
	HX_STACK_LINE(72)
	this->_group->addEventListener(HX_CSTRING("toggle"),this->toggle_dyn(),null(),null(),null());
}
;
	return null();
}

//UIRadioButton_obj::~UIRadioButton_obj() { }

Dynamic UIRadioButton_obj::__CreateEmpty() { return  new UIRadioButton_obj; }
hx::ObjectPtr< UIRadioButton_obj > UIRadioButton_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIRadioButton_obj > result = new UIRadioButton_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIRadioButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIRadioButton_obj > result = new UIRadioButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void UIRadioButton_obj::toggle( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadioButton","toggle",0x4b9f85d5,"com.danielfreeman.extendedmadness.UIRadioButton.toggle","com/danielfreeman/extendedmadness/UIRadioButton.hx",82,0x0a676694)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(83)
		this->_state = (::com::danielfreeman::extendedmadness::UIRadioButton_obj::_FROM == hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(84)
		this->buttonChrome();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIRadioButton_obj,toggle,(void))

Void UIRadioButton_obj::makeTick( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadioButton","makeTick",0xa32550ec,"com.danielfreeman.extendedmadness.UIRadioButton.makeTick","com/danielfreeman/extendedmadness/UIRadioButton.hx",88,0x0a676694)
		HX_STACK_THIS(this)
	}
return null();
}


Void UIRadioButton_obj::buttonChrome( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadioButton","buttonChrome",0x85d53e0d,"com.danielfreeman.extendedmadness.UIRadioButton.buttonChrome","com/danielfreeman/extendedmadness/UIRadioButton.hx",93,0x0a676694)
		HX_STACK_THIS(this)
		HX_STACK_LINE(94)
		::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(95)
		int _g = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_colour,(int)80);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(95)
		int _g1 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(95)
		int _g2 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(95)
		Array< int > gradient = Array_obj< int >::__new().Add(_g).Add(_g1).Add(_g2);		HX_STACK_VAR(gradient,"gradient");
		HX_STACK_LINE(96)
		Float size;		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(96)
		if ((this->_alt)){
			HX_STACK_LINE(96)
			size = 18.0;
		}
		else{
			HX_STACK_LINE(96)
			size = 26.0;
		}
		HX_STACK_LINE(98)
		matr->createGradientBox((Float(size) / Float((int)2)),(Float(size) / Float((int)2)),(Float(::Math_obj::PI) / Float((int)2)),(int)0,(int)0);
		HX_STACK_LINE(99)
		this->get_graphics()->clear();
		HX_STACK_LINE(100)
		this->get_graphics()->beginFill((int)0,(int)0);
		HX_STACK_LINE(101)
		this->get_graphics()->drawRect((int)0,(int)0,(size + 10.0),size);
		HX_STACK_LINE(102)
		this->get_graphics()->beginFill(this->_offColour,null());
		HX_STACK_LINE(103)
		this->get_graphics()->drawCircle((Float(size) / Float((int)2)),(Float(size) / Float((int)2)),(Float(size) / Float((int)2)));
		HX_STACK_LINE(104)
		this->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,gradient,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)128).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(105)
		this->get_graphics()->drawCircle((Float(size) / Float((int)2)),(Float(size) / Float((int)2)),((Float(size) / Float((int)2)) - (int)1));
		HX_STACK_LINE(107)
		int colour;		HX_STACK_VAR(colour,"colour");
		HX_STACK_LINE(107)
		if ((this->_state)){
			HX_STACK_LINE(107)
			colour = this->_onColour;
		}
		else{
			HX_STACK_LINE(107)
			colour = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,(int)-128);
		}
		HX_STACK_LINE(108)
		int _g3 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(colour,null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(108)
		Dynamic _g4 = Dynamic( Array_obj<Dynamic>::__new().Add(colour).Add(_g3));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(108)
		this->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::RADIAL,_g4,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(109)
		this->get_graphics()->drawCircle((Float(size) / Float((int)2)),(Float(size) / Float((int)2)),(Float(size) / Float((int)4)));
	}
return null();
}


Void UIRadioButton_obj::clearState( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadioButton","clearState",0xa2d83005,"com.danielfreeman.extendedmadness.UIRadioButton.clearState","com/danielfreeman/extendedmadness/UIRadioButton.hx",113,0x0a676694)
		HX_STACK_THIS(this)
		HX_STACK_LINE(114)
		this->_state = false;
		HX_STACK_LINE(115)
		this->buttonChrome();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIRadioButton_obj,clearState,(void))

Void UIRadioButton_obj::redraw( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadioButton","redraw",0xbaf3ab78,"com.danielfreeman.extendedmadness.UIRadioButton.redraw","com/danielfreeman/extendedmadness/UIRadioButton.hx",119,0x0a676694)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		::com::danielfreeman::extendedmadness::UIRadioButton_obj::_FROM = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(122)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("toggle"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(122)
		this->_group->dispatchEvent(_g);
		HX_STACK_LINE(123)
		this->buttonChrome();
	}
return null();
}


Void UIRadioButton_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIRadioButton","destructor",0x5dd455fa,"com.danielfreeman.extendedmadness.UIRadioButton.destructor","com/danielfreeman/extendedmadness/UIRadioButton.hx",127,0x0a676694)
		HX_STACK_THIS(this)
		HX_STACK_LINE(128)
		this->super::destructor();
		HX_STACK_LINE(129)
		this->_group->removeEventListener(HX_CSTRING("toggle"),this->toggle_dyn(),null());
	}
return null();
}


::String UIRadioButton_obj::TOGGLE;

::haxe::ds::StringMap UIRadioButton_obj::_GROUPS;

::com::danielfreeman::extendedmadness::UIRadioButton UIRadioButton_obj::_FROM;


UIRadioButton_obj::UIRadioButton_obj()
{
}

void UIRadioButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIRadioButton);
	HX_MARK_MEMBER_NAME(_group,"_group");
	::com::danielfreeman::extendedmadness::UICheckBox_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIRadioButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_group,"_group");
	::com::danielfreeman::extendedmadness::UICheckBox_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIRadioButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_FROM") ) { return _FROM; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_group") ) { return _group; }
		if (HX_FIELD_EQ(inName,"toggle") ) { return toggle_dyn(); }
		if (HX_FIELD_EQ(inName,"redraw") ) { return redraw_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_GROUPS") ) { return _GROUPS; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"makeTick") ) { return makeTick_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearState") ) { return clearState_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonChrome") ) { return buttonChrome_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIRadioButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_FROM") ) { _FROM=inValue.Cast< ::com::danielfreeman::extendedmadness::UIRadioButton >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_group") ) { _group=inValue.Cast< ::openfl::events::EventDispatcher >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_GROUPS") ) { _GROUPS=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIRadioButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_group"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TOGGLE"),
	HX_CSTRING("_GROUPS"),
	HX_CSTRING("_FROM"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::events::EventDispatcher*/ ,(int)offsetof(UIRadioButton_obj,_group),HX_CSTRING("_group")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_group"),
	HX_CSTRING("toggle"),
	HX_CSTRING("makeTick"),
	HX_CSTRING("buttonChrome"),
	HX_CSTRING("clearState"),
	HX_CSTRING("redraw"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIRadioButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIRadioButton_obj::TOGGLE,"TOGGLE");
	HX_MARK_MEMBER_NAME(UIRadioButton_obj::_GROUPS,"_GROUPS");
	HX_MARK_MEMBER_NAME(UIRadioButton_obj::_FROM,"_FROM");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIRadioButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIRadioButton_obj::TOGGLE,"TOGGLE");
	HX_VISIT_MEMBER_NAME(UIRadioButton_obj::_GROUPS,"_GROUPS");
	HX_VISIT_MEMBER_NAME(UIRadioButton_obj::_FROM,"_FROM");
};

#endif

Class UIRadioButton_obj::__mClass;

void UIRadioButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UIRadioButton"), hx::TCanCast< UIRadioButton_obj> ,sStaticFields,sMemberFields,
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

void UIRadioButton_obj::__boot()
{
	TOGGLE= HX_CSTRING("toggle");
	_GROUPS= ::haxe::ds::StringMap_obj::__new();
	_FROM= null();
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
