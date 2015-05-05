#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UITabButtonRow
#include <com/danielfreeman/extendedmadness/UITabButtonRow.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UITabPagesTop
#include <com/danielfreeman/extendedmadness/UITabPagesTop.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIPages
#include <com/danielfreeman/madcomponents/UIPages.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UITabPages
#include <com/danielfreeman/madcomponents/UITabPages.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
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

Void UITabPagesTop_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabPagesTop","new",0x87255bd8,"com.danielfreeman.extendedmadness.UITabPagesTop.new","com/danielfreeman/extendedmadness/UITabPagesTop.hx",59,0xe886a05b)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(67)
	this->_icons = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(66)
	this->_labels = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(65)
	this->_offFormat = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("_sans"),(int)14,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(64)
	this->_onFormat = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("_sans"),(int)14,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(72)
	bool _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(72)
	if ((xml->has->resolve(HX_CSTRING("alt")))){
		HX_STACK_LINE(72)
		::String _g = xml->att->resolve(HX_CSTRING("alt"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(72)
		_g1 = (_g == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(72)
		_g1 = false;
	}
	HX_STACK_LINE(72)
	this->_alt = _g1;
	HX_STACK_LINE(73)
	xml->setAttribute(HX_CSTRING("alt"),HX_CSTRING(""));
	HX_STACK_LINE(74)
	super::__construct(screen,xml,attributes);
	HX_STACK_LINE(75)
	{
		HX_STACK_LINE(75)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(75)
		Array< ::Dynamic > _g11 = this->_pages;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(75)
		while((true)){
			HX_STACK_LINE(75)
			if ((!(((_g < _g11->length))))){
				HX_STACK_LINE(75)
				break;
			}
			HX_STACK_LINE(75)
			::openfl::display::DisplayObject page = _g11->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(page,"page");
			HX_STACK_LINE(75)
			++(_g);
			HX_STACK_LINE(76)
			Float _g2 = this->_buttonBar->get_height();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(76)
			page->set_y(_g2);
		}
	}
	HX_STACK_LINE(78)
	Float _g3 = this->_buttonBar->get_height();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(78)
	this->_attributes->y = _g3;
	HX_STACK_LINE(79)
	if ((!(this->_alt))){
		HX_STACK_LINE(80)
		int _g4 = (hx::TCast< com::danielfreeman::extendedmadness::UITabButtonRow >::cast(this->_buttonBar))->get_offColour();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(80)
		this->_onFormat->color = _g4;
		HX_STACK_LINE(81)
		int _g5 = (hx::TCast< com::danielfreeman::extendedmadness::UITabButtonRow >::cast(this->_buttonBar))->get_onColour();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(81)
		this->_offFormat->color = _g5;
	}
}
;
	return null();
}

//UITabPagesTop_obj::~UITabPagesTop_obj() { }

Dynamic UITabPagesTop_obj::__CreateEmpty() { return  new UITabPagesTop_obj; }
hx::ObjectPtr< UITabPagesTop_obj > UITabPagesTop_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UITabPagesTop_obj > result = new UITabPagesTop_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UITabPagesTop_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UITabPagesTop_obj > result = new UITabPagesTop_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void UITabPagesTop_obj::initialiseButtonBar( ::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabPagesTop","initialiseButtonBar",0xa5f65c42,"com.danielfreeman.extendedmadness.UITabPagesTop.initialiseButtonBar","com/danielfreeman/extendedmadness/UITabPagesTop.hx",87,0xe886a05b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(87)
		if ((this->_alt)){
			HX_STACK_LINE(88)
			this->super::initialiseButtonBar(xml,attributes);
			HX_STACK_LINE(89)
			this->_buttonBar->set_y((int)0);
		}
		else{
			HX_STACK_LINE(92)
			::com::danielfreeman::madcomponents::Attributes _g = attributes->copy(null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(92)
			this->_pagesAttributes = _g;
			HX_STACK_LINE(93)
			::com::danielfreeman::extendedmadness::UITabButtonRow _g1 = ::com::danielfreeman::extendedmadness::UITabButtonRow_obj::__new(null(),xml,attributes);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(93)
			this->_buttonBar = _g1;
			HX_STACK_LINE(94)
			Float _g2 = this->_buttonBar->get_height();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(94)
			hx::SubEq(this->_pagesAttributes->height,_g2);
		}
	}
return null();
}


Void UITabPagesTop_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabPagesTop","mouseDown",0x8dde269f,"com.danielfreeman.extendedmadness.UITabPagesTop.mouseDown","com/danielfreeman/extendedmadness/UITabPagesTop.hx",100,0xe886a05b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(100)
		if ((this->_alt)){
			HX_STACK_LINE(101)
			this->super::mouseDown(event);
		}
		else{
			HX_STACK_LINE(103)
			(hx::TCast< com::danielfreeman::extendedmadness::UITabButtonRow >::cast(this->_buttonBar))->mouseDown();
		}
	}
return null();
}


Void UITabPagesTop_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabPagesTop","mouseUp",0x4e7b9b58,"com.danielfreeman.extendedmadness.UITabPagesTop.mouseUp","com/danielfreeman/extendedmadness/UITabPagesTop.hx",108,0xe886a05b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(108)
		if ((this->_alt)){
			HX_STACK_LINE(109)
			this->super::mouseUp(event);
		}
		else{
			HX_STACK_LINE(112)
			int oldPage = this->_page;		HX_STACK_VAR(oldPage,"oldPage");
			HX_STACK_LINE(113)
			int _g = (hx::TCast< com::danielfreeman::extendedmadness::UITabButtonRow >::cast(this->_buttonBar))->mouseUp();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(113)
			this->goToPage(_g,null());
			HX_STACK_LINE(114)
			this->changeColours(oldPage,this->_page);
		}
	}
return null();
}


Void UITabPagesTop_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabPagesTop","layout",0x5a819e32,"com.danielfreeman.extendedmadness.UITabPagesTop.layout","com/danielfreeman/extendedmadness/UITabPagesTop.hx",122,0xe886a05b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(123)
		::com::danielfreeman::madcomponents::Attributes _g = this->_attributes = attributes;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(123)
		this->_fullPageAttributes = _g;
		HX_STACK_LINE(124)
		if ((this->_alt)){
			HX_STACK_LINE(125)
			::com::danielfreeman::madcomponents::Attributes _g1 = attributes->copy(null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(125)
			this->_pagesAttributes = _g1;
			HX_STACK_LINE(126)
			this->super::layout(attributes);
			HX_STACK_LINE(127)
			this->_buttonBar->set_y((int)0);
		}
		else{
			HX_STACK_LINE(130)
			::com::danielfreeman::madcomponents::Attributes _g2 = attributes->copy(null(),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(130)
			this->_pagesAttributes = _g2;
			HX_STACK_LINE(131)
			Float _g3 = this->_buttonBar->get_height();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(131)
			hx::SubEq(this->_pagesAttributes->height,_g3);
			HX_STACK_LINE(132)
			Float _g4 = this->_buttonBar->get_height();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(132)
			Float _g5 = (_g4 + (int)1);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(132)
			this->_pagesAttributes->y = _g5;
			HX_STACK_LINE(133)
			this->superLayout(this->_pagesAttributes);
		}
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(135)
			Array< ::Dynamic > _g11 = this->_pages;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(135)
			while((true)){
				HX_STACK_LINE(135)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(135)
					break;
				}
				HX_STACK_LINE(135)
				::openfl::display::DisplayObject page = _g11->__get(_g1).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(page,"page");
				HX_STACK_LINE(135)
				++(_g1);
				HX_STACK_LINE(136)
				Float _g6 = this->_buttonBar->get_height();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(136)
				page->set_y(_g6);
			}
		}
		HX_STACK_LINE(138)
		if ((!(this->_alt))){
			HX_STACK_LINE(139)
			(hx::TCast< com::danielfreeman::extendedmadness::UITabButtonRow >::cast(this->_buttonBar))->layout(attributes);
		}
		HX_STACK_LINE(141)
		this->spacing();
		HX_STACK_LINE(142)
		::com::danielfreeman::madcomponents::Attributes _g7 = attributes->copy(null(),null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(142)
		this->_attributes = _g7;
		HX_STACK_LINE(143)
		Float _g8 = this->_buttonBar->get_height();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(143)
		this->_attributes->y = _g8;
		HX_STACK_LINE(144)
		if (((  (((this->_thisPage != null()))) ? bool(!(this->_buttonBar->get_visible())) : bool(false) ))){
			HX_STACK_LINE(145)
			this->_thisPage->set_y((int)0);
		}
	}
return null();
}


int UITabPagesTop_obj::set_pageNumber( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabPagesTop","set_pageNumber",0x608522bd,"com.danielfreeman.extendedmadness.UITabPagesTop.set_pageNumber","com/danielfreeman/extendedmadness/UITabPagesTop.hx",150,0xe886a05b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(151)
	(hx::TCast< com::danielfreeman::extendedmadness::UITabButtonRow >::cast(this->_buttonBar))->set_index(value);
	HX_STACK_LINE(152)
	this->super::goToPage(value,null());
	HX_STACK_LINE(153)
	return value;
}


Void UITabPagesTop_obj::setTab( int index,::String label,::Class imageClass){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabPagesTop","setTab",0x7138d75b,"com.danielfreeman.extendedmadness.UITabPagesTop.setTab","com/danielfreeman/extendedmadness/UITabPagesTop.hx",161,0xe886a05b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(label,"label")
		HX_STACK_ARG(imageClass,"imageClass")
		HX_STACK_LINE(161)
		if ((this->_alt)){
			HX_STACK_LINE(162)
			this->super::setTab(index,label,imageClass);
		}
		else{
			HX_STACK_LINE(165)
			Float buttonWidth = (Float(this->_attributes->width) / Float(this->_pages->length));		HX_STACK_VAR(buttonWidth,"buttonWidth");
			HX_STACK_LINE(166)
			if (((this->_labels->__get(index).StaticCast< ::com::danielfreeman::madcomponents::UILabel >() == null()))){
				HX_STACK_LINE(167)
				this->_labels[index] = ::com::danielfreeman::madcomponents::UILabel_obj::__new(this->_buttonBar,(int)0,(int)0,null(),null());
			}
			HX_STACK_LINE(169)
			::com::danielfreeman::madcomponents::UILabel uiLabel = this->_labels->__get(index).StaticCast< ::com::danielfreeman::madcomponents::UILabel >();		HX_STACK_VAR(uiLabel,"uiLabel");
			HX_STACK_LINE(170)
			uiLabel->set_defaultTextFormat((  (((index == this->_page))) ? ::openfl::text::TextFormat(this->_onFormat) : ::openfl::text::TextFormat(this->_offFormat) ));
			HX_STACK_LINE(171)
			uiLabel->set_text(label);
			HX_STACK_LINE(172)
			Float _g = uiLabel->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(172)
			Float _g1 = (buttonWidth - _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(172)
			Float _g2 = (Float(_g1) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(172)
			Float _g3 = ((index * buttonWidth) + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(172)
			uiLabel->set_x(_g3);
			HX_STACK_LINE(173)
			uiLabel->set_y(40.0);
			HX_STACK_LINE(175)
			if (((this->_icons->__get(index).StaticCast< ::openfl::display::Sprite >() != null()))){
				HX_STACK_LINE(176)
				this->_buttonBar->removeChild(this->_icons->__get(index).StaticCast< ::openfl::display::Sprite >());
			}
			HX_STACK_LINE(178)
			if (((imageClass != null()))){
				HX_STACK_LINE(179)
				::openfl::display::Sprite icon = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(icon,"icon");
				HX_STACK_LINE(180)
				if ((this->_pixelSnapping)){
					HX_STACK_LINE(181)
					Float _g4 = ::com::danielfreeman::madcomponents::UI_obj::get_scale();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(181)
					Float _g5 = (Float((int)1) / Float(_g4));		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(181)
					Float _g6 = icon->set_scaleY(_g5);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(181)
					icon->set_scaleX(_g6);
				}
				HX_STACK_LINE(183)
				this->_buttonBar->addChild(icon);
				HX_STACK_LINE(184)
				::openfl::display::BitmapData _g7 = ::Type_obj::createInstance(imageClass,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(184)
				::openfl::display::Bitmap iconBitmap = ::openfl::display::Bitmap_obj::__new(_g7,null(),null());		HX_STACK_VAR(iconBitmap,"iconBitmap");
				HX_STACK_LINE(185)
				iconBitmap->set_pixelSnapping((  ((this->_pixelSnapping)) ? ::openfl::display::PixelSnapping(::openfl::display::PixelSnapping_obj::ALWAYS) : ::openfl::display::PixelSnapping(::openfl::display::PixelSnapping_obj::NEVER) ));
				HX_STACK_LINE(186)
				icon->addChild(iconBitmap);
				HX_STACK_LINE(187)
				this->_icons[index] = icon;
				HX_STACK_LINE(188)
				icon->set_y(8.0);
				HX_STACK_LINE(189)
				Float _g8 = icon->get_width();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(189)
				Float _g9 = (buttonWidth - _g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(189)
				Float _g10 = (Float(_g9) / Float((int)2));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(189)
				Float _g11 = ((index * buttonWidth) + _g10);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(189)
				icon->set_x(_g11);
			}
			HX_STACK_LINE(192)
			if (((index == this->_page))){
				HX_STACK_LINE(193)
				this->changeColours((int)-1,index);
			}
		}
	}
return null();
}


Void UITabPagesTop_obj::spacing( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabPagesTop","spacing",0x1fc3dafb,"com.danielfreeman.extendedmadness.UITabPagesTop.spacing","com/danielfreeman/extendedmadness/UITabPagesTop.hx",199,0xe886a05b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(200)
		Float buttonWidth = (Float(this->_attributes->width) / Float(this->_pages->length));		HX_STACK_VAR(buttonWidth,"buttonWidth");
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(201)
			int _g = this->_labels->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(201)
			while((true)){
				HX_STACK_LINE(201)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(201)
					break;
				}
				HX_STACK_LINE(201)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(202)
				::com::danielfreeman::madcomponents::UILabel uiLabel = this->_labels->__get(i).StaticCast< ::com::danielfreeman::madcomponents::UILabel >();		HX_STACK_VAR(uiLabel,"uiLabel");
				HX_STACK_LINE(203)
				if (((uiLabel != null()))){
					HX_STACK_LINE(204)
					Float _g2 = uiLabel->get_width();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(204)
					Float _g11 = (buttonWidth - _g2);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(204)
					Float _g21 = (Float(_g11) / Float((int)2));		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(204)
					Float _g3 = ((i * buttonWidth) + _g21);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(204)
					uiLabel->set_x(_g3);
				}
			}
		}
		HX_STACK_LINE(207)
		{
			HX_STACK_LINE(207)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(207)
			int _g = this->_icons->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(207)
			while((true)){
				HX_STACK_LINE(207)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(207)
					break;
				}
				HX_STACK_LINE(207)
				int j = (_g1)++;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(208)
				::openfl::display::Sprite icon = this->_icons->__get(j).StaticCast< ::openfl::display::Sprite >();		HX_STACK_VAR(icon,"icon");
				HX_STACK_LINE(209)
				if (((icon != null()))){
					HX_STACK_LINE(210)
					Float _g4 = icon->get_width();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(210)
					Float _g5 = (buttonWidth - _g4);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(210)
					Float _g6 = (Float(_g5) / Float((int)2));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(210)
					Float _g7 = ((j * buttonWidth) + _g6);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(210)
					icon->set_x(_g7);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UITabPagesTop_obj,spacing,(void))

Void UITabPagesTop_obj::changeColours( int oldIndex,int newIndex){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UITabPagesTop","changeColours",0x12ccb08f,"com.danielfreeman.extendedmadness.UITabPagesTop.changeColours","com/danielfreeman/extendedmadness/UITabPagesTop.hx",216,0xe886a05b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(oldIndex,"oldIndex")
		HX_STACK_ARG(newIndex,"newIndex")
		HX_STACK_LINE(217)
		if (((bool((oldIndex >= (int)0)) && bool((this->_labels->__get(oldIndex).StaticCast< ::com::danielfreeman::madcomponents::UILabel >() != null()))))){
			HX_STACK_LINE(218)
			(hx::TCast< com::danielfreeman::madcomponents::UILabel >::cast(this->_labels->__get(oldIndex).StaticCast< ::com::danielfreeman::madcomponents::UILabel >()))->setTextFormat(this->_offFormat,null(),null());
		}
		HX_STACK_LINE(220)
		if (((bool((oldIndex >= (int)0)) && bool((this->_icons->__get(oldIndex).StaticCast< ::openfl::display::Sprite >() != null()))))){
			HX_STACK_LINE(221)
			::openfl::geom::ColorTransform _g = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(221)
			(hx::TCast< openfl::display::Sprite >::cast(this->_icons->__get(oldIndex).StaticCast< ::openfl::display::Sprite >()))->get_transform()->set_colorTransform(_g);
		}
		HX_STACK_LINE(223)
		if (((this->_labels->__get(newIndex).StaticCast< ::com::danielfreeman::madcomponents::UILabel >() != null()))){
			HX_STACK_LINE(224)
			(hx::TCast< com::danielfreeman::madcomponents::UILabel >::cast(this->_labels->__get(newIndex).StaticCast< ::com::danielfreeman::madcomponents::UILabel >()))->setTextFormat(this->_onFormat,null(),null());
		}
		HX_STACK_LINE(226)
		if (((this->_icons->__get(newIndex).StaticCast< ::openfl::display::Sprite >() != null()))){
			HX_STACK_LINE(227)
			::openfl::geom::ColorTransform colourTransform = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(colourTransform,"colourTransform");
			HX_STACK_LINE(228)
			int _g1 = (hx::TCast< com::danielfreeman::extendedmadness::UITabButtonRow >::cast(this->_buttonBar))->get_offColour();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(228)
			colourTransform->set_color(_g1);
			HX_STACK_LINE(229)
			(hx::TCast< openfl::display::Sprite >::cast(this->_icons->__get(newIndex).StaticCast< ::openfl::display::Sprite >()))->get_transform()->set_colorTransform(colourTransform);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UITabPagesTop_obj,changeColours,(void))

Float UITabPagesTop_obj::LABEL_Y;

Float UITabPagesTop_obj::ICON_Y;


UITabPagesTop_obj::UITabPagesTop_obj()
{
}

void UITabPagesTop_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UITabPagesTop);
	HX_MARK_MEMBER_NAME(_onFormat,"_onFormat");
	HX_MARK_MEMBER_NAME(_offFormat,"_offFormat");
	HX_MARK_MEMBER_NAME(_labels,"_labels");
	HX_MARK_MEMBER_NAME(_icons,"_icons");
	::com::danielfreeman::madcomponents::UITabPages_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UITabPagesTop_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_onFormat,"_onFormat");
	HX_VISIT_MEMBER_NAME(_offFormat,"_offFormat");
	HX_VISIT_MEMBER_NAME(_labels,"_labels");
	HX_VISIT_MEMBER_NAME(_icons,"_icons");
	::com::danielfreeman::madcomponents::UITabPages_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UITabPagesTop_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_icons") ) { return _icons; }
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		if (HX_FIELD_EQ(inName,"setTab") ) { return setTab_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_labels") ) { return _labels; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"spacing") ) { return spacing_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_onFormat") ) { return _onFormat; }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_offFormat") ) { return _offFormat; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"changeColours") ) { return changeColours_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_pageNumber") ) { return set_pageNumber_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"initialiseButtonBar") ) { return initialiseButtonBar_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UITabPagesTop_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_icons") ) { _icons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_labels") ) { _labels=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_onFormat") ) { _onFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_offFormat") ) { _offFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UITabPagesTop_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_onFormat"));
	outFields->push(HX_CSTRING("_offFormat"));
	outFields->push(HX_CSTRING("_labels"));
	outFields->push(HX_CSTRING("_icons"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LABEL_Y"),
	HX_CSTRING("ICON_Y"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UITabPagesTop_obj,_onFormat),HX_CSTRING("_onFormat")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UITabPagesTop_obj,_offFormat),HX_CSTRING("_offFormat")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UITabPagesTop_obj,_labels),HX_CSTRING("_labels")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UITabPagesTop_obj,_icons),HX_CSTRING("_icons")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_onFormat"),
	HX_CSTRING("_offFormat"),
	HX_CSTRING("_labels"),
	HX_CSTRING("_icons"),
	HX_CSTRING("initialiseButtonBar"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("layout"),
	HX_CSTRING("set_pageNumber"),
	HX_CSTRING("setTab"),
	HX_CSTRING("spacing"),
	HX_CSTRING("changeColours"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UITabPagesTop_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UITabPagesTop_obj::LABEL_Y,"LABEL_Y");
	HX_MARK_MEMBER_NAME(UITabPagesTop_obj::ICON_Y,"ICON_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UITabPagesTop_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UITabPagesTop_obj::LABEL_Y,"LABEL_Y");
	HX_VISIT_MEMBER_NAME(UITabPagesTop_obj::ICON_Y,"ICON_Y");
};

#endif

Class UITabPagesTop_obj::__mClass;

void UITabPagesTop_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UITabPagesTop"), hx::TCanCast< UITabPagesTop_obj> ,sStaticFields,sMemberFields,
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

void UITabPagesTop_obj::__boot()
{
	LABEL_Y= 40.0;
	ICON_Y= 8.0;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
