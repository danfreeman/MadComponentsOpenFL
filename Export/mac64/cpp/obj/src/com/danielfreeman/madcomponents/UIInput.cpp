#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIBlueText
#include <com/danielfreeman/madcomponents/UIBlueText.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIInput
#include <com/danielfreeman/madcomponents/UIInput.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
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
namespace madcomponents{

Void UIInput_obj::__construct(::openfl::display::Sprite screen,Float xx,Float yy,::String text,Array< int > colours,hx::Null< bool >  __o_alt,::String __o_prompt,hx::Null< int >  __o_promptColour,hx::Null< bool >  __o_style7)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIInput","new",0x81429bd4,"com.danielfreeman.madcomponents.UIInput.new","com/danielfreeman/madcomponents/UIInput.hx",15,0xcade7b1f)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xx,"xx")
HX_STACK_ARG(yy,"yy")
HX_STACK_ARG(text,"text")
HX_STACK_ARG(colours,"colours")
HX_STACK_ARG(__o_alt,"alt")
HX_STACK_ARG(__o_prompt,"prompt")
HX_STACK_ARG(__o_promptColour,"promptColour")
HX_STACK_ARG(__o_style7,"style7")
bool alt = __o_alt.Default(false);
::String prompt = __o_prompt.Default(HX_CSTRING(""));
int promptColour = __o_promptColour.Default(10066329);
bool style7 = __o_style7.Default(false);
{
	HX_STACK_LINE(55)
	this->_fixwidth = 80.0;
	HX_STACK_LINE(49)
	this->_format = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("_sans"),(int)16,(int)3355443,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(47)
	this->FORMAT = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("_sans"),(int)16,(int)3355443,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(65)
	super::__construct(screen,null());
	HX_STACK_LINE(66)
	this->set_x(xx);
	HX_STACK_LINE(67)
	this->set_y(yy);
	HX_STACK_LINE(68)
	this->_alt = alt;
	HX_STACK_LINE(69)
	this->_style7 = style7;
	HX_STACK_LINE(70)
	if (((colours != null()))){
		HX_STACK_LINE(70)
		this->_colours = colours;
	}
	else{
		HX_STACK_LINE(70)
		this->_colours = Array_obj< int >::__new();
	}
	HX_STACK_LINE(71)
	::com::danielfreeman::madcomponents::UIBlueText _g = ::com::danielfreeman::madcomponents::UIBlueText_obj::__new(hx::ObjectPtr<OBJ_>(this),(  ((alt)) ? Float(4.0) : Float(10.0) ),(((  ((alt)) ? Float(4.0) : Float(7.0) )) + (int)1),prompt,(int)-1,this->_format,(prompt != HX_CSTRING("")),promptColour);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(71)
	this->set_inputField(_g);
	HX_STACK_LINE(73)
	this->_label->__FieldRef(HX_CSTRING("text")) = text;
	HX_STACK_LINE(77)
	if (((  (((this->_colours->length > (int)4))) ? bool(this->_label->__Field(HX_CSTRING("exists"),true)(HX_CSTRING("highlightColour"))) : bool(false) ))){
		HX_STACK_LINE(78)
		this->_label->__FieldRef(HX_CSTRING("highlightColour")) = this->_colours->__get((int)4);
	}
	HX_STACK_LINE(80)
	if (((text != HX_CSTRING("")))){
		HX_STACK_LINE(81)
		(hx::TCast< com::danielfreeman::madcomponents::UIBlueText >::cast(this->_label))->txtchange(null());
		HX_STACK_LINE(82)
		(hx::TCast< com::danielfreeman::madcomponents::UIBlueText >::cast(this->_label))->focusout(null());
	}
	HX_STACK_LINE(84)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null(),null(),null());
	HX_STACK_LINE(85)
	this->drawOutline(null());
}
;
	return null();
}

//UIInput_obj::~UIInput_obj() { }

Dynamic UIInput_obj::__CreateEmpty() { return  new UIInput_obj; }
hx::ObjectPtr< UIInput_obj > UIInput_obj::__new(::openfl::display::Sprite screen,Float xx,Float yy,::String text,Array< int > colours,hx::Null< bool >  __o_alt,::String __o_prompt,hx::Null< int >  __o_promptColour,hx::Null< bool >  __o_style7)
{  hx::ObjectPtr< UIInput_obj > result = new UIInput_obj();
	result->__construct(screen,xx,yy,text,colours,__o_alt,__o_prompt,__o_promptColour,__o_style7);
	return result;}

Dynamic UIInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIInput_obj > result = new UIInput_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return result;}

hx::Object *UIInput_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

Dynamic UIInput_obj::set_inputField( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIInput","set_inputField",0x15608e19,"com.danielfreeman.madcomponents.UIInput.set_inputField","com/danielfreeman/madcomponents/UIInput.hx",89,0xcade7b1f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(90)
	if (((this->_label != null()))){
		HX_STACK_LINE(91)
		this->_label->__Field(HX_CSTRING("removeEventListener"),true)(::openfl::events::Event_obj::CHANGE,this->textChanged_dyn());
		HX_STACK_LINE(92)
		this->_label->__Field(HX_CSTRING("removeEventListener"),true)(::openfl::events::FocusEvent_obj::FOCUS_OUT,this->focusOut_dyn());
		HX_STACK_LINE(93)
		this->removeChild(this->_label);
	}
	HX_STACK_LINE(95)
	this->_label = value;
	HX_STACK_LINE(96)
	this->_label->__FieldRef(HX_CSTRING("fixwidth")) = (this->_fixwidth - ((int)2 * ((  ((this->_alt)) ? Float(4.0) : Float(10.0) ))));
	HX_STACK_LINE(97)
	this->_label->__Field(HX_CSTRING("addEventListener"),true)(::openfl::events::Event_obj::CHANGE,this->textChanged_dyn());
	HX_STACK_LINE(98)
	this->_label->__Field(HX_CSTRING("addEventListener"),true)(::openfl::events::FocusEvent_obj::FOCUS_OUT,this->focusOut_dyn());
	HX_STACK_LINE(99)
	this->drawOutline(null());
	HX_STACK_LINE(100)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIInput_obj,set_inputField,return )

Dynamic UIInput_obj::get_inputField( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIInput","get_inputField",0xf540a5a5,"com.danielfreeman.madcomponents.UIInput.get_inputField","com/danielfreeman/madcomponents/UIInput.hx",105,0xcade7b1f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	return this->_label;
}


HX_DEFINE_DYNAMIC_FUNC0(UIInput_obj,get_inputField,return )

Void UIInput_obj::focusOut( ::openfl::events::FocusEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIInput","focusOut",0x45559fa2,"com.danielfreeman.madcomponents.UIInput.focusOut","com/danielfreeman/madcomponents/UIInput.hx",109,0xcade7b1f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(110)
		::openfl::events::FocusEvent _g = ::openfl::events::FocusEvent_obj::__new(::openfl::events::FocusEvent_obj::FOCUS_OUT,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(110)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIInput_obj,focusOut,(void))

Void UIInput_obj::textChanged( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIInput","textChanged",0xcae20b3b,"com.danielfreeman.madcomponents.UIInput.textChanged","com/danielfreeman/madcomponents/UIInput.hx",114,0xcade7b1f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(115)
		::openfl::events::TextEvent _g = ::openfl::events::TextEvent_obj::__new(::openfl::events::TextEvent_obj::TEXT_INPUT,null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(115)
		this->dispatchEvent(_g);
		HX_STACK_LINE(116)
		event->stopPropagation();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIInput_obj,textChanged,(void))

Void UIInput_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIInput","mouseDown",0x33158b9b,"com.danielfreeman.madcomponents.UIInput.mouseDown","com/danielfreeman/madcomponents/UIInput.hx",120,0xcade7b1f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(121)
		this->drawOutline(true);
		HX_STACK_LINE(122)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(123)
		event->stopPropagation();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIInput_obj,mouseDown,(void))

Void UIInput_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIInput","mouseUp",0x729e8954,"com.danielfreeman.madcomponents.UIInput.mouseUp","com/danielfreeman/madcomponents/UIInput.hx",127,0xcade7b1f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(128)
		this->drawOutline(null());
		HX_STACK_LINE(129)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(130)
		::openfl::display::InteractiveObject _g = this->get_stage()->get_focus();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(130)
		if ((::Std_obj::is(_g,hx::ClassOf< ::com::danielfreeman::madcomponents::UIBlueText >()))){
			HX_STACK_LINE(131)
			(hx::TCast< com::danielfreeman::madcomponents::UIBlueText >::cast(this->get_stage()->get_focus()))->setSelection((hx::TCast< com::danielfreeman::madcomponents::UIBlueText >::cast(this->get_stage()->get_focus()))->get_text().length,(hx::TCast< com::danielfreeman::madcomponents::UIBlueText >::cast(this->get_stage()->get_focus()))->get_text().length);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIInput_obj,mouseUp,(void))

::String UIInput_obj::set_text( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIInput","set_text",0xaf0911b6,"com.danielfreeman.madcomponents.UIInput.set_text","com/danielfreeman/madcomponents/UIInput.hx",136,0xcade7b1f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(137)
	this->_label->__FieldRef(HX_CSTRING("text")) = value;
	HX_STACK_LINE(138)
	this->drawOutline(null());
	HX_STACK_LINE(139)
	return value;
}


::String UIInput_obj::set_htmlText( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIInput","set_htmlText",0xfa691d41,"com.danielfreeman.madcomponents.UIInput.set_htmlText","com/danielfreeman/madcomponents/UIInput.hx",143,0xcade7b1f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(144)
	this->_label->__FieldRef(HX_CSTRING("htmlText")) = value;
	HX_STACK_LINE(145)
	this->drawOutline(null());
	HX_STACK_LINE(146)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIInput_obj,set_htmlText,return )

::String UIInput_obj::get_text( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIInput","get_text",0x00abb842,"com.danielfreeman.madcomponents.UIInput.get_text","com/danielfreeman/madcomponents/UIInput.hx",151,0xcade7b1f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(151)
	return this->_label->__Field(HX_CSTRING("text"),true);
}


Float UIInput_obj::set_fixwidth( Float value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIInput","set_fixwidth",0x87ce2d9a,"com.danielfreeman.madcomponents.UIInput.set_fixwidth","com/danielfreeman/madcomponents/UIInput.hx",155,0xcade7b1f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(156)
	this->_fixwidth = value;
	HX_STACK_LINE(157)
	this->_label->__FieldRef(HX_CSTRING("fixwidth")) = (value - ((int)2 * ((  ((this->_alt)) ? Float(4.0) : Float(10.0) ))));
	HX_STACK_LINE(158)
	this->drawOutline(null());
	HX_STACK_LINE(159)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIInput_obj,set_fixwidth,return )

Void UIInput_obj::focus( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIInput","focus",0xb758f04c,"com.danielfreeman.madcomponents.UIInput.focus","com/danielfreeman/madcomponents/UIInput.hx",164,0xcade7b1f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(164)
		this->get_stage()->set_focus(this->_label);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIInput_obj,focus,(void))

Void UIInput_obj::drawOutline( hx::Null< bool >  __o_pressed){
bool pressed = __o_pressed.Default(false);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIInput","drawOutline",0x4d9bbb52,"com.danielfreeman.madcomponents.UIInput.drawOutline","com/danielfreeman/madcomponents/UIInput.hx",168,0xcade7b1f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pressed,"pressed")
{
		HX_STACK_LINE(169)
		Float height;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(169)
		height = (this->_label->__Field(HX_CSTRING("height"),true) + ((int)2 * ((  ((this->_alt)) ? Float(4.0) : Float(7.0) ))));
		HX_STACK_LINE(170)
		this->get_graphics()->clear();
		HX_STACK_LINE(171)
		if (((this->_colours->length > (int)3))){
			HX_STACK_LINE(172)
			this->get_graphics()->beginFill(this->_colours->__get((int)3),null());
			HX_STACK_LINE(173)
			this->get_graphics()->drawRect((int)0,(int)0,this->_fixwidth,(height + (int)1));
		}
		HX_STACK_LINE(175)
		Float curve;		HX_STACK_VAR(curve,"curve");
		HX_STACK_LINE(175)
		if ((this->_style7)){
			HX_STACK_LINE(175)
			curve = 6.0;
		}
		else{
			HX_STACK_LINE(175)
			curve = 16.0;
		}
		HX_STACK_LINE(176)
		this->get_graphics()->beginFill((  (((this->_colours->length > (int)0))) ? int(this->_colours->__get((int)0)) : int((int)3355449) ),null());
		HX_STACK_LINE(177)
		this->get_graphics()->drawRoundRect((int)0,(int)0,this->_fixwidth,height,curve,null());
		HX_STACK_LINE(178)
		if ((this->_style7)){
			HX_STACK_LINE(179)
			this->get_graphics()->beginFill((  (((this->_colours->length > (int)1))) ? int(this->_colours->__get((int)1)) : int((int)16777215) ),null());
			HX_STACK_LINE(180)
			this->get_graphics()->drawRoundRect((int)1,(int)1,(this->_fixwidth - (int)2),(height - (int)2),(curve - (int)1),null());
		}
		else{
			HX_STACK_LINE(182)
			this->get_graphics()->beginFill((  (((this->_colours->length > (int)2))) ? int(this->_colours->__get((int)2)) : int((int)11184812) ),null());
			HX_STACK_LINE(183)
			this->get_graphics()->drawRoundRect((int)1,(int)1,(this->_fixwidth - (int)2),(height - (int)2),(curve - (int)1),null());
			HX_STACK_LINE(184)
			this->get_graphics()->beginFill((  (((this->_colours->length > (int)1))) ? int(this->_colours->__get((int)1)) : int((int)15790320) ),null());
			HX_STACK_LINE(185)
			this->get_graphics()->drawRoundRect(2.5,(int)3,(this->_fixwidth - 3.5),(height - (int)4),(curve - (int)2),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIInput_obj,drawOutline,(void))

::openfl::geom::Rectangle UIInput_obj::stageRect( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIInput","stageRect",0x3ffdf576,"com.danielfreeman.madcomponents.UIInput.stageRect","com/danielfreeman/madcomponents/UIInput.hx",190,0xcade7b1f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(191)
	::openfl::geom::Point _g = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(191)
	::openfl::geom::Point leftTop = this->_label->__Field(HX_CSTRING("localToGlobal"),true)(_g);		HX_STACK_VAR(leftTop,"leftTop");
	HX_STACK_LINE(192)
	::openfl::geom::Point _g1 = ::openfl::geom::Point_obj::__new(this->_label->__Field(HX_CSTRING("width"),true),this->_label->__Field(HX_CSTRING("height"),true));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(192)
	::openfl::geom::Point rightBottom = this->_label->__Field(HX_CSTRING("localToGlobal"),true)(_g1);		HX_STACK_VAR(rightBottom,"rightBottom");
	HX_STACK_LINE(193)
	return ::openfl::geom::Rectangle_obj::__new(leftTop->x,leftTop->y,(rightBottom->x - leftTop->x),(rightBottom->y - leftTop->y));
}


HX_DEFINE_DYNAMIC_FUNC0(UIInput_obj,stageRect,return )

Void UIInput_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIInput","destructor",0x983e2645,"com.danielfreeman.madcomponents.UIInput.destructor","com/danielfreeman/madcomponents/UIInput.hx",197,0xcade7b1f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		this->super::destructor();
		HX_STACK_LINE(199)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null());
		HX_STACK_LINE(200)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(201)
		this->_label->__Field(HX_CSTRING("removeEventListener"),true)(::openfl::events::Event_obj::CHANGE,this->textChanged_dyn());
		HX_STACK_LINE(202)
		this->_label->__Field(HX_CSTRING("removeEventListener"),true)(::openfl::events::FocusEvent_obj::FOCUS_OUT,this->focusOut_dyn());
		HX_STACK_LINE(203)
		this->_label->__Field(HX_CSTRING("destructor"),true)();
	}
return null();
}


Float UIInput_obj::SHADOW_OFFSET;

Float UIInput_obj::WIDTH;

Float UIInput_obj::CURVE;

Float UIInput_obj::CURVE7;

Float UIInput_obj::SIZE_X;

Float UIInput_obj::SIZE_Y;

Float UIInput_obj::SIZE_ALT;

int UIInput_obj::COLOUR;

int UIInput_obj::SHADOW_COLOUR;

int UIInput_obj::BACKGROUND;

int UIInput_obj::BACKGROUND7;


UIInput_obj::UIInput_obj()
{
}

void UIInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIInput);
	HX_MARK_MEMBER_NAME(FORMAT,"FORMAT");
	HX_MARK_MEMBER_NAME(_format,"_format");
	HX_MARK_MEMBER_NAME(_label,"_label");
	HX_MARK_MEMBER_NAME(_colours,"_colours");
	HX_MARK_MEMBER_NAME(_fixwidth,"_fixwidth");
	HX_MARK_MEMBER_NAME(_alt,"_alt");
	HX_MARK_MEMBER_NAME(_style7,"_style7");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(FORMAT,"FORMAT");
	HX_VISIT_MEMBER_NAME(_format,"_format");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	HX_VISIT_MEMBER_NAME(_colours,"_colours");
	HX_VISIT_MEMBER_NAME(_fixwidth,"_fixwidth");
	HX_VISIT_MEMBER_NAME(_alt,"_alt");
	HX_VISIT_MEMBER_NAME(_style7,"_style7");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIInput_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_alt") ) { return _alt; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { return focus_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"FORMAT") ) { return FORMAT; }
		if (HX_FIELD_EQ(inName,"_label") ) { return _label; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_format") ) { return _format; }
		if (HX_FIELD_EQ(inName,"_style7") ) { return _style7; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_colours") ) { return _colours; }
		if (HX_FIELD_EQ(inName,"focusOut") ) { return focusOut_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fixwidth") ) { return _fixwidth; }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"stageRect") ) { return stageRect_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inputField") ) { return get_inputField(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"textChanged") ) { return textChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"drawOutline") ) { return drawOutline_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return set_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fixwidth") ) { return set_fixwidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_inputField") ) { return set_inputField_dyn(); }
		if (HX_FIELD_EQ(inName,"get_inputField") ) { return get_inputField_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_alt") ) { _alt=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"FORMAT") ) { FORMAT=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_format") ) { _format=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_style7") ) { _style7=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"htmlText") ) { return set_htmlText(inValue); }
		if (HX_FIELD_EQ(inName,"fixwidth") ) { return set_fixwidth(inValue); }
		if (HX_FIELD_EQ(inName,"_colours") ) { _colours=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fixwidth") ) { _fixwidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inputField") ) { return set_inputField(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("inputField"));
	outFields->push(HX_CSTRING("htmlText"));
	outFields->push(HX_CSTRING("fixwidth"));
	outFields->push(HX_CSTRING("FORMAT"));
	outFields->push(HX_CSTRING("_format"));
	outFields->push(HX_CSTRING("_label"));
	outFields->push(HX_CSTRING("_colours"));
	outFields->push(HX_CSTRING("_fixwidth"));
	outFields->push(HX_CSTRING("_alt"));
	outFields->push(HX_CSTRING("_style7"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SHADOW_OFFSET"),
	HX_CSTRING("WIDTH"),
	HX_CSTRING("CURVE"),
	HX_CSTRING("CURVE7"),
	HX_CSTRING("SIZE_X"),
	HX_CSTRING("SIZE_Y"),
	HX_CSTRING("SIZE_ALT"),
	HX_CSTRING("COLOUR"),
	HX_CSTRING("SHADOW_COLOUR"),
	HX_CSTRING("BACKGROUND"),
	HX_CSTRING("BACKGROUND7"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UIInput_obj,FORMAT),HX_CSTRING("FORMAT")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UIInput_obj,_format),HX_CSTRING("_format")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UIInput_obj,_label),HX_CSTRING("_label")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(UIInput_obj,_colours),HX_CSTRING("_colours")},
	{hx::fsFloat,(int)offsetof(UIInput_obj,_fixwidth),HX_CSTRING("_fixwidth")},
	{hx::fsBool,(int)offsetof(UIInput_obj,_alt),HX_CSTRING("_alt")},
	{hx::fsBool,(int)offsetof(UIInput_obj,_style7),HX_CSTRING("_style7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("FORMAT"),
	HX_CSTRING("_format"),
	HX_CSTRING("_label"),
	HX_CSTRING("_colours"),
	HX_CSTRING("_fixwidth"),
	HX_CSTRING("_alt"),
	HX_CSTRING("_style7"),
	HX_CSTRING("set_inputField"),
	HX_CSTRING("get_inputField"),
	HX_CSTRING("focusOut"),
	HX_CSTRING("textChanged"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("set_text"),
	HX_CSTRING("set_htmlText"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_fixwidth"),
	HX_CSTRING("focus"),
	HX_CSTRING("drawOutline"),
	HX_CSTRING("stageRect"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIInput_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIInput_obj::SHADOW_OFFSET,"SHADOW_OFFSET");
	HX_MARK_MEMBER_NAME(UIInput_obj::WIDTH,"WIDTH");
	HX_MARK_MEMBER_NAME(UIInput_obj::CURVE,"CURVE");
	HX_MARK_MEMBER_NAME(UIInput_obj::CURVE7,"CURVE7");
	HX_MARK_MEMBER_NAME(UIInput_obj::SIZE_X,"SIZE_X");
	HX_MARK_MEMBER_NAME(UIInput_obj::SIZE_Y,"SIZE_Y");
	HX_MARK_MEMBER_NAME(UIInput_obj::SIZE_ALT,"SIZE_ALT");
	HX_MARK_MEMBER_NAME(UIInput_obj::COLOUR,"COLOUR");
	HX_MARK_MEMBER_NAME(UIInput_obj::SHADOW_COLOUR,"SHADOW_COLOUR");
	HX_MARK_MEMBER_NAME(UIInput_obj::BACKGROUND,"BACKGROUND");
	HX_MARK_MEMBER_NAME(UIInput_obj::BACKGROUND7,"BACKGROUND7");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIInput_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIInput_obj::SHADOW_OFFSET,"SHADOW_OFFSET");
	HX_VISIT_MEMBER_NAME(UIInput_obj::WIDTH,"WIDTH");
	HX_VISIT_MEMBER_NAME(UIInput_obj::CURVE,"CURVE");
	HX_VISIT_MEMBER_NAME(UIInput_obj::CURVE7,"CURVE7");
	HX_VISIT_MEMBER_NAME(UIInput_obj::SIZE_X,"SIZE_X");
	HX_VISIT_MEMBER_NAME(UIInput_obj::SIZE_Y,"SIZE_Y");
	HX_VISIT_MEMBER_NAME(UIInput_obj::SIZE_ALT,"SIZE_ALT");
	HX_VISIT_MEMBER_NAME(UIInput_obj::COLOUR,"COLOUR");
	HX_VISIT_MEMBER_NAME(UIInput_obj::SHADOW_COLOUR,"SHADOW_COLOUR");
	HX_VISIT_MEMBER_NAME(UIInput_obj::BACKGROUND,"BACKGROUND");
	HX_VISIT_MEMBER_NAME(UIInput_obj::BACKGROUND7,"BACKGROUND7");
};

#endif

Class UIInput_obj::__mClass;

void UIInput_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIInput"), hx::TCanCast< UIInput_obj> ,sStaticFields,sMemberFields,
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

void UIInput_obj::__boot()
{
	SHADOW_OFFSET= 1.0;
	WIDTH= 80.0;
	CURVE= 16.0;
	CURVE7= 6.0;
	SIZE_X= 10.0;
	SIZE_Y= 7.0;
	SIZE_ALT= 4.0;
	COLOUR= (int)3355449;
	SHADOW_COLOUR= (int)11184812;
	BACKGROUND= (int)15790320;
	BACKGROUND7= (int)16777215;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
