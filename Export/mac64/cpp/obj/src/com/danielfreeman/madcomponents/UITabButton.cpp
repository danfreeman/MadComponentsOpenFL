#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IComponentUI
#include <com/danielfreeman/madcomponents/IComponentUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UI
#include <com/danielfreeman/madcomponents/UI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIButton
#include <com/danielfreeman/madcomponents/UIButton.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UITabButton
#include <com/danielfreeman/madcomponents/UITabButton.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
namespace madcomponents{

Void UITabButton_obj::__construct(::openfl::display::Sprite screen,Float xx,Float yy,::String text,int colour,hx::Null< bool >  __o_tiny,hx::Null< bool >  __o_style7)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabButton","new",0x249b9471,"com.danielfreeman.madcomponents.UITabButton.new","com/danielfreeman/madcomponents/UITabButton.hx",43,0xf0fe82a2)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xx,"xx")
HX_STACK_ARG(yy,"yy")
HX_STACK_ARG(text,"text")
HX_STACK_ARG(colour,"colour")
HX_STACK_ARG(__o_tiny,"tiny")
HX_STACK_ARG(__o_style7,"style7")
bool tiny = __o_tiny.Default(false);
bool style7 = __o_style7.Default(false);
{
	HX_STACK_LINE(62)
	this->SMALL_FORMAT = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Tahoma"),(int)12,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(55)
	this->_state = false;
	HX_STACK_LINE(67)
	::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(67)
	this->_icon = _g;
	HX_STACK_LINE(68)
	this->_tiny = tiny;
	HX_STACK_LINE(69)
	this->_screen = screen;
	HX_STACK_LINE(70)
	super::__construct(this->_screen,xx,yy,text,colour,Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1),tiny,style7);
	HX_STACK_LINE(71)
	this->addChild(this->_icon);
	HX_STACK_LINE(72)
	bool _g1 = this->_icon->set_mouseChildren(false);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(72)
	this->_icon->set_mouseEnabled(_g1);
	HX_STACK_LINE(73)
	this->set_filters(null());
	HX_STACK_LINE(74)
	screen->addEventListener(HX_CSTRING("clear"),this->clearState_dyn(),null(),null(),null());
}
;
	return null();
}

//UITabButton_obj::~UITabButton_obj() { }

Dynamic UITabButton_obj::__CreateEmpty() { return  new UITabButton_obj; }
hx::ObjectPtr< UITabButton_obj > UITabButton_obj::__new(::openfl::display::Sprite screen,Float xx,Float yy,::String text,int colour,hx::Null< bool >  __o_tiny,hx::Null< bool >  __o_style7)
{  hx::ObjectPtr< UITabButton_obj > result = new UITabButton_obj();
	result->__construct(screen,xx,yy,text,colour,__o_tiny,__o_style7);
	return result;}

Dynamic UITabButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UITabButton_obj > result = new UITabButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

Void UITabButton_obj::init( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabButton","init",0xe03f05df,"com.danielfreeman.madcomponents.UITabButton.init","com/danielfreeman/madcomponents/UITabButton.hx",78,0xf0fe82a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		if ((!(this->_tiny))){
			HX_STACK_LINE(80)
			this->_format = this->SMALL_FORMAT;
		}
		HX_STACK_LINE(81)
		this->_border = 0.5;
	}
return null();
}


Void UITabButton_obj::clearState( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabButton","clearState",0xc7680553,"com.danielfreeman.madcomponents.UITabButton.clearState","com/danielfreeman/madcomponents/UITabButton.hx",85,0xf0fe82a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(86)
		bool _g = this->_state = false;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		this->drawButton(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UITabButton_obj,clearState,(void))

bool UITabButton_obj::set_state( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabButton","set_state",0xf0656545,"com.danielfreeman.madcomponents.UITabButton.set_state","com/danielfreeman/madcomponents/UITabButton.hx",92,0xf0fe82a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(93)
	bool _g = this->_state = value;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(93)
	this->drawButton(_g);
	HX_STACK_LINE(94)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UITabButton_obj,set_state,return )

::String UITabButton_obj::set_text( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabButton","set_text",0x3434bff9,"com.danielfreeman.madcomponents.UITabButton.set_text","com/danielfreeman/madcomponents/UITabButton.hx",100,0xf0fe82a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(101)
	this->_label->set_text(value);
	HX_STACK_LINE(102)
	this->drawButton(this->_state);
	HX_STACK_LINE(103)
	return value;
}


Void UITabButton_obj::drawButton( hx::Null< bool >  __o_pressed){
bool pressed = __o_pressed.Default(false);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabButton","drawButton",0x89f62d25,"com.danielfreeman.madcomponents.UITabButton.drawButton","com/danielfreeman/madcomponents/UITabButton.hx",109,0xf0fe82a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pressed,"pressed")
{
		HX_STACK_LINE(110)
		this->super::drawButton(pressed);
		HX_STACK_LINE(111)
		Float _g = this->_label->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(111)
		Float _g1 = this->sizeY();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(111)
		Float height = (_g + _g1);		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(112)
		if ((this->_style7)){
			HX_STACK_LINE(113)
			Float _g2 = this->_label->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(113)
			Float _g3 = (_g2 + ((int)2 * this->_gap));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(113)
			Float width = ::Math_obj::max(this->_fixwidth,_g3);		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(114)
			this->get_graphics()->clear();
			HX_STACK_LINE(115)
			this->get_graphics()->beginFill(this->_colour,null());
			HX_STACK_LINE(116)
			this->get_graphics()->drawRect((int)0,(int)0,width,height);
		}
		HX_STACK_LINE(118)
		::openfl::geom::ColorTransform myColor = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(myColor,"myColor");
		HX_STACK_LINE(119)
		this->_icon->set_visible(true);
		HX_STACK_LINE(120)
		if ((pressed)){
			HX_STACK_LINE(121)
			myColor->set_color((int)13421823);
		}
		HX_STACK_LINE(123)
		this->_icon->get_transform()->set_colorTransform(myColor);
		HX_STACK_LINE(124)
		Float _g4 = this->_label->get_width();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(124)
		Float _g5 = (this->_fixwidth - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(124)
		Float _g6 = (Float(_g5) / Float((int)2));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(124)
		Float _g7 = ::Math_obj::max(_g6,(int)0);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(124)
		this->_label->set_x(_g7);
		HX_STACK_LINE(125)
		Float _g8 = this->_label->get_x();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(125)
		Float _g9 = (_g8 - (int)1);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(125)
		this->_shadowLabel->set_x(_g9);
		HX_STACK_LINE(126)
		if ((!(this->_tiny))){
			HX_STACK_LINE(127)
			Float _g10 = this->_label->get_height();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(127)
			Float _g11 = (height - _g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(127)
			this->_label->set_y(_g11);
			HX_STACK_LINE(128)
			Float _g12 = this->_label->get_y();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(128)
			Float _g13 = (_g12 - (int)1);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(128)
			this->_shadowLabel->set_y(_g13);
		}
	}
return null();
}


::String UITabButton_obj::set_image( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabButton","set_image",0x29c30e8f,"com.danielfreeman.madcomponents.UITabButton.set_image","com/danielfreeman/madcomponents/UITabButton.hx",135,0xf0fe82a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(136)
	::Class _g = ::Type_obj::resolveClass(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(136)
	::Class _g1 = ::Type_obj::getClass(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(136)
	this->set_imageClass(_g1);
	HX_STACK_LINE(137)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UITabButton_obj,set_image,return )

::Class UITabButton_obj::set_imageClass( ::Class value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabButton","set_imageClass",0x9af8b329,"com.danielfreeman.madcomponents.UITabButton.set_imageClass","com/danielfreeman/madcomponents/UITabButton.hx",143,0xf0fe82a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(144)
	int _g = this->_icon->get_numChildren();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(144)
	if (((_g > (int)0))){
		HX_STACK_LINE(145)
		this->_icon->removeChildAt((int)0);
	}
	HX_STACK_LINE(147)
	if (((value != null()))){
		HX_STACK_LINE(148)
		::openfl::display::Bitmap _g1 = ::Type_obj::createInstance(value,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(148)
		this->_iconBitmap = _g1;
		HX_STACK_LINE(149)
		this->_icon->addChild(this->_iconBitmap);
		HX_STACK_LINE(150)
		Float _g2 = this->_icon->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(150)
		Float _g3 = (this->_fixwidth - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(150)
		Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(150)
		this->_icon->set_x(_g4);
		HX_STACK_LINE(151)
		this->_icon->set_y(6.0);
	}
	HX_STACK_LINE(153)
	this->drawButton(this->_state);
	HX_STACK_LINE(154)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UITabButton_obj,set_imageClass,return )

::Class UITabButton_obj::set_imageBitmapDataClass( ::Class value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabButton","set_imageBitmapDataClass",0x306a85f0,"com.danielfreeman.madcomponents.UITabButton.set_imageBitmapDataClass","com/danielfreeman/madcomponents/UITabButton.hx",161,0xf0fe82a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(162)
	int _g = this->_icon->get_numChildren();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(162)
	if (((_g > (int)0))){
		HX_STACK_LINE(163)
		this->_icon->removeChildAt((int)0);
	}
	HX_STACK_LINE(165)
	if (((value != null()))){
		HX_STACK_LINE(166)
		::openfl::display::BitmapData _g1 = ::Type_obj::createInstance(value,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(166)
		::openfl::display::Bitmap _g2 = ::openfl::display::Bitmap_obj::__new(_g1,null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(166)
		this->_iconBitmap = _g2;
		HX_STACK_LINE(167)
		this->_icon->addChild(this->_iconBitmap);
		HX_STACK_LINE(168)
		Float _g3 = this->_icon->get_width();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(168)
		Float _g4 = (this->_fixwidth - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(168)
		Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(168)
		this->_icon->set_x(_g5);
		HX_STACK_LINE(169)
		this->_icon->set_y(6.0);
	}
	HX_STACK_LINE(171)
	this->drawButton(this->_state);
	HX_STACK_LINE(172)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UITabButton_obj,set_imageBitmapDataClass,return )

Void UITabButton_obj::pixelSnapImage( Float offset){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabButton","pixelSnapImage",0x138e48da,"com.danielfreeman.madcomponents.UITabButton.pixelSnapImage","com/danielfreeman/madcomponents/UITabButton.hx",176,0xf0fe82a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(177)
		Float _g = ::com::danielfreeman::madcomponents::UI_obj::get_scale();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(177)
		Float _g1 = (Float((int)1) / Float(_g));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(177)
		Float _g2 = this->_icon->set_scaleY(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(177)
		this->_icon->set_scaleX(_g2);
		HX_STACK_LINE(178)
		Float _g3 = this->_icon->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(178)
		Float _g4 = (26.0 - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(178)
		Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(178)
		Float _g6 = (_g5 + (int)2);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(178)
		Float _g7 = (_g6 + offset);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(178)
		this->_icon->set_y(_g7);
		HX_STACK_LINE(179)
		this->_iconBitmap->set_pixelSnapping(::openfl::display::PixelSnapping_obj::ALWAYS);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UITabButton_obj,pixelSnapImage,(void))

Float UITabButton_obj::sizeY( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabButton","sizeY",0x15a6b2c9,"com.danielfreeman.madcomponents.UITabButton.sizeY","com/danielfreeman/madcomponents/UITabButton.hx",184,0xf0fe82a2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(184)
	if ((this->_tiny)){
		HX_STACK_LINE(184)
		return ((int)2 * this->_sizeY);
	}
	else{
		HX_STACK_LINE(184)
		return 26.0;
	}
	HX_STACK_LINE(184)
	return 0.;
}


Float UITabButton_obj::set_fixwidth( Float value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabButton","set_fixwidth",0xcb41b95d,"com.danielfreeman.madcomponents.UITabButton.set_fixwidth","com/danielfreeman/madcomponents/UITabButton.hx",190,0xf0fe82a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(191)
	this->_fixwidth = value;
	HX_STACK_LINE(192)
	this->drawButton(this->_state);
	HX_STACK_LINE(193)
	Float _g = this->_icon->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(193)
	Float _g1 = (this->_fixwidth - _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(193)
	Float _g2 = (Float(_g1) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(193)
	this->_icon->set_x(_g2);
	HX_STACK_LINE(194)
	return value;
}


Void UITabButton_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabButton","mouseUp",0x67bc9471,"com.danielfreeman.madcomponents.UITabButton.mouseUp","com/danielfreeman/madcomponents/UITabButton.hx",198,0xf0fe82a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(199)
		Dynamic _g = event->get_target();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(199)
		if (((_g == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(200)
			::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(HX_CSTRING("clear"),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(200)
			this->_screen->dispatchEvent(_g1);
			HX_STACK_LINE(201)
			bool _g2 = this->_state = true;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(201)
			this->drawButton(_g2);
		}
		else{
			HX_STACK_LINE(204)
			this->drawButton(this->_state);
		}
		HX_STACK_LINE(206)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
	}
return null();
}


Void UITabButton_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabButton","destructor",0x82642b48,"com.danielfreeman.madcomponents.UITabButton.destructor","com/danielfreeman/madcomponents/UITabButton.hx",210,0xf0fe82a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(211)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(212)
		this->_screen->removeEventListener(HX_CSTRING("clear"),this->clearState_dyn(),null());
		HX_STACK_LINE(213)
		this->super::destructor();
	}
return null();
}


::String UITabButton_obj::CLEAR;

Float UITabButton_obj::TAB_HEIGHT;

Float UITabButton_obj::ICON_Y;


UITabButton_obj::UITabButton_obj()
{
}

void UITabButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UITabButton);
	HX_MARK_MEMBER_NAME(_state,"_state");
	HX_MARK_MEMBER_NAME(_screen,"_screen");
	HX_MARK_MEMBER_NAME(_icon,"_icon");
	HX_MARK_MEMBER_NAME(_tiny,"_tiny");
	HX_MARK_MEMBER_NAME(_iconBitmap,"_iconBitmap");
	HX_MARK_MEMBER_NAME(SMALL_FORMAT,"SMALL_FORMAT");
	::com::danielfreeman::madcomponents::UIButton_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UITabButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_state,"_state");
	HX_VISIT_MEMBER_NAME(_screen,"_screen");
	HX_VISIT_MEMBER_NAME(_icon,"_icon");
	HX_VISIT_MEMBER_NAME(_tiny,"_tiny");
	HX_VISIT_MEMBER_NAME(_iconBitmap,"_iconBitmap");
	HX_VISIT_MEMBER_NAME(SMALL_FORMAT,"SMALL_FORMAT");
	::com::danielfreeman::madcomponents::UIButton_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UITabButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { return _icon; }
		if (HX_FIELD_EQ(inName,"_tiny") ) { return _tiny; }
		if (HX_FIELD_EQ(inName,"sizeY") ) { return sizeY_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_screen") ) { return _screen; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_state") ) { return set_state_dyn(); }
		if (HX_FIELD_EQ(inName,"set_image") ) { return set_image_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearState") ) { return clearState_dyn(); }
		if (HX_FIELD_EQ(inName,"drawButton") ) { return drawButton_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_iconBitmap") ) { return _iconBitmap; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SMALL_FORMAT") ) { return SMALL_FORMAT; }
		if (HX_FIELD_EQ(inName,"set_fixwidth") ) { return set_fixwidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_imageClass") ) { return set_imageClass_dyn(); }
		if (HX_FIELD_EQ(inName,"pixelSnapImage") ) { return pixelSnapImage_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_imageBitmapDataClass") ) { return set_imageBitmapDataClass_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UITabButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return set_state(inValue); }
		if (HX_FIELD_EQ(inName,"image") ) { return set_image(inValue); }
		if (HX_FIELD_EQ(inName,"_icon") ) { _icon=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tiny") ) { _tiny=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_screen") ) { _screen=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imageClass") ) { return set_imageClass(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_iconBitmap") ) { _iconBitmap=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SMALL_FORMAT") ) { SMALL_FORMAT=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"imageBitmapDataClass") ) { return set_imageBitmapDataClass(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UITabButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("image"));
	outFields->push(HX_CSTRING("imageClass"));
	outFields->push(HX_CSTRING("imageBitmapDataClass"));
	outFields->push(HX_CSTRING("_state"));
	outFields->push(HX_CSTRING("_screen"));
	outFields->push(HX_CSTRING("_icon"));
	outFields->push(HX_CSTRING("_tiny"));
	outFields->push(HX_CSTRING("_iconBitmap"));
	outFields->push(HX_CSTRING("SMALL_FORMAT"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CLEAR"),
	HX_CSTRING("TAB_HEIGHT"),
	HX_CSTRING("ICON_Y"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(UITabButton_obj,_state),HX_CSTRING("_state")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UITabButton_obj,_screen),HX_CSTRING("_screen")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UITabButton_obj,_icon),HX_CSTRING("_icon")},
	{hx::fsBool,(int)offsetof(UITabButton_obj,_tiny),HX_CSTRING("_tiny")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(UITabButton_obj,_iconBitmap),HX_CSTRING("_iconBitmap")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UITabButton_obj,SMALL_FORMAT),HX_CSTRING("SMALL_FORMAT")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_state"),
	HX_CSTRING("_screen"),
	HX_CSTRING("_icon"),
	HX_CSTRING("_tiny"),
	HX_CSTRING("_iconBitmap"),
	HX_CSTRING("SMALL_FORMAT"),
	HX_CSTRING("init"),
	HX_CSTRING("clearState"),
	HX_CSTRING("set_state"),
	HX_CSTRING("set_text"),
	HX_CSTRING("drawButton"),
	HX_CSTRING("set_image"),
	HX_CSTRING("set_imageClass"),
	HX_CSTRING("set_imageBitmapDataClass"),
	HX_CSTRING("pixelSnapImage"),
	HX_CSTRING("sizeY"),
	HX_CSTRING("set_fixwidth"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UITabButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UITabButton_obj::CLEAR,"CLEAR");
	HX_MARK_MEMBER_NAME(UITabButton_obj::TAB_HEIGHT,"TAB_HEIGHT");
	HX_MARK_MEMBER_NAME(UITabButton_obj::ICON_Y,"ICON_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UITabButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UITabButton_obj::CLEAR,"CLEAR");
	HX_VISIT_MEMBER_NAME(UITabButton_obj::TAB_HEIGHT,"TAB_HEIGHT");
	HX_VISIT_MEMBER_NAME(UITabButton_obj::ICON_Y,"ICON_Y");
};

#endif

Class UITabButton_obj::__mClass;

void UITabButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UITabButton"), hx::TCanCast< UITabButton_obj> ,sStaticFields,sMemberFields,
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

void UITabButton_obj::__boot()
{
	CLEAR= HX_CSTRING("clear");
	TAB_HEIGHT= 26.0;
	ICON_Y= 6.0;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
