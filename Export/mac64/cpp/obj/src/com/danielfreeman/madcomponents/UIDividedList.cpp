#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_Attributes
#include <com/danielfreeman/madcomponents/Attributes.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_Colour
#include <com/danielfreeman/madcomponents/Colour.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIDividedList
#include <com/danielfreeman/madcomponents/UIDividedList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIGroupedList
#include <com/danielfreeman/madcomponents/UIGroupedList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIList
#include <com/danielfreeman/madcomponents/UIList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical
#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
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
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UIDividedList_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIDividedList","new",0xb17efa13,"com.danielfreeman.madcomponents.UIDividedList.new","com/danielfreeman/madcomponents/UIDividedList.hx",20,0x368a0e00)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(21)
	int _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(21)
	if ((xml->has->resolve(HX_CSTRING("headingColour")))){
		HX_STACK_LINE(21)
		::String _g = xml->att->resolve(HX_CSTRING("headingColour"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(21)
		_g1 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g);
	}
	else{
		HX_STACK_LINE(21)
		_g1 = attributes->get_colour();
	}
	HX_STACK_LINE(21)
	int _g2 = this->_headingColour = _g1;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(21)
	this->_headingOffColour = _g2;
	HX_STACK_LINE(22)
	super::__construct(screen,xml,attributes);
}
;
	return null();
}

//UIDividedList_obj::~UIDividedList_obj() { }

Dynamic UIDividedList_obj::__CreateEmpty() { return  new UIDividedList_obj; }
hx::ObjectPtr< UIDividedList_obj > UIDividedList_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIDividedList_obj > result = new UIDividedList_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIDividedList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIDividedList_obj > result = new UIDividedList_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Float UIDividedList_obj::get_defaultGroupSpacing( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIDividedList","get_defaultGroupSpacing",0x206adc2f,"com.danielfreeman.madcomponents.UIDividedList.get_defaultGroupSpacing","com/danielfreeman/madcomponents/UIDividedList.hx",27,0x368a0e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	return (int)10;
}


int UIDividedList_obj::set_headingColour( int value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIDividedList","set_headingColour",0xefd55204,"com.danielfreeman.madcomponents.UIDividedList.set_headingColour","com/danielfreeman/madcomponents/UIDividedList.hx",31,0x368a0e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(32)
	this->_headingColour = value;
	HX_STACK_LINE(33)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIDividedList_obj,set_headingColour,return )

Void UIDividedList_obj::drawCell( Float position,int count,Dynamic record){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIDividedList","drawCell",0xbcc89933,"com.danielfreeman.madcomponents.UIDividedList.drawCell","com/danielfreeman/madcomponents/UIDividedList.hx",37,0x368a0e00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(record,"record")
		HX_STACK_LINE(38)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		if ((::Reflect_obj::hasField(record,HX_CSTRING("_colour")))){
			HX_STACK_LINE(38)
			_g = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(record->__Field(HX_CSTRING("_colour"),true));
		}
		else{
			HX_STACK_LINE(38)
			_g = (int)-1;
		}
		HX_STACK_LINE(38)
		this->drawSimpleCell(position,count,_g);
		HX_STACK_LINE(39)
		if (((  ((!(::Std_obj::is(record,hx::ClassOf< ::String >())))) ? bool(this->hasLines(record)) : bool(false) ))){
			HX_STACK_LINE(40)
			this->drawLines(position);
		}
		HX_STACK_LINE(42)
		int _g1 = ::Math_obj::ceil(position);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(42)
		this->_cellTop = _g1;
	}
return null();
}


Void UIDividedList_obj::drawHighlight( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIDividedList","drawHighlight",0xfbc4d103,"com.danielfreeman.madcomponents.UIDividedList.drawHighlight","com/danielfreeman/madcomponents/UIDividedList.hx",47,0x368a0e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		if (((  (((  ((this->highlightForIndex(this->_pressedCell))) ? bool((this->_groupPositions != null())) : bool(false) ))) ? bool((this->_groupPositions->__Field(HX_CSTRING("length"),true) > this->_group)) : bool(false) ))){
			HX_STACK_LINE(48)
			this->_highlight->get_graphics()->clear();
			HX_STACK_LINE(49)
			Dynamic groupDetails = this->_groupPositions->__GetItem(this->_group);		HX_STACK_VAR(groupDetails,"groupDetails");
			HX_STACK_LINE(50)
			bool autoLayout = (bool(this->_autoLayoutGroup) && bool(!(this->_simple)));		HX_STACK_VAR(autoLayout,"autoLayout");
			HX_STACK_LINE(51)
			Float top;		HX_STACK_VAR(top,"top");
			HX_STACK_LINE(51)
			if ((autoLayout)){
				HX_STACK_LINE(51)
				Float _g = this->_row->get_y();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(51)
				Float _g1 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(51)
				top = (_g - _g1);
			}
			else{
				HX_STACK_LINE(51)
				top = (groupDetails->__Field(HX_CSTRING("top"),true) + (this->_pressedCell * groupDetails->__Field(HX_CSTRING("cellHeight"),true)));
			}
			HX_STACK_LINE(52)
			Float _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(52)
			if ((autoLayout)){
				HX_STACK_LINE(52)
				Float _g2 = this->_row->get_height();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(52)
				Float _g3 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(52)
				Float _g4 = ((int)2 * _g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(52)
				_g5 = (_g2 + _g4);
			}
			else{
				HX_STACK_LINE(52)
				_g5 = groupDetails->__Field(HX_CSTRING("cellHeight"),true);
			}
			HX_STACK_LINE(52)
			Float bottom = (top + _g5);		HX_STACK_VAR(bottom,"bottom");
			HX_STACK_LINE(53)
			this->_highlight->get_graphics()->beginFill(this->_highlightColour,null());
			HX_STACK_LINE(54)
			Float _g6 = this->_attributes->get_widthH();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(54)
			this->_highlight->get_graphics()->drawRect((int)0,(top + (int)1),_g6,((bottom - top) - (int)1));
		}
	}
return null();
}


Void UIDividedList_obj::headingChrome( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIDividedList","headingChrome",0xb2cc6a4f,"com.danielfreeman.madcomponents.UIDividedList.headingChrome","com/danielfreeman/madcomponents/UIDividedList.hx",60,0x368a0e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		this->initDraw();
	}
return null();
}


Void UIDividedList_obj::initDraw( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIDividedList","initDraw",0xadc928a1,"com.danielfreeman.madcomponents.UIDividedList.initDraw","com/danielfreeman/madcomponents/UIDividedList.hx",64,0x368a0e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		int top = this->_cellTop;		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(66)
		::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(67)
		int headingColour;		HX_STACK_VAR(headingColour,"headingColour");
		HX_STACK_LINE(67)
		if (((  (((this->_groupPositions->__Field(HX_CSTRING("length"),true) > this->_group))) ? bool(this->_groupPositions->__GetItem(this->_group)->__Field(HX_CSTRING("visible"),true)) : bool(false) ))){
			HX_STACK_LINE(67)
			headingColour = this->_headingColour;
		}
		else{
			HX_STACK_LINE(67)
			headingColour = this->_headingOffColour;
		}
		HX_STACK_LINE(68)
		int _g = ::com::danielfreeman::madcomponents::Colour_obj::lighten(headingColour,(int)64);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(68)
		Array< int > gradient = Array_obj< int >::__new().Add(_g).Add(headingColour);		HX_STACK_VAR(gradient,"gradient");
		HX_STACK_LINE(69)
		bool autoLayout = (bool(!(this->_simple)) && bool(this->_autoLayoutGroup));		HX_STACK_VAR(autoLayout,"autoLayout");
		HX_STACK_LINE(70)
		this->super::initDraw();
		HX_STACK_LINE(71)
		if (((bool(autoLayout) && bool(this->_groupPositions->__GetItem(this->_group))))){
			HX_STACK_LINE(72)
			Float barTop;		HX_STACK_VAR(barTop,"barTop");
			HX_STACK_LINE(72)
			if (((this->_group > (int)0))){
				HX_STACK_LINE(72)
				barTop = (this->_groupPositions->__GetItem((this->_group - (int)1))->__Field(HX_CSTRING("bottom"),true) - this->_groupSpacing);
			}
			else{
				HX_STACK_LINE(72)
				barTop = (int)0;
			}
			HX_STACK_LINE(73)
			Float barBottom = this->_groupPositions->__GetItem(this->_group)->__Field(HX_CSTRING("top"),true);		HX_STACK_VAR(barBottom,"barBottom");
			HX_STACK_LINE(74)
			if ((this->_attributes->get_style7())){
				HX_STACK_LINE(75)
				this->_slider->get_graphics()->beginFill(headingColour,null());
			}
			else{
				HX_STACK_LINE(77)
				matr->createGradientBox(this->_width,(barBottom - barTop),(Float(::Math_obj::PI) / Float((int)2)),(int)0,barTop);
				HX_STACK_LINE(78)
				this->_slider->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,gradient,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)255)),matr,null(),null(),null());
			}
			HX_STACK_LINE(80)
			this->_slider->get_graphics()->drawRect((int)0,barTop,this->_width,(barBottom - barTop));
			HX_STACK_LINE(81)
			this->_slider->get_graphics()->beginFill(this->_colour,null());
			HX_STACK_LINE(82)
			this->_slider->get_graphics()->drawRect((int)0,(barBottom - (int)1),this->_width,(int)1);
		}
		else{
			HX_STACK_LINE(84)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(84)
			if (((this->_group > (int)0))){
				HX_STACK_LINE(84)
				Float _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(84)
				if ((autoLayout)){
					HX_STACK_LINE(84)
					_g1 = this->_attributes->get_paddingV();
				}
				else{
					HX_STACK_LINE(84)
					_g1 = (int)0;
				}
				HX_STACK_LINE(84)
				_g2 = (this->_groupPositions->__GetItem((this->_group - (int)1))->__Field(HX_CSTRING("bottom"),true) + _g1);
			}
			else{
				HX_STACK_LINE(84)
				_g2 = (int)0;
			}
			HX_STACK_LINE(84)
			int last = ::Math_obj::round(_g2);		HX_STACK_VAR(last,"last");
			HX_STACK_LINE(85)
			bool filling = (bool((this->_group == (int)0)) || bool(((top - last) > (int)2)));		HX_STACK_VAR(filling,"filling");
			HX_STACK_LINE(86)
			if ((this->_attributes->get_style7())){
				HX_STACK_LINE(87)
				this->_slider->get_graphics()->beginFill(headingColour,null());
			}
			else{
				HX_STACK_LINE(89)
				matr->createGradientBox(this->_width,(last - top),(Float(::Math_obj::PI) / Float((int)2)),(int)0,top);
				HX_STACK_LINE(90)
				this->_slider->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,gradient,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)255)),matr,null(),null(),null());
			}
			HX_STACK_LINE(92)
			this->_slider->get_graphics()->drawRect((int)0,last,this->_width,(top - last));
			HX_STACK_LINE(93)
			this->_slider->get_graphics()->beginFill(this->_colour,null());
			HX_STACK_LINE(94)
			this->_slider->get_graphics()->drawRect((int)0,(  ((filling)) ? Float(last) : Float(top) ),this->_width,(int)1);
		}
		HX_STACK_LINE(96)
		int _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(96)
		if ((this->_attributes->get_style7())){
			HX_STACK_LINE(96)
			_g3 = headingColour;
		}
		else{
			HX_STACK_LINE(96)
			_g3 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,(int)-32);
		}
		HX_STACK_LINE(96)
		this->_slider->get_graphics()->beginFill(_g3,null());
		HX_STACK_LINE(97)
		Float _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(97)
		if ((this->_attributes->get_style7())){
			HX_STACK_LINE(97)
			_g4 = (int)2;
		}
		else{
			HX_STACK_LINE(97)
			_g4 = (int)1;
		}
		HX_STACK_LINE(97)
		this->_slider->get_graphics()->drawRect((int)0,(this->_cellTop - (int)1),this->_width,_g4);
		HX_STACK_LINE(98)
		Float _g5 = -(this->_attributes->get_paddingV());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(98)
		Float _g6 = (_g5 - (int)1);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(98)
		this->_gapBetweenGroups = _g6;
	}
return null();
}


Void UIDividedList_obj::drawComponent( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIDividedList","drawComponent",0x1e186b8c,"com.danielfreeman.madcomponents.UIDividedList.drawComponent","com/danielfreeman/madcomponents/UIDividedList.hx",102,0x368a0e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(103)
		this->get_graphics()->clear();
		HX_STACK_LINE(104)
		if (((bool((this->_colours != null())) && bool((this->_colours->length > (int)0))))){
			HX_STACK_LINE(105)
			this->get_graphics()->beginFill(this->_colours->__get((int)0),null());
		}
		else{
			HX_STACK_LINE(107)
			this->get_graphics()->beginFill((int)0,(int)0);
		}
		HX_STACK_LINE(109)
		this->get_graphics()->drawRect((int)0,(int)0,this->_attributes->width,this->_attributes->height);
	}
return null();
}


Void UIDividedList_obj::initDrawGroups( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIDividedList","initDrawGroups",0x7cd36fd5,"com.danielfreeman.madcomponents.UIDividedList.initDrawGroups","com/danielfreeman/madcomponents/UIDividedList.hx",113,0x368a0e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(114)
		this->_slider->get_graphics()->clear();
		HX_STACK_LINE(115)
		if ((this->_simple)){
			HX_STACK_LINE(116)
			bool _g = this->_autoLayoutGroup = false;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(116)
			this->_autoLayout = _g;
		}
	}
return null();
}


Void UIDividedList_obj::calculateMaximumSlide( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIDividedList","calculateMaximumSlide",0x8de2ee2a,"com.danielfreeman.madcomponents.UIDividedList.calculateMaximumSlide","com/danielfreeman/madcomponents/UIDividedList.hx",122,0x368a0e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		this->superCalculateMaximumSlide();
	}
return null();
}



UIDividedList_obj::UIDividedList_obj()
{
}

Dynamic UIDividedList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"drawCell") ) { return drawCell_dyn(); }
		if (HX_FIELD_EQ(inName,"initDraw") ) { return initDraw_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawHighlight") ) { return drawHighlight_dyn(); }
		if (HX_FIELD_EQ(inName,"headingChrome") ) { return headingChrome_dyn(); }
		if (HX_FIELD_EQ(inName,"drawComponent") ) { return drawComponent_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_headingColour") ) { return _headingColour; }
		if (HX_FIELD_EQ(inName,"initDrawGroups") ) { return initDrawGroups_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_headingOffColour") ) { return _headingOffColour; }
		if (HX_FIELD_EQ(inName,"set_headingColour") ) { return set_headingColour_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"calculateMaximumSlide") ) { return calculateMaximumSlide_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_defaultGroupSpacing") ) { return get_defaultGroupSpacing_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIDividedList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"headingColour") ) { return set_headingColour(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_headingColour") ) { _headingColour=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_headingOffColour") ) { _headingOffColour=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIDividedList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("headingColour"));
	outFields->push(HX_CSTRING("_headingColour"));
	outFields->push(HX_CSTRING("_headingOffColour"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(UIDividedList_obj,_headingColour),HX_CSTRING("_headingColour")},
	{hx::fsInt,(int)offsetof(UIDividedList_obj,_headingOffColour),HX_CSTRING("_headingOffColour")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_headingColour"),
	HX_CSTRING("_headingOffColour"),
	HX_CSTRING("get_defaultGroupSpacing"),
	HX_CSTRING("set_headingColour"),
	HX_CSTRING("drawCell"),
	HX_CSTRING("drawHighlight"),
	HX_CSTRING("headingChrome"),
	HX_CSTRING("initDraw"),
	HX_CSTRING("drawComponent"),
	HX_CSTRING("initDrawGroups"),
	HX_CSTRING("calculateMaximumSlide"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIDividedList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIDividedList_obj::__mClass,"__mClass");
};

#endif

Class UIDividedList_obj::__mClass;

void UIDividedList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIDividedList"), hx::TCanCast< UIDividedList_obj> ,sStaticFields,sMemberFields,
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

void UIDividedList_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
