#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
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
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UICell
#include <com/danielfreeman/extendedmadness/UICell.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIFastDataGrid
#include <com/danielfreeman/extendedmadness/UIFastDataGrid.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_IComponentUI
#include <com/danielfreeman/madcomponents/IComponentUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
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
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void UISpecialDataGrid_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISpecialDataGrid","new",0x958d9d9b,"com.danielfreeman.extendedmadness.UISpecialDataGrid.new","com/danielfreeman/extendedmadness/UISpecialDataGrid.hx",44,0xf12ca578)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(49)
	this->_imageMarginV = (int)0;
	HX_STACK_LINE(48)
	this->_imageMarginH = (int)0;
	HX_STACK_LINE(54)
	if ((xml->has->resolve(HX_CSTRING("imageMarginH")))){
		HX_STACK_LINE(55)
		::String _g = xml->att->resolve(HX_CSTRING("imageMarginH"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(55)
		Float _g1 = ::Std_obj::parseFloat(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(55)
		this->_imageMarginH = _g1;
	}
	HX_STACK_LINE(57)
	if ((xml->has->resolve(HX_CSTRING("imageMarginV")))){
		HX_STACK_LINE(58)
		::String _g2 = xml->att->resolve(HX_CSTRING("imageMarginV"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(58)
		Float _g3 = ::Std_obj::parseFloat(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(58)
		this->_imageMarginV = _g3;
	}
	HX_STACK_LINE(60)
	super::__construct(screen,xml,attributes);
}
;
	return null();
}

//UISpecialDataGrid_obj::~UISpecialDataGrid_obj() { }

Dynamic UISpecialDataGrid_obj::__CreateEmpty() { return  new UISpecialDataGrid_obj; }
hx::ObjectPtr< UISpecialDataGrid_obj > UISpecialDataGrid_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UISpecialDataGrid_obj > result = new UISpecialDataGrid_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UISpecialDataGrid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UISpecialDataGrid_obj > result = new UISpecialDataGrid_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Float UISpecialDataGrid_obj::initialHeight( int rowIndex){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISpecialDataGrid","initialHeight",0x51db8c86,"com.danielfreeman.extendedmadness.UISpecialDataGrid.initialHeight","com/danielfreeman/extendedmadness/UISpecialDataGrid.hx",64,0xf12ca578)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rowIndex,"rowIndex")
	HX_STACK_LINE(65)
	if (((bool((this->_dataAndExtras == null())) || bool((this->_dataAndExtras->__Field(HX_CSTRING("length"),true) == (int)0))))){
		HX_STACK_LINE(66)
		return (int)0;
	}
	HX_STACK_LINE(68)
	Float result = (int)0;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(69)
	Dynamic extrasRow = this->_dataAndExtras->__GetItem(rowIndex);		HX_STACK_VAR(extrasRow,"extrasRow");
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		while((true)){
			HX_STACK_LINE(70)
			if ((!(((_g < extrasRow->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(70)
				break;
			}
			HX_STACK_LINE(70)
			Dynamic item = extrasRow->__GetItem(_g);		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(70)
			++(_g);
			HX_STACK_LINE(71)
			if ((::Std_obj::is(item,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(72)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(72)
				Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(72)
				_g2 = hx::TCastToArray(item);
				HX_STACK_LINE(72)
				while((true)){
					HX_STACK_LINE(72)
					if ((!(((_g1 < _g2->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(72)
						break;
					}
					HX_STACK_LINE(72)
					Dynamic node = _g2->__GetItem(_g1);		HX_STACK_VAR(node,"node");
					HX_STACK_LINE(72)
					++(_g1);
					HX_STACK_LINE(73)
					if (((node != null()))){
						HX_STACK_LINE(74)
						Float _g3 = ::Math_obj::max((((int)2 * this->_imageMarginV) + node->__Field(HX_CSTRING("height"),true)),result);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(74)
						result = _g3;
					}
				}
			}
			else{
				HX_STACK_LINE(78)
				if (((  (((item != null()))) ? bool(::Std_obj::is(item,hx::ClassOf< ::openfl::display::DisplayObject >())) : bool(false) ))){
					HX_STACK_LINE(79)
					Float _g1 = (hx::TCast< openfl::display::DisplayObject >::cast(item))->get_height();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(79)
					Float _g2 = (((int)2 * this->_imageMarginV) + _g1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(79)
					Float _g3 = ::Math_obj::max(_g2,result);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(79)
					result = _g3;
				}
			}
		}
	}
	HX_STACK_LINE(82)
	return result;
}


Void UISpecialDataGrid_obj::rejig( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISpecialDataGrid","rejig",0x97f54af0,"com.danielfreeman.extendedmadness.UISpecialDataGrid.rejig","com/danielfreeman/extendedmadness/UISpecialDataGrid.hx",86,0xf12ca578)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		this->super::rejig();
		HX_STACK_LINE(88)
		if (((bool((this->_dataAndExtras != null())) && bool((this->_dataAndExtras->__Field(HX_CSTRING("length"),true) == this->_table->length))))){
			HX_STACK_LINE(89)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(89)
			int _g = this->_table->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(89)
			while((true)){
				HX_STACK_LINE(89)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(89)
					break;
				}
				HX_STACK_LINE(89)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(90)
				Array< ::Dynamic > row = this->_table->__get(i).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(91)
				Dynamic extrasRow = this->_dataAndExtras->__GetItem(i);		HX_STACK_VAR(extrasRow,"extrasRow");
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(92)
					int _g2 = row->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(92)
					while((true)){
						HX_STACK_LINE(92)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(92)
							break;
						}
						HX_STACK_LINE(92)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(93)
						Dynamic item = extrasRow->__GetItem(j);		HX_STACK_VAR(item,"item");
						HX_STACK_LINE(94)
						if (((item != null()))){
							HX_STACK_LINE(95)
							::com::danielfreeman::extendedmadness::UICell cell = row->__get(j).StaticCast< ::com::danielfreeman::extendedmadness::UICell >();		HX_STACK_VAR(cell,"cell");
							HX_STACK_LINE(96)
							if ((::Std_obj::is(item,hx::ClassOf< Array<int> >()))){
								HX_STACK_LINE(97)
								Float _g4 = cell->get_x();		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(97)
								Float position = (_g4 + this->_imageMarginH);		HX_STACK_VAR(position,"position");
								HX_STACK_LINE(98)
								Float _g11 = cell->get_x();		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(98)
								Float _g21 = cell->get_width();		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(98)
								Float _g31 = (_g11 + _g21);		HX_STACK_VAR(_g31,"_g31");
								HX_STACK_LINE(98)
								Float _g41 = (_g31 - cell->getTextFormat(null(),null())->rightMargin);		HX_STACK_VAR(_g41,"_g41");
								HX_STACK_LINE(98)
								Float rightPosition = (_g41 + this->_imageMarginH);		HX_STACK_VAR(rightPosition,"rightPosition");
								struct _Function_7_1{
									inline static Dynamic Block( ::com::danielfreeman::extendedmadness::UICell &cell,Float &position,Float &rightPosition){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UISpecialDataGrid.hx",99,0xf12ca578)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UISpecialDataGrid.hx"),false);
											__result->Add(HX_CSTRING("lineNumber") , (int)99,false);
											__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.extendedmadness.UISpecialDataGrid"),false);
											__result->Add(HX_CSTRING("methodName") , HX_CSTRING("rejig"),false);
											__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(position).Add(HX_CSTRING("rightPosition=")).Add(rightPosition).Add(cell->getTextFormat(null(),null())->rightMargin)),false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(99)
								::haxe::Log_obj::trace(HX_CSTRING("position="),_Function_7_1::Block(cell,position,rightPosition));
								HX_STACK_LINE(100)
								{
									HX_STACK_LINE(100)
									int _g42 = (int)0;		HX_STACK_VAR(_g42,"_g42");
									HX_STACK_LINE(100)
									Dynamic _g5;		HX_STACK_VAR(_g5,"_g5");
									HX_STACK_LINE(100)
									_g5 = hx::TCastToArray(item);
									HX_STACK_LINE(100)
									while((true)){
										HX_STACK_LINE(100)
										if ((!(((_g42 < _g5->__Field(HX_CSTRING("length"),true)))))){
											HX_STACK_LINE(100)
											break;
										}
										HX_STACK_LINE(100)
										Dynamic node = _g5->__GetItem(_g42);		HX_STACK_VAR(node,"node");
										HX_STACK_LINE(100)
										++(_g42);
										struct _Function_9_1{
											inline static Dynamic Block( int &j,Float &position,Dynamic &node){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UISpecialDataGrid.hx",101,0xf12ca578)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UISpecialDataGrid.hx"),false);
													__result->Add(HX_CSTRING("lineNumber") , (int)101,false);
													__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.extendedmadness.UISpecialDataGrid"),false);
													__result->Add(HX_CSTRING("methodName") , HX_CSTRING("rejig"),false);
													__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(j).Add(node).Add(position)),false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(101)
										::haxe::Log_obj::trace(i,_Function_9_1::Block(j,position,node));
										HX_STACK_LINE(102)
										if (((node == null()))){
											HX_STACK_LINE(103)
											position = rightPosition;
										}
										else{
											HX_STACK_LINE(105)
											if ((::Std_obj::is(node,hx::ClassOf< ::openfl::display::DisplayObject >()))){
												HX_STACK_LINE(106)
												(hx::TCast< openfl::display::DisplayObject >::cast(node))->set_x(position);
												struct _Function_11_1{
													inline static Dynamic Block( Float &position){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UISpecialDataGrid.hx",106,0xf12ca578)
														{
															hx::Anon __result = hx::Anon_obj::Create();
															__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UISpecialDataGrid.hx"),false);
															__result->Add(HX_CSTRING("lineNumber") , (int)106,false);
															__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.extendedmadness.UISpecialDataGrid"),false);
															__result->Add(HX_CSTRING("methodName") , HX_CSTRING("rejig"),false);
															__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING(".x=")).Add(position)),false);
															return __result;
														}
														return null();
													}
												};
												HX_STACK_LINE(106)
												::haxe::Log_obj::trace(node,_Function_11_1::Block(position));
												HX_STACK_LINE(107)
												Float _g51 = cell->get_y();		HX_STACK_VAR(_g51,"_g51");
												HX_STACK_LINE(107)
												Float _g6 = (_g51 + this->_imageMarginV);		HX_STACK_VAR(_g6,"_g6");
												HX_STACK_LINE(107)
												(hx::TCast< openfl::display::DisplayObject >::cast(node))->set_y(_g6);
												HX_STACK_LINE(108)
												Float _g7 = (hx::TCast< openfl::display::DisplayObject >::cast(node))->get_width();		HX_STACK_VAR(_g7,"_g7");
												HX_STACK_LINE(108)
												Float _g8 = (_g7 + this->_imageMarginH);		HX_STACK_VAR(_g8,"_g8");
												HX_STACK_LINE(108)
												hx::AddEq(position,_g8);
											}
										}
									}
								}
							}
							else{
								HX_STACK_LINE(112)
								if ((::Std_obj::is(item,hx::ClassOf< ::openfl::display::DisplayObject >()))){
									struct _Function_8_1{
										inline static Dynamic Block( Dynamic &item){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UISpecialDataGrid.hx",113,0xf12ca578)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UISpecialDataGrid.hx"),false);
												__result->Add(HX_CSTRING("lineNumber") , (int)113,false);
												__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.extendedmadness.UISpecialDataGrid"),false);
												__result->Add(HX_CSTRING("methodName") , HX_CSTRING("rejig"),false);
												__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(item)),false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(113)
									::haxe::Log_obj::trace(HX_CSTRING("here!?"),_Function_8_1::Block(item));
									HX_STACK_LINE(114)
									Float _g9 = cell->get_x();		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(114)
									Float _g10 = (_g9 + this->_imageMarginH);		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(114)
									(hx::TCast< openfl::display::DisplayObject >::cast(item))->set_x(_g10);
									HX_STACK_LINE(115)
									Float _g11 = cell->get_y();		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(115)
									Float _g12 = (_g11 + this->_imageMarginV);		HX_STACK_VAR(_g12,"_g12");
									HX_STACK_LINE(115)
									(hx::TCast< openfl::display::DisplayObject >::cast(item))->set_y(_g12);
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}


Dynamic UISpecialDataGrid_obj::extractSpecialRow( Dynamic row){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISpecialDataGrid","extractSpecialRow",0x9c0c1c7d,"com.danielfreeman.extendedmadness.UISpecialDataGrid.extractSpecialRow","com/danielfreeman/extendedmadness/UISpecialDataGrid.hx",124,0xf12ca578)
	HX_STACK_THIS(this)
	HX_STACK_ARG(row,"row")
	HX_STACK_LINE(125)
	Dynamic resultRow = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(resultRow,"resultRow");
	HX_STACK_LINE(126)
	{
		HX_STACK_LINE(126)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(126)
		int _g = row->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(126)
		while((true)){
			HX_STACK_LINE(126)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(126)
				break;
			}
			HX_STACK_LINE(126)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(127)
			Dynamic item = row->__GetItem(i);		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(128)
			if ((::Std_obj::is(item,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(129)
				::String textPart = HX_CSTRING("");		HX_STACK_VAR(textPart,"textPart");
				HX_STACK_LINE(130)
				bool right = false;		HX_STACK_VAR(right,"right");
				HX_STACK_LINE(131)
				Float leftMargin = this->_imageMarginH;		HX_STACK_VAR(leftMargin,"leftMargin");
				HX_STACK_LINE(132)
				Float rightMargin = this->_imageMarginH;		HX_STACK_VAR(rightMargin,"rightMargin");
				HX_STACK_LINE(133)
				{
					HX_STACK_LINE(133)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(133)
					int _g2 = item->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(133)
					while((true)){
						HX_STACK_LINE(133)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(133)
							break;
						}
						HX_STACK_LINE(133)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(134)
						Dynamic node = item->__GetItem(j);		HX_STACK_VAR(node,"node");
						HX_STACK_LINE(135)
						if ((::Std_obj::is(node,hx::ClassOf< ::String >()))){
							HX_STACK_LINE(136)
							::String _g4 = ::Std_obj::string(node);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(136)
							textPart = _g4;
							HX_STACK_LINE(137)
							hx::IndexRef((item).mPtr,j) = null();
							HX_STACK_LINE(138)
							right = true;
						}
						else{
							HX_STACK_LINE(141)
							::openfl::display::DisplayObject nodeInstance;		HX_STACK_VAR(nodeInstance,"nodeInstance");
							HX_STACK_LINE(142)
							if ((::Std_obj::is(node,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(143)
								::openfl::display::BitmapData _g11 = ::Type_obj::createInstance(node,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)));		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(143)
								::openfl::display::Bitmap _g21 = ::openfl::display::Bitmap_obj::__new(_g11,null(),null());		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(143)
								hx::IndexRef((item).mPtr,j) = nodeInstance = _g21;
							}
							else{
								HX_STACK_LINE(146)
								nodeInstance = node;
							}
							HX_STACK_LINE(148)
							this->addChild(nodeInstance);
							HX_STACK_LINE(149)
							if ((right)){
								HX_STACK_LINE(150)
								Float _g31 = nodeInstance->get_width();		HX_STACK_VAR(_g31,"_g31");
								HX_STACK_LINE(150)
								Float _g4 = (_g31 + this->_imageMarginH);		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(150)
								hx::AddEq(rightMargin,_g4);
							}
							else{
								HX_STACK_LINE(153)
								Float _g5 = nodeInstance->get_width();		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(153)
								Float _g6 = (_g5 + this->_imageMarginH);		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(153)
								hx::AddEq(leftMargin,_g6);
							}
						}
					}
				}
				HX_STACK_LINE(157)
				::String _g7 = ::Std_obj::string(leftMargin);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(157)
				::String _g8 = (HX_CSTRING("<textformat leftmargin=\"") + _g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(157)
				::String _g9 = (_g8 + HX_CSTRING("\" rightmargin=\""));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(157)
				::String _g10 = ::Std_obj::string(rightMargin);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(157)
				::String _g11 = (_g9 + _g10);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(157)
				::String _g12 = (_g11 + HX_CSTRING("\">"));		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(157)
				::String _g13 = (_g12 + textPart);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(157)
				::String _g14 = (_g13 + HX_CSTRING("</textformat>"));		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(157)
				resultRow->__Field(HX_CSTRING("push"),true)(_g14);
			}
			else{
				HX_STACK_LINE(159)
				if (((  ((!(::Std_obj::is(item,hx::ClassOf< ::String >())))) ? bool(::Std_obj::is(item,hx::ClassOf< ::Float >())) : bool(true) ))){
					HX_STACK_LINE(160)
					::String _g15;		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(160)
					_g15 = hx::TCast< String >::cast(item);
					HX_STACK_LINE(160)
					resultRow->__Field(HX_CSTRING("push"),true)(_g15);
					HX_STACK_LINE(161)
					hx::IndexRef((row).mPtr,i) = null();
				}
				else{
					HX_STACK_LINE(163)
					if ((::Std_obj::is(item,hx::ClassOf< ::Class >()))){
						HX_STACK_LINE(164)
						resultRow->__Field(HX_CSTRING("push"),true)(null());
						HX_STACK_LINE(165)
						::openfl::display::BitmapData _g16 = ::Type_obj::createInstance(item,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)));		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(165)
						::openfl::display::Bitmap _g17 = hx::IndexRef((row).mPtr,i) = ::openfl::display::Bitmap_obj::__new(_g16,null(),null());		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(165)
						this->addChild(_g17);
					}
					else{
						HX_STACK_LINE(167)
						if (((item != null()))){
							HX_STACK_LINE(168)
							resultRow->__Field(HX_CSTRING("push"),true)(null());
							HX_STACK_LINE(169)
							::openfl::display::DisplayObject _g18;		HX_STACK_VAR(_g18,"_g18");
							HX_STACK_LINE(169)
							_g18 = hx::TCast< openfl::display::DisplayObject >::cast(item);
							HX_STACK_LINE(169)
							this->addChild(_g18);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(172)
	return resultRow;
}


HX_DEFINE_DYNAMIC_FUNC1(UISpecialDataGrid_obj,extractSpecialRow,return )

Dynamic UISpecialDataGrid_obj::extractSpecialData( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISpecialDataGrid","extractSpecialData",0xe5413267,"com.danielfreeman.extendedmadness.UISpecialDataGrid.extractSpecialData","com/danielfreeman/extendedmadness/UISpecialDataGrid.hx",176,0xf12ca578)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(177)
	Dynamic result = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(178)
	{
		HX_STACK_LINE(178)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(178)
		while((true)){
			HX_STACK_LINE(178)
			if ((!(((_g < value->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(178)
				break;
			}
			HX_STACK_LINE(178)
			Dynamic row = value->__GetItem(_g);		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(178)
			++(_g);
			HX_STACK_LINE(179)
			Dynamic _g1 = this->extractSpecialRow(row);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(179)
			result->__Field(HX_CSTRING("push"),true)(_g1);
		}
	}
	HX_STACK_LINE(181)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(UISpecialDataGrid_obj,extractSpecialData,return )

Dynamic UISpecialDataGrid_obj::set_data( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISpecialDataGrid","set_data",0x0ca8c80c,"com.danielfreeman.extendedmadness.UISpecialDataGrid.set_data","com/danielfreeman/extendedmadness/UISpecialDataGrid.hx",185,0xf12ca578)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(186)
	this->clearExtras();
	HX_STACK_LINE(187)
	this->_dataAndExtras = value;
	HX_STACK_LINE(188)
	Dynamic _g = this->extractSpecialData(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(188)
	this->setData(_g,null());
	HX_STACK_LINE(189)
	return value;
}


Dynamic UISpecialDataGrid_obj::set_headerAndData( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISpecialDataGrid","set_headerAndData",0x1b119072,"com.danielfreeman.extendedmadness.UISpecialDataGrid.set_headerAndData","com/danielfreeman/extendedmadness/UISpecialDataGrid.hx",193,0xf12ca578)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(194)
	this->clearExtras();
	HX_STACK_LINE(195)
	this->_dataAndExtras = value;
	HX_STACK_LINE(196)
	Dynamic _g = this->extractSpecialData(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(196)
	this->setData(_g,true);
	HX_STACK_LINE(197)
	return value;
}


Void UISpecialDataGrid_obj::clearExtrasRow( Dynamic row){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISpecialDataGrid","clearExtrasRow",0xbec0314f,"com.danielfreeman.extendedmadness.UISpecialDataGrid.clearExtrasRow","com/danielfreeman/extendedmadness/UISpecialDataGrid.hx",202,0xf12ca578)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_LINE(202)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(202)
		while((true)){
			HX_STACK_LINE(202)
			if ((!(((_g < row->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(202)
				break;
			}
			HX_STACK_LINE(202)
			Dynamic item = row->__GetItem(_g);		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(202)
			++(_g);
			HX_STACK_LINE(203)
			if ((::Std_obj::is(item,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(204)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(204)
				Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(204)
				_g2 = hx::TCastToArray(item);
				HX_STACK_LINE(204)
				while((true)){
					HX_STACK_LINE(204)
					if ((!(((_g1 < _g2->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(204)
						break;
					}
					HX_STACK_LINE(204)
					Dynamic node = _g2->__GetItem(_g1);		HX_STACK_VAR(node,"node");
					HX_STACK_LINE(204)
					++(_g1);
					HX_STACK_LINE(205)
					if (((  (((node != null()))) ? bool(::Std_obj::is(node,hx::ClassOf< ::openfl::display::DisplayObject >())) : bool(false) ))){
						HX_STACK_LINE(206)
						::openfl::display::DisplayObject _g3;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(206)
						_g3 = hx::TCast< openfl::display::DisplayObject >::cast(node);
						HX_STACK_LINE(206)
						(hx::TCast< openfl::display::DisplayObject >::cast(node))->get_parent()->removeChild(_g3);
					}
				}
			}
			else{
				HX_STACK_LINE(210)
				if (((  (((item != null()))) ? bool(::Std_obj::is(item,hx::ClassOf< ::openfl::display::DisplayObject >())) : bool(false) ))){
					HX_STACK_LINE(211)
					::openfl::display::DisplayObject _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(211)
					_g1 = hx::TCast< openfl::display::DisplayObject >::cast(item);
					HX_STACK_LINE(211)
					(hx::TCast< openfl::display::DisplayObject >::cast(item))->get_parent()->removeChild(_g1);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UISpecialDataGrid_obj,clearExtrasRow,(void))

Void UISpecialDataGrid_obj::clearExtras( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISpecialDataGrid","clearExtras",0x4003b18b,"com.danielfreeman.extendedmadness.UISpecialDataGrid.clearExtras","com/danielfreeman/extendedmadness/UISpecialDataGrid.hx",217,0xf12ca578)
		HX_STACK_THIS(this)
		HX_STACK_LINE(218)
		if (((this->_dataAndExtras != null()))){
			HX_STACK_LINE(219)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(219)
			Dynamic _g1 = this->_dataAndExtras;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(219)
			while((true)){
				HX_STACK_LINE(219)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(219)
					break;
				}
				HX_STACK_LINE(219)
				Dynamic row = _g1->__GetItem(_g);		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(219)
				++(_g);
				HX_STACK_LINE(220)
				this->clearExtrasRow(row);
			}
		}
		HX_STACK_LINE(223)
		this->_dataAndExtras = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UISpecialDataGrid_obj,clearExtras,(void))

Void UISpecialDataGrid_obj::clear( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISpecialDataGrid","clear",0xf98f4388,"com.danielfreeman.extendedmadness.UISpecialDataGrid.clear","com/danielfreeman/extendedmadness/UISpecialDataGrid.hx",227,0xf12ca578)
		HX_STACK_THIS(this)
		HX_STACK_LINE(228)
		this->super::clear();
		HX_STACK_LINE(229)
		this->clearExtras();
	}
return null();
}


Void UISpecialDataGrid_obj::copyColumns( ::openfl::display::Sprite destination,int n){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISpecialDataGrid","copyColumns",0x2e6029e3,"com.danielfreeman.extendedmadness.UISpecialDataGrid.copyColumns","com/danielfreeman/extendedmadness/UISpecialDataGrid.hx",234,0xf12ca578)
		HX_STACK_THIS(this)
		HX_STACK_ARG(destination,"destination")
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(234)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(234)
		Dynamic _g1 = this->_dataAndExtras;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(234)
		while((true)){
			HX_STACK_LINE(234)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(234)
				break;
			}
			HX_STACK_LINE(234)
			Dynamic row = _g1->__GetItem(_g);		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(234)
			++(_g);
			HX_STACK_LINE(235)
			{
				HX_STACK_LINE(235)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(235)
				while((true)){
					HX_STACK_LINE(235)
					if ((!(((_g2 < n))))){
						HX_STACK_LINE(235)
						break;
					}
					HX_STACK_LINE(235)
					int i = (_g2)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(236)
					Dynamic item = row->__GetItem(i);		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(237)
					if ((::Std_obj::is(item,hx::ClassOf< Array<int> >()))){
						HX_STACK_LINE(238)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(238)
						Dynamic _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(238)
						_g4 = hx::TCastToArray(item);
						HX_STACK_LINE(238)
						while((true)){
							HX_STACK_LINE(238)
							if ((!(((_g3 < _g4->__Field(HX_CSTRING("length"),true)))))){
								HX_STACK_LINE(238)
								break;
							}
							HX_STACK_LINE(238)
							Dynamic node = _g4->__GetItem(_g3);		HX_STACK_VAR(node,"node");
							HX_STACK_LINE(238)
							++(_g3);
							HX_STACK_LINE(239)
							if (((  (((node != null()))) ? bool(::Std_obj::is(node,hx::ClassOf< ::openfl::display::DisplayObject >())) : bool(false) ))){
								HX_STACK_LINE(240)
								::openfl::display::DisplayObject _g5;		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(240)
								_g5 = hx::TCast< openfl::display::DisplayObject >::cast(node);
								HX_STACK_LINE(240)
								destination->addChild(_g5);
							}
						}
					}
					else{
						HX_STACK_LINE(244)
						if (((  (((item != null()))) ? bool(::Std_obj::is(item,hx::ClassOf< ::openfl::display::DisplayObject >())) : bool(false) ))){
							HX_STACK_LINE(245)
							::openfl::display::DisplayObject _g11;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(245)
							_g11 = hx::TCast< openfl::display::DisplayObject >::cast(item);
							HX_STACK_LINE(245)
							destination->addChild(_g11);
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UISpecialDataGrid_obj,copyColumns,(void))

Void UISpecialDataGrid_obj::swapRows( int rowIndexA,int rowIndexB){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISpecialDataGrid","swapRows",0x1e57ee31,"com.danielfreeman.extendedmadness.UISpecialDataGrid.swapRows","com/danielfreeman/extendedmadness/UISpecialDataGrid.hx",255,0xf12ca578)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rowIndexA,"rowIndexA")
		HX_STACK_ARG(rowIndexB,"rowIndexB")
		HX_STACK_LINE(256)
		Dynamic rowA = this->_dataAndExtras->__GetItem(rowIndexA);		HX_STACK_VAR(rowA,"rowA");
		HX_STACK_LINE(257)
		Dynamic rowB = this->_dataAndExtras->__GetItem(rowIndexB);		HX_STACK_VAR(rowB,"rowB");
		HX_STACK_LINE(258)
		hx::IndexRef((this->_dataAndExtras).mPtr,rowIndexA) = rowB;
		HX_STACK_LINE(259)
		hx::IndexRef((this->_dataAndExtras).mPtr,rowIndexB) = rowA;
		HX_STACK_LINE(260)
		this->super::swapRows(rowIndexA,rowIndexB);
	}
return null();
}


Void UISpecialDataGrid_obj::shiftRows( int index,Float deltaHeight){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISpecialDataGrid","shiftRows",0xe22c6236,"com.danielfreeman.extendedmadness.UISpecialDataGrid.shiftRows","com/danielfreeman/extendedmadness/UISpecialDataGrid.hx",266,0xf12ca578)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(deltaHeight,"deltaHeight")
		HX_STACK_LINE(267)
		this->super::shiftRows(index,deltaHeight);
		HX_STACK_LINE(268)
		{
			HX_STACK_LINE(268)
			int _g1 = index;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(268)
			int _g = this->_dataAndExtras->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(268)
			while((true)){
				HX_STACK_LINE(268)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(268)
					break;
				}
				HX_STACK_LINE(268)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(269)
				Dynamic row = this->_dataAndExtras->__GetItem(i);		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(270)
				{
					HX_STACK_LINE(270)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(270)
					while((true)){
						HX_STACK_LINE(270)
						if ((!(((_g2 < row->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(270)
							break;
						}
						HX_STACK_LINE(270)
						Dynamic item = row->__GetItem(_g2);		HX_STACK_VAR(item,"item");
						HX_STACK_LINE(270)
						++(_g2);
						HX_STACK_LINE(271)
						if ((::Std_obj::is(item,hx::ClassOf< Array<int> >()))){
							HX_STACK_LINE(272)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(272)
							Dynamic _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(272)
							_g4 = hx::TCastToArray(item);
							HX_STACK_LINE(272)
							while((true)){
								HX_STACK_LINE(272)
								if ((!(((_g3 < _g4->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(272)
									break;
								}
								HX_STACK_LINE(272)
								Dynamic node = _g4->__GetItem(_g3);		HX_STACK_VAR(node,"node");
								HX_STACK_LINE(272)
								++(_g3);
								HX_STACK_LINE(273)
								if (((  (((node != null()))) ? bool(::Std_obj::is(node,hx::ClassOf< ::openfl::display::DisplayObject >())) : bool(false) ))){
									HX_STACK_LINE(274)
									hx::AddEq(node->__FieldRef(HX_CSTRING("y")),deltaHeight);
								}
							}
						}
						else{
							HX_STACK_LINE(278)
							if (((  (((item != null()))) ? bool(::Std_obj::is(item,hx::ClassOf< ::openfl::display::DisplayObject >())) : bool(false) ))){
								HX_STACK_LINE(279)
								hx::AddEq(item->__FieldRef(HX_CSTRING("y")),deltaHeight);
							}
						}
					}
				}
			}
		}
	}
return null();
}


Void UISpecialDataGrid_obj::insertRow( int rowIndex,Dynamic rowData){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISpecialDataGrid","insertRow",0x24fe4bdc,"com.danielfreeman.extendedmadness.UISpecialDataGrid.insertRow","com/danielfreeman/extendedmadness/UISpecialDataGrid.hx",288,0xf12ca578)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rowIndex,"rowIndex")
		HX_STACK_ARG(rowData,"rowData")
		HX_STACK_LINE(290)
		this->_dataAndExtras->__Field(HX_CSTRING("insert"),true)(rowIndex,rowData);
		HX_STACK_LINE(291)
		Dynamic _g = this->extractSpecialRow(rowData);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(291)
		this->super::insertRow(rowIndex,_g);
	}
return null();
}


Void UISpecialDataGrid_obj::deleteRow( int rowIndex){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UISpecialDataGrid","deleteRow",0xfd4df22a,"com.danielfreeman.extendedmadness.UISpecialDataGrid.deleteRow","com/danielfreeman/extendedmadness/UISpecialDataGrid.hx",297,0xf12ca578)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rowIndex,"rowIndex")
		HX_STACK_LINE(298)
		this->clearExtrasRow(this->_dataAndExtras->__GetItem(rowIndex));
		HX_STACK_LINE(299)
		this->_dataAndExtras->__Field(HX_CSTRING("splice"),true)(rowIndex,(int)1);
		HX_STACK_LINE(300)
		this->super::deleteRow(rowIndex);
	}
return null();
}



UISpecialDataGrid_obj::UISpecialDataGrid_obj()
{
}

void UISpecialDataGrid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UISpecialDataGrid);
	HX_MARK_MEMBER_NAME(_dataAndExtras,"_dataAndExtras");
	HX_MARK_MEMBER_NAME(_imageMarginH,"_imageMarginH");
	HX_MARK_MEMBER_NAME(_imageMarginV,"_imageMarginV");
	::com::danielfreeman::extendedmadness::UIFastDataGrid_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UISpecialDataGrid_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dataAndExtras,"_dataAndExtras");
	HX_VISIT_MEMBER_NAME(_imageMarginH,"_imageMarginH");
	HX_VISIT_MEMBER_NAME(_imageMarginV,"_imageMarginV");
	::com::danielfreeman::extendedmadness::UIFastDataGrid_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UISpecialDataGrid_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"rejig") ) { return rejig_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		if (HX_FIELD_EQ(inName,"swapRows") ) { return swapRows_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shiftRows") ) { return shiftRows_dyn(); }
		if (HX_FIELD_EQ(inName,"insertRow") ) { return insertRow_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteRow") ) { return deleteRow_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clearExtras") ) { return clearExtras_dyn(); }
		if (HX_FIELD_EQ(inName,"copyColumns") ) { return copyColumns_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_imageMarginH") ) { return _imageMarginH; }
		if (HX_FIELD_EQ(inName,"_imageMarginV") ) { return _imageMarginV; }
		if (HX_FIELD_EQ(inName,"initialHeight") ) { return initialHeight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_dataAndExtras") ) { return _dataAndExtras; }
		if (HX_FIELD_EQ(inName,"clearExtrasRow") ) { return clearExtrasRow_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"extractSpecialRow") ) { return extractSpecialRow_dyn(); }
		if (HX_FIELD_EQ(inName,"set_headerAndData") ) { return set_headerAndData_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"extractSpecialData") ) { return extractSpecialData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UISpecialDataGrid_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_imageMarginH") ) { _imageMarginH=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_imageMarginV") ) { _imageMarginV=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_dataAndExtras") ) { _dataAndExtras=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UISpecialDataGrid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_dataAndExtras"));
	outFields->push(HX_CSTRING("_imageMarginH"));
	outFields->push(HX_CSTRING("_imageMarginV"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UISpecialDataGrid_obj,_dataAndExtras),HX_CSTRING("_dataAndExtras")},
	{hx::fsFloat,(int)offsetof(UISpecialDataGrid_obj,_imageMarginH),HX_CSTRING("_imageMarginH")},
	{hx::fsFloat,(int)offsetof(UISpecialDataGrid_obj,_imageMarginV),HX_CSTRING("_imageMarginV")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_dataAndExtras"),
	HX_CSTRING("_imageMarginH"),
	HX_CSTRING("_imageMarginV"),
	HX_CSTRING("initialHeight"),
	HX_CSTRING("rejig"),
	HX_CSTRING("extractSpecialRow"),
	HX_CSTRING("extractSpecialData"),
	HX_CSTRING("set_data"),
	HX_CSTRING("set_headerAndData"),
	HX_CSTRING("clearExtrasRow"),
	HX_CSTRING("clearExtras"),
	HX_CSTRING("clear"),
	HX_CSTRING("copyColumns"),
	HX_CSTRING("swapRows"),
	HX_CSTRING("shiftRows"),
	HX_CSTRING("insertRow"),
	HX_CSTRING("deleteRow"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UISpecialDataGrid_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UISpecialDataGrid_obj::__mClass,"__mClass");
};

#endif

Class UISpecialDataGrid_obj::__mClass;

void UISpecialDataGrid_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UISpecialDataGrid"), hx::TCanCast< UISpecialDataGrid_obj> ,sStaticFields,sMemberFields,
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

void UISpecialDataGrid_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
