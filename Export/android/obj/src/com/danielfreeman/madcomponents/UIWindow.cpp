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
#ifndef INCLUDED_com_danielfreeman_madcomponents_Colour
#include <com/danielfreeman/madcomponents/Colour.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IComponentUI
#include <com/danielfreeman/madcomponents/IComponentUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIBackButton
#include <com/danielfreeman/madcomponents/UIBackButton.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIWindow
#include <com/danielfreeman/madcomponents/UIWindow.h>
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

Void UIWindow_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,hx::Null< Float >  __o_curve,hx::Null< bool >  __o_centre)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIWindow","new",0xa740200a,"com.danielfreeman.madcomponents.UIWindow.new","com/danielfreeman/madcomponents/UIWindow.hx",59,0x52dc5043)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
HX_STACK_ARG(__o_curve,"curve")
HX_STACK_ARG(__o_centre,"centre")
Float curve = __o_curve.Default(-1);
bool centre = __o_centre.Default(true);
{
	HX_STACK_LINE(86)
	this->_lineColour = (int)12237498;
	HX_STACK_LINE(85)
	this->_rightButton = null();
	HX_STACK_LINE(84)
	this->_leftButton = null();
	HX_STACK_LINE(82)
	this->_iMask = null();
	HX_STACK_LINE(81)
	this->_centred = false;
	HX_STACK_LINE(80)
	this->_curve = 32.0;
	HX_STACK_LINE(94)
	super::__construct(screen,attributes);
	HX_STACK_LINE(94)
	this->_xml = xml;
	HX_STACK_LINE(95)
	this->_centred = centre;
	HX_STACK_LINE(96)
	if (((curve >= (int)0))){
		HX_STACK_LINE(97)
		this->_curve = curve;
	}
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIWindow_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIWindow.hx",99,0x52dc5043)
			{
				HX_STACK_LINE(99)
				::String _g = __this->_xml->att->resolve(HX_CSTRING("alt"));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(99)
				return (_g != HX_CSTRING("true"));
			}
			return null();
		}
	};
	HX_STACK_LINE(99)
	if (((  (((  ((this->_xml->has->resolve(HX_CSTRING("alt")))) ? bool(_Function_1_1::Block(this)) : bool(false) ))) ? bool(!(this->_attributes->get_style7())) : bool(false) ))){
		HX_STACK_LINE(100)
		::openfl::display::Shape _g1 = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(100)
		::openfl::display::Shape _g2 = this->_iMask = _g1;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(100)
		::openfl::display::DisplayObject _g3 = this->set_mask(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(100)
		this->addChild(_g3);
	}
	HX_STACK_LINE(102)
	if ((this->_xml->has->resolve(HX_CSTRING("leftButton")))){
		HX_STACK_LINE(103)
		::String _g4 = this->_xml->att->resolve(HX_CSTRING("leftButton"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(103)
		this->set_leftButtonText(_g4);
	}
	HX_STACK_LINE(105)
	if ((this->_xml->has->resolve(HX_CSTRING("rightButton")))){
		HX_STACK_LINE(106)
		::String _g5 = this->_xml->att->resolve(HX_CSTRING("rightButton"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(106)
		this->set_rightButtonText(_g5);
	}
	HX_STACK_LINE(108)
	if (((bool((this->_leftButton == null())) && bool((this->_rightButton == null()))))){
		HX_STACK_LINE(109)
		this->drawBackground(null());
	}
}
;
	return null();
}

//UIWindow_obj::~UIWindow_obj() { }

Dynamic UIWindow_obj::__CreateEmpty() { return  new UIWindow_obj; }
hx::ObjectPtr< UIWindow_obj > UIWindow_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,hx::Null< Float >  __o_curve,hx::Null< bool >  __o_centre)
{  hx::ObjectPtr< UIWindow_obj > result = new UIWindow_obj();
	result->__construct(screen,xml,attributes,__o_curve,__o_centre);
	return result;}

Dynamic UIWindow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIWindow_obj > result = new UIWindow_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void UIWindow_obj::drawBackground( Array< int > colours){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIWindow","drawBackground",0xedae4da8,"com.danielfreeman.madcomponents.UIWindow.drawBackground","com/danielfreeman/madcomponents/UIWindow.hx",116,0x52dc5043)
		HX_STACK_THIS(this)
		HX_STACK_ARG(colours,"colours")
		HX_STACK_LINE(117)
		this->get_graphics()->clear();
		HX_STACK_LINE(118)
		if (((colours == null()))){
			HX_STACK_LINE(119)
			Array< int > _g = this->_attributes->get_backgroundColours();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(119)
			colours = _g;
		}
		HX_STACK_LINE(122)
		if ((!(this->_attributes->get_style7()))){
			HX_STACK_LINE(123)
			if (((colours->length > (int)3))){
				HX_STACK_LINE(124)
				this->get_graphics()->beginFill(colours->__get((int)3),0.2);
			}
			else{
				HX_STACK_LINE(127)
				this->get_graphics()->beginFill((int)0,0.2);
			}
			HX_STACK_LINE(129)
			this->get_graphics()->drawRoundRect(((this->_attributes->x - this->_curve) + 4.0),((this->_attributes->y - this->_curve) + 4.0),(this->_attributes->width + ((int)2 * this->_curve)),(this->_attributes->height + ((int)2 * this->_curve)),this->_curve,null());
		}
		HX_STACK_LINE(132)
		if (((colours->length == (int)1))){
			HX_STACK_LINE(133)
			int _g1 = this->_colour = colours->__get((int)0);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(133)
			this->get_graphics()->beginFill(_g1,null());
		}
		else{
			HX_STACK_LINE(135)
			if (((colours->length > (int)1))){
				HX_STACK_LINE(136)
				::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
				HX_STACK_LINE(137)
				Float _g2 = this->get_width();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(137)
				Float _g3 = this->get_height();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(137)
				matr->createGradientBox(_g2,_g3,(Float(::Math_obj::PI) / Float((int)2)),(int)0,(int)0);
				HX_STACK_LINE(138)
				int _g4 = this->_colour = colours->__get((int)0);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(138)
				Dynamic _g5 = Dynamic( Array_obj<Dynamic>::__new().Add(_g4).Add(colours->__get((int)1)));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(138)
				this->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,_g5,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)255)),matr,null(),null(),null());
			}
			else{
				HX_STACK_LINE(141)
				int _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(141)
				if ((this->_attributes->get_style7())){
					HX_STACK_LINE(141)
					_g6 = (int)16119285;
				}
				else{
					HX_STACK_LINE(141)
					_g6 = (int)6710886;
				}
				HX_STACK_LINE(141)
				int _g7 = this->_colour = _g6;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(141)
				this->get_graphics()->beginFill(_g7,null());
			}
		}
		HX_STACK_LINE(144)
		this->get_graphics()->drawRoundRect((this->_attributes->x - this->_curve),(this->_attributes->y - this->_curve),(this->_attributes->width + ((int)2 * this->_curve)),(this->_attributes->height + ((int)2 * this->_curve)),this->_curve,null());
		HX_STACK_LINE(145)
		this->get_graphics()->endFill();
		HX_STACK_LINE(147)
		if (((this->_iMask != null()))){
			HX_STACK_LINE(148)
			this->_iMask->get_graphics()->beginFill((int)0,null());
			HX_STACK_LINE(149)
			this->_iMask->get_graphics()->drawRoundRect((this->_attributes->x - this->_curve),(this->_attributes->y - this->_curve),(this->_attributes->width + ((int)2 * this->_curve)),(this->_attributes->height + ((int)2 * this->_curve)),this->_curve,null());
			HX_STACK_LINE(150)
			this->_iMask->get_graphics()->endFill();
			HX_STACK_LINE(152)
			::openfl::geom::Matrix matr0 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr0,"matr0");
			HX_STACK_LINE(153)
			matr0->createGradientBox(((int)2 * this->_attributes->width),((Float(this->_attributes->width) / Float((int)2)) + 24.0),(int)0,(Float(-(this->_attributes->width)) / Float((int)2)),((Float(-(this->_attributes->width)) / Float((int)2)) + 24.0));
			HX_STACK_LINE(154)
			int _g8 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_colour,(int)64);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(154)
			Dynamic _g9 = Dynamic( Array_obj<Dynamic>::__new().Add(_g8).Add(this->_colour));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(154)
			this->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::RADIAL,_g9,Dynamic( Array_obj<Dynamic>::__new().Add((int)1).Add((int)1)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)255)),matr0,null(),null(),null());
			HX_STACK_LINE(155)
			this->get_graphics()->drawEllipse((Float(-(this->_attributes->width)) / Float((int)2)),((Float(-(this->_attributes->width)) / Float((int)2)) + 24.0),((int)2 * this->_attributes->width),(Float(this->_attributes->width) / Float((int)2)));
			HX_STACK_LINE(156)
			this->get_graphics()->endFill();
		}
		HX_STACK_LINE(159)
		if (((colours->length > (int)2))){
			HX_STACK_LINE(160)
			this->_lineColour = colours->__get((int)2);
		}
		HX_STACK_LINE(163)
		if ((!(this->_attributes->get_style7()))){
			HX_STACK_LINE(164)
			this->get_graphics()->lineStyle((2.0 + ((  (((this->_iMask != null()))) ? Float(2.0) : Float((int)0) ))),this->_lineColour,1.0,true,null(),null(),null(),null());
		}
		HX_STACK_LINE(167)
		this->get_graphics()->drawRoundRect((this->_attributes->x - this->_curve),(this->_attributes->y - this->_curve),(this->_attributes->width + ((int)2 * this->_curve)),(this->_attributes->height + ((int)2 * this->_curve)),this->_curve,null());
		HX_STACK_LINE(168)
		this->get_graphics()->endFill();
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIWindow_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIWindow.hx",169,0x52dc5043)
				{
					HX_STACK_LINE(169)
					return (  (((__this->_rightButton != null()))) ? bool(__this->_rightButton->get_visible()) : bool(false) );
				}
				return null();
			}
		};
		HX_STACK_LINE(169)
		if (((  ((!(((  (((this->_leftButton != null()))) ? bool(this->_leftButton->get_visible()) : bool(false) ))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))){
			HX_STACK_LINE(170)
			this->get_graphics()->beginFill(this->_lineColour,null());
			HX_STACK_LINE(171)
			this->get_graphics()->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
			HX_STACK_LINE(172)
			this->get_graphics()->drawRect(-(this->_curve),(this->_attributes->height - 26.0),(this->_attributes->width + ((int)2 * this->_curve)),(int)1);
			HX_STACK_LINE(173)
			if (((  (((  (((  (((this->_leftButton != null()))) ? bool(this->_leftButton->get_visible()) : bool(false) ))) ? bool((this->_rightButton != null())) : bool(false) ))) ? bool(this->_rightButton->get_visible()) : bool(false) ))){
				HX_STACK_LINE(174)
				this->get_graphics()->drawRect((Float(this->_attributes->width) / Float((int)2)),((this->_attributes->height - 26.0) + (int)1),(int)1,(26.0 + this->_curve));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIWindow_obj,drawBackground,(void))

Float UIWindow_obj::get_curve( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIWindow","get_curve",0xeed41430,"com.danielfreeman.madcomponents.UIWindow.get_curve","com/danielfreeman/madcomponents/UIWindow.hx",181,0x52dc5043)
	HX_STACK_THIS(this)
	HX_STACK_LINE(181)
	return this->_curve;
}


HX_DEFINE_DYNAMIC_FUNC0(UIWindow_obj,get_curve,return )

bool UIWindow_obj::get_centred( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIWindow","get_centred",0xa68d30aa,"com.danielfreeman.madcomponents.UIWindow.get_centred","com/danielfreeman/madcomponents/UIWindow.hx",186,0x52dc5043)
	HX_STACK_THIS(this)
	HX_STACK_LINE(186)
	return this->_centred;
}


HX_DEFINE_DYNAMIC_FUNC0(UIWindow_obj,get_centred,return )

::com::danielfreeman::madcomponents::UIBackButton UIWindow_obj::get_leftButton( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIWindow","get_leftButton",0x636d8238,"com.danielfreeman.madcomponents.UIWindow.get_leftButton","com/danielfreeman/madcomponents/UIWindow.hx",191,0x52dc5043)
	HX_STACK_THIS(this)
	HX_STACK_LINE(191)
	return this->_leftButton;
}


HX_DEFINE_DYNAMIC_FUNC0(UIWindow_obj,get_leftButton,return )

::com::danielfreeman::madcomponents::UIBackButton UIWindow_obj::get_rightButton( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIWindow","get_rightButton",0x15c10d2f,"com.danielfreeman.madcomponents.UIWindow.get_rightButton","com/danielfreeman/madcomponents/UIWindow.hx",196,0x52dc5043)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	return this->_rightButton;
}


HX_DEFINE_DYNAMIC_FUNC0(UIWindow_obj,get_rightButton,return )

::String UIWindow_obj::set_rightButtonText( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIWindow","set_rightButtonText",0x4410bc88,"com.danielfreeman.madcomponents.UIWindow.set_rightButtonText","com/danielfreeman/madcomponents/UIWindow.hx",200,0x52dc5043)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(201)
	if (((this->_rightButton != null()))){
		HX_STACK_LINE(202)
		this->_rightButton->set_text(value);
	}
	else{
		HX_STACK_LINE(205)
		::com::danielfreeman::madcomponents::UIBackButton _g = ::com::danielfreeman::madcomponents::UIBackButton_obj::__new(hx::ObjectPtr<OBJ_>(this),(Float(this->_attributes->width) / Float((int)2)),((this->_attributes->height - 26.0) - (int)4),value,(int)0,false,false,false);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(205)
		this->_rightButton = _g;
	}
	HX_STACK_LINE(207)
	this->_rightButton->set_visible((value != HX_CSTRING("")));
	HX_STACK_LINE(208)
	this->_rightButton->set_fixwidth(((Float(this->_attributes->width) / Float((int)2)) + this->_curve));
	HX_STACK_LINE(209)
	this->drawBackground(null());
	HX_STACK_LINE(210)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIWindow_obj,set_rightButtonText,return )

::String UIWindow_obj::get_rightButtonText( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIWindow","get_rightButtonText",0x0773c97c,"com.danielfreeman.madcomponents.UIWindow.get_rightButtonText","com/danielfreeman/madcomponents/UIWindow.hx",215,0x52dc5043)
	HX_STACK_THIS(this)
	HX_STACK_LINE(215)
	if (((this->_rightButton != null()))){
		HX_STACK_LINE(215)
		return this->_rightButton->get_text();
	}
	else{
		HX_STACK_LINE(215)
		return HX_CSTRING("");
	}
	HX_STACK_LINE(215)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIWindow_obj,get_rightButtonText,return )

::String UIWindow_obj::set_leftButtonText( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIWindow","set_leftButtonText",0x88492979,"com.danielfreeman.madcomponents.UIWindow.set_leftButtonText","com/danielfreeman/madcomponents/UIWindow.hx",219,0x52dc5043)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(220)
	if (((this->_leftButton != null()))){
		HX_STACK_LINE(221)
		this->_leftButton->set_text(value);
	}
	else{
		HX_STACK_LINE(224)
		::com::danielfreeman::madcomponents::UIBackButton _g = ::com::danielfreeman::madcomponents::UIBackButton_obj::__new(hx::ObjectPtr<OBJ_>(this),-(this->_curve),((this->_attributes->height - 26.0) - (int)4),value,(int)0,false,false,false);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(224)
		this->_leftButton = _g;
	}
	HX_STACK_LINE(226)
	this->_leftButton->set_visible((value != HX_CSTRING("")));
	HX_STACK_LINE(227)
	this->_leftButton->set_fixwidth(((Float(this->_attributes->width) / Float((int)2)) + this->_curve));
	HX_STACK_LINE(228)
	this->drawBackground(null());
	HX_STACK_LINE(229)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIWindow_obj,set_leftButtonText,return )

::String UIWindow_obj::get_leftButtonText( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIWindow","get_leftButtonText",0xab99f705,"com.danielfreeman.madcomponents.UIWindow.get_leftButtonText","com/danielfreeman/madcomponents/UIWindow.hx",234,0x52dc5043)
	HX_STACK_THIS(this)
	HX_STACK_LINE(234)
	if (((this->_leftButton != null()))){
		HX_STACK_LINE(234)
		return this->_leftButton->get_text();
	}
	else{
		HX_STACK_LINE(234)
		return HX_CSTRING("");
	}
	HX_STACK_LINE(234)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIWindow_obj,get_leftButtonText,return )

Void UIWindow_obj::resize( Float width,Float height){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIWindow","resize",0x2548b08a,"com.danielfreeman.madcomponents.UIWindow.resize","com/danielfreeman/madcomponents/UIWindow.hx",238,0x52dc5043)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(239)
		::String _g = ::Std_obj::string(width);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(239)
		this->_xml->setAttribute(HX_CSTRING("width"),_g);
		HX_STACK_LINE(240)
		::String _g1 = ::Std_obj::string(height);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(240)
		this->_xml->setAttribute(HX_CSTRING("height"),_g1);
		HX_STACK_LINE(241)
		this->layout(this->_attributes);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIWindow_obj,resize,(void))

Float UIWindow_obj::CURVE;

Float UIWindow_obj::OUTLINE;

int UIWindow_obj::LINE_COLOUR;

int UIWindow_obj::FILL_COLOUR;

int UIWindow_obj::FILL_COLOUR7;

Float UIWindow_obj::SHADOW_OFFSET;

int UIWindow_obj::SHADOW_COLOUR;

Float UIWindow_obj::SHADOW_ALPHA;

Float UIWindow_obj::OVERLAP;

Float UIWindow_obj::BUTTON_BAR_HEIGHT;


UIWindow_obj::UIWindow_obj()
{
}

void UIWindow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIWindow);
	HX_MARK_MEMBER_NAME(_curve,"_curve");
	HX_MARK_MEMBER_NAME(_centred,"_centred");
	HX_MARK_MEMBER_NAME(_iMask,"_iMask");
	HX_MARK_MEMBER_NAME(_colour,"_colour");
	HX_MARK_MEMBER_NAME(_leftButton,"_leftButton");
	HX_MARK_MEMBER_NAME(_rightButton,"_rightButton");
	HX_MARK_MEMBER_NAME(_lineColour,"_lineColour");
	HX_MARK_MEMBER_NAME(_xml,"_xml");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIWindow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_curve,"_curve");
	HX_VISIT_MEMBER_NAME(_centred,"_centred");
	HX_VISIT_MEMBER_NAME(_iMask,"_iMask");
	HX_VISIT_MEMBER_NAME(_colour,"_colour");
	HX_VISIT_MEMBER_NAME(_leftButton,"_leftButton");
	HX_VISIT_MEMBER_NAME(_rightButton,"_rightButton");
	HX_VISIT_MEMBER_NAME(_lineColour,"_lineColour");
	HX_VISIT_MEMBER_NAME(_xml,"_xml");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIWindow_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_xml") ) { return _xml; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"curve") ) { return get_curve(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_curve") ) { return _curve; }
		if (HX_FIELD_EQ(inName,"_iMask") ) { return _iMask; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"centred") ) { return get_centred(); }
		if (HX_FIELD_EQ(inName,"_colour") ) { return _colour; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_centred") ) { return _centred; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_curve") ) { return get_curve_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftButton") ) { return get_leftButton(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rightButton") ) { return get_rightButton(); }
		if (HX_FIELD_EQ(inName,"_leftButton") ) { return _leftButton; }
		if (HX_FIELD_EQ(inName,"_lineColour") ) { return _lineColour; }
		if (HX_FIELD_EQ(inName,"get_centred") ) { return get_centred_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_rightButton") ) { return _rightButton; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"leftButtonText") ) { return get_leftButtonText(); }
		if (HX_FIELD_EQ(inName,"drawBackground") ) { return drawBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"get_leftButton") ) { return get_leftButton_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rightButtonText") ) { return get_rightButtonText(); }
		if (HX_FIELD_EQ(inName,"get_rightButton") ) { return get_rightButton_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_leftButtonText") ) { return set_leftButtonText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_leftButtonText") ) { return get_leftButtonText_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_rightButtonText") ) { return set_rightButtonText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rightButtonText") ) { return get_rightButtonText_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIWindow_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_xml") ) { _xml=inValue.Cast< ::MadXML >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_curve") ) { _curve=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_iMask") ) { _iMask=inValue.Cast< ::openfl::display::Shape >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_colour") ) { _colour=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_centred") ) { _centred=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_leftButton") ) { _leftButton=inValue.Cast< ::com::danielfreeman::madcomponents::UIBackButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lineColour") ) { _lineColour=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_rightButton") ) { _rightButton=inValue.Cast< ::com::danielfreeman::madcomponents::UIBackButton >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"leftButtonText") ) { return set_leftButtonText(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rightButtonText") ) { return set_rightButtonText(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIWindow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("curve"));
	outFields->push(HX_CSTRING("centred"));
	outFields->push(HX_CSTRING("leftButton"));
	outFields->push(HX_CSTRING("rightButton"));
	outFields->push(HX_CSTRING("rightButtonText"));
	outFields->push(HX_CSTRING("leftButtonText"));
	outFields->push(HX_CSTRING("_curve"));
	outFields->push(HX_CSTRING("_centred"));
	outFields->push(HX_CSTRING("_iMask"));
	outFields->push(HX_CSTRING("_colour"));
	outFields->push(HX_CSTRING("_leftButton"));
	outFields->push(HX_CSTRING("_rightButton"));
	outFields->push(HX_CSTRING("_lineColour"));
	outFields->push(HX_CSTRING("_xml"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CURVE"),
	HX_CSTRING("OUTLINE"),
	HX_CSTRING("LINE_COLOUR"),
	HX_CSTRING("FILL_COLOUR"),
	HX_CSTRING("FILL_COLOUR7"),
	HX_CSTRING("SHADOW_OFFSET"),
	HX_CSTRING("SHADOW_COLOUR"),
	HX_CSTRING("SHADOW_ALPHA"),
	HX_CSTRING("OVERLAP"),
	HX_CSTRING("BUTTON_BAR_HEIGHT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(UIWindow_obj,_curve),HX_CSTRING("_curve")},
	{hx::fsBool,(int)offsetof(UIWindow_obj,_centred),HX_CSTRING("_centred")},
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(UIWindow_obj,_iMask),HX_CSTRING("_iMask")},
	{hx::fsInt,(int)offsetof(UIWindow_obj,_colour),HX_CSTRING("_colour")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UIBackButton*/ ,(int)offsetof(UIWindow_obj,_leftButton),HX_CSTRING("_leftButton")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UIBackButton*/ ,(int)offsetof(UIWindow_obj,_rightButton),HX_CSTRING("_rightButton")},
	{hx::fsInt,(int)offsetof(UIWindow_obj,_lineColour),HX_CSTRING("_lineColour")},
	{hx::fsObject /*::MadXML*/ ,(int)offsetof(UIWindow_obj,_xml),HX_CSTRING("_xml")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_curve"),
	HX_CSTRING("_centred"),
	HX_CSTRING("_iMask"),
	HX_CSTRING("_colour"),
	HX_CSTRING("_leftButton"),
	HX_CSTRING("_rightButton"),
	HX_CSTRING("_lineColour"),
	HX_CSTRING("_xml"),
	HX_CSTRING("drawBackground"),
	HX_CSTRING("get_curve"),
	HX_CSTRING("get_centred"),
	HX_CSTRING("get_leftButton"),
	HX_CSTRING("get_rightButton"),
	HX_CSTRING("set_rightButtonText"),
	HX_CSTRING("get_rightButtonText"),
	HX_CSTRING("set_leftButtonText"),
	HX_CSTRING("get_leftButtonText"),
	HX_CSTRING("resize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIWindow_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIWindow_obj::CURVE,"CURVE");
	HX_MARK_MEMBER_NAME(UIWindow_obj::OUTLINE,"OUTLINE");
	HX_MARK_MEMBER_NAME(UIWindow_obj::LINE_COLOUR,"LINE_COLOUR");
	HX_MARK_MEMBER_NAME(UIWindow_obj::FILL_COLOUR,"FILL_COLOUR");
	HX_MARK_MEMBER_NAME(UIWindow_obj::FILL_COLOUR7,"FILL_COLOUR7");
	HX_MARK_MEMBER_NAME(UIWindow_obj::SHADOW_OFFSET,"SHADOW_OFFSET");
	HX_MARK_MEMBER_NAME(UIWindow_obj::SHADOW_COLOUR,"SHADOW_COLOUR");
	HX_MARK_MEMBER_NAME(UIWindow_obj::SHADOW_ALPHA,"SHADOW_ALPHA");
	HX_MARK_MEMBER_NAME(UIWindow_obj::OVERLAP,"OVERLAP");
	HX_MARK_MEMBER_NAME(UIWindow_obj::BUTTON_BAR_HEIGHT,"BUTTON_BAR_HEIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIWindow_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIWindow_obj::CURVE,"CURVE");
	HX_VISIT_MEMBER_NAME(UIWindow_obj::OUTLINE,"OUTLINE");
	HX_VISIT_MEMBER_NAME(UIWindow_obj::LINE_COLOUR,"LINE_COLOUR");
	HX_VISIT_MEMBER_NAME(UIWindow_obj::FILL_COLOUR,"FILL_COLOUR");
	HX_VISIT_MEMBER_NAME(UIWindow_obj::FILL_COLOUR7,"FILL_COLOUR7");
	HX_VISIT_MEMBER_NAME(UIWindow_obj::SHADOW_OFFSET,"SHADOW_OFFSET");
	HX_VISIT_MEMBER_NAME(UIWindow_obj::SHADOW_COLOUR,"SHADOW_COLOUR");
	HX_VISIT_MEMBER_NAME(UIWindow_obj::SHADOW_ALPHA,"SHADOW_ALPHA");
	HX_VISIT_MEMBER_NAME(UIWindow_obj::OVERLAP,"OVERLAP");
	HX_VISIT_MEMBER_NAME(UIWindow_obj::BUTTON_BAR_HEIGHT,"BUTTON_BAR_HEIGHT");
};

#endif

Class UIWindow_obj::__mClass;

void UIWindow_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIWindow"), hx::TCanCast< UIWindow_obj> ,sStaticFields,sMemberFields,
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

void UIWindow_obj::__boot()
{
	CURVE= 32.0;
	OUTLINE= 2.0;
	LINE_COLOUR= (int)12237498;
	FILL_COLOUR= (int)6710886;
	FILL_COLOUR7= (int)16119285;
	SHADOW_OFFSET= 4.0;
	SHADOW_COLOUR= (int)0;
	SHADOW_ALPHA= 0.2;
	OVERLAP= 24.0;
	BUTTON_BAR_HEIGHT= 26.0;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
