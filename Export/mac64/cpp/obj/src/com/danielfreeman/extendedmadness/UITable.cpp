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
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UITable
#include <com/danielfreeman/extendedmadness/UITable.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIForm
#include <com/danielfreeman/madcomponents/UIForm.h>
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
namespace extendedmadness{

Void UITable_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITable","new",0x33c2cec0,"com.danielfreeman.extendedmadness.UITable.new","com/danielfreeman/extendedmadness/UITable.hx",52,0xc32d7e33)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(58)
	this->_lineColour = (int)7829367;
	HX_STACK_LINE(62)
	bool _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(62)
	if ((!((!(xml->has->resolve(HX_CSTRING("lines"))))))){
		HX_STACK_LINE(62)
		::String _g = xml->att->resolve(HX_CSTRING("lines"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		_g1 = (_g != HX_CSTRING("false"));
	}
	else{
		HX_STACK_LINE(62)
		_g1 = true;
	}
	HX_STACK_LINE(62)
	this->_lines = _g1;
	HX_STACK_LINE(63)
	if ((xml->has->resolve(HX_CSTRING("lineColour")))){
		HX_STACK_LINE(64)
		::String _g2 = xml->att->resolve(HX_CSTRING("lineColour"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(64)
		int _g3 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(64)
		this->_lineColour = _g3;
	}
	HX_STACK_LINE(66)
	super::__construct(screen,xml,attributes,null(),null());
}
;
	return null();
}

//UITable_obj::~UITable_obj() { }

Dynamic UITable_obj::__CreateEmpty() { return  new UITable_obj; }
hx::ObjectPtr< UITable_obj > UITable_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UITable_obj > result = new UITable_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UITable_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UITable_obj > result = new UITable_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void UITable_obj::drawBackground( Array< int > colours){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITable","drawBackground",0x67064eb2,"com.danielfreeman.extendedmadness.UITable.drawBackground","com/danielfreeman/extendedmadness/UITable.hx",70,0xc32d7e33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(colours,"colours")
		HX_STACK_LINE(73)
		Float border;		HX_STACK_VAR(border,"border");
		HX_STACK_LINE(73)
		if ((this->_attributes->get_hasBorder())){
			HX_STACK_LINE(73)
			border = ::com::danielfreeman::madcomponents::UI_obj::PADDING;
		}
		else{
			HX_STACK_LINE(73)
			border = (int)0;
		}
		HX_STACK_LINE(74)
		Float maxWidth = ((this->_attributes->width + ((int)2 * border)) - (int)1);		HX_STACK_VAR(maxWidth,"maxWidth");
		HX_STACK_LINE(75)
		Float maxHeight = ((this->_attributes->height + ((int)2 * border)) - (int)1);		HX_STACK_VAR(maxHeight,"maxHeight");
		HX_STACK_LINE(76)
		Float _g = this->_attributes->get_paddingH();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(76)
		Float x2 = (border - _g1);		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(77)
		Float x3 = ::Math_obj::max(x2,(int)0);		HX_STACK_VAR(x3,"x3");
		HX_STACK_LINE(78)
		Float _g2 = this->_attributes->get_heightV();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(78)
		Float _g3 = (_g2 + border);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(78)
		Float _g4 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(78)
		Float y2 = (_g3 + _g4);		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(80)
		if (((colours == null()))){
			HX_STACK_LINE(81)
			Array< int > _g5 = this->_attributes->get_backgroundColours();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(81)
			colours = _g5;
		}
		HX_STACK_LINE(84)
		this->get_graphics()->clear();
		HX_STACK_LINE(85)
		this->get_graphics()->beginFill((  (((colours->length > (int)0))) ? int(colours->__get((int)0)) : int((int)16777215) ),null());
		HX_STACK_LINE(86)
		Float _g6 = this->_attributes->get_widthH();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(86)
		Float _g7 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(86)
		Float _g8 = (_g6 + _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(86)
		Float _g9 = ::Math_obj::min(_g8,maxWidth);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(86)
		Float _g10 = (_g9 - ((x3 - x2)));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(86)
		Float _g11 = this->_attributes->get_heightV();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(86)
		Float _g12 = (_g11 + border);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(86)
		Float _g13 = ::Math_obj::min(_g12,(maxHeight - border));		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(86)
		this->get_graphics()->drawRect(x3,border,_g10,_g13);
		HX_STACK_LINE(87)
		this->get_graphics()->beginFill(this->_lineColour,null());
		HX_STACK_LINE(88)
		::com::danielfreeman::madcomponents::UIForm panel;		HX_STACK_VAR(panel,"panel");
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			int _g14 = (int)0;		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(89)
			int _g5 = this->get_numChildren();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(89)
			while((true)){
				HX_STACK_LINE(89)
				if ((!(((_g14 < _g5))))){
					HX_STACK_LINE(89)
					break;
				}
				HX_STACK_LINE(89)
				int i = (_g14)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(90)
				::com::danielfreeman::madcomponents::UIForm _g141;		HX_STACK_VAR(_g141,"_g141");
				HX_STACK_LINE(90)
				_g141 = hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(this->getChildAt(i));
				HX_STACK_LINE(90)
				panel = _g141;
				HX_STACK_LINE(91)
				Float _g15 = panel->get_attributes()->get_paddingH();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(91)
				Float _g16 = (Float(_g15) / Float((int)2));		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(91)
				Float x0 = (border - _g16);		HX_STACK_VAR(x0,"x0");
				HX_STACK_LINE(92)
				Float _g17 = panel->get_y();		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(92)
				Float _g18 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(92)
				Float _g19 = (Float(_g18) / Float((int)2));		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(92)
				Float y0 = (_g17 - _g19);		HX_STACK_VAR(y0,"y0");
				HX_STACK_LINE(93)
				Float x1 = ::Math_obj::max(x0,(int)0);		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(94)
				Float y1 = ::Math_obj::max(y0,(int)0);		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(95)
				Float _g20 = this->_attributes->get_widthH();		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(95)
				Float _g21 = panel->get_attributes()->get_paddingH();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(95)
				Float _g22 = (_g20 + _g21);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(95)
				Float _g23 = (_g22 - ((x1 - x0)));		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(95)
				this->get_graphics()->drawRect(x1,y1,_g23,(int)1);
				HX_STACK_LINE(96)
				{
					HX_STACK_LINE(96)
					int _g31 = (int)0;		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(96)
					int _g24 = panel->get_numChildren();		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(96)
					while((true)){
						HX_STACK_LINE(96)
						if ((!(((_g31 < _g24))))){
							HX_STACK_LINE(96)
							break;
						}
						HX_STACK_LINE(96)
						int j = (_g31)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(97)
						::com::danielfreeman::madcomponents::UIForm cell;		HX_STACK_VAR(cell,"cell");
						HX_STACK_LINE(97)
						cell = hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(panel->getChildAt(j));
						HX_STACK_LINE(98)
						Float _g241 = cell->get_x();		HX_STACK_VAR(_g241,"_g241");
						HX_STACK_LINE(98)
						Float _g25 = (x0 + _g241);		HX_STACK_VAR(_g25,"_g25");
						HX_STACK_LINE(98)
						Float _g26 = ::Math_obj::max(_g25,(int)0);		HX_STACK_VAR(_g26,"_g26");
						HX_STACK_LINE(98)
						Float _g27 = panel->get_attributes()->get_heightV();		HX_STACK_VAR(_g27,"_g27");
						HX_STACK_LINE(98)
						Float _g28 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g28,"_g28");
						HX_STACK_LINE(98)
						Float _g29 = (_g27 + _g28);		HX_STACK_VAR(_g29,"_g29");
						HX_STACK_LINE(98)
						Float _g30 = (_g29 - ((y1 - y0)));		HX_STACK_VAR(_g30,"_g30");
						HX_STACK_LINE(98)
						Float _g311 = (_g30 - (int)1);		HX_STACK_VAR(_g311,"_g311");
						HX_STACK_LINE(98)
						this->get_graphics()->drawRect(_g26,(y1 + (int)1),(int)1,_g311);
					}
				}
			}
		}
		HX_STACK_LINE(101)
		Float _g32 = this->_attributes->get_widthH();		HX_STACK_VAR(_g32,"_g32");
		HX_STACK_LINE(101)
		Float _g33 = (border + _g32);		HX_STACK_VAR(_g33,"_g33");
		HX_STACK_LINE(101)
		Float _g34 = panel->get_attributes()->get_paddingH();		HX_STACK_VAR(_g34,"_g34");
		HX_STACK_LINE(101)
		Float _g35 = (Float(_g34) / Float((int)2));		HX_STACK_VAR(_g35,"_g35");
		HX_STACK_LINE(101)
		Float _g36 = (_g33 + _g35);		HX_STACK_VAR(_g36,"_g36");
		HX_STACK_LINE(101)
		Float _g37 = ::Math_obj::min(_g36,maxWidth);		HX_STACK_VAR(_g37,"_g37");
		HX_STACK_LINE(101)
		Float _g38 = this->_attributes->get_heightV();		HX_STACK_VAR(_g38,"_g38");
		HX_STACK_LINE(101)
		Float _g39 = (_g38 + border);		HX_STACK_VAR(_g39,"_g39");
		HX_STACK_LINE(101)
		Float _g40 = ::Math_obj::min(_g39,(maxHeight - border));		HX_STACK_VAR(_g40,"_g40");
		HX_STACK_LINE(101)
		this->get_graphics()->drawRect(_g37,border,(int)1,_g40);
		HX_STACK_LINE(102)
		Float _g41 = ::Math_obj::min(y2,maxHeight);		HX_STACK_VAR(_g41,"_g41");
		HX_STACK_LINE(102)
		Float _g42 = this->_attributes->get_widthH();		HX_STACK_VAR(_g42,"_g42");
		HX_STACK_LINE(102)
		Float _g43 = panel->get_attributes()->get_paddingH();		HX_STACK_VAR(_g43,"_g43");
		HX_STACK_LINE(102)
		Float _g44 = (_g42 + _g43);		HX_STACK_VAR(_g44,"_g44");
		HX_STACK_LINE(102)
		Float _g45 = ::Math_obj::min(_g44,maxWidth);		HX_STACK_VAR(_g45,"_g45");
		HX_STACK_LINE(102)
		Float _g46 = (_g45 - ((x3 - x2)));		HX_STACK_VAR(_g46,"_g46");
		HX_STACK_LINE(102)
		this->get_graphics()->drawRect(x3,_g41,_g46,(int)1);
	}
return null();
}


::openfl::display::DisplayObject UITable_obj::findViewById( ::String id,hx::Null< int >  __o_row,hx::Null< int >  __o_group){
int row = __o_row.Default(-1);
int group = __o_group.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITable","findViewById",0x59711190,"com.danielfreeman.extendedmadness.UITable.findViewById","com/danielfreeman/extendedmadness/UITable.hx",107,0xc32d7e33)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(group,"group")
{
		HX_STACK_LINE(107)
		if (((bool((row < (int)0)) || bool((group < (int)0))))){
			HX_STACK_LINE(108)
			return this->super::findViewById(id,null(),null());
		}
		else{
			HX_STACK_LINE(111)
			::com::danielfreeman::madcomponents::UIForm panel;		HX_STACK_VAR(panel,"panel");
			HX_STACK_LINE(111)
			panel = hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(this->getChildAt(row));
			HX_STACK_LINE(112)
			if (((panel != null()))){
				HX_STACK_LINE(113)
				::com::danielfreeman::madcomponents::UIForm cell;		HX_STACK_VAR(cell,"cell");
				HX_STACK_LINE(113)
				cell = hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(panel->getChildAt(group));
				HX_STACK_LINE(114)
				if (((cell != null()))){
					HX_STACK_LINE(114)
					return cell->findViewById(id,null(),null());
				}
				else{
					HX_STACK_LINE(114)
					return null();
				}
			}
			else{
				HX_STACK_LINE(117)
				return null();
			}
		}
		HX_STACK_LINE(107)
		return null();
	}
}


Dynamic UITable_obj::set_data( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITable","set_data",0x163650c7,"com.danielfreeman.extendedmadness.UITable.set_data","com/danielfreeman/extendedmadness/UITable.hx",123,0xc32d7e33)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(124)
	if ((::Std_obj::is(value,hx::ClassOf< Array<int> >()))){
		HX_STACK_LINE(125)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(125)
		int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(125)
		while((true)){
			HX_STACK_LINE(125)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(125)
				break;
			}
			HX_STACK_LINE(125)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(126)
			::com::danielfreeman::madcomponents::UIForm panel;		HX_STACK_VAR(panel,"panel");
			HX_STACK_LINE(126)
			panel = hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(this->getChildAt(i));
			HX_STACK_LINE(127)
			{
				HX_STACK_LINE(127)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(127)
				int _g2 = panel->get_numChildren();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(127)
				while((true)){
					HX_STACK_LINE(127)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(127)
						break;
					}
					HX_STACK_LINE(127)
					int j = (_g3)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(128)
					::com::danielfreeman::madcomponents::UIForm cell;		HX_STACK_VAR(cell,"cell");
					HX_STACK_LINE(128)
					cell = hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(panel->getChildAt(j));
					HX_STACK_LINE(129)
					if (((bool((i < value->__Field(HX_CSTRING("length"),true))) && bool((j < value->__GetItem(i)->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(130)
						cell->set_data(value->__GetItem(i)->__GetItem(j));
					}
				}
			}
		}
	}
	else{
		HX_STACK_LINE(135)
		if ((::Std_obj::is(value,hx::ClassOf< ::Dynamic >()))){
			HX_STACK_LINE(136)
			this->super::set_data(value);
		}
	}
	HX_STACK_LINE(138)
	return value;
}


int UITable_obj::LINE_COLOUR;


UITable_obj::UITable_obj()
{
}

Dynamic UITable_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { return _lines; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_lineColour") ) { return _lineColour; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"findViewById") ) { return findViewById_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"drawBackground") ) { return drawBackground_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UITable_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { _lines=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_lineColour") ) { _lineColour=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UITable_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_lines"));
	outFields->push(HX_CSTRING("_lineColour"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LINE_COLOUR"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(UITable_obj,_lines),HX_CSTRING("_lines")},
	{hx::fsInt,(int)offsetof(UITable_obj,_lineColour),HX_CSTRING("_lineColour")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_lines"),
	HX_CSTRING("_lineColour"),
	HX_CSTRING("drawBackground"),
	HX_CSTRING("findViewById"),
	HX_CSTRING("set_data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UITable_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UITable_obj::LINE_COLOUR,"LINE_COLOUR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UITable_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UITable_obj::LINE_COLOUR,"LINE_COLOUR");
};

#endif

Class UITable_obj::__mClass;

void UITable_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UITable"), hx::TCanCast< UITable_obj> ,sStaticFields,sMemberFields,
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

void UITable_obj::__boot()
{
	LINE_COLOUR= (int)7829367;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
