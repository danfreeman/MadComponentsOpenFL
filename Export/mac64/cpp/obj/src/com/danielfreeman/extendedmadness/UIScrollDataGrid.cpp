#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_danielfreeman_AnimationTimer
#include <com/danielfreeman/AnimationTimer.h>
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
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UICell
#include <com/danielfreeman/extendedmadness/UICell.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIFastDataGrid
#include <com/danielfreeman/extendedmadness/UIFastDataGrid.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIScrollDataGrid
#include <com/danielfreeman/extendedmadness/UIScrollDataGrid.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIScrollXY
#include <com/danielfreeman/extendedmadness/UIScrollXY.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UISimpleDataGrid
#include <com/danielfreeman/extendedmadness/UISimpleDataGrid.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UISpecialDataGrid
#include <com/danielfreeman/extendedmadness/UISpecialDataGrid.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical
#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void UIScrollDataGrid_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","new",0xb4acf3ef,"com.danielfreeman.extendedmadness.UIScrollDataGrid.new","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",79,0x0cd2a07e)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(113)
	this->_autoScrollEnabledX = false;
	HX_STACK_LINE(112)
	this->_fastLayout = false;
	HX_STACK_LINE(111)
	this->_trigger1 = true;
	HX_STACK_LINE(110)
	this->_trigger0 = false;
	HX_STACK_LINE(109)
	this->_fixedColumnDelta = (int)0;
	HX_STACK_LINE(108)
	this->_slideFixedColumns = false;
	HX_STACK_LINE(106)
	this->_fixedColumnPosition = (int)0;
	HX_STACK_LINE(104)
	this->_fixedColumnColours = null();
	HX_STACK_LINE(103)
	this->_fixedColumns = (int)0;
	HX_STACK_LINE(101)
	this->_headerFixedColumnSlider = null();
	HX_STACK_LINE(100)
	this->_fixedColumnSlider = null();
	HX_STACK_LINE(118)
	xml->setAttribute(HX_CSTRING("border"),HX_CSTRING("false"));
	HX_STACK_LINE(119)
	this->_dataGridXML = xml;
	HX_STACK_LINE(120)
	bool _g2;		HX_STACK_VAR(_g2,"_g2");
	struct _Function_1_1{
		inline static bool Block( ::com::danielfreeman::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",120,0x0cd2a07e)
			{
				HX_STACK_LINE(120)
				::String _g = xml->att->resolve(HX_CSTRING("scrollH"));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(120)
				return (_g != HX_CSTRING("scroll"));
			}
			return null();
		}
	};
	HX_STACK_LINE(120)
	if ((!(((  ((!((!(xml->has->resolve(HX_CSTRING("scrollH"))))))) ? bool(_Function_1_1::Block(xml)) : bool(true) ))))){
		HX_STACK_LINE(120)
		::String _g1 = xml->att->resolve(HX_CSTRING("scrollH"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(120)
		_g2 = (_g1 != HX_CSTRING("no scroll"));
	}
	else{
		HX_STACK_LINE(120)
		_g2 = true;
	}
	HX_STACK_LINE(120)
	this->_autoScrollEnabledX = _g2;
	HX_STACK_LINE(121)
	if ((xml->has->resolve(HX_CSTRING("fixedColumnColours")))){
		HX_STACK_LINE(122)
		::String _g3 = xml->att->resolve(HX_CSTRING("fixedColumnColours"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(122)
		Array< int > _g4 = ::com::danielfreeman::madcomponents::UI_obj::toColourVector(_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(122)
		this->_fixedColumnColours = _g4;
	}
	HX_STACK_LINE(125)
	::com::danielfreeman::MadXML _g5 = this->noChildren(xml);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(125)
	super::__construct(screen,_g5,attributes);
	HX_STACK_LINE(126)
	::com::danielfreeman::AnimationTimer _g6 = ::com::danielfreeman::AnimationTimer_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)4);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(126)
	this->_columnSlideTimer = _g6;
	HX_STACK_LINE(127)
	this->super::layout(attributes);
	struct _Function_1_2{
		inline static bool Block( ::com::danielfreeman::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",128,0x0cd2a07e)
			{
				HX_STACK_LINE(128)
				::String _g7 = xml->att->resolve(HX_CSTRING("slideFixedColumns"));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(128)
				return (_g7 == HX_CSTRING("true"));
			}
			return null();
		}
	};
	HX_STACK_LINE(128)
	if (((  ((xml->has->resolve(HX_CSTRING("slideFixedColumns")))) ? bool(_Function_1_2::Block(xml)) : bool(false) ))){
		HX_STACK_LINE(129)
		this->_slideFixedColumns = true;
		HX_STACK_LINE(130)
		this->_columnSlideTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->columnSlideMovement_dyn());
	}
	HX_STACK_LINE(132)
	this->autoScrollEnabled();
}
;
	return null();
}

//UIScrollDataGrid_obj::~UIScrollDataGrid_obj() { }

Dynamic UIScrollDataGrid_obj::__CreateEmpty() { return  new UIScrollDataGrid_obj; }
hx::ObjectPtr< UIScrollDataGrid_obj > UIScrollDataGrid_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIScrollDataGrid_obj > result = new UIScrollDataGrid_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIScrollDataGrid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIScrollDataGrid_obj > result = new UIScrollDataGrid_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void UIScrollDataGrid_obj::slideFixedColumnsIn( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","slideFixedColumnsIn",0x83e3d4ae,"com.danielfreeman.extendedmadness.UIScrollDataGrid.slideFixedColumnsIn","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",139,0x0cd2a07e)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollDataGrid_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",139,0x0cd2a07e)
				{
					HX_STACK_LINE(139)
					Float _g = __this->_fixedColumnSlider->get_x();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(139)
					return (_g < (int)0);
				}
				return null();
			}
		};
		HX_STACK_LINE(139)
		if (((  (((this->_fixedColumnSlider != null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(140)
			Float _g1 = this->_fixedColumnSlider->get_x();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(140)
			Float _g2 = -(this->_fixedColumnSlider->get_width());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(140)
			Float startPosition;		HX_STACK_VAR(startPosition,"startPosition");
			HX_STACK_LINE(140)
			if (((_g1 < _g2))){
				HX_STACK_LINE(140)
				startPosition = -(this->_fixedColumnSlider->get_width());
			}
			else{
				HX_STACK_LINE(140)
				startPosition = this->_fixedColumnSlider->get_x();
			}
			HX_STACK_LINE(141)
			this->_fixedColumnSlider->set_x(startPosition);
			HX_STACK_LINE(142)
			this->_headerFixedColumnSlider->set_x(startPosition);
			HX_STACK_LINE(143)
			this->_fixedColumnPosition = startPosition;
			HX_STACK_LINE(144)
			this->_fixedColumnDelta = (Float((((int)0 - startPosition))) / Float((int)4));
			HX_STACK_LINE(145)
			this->_columnSlideTimer->stop();
			HX_STACK_LINE(146)
			this->_columnSlideTimer->reset();
			HX_STACK_LINE(147)
			this->_columnSlideTimer->start();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollDataGrid_obj,slideFixedColumnsIn,(void))

Void UIScrollDataGrid_obj::slideFixedColumnsOut( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","slideFixedColumnsOut",0xe37ad7a5,"com.danielfreeman.extendedmadness.UIScrollDataGrid.slideFixedColumnsOut","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",154,0x0cd2a07e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(155)
		this->_columnSlideTimer->stop();
		HX_STACK_LINE(156)
		if (((this->_fixedColumnSlider != null()))){
			HX_STACK_LINE(157)
			this->_fixedColumnPosition = (int)0;
			HX_STACK_LINE(158)
			Float _g = -(this->_fixedColumnSlider->get_width());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(158)
			Float _g1 = (Float(_g) / Float((int)4));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(158)
			this->_fixedColumnDelta = _g1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollDataGrid_obj,slideFixedColumnsOut,(void))

Void UIScrollDataGrid_obj::columnSlideMovement( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","columnSlideMovement",0xe2c48459,"com.danielfreeman.extendedmadness.UIScrollDataGrid.columnSlideMovement","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",166,0x0cd2a07e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(166)
		if (((this->_fixedColumnDelta > (int)0))){
			HX_STACK_LINE(167)
			hx::AddEq(this->_fixedColumnPosition,this->_fixedColumnDelta);
			HX_STACK_LINE(168)
			this->_fixedColumnSlider->set_x(this->_fixedColumnPosition);
			HX_STACK_LINE(169)
			this->_headerFixedColumnSlider->set_x(this->_fixedColumnPosition);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrid_obj,columnSlideMovement,(void))

::com::danielfreeman::MadXML UIScrollDataGrid_obj::noChildren( ::com::danielfreeman::MadXML xml){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","noChildren",0xb256daf1,"com.danielfreeman.extendedmadness.UIScrollDataGrid.noChildren","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",174,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_LINE(175)
	::String result = xml->toXMLString();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(176)
	int position = result.indexOf(HX_CSTRING(">"),null());		HX_STACK_VAR(position,"position");
	HX_STACK_LINE(177)
	::String _g = result.substr((position - (int)1),(int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(177)
	if (((_g == HX_CSTRING("/")))){
		HX_STACK_LINE(178)
		::String _g1 = result.substring((int)0,(position + (int)1));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(178)
		result = _g1;
	}
	else{
		HX_STACK_LINE(181)
		::String _g2 = result.substring((int)0,position);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(181)
		::String _g3 = (_g2 + HX_CSTRING("/>"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(181)
		result = _g3;
	}
	HX_STACK_LINE(183)
	return ::com::danielfreeman::MadXML_obj::parse(result);
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrid_obj,noChildren,return )

Void UIScrollDataGrid_obj::colourFixedColumns( ::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid,hx::Null< bool >  __o_flag){
bool flag = __o_flag.Default(false);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","colourFixedColumns",0xca1d3d86,"com.danielfreeman.extendedmadness.UIScrollDataGrid.colourFixedColumns","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",190,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dataGrid,"dataGrid")
	HX_STACK_ARG(flag,"flag")
{
		HX_STACK_LINE(190)
		if (((bool((this->_fixedColumns > (int)0)) && bool((dataGrid->get_tableCells()->length > (int)0))))){
			HX_STACK_LINE(194)
			if ((flag)){
				HX_STACK_LINE(195)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(195)
				int _g = dataGrid->get_tableCells()->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(195)
				while((true)){
					HX_STACK_LINE(195)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(195)
						break;
					}
					HX_STACK_LINE(195)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(196)
					Array< ::Dynamic > _g2 = dataGrid->get_tableCells();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(196)
					Array< ::Dynamic > tableRow = _g2->__get(i).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(tableRow,"tableRow");
					HX_STACK_LINE(197)
					{
						HX_STACK_LINE(197)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(197)
						int _g21 = this->_fixedColumns;		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(197)
						while((true)){
							HX_STACK_LINE(197)
							if ((!(((_g3 < _g21))))){
								HX_STACK_LINE(197)
								break;
							}
							HX_STACK_LINE(197)
							int j = (_g3)++;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(198)
							::com::danielfreeman::extendedmadness::UICell cell = tableRow->__get(j).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(cell,"cell");
							HX_STACK_LINE(204)
							this->_fixedColumnSlider->addChild(cell);
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIScrollDataGrid_obj,colourFixedColumns,(void))

Void UIScrollDataGrid_obj::sliceTable( ::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","sliceTable",0x3b7576ad,"com.danielfreeman.extendedmadness.UIScrollDataGrid.sliceTable","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",214,0x0cd2a07e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dataGrid,"dataGrid")
		HX_STACK_LINE(215)
		if (((this->_headerSlider == null()))){
			HX_STACK_LINE(216)
			::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(216)
			::openfl::display::Sprite _g1 = this->_headerSlider = _g;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(216)
			this->addChild(_g1);
			HX_STACK_LINE(217)
			this->_headerSlider->set_name(HX_CSTRING("_headerSlider"));
		}
		HX_STACK_LINE(219)
		if (((  ((this->get_xml()->has->resolve(HX_CSTRING("fixedColumns")))) ? bool((this->_fixedColumnSlider == null())) : bool(false) ))){
			HX_STACK_LINE(220)
			::String _g2 = this->get_xml()->att->resolve(HX_CSTRING("fixedColumns"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(220)
			Dynamic _g3 = ::Std_obj::parseInt(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(220)
			this->_fixedColumns = _g3;
			HX_STACK_LINE(221)
			::openfl::display::Sprite _g4 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(221)
			::openfl::display::Sprite _g5 = this->_fixedColumnSlider = _g4;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(221)
			this->addChild(_g5);
			HX_STACK_LINE(222)
			this->_fixedColumnSlider->set_name(HX_CSTRING("_fixedColumnSlider"));
		}
		HX_STACK_LINE(224)
		if (((this->_headerFixedColumnSlider == null()))){
			HX_STACK_LINE(225)
			::openfl::display::Sprite _g6 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(225)
			::openfl::display::Sprite _g7 = this->_headerFixedColumnSlider = _g6;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(225)
			this->addChild(_g7);
			HX_STACK_LINE(226)
			this->_headerFixedColumnSlider->set_name(HX_CSTRING("_headerFixedColumnSlider"));
		}
		HX_STACK_LINE(229)
		this->colourFixedColumns(dataGrid,true);
		HX_STACK_LINE(230)
		if ((dataGrid->get_hasHeader())){
			HX_STACK_LINE(231)
			Array< ::Dynamic > _g8 = dataGrid->get_tableCells();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(231)
			Array< ::Dynamic > headerRow = _g8->__get((int)0).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(headerRow,"headerRow");
			HX_STACK_LINE(232)
			::com::danielfreeman::extendedmadness::UICell cell;		HX_STACK_VAR(cell,"cell");
			HX_STACK_LINE(233)
			{
				HX_STACK_LINE(233)
				int _g1 = this->_fixedColumns;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(233)
				int _g = headerRow->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(233)
				while((true)){
					HX_STACK_LINE(233)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(233)
						break;
					}
					HX_STACK_LINE(233)
					int k = (_g1)++;		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(234)
					::com::danielfreeman::extendedmadness::UICell _g9 = cell = headerRow->__get(k).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(234)
					this->_headerSlider->addChild(_g9);
				}
			}
			HX_STACK_LINE(236)
			if (((this->_fixedColumns > (int)0))){
				HX_STACK_LINE(237)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(237)
				int _g = this->_fixedColumns;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(237)
				while((true)){
					HX_STACK_LINE(237)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(237)
						break;
					}
					HX_STACK_LINE(237)
					int l = (_g1)++;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(238)
					::com::danielfreeman::extendedmadness::UICell _g10 = cell = headerRow->__get(l).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(238)
					this->_headerFixedColumnSlider->addChild(_g10);
				}
			}
		}
		HX_STACK_LINE(242)
		::com::danielfreeman::extendedmadness::UICell _g11 = dataGrid->get_titleCell();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(242)
		if (((_g11 != null()))){
			HX_STACK_LINE(243)
			::com::danielfreeman::extendedmadness::UICell _g12 = dataGrid->get_titleCell();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(243)
			this->_headerFixedColumnSlider->addChild(_g12);
		}
		HX_STACK_LINE(245)
		this->_slider->set_cacheAsBitmap(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrid_obj,sliceTable,(void))

Void UIScrollDataGrid_obj::createSlider( ::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","createSlider",0xa2dd78ce,"com.danielfreeman.extendedmadness.UIScrollDataGrid.createSlider","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",251,0x0cd2a07e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(252)
		::com::danielfreeman::madcomponents::Attributes gridAttributes = attributes->copy(this->_dataGridXML,null());		HX_STACK_VAR(gridAttributes,"gridAttributes");
		struct _Function_1_1{
			inline static bool Block( ::com::danielfreeman::MadXML &xml){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",253,0x0cd2a07e)
				{
					HX_STACK_LINE(253)
					::String _g = xml->att->resolve(HX_CSTRING("datagrid"));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(253)
					return (_g == HX_CSTRING("simple"));
				}
				return null();
			}
		};
		HX_STACK_LINE(253)
		if (((  ((xml->has->resolve(HX_CSTRING("datagrid")))) ? bool(_Function_1_1::Block(xml)) : bool(false) ))){
			HX_STACK_LINE(254)
			::com::danielfreeman::extendedmadness::UISimpleDataGrid _g1 = ::com::danielfreeman::extendedmadness::UISimpleDataGrid_obj::__new(hx::ObjectPtr<OBJ_>(this),this->_dataGridXML,gridAttributes);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(254)
			::com::danielfreeman::extendedmadness::UISimpleDataGrid _g2 = this->_dataGrid = _g1;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(254)
			this->_slider = _g2;
		}
		else{
			struct _Function_2_1{
				inline static bool Block( ::com::danielfreeman::MadXML &xml){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",256,0x0cd2a07e)
					{
						HX_STACK_LINE(256)
						::String _g3 = xml->att->resolve(HX_CSTRING("datagrid"));		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(256)
						return (_g3 == HX_CSTRING("special"));
					}
					return null();
				}
			};
			HX_STACK_LINE(256)
			if (((  ((xml->has->resolve(HX_CSTRING("datagrid")))) ? bool(_Function_2_1::Block(xml)) : bool(false) ))){
				HX_STACK_LINE(257)
				::com::danielfreeman::extendedmadness::UISpecialDataGrid _g4 = ::com::danielfreeman::extendedmadness::UISpecialDataGrid_obj::__new(hx::ObjectPtr<OBJ_>(this),this->_dataGridXML,gridAttributes);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(257)
				::com::danielfreeman::extendedmadness::UISimpleDataGrid _g5 = this->_dataGrid = _g4;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(257)
				this->_slider = _g5;
			}
			else{
				HX_STACK_LINE(260)
				::com::danielfreeman::extendedmadness::UIFastDataGrid _g6 = ::com::danielfreeman::extendedmadness::UIFastDataGrid_obj::__new(hx::ObjectPtr<OBJ_>(this),this->_dataGridXML,gridAttributes);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(260)
				::com::danielfreeman::extendedmadness::UISimpleDataGrid _g7 = this->_dataGrid = _g6;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(260)
				this->_slider = _g7;
			}
		}
		HX_STACK_LINE(262)
		this->_slider->set_name(HX_CSTRING("-"));
		HX_STACK_LINE(263)
		this->sliceTable(this->_dataGrid);
		HX_STACK_LINE(264)
		this->adjustMaximumSlide();
	}
return null();
}


Float UIScrollDataGrid_obj::set_sliderX( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","set_sliderX",0x301dc8c9,"com.danielfreeman.extendedmadness.UIScrollDataGrid.set_sliderX","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",268,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(269)
	Float _g = this->_slider->get_x();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(269)
	Float _g1 = (value - _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(269)
	Float _g2 = ::Math_obj::abs(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(269)
	if (((_g2 < 2048.0))){
		HX_STACK_LINE(270)
		this->_slider->set_x(value);
		HX_STACK_LINE(271)
		if (((this->_headerSlider != null()))){
			HX_STACK_LINE(272)
			this->_headerSlider->set_x(value);
		}
		HX_STACK_LINE(274)
		if (((this->_fixedColumnDelta < (int)0))){
			HX_STACK_LINE(275)
			hx::AddEq(this->_fixedColumnPosition,this->_fixedColumnDelta);
		}
		HX_STACK_LINE(277)
		Float threshold;		HX_STACK_VAR(threshold,"threshold");
		HX_STACK_LINE(277)
		if (((this->_fixedColumnDelta < (int)0))){
			HX_STACK_LINE(277)
			threshold = -(this->_fixedColumnSlider->get_width());
		}
		else{
			HX_STACK_LINE(277)
			threshold = (int)0;
		}
		HX_STACK_LINE(278)
		if (((this->_fixedColumnSlider != null()))){
			HX_STACK_LINE(279)
			this->_fixedColumnSlider->set_x((  (((value > threshold))) ? Float(value) : Float(this->_fixedColumnPosition) ));
		}
		HX_STACK_LINE(281)
		if (((this->_headerFixedColumnSlider != null()))){
			HX_STACK_LINE(282)
			this->_headerFixedColumnSlider->set_x((  (((value > threshold))) ? Float(value) : Float(this->_fixedColumnPosition) ));
		}
	}
	HX_STACK_LINE(285)
	return value;
}


Void UIScrollDataGrid_obj::mouseMove( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","mouseMove",0x9b8854a5,"com.danielfreeman.extendedmadness.UIScrollDataGrid.mouseMove","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",291,0x0cd2a07e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollDataGrid_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",292,0x0cd2a07e)
				{
					HX_STACK_LINE(292)
					Float _g = __this->_slider->get_x();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(292)
					return (_g == (int)0);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollDataGrid_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",292,0x0cd2a07e)
				{
					HX_STACK_LINE(292)
					Float _g1 = __this->get_mouseX();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(292)
					Float _g2 = (_g1 - __this->_lastMouse->x);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(292)
					return (_g2 > 32.0);
				}
				return null();
			}
		};
		HX_STACK_LINE(292)
		if (((  (((  ((this->_trigger0)) ? bool(_Function_1_1::Block(this)) : bool(false) ))) ? bool(_Function_1_2::Block(this)) : bool(false) ))){
			HX_STACK_LINE(293)
			if ((this->_trigger1)){
				HX_STACK_LINE(294)
				::openfl::events::Event _g3 = ::openfl::events::Event_obj::__new(HX_CSTRING("swipeRight"),null(),null());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(294)
				this->dispatchEvent(_g3);
				HX_STACK_LINE(295)
				this->_trigger1 = false;
				HX_STACK_LINE(296)
				this->_trigger0 = false;
				HX_STACK_LINE(297)
				this->_touchTimer->stop();
				HX_STACK_LINE(298)
				this->_dragTimer->stop();
			}
		}
		else{
			HX_STACK_LINE(302)
			this->_trigger1 = true;
		}
		HX_STACK_LINE(304)
		this->super::mouseMove(event);
	}
return null();
}


::openfl::display::DisplayObject UIScrollDataGrid_obj::pressButton( hx::Null< bool >  __o_show){
bool show = __o_show.Default(true);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","pressButton",0xb586f864,"com.danielfreeman.extendedmadness.UIScrollDataGrid.pressButton","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",309,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(show,"show")
{
		HX_STACK_LINE(309)
		return null();
	}
}


Void UIScrollDataGrid_obj::doSearchHit( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","doSearchHit",0x53d7794f,"com.danielfreeman.extendedmadness.UIScrollDataGrid.doSearchHit","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",313,0x0cd2a07e)
		HX_STACK_THIS(this)
	}
return null();
}


Void UIScrollDataGrid_obj::mouseDrag( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","mouseDrag",0x95979d88,"com.danielfreeman.extendedmadness.UIScrollDataGrid.mouseDrag","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",318,0x0cd2a07e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


Void UIScrollDataGrid_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","mouseDown",0x959569f6,"com.danielfreeman.extendedmadness.UIScrollDataGrid.mouseDown","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",323,0x0cd2a07e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(324)
		Float _g = this->_slider->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(324)
		bool _g1 = (_g == (int)0);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(324)
		this->_trigger0 = _g1;
		HX_STACK_LINE(325)
		this->super::mouseDown(event);
	}
return null();
}


Float UIScrollDataGrid_obj::getSliderWidth( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","getSliderWidth",0x9014d400,"com.danielfreeman.extendedmadness.UIScrollDataGrid.getSliderWidth","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",330,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(330)
	if (((this->_scrollerWidth > (int)0))){
		HX_STACK_LINE(330)
		return (this->_scrollerWidth * this->_scale);
	}
	else{
		HX_STACK_LINE(330)
		return this->_slider->get_width();
	}
	HX_STACK_LINE(330)
	return 0.;
}


Float UIScrollDataGrid_obj::getSliderHeight( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","getSliderHeight",0x387424ad,"com.danielfreeman.extendedmadness.UIScrollDataGrid.getSliderHeight","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",335,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(335)
	if (((this->_scrollerHeight > (int)0))){
		HX_STACK_LINE(335)
		return (this->_scrollerHeight * this->_scale);
	}
	else{
		HX_STACK_LINE(335)
		return this->_slider->get_height();
	}
	HX_STACK_LINE(335)
	return 0.;
}


Float UIScrollDataGrid_obj::set_sliderY( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","set_sliderY",0x301dc8ca,"com.danielfreeman.extendedmadness.UIScrollDataGrid.set_sliderY","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",339,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(340)
	Float _g = this->get_sliderY();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(340)
	Float _g1 = (_g - value);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(340)
	Float _g2 = ::Math_obj::abs(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(340)
	Dynamic _g3 = Dynamic( Array_obj<Dynamic>::__new().Add(value).Add(_g2));		HX_STACK_VAR(_g3,"_g3");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &_g3){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",340,0x0cd2a07e)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UIScrollDataGrid.hx"),false);
				__result->Add(HX_CSTRING("lineNumber") , (int)340,false);
				__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.extendedmadness.UIScrollDataGrid"),false);
				__result->Add(HX_CSTRING("methodName") , HX_CSTRING("set_sliderY"),false);
				__result->Add(HX_CSTRING("customParams") , _g3,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(340)
	Dynamic _g4 = _Function_1_1::Block(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(340)
	::haxe::Log_obj::trace(HX_CSTRING("sliderY="),_g4);
	HX_STACK_LINE(341)
	value = this->toPixelBoundaryDouble(hx::ObjectPtr<OBJ_>(this),(int)0,value)->y;
	HX_STACK_LINE(342)
	this->super::set_sliderY(value);
	HX_STACK_LINE(343)
	if (((this->_fixedColumnSlider != null()))){
		HX_STACK_LINE(344)
		Float _g5 = this->get_sliderY();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(344)
		this->_fixedColumnSlider->set_y(_g5);
	}
	HX_STACK_LINE(346)
	this->_headerFixedColumnSlider->set_y((  (((value > (int)0))) ? Float(value) : Float((int)0) ));
	HX_STACK_LINE(347)
	if (((this->_headerSlider != null()))){
		HX_STACK_LINE(348)
		this->_headerSlider->set_y((  (((value > (int)0))) ? Float(value) : Float((int)0) ));
	}
	HX_STACK_LINE(350)
	return value;
}


Dynamic UIScrollDataGrid_obj::set_gridData( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","set_gridData",0x1f387e1e,"com.danielfreeman.extendedmadness.UIScrollDataGrid.set_gridData","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",356,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(357)
	this->_dataGrid->set_data(value);
	HX_STACK_LINE(358)
	this->sliceTable(this->_dataGrid);
	HX_STACK_LINE(359)
	this->adjustMaximumSlide();
	HX_STACK_LINE(360)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrid_obj,set_gridData,return )

Dynamic UIScrollDataGrid_obj::set_headerAndData( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","set_headerAndData",0x3cabd1c6,"com.danielfreeman.extendedmadness.UIScrollDataGrid.set_headerAndData","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",366,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(367)
	this->_dataGrid->set_headerAndData(value);
	HX_STACK_LINE(368)
	this->sliceTable(this->_dataGrid);
	HX_STACK_LINE(369)
	this->adjustMaximumSlide();
	HX_STACK_LINE(370)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrid_obj,set_headerAndData,return )

Void UIScrollDataGrid_obj::clear( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","clear",0x9fefd6dc,"com.danielfreeman.extendedmadness.UIScrollDataGrid.clear","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",382,0x0cd2a07e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(382)
		this->_dataGrid->clear();
	}
return null();
}


int UIScrollDataGrid_obj::set_fixedColumns( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","set_fixedColumns",0x16251ad7,"com.danielfreeman.extendedmadness.UIScrollDataGrid.set_fixedColumns","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",388,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(389)
	if (((value != this->_fixedColumns))){
		HX_STACK_LINE(390)
		this->clear();
	}
	HX_STACK_LINE(392)
	this->_fixedColumns = value;
	HX_STACK_LINE(393)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrid_obj,set_fixedColumns,return )

Void UIScrollDataGrid_obj::compact( hx::Null< bool >  __o_padding){
bool padding = __o_padding.Default(false);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","compact",0x34dca2b2,"com.danielfreeman.extendedmadness.UIScrollDataGrid.compact","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",407,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(padding,"padding")
{
		HX_STACK_LINE(407)
		this->_dataGrid->compact(padding);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrid_obj,compact,(void))

Array< ::Dynamic > UIScrollDataGrid_obj::get_tableCells( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","get_tableCells",0xfcb592bd,"com.danielfreeman.extendedmadness.UIScrollDataGrid.get_tableCells","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",412,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(412)
	return this->_dataGrid->get_tableCells();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollDataGrid_obj,get_tableCells,return )

bool UIScrollDataGrid_obj::get_hasHeader( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","get_hasHeader",0x61cd5cad,"com.danielfreeman.extendedmadness.UIScrollDataGrid.get_hasHeader","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",417,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(417)
	return this->_dataGrid->get_hasHeader();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollDataGrid_obj,get_hasHeader,return )

::com::danielfreeman::MadXML UIScrollDataGrid_obj::get_xml( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","get_xml",0xd843cd7d,"com.danielfreeman.extendedmadness.UIScrollDataGrid.get_xml","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",422,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(422)
	return this->_dataGridXML;
}


Float UIScrollDataGrid_obj::set_textSize( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","set_textSize",0x29e53e1c,"com.danielfreeman.extendedmadness.UIScrollDataGrid.set_textSize","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",426,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(427)
	(hx::TCast< com::danielfreeman::extendedmadness::UIFastDataGrid >::cast(this->_dataGrid))->set_textSize(value);
	HX_STACK_LINE(428)
	this->adjustMaximumSlide();
	HX_STACK_LINE(429)
	this->sliceTable(this->_dataGrid);
	HX_STACK_LINE(430)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrid_obj,set_textSize,return )

Void UIScrollDataGrid_obj::fixedHeaderLine( ::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","fixedHeaderLine",0x3d792cc4,"com.danielfreeman.extendedmadness.UIScrollDataGrid.fixedHeaderLine","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",434,0x0cd2a07e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dataGrid,"dataGrid")
		HX_STACK_LINE(435)
		int colour;		HX_STACK_VAR(colour,"colour");
		HX_STACK_LINE(435)
		if ((dataGrid->get_hasHeader())){
			HX_STACK_LINE(435)
			colour = dataGrid->get_headerColour();
		}
		else{
			HX_STACK_LINE(435)
			Array< int > _g = dataGrid->get_colours();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(435)
			int _g1 = _g->__get((int)0);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(435)
			colour = ::com::danielfreeman::madcomponents::Colour_obj::darken(_g1,::com::danielfreeman::extendedmadness::UIScrollDataGrid_obj::DARKEN);
		}
		HX_STACK_LINE(436)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(436)
		if ((dataGrid->get_hasHeader())){
			HX_STACK_LINE(436)
			index = (int)0;
		}
		else{
			HX_STACK_LINE(436)
			index = (int)1;
		}
		HX_STACK_LINE(437)
		this->_headerSlider->get_graphics()->clear();
		HX_STACK_LINE(438)
		this->_headerSlider->get_graphics()->beginFill(colour,null());
		HX_STACK_LINE(439)
		Float _g2 = this->_headerSlider->getBounds(hx::ObjectPtr<OBJ_>(this))->get_left();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(439)
		Float _g3 = this->_headerSlider->getBounds(hx::ObjectPtr<OBJ_>(this))->get_top();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(439)
		Float _g4 = this->_headerSlider->get_width();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(439)
		Float _g5 = this->_headerSlider->get_height();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(439)
		this->_headerSlider->get_graphics()->drawRect(_g2,_g3,_g4,_g5);
		HX_STACK_LINE(440)
		this->_headerSlider->get_graphics()->endFill();
		HX_STACK_LINE(441)
		if (((bool((this->_headerFixedColumnSlider != null())) && bool((this->_fixedColumnSlider != null()))))){
			HX_STACK_LINE(442)
			this->_headerFixedColumnSlider->get_graphics()->clear();
			HX_STACK_LINE(443)
			this->_headerFixedColumnSlider->get_graphics()->beginFill(colour,null());
			HX_STACK_LINE(444)
			Float _g6 = this->_headerFixedColumnSlider->getBounds(hx::ObjectPtr<OBJ_>(this))->get_top();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(444)
			Float _g7 = this->_fixedColumnSlider->get_width();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(444)
			Float _g8 = this->_headerFixedColumnSlider->get_height();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(444)
			this->_headerFixedColumnSlider->get_graphics()->drawRect((int)0,_g6,_g7,_g8);
			HX_STACK_LINE(445)
			this->_headerFixedColumnSlider->get_graphics()->endFill();
			HX_STACK_LINE(446)
			int _g9 = this->_dataGrid->get_attributes()->get_colour();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(446)
			this->_headerFixedColumnSlider->get_graphics()->beginFill(_g9,null());
			HX_STACK_LINE(447)
			Float _g10 = this->_fixedColumnSlider->get_width();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(447)
			Float _g11 = this->_headerFixedColumnSlider->getBounds(hx::ObjectPtr<OBJ_>(this))->get_top();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(447)
			Float _g12 = this->_headerFixedColumnSlider->get_height();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(447)
			this->_headerFixedColumnSlider->get_graphics()->drawRect(_g10,_g11,2.0,_g12);
			HX_STACK_LINE(448)
			this->_headerFixedColumnSlider->get_graphics()->endFill();
		}
		HX_STACK_LINE(450)
		if (((this->_fixedColumnSlider != null()))){
			HX_STACK_LINE(451)
			this->_fixedColumnSlider->get_graphics()->clear();
			HX_STACK_LINE(452)
			{
				HX_STACK_LINE(452)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(452)
				Array< ::Dynamic > _g1 = dataGrid->get_tableCells();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(452)
				while((true)){
					HX_STACK_LINE(452)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(452)
						break;
					}
					HX_STACK_LINE(452)
					Array< ::Dynamic > row = _g1->__get(_g).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(452)
					++(_g);
					HX_STACK_LINE(453)
					this->_fixedColumnSlider->get_graphics()->beginFill(colour,null());
					HX_STACK_LINE(454)
					Float _g13 = row->__get((int)0).StaticCast< ::com::danielfreeman::extendedmadness::UICell >()->get_y();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(454)
					Float _g14 = this->_fixedColumnSlider->get_width();		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(454)
					Float _g15 = row->__get((int)0).StaticCast< ::com::danielfreeman::extendedmadness::UICell >()->get_height();		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(454)
					this->_fixedColumnSlider->get_graphics()->drawRect((int)0,_g13,_g14,_g15);
					HX_STACK_LINE(455)
					this->_fixedColumnSlider->get_graphics()->endFill();
					HX_STACK_LINE(456)
					Array< int > _g16 = dataGrid->get_colours();		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(456)
					int _g17 = (index)++;		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(456)
					int _g18 = hx::Mod(_g17,dataGrid->get_colours()->length);		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(456)
					int _g19 = _g16->__get(_g18);		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(456)
					int _g20 = ::com::danielfreeman::madcomponents::Colour_obj::darken(_g19,::com::danielfreeman::extendedmadness::UIScrollDataGrid_obj::DARKEN);		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(456)
					colour = _g20;
				}
			}
			HX_STACK_LINE(458)
			int _g21 = this->_dataGrid->get_attributes()->get_colour();		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(458)
			this->_fixedColumnSlider->get_graphics()->beginFill(_g21,null());
			HX_STACK_LINE(459)
			Float _g22 = this->_fixedColumnSlider->get_width();		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(459)
			Float _g23 = this->_fixedColumnSlider->getBounds(hx::ObjectPtr<OBJ_>(this))->get_top();		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(459)
			Float _g24 = this->_fixedColumnSlider->get_height();		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(459)
			this->_fixedColumnSlider->get_graphics()->drawRect(_g22,_g23,2.0,_g24);
			HX_STACK_LINE(460)
			this->_fixedColumnSlider->get_graphics()->endFill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrid_obj,fixedHeaderLine,(void))

Void UIScrollDataGrid_obj::autoScrollEnabled( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","autoScrollEnabled",0xa877f6d4,"com.danielfreeman.extendedmadness.UIScrollDataGrid.autoScrollEnabled","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",466,0x0cd2a07e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(466)
		if ((this->_autoScrollEnabledX)){
			HX_STACK_LINE(467)
			bool _g = !(this->_dataGrid->get_fits());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(467)
			this->_scrollEnabledX = _g;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollDataGrid_obj,autoScrollEnabled,(void))

Void UIScrollDataGrid_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","layout",0xa2fcee7b,"com.danielfreeman.extendedmadness.UIScrollDataGrid.layout","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",474,0x0cd2a07e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(475)
		this->_attributes = attributes;
		HX_STACK_LINE(476)
		if ((this->_fastLayout)){
			HX_STACK_LINE(477)
			this->adjustMaximumSlide();
			HX_STACK_LINE(478)
			this->refreshMasking(null());
		}
		else{
			HX_STACK_LINE(481)
			this->_dataGrid->layout(attributes);
			HX_STACK_LINE(482)
			this->super::layout(attributes);
			HX_STACK_LINE(483)
			::com::danielfreeman::extendedmadness::UISimpleDataGrid _g = this->get_dataGrid();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(483)
			this->fixedHeaderLine(_g);
		}
		HX_STACK_LINE(485)
		this->autoScrollEnabled();
	}
return null();
}


::openfl::display::DisplayObject UIScrollDataGrid_obj::findViewById( ::String id,hx::Null< int >  __o_row,hx::Null< int >  __o_group){
int row = __o_row.Default(-1);
int group = __o_group.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","findViewById",0x7c464e81,"com.danielfreeman.extendedmadness.UIScrollDataGrid.findViewById","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",492,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(group,"group")
{
		HX_STACK_LINE(492)
		return this->_dataGrid->findViewById(id,row,group);
	}
}


Void UIScrollDataGrid_obj::showScrollBar( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","showScrollBar",0x909b2758,"com.danielfreeman.extendedmadness.UIScrollDataGrid.showScrollBar","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",496,0x0cd2a07e)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollDataGrid_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",497,0x0cd2a07e)
				{
					HX_STACK_LINE(497)
					Float _g = ::Math_obj::abs(__this->_delta);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(497)
					Float _g1 = ::Math_obj::abs(__this->_deltaX);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(497)
					return (_g < _g1);
				}
				return null();
			}
		};
		HX_STACK_LINE(497)
		if (((  (((bool((bool(!(this->_scrollBarVisible)) && bool(this->_slideFixedColumns))) && bool((this->_fixedColumnSlider != null()))))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(498)
			this->slideFixedColumnsOut();
		}
		HX_STACK_LINE(500)
		this->super::showScrollBar();
	}
return null();
}


Void UIScrollDataGrid_obj::hideScrollBar( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","hideScrollBar",0xc44a26f3,"com.danielfreeman.extendedmadness.UIScrollDataGrid.hideScrollBar","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",504,0x0cd2a07e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(505)
		if (((bool((bool(this->_scrollBarVisible) && bool(this->_slideFixedColumns))) && bool((this->_fixedColumnSlider != null()))))){
			HX_STACK_LINE(506)
			this->slideFixedColumnsIn();
		}
		HX_STACK_LINE(508)
		this->super::hideScrollBar();
	}
return null();
}


Void UIScrollDataGrid_obj::adjustMaximumSlide( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","adjustMaximumSlide",0xf5db61b1,"com.danielfreeman.extendedmadness.UIScrollDataGrid.adjustMaximumSlide","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",512,0x0cd2a07e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(513)
		this->set_sliderX((int)0);
		HX_STACK_LINE(514)
		this->set_sliderY((int)0);
		HX_STACK_LINE(515)
		this->super::adjustMaximumSlide();
	}
return null();
}


bool UIScrollDataGrid_obj::set_slideFixedColumns( bool value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","set_slideFixedColumns",0xff2e4ccc,"com.danielfreeman.extendedmadness.UIScrollDataGrid.set_slideFixedColumns","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",522,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(523)
	this->_slideFixedColumns = value;
	HX_STACK_LINE(524)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrid_obj,set_slideFixedColumns,return )

::String UIScrollDataGrid_obj::set_title( ::String value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","set_title",0xde0816ca,"com.danielfreeman.extendedmadness.UIScrollDataGrid.set_title","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",530,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(531)
	this->_dataGrid->set_title(value);
	HX_STACK_LINE(532)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrid_obj,set_title,return )

Array< int > UIScrollDataGrid_obj::set_colours( Array< int > value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","set_colours",0x8b5dac59,"com.danielfreeman.extendedmadness.UIScrollDataGrid.set_colours","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",538,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(539)
	this->_dataGrid->set_colours(value);
	HX_STACK_LINE(540)
	this->colourFixedColumns(this->_dataGrid,null());
	HX_STACK_LINE(541)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrid_obj,set_colours,return )

Array< int > UIScrollDataGrid_obj::get_colours( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","get_colours",0x80f0a54d,"com.danielfreeman.extendedmadness.UIScrollDataGrid.get_colours","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",546,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(546)
	return this->_dataGrid->get_colours();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollDataGrid_obj,get_colours,return )

::com::danielfreeman::extendedmadness::UISimpleDataGrid UIScrollDataGrid_obj::get_dataGrid( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","get_dataGrid",0x497cdcaa,"com.danielfreeman.extendedmadness.UIScrollDataGrid.get_dataGrid","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",553,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(553)
	return this->_dataGrid;
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollDataGrid_obj,get_dataGrid,return )

Float UIScrollDataGrid_obj::set_scrollPositionY( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","set_scrollPositionY",0xb1164575,"com.danielfreeman.extendedmadness.UIScrollDataGrid.set_scrollPositionY","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",557,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(558)
	this->set_sliderY(-(value));
	HX_STACK_LINE(559)
	return value;
}


Float UIScrollDataGrid_obj::set_scrollPositionX( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","set_scrollPositionX",0xb1164574,"com.danielfreeman.extendedmadness.UIScrollDataGrid.set_scrollPositionX","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",563,0x0cd2a07e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(564)
	this->set_sliderX(-(value));
	HX_STACK_LINE(565)
	return value;
}


Void UIScrollDataGrid_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrid","destructor",0x65a0d78a,"com.danielfreeman.extendedmadness.UIScrollDataGrid.destructor","com/danielfreeman/extendedmadness/UIScrollDataGrid.hx",569,0x0cd2a07e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(570)
		this->super::destructor();
		HX_STACK_LINE(571)
		this->_dataGrid->destructor();
	}
return null();
}


::String UIScrollDataGrid_obj::SWIPE_RIGHT;

int UIScrollDataGrid_obj::STEPS;

Float UIScrollDataGrid_obj::SWIPE_THRESHOLD;

int UIScrollDataGrid_obj::DARKEN;


UIScrollDataGrid_obj::UIScrollDataGrid_obj()
{
}

void UIScrollDataGrid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIScrollDataGrid);
	HX_MARK_MEMBER_NAME(_headerSlider,"_headerSlider");
	HX_MARK_MEMBER_NAME(_fixedColumnSlider,"_fixedColumnSlider");
	HX_MARK_MEMBER_NAME(_headerFixedColumnSlider,"_headerFixedColumnSlider");
	HX_MARK_MEMBER_NAME(_dataGridXML,"_dataGridXML");
	HX_MARK_MEMBER_NAME(_fixedColumns,"_fixedColumns");
	HX_MARK_MEMBER_NAME(_fixedColumnColours,"_fixedColumnColours");
	HX_MARK_MEMBER_NAME(_dataGrid,"_dataGrid");
	HX_MARK_MEMBER_NAME(_fixedColumnPosition,"_fixedColumnPosition");
	HX_MARK_MEMBER_NAME(_columnSlideTimer,"_columnSlideTimer");
	HX_MARK_MEMBER_NAME(_slideFixedColumns,"_slideFixedColumns");
	HX_MARK_MEMBER_NAME(_fixedColumnDelta,"_fixedColumnDelta");
	HX_MARK_MEMBER_NAME(_trigger0,"_trigger0");
	HX_MARK_MEMBER_NAME(_trigger1,"_trigger1");
	HX_MARK_MEMBER_NAME(_fastLayout,"_fastLayout");
	HX_MARK_MEMBER_NAME(_autoScrollEnabledX,"_autoScrollEnabledX");
	::com::danielfreeman::extendedmadness::UIScrollXY_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIScrollDataGrid_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_headerSlider,"_headerSlider");
	HX_VISIT_MEMBER_NAME(_fixedColumnSlider,"_fixedColumnSlider");
	HX_VISIT_MEMBER_NAME(_headerFixedColumnSlider,"_headerFixedColumnSlider");
	HX_VISIT_MEMBER_NAME(_dataGridXML,"_dataGridXML");
	HX_VISIT_MEMBER_NAME(_fixedColumns,"_fixedColumns");
	HX_VISIT_MEMBER_NAME(_fixedColumnColours,"_fixedColumnColours");
	HX_VISIT_MEMBER_NAME(_dataGrid,"_dataGrid");
	HX_VISIT_MEMBER_NAME(_fixedColumnPosition,"_fixedColumnPosition");
	HX_VISIT_MEMBER_NAME(_columnSlideTimer,"_columnSlideTimer");
	HX_VISIT_MEMBER_NAME(_slideFixedColumns,"_slideFixedColumns");
	HX_VISIT_MEMBER_NAME(_fixedColumnDelta,"_fixedColumnDelta");
	HX_VISIT_MEMBER_NAME(_trigger0,"_trigger0");
	HX_VISIT_MEMBER_NAME(_trigger1,"_trigger1");
	HX_VISIT_MEMBER_NAME(_fastLayout,"_fastLayout");
	HX_VISIT_MEMBER_NAME(_autoScrollEnabledX,"_autoScrollEnabledX");
	::com::danielfreeman::extendedmadness::UIScrollXY_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIScrollDataGrid_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"DARKEN") ) { return DARKEN; }
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colours") ) { return get_colours(); }
		if (HX_FIELD_EQ(inName,"compact") ) { return compact_dyn(); }
		if (HX_FIELD_EQ(inName,"get_xml") ) { return get_xml_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dataGrid") ) { return get_dataGrid(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasHeader") ) { return get_hasHeader(); }
		if (HX_FIELD_EQ(inName,"_dataGrid") ) { return _dataGrid; }
		if (HX_FIELD_EQ(inName,"_trigger0") ) { return _trigger0; }
		if (HX_FIELD_EQ(inName,"_trigger1") ) { return _trigger1; }
		if (HX_FIELD_EQ(inName,"mouseMove") ) { return mouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseDrag") ) { return mouseDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return set_title_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tableCells") ) { return get_tableCells(); }
		if (HX_FIELD_EQ(inName,"noChildren") ) { return noChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"sliceTable") ) { return sliceTable_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_fastLayout") ) { return _fastLayout; }
		if (HX_FIELD_EQ(inName,"set_sliderX") ) { return set_sliderX_dyn(); }
		if (HX_FIELD_EQ(inName,"pressButton") ) { return pressButton_dyn(); }
		if (HX_FIELD_EQ(inName,"doSearchHit") ) { return doSearchHit_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sliderY") ) { return set_sliderY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_colours") ) { return set_colours_dyn(); }
		if (HX_FIELD_EQ(inName,"get_colours") ) { return get_colours_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_dataGridXML") ) { return _dataGridXML; }
		if (HX_FIELD_EQ(inName,"createSlider") ) { return createSlider_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gridData") ) { return set_gridData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textSize") ) { return set_textSize_dyn(); }
		if (HX_FIELD_EQ(inName,"findViewById") ) { return findViewById_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dataGrid") ) { return get_dataGrid_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_headerSlider") ) { return _headerSlider; }
		if (HX_FIELD_EQ(inName,"_fixedColumns") ) { return _fixedColumns; }
		if (HX_FIELD_EQ(inName,"get_hasHeader") ) { return get_hasHeader_dyn(); }
		if (HX_FIELD_EQ(inName,"showScrollBar") ) { return showScrollBar_dyn(); }
		if (HX_FIELD_EQ(inName,"hideScrollBar") ) { return hideScrollBar_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getSliderWidth") ) { return getSliderWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tableCells") ) { return get_tableCells_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getSliderHeight") ) { return getSliderHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"fixedHeaderLine") ) { return fixedHeaderLine_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_fixedColumns") ) { return set_fixedColumns_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_columnSlideTimer") ) { return _columnSlideTimer; }
		if (HX_FIELD_EQ(inName,"_fixedColumnDelta") ) { return _fixedColumnDelta; }
		if (HX_FIELD_EQ(inName,"set_headerAndData") ) { return set_headerAndData_dyn(); }
		if (HX_FIELD_EQ(inName,"autoScrollEnabled") ) { return autoScrollEnabled_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_fixedColumnSlider") ) { return _fixedColumnSlider; }
		if (HX_FIELD_EQ(inName,"_slideFixedColumns") ) { return _slideFixedColumns; }
		if (HX_FIELD_EQ(inName,"colourFixedColumns") ) { return colourFixedColumns_dyn(); }
		if (HX_FIELD_EQ(inName,"adjustMaximumSlide") ) { return adjustMaximumSlide_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_fixedColumnColours") ) { return _fixedColumnColours; }
		if (HX_FIELD_EQ(inName,"_autoScrollEnabledX") ) { return _autoScrollEnabledX; }
		if (HX_FIELD_EQ(inName,"slideFixedColumnsIn") ) { return slideFixedColumnsIn_dyn(); }
		if (HX_FIELD_EQ(inName,"columnSlideMovement") ) { return columnSlideMovement_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollPositionY") ) { return set_scrollPositionY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollPositionX") ) { return set_scrollPositionX_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_fixedColumnPosition") ) { return _fixedColumnPosition; }
		if (HX_FIELD_EQ(inName,"slideFixedColumnsOut") ) { return slideFixedColumnsOut_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"set_slideFixedColumns") ) { return set_slideFixedColumns_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_headerFixedColumnSlider") ) { return _headerFixedColumnSlider; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIScrollDataGrid_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return set_title(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"DARKEN") ) { DARKEN=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colours") ) { return set_colours(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gridData") ) { return set_gridData(inValue); }
		if (HX_FIELD_EQ(inName,"textSize") ) { return set_textSize(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dataGrid") ) { _dataGrid=inValue.Cast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_trigger0") ) { _trigger0=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_trigger1") ) { _trigger1=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_fastLayout") ) { _fastLayout=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fixedColumns") ) { return set_fixedColumns(inValue); }
		if (HX_FIELD_EQ(inName,"_dataGridXML") ) { _dataGridXML=inValue.Cast< ::com::danielfreeman::MadXML >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"headerAndData") ) { return set_headerAndData(inValue); }
		if (HX_FIELD_EQ(inName,"_headerSlider") ) { _headerSlider=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fixedColumns") ) { _fixedColumns=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"slideFixedColumns") ) { return set_slideFixedColumns(inValue); }
		if (HX_FIELD_EQ(inName,"_columnSlideTimer") ) { _columnSlideTimer=inValue.Cast< ::com::danielfreeman::AnimationTimer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fixedColumnDelta") ) { _fixedColumnDelta=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_fixedColumnSlider") ) { _fixedColumnSlider=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slideFixedColumns") ) { _slideFixedColumns=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_fixedColumnColours") ) { _fixedColumnColours=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_autoScrollEnabledX") ) { _autoScrollEnabledX=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_fixedColumnPosition") ) { _fixedColumnPosition=inValue.Cast< Float >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_headerFixedColumnSlider") ) { _headerFixedColumnSlider=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIScrollDataGrid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gridData"));
	outFields->push(HX_CSTRING("headerAndData"));
	outFields->push(HX_CSTRING("fixedColumns"));
	outFields->push(HX_CSTRING("tableCells"));
	outFields->push(HX_CSTRING("hasHeader"));
	outFields->push(HX_CSTRING("textSize"));
	outFields->push(HX_CSTRING("slideFixedColumns"));
	outFields->push(HX_CSTRING("title"));
	outFields->push(HX_CSTRING("colours"));
	outFields->push(HX_CSTRING("dataGrid"));
	outFields->push(HX_CSTRING("_headerSlider"));
	outFields->push(HX_CSTRING("_fixedColumnSlider"));
	outFields->push(HX_CSTRING("_headerFixedColumnSlider"));
	outFields->push(HX_CSTRING("_dataGridXML"));
	outFields->push(HX_CSTRING("_fixedColumns"));
	outFields->push(HX_CSTRING("_fixedColumnColours"));
	outFields->push(HX_CSTRING("_dataGrid"));
	outFields->push(HX_CSTRING("_fixedColumnPosition"));
	outFields->push(HX_CSTRING("_columnSlideTimer"));
	outFields->push(HX_CSTRING("_slideFixedColumns"));
	outFields->push(HX_CSTRING("_fixedColumnDelta"));
	outFields->push(HX_CSTRING("_trigger0"));
	outFields->push(HX_CSTRING("_trigger1"));
	outFields->push(HX_CSTRING("_fastLayout"));
	outFields->push(HX_CSTRING("_autoScrollEnabledX"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SWIPE_RIGHT"),
	HX_CSTRING("STEPS"),
	HX_CSTRING("SWIPE_THRESHOLD"),
	HX_CSTRING("DARKEN"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UIScrollDataGrid_obj,_headerSlider),HX_CSTRING("_headerSlider")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UIScrollDataGrid_obj,_fixedColumnSlider),HX_CSTRING("_fixedColumnSlider")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UIScrollDataGrid_obj,_headerFixedColumnSlider),HX_CSTRING("_headerFixedColumnSlider")},
	{hx::fsObject /*::com::danielfreeman::MadXML*/ ,(int)offsetof(UIScrollDataGrid_obj,_dataGridXML),HX_CSTRING("_dataGridXML")},
	{hx::fsInt,(int)offsetof(UIScrollDataGrid_obj,_fixedColumns),HX_CSTRING("_fixedColumns")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(UIScrollDataGrid_obj,_fixedColumnColours),HX_CSTRING("_fixedColumnColours")},
	{hx::fsObject /*::com::danielfreeman::extendedmadness::UISimpleDataGrid*/ ,(int)offsetof(UIScrollDataGrid_obj,_dataGrid),HX_CSTRING("_dataGrid")},
	{hx::fsFloat,(int)offsetof(UIScrollDataGrid_obj,_fixedColumnPosition),HX_CSTRING("_fixedColumnPosition")},
	{hx::fsObject /*::com::danielfreeman::AnimationTimer*/ ,(int)offsetof(UIScrollDataGrid_obj,_columnSlideTimer),HX_CSTRING("_columnSlideTimer")},
	{hx::fsBool,(int)offsetof(UIScrollDataGrid_obj,_slideFixedColumns),HX_CSTRING("_slideFixedColumns")},
	{hx::fsFloat,(int)offsetof(UIScrollDataGrid_obj,_fixedColumnDelta),HX_CSTRING("_fixedColumnDelta")},
	{hx::fsBool,(int)offsetof(UIScrollDataGrid_obj,_trigger0),HX_CSTRING("_trigger0")},
	{hx::fsBool,(int)offsetof(UIScrollDataGrid_obj,_trigger1),HX_CSTRING("_trigger1")},
	{hx::fsBool,(int)offsetof(UIScrollDataGrid_obj,_fastLayout),HX_CSTRING("_fastLayout")},
	{hx::fsBool,(int)offsetof(UIScrollDataGrid_obj,_autoScrollEnabledX),HX_CSTRING("_autoScrollEnabledX")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_headerSlider"),
	HX_CSTRING("_fixedColumnSlider"),
	HX_CSTRING("_headerFixedColumnSlider"),
	HX_CSTRING("_dataGridXML"),
	HX_CSTRING("_fixedColumns"),
	HX_CSTRING("_fixedColumnColours"),
	HX_CSTRING("_dataGrid"),
	HX_CSTRING("_fixedColumnPosition"),
	HX_CSTRING("_columnSlideTimer"),
	HX_CSTRING("_slideFixedColumns"),
	HX_CSTRING("_fixedColumnDelta"),
	HX_CSTRING("_trigger0"),
	HX_CSTRING("_trigger1"),
	HX_CSTRING("_fastLayout"),
	HX_CSTRING("_autoScrollEnabledX"),
	HX_CSTRING("slideFixedColumnsIn"),
	HX_CSTRING("slideFixedColumnsOut"),
	HX_CSTRING("columnSlideMovement"),
	HX_CSTRING("noChildren"),
	HX_CSTRING("colourFixedColumns"),
	HX_CSTRING("sliceTable"),
	HX_CSTRING("createSlider"),
	HX_CSTRING("set_sliderX"),
	HX_CSTRING("mouseMove"),
	HX_CSTRING("pressButton"),
	HX_CSTRING("doSearchHit"),
	HX_CSTRING("mouseDrag"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("getSliderWidth"),
	HX_CSTRING("getSliderHeight"),
	HX_CSTRING("set_sliderY"),
	HX_CSTRING("set_gridData"),
	HX_CSTRING("set_headerAndData"),
	HX_CSTRING("clear"),
	HX_CSTRING("set_fixedColumns"),
	HX_CSTRING("compact"),
	HX_CSTRING("get_tableCells"),
	HX_CSTRING("get_hasHeader"),
	HX_CSTRING("get_xml"),
	HX_CSTRING("set_textSize"),
	HX_CSTRING("fixedHeaderLine"),
	HX_CSTRING("autoScrollEnabled"),
	HX_CSTRING("layout"),
	HX_CSTRING("findViewById"),
	HX_CSTRING("showScrollBar"),
	HX_CSTRING("hideScrollBar"),
	HX_CSTRING("adjustMaximumSlide"),
	HX_CSTRING("set_slideFixedColumns"),
	HX_CSTRING("set_title"),
	HX_CSTRING("set_colours"),
	HX_CSTRING("get_colours"),
	HX_CSTRING("get_dataGrid"),
	HX_CSTRING("set_scrollPositionY"),
	HX_CSTRING("set_scrollPositionX"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIScrollDataGrid_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIScrollDataGrid_obj::SWIPE_RIGHT,"SWIPE_RIGHT");
	HX_MARK_MEMBER_NAME(UIScrollDataGrid_obj::STEPS,"STEPS");
	HX_MARK_MEMBER_NAME(UIScrollDataGrid_obj::SWIPE_THRESHOLD,"SWIPE_THRESHOLD");
	HX_MARK_MEMBER_NAME(UIScrollDataGrid_obj::DARKEN,"DARKEN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIScrollDataGrid_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIScrollDataGrid_obj::SWIPE_RIGHT,"SWIPE_RIGHT");
	HX_VISIT_MEMBER_NAME(UIScrollDataGrid_obj::STEPS,"STEPS");
	HX_VISIT_MEMBER_NAME(UIScrollDataGrid_obj::SWIPE_THRESHOLD,"SWIPE_THRESHOLD");
	HX_VISIT_MEMBER_NAME(UIScrollDataGrid_obj::DARKEN,"DARKEN");
};

#endif

Class UIScrollDataGrid_obj::__mClass;

void UIScrollDataGrid_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UIScrollDataGrid"), hx::TCanCast< UIScrollDataGrid_obj> ,sStaticFields,sMemberFields,
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

void UIScrollDataGrid_obj::__boot()
{
	SWIPE_RIGHT= HX_CSTRING("swipeRight");
	STEPS= (int)4;
	SWIPE_THRESHOLD= 32.0;
	DARKEN= (int)-16;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
