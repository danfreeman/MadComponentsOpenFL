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
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UICell
#include <com/danielfreeman/extendedmadness/UICell.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIFastDataGrid
#include <com/danielfreeman/extendedmadness/UIFastDataGrid.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UISimpleDataGrid
#include <com/danielfreeman/extendedmadness/UISimpleDataGrid.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_Attributes
#include <com/danielfreeman/madcomponents/Attributes.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IComponentUI
#include <com/danielfreeman/madcomponents/IComponentUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void UIFastDataGrid_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","new",0x3f0828fe,"com.danielfreeman.extendedmadness.UIFastDataGrid.new","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",67,0xb611510f)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(77)
	this->_colSpanWidths = null();
	HX_STACK_LINE(81)
	if ((xml->has->resolve(HX_CSTRING("multiLine")))){
		HX_STACK_LINE(82)
		::String _g = xml->att->resolve(HX_CSTRING("multiLine"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(82)
		bool _g1 = (_g == HX_CSTRING("true"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(82)
		this->_multiLine = _g1;
	}
	HX_STACK_LINE(84)
	if ((xml->has->resolve(HX_CSTRING("wordWrap")))){
		HX_STACK_LINE(85)
		::String _g2 = xml->att->resolve(HX_CSTRING("wordWrap"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(85)
		bool _g3 = (_g2 == HX_CSTRING("true"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(85)
		this->_wordWrap = _g3;
	}
	HX_STACK_LINE(87)
	bool _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(87)
	if ((!((!(xml->has->resolve(HX_CSTRING("colspan"))))))){
		HX_STACK_LINE(87)
		::String _g4 = xml->att->resolve(HX_CSTRING("colSpan"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(87)
		_g5 = (_g4 != HX_CSTRING("false"));
	}
	else{
		HX_STACK_LINE(87)
		_g5 = true;
	}
	HX_STACK_LINE(87)
	this->_colSpan = _g5;
	HX_STACK_LINE(88)
	bool _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(88)
	if ((!((!(xml->has->resolve(HX_CSTRING("colSpanWrap"))))))){
		HX_STACK_LINE(88)
		::String _g6 = xml->att->resolve(HX_CSTRING("colSpanWrap"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(88)
		_g7 = (_g6 != HX_CSTRING("false"));
	}
	else{
		HX_STACK_LINE(88)
		_g7 = true;
	}
	HX_STACK_LINE(88)
	this->_colSpanWrap = _g7;
	HX_STACK_LINE(89)
	super::__construct(screen,xml,attributes);
}
;
	return null();
}

//UIFastDataGrid_obj::~UIFastDataGrid_obj() { }

Dynamic UIFastDataGrid_obj::__CreateEmpty() { return  new UIFastDataGrid_obj; }
hx::ObjectPtr< UIFastDataGrid_obj > UIFastDataGrid_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIFastDataGrid_obj > result = new UIFastDataGrid_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIFastDataGrid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIFastDataGrid_obj > result = new UIFastDataGrid_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void UIFastDataGrid_obj::calculateCustomWidths( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","calculateCustomWidths",0xfc9120e2,"com.danielfreeman.extendedmadness.UIFastDataGrid.calculateCustomWidths","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",93,0xb611510f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(94)
		Float total = (int)0;		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			Dynamic _g1 = this->_theWidths;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(95)
			while((true)){
				HX_STACK_LINE(95)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(95)
					break;
				}
				HX_STACK_LINE(95)
				Dynamic item = _g1->__GetItem(_g);		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(95)
				++(_g);
				HX_STACK_LINE(96)
				Dynamic _g2 = item->__Field(HX_CSTRING("lastIndexOf"),true)(HX_CSTRING("%"));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(96)
				if (((_g2 < (int)0))){
					HX_STACK_LINE(97)
					Dynamic _g11 = ::Std_obj::parseInt(item);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(97)
					hx::AddEq(total,_g11);
				}
			}
		}
		HX_STACK_LINE(100)
		Array< Float > _g2 = Array_obj< Float >::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(100)
		this->_columnWidths = _g2;
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(101)
			Dynamic _g1 = this->_theWidths;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(101)
			while((true)){
				HX_STACK_LINE(101)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(101)
					break;
				}
				HX_STACK_LINE(101)
				Dynamic width = _g1->__GetItem(_g);		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(101)
				++(_g);
				HX_STACK_LINE(102)
				Dynamic _g3 = width->__Field(HX_CSTRING("lastIndexOf"),true)(HX_CSTRING("%"));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(102)
				Float _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(102)
				if (((_g3 > (int)0))){
					HX_STACK_LINE(102)
					Float _g4 = ::Std_obj::parseFloat(width);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(102)
					Float _g5 = (Float(_g4) / Float((int)100));		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(102)
					_g6 = (_g5 * ((this->_attributes->width - total)));
				}
				else{
					HX_STACK_LINE(102)
					_g6 = ::Std_obj::parseFloat(width);
				}
				HX_STACK_LINE(102)
				this->_columnWidths->push(_g6);
			}
		}
	}
return null();
}


Void UIFastDataGrid_obj::drawBackground( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","drawBackground",0x00c7c134,"com.danielfreeman.extendedmadness.UIFastDataGrid.drawBackground","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",110,0xb611510f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(111)
		this->get_graphics()->clear();
		HX_STACK_LINE(112)
		if (((this->_table->length == (int)0))){
			HX_STACK_LINE(113)
			return null();
		}
		HX_STACK_LINE(115)
		Array< ::Dynamic > lastRow = this->_table->__get((this->_table->length - (int)1)).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(lastRow,"lastRow");
		HX_STACK_LINE(116)
		if (((lastRow->length == (int)0))){
			HX_STACK_LINE(117)
			return null();
		}
		HX_STACK_LINE(120)
		::com::danielfreeman::extendedmadness::UICell cornerCell = lastRow->__get((lastRow->length - (int)1)).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(cornerCell,"cornerCell");
		HX_STACK_LINE(122)
		Float _g = cornerCell->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(122)
		Float _g1 = cornerCell->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(122)
		Float _g2 = (_g + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(122)
		Float _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(122)
		Float theWidth = ::Math_obj::max(_g3,this->_attributes->width);		HX_STACK_VAR(theWidth,"theWidth");
		HX_STACK_LINE(123)
		int colour;		HX_STACK_VAR(colour,"colour");
		HX_STACK_LINE(123)
		if ((this->_hasHeader)){
			HX_STACK_LINE(123)
			colour = this->_headerColour;
		}
		else{
			HX_STACK_LINE(123)
			colour = this->_colours->__get((int)0);
		}
		HX_STACK_LINE(124)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(124)
		if ((this->_hasHeader)){
			HX_STACK_LINE(124)
			index = (int)0;
		}
		else{
			HX_STACK_LINE(124)
			index = (int)1;
		}
		HX_STACK_LINE(125)
		if (((this->_title != null()))){
			HX_STACK_LINE(126)
			this->_title->set_fixwidth(theWidth);
		}
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(129)
			Array< ::Dynamic > _g11 = this->_table;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(129)
			while((true)){
				HX_STACK_LINE(129)
				if ((!(((_g4 < _g11->length))))){
					HX_STACK_LINE(129)
					break;
				}
				HX_STACK_LINE(129)
				Array< ::Dynamic > row = _g11->__get(_g4).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(129)
				++(_g4);
				HX_STACK_LINE(130)
				this->get_graphics()->beginFill(colour,null());
				HX_STACK_LINE(131)
				Float _g41 = row->__get((int)0).StaticCast< ::com::danielfreeman::extendedmadness::UICell >()->get_y();		HX_STACK_VAR(_g41,"_g41");
				HX_STACK_LINE(131)
				Float _g5 = row->__get((int)0).StaticCast< ::com::danielfreeman::extendedmadness::UICell >()->get_height();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(131)
				this->get_graphics()->drawRect((int)0,_g41,theWidth,_g5);
				HX_STACK_LINE(132)
				this->get_graphics()->endFill();
				HX_STACK_LINE(133)
				int _g6 = (index)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(133)
				int _g7 = hx::Mod(_g6,this->_colours->length);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(133)
				int _g8 = this->_colours->__get(_g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(133)
				colour = _g8;
			}
		}
	}
return null();
}


Void UIFastDataGrid_obj::makeTable( Dynamic data,::openfl::text::TextFormat format){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","makeTable",0x2741d25e,"com.danielfreeman.extendedmadness.UIFastDataGrid.makeTable","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",140,0xb611510f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(141)
		if (((format == null()))){
			HX_STACK_LINE(142)
			format = this->_dataStyle;
		}
		HX_STACK_LINE(144)
		format->leftMargin = this->_leftMargin;
		HX_STACK_LINE(145)
		{
			HX_STACK_LINE(145)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(145)
			int _g = data->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(145)
			while((true)){
				HX_STACK_LINE(145)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(145)
					break;
				}
				HX_STACK_LINE(145)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(146)
				Dynamic dataRow = data->__GetItem(i);		HX_STACK_VAR(dataRow,"dataRow");
				HX_STACK_LINE(147)
				Array< ::Dynamic > row = this->_table[this->_table->length] = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(148)
				Float wdth0 = (Float(this->_tableWidth) / Float(dataRow->__Field(HX_CSTRING("length"),true)));		HX_STACK_VAR(wdth0,"wdth0");
				HX_STACK_LINE(149)
				Float lastX = (int)0;		HX_STACK_VAR(lastX,"lastX");
				HX_STACK_LINE(150)
				Float _g2 = this->getBounds(hx::ObjectPtr<OBJ_>(this))->get_right();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(150)
				Float theWidth = ::Math_obj::max(_g2,this->_tableWidth);		HX_STACK_VAR(theWidth,"theWidth");
				HX_STACK_LINE(151)
				::com::danielfreeman::extendedmadness::UICell cell = null();		HX_STACK_VAR(cell,"cell");
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(152)
					int _g21 = dataRow->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(152)
					while((true)){
						HX_STACK_LINE(152)
						if ((!(((_g3 < _g21))))){
							HX_STACK_LINE(152)
							break;
						}
						HX_STACK_LINE(152)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(155)
						Float wdth;		HX_STACK_VAR(wdth,"wdth");
						HX_STACK_LINE(156)
						if (((j == (dataRow->__Field(HX_CSTRING("length"),true) - (int)1)))){
							HX_STACK_LINE(157)
							int _g11 = ::Math_obj::ceil((theWidth - lastX));		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(157)
							wdth = _g11;
						}
						else{
							HX_STACK_LINE(160)
							Float _g6;		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(160)
							if (((this->_columnWidths != null()))){
								HX_STACK_LINE(160)
								_g6 = this->_columnWidths->__get(j);
							}
							else{
								HX_STACK_LINE(160)
								if (((this->_cellWidths != null()))){
									HX_STACK_LINE(160)
									Float _g22 = ::Math_obj::min((this->_cellWidths->__Field(HX_CSTRING("length"),true) - (int)1),j);		HX_STACK_VAR(_g22,"_g22");
									HX_STACK_LINE(160)
									int _g31 = ::Math_obj::round(_g22);		HX_STACK_VAR(_g31,"_g31");
									HX_STACK_LINE(160)
									Float _g4 = this->_cellWidths->__GetItem(_g31);		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(160)
									Float _g5 = (this->_tableWidth * _g4);		HX_STACK_VAR(_g5,"_g5");
									HX_STACK_LINE(160)
									_g6 = (Float(_g5) / Float((int)100));
								}
								else{
									HX_STACK_LINE(160)
									_g6 = wdth0;
								}
							}
							HX_STACK_LINE(160)
							int _g7 = ::Math_obj::ceil(_g6);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(160)
							int _g8 = ::Math_obj::round(_g7);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(160)
							wdth = _g8;
						}
						HX_STACK_LINE(162)
						::com::danielfreeman::extendedmadness::UICell _g9 = this->newCell(format);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(162)
						cell = _g9;
						HX_STACK_LINE(163)
						cell->set_x(lastX);
						HX_STACK_LINE(164)
						cell->set_y(this->_last);
						HX_STACK_LINE(165)
						cell->set_xmlText(dataRow->__GetItem(j));
						HX_STACK_LINE(166)
						cell->set_fixwidth(wdth);
						HX_STACK_LINE(167)
						row->push(cell);
						HX_STACK_LINE(168)
						cell->set_border(this->_border);
						HX_STACK_LINE(169)
						cell->set_borderColor(this->_borderColour);
						HX_STACK_LINE(170)
						cell->set_multiline(this->_multiLine);
						HX_STACK_LINE(171)
						cell->set_wordWrap(this->_wordWrap);
						HX_STACK_LINE(173)
						cell->set_fixwidth(wdth);
						HX_STACK_LINE(174)
						Float _g10 = cell->get_x();		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(174)
						Float _g11 = cell->get_width();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(174)
						Float _g12 = (_g10 + _g11);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(174)
						lastX = _g12;
					}
				}
				HX_STACK_LINE(176)
				if (((cell != null()))){
					HX_STACK_LINE(177)
					Float _g13 = cell->get_y();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(177)
					Float _g14 = cell->get_height();		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(177)
					Float _g15 = (_g13 + _g14);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(177)
					this->_last = _g15;
				}
			}
		}
	}
return null();
}


Void UIFastDataGrid_obj::swapRows( int rowIndexA,int rowIndexB){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","swapRows",0x0b1a3bee,"com.danielfreeman.extendedmadness.UIFastDataGrid.swapRows","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",185,0xb611510f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rowIndexA,"rowIndexA")
		HX_STACK_ARG(rowIndexB,"rowIndexB")
		HX_STACK_LINE(186)
		Array< ::Dynamic > rowA = this->_table->__get(rowIndexA).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(rowA,"rowA");
		HX_STACK_LINE(187)
		Array< ::Dynamic > rowB = this->_table->__get(rowIndexB).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(rowB,"rowB");
		HX_STACK_LINE(188)
		this->_table[rowIndexA] = rowB;
		HX_STACK_LINE(189)
		this->_table[rowIndexB] = rowA;
		HX_STACK_LINE(198)
		Dynamic dataA = this->_data->__GetItem(rowIndexA);		HX_STACK_VAR(dataA,"dataA");
		HX_STACK_LINE(199)
		hx::IndexRef((this->_data).mPtr,rowIndexA) = this->_data->__GetItem(rowIndexB);
		HX_STACK_LINE(200)
		hx::IndexRef((this->_data).mPtr,rowIndexB) = dataA;
		HX_STACK_LINE(202)
		this->rejig();
		HX_STACK_LINE(203)
		this->drawBackground();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIFastDataGrid_obj,swapRows,(void))

Void UIFastDataGrid_obj::shiftRows( int index,Float deltaHeight){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","shiftRows",0x1f6e19d9,"com.danielfreeman.extendedmadness.UIFastDataGrid.shiftRows","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",210,0xb611510f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(deltaHeight,"deltaHeight")
		HX_STACK_LINE(210)
		int _g1 = index;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(210)
		int _g = this->_table->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(210)
		while((true)){
			HX_STACK_LINE(210)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(210)
				break;
			}
			HX_STACK_LINE(210)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(211)
			Array< ::Dynamic > row = this->_table->__get(i).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(212)
			{
				HX_STACK_LINE(212)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(212)
				while((true)){
					HX_STACK_LINE(212)
					if ((!(((_g2 < row->length))))){
						HX_STACK_LINE(212)
						break;
					}
					HX_STACK_LINE(212)
					::com::danielfreeman::extendedmadness::UICell cell = row->__get(_g2).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(cell,"cell");
					HX_STACK_LINE(212)
					++(_g2);
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::com::danielfreeman::extendedmadness::UICell _g3 = cell;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(213)
						Float _g4 = _g3->get_y();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(213)
						Float _g11 = (_g4 + deltaHeight);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(213)
						_g3->set_y(_g11);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIFastDataGrid_obj,shiftRows,(void))

Void UIFastDataGrid_obj::insertRow( int rowIndex,Dynamic rowData){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","insertRow",0x6240037f,"com.danielfreeman.extendedmadness.UIFastDataGrid.insertRow","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",221,0xb611510f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rowIndex,"rowIndex")
		HX_STACK_ARG(rowData,"rowData")
		HX_STACK_LINE(222)
		::com::danielfreeman::extendedmadness::UICell cell;		HX_STACK_VAR(cell,"cell");
		HX_STACK_LINE(222)
		if (((rowIndex >= this->_table->length))){
			HX_STACK_LINE(222)
			cell = null();
		}
		else{
			HX_STACK_LINE(222)
			cell = this->_table->__get(rowIndex).StaticCast< Array< ::Dynamic > >()->__get((int)0).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();
		}
		HX_STACK_LINE(223)
		Array< ::Dynamic > row = this->_table->__get((this->_table->length - (int)1)).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(224)
		Float rowY;		HX_STACK_VAR(rowY,"rowY");
		HX_STACK_LINE(224)
		if (((cell != null()))){
			HX_STACK_LINE(224)
			rowY = cell->get_y();
		}
		else{
			HX_STACK_LINE(224)
			rowY = row->__get((int)0).StaticCast< ::com::danielfreeman::extendedmadness::UICell >()->get_y();
		}
		HX_STACK_LINE(225)
		if (((cell != null()))){
			HX_STACK_LINE(226)
			Float _g = cell->get_height();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(226)
			this->shiftRows(rowIndex,_g);
		}
		HX_STACK_LINE(228)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(229)
		Array< ::Dynamic > newRow = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(newRow,"newRow");
		HX_STACK_LINE(230)
		{
			HX_STACK_LINE(230)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(230)
			while((true)){
				HX_STACK_LINE(230)
				if ((!(((_g < row->length))))){
					HX_STACK_LINE(230)
					break;
				}
				HX_STACK_LINE(230)
				::com::danielfreeman::extendedmadness::UICell topCell = row->__get(_g).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(topCell,"topCell");
				HX_STACK_LINE(230)
				++(_g);
				HX_STACK_LINE(231)
				::com::danielfreeman::extendedmadness::UICell _g1 = this->newCell(this->_dataStyle);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(231)
				::com::danielfreeman::extendedmadness::UICell _g2 = cell = _g1;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(231)
				newRow->push(_g2);
				HX_STACK_LINE(232)
				Float _g3 = topCell->get_x();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(232)
				cell->set_x(_g3);
				HX_STACK_LINE(233)
				cell->set_y(rowY);
				HX_STACK_LINE(234)
				cell->set_xmlText(rowData->__GetItem(index));
				HX_STACK_LINE(235)
				Float _g4 = topCell->get_width();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(235)
				cell->set_fixwidth(_g4);
				HX_STACK_LINE(236)
				(index)++;
			}
		}
		HX_STACK_LINE(240)
		this->_table->insert(rowIndex,newRow);
		HX_STACK_LINE(241)
		this->_data->__Field(HX_CSTRING("insert"),true)(rowIndex,rowData);
		HX_STACK_LINE(242)
		this->drawBackground();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIFastDataGrid_obj,insertRow,(void))

Void UIFastDataGrid_obj::deleteRow( int rowIndex){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","deleteRow",0x3a8fa9cd,"com.danielfreeman.extendedmadness.UIFastDataGrid.deleteRow","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",248,0xb611510f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rowIndex,"rowIndex")
		HX_STACK_LINE(249)
		Array< ::Dynamic > row = this->_table->__get(rowIndex).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(250)
		Float _g = -(row->__get((int)0).StaticCast< ::com::danielfreeman::extendedmadness::UICell >()->get_height());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(250)
		this->shiftRows(rowIndex,_g);
		HX_STACK_LINE(251)
		this->_data->__Field(HX_CSTRING("splice"),true)(rowIndex,(int)1);
		HX_STACK_LINE(252)
		this->_table->splice(rowIndex,(int)1);
		HX_STACK_LINE(253)
		{
			HX_STACK_LINE(253)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(253)
			while((true)){
				HX_STACK_LINE(253)
				if ((!(((_g1 < row->length))))){
					HX_STACK_LINE(253)
					break;
				}
				HX_STACK_LINE(253)
				::com::danielfreeman::extendedmadness::UICell cell = row->__get(_g1).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(cell,"cell");
				HX_STACK_LINE(253)
				++(_g1);
				HX_STACK_LINE(254)
				this->removeCell(cell);
			}
		}
		HX_STACK_LINE(256)
		this->drawBackground();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIFastDataGrid_obj,deleteRow,(void))

Float UIFastDataGrid_obj::get_calculateWidth( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","get_calculateWidth",0xf25228ab,"com.danielfreeman.extendedmadness.UIFastDataGrid.get_calculateWidth","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",260,0xb611510f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(261)
	Float result = (int)0;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(262)
	Array< ::Dynamic > row = this->_table->__get((int)0).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row,"row");
	HX_STACK_LINE(263)
	Float wdth = (Float(this->_tableWidth) / Float(row->length));		HX_STACK_VAR(wdth,"wdth");
	HX_STACK_LINE(264)
	{
		HX_STACK_LINE(264)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(264)
		int _g = row->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(264)
		while((true)){
			HX_STACK_LINE(264)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(264)
				break;
			}
			HX_STACK_LINE(264)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(265)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(265)
			if (((this->_columnWidths != null()))){
				HX_STACK_LINE(265)
				_g4 = this->_columnWidths->__get(i);
			}
			else{
				HX_STACK_LINE(265)
				if (((this->_cellWidths != null()))){
					HX_STACK_LINE(265)
					Float _g2 = ::Math_obj::min((this->_cellWidths->__Field(HX_CSTRING("length"),true) - (int)1),i);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(265)
					int _g11 = ::Math_obj::round(_g2);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(265)
					Float _g21 = this->_cellWidths->__GetItem(_g11);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(265)
					Float _g3 = (this->_tableWidth * _g21);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(265)
					_g4 = (Float(_g3) / Float((int)100));
				}
				else{
					HX_STACK_LINE(265)
					_g4 = wdth;
				}
			}
			HX_STACK_LINE(265)
			int _g5 = ::Math_obj::ceil(_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(265)
			int _g6 = ::Math_obj::round(_g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(265)
			hx::AddEq(result,_g6);
		}
	}
	HX_STACK_LINE(267)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(UIFastDataGrid_obj,get_calculateWidth,return )

Void UIFastDataGrid_obj::rejig( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","rejig",0x7db3b513,"com.danielfreeman.extendedmadness.UIFastDataGrid.rejig","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",273,0xb611510f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(274)
		if (((this->_table->length == (int)0))){
			HX_STACK_LINE(275)
			return null();
		}
		HX_STACK_LINE(277)
		Float lastY = (int)0;		HX_STACK_VAR(lastY,"lastY");
		HX_STACK_LINE(278)
		int columns = this->_table->__get((int)0).StaticCast< Array< ::Dynamic > >()->length;		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(279)
		this->get_graphics()->clear();
		HX_STACK_LINE(280)
		Float wdth0 = (Float(this->_tableWidth) / Float(columns));		HX_STACK_VAR(wdth0,"wdth0");
		HX_STACK_LINE(281)
		if (((this->_title != null()))){
			HX_STACK_LINE(282)
			this->_title->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
			HX_STACK_LINE(283)
			Float _g = this->_title->get_height();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(283)
			lastY = _g;
			HX_STACK_LINE(284)
			this->_title->set_fixwidth(this->_tableWidth);
		}
		HX_STACK_LINE(286)
		Float theWidth;		HX_STACK_VAR(theWidth,"theWidth");
		HX_STACK_LINE(286)
		if ((this->_fits)){
			HX_STACK_LINE(286)
			theWidth = this->_tableWidth;
		}
		else{
			HX_STACK_LINE(286)
			Float _g1 = this->get_calculateWidth();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(286)
			theWidth = ::Math_obj::max(_g1,this->_tableWidth);
		}
		HX_STACK_LINE(287)
		{
			HX_STACK_LINE(287)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(287)
			int _g = this->_table->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(287)
			while((true)){
				HX_STACK_LINE(287)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(287)
					break;
				}
				HX_STACK_LINE(287)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(288)
				Array< ::Dynamic > row = this->_table->__get(i).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(291)
				Float position = (int)0;		HX_STACK_VAR(position,"position");
				HX_STACK_LINE(292)
				Float maxHeight = this->initialHeight(i);		HX_STACK_VAR(maxHeight,"maxHeight");
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(294)
					int _g2 = row->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(294)
					while((true)){
						HX_STACK_LINE(294)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(294)
							break;
						}
						HX_STACK_LINE(294)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(295)
						Float wdth;		HX_STACK_VAR(wdth,"wdth");
						HX_STACK_LINE(296)
						bool colSpan = false;		HX_STACK_VAR(colSpan,"colSpan");
						HX_STACK_LINE(297)
						if (((j == (row->length - (int)1)))){
							HX_STACK_LINE(298)
							int _g21 = ::Math_obj::ceil((theWidth - position));		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(298)
							wdth = _g21;
							HX_STACK_LINE(299)
							colSpan = (bool(this->_colSpanWrap) && bool((j < (columns - (int)1))));
						}
						else{
							HX_STACK_LINE(302)
							Float _g7;		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(302)
							if (((this->_columnWidths != null()))){
								HX_STACK_LINE(302)
								_g7 = this->_columnWidths->__get(j);
							}
							else{
								HX_STACK_LINE(302)
								if (((this->_cellWidths != null()))){
									HX_STACK_LINE(302)
									Float _g31 = ::Math_obj::min((this->_cellWidths->__Field(HX_CSTRING("length"),true) - (int)1),j);		HX_STACK_VAR(_g31,"_g31");
									HX_STACK_LINE(302)
									int _g4 = ::Math_obj::round(_g31);		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(302)
									Float _g5 = this->_cellWidths->__GetItem(_g4);		HX_STACK_VAR(_g5,"_g5");
									HX_STACK_LINE(302)
									Float _g6 = (this->_tableWidth * _g5);		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(302)
									_g7 = (Float(_g6) / Float((int)100));
								}
								else{
									HX_STACK_LINE(302)
									_g7 = wdth0;
								}
							}
							HX_STACK_LINE(302)
							int _g8 = ::Math_obj::ceil(_g7);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(302)
							int _g9 = ::Math_obj::round(_g8);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(302)
							wdth = _g9;
						}
						HX_STACK_LINE(304)
						::com::danielfreeman::extendedmadness::UICell cell = row->__get(j).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(cell,"cell");
						HX_STACK_LINE(305)
						cell->set_x(position);
						HX_STACK_LINE(306)
						cell->set_y(lastY);
						HX_STACK_LINE(307)
						cell->set_fixwidth(wdth);
						HX_STACK_LINE(308)
						cell->set_multiline((bool(this->_multiLine) || bool(colSpan)));
						HX_STACK_LINE(309)
						cell->set_wordWrap((bool(this->_wordWrap) || bool(colSpan)));
						HX_STACK_LINE(310)
						hx::AddEq(position,wdth);
						HX_STACK_LINE(311)
						if (((bool(this->_wordWrap) || bool(colSpan)))){
							HX_STACK_LINE(312)
							cell->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
						}
						HX_STACK_LINE(314)
						Float _g10 = cell->get_height();		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(314)
						if (((_g10 > maxHeight))){
							HX_STACK_LINE(315)
							Float _g11 = cell->get_height();		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(315)
							maxHeight = _g11;
						}
					}
				}
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(319)
					while((true)){
						HX_STACK_LINE(319)
						if ((!(((_g2 < row->length))))){
							HX_STACK_LINE(319)
							break;
						}
						HX_STACK_LINE(319)
						::com::danielfreeman::extendedmadness::UICell cell0 = row->__get(_g2).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(cell0,"cell0");
						HX_STACK_LINE(319)
						++(_g2);
						HX_STACK_LINE(320)
						cell0->set_fixheight(maxHeight);
					}
				}
				HX_STACK_LINE(322)
				hx::AddEq(lastY,maxHeight);
			}
		}
	}
return null();
}


Void UIFastDataGrid_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","layout",0xd5bb0ccc,"com.danielfreeman.extendedmadness.UIFastDataGrid.layout","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",327,0xb611510f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(328)
		this->super::layout(attributes);
		HX_STACK_LINE(329)
		this->_attributes = attributes;
		HX_STACK_LINE(330)
		this->set_x(attributes->x);
		HX_STACK_LINE(331)
		this->set_y(attributes->y);
		HX_STACK_LINE(332)
		if ((!(this->_fastLayout))){
			HX_STACK_LINE(333)
			this->doLayout();
		}
	}
return null();
}


int UIFastDataGrid_obj::get_numberOfRows( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","get_numberOfRows",0xc4231aa4,"com.danielfreeman.extendedmadness.UIFastDataGrid.get_numberOfRows","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",339,0xb611510f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(339)
	return this->_table->length;
}


int UIFastDataGrid_obj::yToRow( Float y){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","yToRow",0x85770a48,"com.danielfreeman.extendedmadness.UIFastDataGrid.yToRow","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",346,0xb611510f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(347)
	int result = (int)-1;		HX_STACK_VAR(result,"result");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIFastDataGrid_obj > __this,Float &y){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",348,0xb611510f)
			{
				HX_STACK_LINE(348)
				Float _g = __this->get_theHeight();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(348)
				return (y <= _g);
			}
			return null();
		}
	};
	HX_STACK_LINE(348)
	if (((  (((bool((this->_table->length > (int)0)) && bool((y > (int)0))))) ? bool(_Function_1_1::Block(this,y)) : bool(false) ))){
		HX_STACK_LINE(349)
		Float _g1 = this->get_theHeight();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(349)
		Float _g2 = (Float((this->_table->length * y)) / Float(_g1));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(349)
		int _g3 = ::Math_obj::round(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(349)
		Float _g4 = ::Math_obj::min(_g3,(this->_table->length - (int)1));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(349)
		int _g5 = ::Math_obj::round(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(349)
		result = _g5;
		HX_STACK_LINE(350)
		::com::danielfreeman::extendedmadness::UICell cell = this->_table->__get(result).StaticCast< Array< ::Dynamic > >()->__get((int)0).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(cell,"cell");
		HX_STACK_LINE(351)
		Float _g6 = cell->get_y();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(351)
		if (((y < _g6))){
			HX_STACK_LINE(352)
			(result)--;
			HX_STACK_LINE(353)
			while((true)){
				struct _Function_4_1{
					inline static bool Block( int &result,hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIFastDataGrid_obj > __this,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",353,0xb611510f)
						{
							HX_STACK_LINE(353)
							Float _g7 = __this->_table->__get(result).StaticCast< Array< ::Dynamic > >()->__get((int)0).StaticCast< ::com::danielfreeman::extendedmadness::UICell >()->get_y();		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(353)
							return (y < _g7);
						}
						return null();
					}
				};
				HX_STACK_LINE(353)
				if ((!(((  (((result >= (int)0))) ? bool(_Function_4_1::Block(result,this,y)) : bool(false) ))))){
					HX_STACK_LINE(353)
					break;
				}
				HX_STACK_LINE(354)
				(result)--;
			}
		}
		else{
			HX_STACK_LINE(357)
			Float _g8 = cell->get_y();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(357)
			Float _g9 = cell->get_height();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(357)
			Float _g10 = (_g8 + _g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(357)
			if (((y > _g10))){
				HX_STACK_LINE(358)
				(result)++;
				HX_STACK_LINE(359)
				while((true)){
					struct _Function_5_1{
						inline static bool Block( int &result,::com::danielfreeman::extendedmadness::UICell &cell,hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIFastDataGrid_obj > __this,Float &y){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",359,0xb611510f)
							{
								HX_STACK_LINE(359)
								Float _g11 = (cell = __this->_table->__get(result).StaticCast< Array< ::Dynamic > >()->__get((int)0).StaticCast< ::com::danielfreeman::extendedmadness::UICell >())->get_y();		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(359)
								Float _g12 = cell->get_height();		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(359)
								Float _g13 = (_g11 + _g12);		HX_STACK_VAR(_g13,"_g13");
								HX_STACK_LINE(359)
								return (y > _g13);
							}
							return null();
						}
					};
					HX_STACK_LINE(359)
					if ((!(((  (((result < this->_table->length))) ? bool(_Function_5_1::Block(result,cell,this,y)) : bool(false) ))))){
						HX_STACK_LINE(359)
						break;
					}
					HX_STACK_LINE(360)
					(result)++;
				}
			}
		}
	}
	HX_STACK_LINE(364)
	return result;
}


Float UIFastDataGrid_obj::set_textSize( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","set_textSize",0xab586f2d,"com.danielfreeman.extendedmadness.UIFastDataGrid.set_textSize","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",370,0xb611510f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(371)
	this->_dataStyle->size = value;
	HX_STACK_LINE(372)
	this->_headerStyle->size = value;
	HX_STACK_LINE(373)
	::openfl::text::TextFormat sizeFormat = ::openfl::text::TextFormat_obj::__new(null(),value,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(sizeFormat,"sizeFormat");
	HX_STACK_LINE(374)
	{
		HX_STACK_LINE(374)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(374)
		Array< ::Dynamic > _g1 = this->_table;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(374)
		while((true)){
			HX_STACK_LINE(374)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(374)
				break;
			}
			HX_STACK_LINE(374)
			Array< ::Dynamic > row = _g1->__get(_g).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(374)
			++(_g);
			HX_STACK_LINE(375)
			{
				HX_STACK_LINE(375)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(375)
				while((true)){
					HX_STACK_LINE(375)
					if ((!(((_g2 < row->length))))){
						HX_STACK_LINE(375)
						break;
					}
					HX_STACK_LINE(375)
					::com::danielfreeman::extendedmadness::UICell cell = row->__get(_g2).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(cell,"cell");
					HX_STACK_LINE(375)
					++(_g2);
					HX_STACK_LINE(376)
					cell->setTextFormat(sizeFormat,null(),null());
				}
			}
		}
	}
	HX_STACK_LINE(379)
	this->rejig();
	HX_STACK_LINE(380)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIFastDataGrid_obj,set_textSize,return )

Void UIFastDataGrid_obj::setData( Dynamic value,hx::Null< bool >  __o_includeHeader){
bool includeHeader = __o_includeHeader.Default(false);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","setData",0xecf7968a,"com.danielfreeman.extendedmadness.UIFastDataGrid.setData","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",387,0xb611510f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(includeHeader,"includeHeader")
{
		HX_STACK_LINE(387)
		if ((this->_newData)){
			HX_STACK_LINE(388)
			this->super::setData(value,includeHeader);
		}
		else{
			HX_STACK_LINE(391)
			this->_data = value;
			HX_STACK_LINE(392)
			if ((includeHeader)){
				HX_STACK_LINE(393)
				if ((!(this->_hasHeader))){
					HX_STACK_LINE(394)
					this->addHeaderToTable();
				}
			}
			else{
				HX_STACK_LINE(397)
				if ((this->_hasHeader)){
					HX_STACK_LINE(398)
					this->removeHeaderFromTable();
				}
			}
			HX_STACK_LINE(400)
			this->newDimensions((value->__Field(HX_CSTRING("length"),true) + ((  (((bool(!(includeHeader)) && bool(this->_hasHeader)))) ? int((int)1) : int((int)0) ))),(  (((value->__Field(HX_CSTRING("length"),true) > (int)0))) ? int(value->__GetItem((int)0)->__Field(HX_CSTRING("length"),true)) : int((int)0) ));
			HX_STACK_LINE(401)
			this->invalidate(false,includeHeader);
			HX_STACK_LINE(402)
			this->doLayout();
		}
	}
return null();
}


Dynamic UIFastDataGrid_obj::set_dataProvider( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","set_dataProvider",0x467f341a,"com.danielfreeman.extendedmadness.UIFastDataGrid.set_dataProvider","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",409,0xb611510f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(410)
	this->_data = value;
	HX_STACK_LINE(411)
	this->invalidate(null(),null());
	HX_STACK_LINE(412)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIFastDataGrid_obj,set_dataProvider,return )

Void UIFastDataGrid_obj::invalidate( hx::Null< bool >  __o_readGrid,hx::Null< bool >  __o_includeHeader){
bool readGrid = __o_readGrid.Default(false);
bool includeHeader = __o_includeHeader.Default(false);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","invalidate",0xeb53309d,"com.danielfreeman.extendedmadness.UIFastDataGrid.invalidate","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",418,0xb611510f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(readGrid,"readGrid")
	HX_STACK_ARG(includeHeader,"includeHeader")
{
		HX_STACK_LINE(419)
		int start;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(419)
		if (((bool(!(includeHeader)) && bool(this->_hasHeader)))){
			HX_STACK_LINE(419)
			start = (int)1;
		}
		else{
			HX_STACK_LINE(419)
			start = (int)0;
		}
		HX_STACK_LINE(420)
		bool header = (bool(includeHeader) && bool(this->_hasHeader));		HX_STACK_VAR(header,"header");
		HX_STACK_LINE(421)
		::openfl::text::TextFormat format;		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(421)
		if ((header)){
			HX_STACK_LINE(421)
			format = this->_headerStyle;
		}
		else{
			HX_STACK_LINE(421)
			format = this->_dataStyle;
		}
		HX_STACK_LINE(422)
		{
			HX_STACK_LINE(422)
			int _g1 = start;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(422)
			int _g = this->_table->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(422)
			while((true)){
				HX_STACK_LINE(422)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(422)
					break;
				}
				HX_STACK_LINE(422)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(423)
				Array< ::Dynamic > row = this->_table->__get(i).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(424)
				{
					HX_STACK_LINE(424)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(424)
					int _g2 = row->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(424)
					while((true)){
						HX_STACK_LINE(424)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(424)
							break;
						}
						HX_STACK_LINE(424)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(425)
						if ((readGrid)){
							HX_STACK_LINE(426)
							hx::IndexRef((this->_data->__GetItem((i - start))).mPtr,j) = row->__get(j).StaticCast< ::com::danielfreeman::extendedmadness::UICell >()->get_text();
						}
						else{
							HX_STACK_LINE(429)
							::String item = this->_data->__GetItem((i - start))->__GetItem(j);		HX_STACK_VAR(item,"item");
							HX_STACK_LINE(430)
							::com::danielfreeman::extendedmadness::UICell cell = row->__get(j).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(cell,"cell");
							HX_STACK_LINE(431)
							cell->setTextFormat(format,null(),null());
							HX_STACK_LINE(432)
							cell->set_defaultTextFormat(format);
							HX_STACK_LINE(433)
							cell->set_xmlText((  (((item != null()))) ? ::String(item) : ::String(HX_CSTRING("")) ));
							HX_STACK_LINE(434)
							cell->set_border((bool(!(header)) || bool(this->_headerLines)));
						}
					}
				}
				HX_STACK_LINE(437)
				format = this->_dataStyle;
				HX_STACK_LINE(438)
				header = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIFastDataGrid_obj,invalidate,(void))

Void UIFastDataGrid_obj::addColSpanPadding( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","addColSpanPadding",0x19a302e6,"com.danielfreeman.extendedmadness.UIFastDataGrid.addColSpanPadding","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",443,0xb611510f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(444)
		if (((bool((bool(!(this->_colSpan)) || bool((this->_columnWidths == null())))) || bool((this->_colSpanWidths == null()))))){
			HX_STACK_LINE(445)
			return null();
		}
		HX_STACK_LINE(447)
		Float sum = (int)0;		HX_STACK_VAR(sum,"sum");
		HX_STACK_LINE(448)
		Float maxWidth = (int)0;		HX_STACK_VAR(maxWidth,"maxWidth");
		HX_STACK_LINE(449)
		{
			HX_STACK_LINE(449)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(449)
			int _g = this->_columnWidths->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(449)
			while((true)){
				HX_STACK_LINE(449)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(449)
					break;
				}
				HX_STACK_LINE(449)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(450)
				Float rowWidth = (sum + this->_colSpanWidths->__get(i));		HX_STACK_VAR(rowWidth,"rowWidth");
				HX_STACK_LINE(451)
				if (((rowWidth > maxWidth))){
					HX_STACK_LINE(452)
					maxWidth = rowWidth;
				}
				HX_STACK_LINE(454)
				hx::AddEq(sum,this->_columnWidths->__get(i));
			}
		}
		HX_STACK_LINE(456)
		if (((maxWidth > sum))){
			HX_STACK_LINE(457)
			if ((!(this->_colSpanWrap))){
				HX_STACK_LINE(458)
				hx::AddEq(this->_columnWidths[(this->_columnWidths->length - (int)1)],(maxWidth - sum));
				HX_STACK_LINE(459)
				this->_fits = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIFastDataGrid_obj,addColSpanPadding,(void))

Void UIFastDataGrid_obj::initialiseColumnWidths( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","initialiseColumnWidths",0x4db9471c,"com.danielfreeman.extendedmadness.UIFastDataGrid.initialiseColumnWidths","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",465,0xb611510f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(466)
		int columns = this->_table->__get((int)0).StaticCast< Array< ::Dynamic > >()->length;		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(467)
		Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(467)
		this->_colSpanWidths = _g;
		HX_STACK_LINE(468)
		Array< Float > _g1 = Array_obj< Float >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(468)
		this->_columnWidths = _g1;
		HX_STACK_LINE(469)
		bool hasColSpans = false;		HX_STACK_VAR(hasColSpans,"hasColSpans");
		HX_STACK_LINE(470)
		{
			HX_STACK_LINE(470)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(470)
			int _g2 = this->_table->length;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(470)
			while((true)){
				HX_STACK_LINE(470)
				if ((!(((_g11 < _g2))))){
					HX_STACK_LINE(470)
					break;
				}
				HX_STACK_LINE(470)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(471)
				Array< ::Dynamic > row = this->_table->__get(i).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(472)
				if (((bool((bool(!(this->_colSpan)) || bool((row->length == columns)))) || bool((i < (row->length - (int)1)))))){
					HX_STACK_LINE(473)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(473)
					int _g21 = row->length;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(473)
					while((true)){
						HX_STACK_LINE(473)
						if ((!(((_g3 < _g21))))){
							HX_STACK_LINE(473)
							break;
						}
						HX_STACK_LINE(473)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(474)
						::com::danielfreeman::extendedmadness::UICell cell = row->__get(j).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(cell,"cell");
						HX_STACK_LINE(475)
						bool _g22 = cell->set_wordWrap(false);		HX_STACK_VAR(_g22,"_g22");
						HX_STACK_LINE(475)
						cell->set_multiline(_g22);
						HX_STACK_LINE(476)
						cell->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
						HX_STACK_LINE(477)
						Float _g31 = cell->get_width();		HX_STACK_VAR(_g31,"_g31");
						HX_STACK_LINE(477)
						if (((_g31 > this->_columnWidths->__get(j)))){
							HX_STACK_LINE(478)
							Float _g4 = cell->get_width();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(478)
							this->_columnWidths[j] = (_g4 + 1.0);
						}
					}
				}
				else{
					HX_STACK_LINE(483)
					int index = (row->length - (int)1);		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(484)
					::com::danielfreeman::extendedmadness::UICell lastCell = row->__get(index).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(lastCell,"lastCell");
					HX_STACK_LINE(485)
					bool _g5 = lastCell->set_wordWrap(false);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(485)
					lastCell->set_multiline(_g5);
					HX_STACK_LINE(486)
					lastCell->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
					HX_STACK_LINE(487)
					Float colSpanWidth = lastCell->get_width();		HX_STACK_VAR(colSpanWidth,"colSpanWidth");
					HX_STACK_LINE(488)
					if (((colSpanWidth > this->_colSpanWidths->__get(index)))){
						HX_STACK_LINE(489)
						this->_colSpanWidths[index] = colSpanWidth;
						HX_STACK_LINE(490)
						hasColSpans = true;
					}
				}
			}
		}
		HX_STACK_LINE(494)
		if ((!(hasColSpans))){
			HX_STACK_LINE(495)
			this->_colSpanWidths = null();
		}
	}
return null();
}


Void UIFastDataGrid_obj::compact( hx::Null< bool >  __o_padding){
bool padding = __o_padding.Default(false);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","compact",0x68790b41,"com.danielfreeman.extendedmadness.UIFastDataGrid.compact","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",502,0xb611510f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(padding,"padding")
{
		HX_STACK_LINE(503)
		this->_fits = false;
		HX_STACK_LINE(504)
		if (((this->_table->length > (int)0))){
			HX_STACK_LINE(505)
			this->initialiseColumnWidths();
			HX_STACK_LINE(506)
			if ((padding)){
				HX_STACK_LINE(507)
				Float sum = (int)0;		HX_STACK_VAR(sum,"sum");
				HX_STACK_LINE(508)
				{
					HX_STACK_LINE(508)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(508)
					Array< Float > _g1 = this->_columnWidths;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(508)
					while((true)){
						HX_STACK_LINE(508)
						if ((!(((_g < _g1->length))))){
							HX_STACK_LINE(508)
							break;
						}
						HX_STACK_LINE(508)
						Float width = _g1->__get(_g);		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(508)
						++(_g);
						HX_STACK_LINE(509)
						hx::AddEq(sum,width);
					}
				}
				HX_STACK_LINE(511)
				if (((sum < this->_tableWidth))){
					HX_STACK_LINE(512)
					this->_fits = true;
					HX_STACK_LINE(513)
					Float padEachCellBy = (Float(((this->_tableWidth - sum))) / Float(this->_columnWidths->length));		HX_STACK_VAR(padEachCellBy,"padEachCellBy");
					HX_STACK_LINE(514)
					{
						HX_STACK_LINE(514)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(514)
						int _g = this->_columnWidths->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(514)
						while((true)){
							HX_STACK_LINE(514)
							if ((!(((_g1 < _g))))){
								HX_STACK_LINE(514)
								break;
							}
							HX_STACK_LINE(514)
							int k = (_g1)++;		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(515)
							hx::AddEq(this->_columnWidths[k],padEachCellBy);
						}
					}
				}
				else{
					HX_STACK_LINE(518)
					if ((this->_wordWrap)){
						HX_STACK_LINE(519)
						int maxColumn = (int)-1;		HX_STACK_VAR(maxColumn,"maxColumn");
						HX_STACK_LINE(520)
						Float maxValue = (int)0;		HX_STACK_VAR(maxValue,"maxValue");
						HX_STACK_LINE(521)
						{
							HX_STACK_LINE(521)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(521)
							int _g = this->_columnWidths->length;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(521)
							while((true)){
								HX_STACK_LINE(521)
								if ((!(((_g1 < _g))))){
									HX_STACK_LINE(521)
									break;
								}
								HX_STACK_LINE(521)
								int l = (_g1)++;		HX_STACK_VAR(l,"l");
								HX_STACK_LINE(522)
								if (((this->_columnWidths->__get(l) > maxValue))){
									HX_STACK_LINE(523)
									maxColumn = l;
									HX_STACK_LINE(524)
									maxValue = this->_columnWidths->__get(l);
								}
							}
						}
						HX_STACK_LINE(527)
						Dynamic indexes = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(indexes,"indexes");
						HX_STACK_LINE(528)
						Float minValue = maxValue;		HX_STACK_VAR(minValue,"minValue");
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(529)
							int _g = this->_columnWidths->length;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(529)
							while((true)){
								HX_STACK_LINE(529)
								if ((!(((_g1 < _g))))){
									HX_STACK_LINE(529)
									break;
								}
								HX_STACK_LINE(529)
								int m = (_g1)++;		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(530)
								Float value = this->_columnWidths->__get(m);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(531)
								if ((((Float(value) / Float(maxValue)) > 0.7))){
									HX_STACK_LINE(532)
									indexes->__Field(HX_CSTRING("push"),true)(m);
									HX_STACK_LINE(533)
									if (((value < minValue))){
										HX_STACK_LINE(534)
										minValue = value;
									}
								}
							}
						}
						HX_STACK_LINE(538)
						Float reduction = (Float(((sum - this->_tableWidth))) / Float(indexes->__Field(HX_CSTRING("length"),true)));		HX_STACK_VAR(reduction,"reduction");
						HX_STACK_LINE(539)
						if ((((minValue - reduction) > 36.0))){
							HX_STACK_LINE(540)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(540)
							while((true)){
								HX_STACK_LINE(540)
								if ((!(((_g < indexes->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(540)
									break;
								}
								HX_STACK_LINE(540)
								Dynamic index = indexes->__GetItem(_g);		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(540)
								++(_g);
								HX_STACK_LINE(541)
								hx::SubEq(this->_columnWidths[index],reduction);
							}
						}
					}
				}
			}
			HX_STACK_LINE(546)
			this->addColSpanPadding();
			HX_STACK_LINE(547)
			this->rejig();
		}
	}
return null();
}


Float UIFastDataGrid_obj::rowPosition( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","rowPosition",0xb6050f81,"com.danielfreeman.extendedmadness.UIFastDataGrid.rowPosition","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",553,0xb611510f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(553)
	return this->_table->__get(value).StaticCast< Array< ::Dynamic > >()->__get((int)0).StaticCast< ::com::danielfreeman::extendedmadness::UICell >()->get_y();
}


Float UIFastDataGrid_obj::rowHeight( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","rowHeight",0x908090bf,"com.danielfreeman.extendedmadness.UIFastDataGrid.rowHeight","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",558,0xb611510f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(558)
	return this->_table->__get(value).StaticCast< Array< ::Dynamic > >()->__get((int)0).StaticCast< ::com::danielfreeman::extendedmadness::UICell >()->get_height();
}


Void UIFastDataGrid_obj::newDimensions( int rows,int columns){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIFastDataGrid","newDimensions",0xc9c954eb,"com.danielfreeman.extendedmadness.UIFastDataGrid.newDimensions","com/danielfreeman/extendedmadness/UIFastDataGrid.hx",564,0xb611510f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rows,"rows")
		HX_STACK_ARG(columns,"columns")
		HX_STACK_LINE(565)
		int oldRows = this->_table->length;		HX_STACK_VAR(oldRows,"oldRows");
		HX_STACK_LINE(566)
		int oldColumns;		HX_STACK_VAR(oldColumns,"oldColumns");
		HX_STACK_LINE(566)
		if (((this->_table->length > (int)0))){
			HX_STACK_LINE(566)
			oldColumns = this->_table->__get((int)0).StaticCast< Array< ::Dynamic > >()->length;
		}
		else{
			HX_STACK_LINE(566)
			oldColumns = (int)0;
		}
		HX_STACK_LINE(567)
		bool header = this->_hasHeader;		HX_STACK_VAR(header,"header");
		HX_STACK_LINE(568)
		if (((rows < oldRows))){
			HX_STACK_LINE(569)
			{
				HX_STACK_LINE(569)
				int _g = rows;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(569)
				while((true)){
					HX_STACK_LINE(569)
					if ((!(((_g < oldRows))))){
						HX_STACK_LINE(569)
						break;
					}
					HX_STACK_LINE(569)
					int r0 = (_g)++;		HX_STACK_VAR(r0,"r0");
					HX_STACK_LINE(570)
					Array< ::Dynamic > row0 = this->_table->__get(r0).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row0,"row0");
					HX_STACK_LINE(571)
					{
						HX_STACK_LINE(571)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(571)
						while((true)){
							HX_STACK_LINE(571)
							if ((!(((_g1 < row0->length))))){
								HX_STACK_LINE(571)
								break;
							}
							HX_STACK_LINE(571)
							::com::danielfreeman::extendedmadness::UICell cell = row0->__get(_g1).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(cell,"cell");
							HX_STACK_LINE(571)
							++(_g1);
							HX_STACK_LINE(572)
							this->removeCell(cell);
						}
					}
				}
			}
			HX_STACK_LINE(575)
			this->_table->splice(rows,(oldRows - rows));
		}
		HX_STACK_LINE(577)
		if (((columns < oldColumns))){
			HX_STACK_LINE(578)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(578)
			Array< ::Dynamic > _g1 = this->_table;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(578)
			while((true)){
				HX_STACK_LINE(578)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(578)
					break;
				}
				HX_STACK_LINE(578)
				Array< ::Dynamic > row1 = _g1->__get(_g).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row1,"row1");
				HX_STACK_LINE(578)
				++(_g);
				HX_STACK_LINE(579)
				if ((header)){
					HX_STACK_LINE(580)
					{
						HX_STACK_LINE(580)
						int _g2 = columns;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(580)
						while((true)){
							HX_STACK_LINE(580)
							if ((!(((_g2 < oldColumns))))){
								HX_STACK_LINE(580)
								break;
							}
							HX_STACK_LINE(580)
							int c0 = (_g2)++;		HX_STACK_VAR(c0,"c0");
							HX_STACK_LINE(581)
							this->removeCell(row1->__get(c0).StaticCast< ::com::danielfreeman::extendedmadness::UICell >());
						}
					}
					HX_STACK_LINE(583)
					header = false;
				}
				else{
					HX_STACK_LINE(586)
					int _g2 = columns;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(586)
					while((true)){
						HX_STACK_LINE(586)
						if ((!(((_g2 < oldColumns))))){
							HX_STACK_LINE(586)
							break;
						}
						HX_STACK_LINE(586)
						int c1 = (_g2)++;		HX_STACK_VAR(c1,"c1");
						HX_STACK_LINE(587)
						this->removeCell(row1->__get(c1).StaticCast< ::com::danielfreeman::extendedmadness::UICell >());
					}
				}
				HX_STACK_LINE(590)
				row1->splice(columns,(oldColumns - columns));
			}
		}
		HX_STACK_LINE(593)
		if (((rows > oldRows))){
			HX_STACK_LINE(594)
			int _g = oldRows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(594)
			while((true)){
				HX_STACK_LINE(594)
				if ((!(((_g < rows))))){
					HX_STACK_LINE(594)
					break;
				}
				HX_STACK_LINE(594)
				int r1 = (_g)++;		HX_STACK_VAR(r1,"r1");
				HX_STACK_LINE(595)
				Array< ::Dynamic > newRow = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(newRow,"newRow");
				HX_STACK_LINE(596)
				{
					HX_STACK_LINE(596)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(596)
					Float _g1 = ::Math_obj::min(columns,oldColumns);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(596)
					int _g11 = ::Math_obj::round(_g1);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(596)
					while((true)){
						HX_STACK_LINE(596)
						if ((!(((_g2 < _g11))))){
							HX_STACK_LINE(596)
							break;
						}
						HX_STACK_LINE(596)
						int c2 = (_g2)++;		HX_STACK_VAR(c2,"c2");
						HX_STACK_LINE(597)
						::com::danielfreeman::extendedmadness::UICell _g12 = this->newCell(this->_dataStyle);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(597)
						newRow->push(_g12);
					}
				}
				HX_STACK_LINE(599)
				this->_table->push(newRow);
			}
		}
		HX_STACK_LINE(602)
		if (((columns > oldColumns))){
			HX_STACK_LINE(603)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(603)
			Array< ::Dynamic > _g1 = this->_table;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(603)
			while((true)){
				HX_STACK_LINE(603)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(603)
					break;
				}
				HX_STACK_LINE(603)
				Array< ::Dynamic > row = _g1->__get(_g).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(603)
				++(_g);
				HX_STACK_LINE(604)
				if ((header)){
					HX_STACK_LINE(605)
					{
						HX_STACK_LINE(605)
						int _g2 = oldColumns;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(605)
						while((true)){
							HX_STACK_LINE(605)
							if ((!(((_g2 < columns))))){
								HX_STACK_LINE(605)
								break;
							}
							HX_STACK_LINE(605)
							int c3 = (_g2)++;		HX_STACK_VAR(c3,"c3");
							HX_STACK_LINE(606)
							::com::danielfreeman::extendedmadness::UICell _g21 = this->newCell(this->_headerStyle);		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(606)
							row->push(_g21);
						}
					}
					HX_STACK_LINE(608)
					header = false;
				}
				else{
					HX_STACK_LINE(611)
					int _g2 = oldColumns;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(611)
					while((true)){
						HX_STACK_LINE(611)
						if ((!(((_g2 < columns))))){
							HX_STACK_LINE(611)
							break;
						}
						HX_STACK_LINE(611)
						int c4 = (_g2)++;		HX_STACK_VAR(c4,"c4");
						HX_STACK_LINE(612)
						::com::danielfreeman::extendedmadness::UICell _g3 = this->newCell(this->_dataStyle);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(612)
						row->push(_g3);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIFastDataGrid_obj,newDimensions,(void))


UIFastDataGrid_obj::UIFastDataGrid_obj()
{
}

void UIFastDataGrid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIFastDataGrid);
	HX_MARK_MEMBER_NAME(_colSpan,"_colSpan");
	HX_MARK_MEMBER_NAME(_colSpanWrap,"_colSpanWrap");
	HX_MARK_MEMBER_NAME(_colSpanWidths,"_colSpanWidths");
	::com::danielfreeman::extendedmadness::UISimpleDataGrid_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIFastDataGrid_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_colSpan,"_colSpan");
	HX_VISIT_MEMBER_NAME(_colSpanWrap,"_colSpanWrap");
	HX_VISIT_MEMBER_NAME(_colSpanWidths,"_colSpanWidths");
	::com::danielfreeman::extendedmadness::UISimpleDataGrid_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIFastDataGrid_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"rejig") ) { return rejig_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		if (HX_FIELD_EQ(inName,"yToRow") ) { return yToRow_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setData") ) { return setData_dyn(); }
		if (HX_FIELD_EQ(inName,"compact") ) { return compact_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_colSpan") ) { return _colSpan; }
		if (HX_FIELD_EQ(inName,"swapRows") ) { return swapRows_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"makeTable") ) { return makeTable_dyn(); }
		if (HX_FIELD_EQ(inName,"shiftRows") ) { return shiftRows_dyn(); }
		if (HX_FIELD_EQ(inName,"insertRow") ) { return insertRow_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteRow") ) { return deleteRow_dyn(); }
		if (HX_FIELD_EQ(inName,"rowHeight") ) { return rowHeight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rowPosition") ) { return rowPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_colSpanWrap") ) { return _colSpanWrap; }
		if (HX_FIELD_EQ(inName,"set_textSize") ) { return set_textSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"newDimensions") ) { return newDimensions_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"calculateWidth") ) { return get_calculateWidth(); }
		if (HX_FIELD_EQ(inName,"_colSpanWidths") ) { return _colSpanWidths; }
		if (HX_FIELD_EQ(inName,"drawBackground") ) { return drawBackground_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_numberOfRows") ) { return get_numberOfRows_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dataProvider") ) { return set_dataProvider_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"addColSpanPadding") ) { return addColSpanPadding_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_calculateWidth") ) { return get_calculateWidth_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"calculateCustomWidths") ) { return calculateCustomWidths_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"initialiseColumnWidths") ) { return initialiseColumnWidths_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIFastDataGrid_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"textSize") ) { return set_textSize(inValue); }
		if (HX_FIELD_EQ(inName,"_colSpan") ) { _colSpan=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dataProvider") ) { return set_dataProvider(inValue); }
		if (HX_FIELD_EQ(inName,"_colSpanWrap") ) { _colSpanWrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_colSpanWidths") ) { _colSpanWidths=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIFastDataGrid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("calculateWidth"));
	outFields->push(HX_CSTRING("textSize"));
	outFields->push(HX_CSTRING("dataProvider"));
	outFields->push(HX_CSTRING("_colSpan"));
	outFields->push(HX_CSTRING("_colSpanWrap"));
	outFields->push(HX_CSTRING("_colSpanWidths"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(UIFastDataGrid_obj,_colSpan),HX_CSTRING("_colSpan")},
	{hx::fsBool,(int)offsetof(UIFastDataGrid_obj,_colSpanWrap),HX_CSTRING("_colSpanWrap")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(UIFastDataGrid_obj,_colSpanWidths),HX_CSTRING("_colSpanWidths")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_colSpan"),
	HX_CSTRING("_colSpanWrap"),
	HX_CSTRING("_colSpanWidths"),
	HX_CSTRING("calculateCustomWidths"),
	HX_CSTRING("drawBackground"),
	HX_CSTRING("makeTable"),
	HX_CSTRING("swapRows"),
	HX_CSTRING("shiftRows"),
	HX_CSTRING("insertRow"),
	HX_CSTRING("deleteRow"),
	HX_CSTRING("get_calculateWidth"),
	HX_CSTRING("rejig"),
	HX_CSTRING("layout"),
	HX_CSTRING("get_numberOfRows"),
	HX_CSTRING("yToRow"),
	HX_CSTRING("set_textSize"),
	HX_CSTRING("setData"),
	HX_CSTRING("set_dataProvider"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("addColSpanPadding"),
	HX_CSTRING("initialiseColumnWidths"),
	HX_CSTRING("compact"),
	HX_CSTRING("rowPosition"),
	HX_CSTRING("rowHeight"),
	HX_CSTRING("newDimensions"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIFastDataGrid_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIFastDataGrid_obj::__mClass,"__mClass");
};

#endif

Class UIFastDataGrid_obj::__mClass;

void UIFastDataGrid_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UIFastDataGrid"), hx::TCanCast< UIFastDataGrid_obj> ,sStaticFields,sMemberFields,
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

void UIFastDataGrid_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
