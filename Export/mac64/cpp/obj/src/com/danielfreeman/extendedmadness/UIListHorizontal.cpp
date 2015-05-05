#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
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
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIListHorizontal
#include <com/danielfreeman/extendedmadness/UIListHorizontal.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIInput
#include <com/danielfreeman/madcomponents/UIInput.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIList
#include <com/danielfreeman/madcomponents/UIList.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
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

Void UIListHorizontal_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","new",0xbb240a14,"com.danielfreeman.extendedmadness.UIListHorizontal.new","com/danielfreeman/extendedmadness/UIListHorizontal.hx",90,0x451a55f9)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(96)
	this->_rowWidth = (int)-1;
	HX_STACK_LINE(100)
	if ((xml->has->resolve(HX_CSTRING("rowWidth")))){
		HX_STACK_LINE(101)
		::String _g = xml->att->resolve(HX_CSTRING("rowWidth"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(101)
		Dynamic _g1 = ::Std_obj::parseInt(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(101)
		this->_rowWidth = _g1;
	}
	HX_STACK_LINE(103)
	this->_attributes = attributes;
	HX_STACK_LINE(104)
	this->initialiseRenderAttributes(xml,attributes);
	HX_STACK_LINE(105)
	super::__construct(screen,xml,attributes);
	HX_STACK_LINE(106)
	Float _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(106)
	if (((this->_search != null()))){
		HX_STACK_LINE(106)
		_g2 = this->_search->get_width();
	}
	else{
		HX_STACK_LINE(106)
		_g2 = 0.0;
	}
	HX_STACK_LINE(106)
	int _g3 = ::Math_obj::round(_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(106)
	this->_top = _g3;
}
;
	return null();
}

//UIListHorizontal_obj::~UIListHorizontal_obj() { }

Dynamic UIListHorizontal_obj::__CreateEmpty() { return  new UIListHorizontal_obj; }
hx::ObjectPtr< UIListHorizontal_obj > UIListHorizontal_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIListHorizontal_obj > result = new UIListHorizontal_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIListHorizontal_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIListHorizontal_obj > result = new UIListHorizontal_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

int UIListHorizontal_obj::set_index( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","set_index",0x20675c29,"com.danielfreeman.extendedmadness.UIListHorizontal.set_index","com/danielfreeman/extendedmadness/UIListHorizontal.hx",111,0x451a55f9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(112)
	this->_pressedCell = value;
	HX_STACK_LINE(113)
	Float _g = this->_slider->get_x();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(113)
	Float _g1 = (_g + (this->_rowWidth * value));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(113)
	if (((_g1 < 1024.))){
		HX_STACK_LINE(114)
		this->_endSlider = ((this->_rowWidth * value) - this->_offset);
		HX_STACK_LINE(115)
		if (((this->_endSlider > this->_maximumSlide))){
			HX_STACK_LINE(116)
			this->_endSlider = this->_maximumSlide;
		}
		HX_STACK_LINE(118)
		this->_moveTimer->start();
	}
	else{
		HX_STACK_LINE(121)
		this->set_scrollPositionX(((this->_rowWidth * value) - this->_offset));
	}
	HX_STACK_LINE(123)
	this->sliderMoved();
	HX_STACK_LINE(124)
	this->illuminate(value,false,null());
	HX_STACK_LINE(125)
	return value;
}


Void UIListHorizontal_obj::initDraw( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","initDraw",0xaa257500,"com.danielfreeman.extendedmadness.UIListHorizontal.initDraw","com/danielfreeman/extendedmadness/UIListHorizontal.hx",129,0x451a55f9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		Float _g = this->_rendererAttributes->get_paddingH();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(130)
		Float _g1 = ((int)2 * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(130)
		Float _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(130)
		_g2 = (((  (((this->_rowWidth > (int)0))) ? Float(this->_rowWidth) : Float(this->get_attributes()->width) )) - _g1);
		HX_STACK_LINE(130)
		this->_rendererAttributes->width = _g2;
		HX_STACK_LINE(131)
		this->_slider->get_graphics()->clear();
		HX_STACK_LINE(133)
		this->_cellTop = this->_top;
	}
return null();
}


Void UIListHorizontal_obj::autoLayout( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","autoLayout",0x7694e445,"com.danielfreeman.extendedmadness.UIListHorizontal.autoLayout","com/danielfreeman/extendedmadness/UIListHorizontal.hx",137,0x451a55f9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		Float _g = this->_attributes->get_paddingH();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(138)
		Float last = (this->_top + _g);		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(139)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(140)
			Dynamic _g11 = this->_filteredData;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(140)
			while((true)){
				HX_STACK_LINE(140)
				if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(140)
					break;
				}
				HX_STACK_LINE(140)
				Dynamic record = _g11->__GetItem(_g1);		HX_STACK_VAR(record,"record");
				HX_STACK_LINE(140)
				++(_g1);
				HX_STACK_LINE(141)
				::String _g12 = ::Std_obj::string(i);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(141)
				::String _g2 = (HX_CSTRING("label_") + _g12);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(141)
				Dynamic cell = this->_slider->getChildByName(_g2);		HX_STACK_VAR(cell,"cell");
				HX_STACK_LINE(142)
				if (((  (((cell != null()))) ? bool(::Std_obj::is(cell,hx::ClassOf< ::com::danielfreeman::madcomponents::UIForm >())) : bool(false) ))){
					HX_STACK_LINE(143)
					(hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(cell))->layout(this->_rendererAttributes);
					HX_STACK_LINE(144)
					cell->__FieldRef(HX_CSTRING("x")) = last;
					HX_STACK_LINE(145)
					hx::AddEq(last,this->_rendererAttributes->width);
					HX_STACK_LINE(146)
					this->drawCell(last,i,record);
					HX_STACK_LINE(147)
					Float _g3 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(147)
					hx::AddEq(last,_g3);
					HX_STACK_LINE(148)
					(i)++;
				}
			}
		}
	}
return null();
}


Void UIListHorizontal_obj::redrawCells( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","redrawCells",0x69279d8e,"com.danielfreeman.extendedmadness.UIListHorizontal.redrawCells","com/danielfreeman/extendedmadness/UIListHorizontal.hx",156,0x451a55f9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(157)
		this->initDraw();
		HX_STACK_LINE(158)
		Float cellWidth;		HX_STACK_VAR(cellWidth,"cellWidth");
		HX_STACK_LINE(158)
		if (((this->_rowWidth > (int)0))){
			HX_STACK_LINE(158)
			cellWidth = this->_rowWidth;
		}
		else{
			HX_STACK_LINE(158)
			cellWidth = this->_attributes->get_widthH();
		}
		HX_STACK_LINE(159)
		if ((!(this->_autoLayout))){
			HX_STACK_LINE(160)
			int l = (int)0;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(161)
			{
				HX_STACK_LINE(161)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(161)
				Dynamic _g1 = this->_filteredData;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(161)
				while((true)){
					HX_STACK_LINE(161)
					if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(161)
						break;
					}
					HX_STACK_LINE(161)
					Dynamic record = _g1->__GetItem(_g);		HX_STACK_VAR(record,"record");
					HX_STACK_LINE(161)
					++(_g);
					HX_STACK_LINE(162)
					Float _g2 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(162)
					Float _g11 = (((cellWidth * l) + this->_top) + _g2);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(162)
					this->drawCell(_g11,l,record);
					HX_STACK_LINE(163)
					(l)++;
				}
			}
		}
	}
return null();
}


Dynamic UIListHorizontal_obj::set_data0( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","set_data0",0x36dacfdd,"com.danielfreeman.extendedmadness.UIListHorizontal.set_data0","com/danielfreeman/extendedmadness/UIListHorizontal.hx",171,0x451a55f9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(172)
	this->clearCells();
	HX_STACK_LINE(173)
	this->initDraw();
	HX_STACK_LINE(174)
	if ((this->_simple)){
		HX_STACK_LINE(175)
		Float _g = this->_attributes->get_paddingH();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(175)
		Float _g1 = (this->_cellTop + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(175)
		this->simpleRenderers(value,_g1);
	}
	else{
		HX_STACK_LINE(178)
		Float _g2 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(178)
		Float _g3 = (this->_cellTop + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(178)
		this->customRenderers(value,_g3);
	}
	HX_STACK_LINE(180)
	if ((this->_autoLayout)){
		HX_STACK_LINE(181)
		this->doLayout();
	}
	HX_STACK_LINE(183)
	this->calculateMaximumSlide();
	HX_STACK_LINE(184)
	return value;
}


Void UIListHorizontal_obj::calculateMaximumSlide( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","calculateMaximumSlide",0xbb19126b,"com.danielfreeman.extendedmadness.UIListHorizontal.calculateMaximumSlide","com/danielfreeman/extendedmadness/UIListHorizontal.hx",190,0x451a55f9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(191)
		Float _g = this->_slider->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(191)
		this->_scrollerWidth = _g;
		HX_STACK_LINE(192)
		Float _g1 = this->_attributes->get_widthH();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(192)
		Float _g2 = (this->_scrollerWidth - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(192)
		this->_maximumSlide = _g2;
		HX_STACK_LINE(194)
		if (((this->_maximumSlide < (int)0))){
			HX_STACK_LINE(195)
			this->_maximumSlide = (int)0;
		}
	}
return null();
}


Void UIListHorizontal_obj::simpleRenderers( Dynamic value,hx::Null< Float >  __o_position){
Float position = __o_position.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","simpleRenderers",0x816992f2,"com.danielfreeman.extendedmadness.UIListHorizontal.simpleRenderers","com/danielfreeman/extendedmadness/UIListHorizontal.hx",202,0x451a55f9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(position,"position")
{
		HX_STACK_LINE(203)
		if (((position < (int)0))){
			HX_STACK_LINE(204)
			Float _g = this->_attributes->get_paddingH();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(204)
			position = _g;
			HX_STACK_LINE(204)
			this->_count = (int)0;
		}
		HX_STACK_LINE(206)
		::String _g1 = this->_attributes->get_textAlign();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(206)
		this->_textAlign = _g1;
		HX_STACK_LINE(207)
		{
			HX_STACK_LINE(207)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(207)
			while((true)){
				HX_STACK_LINE(207)
				if ((!(((_g < value->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(207)
					break;
				}
				HX_STACK_LINE(207)
				Dynamic record = value->__GetItem(_g);		HX_STACK_VAR(record,"record");
				HX_STACK_LINE(207)
				++(_g);
				HX_STACK_LINE(208)
				::com::danielfreeman::madcomponents::UILabel label = this->labelCell(record,position);		HX_STACK_VAR(label,"label");
				HX_STACK_LINE(209)
				Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(209)
				if ((::Reflect_obj::hasField(record,HX_CSTRING("_colour")))){
					HX_STACK_LINE(209)
					_g2 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(record->__Field(HX_CSTRING("_colour"),true));
				}
				else{
					HX_STACK_LINE(209)
					_g2 = (int)-1;
				}
				HX_STACK_LINE(209)
				this->drawCell(position,this->_count,_g2);
				HX_STACK_LINE(210)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(210)
				if (((this->_rowWidth > (int)0))){
					HX_STACK_LINE(210)
					_g3 = this->_rowWidth;
				}
				else{
					HX_STACK_LINE(210)
					_g3 = this->_attributes->get_widthH();
				}
				HX_STACK_LINE(210)
				hx::AddEq(position,_g3);
				HX_STACK_LINE(211)
				(this->_count)++;
			}
		}
	}
return null();
}


::com::danielfreeman::madcomponents::UILabel UIListHorizontal_obj::labelCell( Dynamic record,Float position){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","labelCell",0x8e6dde6a,"com.danielfreeman.extendedmadness.UIListHorizontal.labelCell","com/danielfreeman/extendedmadness/UIListHorizontal.hx",218,0x451a55f9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(record,"record")
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(219)
	::com::danielfreeman::madcomponents::UILabel label = this->super::labelCell(record,position);		HX_STACK_VAR(label,"label");
	HX_STACK_LINE(220)
	label->set_x(position);
	HX_STACK_LINE(221)
	Float _g = this->_attributes->get_paddingV();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(221)
	label->set_y(_g);
	HX_STACK_LINE(222)
	return label;
}


Void UIListHorizontal_obj::drawSimpleCell( Float position,int count,hx::Null< int >  __o_colour){
int colour = __o_colour.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","drawSimpleCell",0x492baae4,"com.danielfreeman.extendedmadness.UIListHorizontal.drawSimpleCell","com/danielfreeman/extendedmadness/UIListHorizontal.hx",228,0x451a55f9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_ARG(count,"count")
	HX_STACK_ARG(colour,"colour")
{
		HX_STACK_LINE(229)
		int _g = ::Math_obj::floor(position);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(229)
		position = _g;
		HX_STACK_LINE(230)
		Float cellWidth;		HX_STACK_VAR(cellWidth,"cellWidth");
		HX_STACK_LINE(230)
		if (((this->_rowWidth > (int)0))){
			HX_STACK_LINE(230)
			cellWidth = this->_rowWidth;
		}
		else{
			HX_STACK_LINE(230)
			cellWidth = this->_attributes->get_widthH();
		}
		HX_STACK_LINE(231)
		if (((bool((this->_colours->length > (int)1)) || bool((colour >= (int)0))))){
			HX_STACK_LINE(232)
			this->_slider->get_graphics()->beginFill((  (((colour >= (int)0))) ? int(colour) : int(this->_colours->__get((hx::Mod(count,((this->_colours->length - (int)1))) + (int)1))) ),null());
			HX_STACK_LINE(233)
			Float _g1 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(233)
			Float _g2 = (position - _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(233)
			Float _g3 = this->_attributes->get_heightV();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(233)
			this->_slider->get_graphics()->drawRect(_g2,(int)0,cellWidth,_g3);
		}
		HX_STACK_LINE(235)
		this->_slider->get_graphics()->beginFill((int)0,(int)0);
		HX_STACK_LINE(236)
		Float _g4 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(236)
		Float _g5 = (position - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(236)
		this->_slider->get_graphics()->drawRect(_g5,(int)0,cellWidth,(int)1);
		HX_STACK_LINE(237)
		int _g6 = ::Math_obj::ceil(position);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(237)
		this->_cellTop = _g6;
	}
return null();
}


::openfl::display::DisplayObject UIListHorizontal_obj::pressButton( hx::Null< bool >  __o_show){
bool show = __o_show.Default(true);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","pressButton",0xc6e83b89,"com.danielfreeman.extendedmadness.UIListHorizontal.pressButton","com/danielfreeman/extendedmadness/UIListHorizontal.hx",243,0x451a55f9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(show,"show")
{
		HX_STACK_LINE(244)
		this->_scrollBarLayer->get_graphics()->clear();
		HX_STACK_LINE(245)
		this->clearPressed();
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIListHorizontal_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIListHorizontal.hx",246,0x451a55f9)
				{
					HX_STACK_LINE(246)
					Float _g = __this->_slider->get_mouseX();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(246)
					return (_g < __this->_top);
				}
				return null();
			}
		};
		HX_STACK_LINE(246)
		if (((  ((!((!(this->_simple))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))){
			HX_STACK_LINE(247)
			this->doSearchHit();
		}
		HX_STACK_LINE(249)
		this->illuminate(null(),null(),null());
		HX_STACK_LINE(250)
		return this->_pressButton;
	}
}


Void UIListHorizontal_obj::illuminate( hx::Null< int >  __o_pressedCell,hx::Null< bool >  __o_dispatch,hx::Null< bool >  __o_show){
int pressedCell = __o_pressedCell.Default(-1);
bool dispatch = __o_dispatch.Default(true);
bool show = __o_show.Default(true);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","illuminate",0x0404bcb8,"com.danielfreeman.extendedmadness.UIListHorizontal.illuminate","com/danielfreeman/extendedmadness/UIListHorizontal.hx",255,0x451a55f9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pressedCell,"pressedCell")
	HX_STACK_ARG(dispatch,"dispatch")
	HX_STACK_ARG(show,"show")
{
		HX_STACK_LINE(255)
		if (((bool((this->_pressButton == null())) && bool(this->_clickRow)))){
			HX_STACK_LINE(256)
			Float highlightWidth;		HX_STACK_VAR(highlightWidth,"highlightWidth");
			HX_STACK_LINE(256)
			if (((this->_rowWidth > (int)0))){
				HX_STACK_LINE(256)
				highlightWidth = this->_rowWidth;
			}
			else{
				HX_STACK_LINE(256)
				highlightWidth = this->_attributes->get_widthH();
			}
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIListHorizontal_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIListHorizontal.hx",257,0x451a55f9)
					{
						HX_STACK_LINE(257)
						Float _g = __this->_slider->get_mouseY();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(257)
						return (_g > __this->_top);
					}
					return null();
				}
			};
			HX_STACK_LINE(257)
			if (((  (((bool(this->_autoLayout) && bool(!(this->_simple))))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(258)
				int _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(258)
				if (((pressedCell > (int)0))){
					HX_STACK_LINE(258)
					_g2 = pressedCell;
				}
				else{
					HX_STACK_LINE(258)
					Float _g1 = this->_slider->get_mouseX();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(258)
					_g2 = this->autoLayoutPressedCell(_g1);
				}
				HX_STACK_LINE(258)
				this->_pressedCell = _g2;
				HX_STACK_LINE(259)
				if (((bool((bool((this->_row != null())) && bool((this->_pressedCell >= (int)0)))) && bool((this->_pressedCell < this->_count))))){
					HX_STACK_LINE(260)
					if (((bool(show) && bool(this->_highlightPressed)))){
						HX_STACK_LINE(261)
						this->_highlight->get_graphics()->beginFill(::com::danielfreeman::madcomponents::UIList_obj::HIGHLIGHT,null());
						HX_STACK_LINE(262)
						Float _g3 = this->_row->get_x();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(262)
						Float _g4 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(262)
						Float _g5 = (_g3 - _g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(262)
						Float _g6 = (_g5 + (int)1);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(262)
						Float _g7 = this->_row->get_height();		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(262)
						Float _g8 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(262)
						Float _g9 = ((int)2 * _g8);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(262)
						Float _g10 = (_g7 + _g9);		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(262)
						Float _g11 = (_g10 - (int)1);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(262)
						this->_highlight->get_graphics()->drawRect(_g6,(int)0,highlightWidth,_g11);
					}
					HX_STACK_LINE(264)
					this->activate(dispatch);
				}
			}
			else{
				HX_STACK_LINE(268)
				int _g15;		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(268)
				if (((pressedCell > (int)0))){
					HX_STACK_LINE(268)
					_g15 = pressedCell;
				}
				else{
					HX_STACK_LINE(268)
					Float _g12 = this->_slider->get_mouseX();		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(268)
					Float _g13 = (_g12 - this->_top);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(268)
					Float _g14 = (Float(_g13) / Float(highlightWidth));		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(268)
					_g15 = ::Math_obj::floor(_g14);
				}
				HX_STACK_LINE(268)
				this->_pressedCell = _g15;
				HX_STACK_LINE(269)
				if (((bool((this->_pressedCell >= (int)0)) && bool((this->_pressedCell < this->_count))))){
					HX_STACK_LINE(270)
					if (((bool(show) && bool(this->_highlightPressed)))){
						HX_STACK_LINE(271)
						this->_highlight->get_graphics()->beginFill(::com::danielfreeman::madcomponents::UIList_obj::HIGHLIGHT,null());
						HX_STACK_LINE(272)
						Float _g16 = this->_attributes->get_heightV();		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(272)
						this->_highlight->get_graphics()->drawRect(((this->_top + (this->_pressedCell * highlightWidth)) + (int)1),(int)0,highlightWidth,_g16);
					}
					HX_STACK_LINE(274)
					this->activate(dispatch);
				}
			}
		}
	}
return null();
}


int UIListHorizontal_obj::autoLayoutPressedCell( Float x){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","autoLayoutPressedCell",0x8290d91f,"com.danielfreeman.extendedmadness.UIListHorizontal.autoLayoutPressedCell","com/danielfreeman/extendedmadness/UIListHorizontal.hx",283,0x451a55f9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(284)
	int n = (int)0;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(285)
	{
		HX_STACK_LINE(285)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(285)
		int _g = this->_slider->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(285)
		int _g2 = (_g - (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(285)
		while((true)){
			HX_STACK_LINE(285)
			if ((!(((_g1 < _g2))))){
				HX_STACK_LINE(285)
				break;
			}
			HX_STACK_LINE(285)
			int l = (_g1)++;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(286)
			Dynamic row = this->_slider->getChildAt((l + (int)1));		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(287)
			if (((  (((row != null()))) ? bool(::Std_obj::is(row,hx::ClassOf< ::com::danielfreeman::madcomponents::UIForm >())) : bool(false) ))){
				HX_STACK_LINE(288)
				::com::danielfreeman::madcomponents::UIForm _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(288)
				_g11 = hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(row);
				HX_STACK_LINE(288)
				this->_row = _g11;
				HX_STACK_LINE(289)
				Float _g21 = this->_row->get_x();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(289)
				Float _g3 = this->_row->get_width();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(289)
				Float _g4 = (_g21 + _g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(289)
				Float _g5 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(289)
				Float _g6 = (_g4 + _g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(289)
				if (((_g6 > x))){
					HX_STACK_LINE(290)
					return n;
				}
				HX_STACK_LINE(292)
				(n)++;
			}
		}
	}
	HX_STACK_LINE(294)
	return (int)-1;
}


Void UIListHorizontal_obj::customRenderers( Dynamic value,hx::Null< Float >  __o_position){
Float position = __o_position.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","customRenderers",0x803f2793,"com.danielfreeman.extendedmadness.UIListHorizontal.customRenderers","com/danielfreeman/extendedmadness/UIListHorizontal.hx",300,0x451a55f9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(position,"position")
{
		HX_STACK_LINE(301)
		if (((position < (int)0))){
			HX_STACK_LINE(302)
			Float _g = this->_attributes->get_paddingH();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(302)
			position = _g;
		}
		HX_STACK_LINE(304)
		this->_count = (int)0;
		HX_STACK_LINE(305)
		{
			HX_STACK_LINE(305)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(305)
			while((true)){
				HX_STACK_LINE(305)
				if ((!(((_g < value->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(305)
					break;
				}
				HX_STACK_LINE(305)
				Dynamic record = value->__GetItem(_g);		HX_STACK_VAR(record,"record");
				HX_STACK_LINE(305)
				++(_g);
				HX_STACK_LINE(306)
				this->customCell(record,position);
				HX_STACK_LINE(307)
				Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(307)
				if ((::Reflect_obj::hasField(record,HX_CSTRING("_colour")))){
					HX_STACK_LINE(307)
					_g1 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(record->__Field(HX_CSTRING("_colour"),true));
				}
				else{
					HX_STACK_LINE(307)
					_g1 = (int)-1;
				}
				HX_STACK_LINE(307)
				this->drawCell(position,this->_count,_g1);
				HX_STACK_LINE(308)
				Float _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(308)
				if (((this->_rowWidth > (int)0))){
					HX_STACK_LINE(308)
					_g2 = this->_rowWidth;
				}
				else{
					HX_STACK_LINE(308)
					_g2 = this->_attributes->get_widthH();
				}
				HX_STACK_LINE(308)
				hx::AddEq(position,_g2);
				HX_STACK_LINE(309)
				(this->_count)++;
			}
		}
	}
return null();
}


Void UIListHorizontal_obj::customCell( Dynamic record,Float position){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","customCell",0x517626bf,"com.danielfreeman.extendedmadness.UIListHorizontal.customCell","com/danielfreeman/extendedmadness/UIListHorizontal.hx",316,0x451a55f9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(record,"record")
		HX_STACK_ARG(position,"position")
		HX_STACK_LINE(317)
		::String _g = this->_renderer->get_name();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(317)
		if ((!(::com::danielfreeman::madcomponents::UI_obj::isForm(_g)))){
			HX_STACK_LINE(318)
			::String _g1 = this->_renderer->toXMLString();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(318)
			::String _g2 = (HX_CSTRING("<horizontal>") + _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(318)
			::String _g3 = (_g2 + HX_CSTRING("</horizontal>"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(318)
			::com::danielfreeman::MadXML _g4 = ::com::danielfreeman::MadXML_obj::parse(_g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(318)
			this->_renderer = _g4;
		}
		HX_STACK_LINE(320)
		::openfl::display::DisplayObject _g5 = this->newRow((  ((record->__Field(HX_CSTRING("__DOLLAR__renderer"),true))) ? ::com::danielfreeman::MadXML(record->__Field(HX_CSTRING("__DOLLAR__renderer"),true)) : ::com::danielfreeman::MadXML(this->_renderer) ));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(320)
		this->_cell = _g5;
		HX_STACK_LINE(321)
		this->_cell->__FieldRef(HX_CSTRING("x")) = position;
		HX_STACK_LINE(322)
		Float _g6 = this->_rendererAttributes->get_paddingV();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(322)
		this->_cell->__FieldRef(HX_CSTRING("y")) = _g6;
		HX_STACK_LINE(323)
		this->_cell->__FieldRef(HX_CSTRING("mouseChildren")) = false;
		HX_STACK_LINE(324)
		::String _g7 = ::Std_obj::string(this->_count);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(324)
		::String _g8 = (HX_CSTRING("label_") + _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(324)
		::String _g9 = (_g8 + this->_suffix);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(324)
		this->_cell->__FieldRef(HX_CSTRING("name")) = _g9;
		HX_STACK_LINE(325)
		this->fillInValues(this->_cell,record);
	}
return null();
}


Void UIListHorizontal_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","layout",0x640c7d76,"com.danielfreeman.extendedmadness.UIListHorizontal.layout","com/danielfreeman/extendedmadness/UIListHorizontal.hx",331,0x451a55f9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(332)
		Float attributesWidth = attributes->width;		HX_STACK_VAR(attributesWidth,"attributesWidth");
		HX_STACK_LINE(333)
		Float cellWidth;		HX_STACK_VAR(cellWidth,"cellWidth");
		HX_STACK_LINE(333)
		if (((this->_rowWidth > (int)0))){
			HX_STACK_LINE(333)
			cellWidth = this->_rowWidth;
		}
		else{
			HX_STACK_LINE(333)
			cellWidth = this->_attributes->get_widthH();
		}
		HX_STACK_LINE(334)
		attributes->width = cellWidth;
		HX_STACK_LINE(335)
		this->super::layout(attributes);
		HX_STACK_LINE(336)
		attributes->width = attributesWidth;
		HX_STACK_LINE(337)
		::openfl::geom::Rectangle _g = this->get_scrollRect();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(337)
		if (((_g != null()))){
			HX_STACK_LINE(338)
			Float _g1 = attributes->get_widthH();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(338)
			Float _g2 = attributes->get_heightV();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(338)
			::openfl::geom::Rectangle _g3 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,_g1,_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(338)
			this->set_scrollRect(_g3);
		}
		HX_STACK_LINE(340)
		this->calculateMaximumSlide();
	}
return null();
}


Void UIListHorizontal_obj::adjustMaximumSlide( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","adjustMaximumSlide",0xbac2fd2c,"com.danielfreeman.extendedmadness.UIListHorizontal.adjustMaximumSlide","com/danielfreeman/extendedmadness/UIListHorizontal.hx",351,0x451a55f9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(352)
		Float sliderWidth;		HX_STACK_VAR(sliderWidth,"sliderWidth");
		HX_STACK_LINE(352)
		if (((this->_scrollerWidth > (int)0))){
			HX_STACK_LINE(352)
			sliderWidth = (this->_scrollerWidth * this->_scale);
		}
		else{
			HX_STACK_LINE(352)
			sliderWidth = this->_slider->get_width();
		}
		HX_STACK_LINE(353)
		this->_maximumSlide = ((sliderWidth - this->_width) + (10.0 * ((  (((this->_border == HX_CSTRING("false")))) ? int((int)0) : int((int)1) ))));
		HX_STACK_LINE(354)
		if (((this->_maximumSlide < (int)0))){
			HX_STACK_LINE(355)
			this->_maximumSlide = (int)0;
		}
		HX_STACK_LINE(356)
		Float _g = this->_slider->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(356)
		if (((_g < -(this->_maximumSlide)))){
			HX_STACK_LINE(357)
			this->_slider->set_x(-(this->_maximumSlide));
		}
	}
return null();
}


Void UIListHorizontal_obj::mouseMove( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","mouseMove",0x300e148a,"com.danielfreeman.extendedmadness.UIListHorizontal.mouseMove","com/danielfreeman/extendedmadness/UIListHorizontal.hx",363,0x451a55f9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(364)
		if ((!(this->_noScroll))){
			HX_STACK_LINE(365)
			Float delta = -(this->get_sliderX());		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(366)
			{
				HX_STACK_LINE(366)
				::com::danielfreeman::extendedmadness::UIListHorizontal _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(366)
				Float _g1 = _g->get_sliderX();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(366)
				Float _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(366)
				if ((this->get_outsideSlideRangeX())){
					HX_STACK_LINE(366)
					_g11 = this->_dampen;
				}
				else{
					HX_STACK_LINE(366)
					_g11 = 1.0;
				}
				HX_STACK_LINE(366)
				Float _g2 = this->get_mouseX();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(366)
				Float _g3 = (_g2 - this->_lastMouse->x);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(366)
				Float _g4 = (_g11 * _g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(366)
				Float _g5 = (_g1 + _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(366)
				_g->set_sliderX(_g5);
			}
			HX_STACK_LINE(367)
			Float _g6 = this->get_sliderX();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(367)
			hx::AddEq(delta,_g6);
			HX_STACK_LINE(369)
			Float _g7 = ::Math_obj::abs(delta);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(369)
			if (((_g7 > 2.0))){
				HX_STACK_LINE(370)
				if ((((delta * this->_delta) > (int)0))){
					HX_STACK_LINE(371)
					this->_delta = ((0.5 * this->_delta) + (0.5 * delta));
				}
				else{
					HX_STACK_LINE(374)
					this->_delta = delta;
				}
				HX_STACK_LINE(376)
				this->_noSwipeCount = (int)0;
			}
			else{
				HX_STACK_LINE(378)
				int _g8 = ++(this->_noSwipeCount);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(378)
				if (((_g8 > (int)1))){
					HX_STACK_LINE(379)
					this->_delta = (int)0;
				}
			}
			HX_STACK_LINE(381)
			Float _g9 = this->get_mouseX();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(381)
			Float _g10 = (_g9 - this->_lastMouse->x);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(381)
			Float _g11 = ::Math_obj::abs(_g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(381)
			hx::AddEq(this->_distance,_g11);
			HX_STACK_LINE(382)
			Float _g12 = this->get_mouseX();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(382)
			this->_lastMouse->x = _g12;
			HX_STACK_LINE(383)
			Float _g13 = this->get_mouseY();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(383)
			this->_lastMouse->y = _g13;
		}
		HX_STACK_LINE(385)
		if (((bool(!(this->_noScroll)) && bool((this->_distance > 8.0))))){
			HX_STACK_LINE(386)
			this->showScrollBar();
		}
		else{
			HX_STACK_LINE(388)
			int _g14 = this->_touchTimer->get_currentCount();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(388)
			if (((  (((  (((_g14 == (int)3))) ? bool(this->_classic) : bool(false) ))) ? bool((this->_distance < 8.0)) : bool(false) ))){
				HX_STACK_LINE(389)
				this->pressButton(null());
			}
			else{
				HX_STACK_LINE(391)
				int _g15 = this->_touchTimer->get_currentCount();		HX_STACK_VAR(_g15,"_g15");
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIListHorizontal_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIListHorizontal.hx",391,0x451a55f9)
						{
							HX_STACK_LINE(391)
							Float _g16 = ::Math_obj::abs(__this->_delta);		HX_STACK_VAR(_g16,"_g16");
							HX_STACK_LINE(391)
							return (_g16 <= 2.0);
						}
						return null();
					}
				};
				HX_STACK_LINE(391)
				if (((  (((  (((_g15 == (int)8))) ? bool(!(this->_classic)) : bool(false) ))) ? bool(_Function_3_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(392)
					this->pressButton(null());
				}
			}
		}
	}
return null();
}


bool UIListHorizontal_obj::get_outsideSlideRangeX( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","get_outsideSlideRangeX",0x2afab6fc,"com.danielfreeman.extendedmadness.UIListHorizontal.get_outsideSlideRangeX","com/danielfreeman/extendedmadness/UIListHorizontal.hx",397,0x451a55f9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(398)
	Float _g = this->_slider->get_x();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(398)
	if ((!(((_g > (int)0))))){
		HX_STACK_LINE(398)
		Float _g1 = this->_slider->get_x();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(398)
		return (_g1 < -(this->_maximumSlide));
	}
	else{
		HX_STACK_LINE(398)
		return true;
	}
	HX_STACK_LINE(398)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(UIListHorizontal_obj,get_outsideSlideRangeX,return )

bool UIListHorizontal_obj::startMovement0( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","startMovement0",0xc0c94e2b,"com.danielfreeman.extendedmadness.UIListHorizontal.startMovement0","com/danielfreeman/extendedmadness/UIListHorizontal.hx",402,0x451a55f9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(403)
	Float _g = this->_slider->get_x();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(403)
	if (((_g > this->_offset))){
		HX_STACK_LINE(404)
		this->_endSlider = -(this->_offset);
		HX_STACK_LINE(405)
		return true;
	}
	else{
		HX_STACK_LINE(407)
		Float _g1 = this->_slider->get_x();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(407)
		if (((_g1 < -(this->_maximumSlide)))){
			HX_STACK_LINE(408)
			this->_endSlider = this->_maximumSlide;
			HX_STACK_LINE(409)
			return true;
		}
	}
	HX_STACK_LINE(411)
	return false;
}


Void UIListHorizontal_obj::movement( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","movement",0x63359efb,"com.danielfreeman.extendedmadness.UIListHorizontal.movement","com/danielfreeman/extendedmadness/UIListHorizontal.hx",419,0x451a55f9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(419)
		if (((this->_endSlider < ::com::danielfreeman::madcomponents::UIScrollVertical_obj::FINISHED))){
			HX_STACK_LINE(421)
			Float _g = this->deltaToDecay(this->_delta);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(421)
			hx::MultEq(this->_delta,_g);
			HX_STACK_LINE(422)
			Float _g1 = this->get_sliderX();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(422)
			Float _g2 = (_g1 + this->_delta);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(422)
			this->set_sliderX(_g2);
			HX_STACK_LINE(423)
			if (((this->_distance > 8.0))){
				HX_STACK_LINE(424)
				this->showScrollBar();
			}
			HX_STACK_LINE(426)
			Float _g3 = ::Math_obj::abs(this->_delta);		HX_STACK_VAR(_g3,"_g3");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIListHorizontal_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIListHorizontal.hx",426,0x451a55f9)
					{
						HX_STACK_LINE(426)
						Float _g4 = __this->get_sliderX();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(426)
						return (_g4 > (int)0);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UIListHorizontal_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIListHorizontal.hx",426,0x451a55f9)
					{
						HX_STACK_LINE(426)
						Float _g5 = __this->get_sliderX();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(426)
						return (_g5 < -(__this->_maximumSlide));
					}
					return null();
				}
			};
			HX_STACK_LINE(426)
			if (((  ((!(((  ((!(((_g3 < this->_deltaThreshold))))) ? bool(_Function_2_1::Block(this)) : bool(true) ))))) ? bool(_Function_2_2::Block(this)) : bool(true) ))){
				HX_STACK_LINE(427)
				if ((!(this->startMovement0()))){
					HX_STACK_LINE(428)
					this->stopMovement();
				}
			}
		}
		else{
			HX_STACK_LINE(432)
			Float _g6 = this->_slider->get_x();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(432)
			Float _g7 = (-(this->_endSlider) - _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(432)
			Float _g8 = (_g7 * ::com::danielfreeman::madcomponents::UIScrollVertical_obj::BOUNCE);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(432)
			this->_delta = _g8;
			HX_STACK_LINE(433)
			Float _g9 = this->get_sliderX();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(433)
			Float _g10 = (_g9 + this->_delta);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(433)
			this->set_sliderX(_g10);
			HX_STACK_LINE(434)
			this->showScrollBar();
			HX_STACK_LINE(435)
			Float _g11 = ::Math_obj::abs(this->_delta);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(435)
			if (((_g11 < this->_deltaThreshold))){
				HX_STACK_LINE(436)
				this->stopMovement();
				HX_STACK_LINE(437)
				this->set_sliderX(-(this->_endSlider));
			}
		}
	}
return null();
}


Void UIListHorizontal_obj::drawScrollBar( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","drawScrollBar",0x1e384dd6,"com.danielfreeman.extendedmadness.UIListHorizontal.drawScrollBar","com/danielfreeman/extendedmadness/UIListHorizontal.hx",445,0x451a55f9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(446)
		Float sliderWidth;		HX_STACK_VAR(sliderWidth,"sliderWidth");
		HX_STACK_LINE(446)
		if (((this->_scrollerWidth > (int)0))){
			HX_STACK_LINE(446)
			sliderWidth = (this->_scrollerWidth * this->_scale);
		}
		else{
			HX_STACK_LINE(446)
			sliderWidth = this->_slider->get_width();
		}
		HX_STACK_LINE(447)
		this->_scrollBarLayer->get_graphics()->clear();
		HX_STACK_LINE(448)
		Float barWidth = ((Float(this->_width) / Float(sliderWidth)) * this->_width);		HX_STACK_VAR(barWidth,"barWidth");
		HX_STACK_LINE(449)
		Float _g = -(this->_slider->get_x());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(449)
		Float _g1 = (Float(_g) / Float(sliderWidth));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(449)
		Float _g2 = (_g1 * this->_width);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(449)
		Float barPositionX = (_g2 + 4.);		HX_STACK_VAR(barPositionX,"barPositionX");
		HX_STACK_LINE(450)
		if (((barPositionX < 2.0))){
			HX_STACK_LINE(451)
			hx::AddEq(barWidth,barPositionX);
			HX_STACK_LINE(452)
			barPositionX = 2.0;
		}
		HX_STACK_LINE(454)
		if ((((barPositionX + barWidth) > (this->_width - 8.)))){
			HX_STACK_LINE(455)
			hx::SubEq(barWidth,(((barPositionX + barWidth) - this->_width) + 8.));
		}
		HX_STACK_LINE(457)
		if (((bool((barWidth > (int)0)) && bool((barPositionX >= (int)0))))){
			HX_STACK_LINE(458)
			this->_scrollBarLayer->get_graphics()->beginFill(this->_scrollBarColour,null());
			HX_STACK_LINE(459)
			this->_scrollBarLayer->get_graphics()->drawRoundRect(barPositionX,((this->_height - 5.0) - 2.0),barWidth,5.0,5.0,null());
		}
	}
return null();
}


Float UIListHorizontal_obj::set_sliderX( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","set_sliderX",0x417f0bee,"com.danielfreeman.extendedmadness.UIListHorizontal.set_sliderX","com/danielfreeman/extendedmadness/UIListHorizontal.hx",464,0x451a55f9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(465)
	Float _g = this->_slider->get_x();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(465)
	Float _g1 = (value - _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(465)
	Float _g2 = ::Math_obj::abs(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(465)
	if (((_g2 < 2048.0))){
		HX_STACK_LINE(466)
		this->_slider->set_x(value);
	}
	HX_STACK_LINE(468)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIListHorizontal_obj,set_sliderX,return )

Float UIListHorizontal_obj::get_sliderX( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","get_sliderX",0x371204e2,"com.danielfreeman.extendedmadness.UIListHorizontal.get_sliderX","com/danielfreeman/extendedmadness/UIListHorizontal.hx",473,0x451a55f9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(473)
	return this->_slider->get_x();
}


HX_DEFINE_DYNAMIC_FUNC0(UIListHorizontal_obj,get_sliderX,return )

Float UIListHorizontal_obj::set_scrollPositionX( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","set_scrollPositionX",0x36d6b599,"com.danielfreeman.extendedmadness.UIListHorizontal.set_scrollPositionX","com/danielfreeman/extendedmadness/UIListHorizontal.hx",479,0x451a55f9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(480)
	this->_slider->set_x(-(value));
	HX_STACK_LINE(481)
	if (((value > this->_maximumSlide))){
		HX_STACK_LINE(482)
		this->_slider->set_x(-(this->_maximumSlide));
	}
	HX_STACK_LINE(484)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIListHorizontal_obj,set_scrollPositionX,return )

Float UIListHorizontal_obj::get_scrollPositionX( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIListHorizontal","get_scrollPositionX",0xfa39c28d,"com.danielfreeman.extendedmadness.UIListHorizontal.get_scrollPositionX","com/danielfreeman/extendedmadness/UIListHorizontal.hx",489,0x451a55f9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(489)
	return -(this->_slider->get_x());
}


HX_DEFINE_DYNAMIC_FUNC0(UIListHorizontal_obj,get_scrollPositionX,return )

Float UIListHorizontal_obj::MINIMUM_BAR_WIDTH;


UIListHorizontal_obj::UIListHorizontal_obj()
{
}

Dynamic UIListHorizontal_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sliderX") ) { return get_sliderX(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"initDraw") ) { return initDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"movement") ) { return movement_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_rowWidth") ) { return _rowWidth; }
		if (HX_FIELD_EQ(inName,"set_index") ) { return set_index_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data0") ) { return set_data0_dyn(); }
		if (HX_FIELD_EQ(inName,"labelCell") ) { return labelCell_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseMove") ) { return mouseMove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoLayout") ) { return autoLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"illuminate") ) { return illuminate_dyn(); }
		if (HX_FIELD_EQ(inName,"customCell") ) { return customCell_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"redrawCells") ) { return redrawCells_dyn(); }
		if (HX_FIELD_EQ(inName,"pressButton") ) { return pressButton_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sliderX") ) { return set_sliderX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sliderX") ) { return get_sliderX_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawScrollBar") ) { return drawScrollBar_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"drawSimpleCell") ) { return drawSimpleCell_dyn(); }
		if (HX_FIELD_EQ(inName,"startMovement0") ) { return startMovement0_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"scrollPositionX") ) { return get_scrollPositionX(); }
		if (HX_FIELD_EQ(inName,"simpleRenderers") ) { return simpleRenderers_dyn(); }
		if (HX_FIELD_EQ(inName,"customRenderers") ) { return customRenderers_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"outsideSlideRangeX") ) { return get_outsideSlideRangeX(); }
		if (HX_FIELD_EQ(inName,"adjustMaximumSlide") ) { return adjustMaximumSlide_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_scrollPositionX") ) { return set_scrollPositionX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollPositionX") ) { return get_scrollPositionX_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"calculateMaximumSlide") ) { return calculateMaximumSlide_dyn(); }
		if (HX_FIELD_EQ(inName,"autoLayoutPressedCell") ) { return autoLayoutPressedCell_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_outsideSlideRangeX") ) { return get_outsideSlideRangeX_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIListHorizontal_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sliderX") ) { return set_sliderX(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_rowWidth") ) { _rowWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"scrollPositionX") ) { return set_scrollPositionX(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIListHorizontal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outsideSlideRangeX"));
	outFields->push(HX_CSTRING("sliderX"));
	outFields->push(HX_CSTRING("scrollPositionX"));
	outFields->push(HX_CSTRING("_rowWidth"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MINIMUM_BAR_WIDTH"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(UIListHorizontal_obj,_rowWidth),HX_CSTRING("_rowWidth")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_rowWidth"),
	HX_CSTRING("set_index"),
	HX_CSTRING("initDraw"),
	HX_CSTRING("autoLayout"),
	HX_CSTRING("redrawCells"),
	HX_CSTRING("set_data0"),
	HX_CSTRING("calculateMaximumSlide"),
	HX_CSTRING("simpleRenderers"),
	HX_CSTRING("labelCell"),
	HX_CSTRING("drawSimpleCell"),
	HX_CSTRING("pressButton"),
	HX_CSTRING("illuminate"),
	HX_CSTRING("autoLayoutPressedCell"),
	HX_CSTRING("customRenderers"),
	HX_CSTRING("customCell"),
	HX_CSTRING("layout"),
	HX_CSTRING("adjustMaximumSlide"),
	HX_CSTRING("mouseMove"),
	HX_CSTRING("get_outsideSlideRangeX"),
	HX_CSTRING("startMovement0"),
	HX_CSTRING("movement"),
	HX_CSTRING("drawScrollBar"),
	HX_CSTRING("set_sliderX"),
	HX_CSTRING("get_sliderX"),
	HX_CSTRING("set_scrollPositionX"),
	HX_CSTRING("get_scrollPositionX"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIListHorizontal_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIListHorizontal_obj::MINIMUM_BAR_WIDTH,"MINIMUM_BAR_WIDTH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIListHorizontal_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIListHorizontal_obj::MINIMUM_BAR_WIDTH,"MINIMUM_BAR_WIDTH");
};

#endif

Class UIListHorizontal_obj::__mClass;

void UIListHorizontal_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UIListHorizontal"), hx::TCanCast< UIListHorizontal_obj> ,sStaticFields,sMemberFields,
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

void UIListHorizontal_obj::__boot()
{
	MINIMUM_BAR_WIDTH= 16.0;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
