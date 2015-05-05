#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
#endif
#ifndef INCLUDED_MadXMLList
#include <MadXMLList.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIForm
#include <com/danielfreeman/madcomponents/UIForm.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIGroupedList
#include <com/danielfreeman/madcomponents/UIGroupedList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIInput
#include <com/danielfreeman/madcomponents/UIInput.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIList
#include <com/danielfreeman/madcomponents/UIList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIRefresh
#include <com/danielfreeman/madcomponents/UIRefresh.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical
#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UISearch
#include <com/danielfreeman/madcomponents/UISearch.h>
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
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UIGroupedList_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","new",0x7fac83a6,"com.danielfreeman.madcomponents.UIGroupedList.new","com/danielfreeman/madcomponents/UIGroupedList.hx",116,0x340517cd)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(150)
	this->_groupSpacing = (int)0;
	HX_STACK_LINE(149)
	this->_topGroupSpacing = (int)0;
	HX_STACK_LINE(148)
	this->_headingClicked = false;
	HX_STACK_LINE(147)
	this->_saveGroup = (int)-1;
	HX_STACK_LINE(146)
	this->_cellLeft = (int)0;
	HX_STACK_LINE(145)
	this->_alwaysAutoLayout = false;
	HX_STACK_LINE(144)
	this->_gapBetweenGroups = (int)0;
	HX_STACK_LINE(142)
	this->_shadowFormat = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Tahoma"),(int)17,(int)16579836,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(141)
	this->_headingFormat = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Tahoma"),(int)17,(int)5592422,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(139)
	this->_hasHeadings = false;
	HX_STACK_LINE(138)
	this->_heading = null();
	HX_STACK_LINE(137)
	this->_group = (int)-1;
	HX_STACK_LINE(155)
	bool _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(155)
	if ((xml->has->resolve(HX_CSTRING("autoLayout")))){
		HX_STACK_LINE(155)
		::String _g = xml->att->resolve(HX_CSTRING("autoLayout"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(155)
		_g1 = (_g == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(155)
		_g1 = false;
	}
	HX_STACK_LINE(155)
	this->_autoLayoutGroup = _g1;
	HX_STACK_LINE(156)
	if ((xml->has->resolve(HX_CSTRING("headingTextColour")))){
		HX_STACK_LINE(157)
		::String _g2 = xml->att->resolve(HX_CSTRING("headingTextColour"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(157)
		int _g3 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(157)
		this->_headingFormat->color = _g3;
	}
	HX_STACK_LINE(159)
	if ((xml->has->resolve(HX_CSTRING("headingShadowColour")))){
		HX_STACK_LINE(160)
		::String _g4 = xml->att->resolve(HX_CSTRING("headingShadowColour"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(160)
		int _g5 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(160)
		this->_shadowFormat->color = _g5;
	}
	HX_STACK_LINE(162)
	Float _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(162)
	if ((xml->has->resolve(HX_CSTRING("groupSpacing")))){
		HX_STACK_LINE(162)
		::String _g6 = xml->att->resolve(HX_CSTRING("groupSpacing"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(162)
		_g7 = ::Std_obj::parseFloat(_g6);
	}
	else{
		HX_STACK_LINE(162)
		_g7 = this->get_defaultGroupSpacing();
	}
	HX_STACK_LINE(162)
	this->_groupSpacing = _g7;
	HX_STACK_LINE(163)
	Float _g9;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(163)
	if ((xml->has->resolve(HX_CSTRING("topGroupSpacing")))){
		HX_STACK_LINE(163)
		::String _g8 = xml->att->resolve(HX_CSTRING("topGroupSpacing"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(163)
		_g9 = ::Std_obj::parseFloat(_g8);
	}
	else{
		HX_STACK_LINE(163)
		_g9 = this->_groupSpacing;
	}
	HX_STACK_LINE(163)
	this->_topGroupSpacing = _g9;
	HX_STACK_LINE(164)
	super::__construct(screen,xml,attributes);
	HX_STACK_LINE(165)
	this->_autoLayout = false;
}
;
	return null();
}

//UIGroupedList_obj::~UIGroupedList_obj() { }

Dynamic UIGroupedList_obj::__CreateEmpty() { return  new UIGroupedList_obj; }
hx::ObjectPtr< UIGroupedList_obj > UIGroupedList_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIGroupedList_obj > result = new UIGroupedList_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIGroupedList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIGroupedList_obj > result = new UIGroupedList_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Float UIGroupedList_obj::get_defaultGroupSpacing( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","get_defaultGroupSpacing",0x325ec142,"com.danielfreeman.madcomponents.UIGroupedList.get_defaultGroupSpacing","com/danielfreeman/madcomponents/UIGroupedList.hx",170,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(170)
	return (int)45;
}


HX_DEFINE_DYNAMIC_FUNC0(UIGroupedList_obj,get_defaultGroupSpacing,return )

::MadXML UIGroupedList_obj::set_rendererXML( ::MadXML value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","set_rendererXML",0x3602693d,"com.danielfreeman.madcomponents.UIGroupedList.set_rendererXML","com/danielfreeman/madcomponents/UIGroupedList.hx",177,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(178)
	this->_renderer = value;
	HX_STACK_LINE(179)
	this->_simple = (value == null());
	HX_STACK_LINE(180)
	bool _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(180)
	if (((  ((!(this->_simple))) ? bool(this->_xml->has->resolve(HX_CSTRING("autoLayout"))) : bool(false) ))){
		HX_STACK_LINE(180)
		::String _g = this->_xml->att->resolve(HX_CSTRING("autoLayout"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(180)
		_g1 = (_g == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(180)
		_g1 = false;
	}
	HX_STACK_LINE(180)
	this->_autoLayoutGroup = _g1;
	HX_STACK_LINE(181)
	return value;
}


Void UIGroupedList_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","mouseUp",0xd3adc226,"com.danielfreeman.madcomponents.UIGroupedList.mouseUp","com/danielfreeman/madcomponents/UIGroupedList.hx",185,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(186)
		this->super::mouseUp(event);
		HX_STACK_LINE(187)
		if ((this->_headingClicked)){
			HX_STACK_LINE(188)
			this->headingClicked();
		}
	}
return null();
}


Void UIGroupedList_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","mouseDown",0x61021ced,"com.danielfreeman.madcomponents.UIGroupedList.mouseDown","com/danielfreeman/madcomponents/UIGroupedList.hx",193,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(194)
		this->_saveGroup = this->_group;
		HX_STACK_LINE(195)
		this->_headingClicked = false;
		HX_STACK_LINE(196)
		this->super::mouseDown(event);
	}
return null();
}


Void UIGroupedList_obj::doCancel( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","doCancel",0x0c85225f,"com.danielfreeman.madcomponents.UIGroupedList.doCancel","com/danielfreeman/madcomponents/UIGroupedList.hx",200,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(201)
		this->_pressedCell = this->_saveIndex;
		HX_STACK_LINE(202)
		this->_group = this->_saveGroup;
		HX_STACK_LINE(203)
		this->_headingClicked = false;
		HX_STACK_LINE(204)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("listClickCancel"),true,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(204)
		this->dispatchEvent(_g);
		HX_STACK_LINE(205)
		if (((bool((bool(this->_showPressed) && bool((this->_pressedCell >= this->_header)))) && bool((this->_group < this->_groupPositions->__Field(HX_CSTRING("length"),true)))))){
			HX_STACK_LINE(206)
			this->drawHighlight();
		}
	}
return null();
}


Void UIGroupedList_obj::touchCancel( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","touchCancel",0x2f30bbdf,"com.danielfreeman.madcomponents.UIGroupedList.touchCancel","com/danielfreeman/madcomponents/UIGroupedList.hx",211,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(212)
		this->super::touchCancel();
		HX_STACK_LINE(213)
		this->_headingClicked = false;
	}
return null();
}


Void UIGroupedList_obj::drawComponent( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","drawComponent",0x4da2cadf,"com.danielfreeman.madcomponents.UIGroupedList.drawComponent","com/danielfreeman/madcomponents/UIGroupedList.hx",219,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(220)
		bool hasBackground = (bool((this->_colours != null())) && bool((this->_colours->length > (int)0)));		HX_STACK_VAR(hasBackground,"hasBackground");
		HX_STACK_LINE(221)
		this->get_graphics()->clear();
		HX_STACK_LINE(222)
		if ((this->_attributes->get_style7())){
			HX_STACK_LINE(223)
			int _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(223)
			if ((hasBackground)){
				HX_STACK_LINE(223)
				_g = this->_colours->__get((int)0);
			}
			else{
				HX_STACK_LINE(223)
				_g = this->_attributes->get_colour();
			}
			HX_STACK_LINE(223)
			this->get_graphics()->beginFill(_g,null());
		}
		else{
			HX_STACK_LINE(225)
			if ((hasBackground)){
				HX_STACK_LINE(226)
				::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
				HX_STACK_LINE(227)
				matr->createGradientBox(8.0,this->_attributes->height,(int)0,(int)0,(int)0);
				HX_STACK_LINE(228)
				int colour = this->_colours->__get((int)0);		HX_STACK_VAR(colour,"colour");
				HX_STACK_LINE(229)
				int _g1 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(colour,null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(229)
				int _g2 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(colour,(int)40);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(229)
				Dynamic _g3 = Dynamic( Array_obj<Dynamic>::__new().Add(colour).Add(_g1).Add(_g2));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(229)
				this->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,_g3,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)51).Add((int)255)),matr,::openfl::display::SpreadMethod_obj::REPEAT,null(),null());
			}
			else{
				HX_STACK_LINE(232)
				this->get_graphics()->beginFill((int)0,(int)0);
			}
		}
		HX_STACK_LINE(234)
		this->get_graphics()->drawRect((int)0,(int)0,this->_attributes->width,this->_attributes->height);
	}
return null();
}


Void UIGroupedList_obj::setCellSize( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","setCellSize",0x5d9f9a8b,"com.danielfreeman.madcomponents.UIGroupedList.setCellSize","com/danielfreeman/madcomponents/UIGroupedList.hx",238,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(239)
		Float _g = this->_attributes->get_paddingH();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(239)
		Float _g1 = (this->_attributes->x + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(239)
		Float _g2 = (_g1 - 10.0);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(239)
		this->_cellLeft = _g2;
		HX_STACK_LINE(240)
		Float _g3 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(240)
		Float _g4 = ((int)2 * _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(240)
		Float _g5 = (this->_attributes->width - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(240)
		Float _g6 = (_g5 + 20.);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(240)
		this->_cellWidth = _g6;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIGroupedList_obj,setCellSize,(void))

Void UIGroupedList_obj::setGroupedData( Dynamic value){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","setGroupedData",0x758384a0,"com.danielfreeman.madcomponents.UIGroupedList.setGroupedData","com/danielfreeman/madcomponents/UIGroupedList.hx",244,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(246)
		this->_saveGroup = this->_group;
		HX_STACK_LINE(247)
		this->_saveIndex = (int)-1;
		HX_STACK_LINE(248)
		Dynamic _g = this->noHeadings(value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(248)
		this->_filteredData = _g;
		HX_STACK_LINE(249)
		this->initDrawGroups();
		HX_STACK_LINE(250)
		this->clearCellGroups();
		HX_STACK_LINE(251)
		this->setCellSize();
		HX_STACK_LINE(252)
		int _g1 = ::Math_obj::round((this->_top + this->_topGroupSpacing));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(252)
		this->_cellTop = _g1;
		HX_STACK_LINE(253)
		this->_groupPositions = Dynamic( Array_obj<Dynamic>::__new());
		HX_STACK_LINE(254)
		this->_group = (int)0;
		HX_STACK_LINE(255)
		{
			HX_STACK_LINE(255)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(255)
			while((true)){
				HX_STACK_LINE(255)
				if ((!(((_g2 < value->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(255)
					break;
				}
				HX_STACK_LINE(255)
				Dynamic group = value->__GetItem(_g2);		HX_STACK_VAR(group,"group");
				HX_STACK_LINE(255)
				++(_g2);
				HX_STACK_LINE(256)
				if ((!(::Std_obj::is(group,hx::ClassOf< Array<int> >())))){
					HX_STACK_LINE(257)
					this->_heading = group;
				}
				else{
					HX_STACK_LINE(260)
					::String _g21 = ::Std_obj::string(this->_group);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(260)
					::String _g3 = (HX_CSTRING("_") + _g21);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(260)
					this->_suffix = _g3;
					HX_STACK_LINE(261)
					this->_length = group->__Field(HX_CSTRING("length"),true);
					struct _Function_4_1{
						inline static Dynamic Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIGroupedList_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIGroupedList.hx",262,0x340517cd)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("top") , __this->_cellTop,false);
								__result->Add(HX_CSTRING("length") , __this->_length,false);
								__result->Add(HX_CSTRING("bottom") , (int)0,false);
								__result->Add(HX_CSTRING("cellHeight") , (int)0,false);
								__result->Add(HX_CSTRING("visible") , true,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(262)
					this->_groupDetails = _Function_4_1::Block(this);
					HX_STACK_LINE(270)
					if (((this->_heading == null()))){
						HX_STACK_LINE(271)
						this->_heading = HX_CSTRING("");
					}
					HX_STACK_LINE(274)
					this->super::set_data0(group);
					HX_STACK_LINE(275)
					if (((bool(this->_simple) && bool(this->_autoLayoutGroup)))){
						HX_STACK_LINE(275)
						this->_groupDetails->__FieldRef(HX_CSTRING("cellHeight")) = this->_cellHeight;
					}
					else{
						HX_STACK_LINE(275)
						this->_groupDetails->__FieldRef(HX_CSTRING("cellHeight")) = (Float(((this->_cellTop - this->_groupDetails->__Field(HX_CSTRING("top"),true)))) / Float(group->__Field(HX_CSTRING("length"),true)));
					}
					HX_STACK_LINE(276)
					this->_groupDetails->__FieldRef(HX_CSTRING("bottom")) = this->_cellTop;
					HX_STACK_LINE(277)
					this->_groupPositions->__Field(HX_CSTRING("push"),true)(this->_groupDetails);
					HX_STACK_LINE(278)
					int _g4 = ::Math_obj::ceil((this->_cellTop + this->_groupSpacing));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(278)
					this->_cellTop = _g4;
					HX_STACK_LINE(279)
					(this->_group)++;
				}
			}
		}
		HX_STACK_LINE(283)
		this->doLayout();
		HX_STACK_LINE(285)
		this->_group = this->_saveGroup;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIGroupedList_obj,setGroupedData,(void))

Dynamic UIGroupedList_obj::set_data( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","set_data",0x30b51a21,"com.danielfreeman.madcomponents.UIGroupedList.set_data","com/danielfreeman/madcomponents/UIGroupedList.hx",291,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(292)
	Dynamic _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(292)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(292)
		_g = hx::TCastToArray(value);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(292)
				_g = null();
			}
		}
	}
	HX_STACK_LINE(292)
	Dynamic _g1 = this->_data = _g;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(292)
	this->setGroupedData(_g1);
	HX_STACK_LINE(293)
	return value;
}


Void UIGroupedList_obj::refresh( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","refresh",0x005ba821,"com.danielfreeman.madcomponents.UIGroupedList.refresh","com/danielfreeman/madcomponents/UIGroupedList.hx",298,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(298)
		this->set_data(this->_data);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIGroupedList_obj,refresh,(void))

bool UIGroupedList_obj::doClickRow( hx::Null< bool >  __o_dispatch){
bool dispatch = __o_dispatch.Default(true);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","doClickRow",0xdf60f2d7,"com.danielfreeman.madcomponents.UIGroupedList.doClickRow","com/danielfreeman/madcomponents/UIGroupedList.hx",302,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dispatch,"dispatch")
{
		HX_STACK_LINE(303)
		this->clearPressed();
		HX_STACK_LINE(304)
		this->_showPressed = true;
		HX_STACK_LINE(305)
		if ((dispatch)){
			HX_STACK_LINE(306)
			this->pressButton(null());
		}
		else{
			HX_STACK_LINE(309)
			if ((this->isPressButton())){
				HX_STACK_LINE(310)
				this->drawHighlight();
			}
		}
		HX_STACK_LINE(313)
		return (bool((bool(dispatch) && bool((this->_pressedCell >= this->_header)))) && bool((this->_pressedCell < this->_count)));
	}
}


Dynamic UIGroupedList_obj::noHeadings( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","noHeadings",0xbc7e194c,"com.danielfreeman.madcomponents.UIGroupedList.noHeadings","com/danielfreeman/madcomponents/UIGroupedList.hx",319,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(320)
	Dynamic result = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(321)
	{
		HX_STACK_LINE(321)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(321)
		while((true)){
			HX_STACK_LINE(321)
			if ((!(((_g < value->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(321)
				break;
			}
			HX_STACK_LINE(321)
			Dynamic group = value->__GetItem(_g);		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(321)
			++(_g);
			HX_STACK_LINE(322)
			if ((::Std_obj::is(group,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(323)
				result->__Field(HX_CSTRING("push"),true)(group);
			}
		}
	}
	HX_STACK_LINE(325)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(UIGroupedList_obj,noHeadings,return )

Dynamic UIGroupedList_obj::get_row( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","get_row",0x3a0678f7,"com.danielfreeman.madcomponents.UIGroupedList.get_row","com/danielfreeman/madcomponents/UIGroupedList.hx",332,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(332)
	if (((bool((bool((bool((this->_group >= (int)0)) && bool((this->_pressedCell >= (int)0)))) && bool((this->_filteredData != null())))) && bool((this->_filteredData->__GetItem(this->_group) != null()))))){
		HX_STACK_LINE(332)
		return this->_filteredData->__GetItem(this->_group)->__GetItem(this->_pressedCell);
	}
	else{
		HX_STACK_LINE(332)
		return null();
	}
	HX_STACK_LINE(332)
	return null();
}


Void UIGroupedList_obj::simpleAutoLayoutFix( Dynamic oldGroupDetails){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","simpleAutoLayoutFix",0xe0611f90,"com.danielfreeman.madcomponents.UIGroupedList.simpleAutoLayoutFix","com/danielfreeman/madcomponents/UIGroupedList.hx",337,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(oldGroupDetails,"oldGroupDetails")
		HX_STACK_LINE(337)
		if (((oldGroupDetails != null()))){
			HX_STACK_LINE(338)
			oldGroupDetails->__FieldRef(HX_CSTRING("bottom")) = (oldGroupDetails->__Field(HX_CSTRING("top"),true) + (this->_cellHeight * oldGroupDetails->__Field(HX_CSTRING("length"),true)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIGroupedList_obj,simpleAutoLayoutFix,(void))

Void UIGroupedList_obj::dealWithArrows( int count,Float position){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","dealWithArrows",0xd6205176,"com.danielfreeman.madcomponents.UIGroupedList.dealWithArrows","com/danielfreeman/madcomponents/UIGroupedList.hx",344,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(position,"position")
		HX_STACK_LINE(344)
		if (((bool(this->_arrows) && bool(((  (((this->_header > (int)0))) ? bool((count >= this->_header)) : bool((count < (this->_length + this->_header))) )))))){
			HX_STACK_LINE(345)
			Float _g = this->_attributes->get_paddingH();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(345)
			Float _g1 = (this->_width - _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(345)
			this->drawArrow(_g1,(Float(((this->_lastPosition + position))) / Float((int)2)));
		}
	}
return null();
}


Void UIGroupedList_obj::redrawCells( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","redrawCells",0x5dfef920,"com.danielfreeman.madcomponents.UIGroupedList.redrawCells","com/danielfreeman/madcomponents/UIGroupedList.hx",353,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(354)
		bool autoLayout = (bool(this->_alwaysAutoLayout) || bool((bool(!(this->_simple)) && bool(this->_autoLayoutGroup))));		HX_STACK_VAR(autoLayout,"autoLayout");
		HX_STACK_LINE(355)
		this->setCellSize();
		HX_STACK_LINE(356)
		int saveGroup = this->_group;		HX_STACK_VAR(saveGroup,"saveGroup");
		HX_STACK_LINE(357)
		Dynamic oldGroupDetails = null();		HX_STACK_VAR(oldGroupDetails,"oldGroupDetails");
		HX_STACK_LINE(358)
		Float groupHeight;		HX_STACK_VAR(groupHeight,"groupHeight");
		HX_STACK_LINE(359)
		this->_group = (int)0;
		HX_STACK_LINE(360)
		Float last = (this->_topGroupSpacing + this->_top);		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(361)
		{
			HX_STACK_LINE(361)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(361)
			Dynamic _g1 = this->_groupPositions;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(361)
			while((true)){
				HX_STACK_LINE(361)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(361)
					break;
				}
				HX_STACK_LINE(361)
				Dynamic groupDetails = _g1->__GetItem(_g);		HX_STACK_VAR(groupDetails,"groupDetails");
				HX_STACK_LINE(361)
				++(_g);
				HX_STACK_LINE(362)
				this->_length = groupDetails->__Field(HX_CSTRING("length"),true);
				HX_STACK_LINE(363)
				if ((autoLayout)){
					HX_STACK_LINE(364)
					groupDetails->__FieldRef(HX_CSTRING("top")) = last;
					HX_STACK_LINE(365)
					::String _g2 = ::Std_obj::string(this->_group);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(365)
					::String _g11 = (HX_CSTRING("heading_") + _g2);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(365)
					::openfl::display::DisplayObject heading = this->_slider->getChildByName(_g11);		HX_STACK_VAR(heading,"heading");
					HX_STACK_LINE(366)
					if (((heading != null()))){
						HX_STACK_LINE(367)
						Float _g21 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(367)
						Float _g3 = (last + _g21);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(367)
						Float _g4 = (_g3 + (int)2);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(367)
						heading->set_y(_g4);
						HX_STACK_LINE(368)
						Float _g5 = heading->get_y();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(368)
						Float _g6 = heading->get_height();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(368)
						Float _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(368)
						Float _g8 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(368)
						Float _g9 = ((int)3 * _g8);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(368)
						Float _g10 = (last + _g9);		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(368)
						Float _g111 = ::Math_obj::max(_g7,_g10);		HX_STACK_VAR(_g111,"_g111");
						HX_STACK_LINE(368)
						Float _g12 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(368)
						Float _g13 = (_g111 + _g12);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(368)
						Dynamic _g14 = groupDetails->__FieldRef(HX_CSTRING("top")) = _g13;		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(368)
						last = _g14;
						HX_STACK_LINE(369)
						::String _g15 = ::Std_obj::string(this->_group);		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(369)
						::String _g16 = (HX_CSTRING("shadow_") + _g15);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(369)
						::openfl::display::DisplayObject shadow = this->_slider->getChildByName(_g16);		HX_STACK_VAR(shadow,"shadow");
						HX_STACK_LINE(370)
						if (((shadow != null()))){
							HX_STACK_LINE(371)
							Float _g17 = heading->get_y();		HX_STACK_VAR(_g17,"_g17");
							HX_STACK_LINE(371)
							Float _g18 = (_g17 + (int)1);		HX_STACK_VAR(_g18,"_g18");
							HX_STACK_LINE(371)
							shadow->set_y(_g18);
						}
					}
				}
				HX_STACK_LINE(375)
				this->_cellTop = groupDetails->__Field(HX_CSTRING("top"),true);
				HX_STACK_LINE(376)
				this->headingChrome();
				HX_STACK_LINE(377)
				if ((groupDetails->__Field(HX_CSTRING("visible"),true))){
					HX_STACK_LINE(378)
					int cellHeight;		HX_STACK_VAR(cellHeight,"cellHeight");
					HX_STACK_LINE(379)
					{
						HX_STACK_LINE(379)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(379)
						int _g2 = this->_length;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(379)
						while((true)){
							HX_STACK_LINE(379)
							if ((!(((_g3 < _g2))))){
								HX_STACK_LINE(379)
								break;
							}
							HX_STACK_LINE(379)
							int i = (_g3)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(380)
							cellHeight = groupDetails->__Field(HX_CSTRING("cellHeight"),true);
							HX_STACK_LINE(381)
							if ((autoLayout)){
								HX_STACK_LINE(382)
								::openfl::display::DisplayObject renderer = this->byGroupAndRow(this->_group,i);		HX_STACK_VAR(renderer,"renderer");
								HX_STACK_LINE(383)
								if ((!(this->_simple))){
									HX_STACK_LINE(384)
									Float _g19 = renderer->get_height();		HX_STACK_VAR(_g19,"_g19");
									HX_STACK_LINE(384)
									Float _g20 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g20,"_g20");
									HX_STACK_LINE(384)
									Float _g21 = ((int)2 * _g20);		HX_STACK_VAR(_g21,"_g21");
									HX_STACK_LINE(384)
									Float _g22 = (_g19 + _g21);		HX_STACK_VAR(_g22,"_g22");
									HX_STACK_LINE(384)
									int _g23 = ::Math_obj::ceil(_g22);		HX_STACK_VAR(_g23,"_g23");
									HX_STACK_LINE(384)
									cellHeight = _g23;
								}
								HX_STACK_LINE(386)
								Float _g24 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g24,"_g24");
								HX_STACK_LINE(386)
								Float _g25;		HX_STACK_VAR(_g25,"_g25");
								HX_STACK_LINE(386)
								_g25 = (_g24 * ((  ((this->_simple)) ? Float(2.0) : Float(1.0) )));
								HX_STACK_LINE(386)
								Float _g26 = (last + _g25);		HX_STACK_VAR(_g26,"_g26");
								HX_STACK_LINE(386)
								renderer->set_y(_g26);
								HX_STACK_LINE(387)
								hx::AddEq(last,cellHeight);
							}
							HX_STACK_LINE(389)
							if (((cellHeight > (int)0))){
								HX_STACK_LINE(390)
								Dynamic record = this->_filteredData->__GetItem(this->_group)->__GetItem(i);		HX_STACK_VAR(record,"record");
								HX_STACK_LINE(391)
								this->drawCell((this->_cellTop + cellHeight),i,record);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(396)
					hx::AddEq(last,this->_groupSpacing);
				}
				HX_STACK_LINE(398)
				(this->_group)++;
				HX_STACK_LINE(399)
				hx::AddEq(last,this->_groupSpacing);
				HX_STACK_LINE(401)
				if (((bool((bool(!(this->_simple)) && bool(autoLayout))) && bool(groupDetails->__Field(HX_CSTRING("visible"),true))))){
					HX_STACK_LINE(402)
					groupDetails->__FieldRef(HX_CSTRING("bottom")) = last;
				}
				HX_STACK_LINE(404)
				if ((this->_alwaysAutoLayout)){
					HX_STACK_LINE(405)
					last = (last - (int)15);
					HX_STACK_LINE(406)
					groupDetails->__FieldRef(HX_CSTRING("bottom")) = (last + (int)5);
				}
				else{
					HX_STACK_LINE(408)
					if (((bool(this->_simple) && bool(this->_autoLayout)))){
						HX_STACK_LINE(409)
						Float _g27 = this->_slider->getBounds(this->_slider)->get_bottom();		HX_STACK_VAR(_g27,"_g27");
						HX_STACK_LINE(409)
						Float _g28 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g28,"_g28");
						HX_STACK_LINE(409)
						Float _g29 = (_g27 + _g28);		HX_STACK_VAR(_g29,"_g29");
						HX_STACK_LINE(409)
						int _g30 = ::Math_obj::ceil(_g29);		HX_STACK_VAR(_g30,"_g30");
						HX_STACK_LINE(409)
						int _g31 = this->_cellTop = _g30;		HX_STACK_VAR(_g31,"_g31");
						HX_STACK_LINE(409)
						groupDetails->__FieldRef(HX_CSTRING("bottom")) = _g31;
						HX_STACK_LINE(410)
						this->simpleAutoLayoutFix(oldGroupDetails);
					}
				}
				HX_STACK_LINE(412)
				oldGroupDetails = groupDetails;
			}
		}
		HX_STACK_LINE(414)
		this->_group = saveGroup;
	}
return null();
}


Void UIGroupedList_obj::headingChrome( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","headingChrome",0xe256c9a2,"com.danielfreeman.madcomponents.UIGroupedList.headingChrome","com/danielfreeman/madcomponents/UIGroupedList.hx",418,0x340517cd)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIGroupedList_obj,headingChrome,(void))

Void UIGroupedList_obj::clear( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","clear",0xd5bc0253,"com.danielfreeman.madcomponents.UIGroupedList.clear","com/danielfreeman/madcomponents/UIGroupedList.hx",424,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(424)
		this->set_data(Dynamic( Array_obj<Dynamic>::__new().Add(Dynamic( Array_obj<Dynamic>::__new()))));
	}
return null();
}


Void UIGroupedList_obj::calculateMaximumSlide( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","calculateMaximumSlide",0x51a9587d,"com.danielfreeman.madcomponents.UIGroupedList.calculateMaximumSlide","com/danielfreeman/madcomponents/UIGroupedList.hx",428,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(429)
		this->super::calculateMaximumSlide();
		HX_STACK_LINE(430)
		if (((this->_maximumSlide > (int)0))){
			HX_STACK_LINE(431)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(431)
			if (((bool(!(this->_simple)) && bool(this->_autoLayoutGroup)))){
				HX_STACK_LINE(431)
				_g1 = this->_attributes->get_paddingH();
			}
			else{
				HX_STACK_LINE(431)
				Float _g = this->_attributes->get_paddingH();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(431)
				_g1 = ((int)3 * _g);
			}
			HX_STACK_LINE(431)
			hx::AddEq(this->_maximumSlide,_g1);
		}
	}
return null();
}


Void UIGroupedList_obj::superCalculateMaximumSlide( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","superCalculateMaximumSlide",0x58529bb6,"com.danielfreeman.madcomponents.UIGroupedList.superCalculateMaximumSlide","com/danielfreeman/madcomponents/UIGroupedList.hx",437,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(437)
		this->super::calculateMaximumSlide();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIGroupedList_obj,superCalculateMaximumSlide,(void))

Void UIGroupedList_obj::positionHeading( Float top,::openfl::display::DisplayObject heading){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","positionHeading",0x2ffeba5f,"com.danielfreeman.madcomponents.UIGroupedList.positionHeading","com/danielfreeman/madcomponents/UIGroupedList.hx",441,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(top,"top")
		HX_STACK_ARG(heading,"heading")
		HX_STACK_LINE(442)
		Float _g = ::Math_obj::min((Float(this->_groupSpacing) / Float((int)3)),(int)10);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(442)
		Float _g1 = (top - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(442)
		heading->set_y(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIGroupedList_obj,positionHeading,(void))

Void UIGroupedList_obj::initDraw( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","initDraw",0x07610a2e,"com.danielfreeman.madcomponents.UIGroupedList.initDraw","com/danielfreeman/madcomponents/UIGroupedList.hx",448,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(449)
		if (((this->_heading != null()))){
			HX_STACK_LINE(450)
			::openfl::display::DisplayObject heading;		HX_STACK_VAR(heading,"heading");
			HX_STACK_LINE(451)
			::openfl::display::DisplayObject shadow = null();		HX_STACK_VAR(shadow,"shadow");
			HX_STACK_LINE(452)
			Float _g = this->_attributes->get_paddingV();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(452)
			Float _g1 = ((int)4 * _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(452)
			Float top = (this->_cellTop - _g1);		HX_STACK_VAR(top,"top");
			HX_STACK_LINE(453)
			if ((::Std_obj::is(this->_heading,hx::ClassOf< ::String >()))){
				HX_STACK_LINE(454)
				Float _g2 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(454)
				Float _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(454)
				Float _g4 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(454)
				Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(454)
				Float _g6 = (top + _g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(454)
				Float _g7 = (_g6 + (int)1);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(454)
				::com::danielfreeman::madcomponents::UILabel _g8 = ::com::danielfreeman::madcomponents::UILabel_obj::__new(this->_slider,_g3,_g7,this->_heading,this->_shadowFormat);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(454)
				shadow = _g8;
				HX_STACK_LINE(455)
				::String _g9 = ::Std_obj::string(this->_group);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(455)
				::String _g10 = (HX_CSTRING("shadow_") + _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(455)
				shadow->set_name(_g10);
				HX_STACK_LINE(456)
				Float _g11 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(456)
				Float _g12 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(456)
				Float _g13 = (Float(_g12) / Float((int)2));		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(456)
				Float _g14 = (top + _g13);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(456)
				::com::danielfreeman::madcomponents::UILabel _g15 = ::com::danielfreeman::madcomponents::UILabel_obj::__new(this->_slider,_g11,_g14,this->_heading,this->_headingFormat);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(456)
				heading = _g15;
				HX_STACK_LINE(457)
				bool _g16 = shadow->set_visible((this->_heading != HX_CSTRING("")));		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(457)
				heading->set_visible(_g16);
			}
			else{
				HX_STACK_LINE(463)
				::openfl::display::DisplayObject _g17 = heading = this->_heading;		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(463)
				this->_slider->addChild(_g17);
			}
			HX_STACK_LINE(465)
			Float _g18 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(465)
			heading->set_x(_g18);
			HX_STACK_LINE(466)
			this->positionHeading(this->_cellTop,heading);
			HX_STACK_LINE(467)
			if (((shadow != null()))){
				HX_STACK_LINE(468)
				Float _g19 = heading->get_y();		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(468)
				Float _g20 = (_g19 + (int)1);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(468)
				shadow->set_y(_g20);
			}
			HX_STACK_LINE(470)
			this->_heading = null();
			HX_STACK_LINE(471)
			Float _g21 = heading->get_height();		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(471)
			int _g22 = ::Math_obj::ceil(_g21);		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(471)
			hx::AddEq(this->_cellTop,_g22);
			HX_STACK_LINE(472)
			this->_groupDetails->__FieldRef(HX_CSTRING("top")) = this->_cellTop;
			HX_STACK_LINE(473)
			::String _g23 = ::Std_obj::string(this->_group);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(473)
			::String _g24 = (HX_CSTRING("heading_") + _g23);		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(473)
			heading->set_name(_g24);
			HX_STACK_LINE(474)
			Float _g25 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(474)
			Float _g26 = ((int)2 * _g25);		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(474)
			this->_gapBetweenGroups = _g26;
		}
		HX_STACK_LINE(476)
		this->_lastPosition = this->_cellTop;
	}
return null();
}


Void UIGroupedList_obj::clearCells( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","clearCells",0x9e096d3e,"com.danielfreeman.madcomponents.UIGroupedList.clearCells","com/danielfreeman/madcomponents/UIGroupedList.hx",480,0x340517cd)
		HX_STACK_THIS(this)
	}
return null();
}


Void UIGroupedList_obj::clearCellGroups( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","clearCellGroups",0xe77debc9,"com.danielfreeman.madcomponents.UIGroupedList.clearCellGroups","com/danielfreeman/madcomponents/UIGroupedList.hx",485,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(486)
		this->super::clearCells();
		HX_STACK_LINE(487)
		int _g = this->_cellTop = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(487)
		this->_lastPosition = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIGroupedList_obj,clearCellGroups,(void))

Void UIGroupedList_obj::initDrawGroups( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","initDrawGroups",0xe65c7922,"com.danielfreeman.madcomponents.UIGroupedList.initDrawGroups","com/danielfreeman/madcomponents/UIGroupedList.hx",491,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(492)
		this->_slider->get_graphics()->clear();
		HX_STACK_LINE(494)
		this->_slider->get_graphics()->beginFill((int)0,(int)0);
		HX_STACK_LINE(495)
		Float _g = this->_attributes->get_paddingV();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(495)
		Float _g1 = ((int)-4 * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(495)
		Float _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(495)
		_g2 = (_g1 - ((  (((this->_refresh != null()))) ? Float((int)40) : Float((int)0) )));
		HX_STACK_LINE(495)
		this->_slider->get_graphics()->drawRect((int)0,_g2,(int)1,(int)1);
		HX_STACK_LINE(496)
		this->_lastPosition = this->_cellTop;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIGroupedList_obj,initDrawGroups,(void))

Void UIGroupedList_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","layout",0x7fd6cb24,"com.danielfreeman.madcomponents.UIGroupedList.layout","com/danielfreeman/madcomponents/UIGroupedList.hx",502,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(503)
		this->initDrawGroups();
		HX_STACK_LINE(504)
		this->super::layout(attributes);
	}
return null();
}


Void UIGroupedList_obj::setColour( int colour,Float top,Float width,Float height){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","setColour",0x986da954,"com.danielfreeman.madcomponents.UIGroupedList.setColour","com/danielfreeman/madcomponents/UIGroupedList.hx",508,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(colour,"colour")
		HX_STACK_ARG(top,"top")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(509)
		Array< int > colours;		HX_STACK_VAR(colours,"colours");
		HX_STACK_LINE(509)
		if ((::Std_obj::is(this->_cell,hx::ClassOf< ::com::danielfreeman::madcomponents::UIForm >()))){
			HX_STACK_LINE(509)
			colours = (hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(this->_cell))->get_attributes()->get_backgroundColours();
		}
		else{
			HX_STACK_LINE(509)
			colours = null();
		}
		HX_STACK_LINE(510)
		if (((bool((colours != null())) && bool((colours->length > (int)1))))){
			HX_STACK_LINE(511)
			::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
			HX_STACK_LINE(512)
			matr->createGradientBox((  (((colours->length > (int)2))) ? Float(colours->__get((int)2)) : Float(width) ),(  (((colours->length > (int)2))) ? Float(colours->__get((int)2)) : Float((height + ((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING))) ),(  (((colours->length > (int)3))) ? Float((Float((colours->__get((int)3) * ::Math_obj::PI)) / Float((int)180))) : Float((Float(::Math_obj::PI) / Float((int)2))) ),(int)0,(top - ::com::danielfreeman::madcomponents::UI_obj::PADDING));
			HX_STACK_LINE(513)
			this->_slider->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,Dynamic( Array_obj<Dynamic>::__new().Add(colours->__get((int)0)).Add(colours->__get((int)1))),Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)255)),matr,::openfl::display::SpreadMethod_obj::REPEAT,null(),null());
		}
		else{
			HX_STACK_LINE(515)
			if (((bool((colours != null())) && bool((colours->length > (int)0))))){
				HX_STACK_LINE(516)
				this->_slider->get_graphics()->beginFill(colours->__get((int)0),null());
			}
			else{
				HX_STACK_LINE(519)
				this->_slider->get_graphics()->beginFill(colour,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(UIGroupedList_obj,setColour,(void))

Void UIGroupedList_obj::drawCell( Float position,int count,Dynamic record){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","drawCell",0x16607ac0,"com.danielfreeman.madcomponents.UIGroupedList.drawCell","com/danielfreeman/madcomponents/UIGroupedList.hx",526,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(record,"record")
		HX_STACK_LINE(527)
		int colour;		HX_STACK_VAR(colour,"colour");
		HX_STACK_LINE(527)
		if ((::Reflect_obj::hasField(record,HX_CSTRING("_colour")))){
			HX_STACK_LINE(527)
			colour = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(record->__Field(HX_CSTRING("_colour"),true));
		}
		else{
			HX_STACK_LINE(527)
			colour = (int)16777215;
		}
		HX_STACK_LINE(528)
		if (((  (((this->_colours->length > (int)1))) ? bool(!(::Reflect_obj::hasField(record,HX_CSTRING("_colour")))) : bool(false) ))){
			HX_STACK_LINE(529)
			colour = this->_colours->__get((  ((((this->_colours->length - (int)1) < (count + (int)1)))) ? int((this->_colours->length - (int)1)) : int((count + (int)1)) ));
		}
		HX_STACK_LINE(531)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(531)
		if ((this->_attributes->get_style7())){
			HX_STACK_LINE(531)
			_g = colour;
		}
		else{
			HX_STACK_LINE(531)
			_g = this->_colour;
		}
		HX_STACK_LINE(531)
		this->_slider->get_graphics()->beginFill(_g,null());
		HX_STACK_LINE(532)
		if (((this->_length == (int)1))){
			HX_STACK_LINE(533)
			this->_slider->get_graphics()->drawRoundRect(this->_cellLeft,this->_cellTop,(this->_cellWidth + (int)1),(position - this->_cellTop),(1.5 * ::com::danielfreeman::madcomponents::UIGroupedList_obj::CURVE),null());
			HX_STACK_LINE(534)
			this->setColour(colour,(this->_cellTop + (int)1),(this->_cellWidth - (int)1),((position - this->_cellTop) - (int)2));
			HX_STACK_LINE(535)
			this->_slider->get_graphics()->drawRoundRect((this->_cellLeft + (int)1),(this->_cellTop + (int)1),(this->_cellWidth - (int)1),((position - this->_cellTop) - (int)2),(1.5 * ::com::danielfreeman::madcomponents::UIGroupedList_obj::CURVE),null());
		}
		else{
			HX_STACK_LINE(537)
			if (((count == (int)0))){
				HX_STACK_LINE(538)
				::openfl::display::Graphics _g1 = this->_slider->get_graphics();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(538)
				bool _g2 = this->_attributes->get_style7();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(538)
				::com::danielfreeman::madcomponents::UIGroupedList_obj::curvedTop(_g1,this->_cellLeft,this->_cellTop,((this->_cellLeft + this->_cellWidth) + (int)1),position,_g2);
				HX_STACK_LINE(539)
				this->setColour(colour,(this->_cellTop + (int)1),(this->_cellWidth - (int)1),((position - this->_cellTop) - (int)2));
				HX_STACK_LINE(540)
				::openfl::display::Graphics _g3 = this->_slider->get_graphics();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(540)
				bool _g4 = this->_attributes->get_style7();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(540)
				::com::danielfreeman::madcomponents::UIGroupedList_obj::curvedTop(_g3,(this->_cellLeft + (int)1),(this->_cellTop + (int)1),(this->_cellLeft + this->_cellWidth),position,_g4);
			}
			else{
				HX_STACK_LINE(542)
				if (((count == (this->_length - (int)1)))){
					HX_STACK_LINE(543)
					::openfl::display::Graphics _g5 = this->_slider->get_graphics();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(543)
					bool _g6 = this->_attributes->get_style7();		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(543)
					::com::danielfreeman::madcomponents::UIGroupedList_obj::curvedBottom(_g5,this->_cellLeft,this->_cellTop,((this->_cellLeft + this->_cellWidth) + (int)1),position,_g6);
					HX_STACK_LINE(544)
					this->setColour(colour,(this->_cellTop + (int)1),(this->_cellWidth - (int)1),((position - this->_cellTop) - (int)2));
					HX_STACK_LINE(545)
					::openfl::display::Graphics _g7 = this->_slider->get_graphics();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(545)
					bool _g8 = this->_attributes->get_style7();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(545)
					::com::danielfreeman::madcomponents::UIGroupedList_obj::curvedBottom(_g7,(this->_cellLeft + (int)1),(this->_cellTop + (int)1),(this->_cellLeft + this->_cellWidth),(position - (int)1),_g8);
				}
				else{
					HX_STACK_LINE(548)
					this->_slider->get_graphics()->drawRect(this->_cellLeft,this->_cellTop,(this->_cellWidth + (int)1),(position - this->_cellTop));
					HX_STACK_LINE(549)
					this->setColour(colour,(this->_cellTop + (int)1),(this->_cellWidth - (int)1),((position - this->_cellTop) - (int)2));
					HX_STACK_LINE(550)
					this->_slider->get_graphics()->drawRect((this->_cellLeft + (int)1),(this->_cellTop + (int)1),(this->_cellWidth - (int)1),(position - this->_cellTop));
				}
			}
		}
		HX_STACK_LINE(552)
		if (((  ((!(::Std_obj::is(record,hx::ClassOf< ::String >())))) ? bool(this->hasLines(record)) : bool(false) ))){
			HX_STACK_LINE(553)
			this->drawLines(position);
		}
		HX_STACK_LINE(555)
		if (((bool(this->_arrows) && bool(((  (((this->_header > (int)0))) ? bool((count >= this->_header)) : bool((count < (this->_length + this->_header))) )))))){
			HX_STACK_LINE(556)
			this->drawArrow(((this->_cellLeft + this->_cellWidth) - 10.0),(Float(((this->_cellTop + position))) / Float((int)2)));
		}
		HX_STACK_LINE(558)
		if (((  ((this->_attributes->get_style7())) ? bool((count < (this->_length - (int)1))) : bool(false) ))){
			HX_STACK_LINE(559)
			this->_slider->get_graphics()->beginFill(this->_colour,null());
			HX_STACK_LINE(560)
			this->_slider->get_graphics()->drawRect(this->_lineGap,(position - (int)1),(((this->_cellWidth - this->_lineGap) + this->_cellLeft) + (int)1),(int)1);
		}
		HX_STACK_LINE(562)
		int _g9 = ::Math_obj::ceil(position);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(562)
		this->_cellTop = _g9;
	}
return null();
}


Void UIGroupedList_obj::pressedCellLimits( Dynamic groupDetail){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","pressedCellLimits",0x869b8722,"com.danielfreeman.madcomponents.UIGroupedList.pressedCellLimits","com/danielfreeman/madcomponents/UIGroupedList.hx",595,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(groupDetail,"groupDetail")
		HX_STACK_LINE(595)
		if (((bool((this->_pressedCell < this->_header)) || bool((this->_pressedCell >= groupDetail->__Field(HX_CSTRING("length"),true)))))){
			HX_STACK_LINE(596)
			this->_pressedCell = this->_saveIndex;
		}
	}
return null();
}


bool UIGroupedList_obj::isPressButton( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","isPressButton",0x924544d1,"com.danielfreeman.madcomponents.UIGroupedList.isPressButton","com/danielfreeman/madcomponents/UIGroupedList.hx",603,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(604)
	Float sliderMouseY;		HX_STACK_VAR(sliderMouseY,"sliderMouseY");
	HX_STACK_LINE(604)
	if ((this->_slider->get_visible())){
		HX_STACK_LINE(604)
		sliderMouseY = this->_slider->get_mouseY();
	}
	else{
		HX_STACK_LINE(604)
		Float _g = this->get_mouseY();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(604)
		sliderMouseY = (_g - this->_sliderPosition);
	}
	HX_STACK_LINE(605)
	this->_group = (int)0;
	HX_STACK_LINE(606)
	{
		HX_STACK_LINE(606)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(606)
		Dynamic _g1 = this->_groupPositions;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(606)
		while((true)){
			HX_STACK_LINE(606)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(606)
				break;
			}
			HX_STACK_LINE(606)
			Dynamic detail = _g1->__GetItem(_g);		HX_STACK_VAR(detail,"detail");
			HX_STACK_LINE(606)
			++(_g);
			HX_STACK_LINE(607)
			if (((bool((bool((sliderMouseY >= detail->__Field(HX_CSTRING("top"),true))) && bool((sliderMouseY <= detail->__Field(HX_CSTRING("bottom"),true))))) && bool(detail->__Field(HX_CSTRING("visible"),true))))){
				HX_STACK_LINE(609)
				if (((bool(this->_autoLayoutGroup) && bool(!(this->_simple))))){
					HX_STACK_LINE(610)
					this->_row = null();
					HX_STACK_LINE(611)
					int i;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(611)
					if (((this->_header < (int)0))){
						HX_STACK_LINE(611)
						i = (int)0;
					}
					else{
						HX_STACK_LINE(611)
						i = this->_header;
					}
					HX_STACK_LINE(612)
					while((true)){
						HX_STACK_LINE(612)
						if ((!(((bool((i < detail->__Field(HX_CSTRING("length"),true))) && bool((this->_row == null()))))))){
							HX_STACK_LINE(612)
							break;
						}
						HX_STACK_LINE(613)
						int _g11 = this->get_group();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(613)
						::openfl::display::DisplayObject renderer = this->byGroupAndRow(_g11,i);		HX_STACK_VAR(renderer,"renderer");
						HX_STACK_LINE(615)
						Float _g2 = renderer->get_y();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(615)
						Float _g3 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(615)
						Float _g4 = (_g2 - _g3);		HX_STACK_VAR(_g4,"_g4");
						struct _Function_6_1{
							inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIGroupedList_obj > __this,Float &sliderMouseY,::openfl::display::DisplayObject &renderer){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIGroupedList.hx",615,0x340517cd)
								{
									HX_STACK_LINE(615)
									Float _g5 = renderer->get_y();		HX_STACK_VAR(_g5,"_g5");
									HX_STACK_LINE(615)
									Float _g6 = renderer->get_height();		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(615)
									Float _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
									HX_STACK_LINE(615)
									Float _g8 = __this->_attributes->get_paddingV();		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(615)
									Float _g9 = (_g7 + _g8);		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(615)
									return (sliderMouseY < _g9);
								}
								return null();
							}
						};
						HX_STACK_LINE(614)
						if (((  (((sliderMouseY > _g4))) ? bool(_Function_6_1::Block(this,sliderMouseY,renderer)) : bool(false) ))){
							HX_STACK_LINE(616)
							this->_pressedCell = i;
							HX_STACK_LINE(617)
							::openfl::display::DisplayObject _g10;		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(617)
							_g10 = hx::TCast< openfl::display::DisplayObject >::cast(renderer);
							HX_STACK_LINE(617)
							this->_row = _g10;
							HX_STACK_LINE(618)
							return (this->_row != null());
						}
						HX_STACK_LINE(620)
						(i)++;
					}
				}
				else{
					HX_STACK_LINE(624)
					int _g11 = ::Math_obj::floor((Float(((sliderMouseY - detail->__Field(HX_CSTRING("top"),true)))) / Float(detail->__Field(HX_CSTRING("cellHeight"),true))));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(624)
					this->_pressedCell = _g11;
					HX_STACK_LINE(625)
					this->pressedCellLimits(detail);
					HX_STACK_LINE(626)
					return (this->_pressedCell >= this->_header);
				}
			}
			else{
				HX_STACK_LINE(629)
				if (((sliderMouseY <= detail->__Field(HX_CSTRING("bottom"),true)))){
					HX_STACK_LINE(630)
					return false;
				}
			}
			HX_STACK_LINE(632)
			(this->_group)++;
		}
	}
	HX_STACK_LINE(634)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(UIGroupedList_obj,isPressButton,return )

int UIGroupedList_obj::get_group( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","get_group",0x4fdd7b5c,"com.danielfreeman.madcomponents.UIGroupedList.get_group","com/danielfreeman/madcomponents/UIGroupedList.hx",641,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(641)
	return this->_group;
}


HX_DEFINE_DYNAMIC_FUNC0(UIGroupedList_obj,get_group,return )

int UIGroupedList_obj::set_headingTextColour( int value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","set_headingTextColour",0x80bf78e4,"com.danielfreeman.madcomponents.UIGroupedList.set_headingTextColour","com/danielfreeman/madcomponents/UIGroupedList.hx",647,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(648)
	this->_headingFormat->color = value;
	HX_STACK_LINE(649)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIGroupedList_obj,set_headingTextColour,return )

int UIGroupedList_obj::set_headingShadowColour( int value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","set_headingShadowColour",0x4c0fb517,"com.danielfreeman.madcomponents.UIGroupedList.set_headingShadowColour","com/danielfreeman/madcomponents/UIGroupedList.hx",653,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(654)
	this->_shadowFormat->color = value;
	HX_STACK_LINE(655)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIGroupedList_obj,set_headingShadowColour,return )

Float UIGroupedList_obj::indexToScrollPosition( int value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","indexToScrollPosition",0xad9d3ca9,"com.danielfreeman.madcomponents.UIGroupedList.indexToScrollPosition","com/danielfreeman/madcomponents/UIGroupedList.hx",662,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(662)
	if (((this->_groupPositions->__Field(HX_CSTRING("length"),true) > this->_group))){
		HX_STACK_LINE(662)
		return ((this->_groupPositions->__GetItem(this->_group)->__Field(HX_CSTRING("cellHeight"),true) * value) + this->_groupPositions->__GetItem(this->_group)->__Field(HX_CSTRING("top"),true));
	}
	else{
		HX_STACK_LINE(662)
		return (int)0;
	}
	HX_STACK_LINE(662)
	return 0.;
}


Void UIGroupedList_obj::illuminate( hx::Null< int >  __o_pressedCell,hx::Null< bool >  __o_dispatch,hx::Null< bool >  __o_show){
int pressedCell = __o_pressedCell.Default(-1);
bool dispatch = __o_dispatch.Default(true);
bool show = __o_show.Default(true);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","illuminate",0xd7327966,"com.danielfreeman.madcomponents.UIGroupedList.illuminate","com/danielfreeman/madcomponents/UIGroupedList.hx",667,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pressedCell,"pressedCell")
	HX_STACK_ARG(dispatch,"dispatch")
	HX_STACK_ARG(show,"show")
{
		HX_STACK_LINE(667)
		if ((show)){
			HX_STACK_LINE(668)
			this->drawHighlight();
		}
	}
return null();
}


int UIGroupedList_obj::set_group( int value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","set_group",0x332e6768,"com.danielfreeman.madcomponents.UIGroupedList.set_group","com/danielfreeman/madcomponents/UIGroupedList.hx",675,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(676)
	this->_group = value;
	HX_STACK_LINE(677)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIGroupedList_obj,set_group,return )

Void UIGroupedList_obj::headingClicked( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","headingClicked",0x8c7bc97f,"com.danielfreeman.madcomponents.UIGroupedList.headingClicked","com/danielfreeman/madcomponents/UIGroupedList.hx",681,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(682)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("headingClicked"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(682)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIGroupedList_obj,headingClicked,(void))

::openfl::display::DisplayObject UIGroupedList_obj::pressButton( hx::Null< bool >  __o_show){
bool show = __o_show.Default(true);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","pressButton",0xbbbf971b,"com.danielfreeman.madcomponents.UIGroupedList.pressButton","com/danielfreeman/madcomponents/UIGroupedList.hx",688,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(show,"show")
{
		HX_STACK_LINE(689)
		Float sliderMouseY;		HX_STACK_VAR(sliderMouseY,"sliderMouseY");
		HX_STACK_LINE(689)
		if ((this->_slider->get_visible())){
			HX_STACK_LINE(689)
			sliderMouseY = this->_slider->get_mouseY();
		}
		else{
			HX_STACK_LINE(689)
			Float _g = this->get_mouseY();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(689)
			sliderMouseY = (_g - this->_sliderPosition);
		}
		HX_STACK_LINE(690)
		this->_scrollBarLayer->get_graphics()->clear();
		HX_STACK_LINE(691)
		this->clearPressed();
		HX_STACK_LINE(692)
		if (((bool(!(this->_simple)) || bool((sliderMouseY < this->_top))))){
			HX_STACK_LINE(693)
			this->doSearchHit();
		}
		HX_STACK_LINE(696)
		if (((bool((this->_pressButton == null())) && bool(this->_clickRow)))){
			HX_STACK_LINE(697)
			if ((this->isPressButton())){
				HX_STACK_LINE(698)
				if ((show)){
					HX_STACK_LINE(699)
					this->drawHighlight();
				}
				HX_STACK_LINE(701)
				this->activate(show);
			}
			else{
				HX_STACK_LINE(703)
				if (((sliderMouseY > this->_top))){
					HX_STACK_LINE(704)
					this->_headingClicked = true;
				}
			}
		}
		HX_STACK_LINE(707)
		return this->_pressButton;
	}
}


::openfl::display::DisplayObject UIGroupedList_obj::byGroupAndRow( int group,int row){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","byGroupAndRow",0x66e89a51,"com.danielfreeman.madcomponents.UIGroupedList.byGroupAndRow","com/danielfreeman/madcomponents/UIGroupedList.hx",713,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(group,"group")
	HX_STACK_ARG(row,"row")
	HX_STACK_LINE(714)
	::String _g = ::Std_obj::string(row);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(714)
	::String _g1 = (HX_CSTRING("label_") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(714)
	::String _g2 = (_g1 + HX_CSTRING("_"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(714)
	::String _g3 = ::Std_obj::string(group);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(714)
	::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(714)
	return this->_slider->getChildByName(_g4);
}


HX_DEFINE_DYNAMIC_FUNC2(UIGroupedList_obj,byGroupAndRow,return )

::openfl::display::DisplayObject UIGroupedList_obj::findViewById( ::String id,hx::Null< int >  __o_row,hx::Null< int >  __o_group){
int row = __o_row.Default(-1);
int group = __o_group.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","findViewById",0xe7988fea,"com.danielfreeman.madcomponents.UIGroupedList.findViewById","com/danielfreeman/madcomponents/UIGroupedList.hx",721,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(group,"group")
{
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIGroupedList_obj > __this,::String &id){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIGroupedList.hx",721,0x340517cd)
				{
					HX_STACK_LINE(721)
					::String _g = __this->_search->get_name();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(721)
					return (_g == id);
				}
				return null();
			}
		};
		HX_STACK_LINE(721)
		if (((  (((this->_search != null()))) ? bool(_Function_1_1::Block(this,id)) : bool(false) ))){
			HX_STACK_LINE(722)
			return this->_search;
		}
		else{
			HX_STACK_LINE(725)
			::openfl::display::DisplayObject container = this->byGroupAndRow(group,row);		HX_STACK_VAR(container,"container");
			HX_STACK_LINE(726)
			if (((  (((container != null()))) ? bool(::Std_obj::is(container,hx::ClassOf< ::com::danielfreeman::madcomponents::IContainerUI >())) : bool(false) ))){
				HX_STACK_LINE(726)
				return (hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(container))->findViewById(id,row,group);
			}
			else{
				HX_STACK_LINE(726)
				return container;
			}
		}
		HX_STACK_LINE(721)
		return null();
	}
}


::MadXML UIGroupedList_obj::set_xmlData( ::MadXML value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","set_xmlData",0x11a6f80a,"com.danielfreeman.madcomponents.UIGroupedList.set_xmlData","com/danielfreeman/madcomponents/UIGroupedList.hx",733,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(734)
	Dynamic result = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(735)
	::MadXMLList children = value->children(null());		HX_STACK_VAR(children,"children");
	HX_STACK_LINE(736)
	for(::cpp::FastIterator_obj< ::MadXML > *__it = ::cpp::CreateFastIterator< ::MadXML >(children->iterator());  __it->hasNext(); ){
		::MadXML group = __it->next();
		{
			HX_STACK_LINE(737)
			Dynamic row = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(739)
			if ((group->has->resolve(HX_CSTRING("icon")))){
				HX_STACK_LINE(740)
				::String _g = group->att->resolve(HX_CSTRING("icon"));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(740)
				::Class _g1 = ::Type_obj::resolveClass(_g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(740)
				::Class _g2 = ::Type_obj::getClass(_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(740)
				result->__Field(HX_CSTRING("push"),true)(_g2);
			}
			else{
				HX_STACK_LINE(741)
				if ((group->has->resolve(HX_CSTRING("label")))){
					HX_STACK_LINE(742)
					::String _g3 = group->att->resolve(HX_CSTRING("label"));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(742)
					result->__Field(HX_CSTRING("push"),true)(_g3);
				}
			}
			HX_STACK_LINE(745)
			for(::cpp::FastIterator_obj< ::MadXML > *__it = ::cpp::CreateFastIterator< ::MadXML >(group->children(null())->iterator());  __it->hasNext(); ){
				::MadXML child = __it->next();
				{
					HX_STACK_LINE(746)
					Dynamic _g4 = this->attributesToObject(child);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(746)
					row->__Field(HX_CSTRING("push"),true)(_g4);
				}
;
			}
			HX_STACK_LINE(748)
			result->__Field(HX_CSTRING("push"),true)(row);
		}
;
	}
	HX_STACK_LINE(750)
	this->set_data(result);
	HX_STACK_LINE(751)
	return value;
}


bool UIGroupedList_obj::setData( Dynamic value,hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","setData",0x1b226532,"com.danielfreeman.madcomponents.UIGroupedList.setData","com/danielfreeman/madcomponents/UIGroupedList.hx",755,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(756)
		bool result = false;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(758)
		this->_group = index;
		HX_STACK_LINE(759)
		{
			HX_STACK_LINE(759)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(759)
			while((true)){
				HX_STACK_LINE(759)
				if ((!(((_g < value->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(759)
					break;
				}
				HX_STACK_LINE(759)
				Dynamic row = value->__GetItem(_g);		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(759)
				++(_g);
				HX_STACK_LINE(760)
				if ((::Std_obj::is(row,hx::ClassOf< ::String >()))){
					HX_STACK_LINE(761)
					::String _g1 = ::Std_obj::string(this->_group);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(761)
					::String _g11 = (HX_CSTRING("heading_") + _g1);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(761)
					::openfl::display::DisplayObject heading = this->_slider->getChildByName(_g11);		HX_STACK_VAR(heading,"heading");
					HX_STACK_LINE(762)
					if (((  (((heading != null()))) ? bool(::Std_obj::is(heading,hx::ClassOf< ::com::danielfreeman::madcomponents::UILabel >())) : bool(false) ))){
						HX_STACK_LINE(763)
						(hx::TCast< com::danielfreeman::madcomponents::UILabel >::cast(heading))->set_xmlText(row);
					}
					HX_STACK_LINE(765)
					::String _g2 = ::Std_obj::string(this->_group);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(765)
					::String _g3 = (HX_CSTRING("shadow_") + _g2);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(765)
					::openfl::display::DisplayObject shadow = this->_slider->getChildByName(_g3);		HX_STACK_VAR(shadow,"shadow");
					HX_STACK_LINE(766)
					if (((  (((shadow != null()))) ? bool(::Std_obj::is(shadow,hx::ClassOf< ::com::danielfreeman::madcomponents::UILabel >())) : bool(false) ))){
						HX_STACK_LINE(767)
						(hx::TCast< com::danielfreeman::madcomponents::UILabel >::cast(shadow))->set_xmlText(row);
					}
				}
				else{
					HX_STACK_LINE(770)
					if ((::Std_obj::is(row,hx::ClassOf< Array<int> >()))){
						HX_STACK_LINE(771)
						::String _g4 = ::Std_obj::string(this->_group);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(771)
						::String _g5 = (HX_CSTRING("_") + _g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(771)
						this->_suffix = _g5;
						HX_STACK_LINE(772)
						this->super::setData(row,null());
						HX_STACK_LINE(773)
						(this->_group)++;
					}
				}
			}
		}
		HX_STACK_LINE(777)
		if ((this->_autoLayoutGroup)){
			HX_STACK_LINE(778)
			this->doLayout();
			HX_STACK_LINE(779)
			this->calculateMaximumSlide();
		}
		HX_STACK_LINE(782)
		return result;
	}
}


bool UIGroupedList_obj::highlightForIndex( int rowIndex){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","highlightForIndex",0xc7b42b63,"com.danielfreeman.madcomponents.UIGroupedList.highlightForIndex","com/danielfreeman/madcomponents/UIGroupedList.hx",786,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rowIndex,"rowIndex")
	HX_STACK_LINE(787)
	if (((this->_filteredData->__Field(HX_CSTRING("length"),true) <= this->_group))){
		HX_STACK_LINE(788)
		return false;
	}
	HX_STACK_LINE(790)
	Dynamic rowData = this->_filteredData->__GetItem(this->_group)->__GetItem(rowIndex);		HX_STACK_VAR(rowData,"rowData");
	HX_STACK_LINE(791)
	if ((::Reflect_obj::hasField(rowData,HX_CSTRING("_highlight")))){
		HX_STACK_LINE(792)
		return (rowData->__Field(HX_CSTRING("_highlight"),true) == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(795)
		return this->_highlightPressed;
	}
	HX_STACK_LINE(791)
	return false;
}


Void UIGroupedList_obj::drawHighlight( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","drawHighlight",0x2b4f3056,"com.danielfreeman.madcomponents.UIGroupedList.drawHighlight","com/danielfreeman/madcomponents/UIGroupedList.hx",803,0x340517cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(803)
		if ((this->highlightForIndex(this->_pressedCell))){
			HX_STACK_LINE(804)
			this->_highlightIsOn = true;
			HX_STACK_LINE(805)
			bool autoLayout = (bool(this->_autoLayoutGroup) && bool(!(this->_simple)));		HX_STACK_VAR(autoLayout,"autoLayout");
			HX_STACK_LINE(806)
			Dynamic groupDetails = this->_groupPositions->__GetItem(this->_group);		HX_STACK_VAR(groupDetails,"groupDetails");
			HX_STACK_LINE(807)
			if (((groupDetails == null()))){
				HX_STACK_LINE(808)
				return null();
			}
			HX_STACK_LINE(810)
			int length = groupDetails->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(811)
			Float top;		HX_STACK_VAR(top,"top");
			HX_STACK_LINE(811)
			if ((autoLayout)){
				HX_STACK_LINE(811)
				Float _g = this->_row->get_y();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(811)
				Float _g1 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(811)
				Float _g2 = (_g - _g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(811)
				top = (_g2 + (int)1);
			}
			else{
				HX_STACK_LINE(811)
				top = (groupDetails->__Field(HX_CSTRING("top"),true) + (this->_pressedCell * groupDetails->__Field(HX_CSTRING("cellHeight"),true)));
			}
			HX_STACK_LINE(812)
			Float _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(812)
			if ((autoLayout)){
				HX_STACK_LINE(812)
				Float _g3 = this->_row->get_height();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(812)
				Float _g4 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(812)
				Float _g5 = ((int)2 * _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(812)
				Float _g6 = (_g3 + _g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(812)
				_g7 = (_g6 - (int)1);
			}
			else{
				HX_STACK_LINE(812)
				_g7 = groupDetails->__Field(HX_CSTRING("cellHeight"),true);
			}
			HX_STACK_LINE(812)
			Float bottom = (top + _g7);		HX_STACK_VAR(bottom,"bottom");
			HX_STACK_LINE(813)
			this->_highlight->get_graphics()->clear();
			HX_STACK_LINE(814)
			this->_highlight->get_graphics()->beginFill(this->_highlightColour,null());
			HX_STACK_LINE(815)
			if (((length == (int)1))){
				HX_STACK_LINE(816)
				this->_highlight->get_graphics()->drawRoundRect(this->_cellLeft,top,this->_cellWidth,(bottom - top),(1.5 * ::com::danielfreeman::madcomponents::UIGroupedList_obj::CURVE),null());
			}
			else{
				HX_STACK_LINE(818)
				if (((this->_pressedCell == (int)0))){
					HX_STACK_LINE(819)
					::openfl::display::Graphics _g8 = this->_highlight->get_graphics();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(819)
					::com::danielfreeman::madcomponents::UIGroupedList_obj::curvedTop(_g8,this->_cellLeft,top,(this->_cellLeft + this->_cellWidth),bottom,null());
				}
				else{
					HX_STACK_LINE(821)
					if (((this->_pressedCell == (length - (int)1)))){
						HX_STACK_LINE(822)
						::openfl::display::Graphics _g9 = this->_highlight->get_graphics();		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(822)
						::com::danielfreeman::madcomponents::UIGroupedList_obj::curvedBottom(_g9,this->_cellLeft,top,(this->_cellLeft + this->_cellWidth),bottom,null());
					}
					else{
						HX_STACK_LINE(825)
						this->_highlight->get_graphics()->drawRect(this->_cellLeft,top,(this->_cellWidth + (int)1),(bottom - top));
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIGroupedList_obj,drawHighlight,(void))

Dynamic UIGroupedList_obj::set_filteredData( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","set_filteredData",0x8c56c2d8,"com.danielfreeman.madcomponents.UIGroupedList.set_filteredData","com/danielfreeman/madcomponents/UIGroupedList.hx",831,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(832)
	this->setGroupedData(value);
	HX_STACK_LINE(833)
	return value;
}


Void UIGroupedList_obj::filter( ::String searchFor,::String __o_field,hx::Null< bool >  __o_caseSensitive,hx::Null< bool >  __o_begins){
::String field = __o_field.Default(HX_CSTRING(""));
bool caseSensitive = __o_caseSensitive.Default(false);
bool begins = __o_begins.Default(false);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","filter",0xac533c32,"com.danielfreeman.madcomponents.UIGroupedList.filter","com/danielfreeman/madcomponents/UIGroupedList.hx",838,0x340517cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(searchFor,"searchFor")
	HX_STACK_ARG(field,"field")
	HX_STACK_ARG(caseSensitive,"caseSensitive")
	HX_STACK_ARG(begins,"begins")
{
		HX_STACK_LINE(838)
		if (((searchFor == HX_CSTRING("")))){
			HX_STACK_LINE(839)
			this->set_filteredData(this->_data);
		}
		else{
			HX_STACK_LINE(842)
			if (((field == HX_CSTRING("")))){
				HX_STACK_LINE(843)
				field = this->_field;
			}
			HX_STACK_LINE(845)
			Dynamic result = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(846)
			Dynamic heading = null();		HX_STACK_VAR(heading,"heading");
			HX_STACK_LINE(847)
			{
				HX_STACK_LINE(847)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(847)
				Dynamic _g1 = this->_data;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(847)
				while((true)){
					HX_STACK_LINE(847)
					if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(847)
						break;
					}
					HX_STACK_LINE(847)
					Dynamic group = _g1->__GetItem(_g);		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(847)
					++(_g);
					HX_STACK_LINE(848)
					if ((::Std_obj::is(group,hx::ClassOf< Array<int> >()))){
						HX_STACK_LINE(849)
						Dynamic filteredGroup = this->filterArray(group,searchFor,field,caseSensitive,begins);		HX_STACK_VAR(filteredGroup,"filteredGroup");
						HX_STACK_LINE(850)
						if (((bool((heading != null())) && bool((filteredGroup->__Field(HX_CSTRING("length"),true) > (int)0))))){
							HX_STACK_LINE(851)
							result->__Field(HX_CSTRING("push"),true)(heading);
							HX_STACK_LINE(852)
							result->__Field(HX_CSTRING("push"),true)(filteredGroup);
						}
						HX_STACK_LINE(854)
						heading = null();
					}
					else{
						HX_STACK_LINE(857)
						heading = group;
					}
				}
			}
			HX_STACK_LINE(860)
			this->set_filteredData(result);
		}
	}
return null();
}


::String UIGroupedList_obj::HEADING_CLICKED;

Float UIGroupedList_obj::STRIPE_WIDTH;

Float UIGroupedList_obj::PADDING;

int UIGroupedList_obj::CELL_COLOUR;

Float UIGroupedList_obj::CURVE;

Float UIGroupedList_obj::CURVE7;

Float UIGroupedList_obj::GROUP_SPACING;

::Class UIGroupedList_obj::HEADING;

Void UIGroupedList_obj::curvedTop( ::openfl::display::Graphics shape,Float left,Float top,Float right,Float bottom,hx::Null< bool >  __o_style7){
bool style7 = __o_style7.Default(true);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","curvedTop",0x4626b086,"com.danielfreeman.madcomponents.UIGroupedList.curvedTop","com/danielfreeman/madcomponents/UIGroupedList.hx",568,0x340517cd)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(top,"top")
	HX_STACK_ARG(right,"right")
	HX_STACK_ARG(bottom,"bottom")
	HX_STACK_ARG(style7,"style7")
{
		HX_STACK_LINE(569)
		Float curve;		HX_STACK_VAR(curve,"curve");
		HX_STACK_LINE(569)
		if ((style7)){
			HX_STACK_LINE(569)
			curve = ::com::danielfreeman::madcomponents::UIGroupedList_obj::CURVE7;
		}
		else{
			HX_STACK_LINE(569)
			curve = ::com::danielfreeman::madcomponents::UIGroupedList_obj::CURVE;
		}
		HX_STACK_LINE(570)
		shape->moveTo((left + curve),top);
		HX_STACK_LINE(571)
		shape->lineTo((right - curve),top);
		HX_STACK_LINE(572)
		shape->curveTo(right,top,right,(top + curve));
		HX_STACK_LINE(573)
		shape->lineTo(right,bottom);
		HX_STACK_LINE(574)
		shape->lineTo(left,bottom);
		HX_STACK_LINE(575)
		shape->lineTo(left,(top + curve));
		HX_STACK_LINE(576)
		shape->curveTo(left,top,(left + curve),top);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(UIGroupedList_obj,curvedTop,(void))

Void UIGroupedList_obj::curvedBottom( ::openfl::display::Graphics shape,Float left,Float top,Float right,Float bottom,hx::Null< bool >  __o_style7){
bool style7 = __o_style7.Default(true);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIGroupedList","curvedBottom",0x144aa99a,"com.danielfreeman.madcomponents.UIGroupedList.curvedBottom","com/danielfreeman/madcomponents/UIGroupedList.hx",582,0x340517cd)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(top,"top")
	HX_STACK_ARG(right,"right")
	HX_STACK_ARG(bottom,"bottom")
	HX_STACK_ARG(style7,"style7")
{
		HX_STACK_LINE(583)
		Float curve;		HX_STACK_VAR(curve,"curve");
		HX_STACK_LINE(583)
		if ((style7)){
			HX_STACK_LINE(583)
			curve = ::com::danielfreeman::madcomponents::UIGroupedList_obj::CURVE7;
		}
		else{
			HX_STACK_LINE(583)
			curve = ::com::danielfreeman::madcomponents::UIGroupedList_obj::CURVE;
		}
		HX_STACK_LINE(584)
		shape->moveTo(left,top);
		HX_STACK_LINE(585)
		shape->lineTo(right,top);
		HX_STACK_LINE(586)
		shape->lineTo(right,(bottom - curve));
		HX_STACK_LINE(587)
		shape->curveTo(right,bottom,(right - curve),bottom);
		HX_STACK_LINE(588)
		shape->lineTo((left + curve),bottom);
		HX_STACK_LINE(589)
		shape->curveTo(left,bottom,left,(bottom - curve));
		HX_STACK_LINE(590)
		shape->lineTo(left,top);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(UIGroupedList_obj,curvedBottom,(void))


UIGroupedList_obj::UIGroupedList_obj()
{
}

void UIGroupedList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIGroupedList);
	HX_MARK_MEMBER_NAME(_cellWidth,"_cellWidth");
	HX_MARK_MEMBER_NAME(_length,"_length");
	HX_MARK_MEMBER_NAME(_groupPositions,"_groupPositions");
	HX_MARK_MEMBER_NAME(_group,"_group");
	HX_MARK_MEMBER_NAME(_heading,"_heading");
	HX_MARK_MEMBER_NAME(_hasHeadings,"_hasHeadings");
	HX_MARK_MEMBER_NAME(_groupDetails,"_groupDetails");
	HX_MARK_MEMBER_NAME(_headingFormat,"_headingFormat");
	HX_MARK_MEMBER_NAME(_shadowFormat,"_shadowFormat");
	HX_MARK_MEMBER_NAME(_autoLayoutGroup,"_autoLayoutGroup");
	HX_MARK_MEMBER_NAME(_gapBetweenGroups,"_gapBetweenGroups");
	HX_MARK_MEMBER_NAME(_alwaysAutoLayout,"_alwaysAutoLayout");
	HX_MARK_MEMBER_NAME(_cellLeft,"_cellLeft");
	HX_MARK_MEMBER_NAME(_saveGroup,"_saveGroup");
	HX_MARK_MEMBER_NAME(_headingClicked,"_headingClicked");
	HX_MARK_MEMBER_NAME(_topGroupSpacing,"_topGroupSpacing");
	HX_MARK_MEMBER_NAME(_groupSpacing,"_groupSpacing");
	::com::danielfreeman::madcomponents::UIList_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIGroupedList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cellWidth,"_cellWidth");
	HX_VISIT_MEMBER_NAME(_length,"_length");
	HX_VISIT_MEMBER_NAME(_groupPositions,"_groupPositions");
	HX_VISIT_MEMBER_NAME(_group,"_group");
	HX_VISIT_MEMBER_NAME(_heading,"_heading");
	HX_VISIT_MEMBER_NAME(_hasHeadings,"_hasHeadings");
	HX_VISIT_MEMBER_NAME(_groupDetails,"_groupDetails");
	HX_VISIT_MEMBER_NAME(_headingFormat,"_headingFormat");
	HX_VISIT_MEMBER_NAME(_shadowFormat,"_shadowFormat");
	HX_VISIT_MEMBER_NAME(_autoLayoutGroup,"_autoLayoutGroup");
	HX_VISIT_MEMBER_NAME(_gapBetweenGroups,"_gapBetweenGroups");
	HX_VISIT_MEMBER_NAME(_alwaysAutoLayout,"_alwaysAutoLayout");
	HX_VISIT_MEMBER_NAME(_cellLeft,"_cellLeft");
	HX_VISIT_MEMBER_NAME(_saveGroup,"_saveGroup");
	HX_VISIT_MEMBER_NAME(_headingClicked,"_headingClicked");
	HX_VISIT_MEMBER_NAME(_topGroupSpacing,"_topGroupSpacing");
	HX_VISIT_MEMBER_NAME(_groupSpacing,"_groupSpacing");
	::com::danielfreeman::madcomponents::UIList_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIGroupedList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CURVE") ) { return CURVE; }
		if (HX_FIELD_EQ(inName,"group") ) { return get_group(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CURVE7") ) { return CURVE7; }
		if (HX_FIELD_EQ(inName,"_group") ) { return _group; }
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"HEADING") ) { return HEADING; }
		if (HX_FIELD_EQ(inName,"_length") ) { return _length; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"get_row") ) { return get_row_dyn(); }
		if (HX_FIELD_EQ(inName,"setData") ) { return setData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_heading") ) { return _heading; }
		if (HX_FIELD_EQ(inName,"doCancel") ) { return doCancel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		if (HX_FIELD_EQ(inName,"initDraw") ) { return initDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"drawCell") ) { return drawCell_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curvedTop") ) { return curvedTop_dyn(); }
		if (HX_FIELD_EQ(inName,"_cellLeft") ) { return _cellLeft; }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"setColour") ) { return setColour_dyn(); }
		if (HX_FIELD_EQ(inName,"get_group") ) { return get_group_dyn(); }
		if (HX_FIELD_EQ(inName,"set_group") ) { return set_group_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_cellWidth") ) { return _cellWidth; }
		if (HX_FIELD_EQ(inName,"_saveGroup") ) { return _saveGroup; }
		if (HX_FIELD_EQ(inName,"doClickRow") ) { return doClickRow_dyn(); }
		if (HX_FIELD_EQ(inName,"noHeadings") ) { return noHeadings_dyn(); }
		if (HX_FIELD_EQ(inName,"clearCells") ) { return clearCells_dyn(); }
		if (HX_FIELD_EQ(inName,"illuminate") ) { return illuminate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"touchCancel") ) { return touchCancel_dyn(); }
		if (HX_FIELD_EQ(inName,"setCellSize") ) { return setCellSize_dyn(); }
		if (HX_FIELD_EQ(inName,"redrawCells") ) { return redrawCells_dyn(); }
		if (HX_FIELD_EQ(inName,"pressButton") ) { return pressButton_dyn(); }
		if (HX_FIELD_EQ(inName,"set_xmlData") ) { return set_xmlData_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curvedBottom") ) { return curvedBottom_dyn(); }
		if (HX_FIELD_EQ(inName,"_hasHeadings") ) { return _hasHeadings; }
		if (HX_FIELD_EQ(inName,"findViewById") ) { return findViewById_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_groupDetails") ) { return _groupDetails; }
		if (HX_FIELD_EQ(inName,"_shadowFormat") ) { return _shadowFormat; }
		if (HX_FIELD_EQ(inName,"_groupSpacing") ) { return _groupSpacing; }
		if (HX_FIELD_EQ(inName,"drawComponent") ) { return drawComponent_dyn(); }
		if (HX_FIELD_EQ(inName,"headingChrome") ) { return headingChrome_dyn(); }
		if (HX_FIELD_EQ(inName,"isPressButton") ) { return isPressButton_dyn(); }
		if (HX_FIELD_EQ(inName,"byGroupAndRow") ) { return byGroupAndRow_dyn(); }
		if (HX_FIELD_EQ(inName,"drawHighlight") ) { return drawHighlight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_headingFormat") ) { return _headingFormat; }
		if (HX_FIELD_EQ(inName,"setGroupedData") ) { return setGroupedData_dyn(); }
		if (HX_FIELD_EQ(inName,"dealWithArrows") ) { return dealWithArrows_dyn(); }
		if (HX_FIELD_EQ(inName,"initDrawGroups") ) { return initDrawGroups_dyn(); }
		if (HX_FIELD_EQ(inName,"headingClicked") ) { return headingClicked_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_groupPositions") ) { return _groupPositions; }
		if (HX_FIELD_EQ(inName,"_headingClicked") ) { return _headingClicked; }
		if (HX_FIELD_EQ(inName,"set_rendererXML") ) { return set_rendererXML_dyn(); }
		if (HX_FIELD_EQ(inName,"positionHeading") ) { return positionHeading_dyn(); }
		if (HX_FIELD_EQ(inName,"clearCellGroups") ) { return clearCellGroups_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_autoLayoutGroup") ) { return _autoLayoutGroup; }
		if (HX_FIELD_EQ(inName,"_topGroupSpacing") ) { return _topGroupSpacing; }
		if (HX_FIELD_EQ(inName,"set_filteredData") ) { return set_filteredData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_gapBetweenGroups") ) { return _gapBetweenGroups; }
		if (HX_FIELD_EQ(inName,"_alwaysAutoLayout") ) { return _alwaysAutoLayout; }
		if (HX_FIELD_EQ(inName,"pressedCellLimits") ) { return pressedCellLimits_dyn(); }
		if (HX_FIELD_EQ(inName,"highlightForIndex") ) { return highlightForIndex_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"defaultGroupSpacing") ) { return get_defaultGroupSpacing(); }
		if (HX_FIELD_EQ(inName,"simpleAutoLayoutFix") ) { return simpleAutoLayoutFix_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"calculateMaximumSlide") ) { return calculateMaximumSlide_dyn(); }
		if (HX_FIELD_EQ(inName,"set_headingTextColour") ) { return set_headingTextColour_dyn(); }
		if (HX_FIELD_EQ(inName,"indexToScrollPosition") ) { return indexToScrollPosition_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_defaultGroupSpacing") ) { return get_defaultGroupSpacing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_headingShadowColour") ) { return set_headingShadowColour_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"superCalculateMaximumSlide") ) { return superCalculateMaximumSlide_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIGroupedList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CURVE") ) { CURVE=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { return set_group(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CURVE7") ) { CURVE7=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_group") ) { _group=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"HEADING") ) { HEADING=inValue.Cast< ::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_length") ) { _length=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_heading") ) { _heading=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_cellLeft") ) { _cellLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_cellWidth") ) { _cellWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_saveGroup") ) { _saveGroup=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_hasHeadings") ) { _hasHeadings=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_groupDetails") ) { _groupDetails=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shadowFormat") ) { _shadowFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_groupSpacing") ) { _groupSpacing=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_headingFormat") ) { _headingFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_groupPositions") ) { _groupPositions=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headingClicked") ) { _headingClicked=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_autoLayoutGroup") ) { _autoLayoutGroup=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_topGroupSpacing") ) { _topGroupSpacing=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"headingTextColour") ) { return set_headingTextColour(inValue); }
		if (HX_FIELD_EQ(inName,"_gapBetweenGroups") ) { _gapBetweenGroups=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alwaysAutoLayout") ) { _alwaysAutoLayout=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"headingShadowColour") ) { return set_headingShadowColour(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIGroupedList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("defaultGroupSpacing"));
	outFields->push(HX_CSTRING("group"));
	outFields->push(HX_CSTRING("headingTextColour"));
	outFields->push(HX_CSTRING("headingShadowColour"));
	outFields->push(HX_CSTRING("_cellWidth"));
	outFields->push(HX_CSTRING("_length"));
	outFields->push(HX_CSTRING("_groupPositions"));
	outFields->push(HX_CSTRING("_group"));
	outFields->push(HX_CSTRING("_heading"));
	outFields->push(HX_CSTRING("_hasHeadings"));
	outFields->push(HX_CSTRING("_groupDetails"));
	outFields->push(HX_CSTRING("_headingFormat"));
	outFields->push(HX_CSTRING("_shadowFormat"));
	outFields->push(HX_CSTRING("_autoLayoutGroup"));
	outFields->push(HX_CSTRING("_gapBetweenGroups"));
	outFields->push(HX_CSTRING("_alwaysAutoLayout"));
	outFields->push(HX_CSTRING("_cellLeft"));
	outFields->push(HX_CSTRING("_saveGroup"));
	outFields->push(HX_CSTRING("_headingClicked"));
	outFields->push(HX_CSTRING("_topGroupSpacing"));
	outFields->push(HX_CSTRING("_groupSpacing"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("HEADING_CLICKED"),
	HX_CSTRING("STRIPE_WIDTH"),
	HX_CSTRING("PADDING"),
	HX_CSTRING("CELL_COLOUR"),
	HX_CSTRING("CURVE"),
	HX_CSTRING("CURVE7"),
	HX_CSTRING("GROUP_SPACING"),
	HX_CSTRING("HEADING"),
	HX_CSTRING("curvedTop"),
	HX_CSTRING("curvedBottom"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(UIGroupedList_obj,_cellWidth),HX_CSTRING("_cellWidth")},
	{hx::fsInt,(int)offsetof(UIGroupedList_obj,_length),HX_CSTRING("_length")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UIGroupedList_obj,_groupPositions),HX_CSTRING("_groupPositions")},
	{hx::fsInt,(int)offsetof(UIGroupedList_obj,_group),HX_CSTRING("_group")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UIGroupedList_obj,_heading),HX_CSTRING("_heading")},
	{hx::fsBool,(int)offsetof(UIGroupedList_obj,_hasHeadings),HX_CSTRING("_hasHeadings")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UIGroupedList_obj,_groupDetails),HX_CSTRING("_groupDetails")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UIGroupedList_obj,_headingFormat),HX_CSTRING("_headingFormat")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UIGroupedList_obj,_shadowFormat),HX_CSTRING("_shadowFormat")},
	{hx::fsBool,(int)offsetof(UIGroupedList_obj,_autoLayoutGroup),HX_CSTRING("_autoLayoutGroup")},
	{hx::fsFloat,(int)offsetof(UIGroupedList_obj,_gapBetweenGroups),HX_CSTRING("_gapBetweenGroups")},
	{hx::fsBool,(int)offsetof(UIGroupedList_obj,_alwaysAutoLayout),HX_CSTRING("_alwaysAutoLayout")},
	{hx::fsFloat,(int)offsetof(UIGroupedList_obj,_cellLeft),HX_CSTRING("_cellLeft")},
	{hx::fsInt,(int)offsetof(UIGroupedList_obj,_saveGroup),HX_CSTRING("_saveGroup")},
	{hx::fsBool,(int)offsetof(UIGroupedList_obj,_headingClicked),HX_CSTRING("_headingClicked")},
	{hx::fsFloat,(int)offsetof(UIGroupedList_obj,_topGroupSpacing),HX_CSTRING("_topGroupSpacing")},
	{hx::fsFloat,(int)offsetof(UIGroupedList_obj,_groupSpacing),HX_CSTRING("_groupSpacing")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_cellWidth"),
	HX_CSTRING("_length"),
	HX_CSTRING("_groupPositions"),
	HX_CSTRING("_group"),
	HX_CSTRING("_heading"),
	HX_CSTRING("_hasHeadings"),
	HX_CSTRING("_groupDetails"),
	HX_CSTRING("_headingFormat"),
	HX_CSTRING("_shadowFormat"),
	HX_CSTRING("_autoLayoutGroup"),
	HX_CSTRING("_gapBetweenGroups"),
	HX_CSTRING("_alwaysAutoLayout"),
	HX_CSTRING("_cellLeft"),
	HX_CSTRING("_saveGroup"),
	HX_CSTRING("_headingClicked"),
	HX_CSTRING("_topGroupSpacing"),
	HX_CSTRING("_groupSpacing"),
	HX_CSTRING("get_defaultGroupSpacing"),
	HX_CSTRING("set_rendererXML"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("doCancel"),
	HX_CSTRING("touchCancel"),
	HX_CSTRING("drawComponent"),
	HX_CSTRING("setCellSize"),
	HX_CSTRING("setGroupedData"),
	HX_CSTRING("set_data"),
	HX_CSTRING("refresh"),
	HX_CSTRING("doClickRow"),
	HX_CSTRING("noHeadings"),
	HX_CSTRING("get_row"),
	HX_CSTRING("simpleAutoLayoutFix"),
	HX_CSTRING("dealWithArrows"),
	HX_CSTRING("redrawCells"),
	HX_CSTRING("headingChrome"),
	HX_CSTRING("clear"),
	HX_CSTRING("calculateMaximumSlide"),
	HX_CSTRING("superCalculateMaximumSlide"),
	HX_CSTRING("positionHeading"),
	HX_CSTRING("initDraw"),
	HX_CSTRING("clearCells"),
	HX_CSTRING("clearCellGroups"),
	HX_CSTRING("initDrawGroups"),
	HX_CSTRING("layout"),
	HX_CSTRING("setColour"),
	HX_CSTRING("drawCell"),
	HX_CSTRING("pressedCellLimits"),
	HX_CSTRING("isPressButton"),
	HX_CSTRING("get_group"),
	HX_CSTRING("set_headingTextColour"),
	HX_CSTRING("set_headingShadowColour"),
	HX_CSTRING("indexToScrollPosition"),
	HX_CSTRING("illuminate"),
	HX_CSTRING("set_group"),
	HX_CSTRING("headingClicked"),
	HX_CSTRING("pressButton"),
	HX_CSTRING("byGroupAndRow"),
	HX_CSTRING("findViewById"),
	HX_CSTRING("set_xmlData"),
	HX_CSTRING("setData"),
	HX_CSTRING("highlightForIndex"),
	HX_CSTRING("drawHighlight"),
	HX_CSTRING("set_filteredData"),
	HX_CSTRING("filter"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIGroupedList_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIGroupedList_obj::HEADING_CLICKED,"HEADING_CLICKED");
	HX_MARK_MEMBER_NAME(UIGroupedList_obj::STRIPE_WIDTH,"STRIPE_WIDTH");
	HX_MARK_MEMBER_NAME(UIGroupedList_obj::PADDING,"PADDING");
	HX_MARK_MEMBER_NAME(UIGroupedList_obj::CELL_COLOUR,"CELL_COLOUR");
	HX_MARK_MEMBER_NAME(UIGroupedList_obj::CURVE,"CURVE");
	HX_MARK_MEMBER_NAME(UIGroupedList_obj::CURVE7,"CURVE7");
	HX_MARK_MEMBER_NAME(UIGroupedList_obj::GROUP_SPACING,"GROUP_SPACING");
	HX_MARK_MEMBER_NAME(UIGroupedList_obj::HEADING,"HEADING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIGroupedList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIGroupedList_obj::HEADING_CLICKED,"HEADING_CLICKED");
	HX_VISIT_MEMBER_NAME(UIGroupedList_obj::STRIPE_WIDTH,"STRIPE_WIDTH");
	HX_VISIT_MEMBER_NAME(UIGroupedList_obj::PADDING,"PADDING");
	HX_VISIT_MEMBER_NAME(UIGroupedList_obj::CELL_COLOUR,"CELL_COLOUR");
	HX_VISIT_MEMBER_NAME(UIGroupedList_obj::CURVE,"CURVE");
	HX_VISIT_MEMBER_NAME(UIGroupedList_obj::CURVE7,"CURVE7");
	HX_VISIT_MEMBER_NAME(UIGroupedList_obj::GROUP_SPACING,"GROUP_SPACING");
	HX_VISIT_MEMBER_NAME(UIGroupedList_obj::HEADING,"HEADING");
};

#endif

Class UIGroupedList_obj::__mClass;

void UIGroupedList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIGroupedList"), hx::TCanCast< UIGroupedList_obj> ,sStaticFields,sMemberFields,
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

void UIGroupedList_obj::__boot()
{
	HEADING_CLICKED= HX_CSTRING("headingClicked");
	STRIPE_WIDTH= 8.0;
	PADDING= 10.0;
	CELL_COLOUR= (int)16777215;
	CURVE= 8.0;
	CURVE7= 4.0;
	GROUP_SPACING= (int)45;
	HEADING= null();
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
