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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIList
#include <com/danielfreeman/madcomponents/UIList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIPicker
#include <com/danielfreeman/madcomponents/UIPicker.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIRefresh
#include <com/danielfreeman/madcomponents/UIRefresh.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical
#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
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
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
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
#ifndef INCLUDED_openfl_utils_Timer
#include <openfl/utils/Timer.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UIPicker_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,hx::Null< bool >  __o_left,hx::Null< bool >  __o_right,hx::Null< Float >  __o_pickerHeight,hx::Null< Float >  __o_cursorHeight)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","new",0x328faea8,"com.danielfreeman.madcomponents.UIPicker.new","com/danielfreeman/madcomponents/UIPicker.hx",59,0xcc05ff65)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
HX_STACK_ARG(__o_left,"left")
HX_STACK_ARG(__o_right,"right")
HX_STACK_ARG(__o_pickerHeight,"pickerHeight")
HX_STACK_ARG(__o_cursorHeight,"cursorHeight")
bool left = __o_left.Default(false);
bool right = __o_right.Default(false);
Float pickerHeight = __o_pickerHeight.Default(-1);
Float cursorHeight = __o_cursorHeight.Default(-1);
{
	HX_STACK_LINE(87)
	this->_jogable = false;
	HX_STACK_LINE(85)
	this->_cursorHeight = 60.0;
	HX_STACK_LINE(84)
	this->_pickerHeight = 160.0;
	HX_STACK_LINE(81)
	this->_spinnerColour = (int)3355443;
	HX_STACK_LINE(80)
	this->_spinner = null();
	HX_STACK_LINE(92)
	if (((pickerHeight > (int)0))){
		HX_STACK_LINE(93)
		this->_pickerHeight = pickerHeight;
	}
	HX_STACK_LINE(95)
	if (((cursorHeight > (int)0))){
		HX_STACK_LINE(96)
		this->_cursorHeight = cursorHeight;
	}
	HX_STACK_LINE(98)
	if ((xml->has->resolve(HX_CSTRING("height")))){
		HX_STACK_LINE(99)
		::String _g = xml->att->resolve(HX_CSTRING("height"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		Float _g1 = ::Std_obj::parseFloat(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(99)
		this->_pickerHeight = _g1;
	}
	HX_STACK_LINE(101)
	if ((xml->has->resolve(HX_CSTRING("cursorHeight")))){
		HX_STACK_LINE(102)
		::String _g2 = xml->att->resolve(HX_CSTRING("cursorHeight"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(102)
		Float _g3 = ::Std_obj::parseFloat(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(102)
		this->_cursorHeight = _g3;
	}
	HX_STACK_LINE(104)
	if ((xml->has->resolve(HX_CSTRING("jogable")))){
		HX_STACK_LINE(105)
		::String _g4 = xml->att->resolve(HX_CSTRING("jogable"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(105)
		bool _g5 = (_g4 == HX_CSTRING("true"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(105)
		this->_jogable = _g5;
	}
	HX_STACK_LINE(107)
	super::__construct(screen,xml,attributes);
	HX_STACK_LINE(109)
	this->_deltaThreshold = 4.0;
	HX_STACK_LINE(110)
	::openfl::display::Shape _g6 = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(110)
	this->_mask = _g6;
	HX_STACK_LINE(111)
	::openfl::display::Shape _g7 = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(111)
	this->_spinner = _g7;
	HX_STACK_LINE(112)
	this->_left = left;
	HX_STACK_LINE(113)
	this->_right = right;
	HX_STACK_LINE(114)
	this->drawSpinner();
	HX_STACK_LINE(115)
	this->addChild(this->_spinner);
	HX_STACK_LINE(116)
	::openfl::display::DisplayObject _g8 = this->set_mask(this->_mask);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(116)
	this->addChild(_g8);
}
;
	return null();
}

//UIPicker_obj::~UIPicker_obj() { }

Dynamic UIPicker_obj::__CreateEmpty() { return  new UIPicker_obj; }
hx::ObjectPtr< UIPicker_obj > UIPicker_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,hx::Null< bool >  __o_left,hx::Null< bool >  __o_right,hx::Null< Float >  __o_pickerHeight,hx::Null< Float >  __o_cursorHeight)
{  hx::ObjectPtr< UIPicker_obj > result = new UIPicker_obj();
	result->__construct(screen,xml,attributes,__o_left,__o_right,__o_pickerHeight,__o_cursorHeight);
	return result;}

Dynamic UIPicker_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIPicker_obj > result = new UIPicker_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

Float UIPicker_obj::deltaToDecay( Float delta){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","deltaToDecay",0x2fb2175f,"com.danielfreeman.madcomponents.UIPicker.deltaToDecay","com/danielfreeman/madcomponents/UIPicker.hx",121,0xcc05ff65)
	HX_STACK_THIS(this)
	HX_STACK_ARG(delta,"delta")
	HX_STACK_LINE(121)
	return ::com::danielfreeman::madcomponents::UIPicker_obj::PICKER_DECAY;
}


Void UIPicker_obj::drawSpinner( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","drawSpinner",0x8fb09e7d,"com.danielfreeman.madcomponents.UIPicker.drawSpinner","com/danielfreeman/madcomponents/UIPicker.hx",127,0xcc05ff65)
		HX_STACK_THIS(this)
		HX_STACK_LINE(128)
		::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(130)
		this->_mask->get_graphics()->clear();
		HX_STACK_LINE(131)
		this->_mask->get_graphics()->beginFill((int)0,null());
		HX_STACK_LINE(132)
		::openfl::display::Graphics _g = this->_mask->get_graphics();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(132)
		this->drawShape(_g,null(),null(),null());
		HX_STACK_LINE(134)
		this->_mask->set_visible(false);
		HX_STACK_LINE(136)
		this->_spinner->get_graphics()->clear();
		HX_STACK_LINE(138)
		matr->createGradientBox(this->_attributes->width,this->_pickerHeight,(Float(::Math_obj::PI) / Float((int)2)),(int)0,(int)0);
		HX_STACK_LINE(139)
		this->_spinner->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,Dynamic( Array_obj<Dynamic>::__new().Add(this->_spinnerColour).Add(this->_spinnerColour).Add(this->_spinnerColour).Add(this->_spinnerColour).Add(this->_spinnerColour).Add(this->_spinnerColour)),Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(0.2).Add(0.0).Add(0.0).Add(0.2).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((Float((int)48) / Float((int)2))).Add((int)48).Add(((int)255 - (int)48)).Add(((int)255 - (Float((int)48) / Float((int)2)))).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(140)
		this->_spinner->get_graphics()->lineStyle(1.5,(int)3355443,1.0,true,null(),null(),null(),null());
		HX_STACK_LINE(141)
		::openfl::display::Graphics _g1 = this->_spinner->get_graphics();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(141)
		this->drawShape(_g1,null(),null(),null());
		HX_STACK_LINE(142)
		this->_spinner->get_graphics()->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(143)
		this->_spinner->get_graphics()->endFill();
		HX_STACK_LINE(144)
		this->_spinner->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)14540253).Add((int)14540253).Add((int)0)),Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)48).Add(((int)255 - (int)48)).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(145)
		this->_spinner->get_graphics()->drawRect((int)1,(int)0,(int)3,this->_pickerHeight);
		HX_STACK_LINE(146)
		this->_spinner->get_graphics()->drawRect((this->_attributes->width - (int)3),(int)0,(int)3,this->_pickerHeight);
		HX_STACK_LINE(147)
		this->_spinner->get_graphics()->endFill();
		HX_STACK_LINE(148)
		if ((this->_noScroll)){
			HX_STACK_LINE(149)
			this->_spinner->get_graphics()->beginFill((int)13421772,0.3);
			HX_STACK_LINE(150)
			this->_spinner->get_graphics()->drawRect((int)0,(Float(((this->_pickerHeight - this->_cursorHeight))) / Float((int)2)),this->_attributes->width,(Float(this->_cursorHeight) / Float((int)2)));
			HX_STACK_LINE(151)
			this->_spinner->get_graphics()->endFill();
			HX_STACK_LINE(152)
			this->_spinner->get_graphics()->beginFill((int)10066329,0.3);
			HX_STACK_LINE(153)
			this->_spinner->get_graphics()->drawRect((int)0,(Float(this->_pickerHeight) / Float((int)2)),this->_attributes->width,(Float(this->_cursorHeight) / Float((int)2)));
			HX_STACK_LINE(154)
			this->_spinner->get_graphics()->endFill();
		}
		else{
			HX_STACK_LINE(157)
			matr->createGradientBox(this->_attributes->width,(Float(this->_cursorHeight) / Float((int)2)),(Float(::Math_obj::PI) / Float((int)2)),(int)0,(Float(((this->_pickerHeight - this->_cursorHeight))) / Float((int)2)));
			HX_STACK_LINE(158)
			this->_spinner->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,Dynamic( Array_obj<Dynamic>::__new().Add((int)13421823).Add((int)6710937)),Dynamic( Array_obj<Dynamic>::__new().Add(0.3).Add(0.3)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)255)),matr,null(),null(),null());
			HX_STACK_LINE(159)
			this->_spinner->get_graphics()->drawRect((int)0,(Float(((this->_pickerHeight - this->_cursorHeight))) / Float((int)2)),this->_attributes->width,(Float(this->_cursorHeight) / Float((int)2)));
			HX_STACK_LINE(161)
			this->_spinner->get_graphics()->beginFill((int)3355545,0.3);
			HX_STACK_LINE(162)
			this->_spinner->get_graphics()->drawRect((int)0,(Float(this->_pickerHeight) / Float((int)2)),this->_attributes->width,(Float(this->_cursorHeight) / Float((int)2)));
			HX_STACK_LINE(163)
			this->_spinner->get_graphics()->endFill();
			HX_STACK_LINE(165)
			this->_spinner->get_graphics()->beginFill((int)6710937,null());
			HX_STACK_LINE(166)
			this->_spinner->get_graphics()->drawRect((int)0,(Float(((this->_pickerHeight - this->_cursorHeight))) / Float((int)2)),this->_attributes->width,1.5);
			HX_STACK_LINE(167)
			this->_spinner->get_graphics()->drawRect((int)0,((Float(((this->_pickerHeight + this->_cursorHeight))) / Float((int)2)) - (int)1),this->_attributes->width,1.5);
			HX_STACK_LINE(168)
			this->_spinner->get_graphics()->endFill();
		}
		HX_STACK_LINE(171)
		matr->createGradientBox(this->_attributes->width,10.0,(Float(::Math_obj::PI) / Float((int)2)),(int)0,(Float(((this->_pickerHeight + this->_cursorHeight))) / Float((int)2)));
		HX_STACK_LINE(172)
		this->_spinner->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,Dynamic( Array_obj<Dynamic>::__new().Add(this->_spinnerColour).Add(this->_spinnerColour)),Dynamic( Array_obj<Dynamic>::__new().Add(0.333333333333333315).Add(0.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(173)
		this->_spinner->get_graphics()->drawRect((int)0,(Float(((this->_pickerHeight + this->_cursorHeight))) / Float((int)2)),this->_attributes->width,(Float(this->_cursorHeight) / Float((int)2)));
		HX_STACK_LINE(174)
		this->_spinner->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPicker_obj,drawSpinner,(void))

Void UIPicker_obj::drawShape( ::openfl::display::Graphics graphics,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_partial){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int partial = __o_partial.Default(0);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","drawShape",0xa3a7dcc5,"com.danielfreeman.madcomponents.UIPicker.drawShape","com/danielfreeman/madcomponents/UIPicker.hx",180,0xcc05ff65)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(partial,"partial")
{
		HX_STACK_LINE(182)
		Float height;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(182)
		if (((partial >= (int)0))){
			HX_STACK_LINE(182)
			height = ((y + this->_pickerHeight) - (int)1);
		}
		else{
			HX_STACK_LINE(182)
			height = (y + (Float(this->_pickerHeight) / Float((int)2)));
		}
		HX_STACK_LINE(183)
		Float heightCurve;		HX_STACK_VAR(heightCurve,"heightCurve");
		HX_STACK_LINE(183)
		if (((partial >= (int)0))){
			HX_STACK_LINE(183)
			heightCurve = (((y + this->_pickerHeight) - (int)1) - 10.0);
		}
		else{
			HX_STACK_LINE(183)
			heightCurve = (y + (Float(this->_pickerHeight) / Float((int)2)));
		}
		HX_STACK_LINE(184)
		if (((partial > (int)0))){
			HX_STACK_LINE(185)
			graphics->moveTo((x + this->_attributes->width),((y + (Float(this->_pickerHeight) / Float((int)2))) - (int)1));
			HX_STACK_LINE(186)
			if ((this->_right)){
				HX_STACK_LINE(187)
				graphics->curveTo((x + this->_attributes->width),((y + (Float(this->_pickerHeight) / Float((int)2))) - (int)1),((x + this->_attributes->width) - 3.0),heightCurve);
			}
		}
		else{
			HX_STACK_LINE(191)
			graphics->moveTo((x + ((  ((this->_left)) ? Float(16.) : Float((int)0) ))),y);
			HX_STACK_LINE(192)
			graphics->lineTo(((x + this->_attributes->width) - ((  ((this->_right)) ? Float(16.) : Float((int)0) ))),y);
			HX_STACK_LINE(193)
			if ((this->_right)){
				HX_STACK_LINE(194)
				graphics->curveTo(((x + this->_attributes->width) - 6.),y,((x + this->_attributes->width) - 3.0),(y + 10.0));
				HX_STACK_LINE(195)
				graphics->curveTo(((x + this->_attributes->width) + 3.0),(y + (Float(this->_pickerHeight) / Float((int)2))),((x + this->_attributes->width) - 3.0),heightCurve);
			}
		}
		HX_STACK_LINE(199)
		if ((this->_right)){
			HX_STACK_LINE(200)
			graphics->curveTo(((x + this->_attributes->width) - 6.),height,(((x + this->_attributes->width) - 10.0) - 6.),height);
		}
		else{
			HX_STACK_LINE(203)
			graphics->lineTo((x + this->_attributes->width),height);
		}
		HX_STACK_LINE(206)
		graphics->lineTo((x + ((  ((this->_left)) ? Float(16.) : Float((int)0) ))),height);
		HX_STACK_LINE(208)
		if (((partial > (int)0))){
			HX_STACK_LINE(210)
			if ((this->_left)){
				HX_STACK_LINE(211)
				graphics->curveTo((x + 3.0),((y + this->_pickerHeight) - (int)1),(x + 3.0),(((y + this->_pickerHeight) - (int)1) - 10.0));
				HX_STACK_LINE(212)
				graphics->curveTo((x - 3.0),(y + (Float(this->_pickerHeight) / Float((int)2))),(x + 3.0),((y + (Float(this->_pickerHeight) / Float((int)2))) - (int)1));
			}
			else{
				HX_STACK_LINE(215)
				graphics->lineTo(x,((y + (Float(this->_pickerHeight) / Float((int)2))) - (int)1));
			}
		}
		else{
			HX_STACK_LINE(220)
			if ((this->_left)){
				HX_STACK_LINE(221)
				graphics->curveTo((x + 3.0),height,(x + 3.0),heightCurve);
				HX_STACK_LINE(222)
				graphics->curveTo((x - 3.0),(y + (Float(this->_pickerHeight) / Float((int)2))),(x + 3.0),(y + 10.0));
				HX_STACK_LINE(223)
				graphics->curveTo((x + 3.0),y,((x + 10.0) + 6.),y);
			}
			else{
				HX_STACK_LINE(226)
				graphics->lineTo(x,y);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(UIPicker_obj,drawShape,(void))

bool UIPicker_obj::set_scrollEnabled( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","set_scrollEnabled",0xb91f4f9f,"com.danielfreeman.madcomponents.UIPicker.set_scrollEnabled","com/danielfreeman/madcomponents/UIPicker.hx",235,0xcc05ff65)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(236)
	int _g = this->_slider->get_numChildren();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(236)
	if (((_g > (int)1))){
		HX_STACK_LINE(237)
		if ((value)){
			HX_STACK_LINE(238)
			if (((this->_defaultStyle != null()))){
				HX_STACK_LINE(239)
				int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(239)
				int _g2 = this->_slider->get_numChildren();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(239)
				while((true)){
					HX_STACK_LINE(239)
					if ((!(((_g1 < _g2))))){
						HX_STACK_LINE(239)
						break;
					}
					HX_STACK_LINE(239)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(240)
					(hx::TCast< com::danielfreeman::madcomponents::UILabel >::cast(this->_slider->getChildAt(i)))->setTextFormat(this->_defaultStyle,null(),null());
				}
			}
		}
		else{
			HX_STACK_LINE(245)
			if ((!(this->_noScroll))){
				HX_STACK_LINE(246)
				::openfl::text::TextFormat _g1 = (hx::TCast< com::danielfreeman::madcomponents::UILabel >::cast(this->_slider->getChildAt((int)1)))->getTextFormat(null(),null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(246)
				this->_defaultStyle = _g1;
			}
			HX_STACK_LINE(248)
			::openfl::text::TextFormat greyedOutStyle = ::openfl::text::TextFormat_obj::__new(this->_defaultStyle->font,this->_defaultStyle->size,(int)13421772,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(greyedOutStyle,"greyedOutStyle");
			HX_STACK_LINE(249)
			{
				HX_STACK_LINE(249)
				int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(249)
				int _g2 = this->_slider->get_numChildren();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(249)
				while((true)){
					HX_STACK_LINE(249)
					if ((!(((_g1 < _g2))))){
						HX_STACK_LINE(249)
						break;
					}
					HX_STACK_LINE(249)
					int j = (_g1)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(250)
					(hx::TCast< com::danielfreeman::madcomponents::UILabel >::cast(this->_slider->getChildAt(j)))->setTextFormat(greyedOutStyle,null(),null());
				}
			}
		}
	}
	HX_STACK_LINE(254)
	this->super::set_scrollEnabled(value);
	HX_STACK_LINE(255)
	this->drawSpinner();
	HX_STACK_LINE(256)
	return value;
}


Float UIPicker_obj::get_height( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","get_height",0x231f7268,"com.danielfreeman.madcomponents.UIPicker.get_height","com/danielfreeman/madcomponents/UIPicker.hx",261,0xcc05ff65)
	HX_STACK_THIS(this)
	HX_STACK_LINE(261)
	return this->_pickerHeight;
}


Void UIPicker_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","layout",0xea52ed62,"com.danielfreeman.madcomponents.UIPicker.layout","com/danielfreeman/madcomponents/UIPicker.hx",267,0xcc05ff65)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(268)
		this->super::layout(attributes);
		HX_STACK_LINE(269)
		if (((this->_spinner != null()))){
			HX_STACK_LINE(270)
			this->drawSpinner();
		}
	}
return null();
}


Void UIPicker_obj::calculateMaximumSlide( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","calculateMaximumSlide",0xb5cd6bff,"com.danielfreeman.madcomponents.UIPicker.calculateMaximumSlide","com/danielfreeman/madcomponents/UIPicker.hx",275,0xcc05ff65)
		HX_STACK_THIS(this)
		HX_STACK_LINE(276)
		Float _g = this->_slider->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(276)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(276)
		_g1 = (_g - ((  (((this->_refresh != null()))) ? Float((int)40) : Float((int)0) )));
		HX_STACK_LINE(276)
		this->_scrollerHeight = _g1;
		HX_STACK_LINE(277)
		if (((bool((this->_count > (int)0)) && bool(((bool((this->_cellHeight < (int)0)) || bool(this->_autoLayout))))))){
			HX_STACK_LINE(278)
			Float _g2 = this->_slider->get_height();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(278)
			Float _g3 = (_g2 - this->_top);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(278)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(278)
			_g4 = (_g3 - ((  (((this->_refresh != null()))) ? Float((int)40) : Float((int)0) )));
			HX_STACK_LINE(278)
			Float _g5 = (Float(_g4) / Float(this->_count));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(278)
			int _g6 = ::Math_obj::ceil(_g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(278)
			this->_cellHeight = _g6;
		}
		HX_STACK_LINE(280)
		this->_maximumSlide = ((this->_cellHeight * ((this->_count - (int)3))) - this->_offset);
		HX_STACK_LINE(281)
		if (((this->_maximumSlide < (int)0))){
			HX_STACK_LINE(282)
			this->_maximumSlide = (int)0;
		}
	}
return null();
}


bool UIPicker_obj::startMovement0( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","startMovement0",0x20238a17,"com.danielfreeman.madcomponents.UIPicker.startMovement0","com/danielfreeman/madcomponents/UIPicker.hx",287,0xcc05ff65)
	HX_STACK_THIS(this)
	HX_STACK_LINE(288)
	Float _g = this->get_sliderY();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(288)
	if (((_g > this->_offset))){
		HX_STACK_LINE(289)
		this->_endSlider = -(this->_offset);
		HX_STACK_LINE(290)
		return true;
	}
	else{
		HX_STACK_LINE(292)
		Float _g1 = this->get_sliderY();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(292)
		if (((_g1 < -((((this->_cellHeight * ((this->_count - (int)3))) - this->_offset)))))){
			HX_STACK_LINE(293)
			this->_endSlider = ((this->_cellHeight * ((this->_count - (int)3))) - this->_offset);
			HX_STACK_LINE(294)
			return true;
		}
	}
	HX_STACK_LINE(297)
	return false;
}


Dynamic UIPicker_obj::get_row( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","get_row",0xfc284cf9,"com.danielfreeman.madcomponents.UIPicker.get_row","com/danielfreeman/madcomponents/UIPicker.hx",305,0xcc05ff65)
	HX_STACK_THIS(this)
	HX_STACK_LINE(305)
	if (((this->_pressedCell >= (int)0))){
		HX_STACK_LINE(305)
		return this->_filteredData->__GetItem((this->_pressedCell + (int)1));
	}
	else{
		HX_STACK_LINE(305)
		return null();
	}
	HX_STACK_LINE(305)
	return null();
}


Void UIPicker_obj::illuminate( hx::Null< int >  __o_pressedCell,hx::Null< bool >  __o_dispatch,hx::Null< bool >  __o_show){
int pressedCell = __o_pressedCell.Default(-1);
bool dispatch = __o_dispatch.Default(true);
bool show = __o_show.Default(true);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","illuminate",0x823f92a4,"com.danielfreeman.madcomponents.UIPicker.illuminate","com/danielfreeman/madcomponents/UIPicker.hx",310,0xcc05ff65)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pressedCell,"pressedCell")
	HX_STACK_ARG(dispatch,"dispatch")
	HX_STACK_ARG(show,"show")
{
		HX_STACK_LINE(310)
		if (((bool((this->_pressedCell >= (int)0)) && bool((this->_pressedCell < this->_count))))){
			HX_STACK_LINE(311)
			if (((bool(show) && bool(this->_highlightPressed)))){
				HX_STACK_LINE(312)
				this->_highlight->get_graphics()->beginFill(this->_highlightColour,null());
				HX_STACK_LINE(313)
				this->_highlight->get_graphics()->drawRect((int)0,((this->_top + (((this->_pressedCell + (int)1)) * this->_cellHeight)) + (int)1),this->_width,(this->_cellHeight - (int)1));
				HX_STACK_LINE(314)
				this->_highlight->get_graphics()->endFill();
			}
			HX_STACK_LINE(316)
			this->activate(dispatch);
		}
	}
return null();
}


Void UIPicker_obj::jogPicker( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","jogPicker",0xf2d8f178,"com.danielfreeman.madcomponents.UIPicker.jogPicker","com/danielfreeman/madcomponents/UIPicker.hx",321,0xcc05ff65)
		HX_STACK_THIS(this)
		HX_STACK_LINE(322)
		int oldPressedCell = this->_pressedCell;		HX_STACK_VAR(oldPressedCell,"oldPressedCell");
		HX_STACK_LINE(323)
		Float _g = this->_slider->get_mouseY();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(323)
		Float _g1 = (Float(_g) / Float(this->_cellHeight));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(323)
		int _g2 = ::Math_obj::floor(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(323)
		int _g3 = (_g2 - (int)1);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(323)
		this->_pressedCell = _g3;
		HX_STACK_LINE(324)
		if (((bool((this->_pressedCell >= (int)0)) && bool((this->_pressedCell != oldPressedCell))))){
			HX_STACK_LINE(325)
			if (((this->_pressedCell > (this->_count - (int)3)))){
				HX_STACK_LINE(326)
				this->_pressedCell = (this->_count - (int)3);
			}
			HX_STACK_LINE(328)
			this->setIndex(this->_pressedCell,true,null(),null(),null());
		}
		else{
			HX_STACK_LINE(331)
			this->_pressedCell = oldPressedCell;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPicker_obj,jogPicker,(void))

Void UIPicker_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","mouseUp",0x95cf9628,"com.danielfreeman.madcomponents.UIPicker.mouseUp","com/danielfreeman/madcomponents/UIPicker.hx",336,0xcc05ff65)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(337)
		this->super::mouseUp(event);
		HX_STACK_LINE(338)
		if (((bool((bool(this->_jogable) && bool(!(this->_classic)))) && bool((this->_distance < 8.0))))){
			HX_STACK_LINE(339)
			this->jogPicker();
		}
	}
return null();
}


::openfl::display::DisplayObject UIPicker_obj::pressButton( hx::Null< bool >  __o_show){
bool show = __o_show.Default(true);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","pressButton",0xbc28941d,"com.danielfreeman.madcomponents.UIPicker.pressButton","com/danielfreeman/madcomponents/UIPicker.hx",344,0xcc05ff65)
	HX_STACK_THIS(this)
	HX_STACK_ARG(show,"show")
{
		HX_STACK_LINE(345)
		if (((bool(this->_jogable) && bool(this->_classic)))){
			HX_STACK_LINE(346)
			this->jogPicker();
		}
		HX_STACK_LINE(348)
		return null();
	}
}


Void UIPicker_obj::drawScrollBar( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","drawScrollBar",0x26aef36a,"com.danielfreeman.madcomponents.UIPicker.drawScrollBar","com/danielfreeman/madcomponents/UIPicker.hx",352,0xcc05ff65)
		HX_STACK_THIS(this)
	}
return null();
}


bool UIPicker_obj::get_snapToCellCondition( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","get_snapToCellCondition",0xfd53ead3,"com.danielfreeman.madcomponents.UIPicker.get_snapToCellCondition","com/danielfreeman/madcomponents/UIPicker.hx",357,0xcc05ff65)
	HX_STACK_THIS(this)
	HX_STACK_LINE(358)
	Float _g = this->get_sliderY();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(358)
	if (((_g < this->_offset))){
		HX_STACK_LINE(358)
		Float _g1 = this->get_sliderY();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(358)
		return (_g1 > -((((this->_cellHeight * ((this->_count - (int)3))) - this->_offset))));
	}
	else{
		HX_STACK_LINE(358)
		return false;
	}
	HX_STACK_LINE(358)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(UIPicker_obj,get_snapToCellCondition,return )

Float UIPicker_obj::get_snapToCellPosition( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","get_snapToCellPosition",0x8866ae71,"com.danielfreeman.madcomponents.UIPicker.get_snapToCellPosition","com/danielfreeman/madcomponents/UIPicker.hx",363,0xcc05ff65)
	HX_STACK_THIS(this)
	HX_STACK_LINE(363)
	if ((this->get_snapToCellCondition())){
		HX_STACK_LINE(364)
		Float _g = this->get_sliderY();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(364)
		Float _g1 = (_g - this->_offset);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(364)
		Float _g2 = (Float(_g1) / Float(this->_cellHeight));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(364)
		int _g3 = ::Math_obj::round(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(364)
		int _g4 = (-(this->_cellHeight) * _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(364)
		return (_g4 - this->_offset);
	}
	else{
		HX_STACK_LINE(366)
		Float _g5 = this->get_sliderY();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(366)
		if (((_g5 > this->_offset))){
			HX_STACK_LINE(367)
			return -(this->_offset);
		}
		else{
			HX_STACK_LINE(369)
			Float _g6 = this->get_sliderY();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(369)
			if (((_g6 < -((((this->_cellHeight * ((this->_count - (int)3))) - this->_offset)))))){
				HX_STACK_LINE(370)
				return ((this->_cellHeight * ((this->_count - (int)3))) - this->_offset);
			}
			else{
				HX_STACK_LINE(373)
				return this->get_sliderY();
			}
		}
	}
	HX_STACK_LINE(363)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(UIPicker_obj,get_snapToCellPosition,return )

Void UIPicker_obj::stopMovement( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","stopMovement",0x48e21c09,"com.danielfreeman.madcomponents.UIPicker.stopMovement","com/danielfreeman/madcomponents/UIPicker.hx",379,0xcc05ff65)
		HX_STACK_THIS(this)
		HX_STACK_LINE(379)
		if ((this->get_snapToCellCondition())){
			HX_STACK_LINE(380)
			Float _g = this->get_snapToCellPosition();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(380)
			this->_endSlider = _g;
			HX_STACK_LINE(381)
			Float _g1 = this->get_sliderY();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(381)
			Float _g2 = (-(this->_endSlider) - _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(381)
			Float _g3 = (_g2 * ::com::danielfreeman::madcomponents::UIScrollVertical_obj::BOUNCE);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(381)
			this->_delta = _g3;
			HX_STACK_LINE(382)
			Float _g4 = this->get_sliderY();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(382)
			Float _g5 = (_g4 + this->_endSlider);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(382)
			Float _g6 = ::Math_obj::abs(_g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(382)
			if (((_g6 < 1.0))){
				HX_STACK_LINE(383)
				this->stopMovement0();
			}
		}
		else{
			HX_STACK_LINE(387)
			this->stopMovement0();
		}
	}
return null();
}


Void UIPicker_obj::stopMovement0( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","stopMovement0",0x7cf66c07,"com.danielfreeman.madcomponents.UIPicker.stopMovement0","com/danielfreeman/madcomponents/UIPicker.hx",392,0xcc05ff65)
		HX_STACK_THIS(this)
		HX_STACK_LINE(393)
		this->_moveTimer->stop();
		HX_STACK_LINE(394)
		this->hideScrollBar();
		HX_STACK_LINE(395)
		Float _g = this->get_sliderY();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(395)
		Float _g1 = (_g - this->_offset);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(395)
		Float _g2 = (Float(_g1) / Float(this->_cellHeight));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(395)
		int _g3 = -(::Math_obj::round(_g2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(395)
		this->_pressedCell = _g3;
		HX_STACK_LINE(396)
		::openfl::events::Event _g4 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(396)
		this->dispatchEvent(_g4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPicker_obj,stopMovement0,(void))

Void UIPicker_obj::drawComponent( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","drawComponent",0xf8068c61,"com.danielfreeman.madcomponents.UIPicker.drawComponent","com/danielfreeman/madcomponents/UIPicker.hx",402,0xcc05ff65)
		HX_STACK_THIS(this)
		HX_STACK_LINE(403)
		this->get_graphics()->clear();
		HX_STACK_LINE(404)
		if (((bool((this->_colours != null())) && bool((this->_colours->length > (int)0))))){
			HX_STACK_LINE(405)
			this->get_graphics()->beginFill(this->_colours->__get((int)0),null());
		}
		else{
			HX_STACK_LINE(408)
			this->get_graphics()->beginFill((int)16777215,null());
		}
		HX_STACK_LINE(410)
		this->get_graphics()->drawRect((int)0,(int)0,this->_attributes->width,this->_attributes->height);
		HX_STACK_LINE(411)
		this->get_graphics()->endFill();
	}
return null();
}


Dynamic UIPicker_obj::set_data( Dynamic _tmp_value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIPicker","set_data",0x4c2cc7df,"com.danielfreeman.madcomponents.UIPicker.set_data","com/danielfreeman/madcomponents/UIPicker.hx",417,0xcc05ff65)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tmp_value,"_tmp_value")
	HX_STACK_LINE(418)
	Dynamic value = _tmp_value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(418)
	Dynamic datas = value->__Field(HX_CSTRING("concat"),true)(Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(datas,"datas");
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIPicker.hx",419,0xcc05ff65)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("label") , HX_CSTRING(" "),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(419)
	datas->__Field(HX_CSTRING("insert"),true)((int)0,_Function_1_1::Block());
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIPicker.hx",420,0xcc05ff65)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("label") , HX_CSTRING(" "),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(420)
	datas->__Field(HX_CSTRING("push"),true)(_Function_1_2::Block());
	HX_STACK_LINE(421)
	this->super::set_data(datas);
	HX_STACK_LINE(422)
	int _g = ::Math_obj::floor((Float(this->_pickerHeight) / Float(this->_cellHeight)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(422)
	int _g1 = (_g + (int)1);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(422)
	int _g2 = (this->_cellHeight * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(422)
	Float _g3 = (this->_pickerHeight - _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(422)
	Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(422)
	this->_offset = _g4;
	HX_STACK_LINE(423)
	int _g5 = ::Math_obj::floor((Float(this->_pickerHeight) / Float((((int)2 * this->_cellHeight)))));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(423)
	int _g6 = (_g5 - (int)1);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(423)
	int _g7 = (this->_cellHeight * _g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(423)
	hx::AddEq(this->_offset,_g7);
	HX_STACK_LINE(424)
	int _g8 = ::Math_obj::floor((Float(this->_pickerHeight) / Float(this->_cellHeight)));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(424)
	int _g9 = hx::Mod(_g8,(int)2);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(424)
	if (((_g9 == (int)1))){
		HX_STACK_LINE(425)
		hx::AddEq(this->_offset,(Float(this->_cellHeight) / Float((int)2)));
	}
	HX_STACK_LINE(426)
	this->set_sliderY(this->_offset);
	HX_STACK_LINE(427)
	if (((this->_spinner != null()))){
		HX_STACK_LINE(428)
		int _g10 = this->get_numChildren();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(428)
		int _g11 = (_g10 - (int)1);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(428)
		this->setChildIndex(this->_spinner,_g11);
	}
	HX_STACK_LINE(430)
	return value;
}


Float UIPicker_obj::HEIGHT;

Float UIPicker_obj::SPINNER_ALPHA;

Float UIPicker_obj::SPINNER_SHADE;

Float UIPicker_obj::SPINNER_CURSOR_HEIGHT;

int UIPicker_obj::SPINNER_CURSOR_COLOUR;

int UIPicker_obj::SPINNER_CURSOR_COLOUR_DARK;

int UIPicker_obj::SPINNER_CURSOR_COLOUR_HIGHLIGHT;

Float UIPicker_obj::SPINNER_CURSOR_ALPHA;

Float UIPicker_obj::CURVE;

Float UIPicker_obj::WARP;

Float UIPicker_obj::SHADOW;

int UIPicker_obj::GREYED_OUT_LIGHT;

int UIPicker_obj::GREYED_OUT_DARK;

Float UIPicker_obj::PICKER_DECAY;


UIPicker_obj::UIPicker_obj()
{
}

void UIPicker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIPicker);
	HX_MARK_MEMBER_NAME(_spinner,"_spinner");
	HX_MARK_MEMBER_NAME(_spinnerColour,"_spinnerColour");
	HX_MARK_MEMBER_NAME(_left,"_left");
	HX_MARK_MEMBER_NAME(_right,"_right");
	HX_MARK_MEMBER_NAME(_pickerHeight,"_pickerHeight");
	HX_MARK_MEMBER_NAME(_cursorHeight,"_cursorHeight");
	HX_MARK_MEMBER_NAME(_defaultStyle,"_defaultStyle");
	HX_MARK_MEMBER_NAME(_jogable,"_jogable");
	::com::danielfreeman::madcomponents::UIList_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIPicker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_spinner,"_spinner");
	HX_VISIT_MEMBER_NAME(_spinnerColour,"_spinnerColour");
	HX_VISIT_MEMBER_NAME(_left,"_left");
	HX_VISIT_MEMBER_NAME(_right,"_right");
	HX_VISIT_MEMBER_NAME(_pickerHeight,"_pickerHeight");
	HX_VISIT_MEMBER_NAME(_cursorHeight,"_cursorHeight");
	HX_VISIT_MEMBER_NAME(_defaultStyle,"_defaultStyle");
	HX_VISIT_MEMBER_NAME(_jogable,"_jogable");
	::com::danielfreeman::madcomponents::UIList_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIPicker_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { return _left; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_right") ) { return _right; }
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_row") ) { return get_row_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_spinner") ) { return _spinner; }
		if (HX_FIELD_EQ(inName,"_jogable") ) { return _jogable; }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawShape") ) { return drawShape_dyn(); }
		if (HX_FIELD_EQ(inName,"jogPicker") ) { return jogPicker_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"illuminate") ) { return illuminate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawSpinner") ) { return drawSpinner_dyn(); }
		if (HX_FIELD_EQ(inName,"pressButton") ) { return pressButton_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"PICKER_DECAY") ) { return PICKER_DECAY; }
		if (HX_FIELD_EQ(inName,"deltaToDecay") ) { return deltaToDecay_dyn(); }
		if (HX_FIELD_EQ(inName,"stopMovement") ) { return stopMovement_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pickerHeight") ) { return _pickerHeight; }
		if (HX_FIELD_EQ(inName,"_cursorHeight") ) { return _cursorHeight; }
		if (HX_FIELD_EQ(inName,"_defaultStyle") ) { return _defaultStyle; }
		if (HX_FIELD_EQ(inName,"drawScrollBar") ) { return drawScrollBar_dyn(); }
		if (HX_FIELD_EQ(inName,"stopMovement0") ) { return stopMovement0_dyn(); }
		if (HX_FIELD_EQ(inName,"drawComponent") ) { return drawComponent_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_spinnerColour") ) { return _spinnerColour; }
		if (HX_FIELD_EQ(inName,"startMovement0") ) { return startMovement0_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_scrollEnabled") ) { return set_scrollEnabled_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"snapToCellPosition") ) { return get_snapToCellPosition(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"snapToCellCondition") ) { return get_snapToCellCondition(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"calculateMaximumSlide") ) { return calculateMaximumSlide_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_snapToCellPosition") ) { return get_snapToCellPosition_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_snapToCellCondition") ) { return get_snapToCellCondition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIPicker_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { _left=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_right") ) { _right=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_spinner") ) { _spinner=inValue.Cast< ::openfl::display::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_jogable") ) { _jogable=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"PICKER_DECAY") ) { PICKER_DECAY=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pickerHeight") ) { _pickerHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cursorHeight") ) { _cursorHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_defaultStyle") ) { _defaultStyle=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_spinnerColour") ) { _spinnerColour=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIPicker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("snapToCellCondition"));
	outFields->push(HX_CSTRING("snapToCellPosition"));
	outFields->push(HX_CSTRING("_spinner"));
	outFields->push(HX_CSTRING("_spinnerColour"));
	outFields->push(HX_CSTRING("_left"));
	outFields->push(HX_CSTRING("_right"));
	outFields->push(HX_CSTRING("_pickerHeight"));
	outFields->push(HX_CSTRING("_cursorHeight"));
	outFields->push(HX_CSTRING("_defaultStyle"));
	outFields->push(HX_CSTRING("_jogable"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("HEIGHT"),
	HX_CSTRING("SPINNER_ALPHA"),
	HX_CSTRING("SPINNER_SHADE"),
	HX_CSTRING("SPINNER_CURSOR_HEIGHT"),
	HX_CSTRING("SPINNER_CURSOR_COLOUR"),
	HX_CSTRING("SPINNER_CURSOR_COLOUR_DARK"),
	HX_CSTRING("SPINNER_CURSOR_COLOUR_HIGHLIGHT"),
	HX_CSTRING("SPINNER_CURSOR_ALPHA"),
	HX_CSTRING("CURVE"),
	HX_CSTRING("WARP"),
	HX_CSTRING("SHADOW"),
	HX_CSTRING("GREYED_OUT_LIGHT"),
	HX_CSTRING("GREYED_OUT_DARK"),
	HX_CSTRING("PICKER_DECAY"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(UIPicker_obj,_spinner),HX_CSTRING("_spinner")},
	{hx::fsInt,(int)offsetof(UIPicker_obj,_spinnerColour),HX_CSTRING("_spinnerColour")},
	{hx::fsBool,(int)offsetof(UIPicker_obj,_left),HX_CSTRING("_left")},
	{hx::fsBool,(int)offsetof(UIPicker_obj,_right),HX_CSTRING("_right")},
	{hx::fsFloat,(int)offsetof(UIPicker_obj,_pickerHeight),HX_CSTRING("_pickerHeight")},
	{hx::fsFloat,(int)offsetof(UIPicker_obj,_cursorHeight),HX_CSTRING("_cursorHeight")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UIPicker_obj,_defaultStyle),HX_CSTRING("_defaultStyle")},
	{hx::fsBool,(int)offsetof(UIPicker_obj,_jogable),HX_CSTRING("_jogable")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_spinner"),
	HX_CSTRING("_spinnerColour"),
	HX_CSTRING("_left"),
	HX_CSTRING("_right"),
	HX_CSTRING("_pickerHeight"),
	HX_CSTRING("_cursorHeight"),
	HX_CSTRING("_defaultStyle"),
	HX_CSTRING("_jogable"),
	HX_CSTRING("deltaToDecay"),
	HX_CSTRING("drawSpinner"),
	HX_CSTRING("drawShape"),
	HX_CSTRING("set_scrollEnabled"),
	HX_CSTRING("get_height"),
	HX_CSTRING("layout"),
	HX_CSTRING("calculateMaximumSlide"),
	HX_CSTRING("startMovement0"),
	HX_CSTRING("get_row"),
	HX_CSTRING("illuminate"),
	HX_CSTRING("jogPicker"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("pressButton"),
	HX_CSTRING("drawScrollBar"),
	HX_CSTRING("get_snapToCellCondition"),
	HX_CSTRING("get_snapToCellPosition"),
	HX_CSTRING("stopMovement"),
	HX_CSTRING("stopMovement0"),
	HX_CSTRING("drawComponent"),
	HX_CSTRING("set_data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIPicker_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIPicker_obj::HEIGHT,"HEIGHT");
	HX_MARK_MEMBER_NAME(UIPicker_obj::SPINNER_ALPHA,"SPINNER_ALPHA");
	HX_MARK_MEMBER_NAME(UIPicker_obj::SPINNER_SHADE,"SPINNER_SHADE");
	HX_MARK_MEMBER_NAME(UIPicker_obj::SPINNER_CURSOR_HEIGHT,"SPINNER_CURSOR_HEIGHT");
	HX_MARK_MEMBER_NAME(UIPicker_obj::SPINNER_CURSOR_COLOUR,"SPINNER_CURSOR_COLOUR");
	HX_MARK_MEMBER_NAME(UIPicker_obj::SPINNER_CURSOR_COLOUR_DARK,"SPINNER_CURSOR_COLOUR_DARK");
	HX_MARK_MEMBER_NAME(UIPicker_obj::SPINNER_CURSOR_COLOUR_HIGHLIGHT,"SPINNER_CURSOR_COLOUR_HIGHLIGHT");
	HX_MARK_MEMBER_NAME(UIPicker_obj::SPINNER_CURSOR_ALPHA,"SPINNER_CURSOR_ALPHA");
	HX_MARK_MEMBER_NAME(UIPicker_obj::CURVE,"CURVE");
	HX_MARK_MEMBER_NAME(UIPicker_obj::WARP,"WARP");
	HX_MARK_MEMBER_NAME(UIPicker_obj::SHADOW,"SHADOW");
	HX_MARK_MEMBER_NAME(UIPicker_obj::GREYED_OUT_LIGHT,"GREYED_OUT_LIGHT");
	HX_MARK_MEMBER_NAME(UIPicker_obj::GREYED_OUT_DARK,"GREYED_OUT_DARK");
	HX_MARK_MEMBER_NAME(UIPicker_obj::PICKER_DECAY,"PICKER_DECAY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIPicker_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIPicker_obj::HEIGHT,"HEIGHT");
	HX_VISIT_MEMBER_NAME(UIPicker_obj::SPINNER_ALPHA,"SPINNER_ALPHA");
	HX_VISIT_MEMBER_NAME(UIPicker_obj::SPINNER_SHADE,"SPINNER_SHADE");
	HX_VISIT_MEMBER_NAME(UIPicker_obj::SPINNER_CURSOR_HEIGHT,"SPINNER_CURSOR_HEIGHT");
	HX_VISIT_MEMBER_NAME(UIPicker_obj::SPINNER_CURSOR_COLOUR,"SPINNER_CURSOR_COLOUR");
	HX_VISIT_MEMBER_NAME(UIPicker_obj::SPINNER_CURSOR_COLOUR_DARK,"SPINNER_CURSOR_COLOUR_DARK");
	HX_VISIT_MEMBER_NAME(UIPicker_obj::SPINNER_CURSOR_COLOUR_HIGHLIGHT,"SPINNER_CURSOR_COLOUR_HIGHLIGHT");
	HX_VISIT_MEMBER_NAME(UIPicker_obj::SPINNER_CURSOR_ALPHA,"SPINNER_CURSOR_ALPHA");
	HX_VISIT_MEMBER_NAME(UIPicker_obj::CURVE,"CURVE");
	HX_VISIT_MEMBER_NAME(UIPicker_obj::WARP,"WARP");
	HX_VISIT_MEMBER_NAME(UIPicker_obj::SHADOW,"SHADOW");
	HX_VISIT_MEMBER_NAME(UIPicker_obj::GREYED_OUT_LIGHT,"GREYED_OUT_LIGHT");
	HX_VISIT_MEMBER_NAME(UIPicker_obj::GREYED_OUT_DARK,"GREYED_OUT_DARK");
	HX_VISIT_MEMBER_NAME(UIPicker_obj::PICKER_DECAY,"PICKER_DECAY");
};

#endif

Class UIPicker_obj::__mClass;

void UIPicker_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIPicker"), hx::TCanCast< UIPicker_obj> ,sStaticFields,sMemberFields,
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

void UIPicker_obj::__boot()
{
	HEIGHT= 160.0;
	SPINNER_ALPHA= 1.0;
	SPINNER_SHADE= (int)48;
	SPINNER_CURSOR_HEIGHT= 60.0;
	SPINNER_CURSOR_COLOUR= (int)6710937;
	SPINNER_CURSOR_COLOUR_DARK= (int)3355545;
	SPINNER_CURSOR_COLOUR_HIGHLIGHT= (int)13421823;
	SPINNER_CURSOR_ALPHA= 0.3;
	CURVE= 10.0;
	WARP= 3.0;
	SHADOW= 10.0;
	GREYED_OUT_LIGHT= (int)13421772;
	GREYED_OUT_DARK= (int)10066329;
	PICKER_DECAY= 0.96;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
