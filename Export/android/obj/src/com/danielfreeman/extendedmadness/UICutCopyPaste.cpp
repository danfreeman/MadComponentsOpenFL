#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UICutCopyPaste
#include <com/danielfreeman/extendedmadness/UICutCopyPaste.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIList
#include <com/danielfreeman/madcomponents/UIList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical
#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
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
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
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
namespace extendedmadness{

Void UICutCopyPaste_obj::__construct(::openfl::display::Sprite screen,Float xx,Float yy,hx::Null< Float >  __o_arrowPosition,hx::Null< int >  __o_colour,hx::Null< bool >  __o_alt,Array< ::String > words,hx::Null< bool >  __o_style7)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICutCopyPaste","new",0x3f9a21ae,"com.danielfreeman.extendedmadness.UICutCopyPaste.new","com/danielfreeman/extendedmadness/UICutCopyPaste.hx",40,0x0e76fe5f)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xx,"xx")
HX_STACK_ARG(yy,"yy")
HX_STACK_ARG(__o_arrowPosition,"arrowPosition")
HX_STACK_ARG(__o_colour,"colour")
HX_STACK_ARG(__o_alt,"alt")
HX_STACK_ARG(words,"words")
HX_STACK_ARG(__o_style7,"style7")
Float arrowPosition = __o_arrowPosition.Default(0);
int colour = __o_colour.Default(6710886);
bool alt = __o_alt.Default(false);
bool style7 = __o_style7.Default(false);
{
	HX_STACK_LINE(72)
	this->_ready = false;
	HX_STACK_LINE(70)
	this->_pressedColour = ::com::danielfreeman::madcomponents::UIList_obj::HIGHLIGHT;
	HX_STACK_LINE(68)
	this->_font = null();
	HX_STACK_LINE(66)
	this->_height = 38.0;
	HX_STACK_LINE(64)
	this->_gap = 10.0;
	HX_STACK_LINE(63)
	this->_colour = (int)5592405;
	HX_STACK_LINE(62)
	this->_index = (int)-1;
	HX_STACK_LINE(60)
	this->_labels = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(58)
	this->FORMAT = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("_sans"),(int)16,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(81)
	super::__construct(screen,this->_attributes);
	HX_STACK_LINE(82)
	this->set_x(xx);
	HX_STACK_LINE(82)
	this->set_y(yy);
	HX_STACK_LINE(83)
	this->_colour = colour;
	HX_STACK_LINE(84)
	this->_style7 = style7;
	HX_STACK_LINE(85)
	if ((style7)){
		HX_STACK_LINE(85)
		this->_curve = 4.0;
	}
	else{
		HX_STACK_LINE(85)
		this->_curve = 16.0;
	}
	HX_STACK_LINE(86)
	if ((alt)){
		HX_STACK_LINE(86)
		this->_height = 22.0;
	}
	else{
		HX_STACK_LINE(86)
		this->_height = 38.0;
	}
	HX_STACK_LINE(87)
	this->_arrowPosition = arrowPosition;
	HX_STACK_LINE(88)
	::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(88)
	::openfl::display::Sprite _g1 = this->_pressedLayer = _g;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(88)
	this->addChild(_g1);
	HX_STACK_LINE(89)
	this->initialise(words);
	HX_STACK_LINE(90)
	bool _g2 = this->useHandCursor = true;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(90)
	this->buttonMode = _g2;
	HX_STACK_LINE(91)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null(),null(),null());
}
;
	return null();
}

//UICutCopyPaste_obj::~UICutCopyPaste_obj() { }

Dynamic UICutCopyPaste_obj::__CreateEmpty() { return  new UICutCopyPaste_obj; }
hx::ObjectPtr< UICutCopyPaste_obj > UICutCopyPaste_obj::__new(::openfl::display::Sprite screen,Float xx,Float yy,hx::Null< Float >  __o_arrowPosition,hx::Null< int >  __o_colour,hx::Null< bool >  __o_alt,Array< ::String > words,hx::Null< bool >  __o_style7)
{  hx::ObjectPtr< UICutCopyPaste_obj > result = new UICutCopyPaste_obj();
	result->__construct(screen,xx,yy,__o_arrowPosition,__o_colour,__o_alt,words,__o_style7);
	return result;}

Dynamic UICutCopyPaste_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UICutCopyPaste_obj > result = new UICutCopyPaste_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

::MadXML UICutCopyPaste_obj::set_font( ::MadXML value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICutCopyPaste","set_font",0x2ce2a6be,"com.danielfreeman.extendedmadness.UICutCopyPaste.set_font","com/danielfreeman/extendedmadness/UICutCopyPaste.hx",95,0x0e76fe5f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(96)
	this->_font = value;
	HX_STACK_LINE(97)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UICutCopyPaste_obj,set_font,return )

Void UICutCopyPaste_obj::initialise( Array< ::String > words){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICutCopyPaste","initialise",0x25afbfa9,"com.danielfreeman.extendedmadness.UICutCopyPaste.initialise","com/danielfreeman/extendedmadness/UICutCopyPaste.hx",101,0x0e76fe5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(words,"words")
		HX_STACK_LINE(102)
		int _g = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,(int)-32);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		this->_lineColour = _g;
		HX_STACK_LINE(103)
		this->drawButtons((  (((words != null()))) ? Array< ::String >(words) : Array< ::String >(Array_obj< ::String >::__new().Add(HX_CSTRING("Cut")).Add(HX_CSTRING("Copy")).Add(HX_CSTRING("Paste"))) ),this->_arrowPosition);
		HX_STACK_LINE(104)
		::openfl::utils::Timer _g1 = ::openfl::utils::Timer_obj::__new((int)50,(int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(104)
		this->_timer = _g1;
		HX_STACK_LINE(105)
		this->_timer->addEventListener(::openfl::events::TimerEvent_obj::TIMER_COMPLETE,this->resetHighlight_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UICutCopyPaste_obj,initialise,(void))

Void UICutCopyPaste_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICutCopyPaste","mouseDown",0xdca5f0f5,"com.danielfreeman.extendedmadness.UICutCopyPaste.mouseDown","com/danielfreeman/extendedmadness/UICutCopyPaste.hx",109,0x0e76fe5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(110)
		this->_ready = true;
		HX_STACK_LINE(111)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UICutCopyPaste_obj,mouseDown,(void))

Void UICutCopyPaste_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICutCopyPaste","mouseUp",0x78f7042e,"com.danielfreeman.extendedmadness.UICutCopyPaste.mouseUp","com/danielfreeman/extendedmadness/UICutCopyPaste.hx",115,0x0e76fe5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(116)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::extendedmadness::UICutCopyPaste_obj > __this,::openfl::events::MouseEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UICutCopyPaste.hx",117,0x0e76fe5f)
				{
					HX_STACK_LINE(117)
					Dynamic _g = event->get_target();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(117)
					return (_g == __this);
				}
				return null();
			}
		};
		HX_STACK_LINE(117)
		if (((  ((this->_ready)) ? bool(_Function_1_1::Block(this,event)) : bool(false) ))){
			HX_STACK_LINE(118)
			this->updateIndex();
			HX_STACK_LINE(119)
			::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(119)
			this->dispatchEvent(_g1);
			HX_STACK_LINE(120)
			this->showPressed();
			HX_STACK_LINE(121)
			this->_timer->reset();
			HX_STACK_LINE(122)
			this->_timer->start();
		}
		HX_STACK_LINE(124)
		this->_ready = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UICutCopyPaste_obj,mouseUp,(void))

Void UICutCopyPaste_obj::touchCancel( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICutCopyPaste","touchCancel",0xba77a1e7,"com.danielfreeman.extendedmadness.UICutCopyPaste.touchCancel","com/danielfreeman/extendedmadness/UICutCopyPaste.hx",128,0x0e76fe5f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(129)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(130)
		this->_ready = false;
	}
return null();
}


Void UICutCopyPaste_obj::updateIndex( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICutCopyPaste","updateIndex",0x40ba5397,"com.danielfreeman.extendedmadness.UICutCopyPaste.updateIndex","com/danielfreeman/extendedmadness/UICutCopyPaste.hx",134,0x0e76fe5f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(135)
		int i = (this->_labels->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(136)
		while((true)){
			HX_STACK_LINE(136)
			if ((!(((i >= (int)0))))){
				HX_STACK_LINE(136)
				break;
			}
			HX_STACK_LINE(137)
			Float _g = this->_labels->__get(i).StaticCast< ::com::danielfreeman::madcomponents::UILabel >()->get_x();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(137)
			Float position = (_g - this->_gap);		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(138)
			Float _g1 = this->get_mouseX();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(138)
			if (((_g1 > position))){
				HX_STACK_LINE(139)
				this->_index = i;
				HX_STACK_LINE(140)
				return null();
			}
			HX_STACK_LINE(142)
			(i)--;
		}
		HX_STACK_LINE(144)
		this->_index = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UICutCopyPaste_obj,updateIndex,(void))

int UICutCopyPaste_obj::get_index( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICutCopyPaste","get_index",0xefa13737,"com.danielfreeman.extendedmadness.UICutCopyPaste.get_index","com/danielfreeman/extendedmadness/UICutCopyPaste.hx",151,0x0e76fe5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(151)
	return this->_index;
}


HX_DEFINE_DYNAMIC_FUNC0(UICutCopyPaste_obj,get_index,return )

::String UICutCopyPaste_obj::get_value( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICutCopyPaste","get_value",0x63451b96,"com.danielfreeman.extendedmadness.UICutCopyPaste.get_value","com/danielfreeman/extendedmadness/UICutCopyPaste.hx",159,0x0e76fe5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(159)
	if (((this->_index >= (int)0))){
		HX_STACK_LINE(159)
		return this->_labels->__get(this->_index).StaticCast< ::com::danielfreeman::madcomponents::UILabel >()->get_text();
	}
	else{
		HX_STACK_LINE(159)
		return HX_CSTRING("");
	}
	HX_STACK_LINE(159)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UICutCopyPaste_obj,get_value,return )

int UICutCopyPaste_obj::set_index( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICutCopyPaste","set_index",0xd2f22343,"com.danielfreeman.extendedmadness.UICutCopyPaste.set_index","com/danielfreeman/extendedmadness/UICutCopyPaste.hx",166,0x0e76fe5f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(167)
	this->_index = value;
	HX_STACK_LINE(168)
	this->showPressed();
	HX_STACK_LINE(169)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UICutCopyPaste_obj,set_index,return )

Void UICutCopyPaste_obj::drawButtons( Array< ::String > labels,hx::Null< Float >  __o_arrowPosition){
Float arrowPosition = __o_arrowPosition.Default(0);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICutCopyPaste","drawButtons",0xb0cae5eb,"com.danielfreeman.extendedmadness.UICutCopyPaste.drawButtons","com/danielfreeman/extendedmadness/UICutCopyPaste.hx",173,0x0e76fe5f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(labels,"labels")
	HX_STACK_ARG(arrowPosition,"arrowPosition")
{
		HX_STACK_LINE(174)
		Float left = (int)0;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(175)
		{
			HX_STACK_LINE(175)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(175)
			while((true)){
				HX_STACK_LINE(175)
				if ((!(((_g < labels->length))))){
					HX_STACK_LINE(175)
					break;
				}
				HX_STACK_LINE(175)
				::String label = labels->__get(_g);		HX_STACK_VAR(label,"label");
				HX_STACK_LINE(175)
				++(_g);
				struct _Function_3_1{
					inline static Dynamic Block( ::String &label){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UICutCopyPaste.hx",176,0x0e76fe5f)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UICutCopyPaste.hx"),false);
							__result->Add(HX_CSTRING("lineNumber") , (int)176,false);
							__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.extendedmadness.UICutCopyPaste"),false);
							__result->Add(HX_CSTRING("methodName") , HX_CSTRING("drawButtons"),false);
							__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(label)),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(176)
				::haxe::Log_obj::trace(HX_CSTRING("drawButtons"),_Function_3_1::Block(label));
				HX_STACK_LINE(177)
				::com::danielfreeman::madcomponents::UILabel uiLabel = ::com::danielfreeman::madcomponents::UILabel_obj::__new(hx::ObjectPtr<OBJ_>(this),(left + this->_gap),(int)0,HX_CSTRING(""),this->FORMAT);		HX_STACK_VAR(uiLabel,"uiLabel");
				HX_STACK_LINE(178)
				if (((this->_font != null()))){
					HX_STACK_LINE(179)
					::String _g1 = this->_font->toXMLString().substr((int)0,(this->_font->toXMLString().length - (int)2));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(179)
					::String _g11 = (_g1 + HX_CSTRING(">"));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(179)
					::String _g2 = (_g11 + label);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(179)
					::String _g3 = (_g2 + HX_CSTRING("</font>"));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(179)
					uiLabel->set_htmlText(_g3);
				}
				else{
					HX_STACK_LINE(182)
					uiLabel->set_text(label);
				}
				HX_STACK_LINE(184)
				Float _g4 = uiLabel->get_height();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(184)
				Float _g5 = (this->_height - _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(184)
				Float _g6 = (Float(_g5) / Float((int)2));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(184)
				uiLabel->set_y(_g6);
				HX_STACK_LINE(185)
				Float _g7 = uiLabel->get_width();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(185)
				Float _g8 = (_g7 + ((int)2 * this->_gap));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(185)
				hx::AddEq(left,_g8);
				HX_STACK_LINE(186)
				this->_labels->push(uiLabel);
			}
		}
		HX_STACK_LINE(188)
		this->buttonChrome(left,arrowPosition);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UICutCopyPaste_obj,drawButtons,(void))

Void UICutCopyPaste_obj::drawComponent( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICutCopyPaste","drawComponent",0x64f542e7,"com.danielfreeman.extendedmadness.UICutCopyPaste.drawComponent","com/danielfreeman/extendedmadness/UICutCopyPaste.hx",192,0x0e76fe5f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UICutCopyPaste_obj,drawComponent,(void))

Void UICutCopyPaste_obj::buttonChrome( Float left,hx::Null< Float >  __o_arrowPosition){
Float arrowPosition = __o_arrowPosition.Default(0);
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICutCopyPaste","buttonChrome",0x3905e5fe,"com.danielfreeman.extendedmadness.UICutCopyPaste.buttonChrome","com/danielfreeman/extendedmadness/UICutCopyPaste.hx",197,0x0e76fe5f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(arrowPosition,"arrowPosition")
{
		HX_STACK_LINE(198)
		::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(199)
		int _g = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_colour,(int)128);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(199)
		Array< int > gradient = Array_obj< int >::__new().Add(_g).Add(this->_colour).Add(this->_colour);		HX_STACK_VAR(gradient,"gradient");
		HX_STACK_LINE(201)
		matr->createGradientBox(left,this->_height,(Float(::Math_obj::PI) / Float((int)2)),(int)0,(int)0);
		HX_STACK_LINE(202)
		this->get_graphics()->clear();
		HX_STACK_LINE(203)
		if ((this->_style7)){
			HX_STACK_LINE(204)
			this->get_graphics()->beginFill(gradient->__get((int)1),null());
		}
		else{
			HX_STACK_LINE(207)
			this->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,gradient,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)128).Add((int)255)),matr,null(),null(),null());
		}
		HX_STACK_LINE(209)
		this->get_graphics()->lineStyle((int)1,this->_lineColour,1.0,true,null(),null(),null(),null());
		HX_STACK_LINE(210)
		this->get_graphics()->moveTo((int)0,this->_curve);
		HX_STACK_LINE(211)
		this->get_graphics()->curveTo((int)0,(int)0,this->_curve,(int)0);
		HX_STACK_LINE(212)
		if (((arrowPosition < (int)0))){
			HX_STACK_LINE(213)
			this->get_graphics()->lineTo((-(arrowPosition) - 14.0),(int)0);
			HX_STACK_LINE(214)
			this->get_graphics()->lineTo(-(arrowPosition),-14.);
			HX_STACK_LINE(215)
			this->get_graphics()->lineTo((-(arrowPosition) + 14.0),(int)0);
		}
		HX_STACK_LINE(217)
		this->get_graphics()->lineTo((left - this->_curve),(int)0);
		HX_STACK_LINE(218)
		this->get_graphics()->curveTo(left,(int)0,left,this->_curve);
		HX_STACK_LINE(219)
		this->get_graphics()->lineTo(left,(this->_height - this->_curve));
		HX_STACK_LINE(220)
		this->get_graphics()->curveTo(left,this->_height,(left - this->_curve),this->_height);
		HX_STACK_LINE(221)
		if (((arrowPosition > (int)0))){
			HX_STACK_LINE(222)
			this->get_graphics()->lineTo((arrowPosition + 14.0),this->_height);
			HX_STACK_LINE(223)
			this->get_graphics()->lineTo(arrowPosition,(this->_height + 14.0));
			HX_STACK_LINE(224)
			this->get_graphics()->lineTo((arrowPosition - 14.0),this->_height);
		}
		HX_STACK_LINE(226)
		this->get_graphics()->lineTo(this->_curve,this->_height);
		HX_STACK_LINE(227)
		this->get_graphics()->curveTo((int)0,this->_height,(int)0,(this->_height - this->_curve));
		HX_STACK_LINE(228)
		this->get_graphics()->lineTo((int)0,this->_curve);
		HX_STACK_LINE(230)
		this->get_graphics()->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(231)
		{
			HX_STACK_LINE(231)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(231)
			int _g2 = this->_labels->length;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(231)
			while((true)){
				HX_STACK_LINE(231)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(231)
					break;
				}
				HX_STACK_LINE(231)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(232)
				Float position = this->_labels->__get(i).StaticCast< ::com::danielfreeman::madcomponents::UILabel >()->get_x();		HX_STACK_VAR(position,"position");
				HX_STACK_LINE(233)
				if ((this->_style7)){
					HX_STACK_LINE(234)
					this->get_graphics()->beginFill(this->_lineColour,null());
					HX_STACK_LINE(235)
					this->get_graphics()->drawRect(((position - this->_gap) + (int)1),(int)1,(int)1,(this->_height - (int)1));
				}
				else{
					HX_STACK_LINE(238)
					int _g11 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_colour,(int)126);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(238)
					Dynamic _g21 = Dynamic( Array_obj<Dynamic>::__new().Add(_g11).Add(this->_colour));		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(238)
					this->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,_g21,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)255)),matr,null(),null(),null());
					HX_STACK_LINE(239)
					this->get_graphics()->drawRect((position - this->_gap),(int)1,(int)1,(this->_height - (int)1));
					HX_STACK_LINE(240)
					int _g3 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,null());		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(240)
					Dynamic _g4 = Dynamic( Array_obj<Dynamic>::__new().Add(_g3).Add(this->_colour));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(240)
					this->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,_g4,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)255)),matr,null(),null(),null());
					HX_STACK_LINE(241)
					this->get_graphics()->drawRect(((position - this->_gap) + (int)1),(int)1,(int)1,(this->_height - (int)1));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UICutCopyPaste_obj,buttonChrome,(void))

Void UICutCopyPaste_obj::showPressed( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICutCopyPaste","showPressed",0xb38fbe73,"com.danielfreeman.extendedmadness.UICutCopyPaste.showPressed","com/danielfreeman/extendedmadness/UICutCopyPaste.hx",247,0x0e76fe5f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(248)
		::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(249)
		this->_pressedLayer->get_graphics()->clear();
		HX_STACK_LINE(250)
		Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(250)
		matr->createGradientBox(_g,this->_height,(Float(::Math_obj::PI) / Float((int)2)),(int)0,(int)0);
		HX_STACK_LINE(251)
		if ((this->_style7)){
			HX_STACK_LINE(252)
			this->_pressedLayer->get_graphics()->beginFill(this->_pressedColour,null());
		}
		else{
			HX_STACK_LINE(255)
			int _g1 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_pressedColour,(int)-32);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(255)
			int _g2 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_pressedColour,(int)48);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(255)
			int _g3 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_pressedColour,(int)48);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(255)
			Dynamic _g4 = Dynamic( Array_obj<Dynamic>::__new().Add(_g1).Add(this->_pressedColour).Add(_g2).Add(_g3));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(255)
			this->_pressedLayer->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,_g4,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)32).Add((int)128).Add((int)255)),matr,null(),null(),null());
		}
		HX_STACK_LINE(257)
		if (((bool((this->_index < (int)0)) || bool((this->_labels->length <= (int)0))))){
			HX_STACK_LINE(258)
			return null();
		}
		else{
			HX_STACK_LINE(260)
			if (((this->_labels->length == (int)1))){
				HX_STACK_LINE(261)
				Float _g5 = this->get_width();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(261)
				Float _g6 = (_g5 - (int)2);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(261)
				this->_pressedLayer->get_graphics()->drawRoundRect((int)1,(int)1,_g6,(this->_height - (int)1),this->_curve,null());
			}
			else{
				HX_STACK_LINE(263)
				if (((this->_index == (int)0))){
					HX_STACK_LINE(264)
					Float _g7 = this->_labels->__get((int)1).StaticCast< ::com::danielfreeman::madcomponents::UILabel >()->get_x();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(264)
					Float _g8 = (_g7 - this->_gap);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(264)
					Float right = (_g8 + (int)1);		HX_STACK_VAR(right,"right");
					HX_STACK_LINE(265)
					this->_pressedLayer->get_graphics()->moveTo((int)1,this->_curve);
					HX_STACK_LINE(266)
					this->_pressedLayer->get_graphics()->curveTo((int)1,(int)1,this->_curve,(int)1);
					HX_STACK_LINE(267)
					this->_pressedLayer->get_graphics()->lineTo(right,(int)1);
					HX_STACK_LINE(268)
					this->_pressedLayer->get_graphics()->lineTo(right,this->_height);
					HX_STACK_LINE(269)
					this->_pressedLayer->get_graphics()->lineTo(this->_curve,this->_height);
					HX_STACK_LINE(270)
					this->_pressedLayer->get_graphics()->curveTo((int)1,this->_height,(int)1,(this->_height - this->_curve));
					HX_STACK_LINE(271)
					this->_pressedLayer->get_graphics()->lineTo((int)1,(this->_curve - (int)1));
					HX_STACK_LINE(272)
					this->_pressedLayer->get_graphics()->endFill();
				}
				else{
					HX_STACK_LINE(274)
					if (((this->_index == (this->_labels->length - (int)1)))){
						HX_STACK_LINE(275)
						Float _g9 = this->_labels->__get(this->_index).StaticCast< ::com::danielfreeman::madcomponents::UILabel >()->get_x();		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(275)
						Float _g10 = (_g9 - this->_gap);		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(275)
						Float left = (_g10 + (int)2);		HX_STACK_VAR(left,"left");
						HX_STACK_LINE(276)
						Float width1 = this->get_width();		HX_STACK_VAR(width1,"width1");
						HX_STACK_LINE(277)
						this->_pressedLayer->get_graphics()->moveTo(left,(int)1);
						HX_STACK_LINE(278)
						this->_pressedLayer->get_graphics()->lineTo((width1 - this->_curve),(int)1);
						HX_STACK_LINE(279)
						this->_pressedLayer->get_graphics()->curveTo((width1 - (int)1),(int)1,(width1 - (int)1),this->_curve);
						HX_STACK_LINE(280)
						this->_pressedLayer->get_graphics()->lineTo((width1 - (int)1),(this->_height - this->_curve));
						HX_STACK_LINE(281)
						this->_pressedLayer->get_graphics()->curveTo((width1 - (int)1),this->_height,((width1 - this->_curve) - (int)1),this->_height);
						HX_STACK_LINE(282)
						this->_pressedLayer->get_graphics()->lineTo(left,this->_height);
						HX_STACK_LINE(283)
						this->_pressedLayer->get_graphics()->lineTo(left,(int)1);
						HX_STACK_LINE(284)
						this->_pressedLayer->get_graphics()->endFill();
					}
					else{
						HX_STACK_LINE(287)
						Float _g11 = this->_labels->__get(this->_index).StaticCast< ::com::danielfreeman::madcomponents::UILabel >()->get_x();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(287)
						Float _g12 = (_g11 - this->_gap);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(287)
						Float left0 = (_g12 + (int)2);		HX_STACK_VAR(left0,"left0");
						HX_STACK_LINE(288)
						Float _g13 = this->_labels->__get(this->_index).StaticCast< ::com::danielfreeman::madcomponents::UILabel >()->get_width();		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(288)
						Float _g14 = (_g13 + ((int)2 * this->_gap));		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(288)
						Float width0 = (_g14 - (int)1);		HX_STACK_VAR(width0,"width0");
						HX_STACK_LINE(289)
						this->_pressedLayer->get_graphics()->drawRect(left0,(int)1,width0,(this->_height - (int)1));
						HX_STACK_LINE(290)
						this->_pressedLayer->get_graphics()->endFill();
					}
				}
			}
		}
		HX_STACK_LINE(292)
		if (((this->_font == null()))){
			HX_STACK_LINE(293)
			this->colourButtons();
			HX_STACK_LINE(294)
			this->_labels->__get(this->_index).StaticCast< ::com::danielfreeman::madcomponents::UILabel >()->set_textColor((int)16777215);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UICutCopyPaste_obj,showPressed,(void))

Void UICutCopyPaste_obj::colourButtons( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICutCopyPaste","colourButtons",0xa89cd223,"com.danielfreeman.extendedmadness.UICutCopyPaste.colourButtons","com/danielfreeman/extendedmadness/UICutCopyPaste.hx",299,0x0e76fe5f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(299)
		::haxe::Log_obj::trace(HX_CSTRING("colourButtons"),hx::SourceInfo(HX_CSTRING("UICutCopyPaste.hx"),299,HX_CSTRING("com.danielfreeman.extendedmadness.UICutCopyPaste"),HX_CSTRING("colourButtons")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UICutCopyPaste_obj,colourButtons,(void))

Void UICutCopyPaste_obj::resetHighlight( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICutCopyPaste","resetHighlight",0xfbed6fd7,"com.danielfreeman.extendedmadness.UICutCopyPaste.resetHighlight","com/danielfreeman/extendedmadness/UICutCopyPaste.hx",304,0x0e76fe5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(305)
		this->_pressedLayer->get_graphics()->clear();
		HX_STACK_LINE(306)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("clicked"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(306)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UICutCopyPaste_obj,resetHighlight,(void))

Void UICutCopyPaste_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICutCopyPaste","destructor",0x4d066fab,"com.danielfreeman.extendedmadness.UICutCopyPaste.destructor","com/danielfreeman/extendedmadness/UICutCopyPaste.hx",310,0x0e76fe5f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(311)
		this->super::destructor();
		HX_STACK_LINE(312)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
	}
return null();
}


::String UICutCopyPaste_obj::CLICKED;

Float UICutCopyPaste_obj::ARROW;

Float UICutCopyPaste_obj::HEIGHT;

Float UICutCopyPaste_obj::ALT_HEIGHT;

Float UICutCopyPaste_obj::GAP;

Float UICutCopyPaste_obj::CURVE;

Float UICutCopyPaste_obj::CURVE7;

int UICutCopyPaste_obj::COLOUR;

int UICutCopyPaste_obj::PRESSED_COLOUR;

int UICutCopyPaste_obj::PRESSED_TEXT_COLOUR;


UICutCopyPaste_obj::UICutCopyPaste_obj()
{
}

void UICutCopyPaste_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UICutCopyPaste);
	HX_MARK_MEMBER_NAME(FORMAT,"FORMAT");
	HX_MARK_MEMBER_NAME(_labels,"_labels");
	HX_MARK_MEMBER_NAME(_arrowPosition,"_arrowPosition");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_colour,"_colour");
	HX_MARK_MEMBER_NAME(_gap,"_gap");
	HX_MARK_MEMBER_NAME(_curve,"_curve");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_alt,"_alt");
	HX_MARK_MEMBER_NAME(_font,"_font");
	HX_MARK_MEMBER_NAME(_pressedLayer,"_pressedLayer");
	HX_MARK_MEMBER_NAME(_pressedColour,"_pressedColour");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_ready,"_ready");
	HX_MARK_MEMBER_NAME(_style7,"_style7");
	HX_MARK_MEMBER_NAME(_lineColour,"_lineColour");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UICutCopyPaste_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(FORMAT,"FORMAT");
	HX_VISIT_MEMBER_NAME(_labels,"_labels");
	HX_VISIT_MEMBER_NAME(_arrowPosition,"_arrowPosition");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_colour,"_colour");
	HX_VISIT_MEMBER_NAME(_gap,"_gap");
	HX_VISIT_MEMBER_NAME(_curve,"_curve");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_alt,"_alt");
	HX_VISIT_MEMBER_NAME(_font,"_font");
	HX_VISIT_MEMBER_NAME(_pressedLayer,"_pressedLayer");
	HX_VISIT_MEMBER_NAME(_pressedColour,"_pressedColour");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_ready,"_ready");
	HX_VISIT_MEMBER_NAME(_style7,"_style7");
	HX_VISIT_MEMBER_NAME(_lineColour,"_lineColour");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UICutCopyPaste_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_gap") ) { return _gap; }
		if (HX_FIELD_EQ(inName,"_alt") ) { return _alt; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return get_index(); }
		if (HX_FIELD_EQ(inName,"value") ) { return get_value(); }
		if (HX_FIELD_EQ(inName,"_font") ) { return _font; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"FORMAT") ) { return FORMAT; }
		if (HX_FIELD_EQ(inName,"_index") ) { return _index; }
		if (HX_FIELD_EQ(inName,"_curve") ) { return _curve; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"_ready") ) { return _ready; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_labels") ) { return _labels; }
		if (HX_FIELD_EQ(inName,"_colour") ) { return _colour; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"_style7") ) { return _style7; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"get_index") ) { return get_index_dyn(); }
		if (HX_FIELD_EQ(inName,"get_value") ) { return get_value_dyn(); }
		if (HX_FIELD_EQ(inName,"set_index") ) { return set_index_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialise") ) { return initialise_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_lineColour") ) { return _lineColour; }
		if (HX_FIELD_EQ(inName,"touchCancel") ) { return touchCancel_dyn(); }
		if (HX_FIELD_EQ(inName,"updateIndex") ) { return updateIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"drawButtons") ) { return drawButtons_dyn(); }
		if (HX_FIELD_EQ(inName,"showPressed") ) { return showPressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonChrome") ) { return buttonChrome_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pressedLayer") ) { return _pressedLayer; }
		if (HX_FIELD_EQ(inName,"drawComponent") ) { return drawComponent_dyn(); }
		if (HX_FIELD_EQ(inName,"colourButtons") ) { return colourButtons_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_arrowPosition") ) { return _arrowPosition; }
		if (HX_FIELD_EQ(inName,"_pressedColour") ) { return _pressedColour; }
		if (HX_FIELD_EQ(inName,"resetHighlight") ) { return resetHighlight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UICutCopyPaste_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return set_font(inValue); }
		if (HX_FIELD_EQ(inName,"_gap") ) { _gap=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alt") ) { _alt=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return set_index(inValue); }
		if (HX_FIELD_EQ(inName,"_font") ) { _font=inValue.Cast< ::MadXML >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"FORMAT") ) { FORMAT=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curve") ) { _curve=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< ::openfl::utils::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ready") ) { _ready=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_labels") ) { _labels=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colour") ) { _colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_style7") ) { _style7=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_lineColour") ) { _lineColour=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pressedLayer") ) { _pressedLayer=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_arrowPosition") ) { _arrowPosition=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pressedColour") ) { _pressedColour=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UICutCopyPaste_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("FORMAT"));
	outFields->push(HX_CSTRING("_labels"));
	outFields->push(HX_CSTRING("_arrowPosition"));
	outFields->push(HX_CSTRING("_index"));
	outFields->push(HX_CSTRING("_colour"));
	outFields->push(HX_CSTRING("_gap"));
	outFields->push(HX_CSTRING("_curve"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_alt"));
	outFields->push(HX_CSTRING("_font"));
	outFields->push(HX_CSTRING("_pressedLayer"));
	outFields->push(HX_CSTRING("_pressedColour"));
	outFields->push(HX_CSTRING("_timer"));
	outFields->push(HX_CSTRING("_ready"));
	outFields->push(HX_CSTRING("_style7"));
	outFields->push(HX_CSTRING("_lineColour"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CLICKED"),
	HX_CSTRING("ARROW"),
	HX_CSTRING("HEIGHT"),
	HX_CSTRING("ALT_HEIGHT"),
	HX_CSTRING("GAP"),
	HX_CSTRING("CURVE"),
	HX_CSTRING("CURVE7"),
	HX_CSTRING("COLOUR"),
	HX_CSTRING("PRESSED_COLOUR"),
	HX_CSTRING("PRESSED_TEXT_COLOUR"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UICutCopyPaste_obj,FORMAT),HX_CSTRING("FORMAT")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UICutCopyPaste_obj,_labels),HX_CSTRING("_labels")},
	{hx::fsFloat,(int)offsetof(UICutCopyPaste_obj,_arrowPosition),HX_CSTRING("_arrowPosition")},
	{hx::fsInt,(int)offsetof(UICutCopyPaste_obj,_index),HX_CSTRING("_index")},
	{hx::fsInt,(int)offsetof(UICutCopyPaste_obj,_colour),HX_CSTRING("_colour")},
	{hx::fsFloat,(int)offsetof(UICutCopyPaste_obj,_gap),HX_CSTRING("_gap")},
	{hx::fsFloat,(int)offsetof(UICutCopyPaste_obj,_curve),HX_CSTRING("_curve")},
	{hx::fsFloat,(int)offsetof(UICutCopyPaste_obj,_height),HX_CSTRING("_height")},
	{hx::fsBool,(int)offsetof(UICutCopyPaste_obj,_alt),HX_CSTRING("_alt")},
	{hx::fsObject /*::MadXML*/ ,(int)offsetof(UICutCopyPaste_obj,_font),HX_CSTRING("_font")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UICutCopyPaste_obj,_pressedLayer),HX_CSTRING("_pressedLayer")},
	{hx::fsInt,(int)offsetof(UICutCopyPaste_obj,_pressedColour),HX_CSTRING("_pressedColour")},
	{hx::fsObject /*::openfl::utils::Timer*/ ,(int)offsetof(UICutCopyPaste_obj,_timer),HX_CSTRING("_timer")},
	{hx::fsBool,(int)offsetof(UICutCopyPaste_obj,_ready),HX_CSTRING("_ready")},
	{hx::fsBool,(int)offsetof(UICutCopyPaste_obj,_style7),HX_CSTRING("_style7")},
	{hx::fsInt,(int)offsetof(UICutCopyPaste_obj,_lineColour),HX_CSTRING("_lineColour")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("FORMAT"),
	HX_CSTRING("_labels"),
	HX_CSTRING("_arrowPosition"),
	HX_CSTRING("_index"),
	HX_CSTRING("_colour"),
	HX_CSTRING("_gap"),
	HX_CSTRING("_curve"),
	HX_CSTRING("_height"),
	HX_CSTRING("_alt"),
	HX_CSTRING("_font"),
	HX_CSTRING("_pressedLayer"),
	HX_CSTRING("_pressedColour"),
	HX_CSTRING("_timer"),
	HX_CSTRING("_ready"),
	HX_CSTRING("_style7"),
	HX_CSTRING("_lineColour"),
	HX_CSTRING("set_font"),
	HX_CSTRING("initialise"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("touchCancel"),
	HX_CSTRING("updateIndex"),
	HX_CSTRING("get_index"),
	HX_CSTRING("get_value"),
	HX_CSTRING("set_index"),
	HX_CSTRING("drawButtons"),
	HX_CSTRING("drawComponent"),
	HX_CSTRING("buttonChrome"),
	HX_CSTRING("showPressed"),
	HX_CSTRING("colourButtons"),
	HX_CSTRING("resetHighlight"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UICutCopyPaste_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UICutCopyPaste_obj::CLICKED,"CLICKED");
	HX_MARK_MEMBER_NAME(UICutCopyPaste_obj::ARROW,"ARROW");
	HX_MARK_MEMBER_NAME(UICutCopyPaste_obj::HEIGHT,"HEIGHT");
	HX_MARK_MEMBER_NAME(UICutCopyPaste_obj::ALT_HEIGHT,"ALT_HEIGHT");
	HX_MARK_MEMBER_NAME(UICutCopyPaste_obj::GAP,"GAP");
	HX_MARK_MEMBER_NAME(UICutCopyPaste_obj::CURVE,"CURVE");
	HX_MARK_MEMBER_NAME(UICutCopyPaste_obj::CURVE7,"CURVE7");
	HX_MARK_MEMBER_NAME(UICutCopyPaste_obj::COLOUR,"COLOUR");
	HX_MARK_MEMBER_NAME(UICutCopyPaste_obj::PRESSED_COLOUR,"PRESSED_COLOUR");
	HX_MARK_MEMBER_NAME(UICutCopyPaste_obj::PRESSED_TEXT_COLOUR,"PRESSED_TEXT_COLOUR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UICutCopyPaste_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UICutCopyPaste_obj::CLICKED,"CLICKED");
	HX_VISIT_MEMBER_NAME(UICutCopyPaste_obj::ARROW,"ARROW");
	HX_VISIT_MEMBER_NAME(UICutCopyPaste_obj::HEIGHT,"HEIGHT");
	HX_VISIT_MEMBER_NAME(UICutCopyPaste_obj::ALT_HEIGHT,"ALT_HEIGHT");
	HX_VISIT_MEMBER_NAME(UICutCopyPaste_obj::GAP,"GAP");
	HX_VISIT_MEMBER_NAME(UICutCopyPaste_obj::CURVE,"CURVE");
	HX_VISIT_MEMBER_NAME(UICutCopyPaste_obj::CURVE7,"CURVE7");
	HX_VISIT_MEMBER_NAME(UICutCopyPaste_obj::COLOUR,"COLOUR");
	HX_VISIT_MEMBER_NAME(UICutCopyPaste_obj::PRESSED_COLOUR,"PRESSED_COLOUR");
	HX_VISIT_MEMBER_NAME(UICutCopyPaste_obj::PRESSED_TEXT_COLOUR,"PRESSED_TEXT_COLOUR");
};

#endif

Class UICutCopyPaste_obj::__mClass;

void UICutCopyPaste_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UICutCopyPaste"), hx::TCanCast< UICutCopyPaste_obj> ,sStaticFields,sMemberFields,
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

void UICutCopyPaste_obj::__boot()
{
	CLICKED= HX_CSTRING("clicked");
	ARROW= 14.0;
	HEIGHT= 38.0;
	ALT_HEIGHT= 22.0;
	GAP= 10.0;
	CURVE= 16.0;
	CURVE7= 4.0;
	COLOUR= (int)5592405;
	PRESSED_COLOUR= (int)6710988;
	PRESSED_TEXT_COLOUR= (int)16777215;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
