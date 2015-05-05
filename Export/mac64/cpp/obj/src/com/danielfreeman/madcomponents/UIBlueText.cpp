#include <hxcpp.h>

#ifndef INCLUDED_com_danielfreeman_madcomponents_UIBlueText
#include <com/danielfreeman/madcomponents/UIBlueText.h>
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
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldType
#include <openfl/text/TextFieldType.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UIBlueText_obj::__construct(::openfl::display::Sprite screen,Float xx,Float yy,::String __o_txt,hx::Null< int >  __o_wdth,::openfl::text::TextFormat format,hx::Null< bool >  __o_ivmode,hx::Null< int >  __o_promptColour)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","new",0x340c3e01,"com.danielfreeman.madcomponents.UIBlueText.new","com/danielfreeman/madcomponents/UIBlueText.hx",14,0xb95dbf6c)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xx,"xx")
HX_STACK_ARG(yy,"yy")
HX_STACK_ARG(__o_txt,"txt")
HX_STACK_ARG(__o_wdth,"wdth")
HX_STACK_ARG(format,"format")
HX_STACK_ARG(__o_ivmode,"ivmode")
HX_STACK_ARG(__o_promptColour,"promptColour")
::String txt = __o_txt.Default(HX_CSTRING(" "));
int wdth = __o_wdth.Default(-1);
bool ivmode = __o_ivmode.Default(false);
int promptColour = __o_promptColour.Default(10066329);
{
	HX_STACK_LINE(52)
	this->_password = false;
	HX_STACK_LINE(48)
	this->_initialTextColour = (int)10066329;
	HX_STACK_LINE(46)
	this->_highlightColour = ::com::danielfreeman::madcomponents::UIBlueText_obj::BLUE;
	HX_STACK_LINE(44)
	this->_defaultColour = (int)16777216;
	HX_STACK_LINE(42)
	this->savewdth = (int)-1;
	HX_STACK_LINE(40)
	this->focussed = false;
	HX_STACK_LINE(60)
	this->_screen = screen;
	HX_STACK_LINE(61)
	this->initialtext = txt;
	HX_STACK_LINE(62)
	this->maxwdth = wdth;
	HX_STACK_LINE(63)
	this->_initialTextColour = promptColour;
	HX_STACK_LINE(64)
	super::__construct(screen,xx,yy,txt,format);
	HX_STACK_LINE(65)
	bool _g = this->ivmode = ivmode;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(65)
	this->initial = _g;
	HX_STACK_LINE(66)
	bool _g1 = this->set_selectable(true);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(66)
	this->set_mouseEnabled(_g1);
	HX_STACK_LINE(67)
	this->set_type(::openfl::text::TextFieldType_obj::INPUT);
	HX_STACK_LINE(68)
	this->addEventListener(::openfl::events::FocusEvent_obj::FOCUS_IN,this->focusin_dyn(),null(),null(),null());
	HX_STACK_LINE(69)
	this->addEventListener(::openfl::events::FocusEvent_obj::FOCUS_OUT,this->focusout_dyn(),null(),null(),null());
	HX_STACK_LINE(70)
	this->addEventListener(::openfl::events::KeyboardEvent_obj::KEY_UP,this->keyup_dyn(),null(),null(),null());
	HX_STACK_LINE(71)
	this->addEventListener(::openfl::events::Event_obj::CHANGE,this->txtchange0_dyn(),null(),null(),null());
	HX_STACK_LINE(72)
	if (((wdth >= (int)0))){
		HX_STACK_LINE(73)
		this->addEventListener(::openfl::events::TextEvent_obj::TEXT_INPUT,this->txtchange_dyn(),null(),null(),null());
	}
}
;
	return null();
}

//UIBlueText_obj::~UIBlueText_obj() { }

Dynamic UIBlueText_obj::__CreateEmpty() { return  new UIBlueText_obj; }
hx::ObjectPtr< UIBlueText_obj > UIBlueText_obj::__new(::openfl::display::Sprite screen,Float xx,Float yy,::String __o_txt,hx::Null< int >  __o_wdth,::openfl::text::TextFormat format,hx::Null< bool >  __o_ivmode,hx::Null< int >  __o_promptColour)
{  hx::ObjectPtr< UIBlueText_obj > result = new UIBlueText_obj();
	result->__construct(screen,xx,yy,__o_txt,__o_wdth,format,__o_ivmode,__o_promptColour);
	return result;}

Dynamic UIBlueText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIBlueText_obj > result = new UIBlueText_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

bool UIBlueText_obj::set_password( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","set_password",0x4c0a50d7,"com.danielfreeman.madcomponents.UIBlueText.set_password","com/danielfreeman/madcomponents/UIBlueText.hx",78,0xb95dbf6c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(79)
	this->_password = value;
	HX_STACK_LINE(80)
	this->set_displayAsPassword((  ((this->initial)) ? bool(false) : bool(this->_password) ));
	HX_STACK_LINE(81)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIBlueText_obj,set_password,return )

bool UIBlueText_obj::get_password( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","get_password",0x37112d63,"com.danielfreeman.madcomponents.UIBlueText.get_password","com/danielfreeman/madcomponents/UIBlueText.hx",86,0xb95dbf6c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	return this->_password;
}


HX_DEFINE_DYNAMIC_FUNC0(UIBlueText_obj,get_password,return )

Void UIBlueText_obj::keyup( ::openfl::events::KeyboardEvent ev){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","keyup",0xc3e6ad9b,"com.danielfreeman.madcomponents.UIBlueText.keyup","com/danielfreeman/madcomponents/UIBlueText.hx",91,0xb95dbf6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ev,"ev")
		HX_STACK_LINE(91)
		if (((  (((ev->keyCode == (int)13))) ? bool(!(this->get_multiline())) : bool(false) ))){
			HX_STACK_LINE(92)
			this->get_stage()->set_focus(null());
			HX_STACK_LINE(93)
			::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("enter"),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(93)
			this->_screen->dispatchEvent(_g);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIBlueText_obj,keyup,(void))

::String UIBlueText_obj::set_defaultext( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","set_defaultext",0x0e80773c,"com.danielfreeman.madcomponents.UIBlueText.set_defaultext","com/danielfreeman/madcomponents/UIBlueText.hx",98,0xb95dbf6c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(99)
	this->initialtext = value;
	HX_STACK_LINE(100)
	this->ivmode = true;
	HX_STACK_LINE(101)
	if ((this->initial)){
		HX_STACK_LINE(102)
		this->setInitialText();
	}
	HX_STACK_LINE(104)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIBlueText_obj,set_defaultext,return )

Void UIBlueText_obj::setInitialText( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","setInitialText",0x23357ace,"com.danielfreeman.madcomponents.UIBlueText.setInitialText","com/danielfreeman/madcomponents/UIBlueText.hx",108,0xb95dbf6c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(109)
		if ((!(this->initial))){
			HX_STACK_LINE(110)
			this->_saveTextColour = this->get_defaultTextFormat()->color;
		}
		HX_STACK_LINE(112)
		this->setTextColour(this->_initialTextColour);
		HX_STACK_LINE(113)
		this->super::set_text(this->initialtext);
		HX_STACK_LINE(114)
		this->set_displayAsPassword(false);
		HX_STACK_LINE(115)
		this->initial = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIBlueText_obj,setInitialText,(void))

Void UIBlueText_obj::setTextColour( int value){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","setTextColour",0x6833a7fc,"com.danielfreeman.madcomponents.UIBlueText.setTextColour","com/danielfreeman/madcomponents/UIBlueText.hx",119,0xb95dbf6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(120)
		::openfl::text::TextFormat textFormat = this->get_defaultTextFormat();		HX_STACK_VAR(textFormat,"textFormat");
		HX_STACK_LINE(121)
		textFormat->color = value;
		HX_STACK_LINE(122)
		this->set_defaultTextFormat(textFormat);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIBlueText_obj,setTextColour,(void))

int UIBlueText_obj::set_defaultColour( int value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","set_defaultColour",0x05da24b1,"com.danielfreeman.madcomponents.UIBlueText.set_defaultColour","com/danielfreeman/madcomponents/UIBlueText.hx",126,0xb95dbf6c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(127)
	int _g = this->_defaultColour = value;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(127)
	this->set_backgroundColor(_g);
	HX_STACK_LINE(128)
	this->set_background(true);
	HX_STACK_LINE(129)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIBlueText_obj,set_defaultColour,return )

int UIBlueText_obj::get_defaultColour( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","get_defaultColour",0xe26c4ca5,"com.danielfreeman.madcomponents.UIBlueText.get_defaultColour","com/danielfreeman/madcomponents/UIBlueText.hx",134,0xb95dbf6c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	return this->_defaultColour;
}


HX_DEFINE_DYNAMIC_FUNC0(UIBlueText_obj,get_defaultColour,return )

::String UIBlueText_obj::get_text( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","get_text",0x63c612f5,"com.danielfreeman.madcomponents.UIBlueText.get_text","com/danielfreeman/madcomponents/UIBlueText.hx",139,0xb95dbf6c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(139)
	if ((this->initial)){
		HX_STACK_LINE(139)
		return HX_CSTRING("");
	}
	else{
		HX_STACK_LINE(139)
		return this->super::get_text();
	}
	HX_STACK_LINE(139)
	return null();
}


::String UIBlueText_obj::set_text( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","set_text",0x12236c69,"com.danielfreeman.madcomponents.UIBlueText.set_text","com/danielfreeman/madcomponents/UIBlueText.hx",143,0xb95dbf6c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(144)
	if (((bool(this->ivmode) && bool((value == HX_CSTRING("")))))){
		HX_STACK_LINE(145)
		this->setInitialText();
	}
	else{
		HX_STACK_LINE(147)
		this->setTextColour(this->_saveTextColour);
		HX_STACK_LINE(148)
		this->super::set_text(value);
		HX_STACK_LINE(149)
		this->set_displayAsPassword(this->_password);
		HX_STACK_LINE(150)
		this->initial = false;
	}
	HX_STACK_LINE(152)
	Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(152)
	this->savewdth = _g;
	HX_STACK_LINE(153)
	this->txtchange(null());
	HX_STACK_LINE(154)
	return value;
}


Float UIBlueText_obj::set_fixwidth( Float value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","set_fixwidth",0xa0d75dcd,"com.danielfreeman.madcomponents.UIBlueText.set_fixwidth","com/danielfreeman/madcomponents/UIBlueText.hx",158,0xb95dbf6c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(159)
	this->super::set_width(value);
	HX_STACK_LINE(160)
	this->savewdth = value;
	HX_STACK_LINE(161)
	this->maxwdth = (int)-1;
	HX_STACK_LINE(162)
	this->set_autoSize(::openfl::text::TextFieldAutoSize_obj::NONE);
	HX_STACK_LINE(163)
	this->removeEventListener(::openfl::events::TextEvent_obj::TEXT_INPUT,this->txtchange_dyn(),null());
	HX_STACK_LINE(164)
	return value;
}


Void UIBlueText_obj::txtchange( ::openfl::events::TextEvent ev){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","txtchange",0x8c7d5041,"com.danielfreeman.madcomponents.UIBlueText.txtchange","com/danielfreeman/madcomponents/UIBlueText.hx",168,0xb95dbf6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ev,"ev")
		HX_STACK_LINE(169)
		this->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIBlueText_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIBlueText.hx",170,0xb95dbf6c)
				{
					HX_STACK_LINE(170)
					Float _g = __this->get_width();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(170)
					return (_g > __this->maxwdth);
				}
				return null();
			}
		};
		HX_STACK_LINE(170)
		if (((  (((this->maxwdth >= (int)0))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(171)
			this->super::set_width(this->maxwdth);
		}
		else{
			HX_STACK_LINE(173)
			Float _g1 = this->set_fixwidth(this->savewdth);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(173)
			this->super::set_width(_g1);
			HX_STACK_LINE(174)
			this->set_autoSize(::openfl::text::TextFieldAutoSize_obj::NONE);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIBlueText_obj,txtchange,(void))

Void UIBlueText_obj::clear( ::String __o_text){
::String text = __o_text.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","clear",0x2d43496e,"com.danielfreeman.madcomponents.UIBlueText.clear","com/danielfreeman/madcomponents/UIBlueText.hx",180,0xb95dbf6c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
{
		HX_STACK_LINE(180)
		this->super::set_text(text);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIBlueText_obj,clear,(void))

Void UIBlueText_obj::txtchange0( ::openfl::events::Event ev){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","txtchange0",0x6128e8cf,"com.danielfreeman.madcomponents.UIBlueText.txtchange0","com/danielfreeman/madcomponents/UIBlueText.hx",184,0xb95dbf6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ev,"ev")
		HX_STACK_LINE(185)
		this->initial = false;
		HX_STACK_LINE(186)
		this->set_displayAsPassword(this->_password);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIBlueText_obj,txtchange0,(void))

Void UIBlueText_obj::focusin( ::openfl::events::FocusEvent ev){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","focusin",0x11f9b3de,"com.danielfreeman.madcomponents.UIBlueText.focusin","com/danielfreeman/madcomponents/UIBlueText.hx",190,0xb95dbf6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ev,"ev")
		HX_STACK_LINE(191)
		bool _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(191)
		if (((this->_highlightColour < (int)16777216))){
			HX_STACK_LINE(191)
			if ((!(((this->_defaultColour < (int)16777216))))){
				HX_STACK_LINE(191)
				int _g = this->get_backgroundColor();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(191)
				_g1 = (_g != (int)0);
			}
			else{
				HX_STACK_LINE(191)
				_g1 = true;
			}
		}
		else{
			HX_STACK_LINE(191)
			_g1 = false;
		}
		HX_STACK_LINE(191)
		this->set_background(_g1);
		HX_STACK_LINE(192)
		this->set_backgroundColor(this->_highlightColour);
		HX_STACK_LINE(193)
		if (((bool(this->initial) && bool(this->ivmode)))){
			HX_STACK_LINE(194)
			this->super::set_text(HX_CSTRING(""));
			HX_STACK_LINE(195)
			this->set_displayAsPassword(this->_password);
			HX_STACK_LINE(196)
			::openfl::text::TextFormat textFormat = this->get_defaultTextFormat();		HX_STACK_VAR(textFormat,"textFormat");
			HX_STACK_LINE(197)
			textFormat->color = this->_saveTextColour;
			HX_STACK_LINE(198)
			this->set_defaultTextFormat(textFormat);
			HX_STACK_LINE(199)
			if (((this->savewdth > (int)0))){
				HX_STACK_LINE(200)
				this->set_fixwidth(this->savewdth);
			}
		}
		HX_STACK_LINE(203)
		this->focussed = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIBlueText_obj,focusin,(void))

Void UIBlueText_obj::focusout( ::openfl::events::FocusEvent ev){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","focusout",0xa8884275,"com.danielfreeman.madcomponents.UIBlueText.focusout","com/danielfreeman/madcomponents/UIBlueText.hx",207,0xb95dbf6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ev,"ev")
		HX_STACK_LINE(208)
		::String _g = this->super::get_text();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(208)
		if (((  (((_g == HX_CSTRING("")))) ? bool(this->ivmode) : bool(false) ))){
			HX_STACK_LINE(209)
			this->setInitialText();
			HX_STACK_LINE(210)
			if (((this->savewdth > (int)0))){
				HX_STACK_LINE(211)
				this->set_fixwidth(this->savewdth);
			}
		}
		else{
			HX_STACK_LINE(214)
			this->initial = false;
		}
		HX_STACK_LINE(216)
		this->focussed = false;
		HX_STACK_LINE(217)
		this->set_background((this->_defaultColour < (int)16777216));
		HX_STACK_LINE(218)
		if ((this->get_background())){
			HX_STACK_LINE(219)
			this->set_backgroundColor(this->_defaultColour);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIBlueText_obj,focusout,(void))

int UIBlueText_obj::set_highlightColour( int value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","set_highlightColour",0x677d7364,"com.danielfreeman.madcomponents.UIBlueText.set_highlightColour","com/danielfreeman/madcomponents/UIBlueText.hx",224,0xb95dbf6c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(225)
	this->_highlightColour = value;
	HX_STACK_LINE(226)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIBlueText_obj,set_highlightColour,return )

Void UIBlueText_obj::focus( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","focus",0xe97137b9,"com.danielfreeman.madcomponents.UIBlueText.focus","com/danielfreeman/madcomponents/UIBlueText.hx",231,0xb95dbf6c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		this->get_stage()->set_focus(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIBlueText_obj,focus,(void))

Void UIBlueText_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIBlueText","destructor",0xbaaad3b8,"com.danielfreeman.madcomponents.UIBlueText.destructor","com/danielfreeman/madcomponents/UIBlueText.hx",235,0xb95dbf6c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(236)
		this->removeEventListener(::openfl::events::FocusEvent_obj::FOCUS_IN,this->focusin_dyn(),null());
		HX_STACK_LINE(237)
		this->removeEventListener(::openfl::events::FocusEvent_obj::FOCUS_OUT,this->focusout_dyn(),null());
		HX_STACK_LINE(238)
		this->removeEventListener(::openfl::events::KeyboardEvent_obj::KEY_UP,this->keyup_dyn(),null());
		HX_STACK_LINE(239)
		this->removeEventListener(::openfl::events::Event_obj::CHANGE,this->txtchange0_dyn(),null());
		HX_STACK_LINE(240)
		this->removeEventListener(::openfl::events::TextEvent_obj::TEXT_INPUT,this->txtchange_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIBlueText_obj,destructor,(void))

::String UIBlueText_obj::ENTER;

int UIBlueText_obj::BLUE;

int UIBlueText_obj::GREY;


UIBlueText_obj::UIBlueText_obj()
{
}

void UIBlueText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIBlueText);
	HX_MARK_MEMBER_NAME(ivmode,"ivmode");
	HX_MARK_MEMBER_NAME(initial,"initial");
	HX_MARK_MEMBER_NAME(initialtext,"initialtext");
	HX_MARK_MEMBER_NAME(maxwdth,"maxwdth");
	HX_MARK_MEMBER_NAME(focussed,"focussed");
	HX_MARK_MEMBER_NAME(savewdth,"savewdth");
	HX_MARK_MEMBER_NAME(_defaultColour,"_defaultColour");
	HX_MARK_MEMBER_NAME(_highlightColour,"_highlightColour");
	HX_MARK_MEMBER_NAME(_initialTextColour,"_initialTextColour");
	HX_MARK_MEMBER_NAME(_saveTextColour,"_saveTextColour");
	HX_MARK_MEMBER_NAME(_password,"_password");
	HX_MARK_MEMBER_NAME(_screen,"_screen");
	::openfl::text::TextField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIBlueText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ivmode,"ivmode");
	HX_VISIT_MEMBER_NAME(initial,"initial");
	HX_VISIT_MEMBER_NAME(initialtext,"initialtext");
	HX_VISIT_MEMBER_NAME(maxwdth,"maxwdth");
	HX_VISIT_MEMBER_NAME(focussed,"focussed");
	HX_VISIT_MEMBER_NAME(savewdth,"savewdth");
	HX_VISIT_MEMBER_NAME(_defaultColour,"_defaultColour");
	HX_VISIT_MEMBER_NAME(_highlightColour,"_highlightColour");
	HX_VISIT_MEMBER_NAME(_initialTextColour,"_initialTextColour");
	HX_VISIT_MEMBER_NAME(_saveTextColour,"_saveTextColour");
	HX_VISIT_MEMBER_NAME(_password,"_password");
	HX_VISIT_MEMBER_NAME(_screen,"_screen");
	::openfl::text::TextField_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIBlueText_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"BLUE") ) { return BLUE; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"keyup") ) { return keyup_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"focus") ) { return focus_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ivmode") ) { return ivmode; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"initial") ) { return initial; }
		if (HX_FIELD_EQ(inName,"maxwdth") ) { return maxwdth; }
		if (HX_FIELD_EQ(inName,"_screen") ) { return _screen; }
		if (HX_FIELD_EQ(inName,"focusin") ) { return focusin_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"password") ) { return get_password(); }
		if (HX_FIELD_EQ(inName,"focussed") ) { return focussed; }
		if (HX_FIELD_EQ(inName,"savewdth") ) { return savewdth; }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"focusout") ) { return focusout_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_password") ) { return _password; }
		if (HX_FIELD_EQ(inName,"txtchange") ) { return txtchange_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"txtchange0") ) { return txtchange0_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialtext") ) { return initialtext; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_password") ) { return set_password_dyn(); }
		if (HX_FIELD_EQ(inName,"get_password") ) { return get_password_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fixwidth") ) { return set_fixwidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultColour") ) { return get_defaultColour(); }
		if (HX_FIELD_EQ(inName,"setTextColour") ) { return setTextColour_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultColour") ) { return _defaultColour; }
		if (HX_FIELD_EQ(inName,"set_defaultext") ) { return set_defaultext_dyn(); }
		if (HX_FIELD_EQ(inName,"setInitialText") ) { return setInitialText_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_saveTextColour") ) { return _saveTextColour; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_highlightColour") ) { return _highlightColour; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_defaultColour") ) { return set_defaultColour_dyn(); }
		if (HX_FIELD_EQ(inName,"get_defaultColour") ) { return get_defaultColour_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_initialTextColour") ) { return _initialTextColour; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_highlightColour") ) { return set_highlightColour_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIBlueText_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"BLUE") ) { BLUE=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ivmode") ) { ivmode=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"initial") ) { initial=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxwdth") ) { maxwdth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_screen") ) { _screen=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"password") ) { return set_password(inValue); }
		if (HX_FIELD_EQ(inName,"focussed") ) { focussed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"savewdth") ) { savewdth=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_password") ) { _password=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultext") ) { return set_defaultext(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialtext") ) { initialtext=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultColour") ) { return set_defaultColour(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultColour") ) { _defaultColour=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"highlightColour") ) { return set_highlightColour(inValue); }
		if (HX_FIELD_EQ(inName,"_saveTextColour") ) { _saveTextColour=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_highlightColour") ) { _highlightColour=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_initialTextColour") ) { _initialTextColour=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIBlueText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("password"));
	outFields->push(HX_CSTRING("defaultext"));
	outFields->push(HX_CSTRING("defaultColour"));
	outFields->push(HX_CSTRING("highlightColour"));
	outFields->push(HX_CSTRING("ivmode"));
	outFields->push(HX_CSTRING("initial"));
	outFields->push(HX_CSTRING("initialtext"));
	outFields->push(HX_CSTRING("maxwdth"));
	outFields->push(HX_CSTRING("focussed"));
	outFields->push(HX_CSTRING("savewdth"));
	outFields->push(HX_CSTRING("_defaultColour"));
	outFields->push(HX_CSTRING("_highlightColour"));
	outFields->push(HX_CSTRING("_initialTextColour"));
	outFields->push(HX_CSTRING("_saveTextColour"));
	outFields->push(HX_CSTRING("_password"));
	outFields->push(HX_CSTRING("_screen"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ENTER"),
	HX_CSTRING("BLUE"),
	HX_CSTRING("GREY"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(UIBlueText_obj,ivmode),HX_CSTRING("ivmode")},
	{hx::fsBool,(int)offsetof(UIBlueText_obj,initial),HX_CSTRING("initial")},
	{hx::fsString,(int)offsetof(UIBlueText_obj,initialtext),HX_CSTRING("initialtext")},
	{hx::fsFloat,(int)offsetof(UIBlueText_obj,maxwdth),HX_CSTRING("maxwdth")},
	{hx::fsBool,(int)offsetof(UIBlueText_obj,focussed),HX_CSTRING("focussed")},
	{hx::fsFloat,(int)offsetof(UIBlueText_obj,savewdth),HX_CSTRING("savewdth")},
	{hx::fsInt,(int)offsetof(UIBlueText_obj,_defaultColour),HX_CSTRING("_defaultColour")},
	{hx::fsInt,(int)offsetof(UIBlueText_obj,_highlightColour),HX_CSTRING("_highlightColour")},
	{hx::fsInt,(int)offsetof(UIBlueText_obj,_initialTextColour),HX_CSTRING("_initialTextColour")},
	{hx::fsInt,(int)offsetof(UIBlueText_obj,_saveTextColour),HX_CSTRING("_saveTextColour")},
	{hx::fsBool,(int)offsetof(UIBlueText_obj,_password),HX_CSTRING("_password")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UIBlueText_obj,_screen),HX_CSTRING("_screen")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ivmode"),
	HX_CSTRING("initial"),
	HX_CSTRING("initialtext"),
	HX_CSTRING("maxwdth"),
	HX_CSTRING("focussed"),
	HX_CSTRING("savewdth"),
	HX_CSTRING("_defaultColour"),
	HX_CSTRING("_highlightColour"),
	HX_CSTRING("_initialTextColour"),
	HX_CSTRING("_saveTextColour"),
	HX_CSTRING("_password"),
	HX_CSTRING("_screen"),
	HX_CSTRING("set_password"),
	HX_CSTRING("get_password"),
	HX_CSTRING("keyup"),
	HX_CSTRING("set_defaultext"),
	HX_CSTRING("setInitialText"),
	HX_CSTRING("setTextColour"),
	HX_CSTRING("set_defaultColour"),
	HX_CSTRING("get_defaultColour"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("set_fixwidth"),
	HX_CSTRING("txtchange"),
	HX_CSTRING("clear"),
	HX_CSTRING("txtchange0"),
	HX_CSTRING("focusin"),
	HX_CSTRING("focusout"),
	HX_CSTRING("set_highlightColour"),
	HX_CSTRING("focus"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIBlueText_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIBlueText_obj::ENTER,"ENTER");
	HX_MARK_MEMBER_NAME(UIBlueText_obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(UIBlueText_obj::GREY,"GREY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIBlueText_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIBlueText_obj::ENTER,"ENTER");
	HX_VISIT_MEMBER_NAME(UIBlueText_obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(UIBlueText_obj::GREY,"GREY");
};

#endif

Class UIBlueText_obj::__mClass;

void UIBlueText_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIBlueText"), hx::TCanCast< UIBlueText_obj> ,sStaticFields,sMemberFields,
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

void UIBlueText_obj::__boot()
{
	ENTER= HX_CSTRING("enter");
	BLUE= (int)13421823;
	GREY= (int)10066329;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
