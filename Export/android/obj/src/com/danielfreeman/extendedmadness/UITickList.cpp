#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UITick
#include <com/danielfreeman/extendedmadness/UITick.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UITickList
#include <com/danielfreeman/extendedmadness/UITickList.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UI
#include <com/danielfreeman/madcomponents/UI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIList
#include <com/danielfreeman/madcomponents/UIList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical
#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
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

Void UITickList_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITickList","new",0x210b4a0d,"com.danielfreeman.extendedmadness.UITickList.new","com/danielfreeman/extendedmadness/UITickList.hx",101,0x97fa5460)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(109)
	this->_tickColour = (int)10066346;
	HX_STACK_LINE(114)
	if ((xml->has->resolve(HX_CSTRING("tickColour")))){
		HX_STACK_LINE(115)
		::String _g = xml->att->resolve(HX_CSTRING("tickColour"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(115)
		::String _g1 = ::Std_obj::string(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(115)
		int _g2 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(115)
		this->_tickColour = _g2;
	}
	HX_STACK_LINE(117)
	super::__construct(screen,xml,attributes);
}
;
	return null();
}

//UITickList_obj::~UITickList_obj() { }

Dynamic UITickList_obj::__CreateEmpty() { return  new UITickList_obj; }
hx::ObjectPtr< UITickList_obj > UITickList_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UITickList_obj > result = new UITickList_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UITickList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UITickList_obj > result = new UITickList_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void UITickList_obj::drawCell( Float position,int count,Dynamic record){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITickList","drawCell",0x98761ef9,"com.danielfreeman.extendedmadness.UITickList.drawCell","com/danielfreeman/extendedmadness/UITickList.hx",123,0x97fa5460)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(record,"record")
		HX_STACK_LINE(124)
		::String _g = ::Std_obj::string(count);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(124)
		::String _g1 = (HX_CSTRING("tick_") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(124)
		::com::danielfreeman::extendedmadness::UITick tick;		HX_STACK_VAR(tick,"tick");
		HX_STACK_LINE(124)
		tick = hx::TCast< com::danielfreeman::extendedmadness::UITick >::cast(this->_slider->getChildByName(_g1));
		HX_STACK_LINE(125)
		if (((tick != null()))){
			HX_STACK_LINE(126)
			Float _g2 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(126)
			Float _g3 = (this->_width - _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(126)
			Float _g4 = (_g3 - 18.0);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(126)
			tick->set_x(_g4);
		}
		else{
			HX_STACK_LINE(129)
			::String _g5 = ::Std_obj::string(count);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(129)
			::String _g6 = (HX_CSTRING("label_") + _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(129)
			::openfl::display::DisplayObject cell = this->_slider->getChildByName(_g6);		HX_STACK_VAR(cell,"cell");
			HX_STACK_LINE(130)
			Float _g7 = cell->get_y();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(130)
			Float _g8 = (_g7 + position);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(130)
			Float _g9 = (_g8 - 18.0);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(130)
			Float _g10 = (Float(_g9) / Float((int)2));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(130)
			Float _g11 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(130)
			Float _g12;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(130)
			_g12 = (((  ((this->_simple)) ? Float(1.0) : Float(0.5) )) * _g11);
			HX_STACK_LINE(130)
			Float yPosition = (_g10 - _g12);		HX_STACK_VAR(yPosition,"yPosition");
			HX_STACK_LINE(131)
			Float _g13 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(131)
			Float _g14 = (this->_width - _g13);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(131)
			Float _g15 = (_g14 - 18.0);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(131)
			::com::danielfreeman::extendedmadness::UITick _g16 = ::com::danielfreeman::extendedmadness::UITick_obj::__new(this->_slider,_g15,yPosition,this->_tickColour,null());		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(131)
			tick = _g16;
			HX_STACK_LINE(132)
			::String _g17 = ::Std_obj::string(count);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(132)
			::String _g18 = (HX_CSTRING("tick_") + _g17);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(132)
			tick->set_name(_g18);
			HX_STACK_LINE(133)
			bool _g19;		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(133)
			if ((!(::Std_obj::is(record,hx::ClassOf< ::String >())))){
				HX_STACK_LINE(133)
				if ((::Reflect_obj::hasField(record,HX_CSTRING("_tick")))){
					HX_STACK_LINE(133)
					_g19 = (record->__Field(HX_CSTRING("_tick"),true) == HX_CSTRING("true"));
				}
				else{
					HX_STACK_LINE(133)
					_g19 = false;
				}
			}
			else{
				HX_STACK_LINE(133)
				_g19 = false;
			}
			HX_STACK_LINE(133)
			tick->set_visible(_g19);
		}
		HX_STACK_LINE(135)
		this->super::drawCell(position,count,record);
	}
return null();
}


Void UITickList_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITickList","mouseUp",0x212d480d,"com.danielfreeman.extendedmadness.UITickList.mouseUp","com/danielfreeman/extendedmadness/UITickList.hx",139,0x97fa5460)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(140)
		if (((bool(!(this->_classic)) && bool(this->_rowClick)))){
			HX_STACK_LINE(141)
			this->doClick();
		}
		HX_STACK_LINE(143)
		this->super::mouseUp(event);
	}
return null();
}


Void UITickList_obj::doClick( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITickList","doClick",0xdc45b0ea,"com.danielfreeman.extendedmadness.UITickList.doClick","com/danielfreeman/extendedmadness/UITickList.hx",147,0x97fa5460)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		::String _g = ::Std_obj::string(this->_pressedCell);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(148)
		::String _g1 = (HX_CSTRING("tick_") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(148)
		::com::danielfreeman::extendedmadness::UITick tick;		HX_STACK_VAR(tick,"tick");
		HX_STACK_LINE(148)
		tick = hx::TCast< com::danielfreeman::extendedmadness::UITick >::cast(this->_slider->getChildByName(_g1));
		HX_STACK_LINE(149)
		if (((tick != null()))){
			HX_STACK_LINE(150)
			bool _g2 = !(tick->get_visible());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(150)
			tick->set_visible(_g2);
		}
		HX_STACK_LINE(152)
		bool _g3 = tick->get_visible();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(152)
		this->_filteredData->__GetItem(this->_pressedCell)->__FieldRef(HX_CSTRING("_tick")) = _g3;
		HX_STACK_LINE(153)
		::openfl::events::Event _g4 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(153)
		this->dispatchEvent(_g4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UITickList_obj,doClick,(void))

::openfl::display::DisplayObject UITickList_obj::pressButton( hx::Null< bool >  __o_show){
bool show = __o_show.Default(true);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITickList","pressButton",0x81759c82,"com.danielfreeman.extendedmadness.UITickList.pressButton","com/danielfreeman/extendedmadness/UITickList.hx",157,0x97fa5460)
	HX_STACK_THIS(this)
	HX_STACK_ARG(show,"show")
{
		HX_STACK_LINE(158)
		this->super::pressButton(null());
		HX_STACK_LINE(159)
		if (((bool((bool(this->_classic) && bool((this->_pressButton == null())))) && bool(this->_clickRow)))){
			HX_STACK_LINE(160)
			this->doClick();
		}
		HX_STACK_LINE(162)
		return this->_pressButton;
	}
}


Dynamic UITickList_obj::get_tickData( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITickList","get_tickData",0xc218d4e3,"com.danielfreeman.extendedmadness.UITickList.get_tickData","com/danielfreeman/extendedmadness/UITickList.hx",169,0x97fa5460)
	HX_STACK_THIS(this)
	HX_STACK_LINE(170)
	Dynamic result = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(171)
	Array< int > ticks = this->get_tickIndexes();		HX_STACK_VAR(ticks,"ticks");
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		while((true)){
			HX_STACK_LINE(172)
			if ((!(((_g < ticks->length))))){
				HX_STACK_LINE(172)
				break;
			}
			HX_STACK_LINE(172)
			int tick = ticks->__get(_g);		HX_STACK_VAR(tick,"tick");
			HX_STACK_LINE(172)
			++(_g);
			HX_STACK_LINE(173)
			result->__Field(HX_CSTRING("push"),true)(this->_filteredData->__GetItem(tick));
		}
	}
	HX_STACK_LINE(175)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(UITickList_obj,get_tickData,return )

Array< int > UITickList_obj::get_tickIndexes( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITickList","get_tickIndexes",0x235516e7,"com.danielfreeman.extendedmadness.UITickList.get_tickIndexes","com/danielfreeman/extendedmadness/UITickList.hx",181,0x97fa5460)
	HX_STACK_THIS(this)
	HX_STACK_LINE(182)
	Array< int > result = Array_obj< int >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(183)
	::com::danielfreeman::extendedmadness::UITick tick;		HX_STACK_VAR(tick,"tick");
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(184)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(184)
		int _g = this->_count;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(184)
		while((true)){
			HX_STACK_LINE(184)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(184)
				break;
			}
			HX_STACK_LINE(184)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(185)
			::String _g2 = ::Std_obj::string(i);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(185)
			::String _g11 = (HX_CSTRING("tick_") + _g2);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(185)
			::com::danielfreeman::extendedmadness::UITick _g21;		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(185)
			_g21 = hx::TCast< com::danielfreeman::extendedmadness::UITick >::cast(this->_slider->getChildByName(_g11));
			HX_STACK_LINE(185)
			tick = _g21;
			HX_STACK_LINE(186)
			if ((tick->get_visible())){
				HX_STACK_LINE(187)
				result->push(i);
			}
		}
	}
	HX_STACK_LINE(190)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(UITickList_obj,get_tickIndexes,return )

int UITickList_obj::TICK_COLOUR;


UITickList_obj::UITickList_obj()
{
}

void UITickList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UITickList);
	HX_MARK_MEMBER_NAME(_tickColour,"_tickColour");
	HX_MARK_MEMBER_NAME(_saveTicks,"_saveTicks");
	::com::danielfreeman::madcomponents::UIList_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UITickList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tickColour,"_tickColour");
	HX_VISIT_MEMBER_NAME(_saveTicks,"_saveTicks");
	::com::danielfreeman::madcomponents::UIList_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UITickList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"doClick") ) { return doClick_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tickData") ) { return get_tickData(); }
		if (HX_FIELD_EQ(inName,"drawCell") ) { return drawCell_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_saveTicks") ) { return _saveTicks; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tickIndexes") ) { return get_tickIndexes(); }
		if (HX_FIELD_EQ(inName,"_tickColour") ) { return _tickColour; }
		if (HX_FIELD_EQ(inName,"pressButton") ) { return pressButton_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_tickData") ) { return get_tickData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_tickIndexes") ) { return get_tickIndexes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UITickList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_saveTicks") ) { _saveTicks=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_tickColour") ) { _tickColour=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UITickList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tickData"));
	outFields->push(HX_CSTRING("tickIndexes"));
	outFields->push(HX_CSTRING("_tickColour"));
	outFields->push(HX_CSTRING("_saveTicks"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TICK_COLOUR"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(UITickList_obj,_tickColour),HX_CSTRING("_tickColour")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(UITickList_obj,_saveTicks),HX_CSTRING("_saveTicks")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_tickColour"),
	HX_CSTRING("_saveTicks"),
	HX_CSTRING("drawCell"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("doClick"),
	HX_CSTRING("pressButton"),
	HX_CSTRING("get_tickData"),
	HX_CSTRING("get_tickIndexes"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UITickList_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UITickList_obj::TICK_COLOUR,"TICK_COLOUR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UITickList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UITickList_obj::TICK_COLOUR,"TICK_COLOUR");
};

#endif

Class UITickList_obj::__mClass;

void UITickList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UITickList"), hx::TCanCast< UITickList_obj> ,sStaticFields,sMemberFields,
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

void UITickList_obj::__boot()
{
	TICK_COLOUR= (int)10066346;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
