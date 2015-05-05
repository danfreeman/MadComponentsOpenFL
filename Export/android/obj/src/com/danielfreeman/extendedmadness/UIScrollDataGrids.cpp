#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
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
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UICell
#include <com/danielfreeman/extendedmadness/UICell.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIFastDataGrid
#include <com/danielfreeman/extendedmadness/UIFastDataGrid.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIScrollDataGrid
#include <com/danielfreeman/extendedmadness/UIScrollDataGrid.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIScrollDataGrids
#include <com/danielfreeman/extendedmadness/UIScrollDataGrids.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIForm
#include <com/danielfreeman/madcomponents/UIForm.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
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
namespace extendedmadness{

Void UIScrollDataGrids_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","new",0xf307a148,"com.danielfreeman.extendedmadness.UIScrollDataGrids.new","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",75,0x58e9766b)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(98)
	this->_headerLines = false;
	HX_STACK_LINE(97)
	this->_gridColumns = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(94)
	this->_statusFormat = ::com::danielfreeman::extendedmadness::UIScrollDataGrids_obj::STATUS_STYLE;
	HX_STACK_LINE(93)
	this->_alignGridWidths = false;
	HX_STACK_LINE(92)
	this->_headerTitleSlider = null();
	HX_STACK_LINE(91)
	this->_titleSlider = null();
	HX_STACK_LINE(90)
	this->_currentHeading = (int)0;
	HX_STACK_LINE(89)
	this->_fixedColumnLayers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(88)
	this->_dataGrids = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(103)
	this->_screen = screen;
	HX_STACK_LINE(105)
	bool _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(105)
	if ((xml->has->resolve(HX_CSTRING("headerLines")))){
		HX_STACK_LINE(105)
		::String _g = xml->att->resolve(HX_CSTRING("headerLines"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(105)
		_g1 = (_g == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(105)
		_g1 = false;
	}
	HX_STACK_LINE(105)
	this->_headerLines = _g1;
	HX_STACK_LINE(106)
	bool _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(106)
	if ((xml->has->resolve(HX_CSTRING("alignGridWidths")))){
		HX_STACK_LINE(106)
		::String _g2 = xml->att->resolve(HX_CSTRING("alignGridWidths"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(106)
		_g3 = (_g2 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(106)
		_g3 = false;
	}
	HX_STACK_LINE(106)
	this->_alignGridWidths = _g3;
	HX_STACK_LINE(107)
	this->initialiseLayers(xml);
	HX_STACK_LINE(108)
	if ((xml->has->resolve(HX_CSTRING("statusColour")))){
		HX_STACK_LINE(109)
		::String _g4 = xml->att->resolve(HX_CSTRING("statusColour"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(109)
		int _g5 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(109)
		::openfl::text::TextFormat _g6 = ::openfl::text::TextFormat_obj::__new(null(),null(),_g5,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(109)
		this->_statusFormat = _g6;
	}
	HX_STACK_LINE(111)
	super::__construct(screen,xml,attributes);
	HX_STACK_LINE(112)
	this->setChildIndex(this->_slider,(int)0);
	HX_STACK_LINE(114)
	::String _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(114)
	if ((xml->has->resolve(HX_CSTRING("status")))){
		HX_STACK_LINE(114)
		_g7 = xml->att->resolve(HX_CSTRING("status"));
	}
	else{
		HX_STACK_LINE(114)
		_g7 = HX_CSTRING("");
	}
	HX_STACK_LINE(114)
	::com::danielfreeman::madcomponents::UILabel _g8 = ::com::danielfreeman::madcomponents::UILabel_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)0,(int)0,_g7,this->_statusFormat);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(114)
	this->_status = _g8;
	HX_STACK_LINE(115)
	Float _g9 = this->_status->get_width();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(115)
	Float _g10 = (attributes->width - _g9);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(115)
	this->_status->set_x(_g10);
	HX_STACK_LINE(116)
	this->doLayout();
}
;
	return null();
}

//UIScrollDataGrids_obj::~UIScrollDataGrids_obj() { }

Dynamic UIScrollDataGrids_obj::__CreateEmpty() { return  new UIScrollDataGrids_obj; }
hx::ObjectPtr< UIScrollDataGrids_obj > UIScrollDataGrids_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIScrollDataGrids_obj > result = new UIScrollDataGrids_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIScrollDataGrids_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIScrollDataGrids_obj > result = new UIScrollDataGrids_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void UIScrollDataGrids_obj::gridFixedColumns( hx::Null< int >  __o_gridIndex,hx::Null< int >  __o_row){
int gridIndex = __o_gridIndex.Default(-1);
int row = __o_row.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","gridFixedColumns",0x390ba3c7,"com.danielfreeman.extendedmadness.UIScrollDataGrids.gridFixedColumns","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",121,0x58e9766b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gridIndex,"gridIndex")
	HX_STACK_ARG(row,"row")
{
		HX_STACK_LINE(121)
		if (((gridIndex < (int)0))){
			HX_STACK_LINE(122)
			this->_gridColumns = Dynamic( Array_obj<Dynamic>::__new());
		}
		else{
			HX_STACK_LINE(125)
			hx::IndexRef((this->_gridColumns).mPtr,gridIndex) = row;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIScrollDataGrids_obj,gridFixedColumns,(void))

::String UIScrollDataGrids_obj::set_status( ::String value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","set_status",0xe61e9187,"com.danielfreeman.extendedmadness.UIScrollDataGrids.set_status","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",132,0x58e9766b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(133)
	this->_status->set_xmlText(value);
	HX_STACK_LINE(134)
	Float _g = this->_status->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(134)
	Float _g1 = (this->get_attributes()->width - _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(134)
	this->_status->set_x(_g1);
	HX_STACK_LINE(135)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrids_obj,set_status,return )

Void UIScrollDataGrids_obj::reposition( ::com::danielfreeman::extendedmadness::UICell cell){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","reposition",0x91800b74,"com.danielfreeman.extendedmadness.UIScrollDataGrids.reposition","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",139,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cell,"cell")
		HX_STACK_LINE(140)
		::openfl::geom::Point _g = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		::openfl::geom::Point globalPoint = cell->localToGlobal(_g);		HX_STACK_VAR(globalPoint,"globalPoint");
		HX_STACK_LINE(141)
		::openfl::geom::Point sliderPoint = this->_slider->globalToLocal(globalPoint);		HX_STACK_VAR(sliderPoint,"sliderPoint");
		HX_STACK_LINE(142)
		cell->set_x(sliderPoint->x);
		HX_STACK_LINE(143)
		cell->set_y(sliderPoint->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrids_obj,reposition,(void))

Void UIScrollDataGrids_obj::initialiseLayers( ::MadXML xml){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","initialiseLayers",0x9c8d3631,"com.danielfreeman.extendedmadness.UIScrollDataGrids.initialiseLayers","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",149,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_LINE(150)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(150)
		this->_headerSlider = _g;
		HX_STACK_LINE(151)
		this->_headerSlider->set_name(HX_CSTRING("_headerSlider"));
		HX_STACK_LINE(152)
		if ((xml->has->resolve(HX_CSTRING("fixedColumns")))){
			HX_STACK_LINE(153)
			::String _g1 = xml->att->resolve(HX_CSTRING("fixedColumns"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(153)
			Dynamic _g2 = ::Std_obj::parseInt(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(153)
			this->_fixedColumns = _g2;
			HX_STACK_LINE(154)
			::openfl::display::Sprite _g3 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(154)
			this->_fixedColumnSlider = _g3;
			HX_STACK_LINE(155)
			this->_fixedColumnSlider->set_name(HX_CSTRING("_fixedColumnSlider"));
		}
		HX_STACK_LINE(157)
		::openfl::display::Sprite _g4 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(157)
		this->_titleSlider = _g4;
		HX_STACK_LINE(158)
		this->_titleSlider->set_name(HX_CSTRING("_titleSlider"));
		HX_STACK_LINE(159)
		::openfl::display::Sprite _g5 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(159)
		this->_headerFixedColumnSlider = _g5;
		HX_STACK_LINE(160)
		this->_headerFixedColumnSlider->set_name(HX_CSTRING("_headerFixedColumnSlider"));
		HX_STACK_LINE(161)
		::openfl::display::Sprite _g6 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(161)
		this->_headerTitleSlider = _g6;
		HX_STACK_LINE(162)
		this->_headerTitleSlider->set_name(HX_CSTRING("_headerTitleSlider"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrids_obj,initialiseLayers,(void))

Void UIScrollDataGrids_obj::addLayers( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","addLayers",0xabb8b96b,"com.danielfreeman.extendedmadness.UIScrollDataGrids.addLayers","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",166,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(167)
		this->addChild(this->_headerSlider);
		HX_STACK_LINE(168)
		if (((this->_fixedColumnSlider != null()))){
			HX_STACK_LINE(169)
			this->addChild(this->_fixedColumnSlider);
		}
		HX_STACK_LINE(171)
		this->addChild(this->_titleSlider);
		HX_STACK_LINE(172)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		this->_headerFixedColumnSlider = _g;
		HX_STACK_LINE(173)
		this->_headerFixedColumnSlider->set_name(HX_CSTRING("_headerFixedColumnSlider"));
		HX_STACK_LINE(174)
		this->addChild(this->_headerFixedColumnSlider);
		HX_STACK_LINE(175)
		this->addChild(this->_headerTitleSlider);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollDataGrids_obj,addLayers,(void))

::MadXML UIScrollDataGrids_obj::set_xml( ::MadXML value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","set_xml",0xcfa42c62,"com.danielfreeman.extendedmadness.UIScrollDataGrids.set_xml","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",179,0x58e9766b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(180)
	this->_dataGridXML = value;
	HX_STACK_LINE(181)
	this->clear();
	HX_STACK_LINE(182)
	this->createSlider(value,this->_attributes);
	HX_STACK_LINE(183)
	return value;
}


Void UIScrollDataGrids_obj::sliceTable( ::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","sliceTable",0xd6041674,"com.danielfreeman.extendedmadness.UIScrollDataGrids.sliceTable","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",187,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dataGrid,"dataGrid")
	}
return null();
}


Void UIScrollDataGrids_obj::sliceTables( ::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid,hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","sliceTables",0x6d8f8f7f,"com.danielfreeman.extendedmadness.UIScrollDataGrids.sliceTables","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",194,0x58e9766b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dataGrid,"dataGrid")
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(195)
		::openfl::display::Sprite fixedColumnLayer;		HX_STACK_VAR(fixedColumnLayer,"fixedColumnLayer");
		HX_STACK_LINE(196)
		if (((this->_fixedColumnSlider == null()))){
			HX_STACK_LINE(197)
			::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(197)
			::openfl::display::Sprite _g1 = this->_fixedColumnSlider = _g;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(197)
			this->addChild(_g1);
		}
		HX_STACK_LINE(199)
		if (((this->_fixedColumnLayers->length == index))){
			HX_STACK_LINE(200)
			::openfl::display::Sprite _g2 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(200)
			::openfl::display::Sprite _g3 = fixedColumnLayer = _g2;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(200)
			this->_fixedColumnSlider->addChild(_g3);
			HX_STACK_LINE(201)
			::openfl::geom::Point _g4 = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(201)
			::openfl::geom::Point dataGridGlobalPoint = dataGrid->localToGlobal(_g4);		HX_STACK_VAR(dataGridGlobalPoint,"dataGridGlobalPoint");
			HX_STACK_LINE(202)
			fixedColumnLayer->set_y(this->_slider->globalToLocal(dataGridGlobalPoint)->y);
			HX_STACK_LINE(203)
			this->_fixedColumnLayers->push(fixedColumnLayer);
		}
		else{
			HX_STACK_LINE(206)
			fixedColumnLayer = this->_fixedColumnLayers->__get(index).StaticCast< ::openfl::display::Sprite >();
		}
		HX_STACK_LINE(208)
		int fixedColumns;		HX_STACK_VAR(fixedColumns,"fixedColumns");
		HX_STACK_LINE(208)
		if (((this->_gridColumns->__GetItem(index) != null()))){
			HX_STACK_LINE(208)
			fixedColumns = this->_gridColumns->__GetItem(index);
		}
		else{
			HX_STACK_LINE(208)
			fixedColumns = this->_fixedColumns;
		}
		HX_STACK_LINE(209)
		if (((bool((fixedColumns > (int)0)) && bool((dataGrid->get_tableCells()->length > (int)0))))){
			HX_STACK_LINE(210)
			int rowIndex = (int)0;		HX_STACK_VAR(rowIndex,"rowIndex");
			HX_STACK_LINE(211)
			int start;		HX_STACK_VAR(start,"start");
			HX_STACK_LINE(211)
			if ((dataGrid->get_hasHeader())){
				HX_STACK_LINE(211)
				start = (int)1;
			}
			else{
				HX_STACK_LINE(211)
				start = (int)0;
			}
			HX_STACK_LINE(212)
			{
				HX_STACK_LINE(212)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(212)
				int _g = dataGrid->get_tableCells()->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(212)
				while((true)){
					HX_STACK_LINE(212)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(212)
						break;
					}
					HX_STACK_LINE(212)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(213)
					Array< ::Dynamic > _g5 = dataGrid->get_tableCells();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(213)
					Array< ::Dynamic > tableRow = _g5->__get(i).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(tableRow,"tableRow");
					HX_STACK_LINE(214)
					{
						HX_STACK_LINE(214)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(214)
						while((true)){
							HX_STACK_LINE(214)
							if ((!(((_g2 < fixedColumns))))){
								HX_STACK_LINE(214)
								break;
							}
							HX_STACK_LINE(214)
							int j = (_g2)++;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(215)
							::com::danielfreeman::extendedmadness::UICell cell = tableRow->__get(j).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(cell,"cell");
							HX_STACK_LINE(222)
							fixedColumnLayer->addChild(cell);
						}
					}
					HX_STACK_LINE(224)
					(rowIndex)++;
				}
			}
		}
		HX_STACK_LINE(227)
		this->colourFixedColumns(dataGrid,null());
		HX_STACK_LINE(228)
		::com::danielfreeman::extendedmadness::UICell _g6 = dataGrid->get_titleCell();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(228)
		if (((_g6 != null()))){
			HX_STACK_LINE(229)
			::com::danielfreeman::extendedmadness::UICell _g7 = dataGrid->get_titleCell();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(229)
			this->_titleSlider->addChild(_g7);
			HX_STACK_LINE(230)
			Float _g8 = fixedColumnLayer->get_y();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(230)
			dataGrid->get_titleCell()->set_y(_g8);
		}
		HX_STACK_LINE(232)
		if ((::Std_obj::is(dataGrid,hx::ClassOf< ::com::danielfreeman::extendedmadness::UISpecialDataGrid >()))){
			HX_STACK_LINE(233)
			(hx::TCast< com::danielfreeman::extendedmadness::UISpecialDataGrid >::cast(dataGrid))->copyColumns(fixedColumnLayer,fixedColumns);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIScrollDataGrids_obj,sliceTables,(void))

Void UIScrollDataGrids_obj::sliceAllTables( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","sliceAllTables",0x8b475a0c,"com.danielfreeman.extendedmadness.UIScrollDataGrids.sliceAllTables","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",240,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(241)
			int _g = this->_slider->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(241)
			while((true)){
				HX_STACK_LINE(241)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(241)
					break;
				}
				HX_STACK_LINE(241)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(242)
				::openfl::display::DisplayObject child = this->_slider->getChildAt(i);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(243)
				if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >()))){
					HX_STACK_LINE(244)
					if (((i < this->_fixedColumnLayers->length))){
						HX_STACK_LINE(245)
						bool _g2 = (hx::TCast< com::danielfreeman::extendedmadness::UISimpleDataGrid >::cast(child))->get_includeInLayout();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(245)
						this->_fixedColumnLayers->__get(i).StaticCast< ::openfl::display::Sprite >()->set_visible(_g2);
					}
					HX_STACK_LINE(247)
					::com::danielfreeman::extendedmadness::UICell _g11 = (hx::TCast< com::danielfreeman::extendedmadness::UISimpleDataGrid >::cast(child))->get_titleCell();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(247)
					if (((_g11 != null()))){
						HX_STACK_LINE(248)
						bool _g2 = (hx::TCast< com::danielfreeman::extendedmadness::UISimpleDataGrid >::cast(child))->get_includeInLayout();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(248)
						(hx::TCast< com::danielfreeman::extendedmadness::UISimpleDataGrid >::cast(child))->get_titleCell()->set_visible(_g2);
					}
					HX_STACK_LINE(250)
					if (((hx::TCast< com::danielfreeman::extendedmadness::UISimpleDataGrid >::cast(child))->get_includeInLayout())){
						HX_STACK_LINE(251)
						::com::danielfreeman::extendedmadness::UISimpleDataGrid _g3;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(251)
						_g3 = hx::TCast< com::danielfreeman::extendedmadness::UISimpleDataGrid >::cast(child);
						HX_STACK_LINE(251)
						this->sliceTables(_g3,i);
					}
				}
			}
		}
		HX_STACK_LINE(255)
		this->_slider->set_cacheAsBitmap(true);
		HX_STACK_LINE(256)
		if (((this->_fixedColumnSlider != null()))){
			HX_STACK_LINE(257)
			this->_fixedColumnSlider->set_cacheAsBitmap(true);
		}
		HX_STACK_LINE(259)
		if (((this->_headerSlider != null()))){
			HX_STACK_LINE(260)
			this->_headerSlider->set_cacheAsBitmap(true);
		}
		HX_STACK_LINE(262)
		this->_headerFixedColumnSlider->set_cacheAsBitmap(true);
		HX_STACK_LINE(263)
		this->_titleSlider->set_cacheAsBitmap(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollDataGrids_obj,sliceAllTables,(void))

::com::danielfreeman::extendedmadness::UICell UIScrollDataGrids_obj::copyText( ::openfl::display::Sprite parent,::com::danielfreeman::extendedmadness::UICell source,hx::Null< Float >  __o_yPosition,hx::Null< int >  __o_colour){
Float yPosition = __o_yPosition.Default(0);
int colour = __o_colour.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","copyText",0x33de191a,"com.danielfreeman.extendedmadness.UIScrollDataGrids.copyText","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",267,0x58e9766b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(parent,"parent")
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(yPosition,"yPosition")
	HX_STACK_ARG(colour,"colour")
{
		HX_STACK_LINE(268)
		Float _g = source->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(268)
		int _g1 = ::Math_obj::round(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(268)
		int _g2 = ::Math_obj::round(yPosition);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(268)
		::String _g3 = source->get_text();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(268)
		Float _g4 = source->get_width();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(268)
		::openfl::text::TextFormat _g5 = source->getTextFormat(null(),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(268)
		bool _g6 = source->get_multiline();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(268)
		bool _g7 = source->get_wordWrap();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(268)
		int _g8 = source->get_borderColor();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(268)
		::com::danielfreeman::extendedmadness::UICell copyText = ::com::danielfreeman::extendedmadness::UICell_obj::__new(parent,_g1,_g2,_g3,_g4,_g5,_g6,_g7,_g8,null());		HX_STACK_VAR(copyText,"copyText");
		HX_STACK_LINE(269)
		Float _g9 = source->get_height();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(269)
		copyText->set_height(_g9);
		HX_STACK_LINE(270)
		int _g10;		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(270)
		if (((colour < (int)0))){
			HX_STACK_LINE(270)
			_g10 = source->get_backgroundColor();
		}
		else{
			HX_STACK_LINE(270)
			_g10 = colour;
		}
		HX_STACK_LINE(270)
		copyText->set_backgroundColor(_g10);
		HX_STACK_LINE(271)
		bool _g11;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(271)
		if (((colour < (int)0))){
			HX_STACK_LINE(271)
			_g11 = source->get_background();
		}
		else{
			HX_STACK_LINE(271)
			_g11 = true;
		}
		HX_STACK_LINE(271)
		copyText->set_background(_g11);
		HX_STACK_LINE(272)
		copyText->set_y(yPosition);
		HX_STACK_LINE(273)
		int _g12 = source->get_borderColor();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(273)
		copyText->set_borderColor(_g12);
		HX_STACK_LINE(274)
		bool _g13 = source->get_border();		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(274)
		copyText->set_border(_g13);
		HX_STACK_LINE(275)
		return copyText;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(UIScrollDataGrids_obj,copyText,return )

Void UIScrollDataGrids_obj::copyRow( ::openfl::display::Sprite parent,Array< ::Dynamic > row,int start,int end,Float yPosition,int colour){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","copyRow",0xf956c24d,"com.danielfreeman.extendedmadness.UIScrollDataGrids.copyRow","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",280,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(parent,"parent")
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(end,"end")
		HX_STACK_ARG(yPosition,"yPosition")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(280)
		int _g = start;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(280)
		while((true)){
			HX_STACK_LINE(280)
			if ((!(((_g < end))))){
				HX_STACK_LINE(280)
				break;
			}
			HX_STACK_LINE(280)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(281)
			this->copyText(parent,row->__get(i).StaticCast< ::com::danielfreeman::extendedmadness::UICell >(),yPosition,colour);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(UIScrollDataGrids_obj,copyRow,(void))

Void UIScrollDataGrids_obj::preExtractHeadersCells( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","preExtractHeadersCells",0x3cd9c501,"com.danielfreeman.extendedmadness.UIScrollDataGrids.preExtractHeadersCells","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",289,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(290)
		this->_headerTitleSlider->removeChildren(null(),null());
		HX_STACK_LINE(291)
		this->_headerFixedColumnSlider->removeChildren(null(),null());
		HX_STACK_LINE(292)
		this->_headerSlider->removeChildren(null(),null());
		HX_STACK_LINE(293)
		this->_headerTitleSlider->set_name(HX_CSTRING("#header"));
		HX_STACK_LINE(294)
		this->_headerFixedColumnSlider->set_name(HX_CSTRING("#header"));
		HX_STACK_LINE(295)
		this->_headerSlider->set_name(HX_CSTRING("#header"));
		HX_STACK_LINE(296)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(297)
		{
			HX_STACK_LINE(297)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(297)
			Array< ::Dynamic > _g1 = this->_dataGrids;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(297)
			while((true)){
				HX_STACK_LINE(297)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(297)
					break;
				}
				HX_STACK_LINE(297)
				::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid = _g1->__get(_g).StaticCast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >();		HX_STACK_VAR(dataGrid,"dataGrid");
				HX_STACK_LINE(297)
				++(_g);
				HX_STACK_LINE(298)
				::com::danielfreeman::extendedmadness::UICell cellTitle = null();		HX_STACK_VAR(cellTitle,"cellTitle");
				HX_STACK_LINE(299)
				::com::danielfreeman::extendedmadness::UICell _g2 = dataGrid->get_titleCell();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(299)
				if (((  (((_g2 != null()))) ? bool(dataGrid->get_includeInLayout()) : bool(false) ))){
					HX_STACK_LINE(300)
					::com::danielfreeman::extendedmadness::UICell _g11 = dataGrid->get_titleCell();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(300)
					::com::danielfreeman::extendedmadness::UICell _g21 = this->copyText(this->_headerTitleSlider,_g11,null(),null());		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(300)
					cellTitle = _g21;
					HX_STACK_LINE(301)
					cellTitle->set_visible((i == (int)0));
				}
				HX_STACK_LINE(303)
				if (((  ((dataGrid->get_hasHeader())) ? bool((dataGrid->get_tableCells()->length > (int)0)) : bool(false) ))){
					HX_STACK_LINE(304)
					Array< ::Dynamic > _g3 = dataGrid->get_tableCells();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(304)
					Array< ::Dynamic > row = _g3->__get((int)0).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(305)
					int fixedColumns;		HX_STACK_VAR(fixedColumns,"fixedColumns");
					HX_STACK_LINE(305)
					if (((this->_gridColumns->__GetItem(i) != null()))){
						HX_STACK_LINE(305)
						fixedColumns = this->_gridColumns->__GetItem(i);
					}
					else{
						HX_STACK_LINE(305)
						fixedColumns = this->_fixedColumns;
					}
					HX_STACK_LINE(306)
					if (((bool((fixedColumns > (int)0)) && bool((this->_headerFixedColumnSlider != null()))))){
						HX_STACK_LINE(307)
						::openfl::display::Sprite spriteFixedHeader = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(spriteFixedHeader,"spriteFixedHeader");
						HX_STACK_LINE(308)
						Float _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(308)
						if (((cellTitle != null()))){
							HX_STACK_LINE(308)
							_g4 = cellTitle->get_height();
						}
						else{
							HX_STACK_LINE(308)
							_g4 = (int)0;
						}
						HX_STACK_LINE(308)
						int _g5 = dataGrid->get_headerColour();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(308)
						this->copyRow(spriteFixedHeader,row,(int)0,fixedColumns,_g4,_g5);
						HX_STACK_LINE(309)
						this->_headerFixedColumnSlider->addChild(spriteFixedHeader);
						HX_STACK_LINE(310)
						spriteFixedHeader->set_visible((i == (int)0));
					}
					HX_STACK_LINE(312)
					::openfl::display::Sprite spriteHeader = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(spriteHeader,"spriteHeader");
					HX_STACK_LINE(313)
					Float _g6;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(313)
					if (((cellTitle != null()))){
						HX_STACK_LINE(313)
						_g6 = cellTitle->get_height();
					}
					else{
						HX_STACK_LINE(313)
						_g6 = (int)0;
					}
					HX_STACK_LINE(313)
					int _g7 = dataGrid->get_headerColour();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(313)
					this->copyRow(spriteHeader,row,fixedColumns,row->length,_g6,_g7);
					HX_STACK_LINE(314)
					this->_headerSlider->addChild(spriteHeader);
					HX_STACK_LINE(315)
					spriteHeader->set_visible((i == (int)0));
				}
				HX_STACK_LINE(317)
				(i)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollDataGrids_obj,preExtractHeadersCells,(void))

Void UIScrollDataGrids_obj::swapCellHeaders( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","swapCellHeaders",0xd3f8ddd9,"com.danielfreeman.extendedmadness.UIScrollDataGrids.swapCellHeaders","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",324,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(325)
		int index = (int)-1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(326)
		Float _g = this->_slider->get_y();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(326)
		if (((  (((_g < (int)0))) ? bool((this->_dataGrids->length > (int)0)) : bool(false) ))){
			HX_STACK_LINE(327)
			while((true)){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollDataGrids_obj > __this,int &index){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",327,0x58e9766b)
						{
							HX_STACK_LINE(327)
							Float _g1 = -(__this->_slider->get_y());		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(327)
							Float _g3;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(327)
							if (((__this->_currentHeading >= (int)0))){
								HX_STACK_LINE(327)
								Float _g2 = __this->_headerSlider->getBounds(__this)->get_bottom();		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(327)
								_g3 = (Float(_g2) / Float((int)2));
							}
							else{
								HX_STACK_LINE(327)
								_g3 = (int)0;
							}
							HX_STACK_LINE(327)
							Float _g4 = (_g1 + _g3);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(327)
							Float _g5 = __this->_fixedColumnLayers->__get((index + (int)1)).StaticCast< ::openfl::display::Sprite >()->get_y();		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(327)
							return (_g4 > _g5);
						}
						return null();
					}
				};
				HX_STACK_LINE(327)
				if ((!(((  (((  (((bool(((index + (int)1) < this->_fixedColumnLayers->length)) && bool(((index + (int)1) < this->_dataGrids->length))))) ? bool(this->_dataGrids->__get((index + (int)1)).StaticCast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >()->get_includeInLayout()) : bool(false) ))) ? bool(_Function_3_1::Block(this,index)) : bool(false) ))))){
					HX_STACK_LINE(327)
					break;
				}
				HX_STACK_LINE(328)
				(index)++;
			}
		}
		HX_STACK_LINE(331)
		int fixedColumns;		HX_STACK_VAR(fixedColumns,"fixedColumns");
		HX_STACK_LINE(331)
		if (((this->_gridColumns->__GetItem(index) != null()))){
			HX_STACK_LINE(331)
			fixedColumns = this->_gridColumns->__GetItem(index);
		}
		else{
			HX_STACK_LINE(331)
			fixedColumns = this->_fixedColumns;
		}
		HX_STACK_LINE(332)
		if (((bool((index >= (int)0)) && bool((index != this->_currentHeading))))){
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollDataGrids_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",333,0x58e9766b)
					{
						HX_STACK_LINE(333)
						int _g6 = __this->_headerSlider->get_numChildren();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(333)
						return (__this->_currentHeading < _g6);
					}
					return null();
				}
			};
			HX_STACK_LINE(333)
			if (((  (((this->_currentHeading >= (int)0))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(334)
				int _g7 = this->_headerTitleSlider->get_numChildren();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(334)
				if (((this->_currentHeading < _g7))){
					HX_STACK_LINE(335)
					(hx::TCast< com::danielfreeman::extendedmadness::UICell >::cast(this->_headerTitleSlider->getChildAt(this->_currentHeading)))->set_visible(false);
				}
				HX_STACK_LINE(337)
				(hx::TCast< openfl::display::Sprite >::cast(this->_headerSlider->getChildAt(this->_currentHeading)))->set_visible(false);
				HX_STACK_LINE(338)
				if (((fixedColumns > (int)0))){
					HX_STACK_LINE(339)
					(hx::TCast< openfl::display::Sprite >::cast(this->_headerFixedColumnSlider->getChildAt(this->_currentHeading)))->set_visible(false);
				}
			}
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollDataGrids_obj > __this,int &index){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",342,0x58e9766b)
					{
						HX_STACK_LINE(342)
						int _g8 = __this->_headerSlider->get_numChildren();		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(342)
						return (index < _g8);
					}
					return null();
				}
			};
			HX_STACK_LINE(342)
			if (((  (((index >= (int)0))) ? bool(_Function_2_2::Block(this,index)) : bool(false) ))){
				HX_STACK_LINE(343)
				int _g9 = this->_headerTitleSlider->get_numChildren();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(343)
				if (((index < _g9))){
					HX_STACK_LINE(344)
					(hx::TCast< com::danielfreeman::extendedmadness::UICell >::cast(this->_headerTitleSlider->getChildAt(index)))->set_visible(true);
				}
				HX_STACK_LINE(346)
				(hx::TCast< openfl::display::Sprite >::cast(this->_headerSlider->getChildAt(index)))->set_visible(true);
				HX_STACK_LINE(347)
				if (((fixedColumns > (int)0))){
					HX_STACK_LINE(348)
					(hx::TCast< openfl::display::Sprite >::cast(this->_headerFixedColumnSlider->getChildAt(index)))->set_visible(true);
				}
				HX_STACK_LINE(350)
				this->headerFixedColumnLine(index);
			}
			HX_STACK_LINE(352)
			this->_currentHeading = index;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollDataGrids_obj,swapCellHeaders,(void))

Float UIScrollDataGrids_obj::set_sliderX( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","set_sliderX",0xd25af722,"com.danielfreeman.extendedmadness.UIScrollDataGrids.set_sliderX","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",357,0x58e9766b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(358)
	this->super::set_sliderX(value);
	HX_STACK_LINE(359)
	this->_titleSlider->set_x((  (((value > (int)0))) ? Float(value) : Float((int)0) ));
	HX_STACK_LINE(360)
	this->_headerTitleSlider->set_x((  (((value > (int)0))) ? Float(value) : Float((int)0) ));
	HX_STACK_LINE(361)
	return value;
}


Float UIScrollDataGrids_obj::set_sliderY( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","set_sliderY",0xd25af723,"com.danielfreeman.extendedmadness.UIScrollDataGrids.set_sliderY","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",365,0x58e9766b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(366)
	value = this->toPixelBoundaryDouble(hx::ObjectPtr<OBJ_>(this),(int)0,value)->y;
	HX_STACK_LINE(367)
	this->super::set_sliderY(value);
	HX_STACK_LINE(368)
	this->_titleSlider->set_y(value);
	HX_STACK_LINE(369)
	this->_headerTitleSlider->set_y((  (((value > (int)0))) ? Float(value) : Float((int)0) ));
	HX_STACK_LINE(370)
	if (((this->_status != null()))){
		HX_STACK_LINE(371)
		Float _g = this->_headerTitleSlider->get_y();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(371)
		this->_status->set_y(_g);
	}
	HX_STACK_LINE(373)
	this->swapCellHeaders();
	HX_STACK_LINE(374)
	return value;
}


Void UIScrollDataGrids_obj::createSlider( ::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","createSlider",0xf628d855,"com.danielfreeman.extendedmadness.UIScrollDataGrids.createSlider","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",380,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(381)
		this->addLayers();
		HX_STACK_LINE(382)
		::com::danielfreeman::madcomponents::Attributes _g = this->sliderAttributes(attributes);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(382)
		::com::danielfreeman::madcomponents::UIForm _g1 = ::com::danielfreeman::madcomponents::UIForm_obj::__new(hx::ObjectPtr<OBJ_>(this),this->_dataGridXML,_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(382)
		this->_slider = _g1;
		HX_STACK_LINE(383)
		this->_slider->set_name(HX_CSTRING("-"));
		HX_STACK_LINE(384)
		this->adjustMaximumSlide();
		HX_STACK_LINE(385)
		this->_dataGrids = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(386)
		{
			HX_STACK_LINE(386)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(386)
			int _g2 = this->_slider->get_numChildren();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(386)
			while((true)){
				HX_STACK_LINE(386)
				if ((!(((_g11 < _g2))))){
					HX_STACK_LINE(386)
					break;
				}
				HX_STACK_LINE(386)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(387)
				::openfl::display::DisplayObject child = this->_slider->getChildAt(i);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(388)
				if (((  ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >()))) ? bool((hx::TCast< com::danielfreeman::extendedmadness::UISimpleDataGrid >::cast(child))->get_includeInLayout()) : bool(false) ))){
					HX_STACK_LINE(389)
					::com::danielfreeman::extendedmadness::UISimpleDataGrid _g21;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(389)
					_g21 = hx::TCast< com::danielfreeman::extendedmadness::UISimpleDataGrid >::cast(child);
					HX_STACK_LINE(389)
					this->_dataGrids->push(_g21);
				}
			}
		}
		HX_STACK_LINE(392)
		this->sliceAllTables();
	}
return null();
}


Void UIScrollDataGrids_obj::headerFixedColumnLine( int index){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","headerFixedColumnLine",0x738a7c59,"com.danielfreeman.extendedmadness.UIScrollDataGrids.headerFixedColumnLine","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",397,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(397)
		if (((bool((this->_dataGrids->length > index)) && bool((this->_currentHeading >= (int)0))))){
			HX_STACK_LINE(398)
			::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid = this->_dataGrids->__get(index).StaticCast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >();		HX_STACK_VAR(dataGrid,"dataGrid");
			HX_STACK_LINE(399)
			int fixedColumns;		HX_STACK_VAR(fixedColumns,"fixedColumns");
			HX_STACK_LINE(399)
			if (((this->_gridColumns->__GetItem(index) != null()))){
				HX_STACK_LINE(399)
				fixedColumns = this->_gridColumns->__GetItem(index);
			}
			else{
				HX_STACK_LINE(399)
				fixedColumns = this->_fixedColumns;
			}
			HX_STACK_LINE(400)
			this->_headerFixedColumnSlider->get_graphics()->clear();
			HX_STACK_LINE(401)
			if (((  (((  (((  (((fixedColumns > (int)0))) ? bool(dataGrid->get_includeInLayout()) : bool(false) ))) ? bool((dataGrid->get_tableCells()->length > (int)0)) : bool(false) ))) ? bool((dataGrid->get_tableCells()->__get((int)0).StaticCast< Array< ::Dynamic > >()->length > fixedColumns)) : bool(false) ))){
				HX_STACK_LINE(402)
				int _g = dataGrid->get_attributes()->get_colour();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(402)
				this->_headerFixedColumnSlider->get_graphics()->beginFill(_g,null());
				HX_STACK_LINE(403)
				Array< ::Dynamic > _g1 = dataGrid->get_tableCells();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(403)
				Array< ::Dynamic > _g2 = _g1->__get((int)0).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(403)
				Float _g3 = _g2->__get(fixedColumns).StaticCast< ::com::danielfreeman::extendedmadness::UICell >()->get_x();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(403)
				Float _g4 = this->_headerFixedColumnSlider->getBounds(hx::ObjectPtr<OBJ_>(this))->get_top();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(403)
				Float _g5 = this->_headerFixedColumnSlider->get_height();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(403)
				this->_headerFixedColumnSlider->get_graphics()->drawRect(_g3,_g4,2.0,_g5);
				HX_STACK_LINE(404)
				this->_headerFixedColumnSlider->get_graphics()->endFill();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrids_obj,headerFixedColumnLine,(void))

int UIScrollDataGrids_obj::set_selectDataGrid( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","set_selectDataGrid",0x09167081,"com.danielfreeman.extendedmadness.UIScrollDataGrids.set_selectDataGrid","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",410,0x58e9766b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(411)
	this->_dataGrid = this->_dataGrids->__get(value).StaticCast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >();
	HX_STACK_LINE(412)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrids_obj,set_selectDataGrid,return )

Array< ::Dynamic > UIScrollDataGrids_obj::get_dataGrids( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","get_dataGrids",0x926c6f22,"com.danielfreeman.extendedmadness.UIScrollDataGrids.get_dataGrids","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",417,0x58e9766b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(417)
	return this->_dataGrids;
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollDataGrids_obj,get_dataGrids,return )

Void UIScrollDataGrids_obj::doAlignGridWidths( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","doAlignGridWidths",0xfe4211d5,"com.danielfreeman.extendedmadness.UIScrollDataGrids.doAlignGridWidths","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",421,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(422)
		Float newWidth = (int)0;		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(423)
		int numberOfGrids = (int)0;		HX_STACK_VAR(numberOfGrids,"numberOfGrids");
		HX_STACK_LINE(424)
		{
			HX_STACK_LINE(424)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(424)
			Array< ::Dynamic > _g1 = this->_dataGrids;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(424)
			while((true)){
				HX_STACK_LINE(424)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(424)
					break;
				}
				HX_STACK_LINE(424)
				::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid0 = _g1->__get(_g).StaticCast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >();		HX_STACK_VAR(dataGrid0,"dataGrid0");
				HX_STACK_LINE(424)
				++(_g);
				HX_STACK_LINE(425)
				if ((dataGrid0->get_includeInLayout())){
					HX_STACK_LINE(426)
					(numberOfGrids)++;
					HX_STACK_LINE(427)
					dataGrid0->get_graphics()->clear();
					HX_STACK_LINE(428)
					Float _g2 = dataGrid0->getBounds(dataGrid0)->get_right();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(428)
					if (((_g2 > newWidth))){
						HX_STACK_LINE(429)
						Float _g11 = dataGrid0->getBounds(dataGrid0)->get_right();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(429)
						newWidth = _g11;
					}
				}
			}
		}
		HX_STACK_LINE(433)
		hx::AddEq(newWidth,32.0);
		HX_STACK_LINE(434)
		{
			HX_STACK_LINE(434)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(434)
			Array< ::Dynamic > _g1 = this->_dataGrids;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(434)
			while((true)){
				HX_STACK_LINE(434)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(434)
					break;
				}
				HX_STACK_LINE(434)
				::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid = _g1->__get(_g).StaticCast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >();		HX_STACK_VAR(dataGrid,"dataGrid");
				HX_STACK_LINE(434)
				++(_g);
				HX_STACK_LINE(435)
				if ((dataGrid->get_includeInLayout())){
					HX_STACK_LINE(436)
					if (((bool((numberOfGrids > (int)1)) && bool((dataGrid->get_tableCells()->length > (int)0))))){
						HX_STACK_LINE(438)
						dataGrid->set_fixwidth(newWidth);
					}
					HX_STACK_LINE(440)
					dataGrid->drawBackground();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollDataGrids_obj,doAlignGridWidths,(void))

Void UIScrollDataGrids_obj::drawRowColours( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","drawRowColours",0x60c5fce9,"com.danielfreeman.extendedmadness.UIScrollDataGrids.drawRowColours","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",446,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(447)
		int gridIndex = (int)0;		HX_STACK_VAR(gridIndex,"gridIndex");
		HX_STACK_LINE(448)
		{
			HX_STACK_LINE(448)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(448)
			Array< ::Dynamic > _g1 = this->_fixedColumnLayers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(448)
			while((true)){
				HX_STACK_LINE(448)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(448)
					break;
				}
				HX_STACK_LINE(448)
				::openfl::display::Sprite fixedColumnLayer = _g1->__get(_g).StaticCast< ::openfl::display::Sprite >();		HX_STACK_VAR(fixedColumnLayer,"fixedColumnLayer");
				HX_STACK_LINE(448)
				++(_g);
				HX_STACK_LINE(449)
				int fixedColumns;		HX_STACK_VAR(fixedColumns,"fixedColumns");
				HX_STACK_LINE(449)
				if (((this->_gridColumns->__GetItem(gridIndex) != null()))){
					HX_STACK_LINE(449)
					fixedColumns = this->_gridColumns->__GetItem(gridIndex);
				}
				else{
					HX_STACK_LINE(449)
					fixedColumns = this->_fixedColumns;
				}
				HX_STACK_LINE(450)
				int _g2 = (gridIndex)++;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(450)
				::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid = this->_dataGrids->__get(_g2).StaticCast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >();		HX_STACK_VAR(dataGrid,"dataGrid");
				HX_STACK_LINE(451)
				int colour;		HX_STACK_VAR(colour,"colour");
				HX_STACK_LINE(451)
				if ((dataGrid->get_hasHeader())){
					HX_STACK_LINE(451)
					colour = dataGrid->get_headerColour();
				}
				else{
					HX_STACK_LINE(451)
					Array< int > _g11 = dataGrid->get_colours();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(451)
					int _g21 = _g11->__get((int)0);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(451)
					colour = ::com::danielfreeman::madcomponents::Colour_obj::darken(_g21,::com::danielfreeman::extendedmadness::UIScrollDataGrid_obj::DARKEN);
				}
				HX_STACK_LINE(452)
				int index;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(452)
				if ((dataGrid->get_hasHeader())){
					HX_STACK_LINE(452)
					index = (int)0;
				}
				else{
					HX_STACK_LINE(452)
					index = (int)1;
				}
				HX_STACK_LINE(453)
				fixedColumnLayer->get_graphics()->clear();
				HX_STACK_LINE(454)
				{
					HX_STACK_LINE(454)
					int _g21 = (int)0;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(454)
					Array< ::Dynamic > _g3 = dataGrid->get_tableCells();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(454)
					while((true)){
						HX_STACK_LINE(454)
						if ((!(((_g21 < _g3->length))))){
							HX_STACK_LINE(454)
							break;
						}
						HX_STACK_LINE(454)
						Array< ::Dynamic > row = _g3->__get(_g21).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row,"row");
						HX_STACK_LINE(454)
						++(_g21);
						HX_STACK_LINE(455)
						if (((row->length > (int)0))){
							HX_STACK_LINE(456)
							fixedColumnLayer->get_graphics()->beginFill(colour,null());
							HX_STACK_LINE(457)
							Float _g31 = row->__get((int)0).StaticCast< ::com::danielfreeman::extendedmadness::UICell >()->get_y();		HX_STACK_VAR(_g31,"_g31");
							HX_STACK_LINE(457)
							Float _g4 = fixedColumnLayer->get_width();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(457)
							Float _g5 = row->__get((int)0).StaticCast< ::com::danielfreeman::extendedmadness::UICell >()->get_height();		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(457)
							fixedColumnLayer->get_graphics()->drawRect((int)0,_g31,_g4,_g5);
							HX_STACK_LINE(458)
							fixedColumnLayer->get_graphics()->endFill();
							HX_STACK_LINE(459)
							Array< int > _g6 = dataGrid->get_colours();		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(459)
							int _g7 = (index)++;		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(459)
							int _g8 = hx::Mod(_g7,dataGrid->get_colours()->length);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(459)
							int _g9 = _g6->__get(_g8);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(459)
							int _g10 = ::com::danielfreeman::madcomponents::Colour_obj::darken(_g9,::com::danielfreeman::extendedmadness::UIScrollDataGrid_obj::DARKEN);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(459)
							colour = _g10;
						}
					}
				}
				HX_STACK_LINE(462)
				if (((fixedColumns > (int)0))){
					HX_STACK_LINE(463)
					int _g11 = dataGrid->get_attributes()->get_colour();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(463)
					fixedColumnLayer->get_graphics()->beginFill(_g11,null());
					HX_STACK_LINE(464)
					Float _g12 = fixedColumnLayer->get_width();		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(464)
					Float _g13 = fixedColumnLayer->getBounds(fixedColumnLayer)->get_top();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(464)
					Float _g14 = fixedColumnLayer->get_height();		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(464)
					fixedColumnLayer->get_graphics()->drawRect(_g12,_g13,2.0,_g14);
					HX_STACK_LINE(465)
					fixedColumnLayer->get_graphics()->endFill();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollDataGrids_obj,drawRowColours,(void))

Void UIScrollDataGrids_obj::relayout( hx::Null< bool >  __o_adjust){
bool adjust = __o_adjust.Default(false);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","relayout",0x9b6d40b5,"com.danielfreeman.extendedmadness.UIScrollDataGrids.relayout","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",471,0x58e9766b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(adjust,"adjust")
{
		HX_STACK_LINE(472)
		this->drawRowColours();
		HX_STACK_LINE(473)
		if ((this->_alignGridWidths)){
			HX_STACK_LINE(474)
			this->doAlignGridWidths();
		}
		HX_STACK_LINE(476)
		this->headerFixedColumnLine(this->_currentHeading);
		HX_STACK_LINE(477)
		this->drawComponent();
		HX_STACK_LINE(478)
		if ((adjust)){
			HX_STACK_LINE(479)
			this->adjustMaximumSlide();
		}
		HX_STACK_LINE(481)
		this->refreshMasking(null());
		HX_STACK_LINE(482)
		this->preExtractHeadersCells();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrids_obj,relayout,(void))

Void UIScrollDataGrids_obj::autoScrollEnabled( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","autoScrollEnabled",0x66c1eded,"com.danielfreeman.extendedmadness.UIScrollDataGrids.autoScrollEnabled","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",487,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(487)
		if ((this->_autoScrollEnabledX)){
			HX_STACK_LINE(488)
			this->_scrollEnabledX = false;
			HX_STACK_LINE(489)
			{
				HX_STACK_LINE(489)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(489)
				Array< ::Dynamic > _g1 = this->_dataGrids;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(489)
				while((true)){
					HX_STACK_LINE(489)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(489)
						break;
					}
					HX_STACK_LINE(489)
					::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid = _g1->__get(_g).StaticCast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >();		HX_STACK_VAR(dataGrid,"dataGrid");
					HX_STACK_LINE(489)
					++(_g);
					HX_STACK_LINE(490)
					bool _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(490)
					if ((!(this->_scrollEnabledX))){
						HX_STACK_LINE(490)
						if ((!(dataGrid->get_fits()))){
							HX_STACK_LINE(490)
							_g2 = dataGrid->get_visible();
						}
						else{
							HX_STACK_LINE(490)
							_g2 = false;
						}
					}
					else{
						HX_STACK_LINE(490)
						_g2 = true;
					}
					HX_STACK_LINE(490)
					this->_scrollEnabledX = _g2;
				}
			}
		}
	}
return null();
}


Void UIScrollDataGrids_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","layout",0xeda05ec2,"com.danielfreeman.extendedmadness.UIScrollDataGrids.layout","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",498,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(499)
		this->_attributes = attributes;
		HX_STACK_LINE(500)
		if ((!(this->_fastLayout))){
			HX_STACK_LINE(501)
			::com::danielfreeman::madcomponents::Attributes _g = this->sliderAttributes(attributes);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(501)
			(hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(this->_slider))->__Field(HX_CSTRING("layout"),true)(_g);
			HX_STACK_LINE(502)
			this->relayout(true);
		}
		HX_STACK_LINE(504)
		Float _g1 = this->_status->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(504)
		Float _g2 = (attributes->width - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(504)
		this->_status->set_x(_g2);
		HX_STACK_LINE(505)
		this->autoScrollEnabled();
	}
return null();
}


Float UIScrollDataGrids_obj::set_fixheight( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","set_fixheight",0xf9cf1047,"com.danielfreeman.extendedmadness.UIScrollDataGrids.set_fixheight","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",509,0x58e9766b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(510)
	this->_attributes->height = value;
	HX_STACK_LINE(511)
	this->super::adjustMaximumSlide();
	HX_STACK_LINE(512)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrids_obj,set_fixheight,return )

bool UIScrollDataGrids_obj::set_alignGridWidths( bool value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","set_alignGridWidths",0xd4bf7943,"com.danielfreeman.extendedmadness.UIScrollDataGrids.set_alignGridWidths","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",516,0x58e9766b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(517)
	this->_alignGridWidths = value;
	HX_STACK_LINE(518)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIScrollDataGrids_obj,set_alignGridWidths,return )

Void UIScrollDataGrids_obj::realignColumnLayers( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","realignColumnLayers",0x83283732,"com.danielfreeman.extendedmadness.UIScrollDataGrids.realignColumnLayers","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",522,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(523)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(524)
		{
			HX_STACK_LINE(524)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(524)
			Array< ::Dynamic > _g1 = this->_dataGrids;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(524)
			while((true)){
				HX_STACK_LINE(524)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(524)
					break;
				}
				HX_STACK_LINE(524)
				::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid = _g1->__get(_g).StaticCast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >();		HX_STACK_VAR(dataGrid,"dataGrid");
				HX_STACK_LINE(524)
				++(_g);
				HX_STACK_LINE(525)
				if ((dataGrid->get_includeInLayout())){
					HX_STACK_LINE(526)
					::openfl::geom::Point _g2 = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(526)
					::openfl::geom::Point dataGridGlobalPoint = dataGrid->localToGlobal(_g2);		HX_STACK_VAR(dataGridGlobalPoint,"dataGridGlobalPoint");
					HX_STACK_LINE(527)
					::com::danielfreeman::extendedmadness::UICell _g11 = dataGrid->get_titleCell();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(527)
					if (((_g11 != null()))){
						HX_STACK_LINE(528)
						::com::danielfreeman::extendedmadness::UICell _g21 = dataGrid->get_titleCell();		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(528)
						this->_titleSlider->addChild(_g21);
						HX_STACK_LINE(529)
						dataGrid->get_titleCell()->set_y(this->_slider->globalToLocal(dataGridGlobalPoint)->y);
					}
					HX_STACK_LINE(531)
					if (((index < this->_fixedColumnLayers->length))){
						HX_STACK_LINE(532)
						int _g3 = (index)++;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(532)
						this->_fixedColumnLayers->__get(_g3).StaticCast< ::openfl::display::Sprite >()->set_y(this->_slider->globalToLocal(dataGridGlobalPoint)->y);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIScrollDataGrids_obj,realignColumnLayers,(void))

Void UIScrollDataGrids_obj::adjustVerticalSlide( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","adjustVerticalSlide",0x987543b4,"com.danielfreeman.extendedmadness.UIScrollDataGrids.adjustVerticalSlide","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",539,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(540)
		Float sliderHeight = (int)0;		HX_STACK_VAR(sliderHeight,"sliderHeight");
		HX_STACK_LINE(542)
		if (((this->_scrollerHeight > (int)0))){
			HX_STACK_LINE(543)
			sliderHeight = (this->_scrollerHeight * this->_scale);
		}
		else{
			HX_STACK_LINE(546)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(546)
			Array< ::Dynamic > _g1 = this->_dataGrids;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(546)
			while((true)){
				HX_STACK_LINE(546)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(546)
					break;
				}
				HX_STACK_LINE(546)
				::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid = _g1->__get(_g).StaticCast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >();		HX_STACK_VAR(dataGrid,"dataGrid");
				HX_STACK_LINE(546)
				++(_g);
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIScrollDataGrids_obj > __this,::com::danielfreeman::extendedmadness::UISimpleDataGrid &dataGrid,Float &sliderHeight){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",547,0x58e9766b)
						{
							HX_STACK_LINE(547)
							Float _g2 = dataGrid->getBounds(__this->_slider)->get_bottom();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(547)
							return (_g2 > sliderHeight);
						}
						return null();
					}
				};
				HX_STACK_LINE(547)
				if (((  ((dataGrid->get_includeInLayout())) ? bool(_Function_3_1::Block(this,dataGrid,sliderHeight)) : bool(false) ))){
					HX_STACK_LINE(548)
					Float _g11 = dataGrid->getBounds(this->_slider)->get_bottom();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(548)
					sliderHeight = _g11;
				}
			}
		}
		HX_STACK_LINE(553)
		this->_maximumSlide = ((sliderHeight - this->_height) + (10.0 * ((  (((this->_border == HX_CSTRING("false")))) ? int((int)0) : int((int)1) ))));
		HX_STACK_LINE(554)
		if (((this->_maximumSlide < (int)0))){
			HX_STACK_LINE(555)
			this->_maximumSlide = (int)0;
		}
		HX_STACK_LINE(557)
		if ((this->_autoScrollEnabled)){
			HX_STACK_LINE(558)
			this->_noScroll = (this->_maximumSlide == (int)0);
		}
		HX_STACK_LINE(560)
		Float _g2 = this->get_sliderY();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(560)
		if (((_g2 < -(this->_maximumSlide)))){
			HX_STACK_LINE(561)
			this->set_sliderY(-(this->_maximumSlide));
		}
	}
return null();
}


Void UIScrollDataGrids_obj::adjustMaximumSlide( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","adjustMaximumSlide",0xb849a078,"com.danielfreeman.extendedmadness.UIScrollDataGrids.adjustMaximumSlide","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",566,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(567)
		this->set_sliderX((int)0);
		HX_STACK_LINE(568)
		this->set_sliderY((int)0);
		HX_STACK_LINE(569)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(570)
		Float width = (int)0;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(571)
		{
			HX_STACK_LINE(571)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(571)
			Array< ::Dynamic > _g1 = this->_dataGrids;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(571)
			while((true)){
				HX_STACK_LINE(571)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(571)
					break;
				}
				HX_STACK_LINE(571)
				::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid = _g1->__get(_g).StaticCast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >();		HX_STACK_VAR(dataGrid,"dataGrid");
				HX_STACK_LINE(571)
				++(_g);
				HX_STACK_LINE(572)
				if ((dataGrid->get_includeInLayout())){
					HX_STACK_LINE(573)
					Float _g2 = dataGrid->getBounds(dataGrid)->get_right();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(573)
					if (((_g2 > width))){
						HX_STACK_LINE(574)
						Float _g11 = dataGrid->getBounds(dataGrid)->get_right();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(574)
						width = _g11;
					}
				}
				else{
					HX_STACK_LINE(578)
					dataGrid->set_y((int)0);
					HX_STACK_LINE(579)
					if (((index < this->_fixedColumnLayers->length))){
						HX_STACK_LINE(580)
						this->_fixedColumnLayers->__get(index).StaticCast< ::openfl::display::Sprite >()->set_y((int)0);
					}
					HX_STACK_LINE(582)
					::com::danielfreeman::extendedmadness::UICell _g2 = dataGrid->get_titleCell();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(582)
					if (((_g2 != null()))){
						HX_STACK_LINE(583)
						dataGrid->get_titleCell()->set_y((int)0);
					}
				}
				HX_STACK_LINE(586)
				(index)++;
			}
		}
		HX_STACK_LINE(588)
		this->adjustVerticalSlide();
		HX_STACK_LINE(589)
		this->adjustHorizontalSlide(width);
		HX_STACK_LINE(590)
		this->hideScrollBar();
	}
return null();
}


Void UIScrollDataGrids_obj::doLayout( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","doLayout",0x4f161aad,"com.danielfreeman.extendedmadness.UIScrollDataGrids.doLayout","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",594,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(595)
		this->_delta = (int)0;
		HX_STACK_LINE(596)
		this->_deltaX = (int)0;
		HX_STACK_LINE(597)
		Float y = this->get_sliderY();		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(598)
		this->sliceAllTables();
		HX_STACK_LINE(599)
		::com::danielfreeman::madcomponents::Attributes _g = this->get_attributes();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(599)
		::com::danielfreeman::madcomponents::Attributes _g1 = this->sliderAttributes(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(599)
		(hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(this->_slider))->__Field(HX_CSTRING("layout"),true)(_g1);
		HX_STACK_LINE(600)
		this->relayout(true);
		HX_STACK_LINE(602)
		this->realignColumnLayers();
		HX_STACK_LINE(603)
		this->adjustMaximumSlide();
		HX_STACK_LINE(604)
		this->set_sliderY(y);
		HX_STACK_LINE(605)
		this->autoScrollEnabled();
	}
return null();
}


::openfl::display::DisplayObject UIScrollDataGrids_obj::findViewById( ::String id,hx::Null< int >  __o_row,hx::Null< int >  __o_group){
int row = __o_row.Default(-1);
int group = __o_group.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","findViewById",0xcf91ae08,"com.danielfreeman.extendedmadness.UIScrollDataGrids.findViewById","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",612,0x58e9766b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(group,"group")
{
		HX_STACK_LINE(612)
		if (((id == HX_CSTRING("")))){
			HX_STACK_LINE(613)
			return this->_status;
		}
		else{
			HX_STACK_LINE(616)
			{
				HX_STACK_LINE(616)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(616)
				Array< ::Dynamic > _g1 = this->_dataGrids;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(616)
				while((true)){
					HX_STACK_LINE(616)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(616)
						break;
					}
					HX_STACK_LINE(616)
					::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid = _g1->__get(_g).StaticCast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >();		HX_STACK_VAR(dataGrid,"dataGrid");
					HX_STACK_LINE(616)
					++(_g);
					HX_STACK_LINE(617)
					::String _g2 = dataGrid->get_name();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(617)
					if (((_g2 == id))){
						HX_STACK_LINE(618)
						if (((bool((row < (int)0)) && bool((group < (int)0))))){
							HX_STACK_LINE(618)
							return dataGrid;
						}
						else{
							HX_STACK_LINE(618)
							return dataGrid->findViewById(id,row,group);
						}
					}
				}
			}
			HX_STACK_LINE(621)
			return null();
		}
		HX_STACK_LINE(612)
		return null();
	}
}


Float UIScrollDataGrids_obj::set_textSize( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","set_textSize",0x7d309da3,"com.danielfreeman.extendedmadness.UIScrollDataGrids.set_textSize","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",626,0x58e9766b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(628)
	{
		HX_STACK_LINE(628)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(628)
		Array< ::Dynamic > _g1 = this->_dataGrids;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(628)
		while((true)){
			HX_STACK_LINE(628)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(628)
				break;
			}
			HX_STACK_LINE(628)
			::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid = _g1->__get(_g).StaticCast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >();		HX_STACK_VAR(dataGrid,"dataGrid");
			HX_STACK_LINE(628)
			++(_g);
			HX_STACK_LINE(629)
			(hx::TCast< com::danielfreeman::extendedmadness::UIFastDataGrid >::cast(dataGrid))->set_textSize(value);
		}
	}
	HX_STACK_LINE(631)
	::com::danielfreeman::madcomponents::Attributes _g = this->get_attributes();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(631)
	::com::danielfreeman::madcomponents::Attributes _g1 = this->sliderAttributes(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(631)
	(hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(this->_slider))->__Field(HX_CSTRING("layout"),true)(_g1);
	HX_STACK_LINE(632)
	{
		HX_STACK_LINE(632)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(632)
		Array< ::Dynamic > _g11 = this->_fixedColumnLayers;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(632)
		while((true)){
			HX_STACK_LINE(632)
			if ((!(((_g2 < _g11->length))))){
				HX_STACK_LINE(632)
				break;
			}
			HX_STACK_LINE(632)
			::openfl::display::Sprite layer = _g11->__get(_g2).StaticCast< ::openfl::display::Sprite >();		HX_STACK_VAR(layer,"layer");
			HX_STACK_LINE(632)
			++(_g2);
			HX_STACK_LINE(633)
			this->_fixedColumnSlider->removeChild(layer);
		}
	}
	HX_STACK_LINE(635)
	if ((this->_alignGridWidths)){
		HX_STACK_LINE(636)
		this->doAlignGridWidths();
	}
	HX_STACK_LINE(638)
	this->adjustMaximumSlide();
	HX_STACK_LINE(639)
	Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(639)
	this->_fixedColumnLayers = _g2;
	HX_STACK_LINE(640)
	this->sliceAllTables();
	HX_STACK_LINE(641)
	this->relayout(false);
	HX_STACK_LINE(642)
	return value;
}


Void UIScrollDataGrids_obj::clear( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","clear",0x2c534c75,"com.danielfreeman.extendedmadness.UIScrollDataGrids.clear","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",647,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(647)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(647)
		Array< ::Dynamic > _g1 = this->_dataGrids;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(647)
		while((true)){
			HX_STACK_LINE(647)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(647)
				break;
			}
			HX_STACK_LINE(647)
			::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid = _g1->__get(_g).StaticCast< ::com::danielfreeman::extendedmadness::UISimpleDataGrid >();		HX_STACK_VAR(dataGrid,"dataGrid");
			HX_STACK_LINE(647)
			++(_g);
			HX_STACK_LINE(648)
			dataGrid->clear();
		}
	}
return null();
}


Void UIScrollDataGrids_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIScrollDataGrids","destructor",0x002f7751,"com.danielfreeman.extendedmadness.UIScrollDataGrids.destructor","com/danielfreeman/extendedmadness/UIScrollDataGrids.hx",654,0x58e9766b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(654)
		this->super::destructor();
	}
return null();
}


Float UIScrollDataGrids_obj::EXTRA;

::openfl::text::TextFormat UIScrollDataGrids_obj::STATUS_STYLE;

::String UIScrollDataGrids_obj::HEADER_NAME;


UIScrollDataGrids_obj::UIScrollDataGrids_obj()
{
}

void UIScrollDataGrids_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIScrollDataGrids);
	HX_MARK_MEMBER_NAME(_dataGrids,"_dataGrids");
	HX_MARK_MEMBER_NAME(_fixedColumnLayers,"_fixedColumnLayers");
	HX_MARK_MEMBER_NAME(_currentHeading,"_currentHeading");
	HX_MARK_MEMBER_NAME(_titleSlider,"_titleSlider");
	HX_MARK_MEMBER_NAME(_headerTitleSlider,"_headerTitleSlider");
	HX_MARK_MEMBER_NAME(_alignGridWidths,"_alignGridWidths");
	HX_MARK_MEMBER_NAME(_statusFormat,"_statusFormat");
	HX_MARK_MEMBER_NAME(_status,"_status");
	HX_MARK_MEMBER_NAME(_screen,"_screen");
	HX_MARK_MEMBER_NAME(_gridColumns,"_gridColumns");
	HX_MARK_MEMBER_NAME(_headerLines,"_headerLines");
	::com::danielfreeman::extendedmadness::UIScrollDataGrid_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIScrollDataGrids_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dataGrids,"_dataGrids");
	HX_VISIT_MEMBER_NAME(_fixedColumnLayers,"_fixedColumnLayers");
	HX_VISIT_MEMBER_NAME(_currentHeading,"_currentHeading");
	HX_VISIT_MEMBER_NAME(_titleSlider,"_titleSlider");
	HX_VISIT_MEMBER_NAME(_headerTitleSlider,"_headerTitleSlider");
	HX_VISIT_MEMBER_NAME(_alignGridWidths,"_alignGridWidths");
	HX_VISIT_MEMBER_NAME(_statusFormat,"_statusFormat");
	HX_VISIT_MEMBER_NAME(_status,"_status");
	HX_VISIT_MEMBER_NAME(_screen,"_screen");
	HX_VISIT_MEMBER_NAME(_gridColumns,"_gridColumns");
	HX_VISIT_MEMBER_NAME(_headerLines,"_headerLines");
	::com::danielfreeman::extendedmadness::UIScrollDataGrid_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIScrollDataGrids_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_status") ) { return _status; }
		if (HX_FIELD_EQ(inName,"_screen") ) { return _screen; }
		if (HX_FIELD_EQ(inName,"set_xml") ) { return set_xml_dyn(); }
		if (HX_FIELD_EQ(inName,"copyRow") ) { return copyRow_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyText") ) { return copyText_dyn(); }
		if (HX_FIELD_EQ(inName,"relayout") ) { return relayout_dyn(); }
		if (HX_FIELD_EQ(inName,"doLayout") ) { return doLayout_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dataGrids") ) { return get_dataGrids(); }
		if (HX_FIELD_EQ(inName,"addLayers") ) { return addLayers_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_dataGrids") ) { return _dataGrids; }
		if (HX_FIELD_EQ(inName,"set_status") ) { return set_status_dyn(); }
		if (HX_FIELD_EQ(inName,"reposition") ) { return reposition_dyn(); }
		if (HX_FIELD_EQ(inName,"sliceTable") ) { return sliceTable_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sliceTables") ) { return sliceTables_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sliderX") ) { return set_sliderX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sliderY") ) { return set_sliderY_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"STATUS_STYLE") ) { return STATUS_STYLE; }
		if (HX_FIELD_EQ(inName,"_titleSlider") ) { return _titleSlider; }
		if (HX_FIELD_EQ(inName,"_gridColumns") ) { return _gridColumns; }
		if (HX_FIELD_EQ(inName,"_headerLines") ) { return _headerLines; }
		if (HX_FIELD_EQ(inName,"createSlider") ) { return createSlider_dyn(); }
		if (HX_FIELD_EQ(inName,"findViewById") ) { return findViewById_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textSize") ) { return set_textSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_statusFormat") ) { return _statusFormat; }
		if (HX_FIELD_EQ(inName,"get_dataGrids") ) { return get_dataGrids_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fixheight") ) { return set_fixheight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sliceAllTables") ) { return sliceAllTables_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRowColours") ) { return drawRowColours_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_currentHeading") ) { return _currentHeading; }
		if (HX_FIELD_EQ(inName,"swapCellHeaders") ) { return swapCellHeaders_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_alignGridWidths") ) { return _alignGridWidths; }
		if (HX_FIELD_EQ(inName,"gridFixedColumns") ) { return gridFixedColumns_dyn(); }
		if (HX_FIELD_EQ(inName,"initialiseLayers") ) { return initialiseLayers_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"doAlignGridWidths") ) { return doAlignGridWidths_dyn(); }
		if (HX_FIELD_EQ(inName,"autoScrollEnabled") ) { return autoScrollEnabled_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_fixedColumnLayers") ) { return _fixedColumnLayers; }
		if (HX_FIELD_EQ(inName,"_headerTitleSlider") ) { return _headerTitleSlider; }
		if (HX_FIELD_EQ(inName,"set_selectDataGrid") ) { return set_selectDataGrid_dyn(); }
		if (HX_FIELD_EQ(inName,"adjustMaximumSlide") ) { return adjustMaximumSlide_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_alignGridWidths") ) { return set_alignGridWidths_dyn(); }
		if (HX_FIELD_EQ(inName,"realignColumnLayers") ) { return realignColumnLayers_dyn(); }
		if (HX_FIELD_EQ(inName,"adjustVerticalSlide") ) { return adjustVerticalSlide_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"headerFixedColumnLine") ) { return headerFixedColumnLine_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"preExtractHeadersCells") ) { return preExtractHeadersCells_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIScrollDataGrids_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return set_status(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_status") ) { _status=inValue.Cast< ::com::danielfreeman::madcomponents::UILabel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_screen") ) { _screen=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fixheight") ) { return set_fixheight(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_dataGrids") ) { _dataGrids=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"STATUS_STYLE") ) { STATUS_STYLE=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_titleSlider") ) { _titleSlider=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_gridColumns") ) { _gridColumns=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headerLines") ) { _headerLines=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_statusFormat") ) { _statusFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"selectDataGrid") ) { return set_selectDataGrid(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alignGridWidths") ) { return set_alignGridWidths(inValue); }
		if (HX_FIELD_EQ(inName,"_currentHeading") ) { _currentHeading=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_alignGridWidths") ) { _alignGridWidths=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_fixedColumnLayers") ) { _fixedColumnLayers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headerTitleSlider") ) { _headerTitleSlider=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIScrollDataGrids_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("status"));
	outFields->push(HX_CSTRING("selectDataGrid"));
	outFields->push(HX_CSTRING("dataGrids"));
	outFields->push(HX_CSTRING("fixheight"));
	outFields->push(HX_CSTRING("alignGridWidths"));
	outFields->push(HX_CSTRING("_dataGrids"));
	outFields->push(HX_CSTRING("_fixedColumnLayers"));
	outFields->push(HX_CSTRING("_currentHeading"));
	outFields->push(HX_CSTRING("_titleSlider"));
	outFields->push(HX_CSTRING("_headerTitleSlider"));
	outFields->push(HX_CSTRING("_alignGridWidths"));
	outFields->push(HX_CSTRING("_statusFormat"));
	outFields->push(HX_CSTRING("_status"));
	outFields->push(HX_CSTRING("_screen"));
	outFields->push(HX_CSTRING("_gridColumns"));
	outFields->push(HX_CSTRING("_headerLines"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("EXTRA"),
	HX_CSTRING("STATUS_STYLE"),
	HX_CSTRING("HEADER_NAME"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UIScrollDataGrids_obj,_dataGrids),HX_CSTRING("_dataGrids")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UIScrollDataGrids_obj,_fixedColumnLayers),HX_CSTRING("_fixedColumnLayers")},
	{hx::fsInt,(int)offsetof(UIScrollDataGrids_obj,_currentHeading),HX_CSTRING("_currentHeading")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UIScrollDataGrids_obj,_titleSlider),HX_CSTRING("_titleSlider")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UIScrollDataGrids_obj,_headerTitleSlider),HX_CSTRING("_headerTitleSlider")},
	{hx::fsBool,(int)offsetof(UIScrollDataGrids_obj,_alignGridWidths),HX_CSTRING("_alignGridWidths")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UIScrollDataGrids_obj,_statusFormat),HX_CSTRING("_statusFormat")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UILabel*/ ,(int)offsetof(UIScrollDataGrids_obj,_status),HX_CSTRING("_status")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UIScrollDataGrids_obj,_screen),HX_CSTRING("_screen")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UIScrollDataGrids_obj,_gridColumns),HX_CSTRING("_gridColumns")},
	{hx::fsBool,(int)offsetof(UIScrollDataGrids_obj,_headerLines),HX_CSTRING("_headerLines")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_dataGrids"),
	HX_CSTRING("_fixedColumnLayers"),
	HX_CSTRING("_currentHeading"),
	HX_CSTRING("_titleSlider"),
	HX_CSTRING("_headerTitleSlider"),
	HX_CSTRING("_alignGridWidths"),
	HX_CSTRING("_statusFormat"),
	HX_CSTRING("_status"),
	HX_CSTRING("_screen"),
	HX_CSTRING("_gridColumns"),
	HX_CSTRING("_headerLines"),
	HX_CSTRING("gridFixedColumns"),
	HX_CSTRING("set_status"),
	HX_CSTRING("reposition"),
	HX_CSTRING("initialiseLayers"),
	HX_CSTRING("addLayers"),
	HX_CSTRING("set_xml"),
	HX_CSTRING("sliceTable"),
	HX_CSTRING("sliceTables"),
	HX_CSTRING("sliceAllTables"),
	HX_CSTRING("copyText"),
	HX_CSTRING("copyRow"),
	HX_CSTRING("preExtractHeadersCells"),
	HX_CSTRING("swapCellHeaders"),
	HX_CSTRING("set_sliderX"),
	HX_CSTRING("set_sliderY"),
	HX_CSTRING("createSlider"),
	HX_CSTRING("headerFixedColumnLine"),
	HX_CSTRING("set_selectDataGrid"),
	HX_CSTRING("get_dataGrids"),
	HX_CSTRING("doAlignGridWidths"),
	HX_CSTRING("drawRowColours"),
	HX_CSTRING("relayout"),
	HX_CSTRING("autoScrollEnabled"),
	HX_CSTRING("layout"),
	HX_CSTRING("set_fixheight"),
	HX_CSTRING("set_alignGridWidths"),
	HX_CSTRING("realignColumnLayers"),
	HX_CSTRING("adjustVerticalSlide"),
	HX_CSTRING("adjustMaximumSlide"),
	HX_CSTRING("doLayout"),
	HX_CSTRING("findViewById"),
	HX_CSTRING("set_textSize"),
	HX_CSTRING("clear"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIScrollDataGrids_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIScrollDataGrids_obj::EXTRA,"EXTRA");
	HX_MARK_MEMBER_NAME(UIScrollDataGrids_obj::STATUS_STYLE,"STATUS_STYLE");
	HX_MARK_MEMBER_NAME(UIScrollDataGrids_obj::HEADER_NAME,"HEADER_NAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIScrollDataGrids_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIScrollDataGrids_obj::EXTRA,"EXTRA");
	HX_VISIT_MEMBER_NAME(UIScrollDataGrids_obj::STATUS_STYLE,"STATUS_STYLE");
	HX_VISIT_MEMBER_NAME(UIScrollDataGrids_obj::HEADER_NAME,"HEADER_NAME");
};

#endif

Class UIScrollDataGrids_obj::__mClass;

void UIScrollDataGrids_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UIScrollDataGrids"), hx::TCanCast< UIScrollDataGrids_obj> ,sStaticFields,sMemberFields,
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

void UIScrollDataGrids_obj::__boot()
{
	EXTRA= 32.0;
	STATUS_STYLE= ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)13,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HEADER_NAME= HX_CSTRING("#header");
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
