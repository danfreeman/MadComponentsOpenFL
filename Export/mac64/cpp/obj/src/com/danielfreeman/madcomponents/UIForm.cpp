#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_danielfreeman_MadXML
#include <com/danielfreeman/MadXML.h>
#endif
#ifndef INCLUDED_com_danielfreeman_MadXMLList
#include <com/danielfreeman/MadXMLList.h>
#endif
#ifndef INCLUDED_com_danielfreeman__MadXML_AttribAccess
#include <com/danielfreeman/_MadXML/AttribAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman__MadXML_HasAttribAccess
#include <com/danielfreeman/_MadXML/HasAttribAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman__MadXML_HasNodeAccess
#include <com/danielfreeman/_MadXML/HasNodeAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman__MadXML_NodeAccess
#include <com/danielfreeman/_MadXML/NodeAccess.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_Model
#include <com/danielfreeman/madcomponents/Model.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UI
#include <com/danielfreeman/madcomponents/UI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIForm
#include <com/danielfreeman/madcomponents/UIForm.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIGroupedList
#include <com/danielfreeman/madcomponents/UIGroupedList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIList
#include <com/danielfreeman/madcomponents/UIList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIPicker
#include <com/danielfreeman/madcomponents/UIPicker.h>
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
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UIForm_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,hx::Null< bool >  __o_row,hx::Null< bool >  __o_inGroup)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","new",0x08508d5e,"com.danielfreeman.madcomponents.UIForm.new","com/danielfreeman/madcomponents/UIForm.hx",80,0x1627582f)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
HX_STACK_ARG(__o_row,"row")
HX_STACK_ARG(__o_inGroup,"inGroup")
bool row = __o_row.Default(false);
bool inGroup = __o_inGroup.Default(false);
{
	HX_STACK_LINE(131)
	this->_listenerAdded = false;
	HX_STACK_LINE(130)
	this->_classic = false;
	HX_STACK_LINE(129)
	this->_padding = ::com::danielfreeman::madcomponents::UI_obj::PADDING;
	HX_STACK_LINE(128)
	this->_pickerBackground = false;
	HX_STACK_LINE(126)
	this->_recycle = false;
	HX_STACK_LINE(125)
	this->_lazyRender = false;
	HX_STACK_LINE(124)
	this->_disable = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(123)
	this->_inGroup = false;
	HX_STACK_LINE(122)
	this->_positions = Array_obj< Float >::__new();
	HX_STACK_LINE(121)
	this->_insideScroller = false;
	HX_STACK_LINE(120)
	this->_index = (int)-1;
	HX_STACK_LINE(119)
	this->_groups = null();
	HX_STACK_LINE(118)
	this->_style = null();
	HX_STACK_LINE(117)
	this->_extra = (int)0;
	HX_STACK_LINE(116)
	this->_cursorHeight = (int)-1;
	HX_STACK_LINE(115)
	this->_pickerHeight = (int)-1;
	HX_STACK_LINE(114)
	this->_autoLayout = false;
	HX_STACK_LINE(113)
	this->_heights = null();
	HX_STACK_LINE(112)
	this->_widths = null();
	HX_STACK_LINE(109)
	this->_height = (int)-1;
	HX_STACK_LINE(108)
	this->_model = null();
	HX_STACK_LINE(107)
	this->_mode = HX_CSTRING("");
	HX_STACK_LINE(136)
	bool _g = attributes->get_hasBorder();		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::danielfreeman::MadXML &xml,::com::danielfreeman::madcomponents::Attributes &attributes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",136,0x1627582f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UIForm.hx"),false);
				__result->Add(HX_CSTRING("lineNumber") , (int)136,false);
				__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.madcomponents.UIForm"),false);
				__result->Add(HX_CSTRING("methodName") , HX_CSTRING("new"),false);
				__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(attributes->x).Add(attributes->y).Add(xml)),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(136)
	::haxe::Log_obj::trace(_g,_Function_1_1::Block(xml,attributes));
	HX_STACK_LINE(137)
	Float paddingBefore = attributes->get_paddingH();		HX_STACK_VAR(paddingBefore,"paddingBefore");
	HX_STACK_LINE(138)
	bool _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(138)
	if ((xml->has->resolve(HX_CSTRING("classic")))){
		HX_STACK_LINE(138)
		::String _g1 = xml->att->resolve(HX_CSTRING("classic"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(138)
		_g2 = (_g1 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(138)
		_g2 = false;
	}
	HX_STACK_LINE(138)
	this->_classic = _g2;
	HX_STACK_LINE(139)
	this->_inGroup = inGroup;
	HX_STACK_LINE(140)
	this->_row = row;
	HX_STACK_LINE(141)
	int _g3 = xml->get_name().indexOf(HX_CSTRING("Horizontal"),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(141)
	::String _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(141)
	if (((_g3 > (int)0))){
		HX_STACK_LINE(141)
		_g4 = HX_CSTRING("horizontal");
	}
	else{
		HX_STACK_LINE(141)
		_g4 = xml->get_name();
	}
	HX_STACK_LINE(141)
	this->_localName = _g4;
	HX_STACK_LINE(142)
	if (((bool(this->_inGroup) && bool(((bool((this->_localName == HX_CSTRING("horizontal"))) || bool((this->_localName == HX_CSTRING("columns"))))))))){
		HX_STACK_LINE(142)
		this->_row = true;
	}
	HX_STACK_LINE(143)
	if ((xml->has->resolve(HX_CSTRING("pickerHeight")))){
		HX_STACK_LINE(144)
		::String _g5 = xml->att->resolve(HX_CSTRING("pickerHeight"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(144)
		Float _g6 = ::Std_obj::parseFloat(_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(144)
		this->_pickerHeight = _g6;
	}
	HX_STACK_LINE(146)
	if ((xml->has->resolve(HX_CSTRING("cursorHeight")))){
		HX_STACK_LINE(147)
		::String _g7 = xml->att->resolve(HX_CSTRING("cursorHeight"));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(147)
		Float _g8 = ::Std_obj::parseFloat(_g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(147)
		this->_cursorHeight = _g8;
	}
	HX_STACK_LINE(149)
	if ((xml->has->resolve(HX_CSTRING("pickerPadding")))){
		HX_STACK_LINE(150)
		::String _g9 = xml->att->resolve(HX_CSTRING("pickerPadding"));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(150)
		Float _g10 = ::Std_obj::parseFloat(_g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(150)
		this->_padding = _g10;
	}
	HX_STACK_LINE(152)
	if (((bool((this->_localName == HX_CSTRING("group"))) || bool((this->_localName == HX_CSTRING("clickableGroup")))))){
		HX_STACK_LINE(153)
		::openfl::display::Sprite _g11 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(153)
		::openfl::display::Sprite _g12 = this->_style = _g11;		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(153)
		this->addChild(_g12);
		HX_STACK_LINE(154)
		this->_style->set_name(HX_CSTRING("$"));
		HX_STACK_LINE(155)
		if (((this->_localName == HX_CSTRING("clickableGroup")))){
			HX_STACK_LINE(156)
			this->_groups = Dynamic( Array_obj<Dynamic>::__new());
			HX_STACK_LINE(157)
			this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->groupClicked_dyn(),null(),null(),null());
		}
		HX_STACK_LINE(159)
		this->_localName = HX_CSTRING("vertical");
		HX_STACK_LINE(160)
		this->_inGroup = true;
	}
	HX_STACK_LINE(162)
	bool _g14;		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(162)
	if ((xml->has->resolve(HX_CSTRING("lazyRender")))){
		HX_STACK_LINE(162)
		::String _g13 = xml->att->resolve(HX_CSTRING("lazyRender"));		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(162)
		_g14 = (_g13 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(162)
		_g14 = false;
	}
	HX_STACK_LINE(162)
	this->_lazyRender = _g14;
	HX_STACK_LINE(163)
	bool _g16;		HX_STACK_VAR(_g16,"_g16");
	struct _Function_1_2{
		inline static bool Block( ::com::danielfreeman::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",163,0x1627582f)
			{
				HX_STACK_LINE(163)
				::String _g15 = xml->att->resolve(HX_CSTRING("recycle"));		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(163)
				return (_g15 == HX_CSTRING("true"));
			}
			return null();
		}
	};
	HX_STACK_LINE(163)
	if (((  ((xml->has->resolve(HX_CSTRING("recycle")))) ? bool(_Function_1_2::Block(xml)) : bool(false) ))){
		HX_STACK_LINE(163)
		_g16 = this->_lazyRender;
	}
	else{
		HX_STACK_LINE(163)
		_g16 = false;
	}
	HX_STACK_LINE(163)
	this->_recycle = _g16;
	HX_STACK_LINE(164)
	::com::danielfreeman::madcomponents::Attributes _g17 = attributes->copy(null(),null());		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(164)
	super::__construct(screen,xml,_g17);
	struct _Function_1_3{
		inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIForm_obj > __this,::com::danielfreeman::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",165,0x1627582f)
			{
				struct _Function_2_1{
					inline static bool Block( ::com::danielfreeman::MadXML &xml){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",165,0x1627582f)
						{
							HX_STACK_LINE(165)
							::String _g18 = xml->att->resolve(HX_CSTRING("border"));		HX_STACK_VAR(_g18,"_g18");
							HX_STACK_LINE(165)
							return (_g18 != HX_CSTRING("false"));
						}
						return null();
					}
				};
				HX_STACK_LINE(165)
				return (  (((  ((!(__this->_attributes->get_hasBorder()))) ? bool(xml->has->resolve(HX_CSTRING("border"))) : bool(false) ))) ? bool(_Function_2_1::Block(xml)) : bool(false) );
			}
			return null();
		}
	};
	HX_STACK_LINE(165)
	if (((  ((!(((this->_style != null()))))) ? bool(_Function_1_3::Block(this,xml)) : bool(true) ))){
		HX_STACK_LINE(166)
		Float _g19 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(166)
		Float _g20 = (Float(_g19) / Float((int)2));		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(166)
		Float _g21 = (::com::danielfreeman::madcomponents::UI_obj::PADDING + _g20);		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(166)
		this->_attributes->y = _g21;
		HX_STACK_LINE(167)
		hx::AddEq(this->_attributes->x,::com::danielfreeman::madcomponents::UI_obj::PADDING);
		HX_STACK_LINE(167)
		hx::SubEq(this->_attributes->width,((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING));
		HX_STACK_LINE(168)
		Float _g22 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(168)
		Float _g23 = (((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING) + _g22);		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(168)
		hx::SubEq(this->_attributes->height,_g23);
		HX_STACK_LINE(169)
		this->_attributes->set_hasBorder(true);
	}
	HX_STACK_LINE(171)
	if ((!(this->_lazyRender))){
		HX_STACK_LINE(172)
		this->parseBlock(xml,this->_attributes,this->_localName,this->_row);
	}
	HX_STACK_LINE(174)
	this->get_graphics()->beginFill((int)0,(int)0);
	HX_STACK_LINE(175)
	this->get_graphics()->drawRect((int)0,(int)0,(int)2,(int)2);
	HX_STACK_LINE(176)
	if (((  ((!(xml->hasNode->resolve(HX_CSTRING("model"))))) ? bool(xml->hasNode->resolve(HX_CSTRING("sendModel"))) : bool(true) ))){
		HX_STACK_LINE(177)
		::com::danielfreeman::MadXML _g24;		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(177)
		if ((xml->hasNode->resolve(HX_CSTRING("model")))){
			HX_STACK_LINE(177)
			_g24 = xml->node->resolve(HX_CSTRING("model"));
		}
		else{
			HX_STACK_LINE(177)
			_g24 = null();
		}
		HX_STACK_LINE(177)
		::com::danielfreeman::MadXML _g25;		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(177)
		if ((xml->hasNode->resolve(HX_CSTRING("sendModel")))){
			HX_STACK_LINE(177)
			_g25 = xml->node->resolve(HX_CSTRING("sendModel"));
		}
		else{
			HX_STACK_LINE(177)
			_g25 = null();
		}
		HX_STACK_LINE(177)
		::com::danielfreeman::madcomponents::Model _g26 = ::com::danielfreeman::madcomponents::Model_obj::__new(hx::ObjectPtr<OBJ_>(this),_g24,_g25);		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(177)
		this->_model = _g26;
	}
	struct _Function_1_4{
		inline static bool Block( ::com::danielfreeman::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",179,0x1627582f)
			{
				HX_STACK_LINE(179)
				::String _g27 = xml->att->resolve(HX_CSTRING("autoLayout"));		HX_STACK_VAR(_g27,"_g27");
				HX_STACK_LINE(179)
				return (_g27 != HX_CSTRING("false"));
			}
			return null();
		}
	};
	HX_STACK_LINE(179)
	if (((  (((  (((this->_localName != HX_CSTRING("scrollVertical")))) ? bool(xml->has->resolve(HX_CSTRING("autoLayout"))) : bool(false) ))) ? bool(_Function_1_4::Block(xml)) : bool(false) ))){
		HX_STACK_LINE(180)
		this->_autoLayout = true;
		HX_STACK_LINE(181)
		this->addEventListener(HX_CSTRING("imageLoaded"),this->doLayoutHandler_dyn(),null(),null(),null());
	}
	HX_STACK_LINE(183)
	Float _g28 = attributes->get_paddingH();		HX_STACK_VAR(_g28,"_g28");
	HX_STACK_LINE(183)
	if (((paddingBefore != _g28))){
		HX_STACK_LINE(184)
		Float _g29 = attributes->get_paddingH();		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(184)
		Dynamic _g30 = Dynamic( Array_obj<Dynamic>::__new().Add(paddingBefore).Add(_g29));		HX_STACK_VAR(_g30,"_g30");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &_g30){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",184,0x1627582f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UIForm.hx"),false);
					__result->Add(HX_CSTRING("lineNumber") , (int)184,false);
					__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.madcomponents.UIForm"),false);
					__result->Add(HX_CSTRING("methodName") , HX_CSTRING("new"),false);
					__result->Add(HX_CSTRING("customParams") , _g30,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(184)
		Dynamic _g31 = _Function_2_1::Block(_g30);		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(184)
		::haxe::Log_obj::trace(HX_CSTRING("********Padding changed"),_g31);
	}
}
;
	return null();
}

//UIForm_obj::~UIForm_obj() { }

Dynamic UIForm_obj::__CreateEmpty() { return  new UIForm_obj; }
hx::ObjectPtr< UIForm_obj > UIForm_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,hx::Null< bool >  __o_row,hx::Null< bool >  __o_inGroup)
{  hx::ObjectPtr< UIForm_obj > result = new UIForm_obj();
	result->__construct(screen,xml,attributes,__o_row,__o_inGroup);
	return result;}

Dynamic UIForm_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIForm_obj > result = new UIForm_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

hx::Object *UIForm_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	if (inType==typeid( ::com::danielfreeman::madcomponents::IContainerUI_obj)) return operator ::com::danielfreeman::madcomponents::IContainerUI_obj *();
	return super::__ToInterface(inType);
}

Void UIForm_obj::touchCancel( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","touchCancel",0x16093d97,"com.danielfreeman.madcomponents.UIForm.touchCancel","com/danielfreeman/madcomponents/UIForm.hx",189,0x1627582f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(190)
		if (((this->_style != null()))){
			HX_STACK_LINE(191)
			this->groupClickCancel();
			HX_STACK_LINE(192)
			this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->resetGroupClicked_dyn(),null());
			HX_STACK_LINE(193)
			this->_listenerAdded = false;
			HX_STACK_LINE(194)
			::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("groupClickCancel"),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(194)
			this->dispatchEvent(_g);
		}
		HX_STACK_LINE(196)
		this->super::touchCancel();
	}
return null();
}


Void UIForm_obj::reset( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","reset",0x752cc24d,"com.danielfreeman.madcomponents.UIForm.reset","com/danielfreeman/madcomponents/UIForm.hx",200,0x1627582f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(201)
		this->_mode = HX_CSTRING("");
		HX_STACK_LINE(202)
		this->_height = (int)-1;
		HX_STACK_LINE(203)
		this->_widths = null();
		HX_STACK_LINE(204)
		this->_heights = null();
		HX_STACK_LINE(205)
		this->_index = (int)-1;
		HX_STACK_LINE(206)
		this->_positions = Array_obj< Float >::__new();
		HX_STACK_LINE(207)
		this->_disable = Dynamic( Array_obj<Dynamic>::__new());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIForm_obj,reset,(void))

Void UIForm_obj::disableClickableGroupRows( Dynamic value){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","disableClickableGroupRows",0x49a5593c,"com.danielfreeman.madcomponents.UIForm.disableClickableGroupRows","com/danielfreeman/madcomponents/UIForm.hx",214,0x1627582f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(214)
		this->_disable = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIForm_obj,disableClickableGroupRows,(void))

Void UIForm_obj::insideScroller( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","insideScroller",0x0454ed98,"com.danielfreeman.madcomponents.UIForm.insideScroller","com/danielfreeman/madcomponents/UIForm.hx",221,0x1627582f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(221)
		this->_insideScroller = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIForm_obj,insideScroller,(void))

::com::danielfreeman::MadXML UIForm_obj::get_xml( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","get_xml",0x71a24a6c,"com.danielfreeman.madcomponents.UIForm.get_xml","com/danielfreeman/madcomponents/UIForm.hx",226,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(226)
	return this->_xml;
}


HX_DEFINE_DYNAMIC_FUNC0(UIForm_obj,get_xml,return )

::com::danielfreeman::MadXML UIForm_obj::set_xml( ::com::danielfreeman::MadXML value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","set_xml",0x64a3db78,"com.danielfreeman.madcomponents.UIForm.set_xml","com/danielfreeman/madcomponents/UIForm.hx",230,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(231)
	::com::danielfreeman::madcomponents::UI_obj::clear(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(232)
	this->reset();
	HX_STACK_LINE(233)
	::String _g = ::Std_obj::string(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(233)
	::String _g1 = (HX_CSTRING("<form>") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(233)
	::String _g2 = (_g1 + HX_CSTRING("</form>"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(233)
	::com::danielfreeman::MadXML _g3 = ::com::danielfreeman::MadXML_obj::parse(_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(233)
	this->_xml = _g3;
	HX_STACK_LINE(234)
	if ((!(this->_lazyRender))){
		HX_STACK_LINE(235)
		this->parseBlock(this->_xml,this->_attributes,this->_localName,this->_row);
	}
	HX_STACK_LINE(237)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIForm_obj,set_xml,return )

Void UIForm_obj::includeComponent( ::String id,bool state){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","includeComponent",0x7ab949b7,"com.danielfreeman.madcomponents.UIForm.includeComponent","com/danielfreeman/madcomponents/UIForm.hx",241,0x1627582f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(242)
		::openfl::display::DisplayObject child = this->findViewById(id,null(),null());		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(243)
		if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))){
			HX_STACK_LINE(244)
			bool _g = (hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(child))->set_isVisible(state);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(244)
			(hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(child))->set_includeInLayout(_g);
		}
		HX_STACK_LINE(246)
		this->layout(this->_attributes);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIForm_obj,includeComponent,(void))

bool UIForm_obj::customWidths( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","customWidths",0xde089980,"com.danielfreeman.madcomponents.UIForm.customWidths","com/danielfreeman/madcomponents/UIForm.hx",250,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(251)
	if ((this->_xml->has->resolve(HX_CSTRING("widths")))){
		HX_STACK_LINE(252)
		::String _g = this->_xml->att->resolve(HX_CSTRING("widths"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(252)
		Array< ::String > _g1 = ::Std_obj::string(_g).split(HX_CSTRING(","));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(252)
		this->_widths = _g1;
		HX_STACK_LINE(254)
		Float _g2 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(254)
		Float total = (((this->_widths->__Field(HX_CSTRING("length"),true) - (int)1)) * _g2);		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(255)
		{
			HX_STACK_LINE(255)
			int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(255)
			Dynamic _g11 = this->_widths;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(255)
			while((true)){
				HX_STACK_LINE(255)
				if ((!(((_g3 < _g11->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(255)
					break;
				}
				HX_STACK_LINE(255)
				Dynamic item = _g11->__GetItem(_g3);		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(255)
				++(_g3);
				HX_STACK_LINE(256)
				Dynamic _g31 = item->__Field(HX_CSTRING("lastIndexOf"),true)(HX_CSTRING("%"));		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(256)
				if (((_g31 < (int)0))){
					HX_STACK_LINE(257)
					Float _g4 = ::Std_obj::parseFloat(item);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(257)
					hx::AddEq(total,_g4);
				}
			}
		}
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(260)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(260)
			int _g3 = this->_widths->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(260)
			while((true)){
				HX_STACK_LINE(260)
				if ((!(((_g11 < _g3))))){
					HX_STACK_LINE(260)
					break;
				}
				HX_STACK_LINE(260)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(261)
				::String itemi = this->_widths->__GetItem(i);		HX_STACK_VAR(itemi,"itemi");
				HX_STACK_LINE(262)
				int _g5 = itemi.lastIndexOf(HX_CSTRING("%"),null());		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(262)
				if (((_g5 > (int)0))){
					HX_STACK_LINE(263)
					Float _g6 = ::Std_obj::parseFloat(itemi);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(263)
					Float _g7 = (Float(_g6) / Float((int)100));		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(263)
					hx::IndexRef((this->_widths).mPtr,i) = (_g7 * ((this->_attributes->width - total)));
				}
			}
		}
	}
	HX_STACK_LINE(268)
	return (this->_widths != null());
}


HX_DEFINE_DYNAMIC_FUNC0(UIForm_obj,customWidths,return )

bool UIForm_obj::customHeights( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","customHeights",0x38b77179,"com.danielfreeman.madcomponents.UIForm.customHeights","com/danielfreeman/madcomponents/UIForm.hx",272,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(273)
	if ((this->_xml->has->resolve(HX_CSTRING("heights")))){
		HX_STACK_LINE(274)
		::String _g = this->_xml->att->resolve(HX_CSTRING("heights"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(274)
		Array< ::String > _g1 = ::Std_obj::string(_g).split(HX_CSTRING(","));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(274)
		this->_heights = _g1;
		HX_STACK_LINE(275)
		Float _g2 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(275)
		Float total = (((this->_heights->__Field(HX_CSTRING("length"),true) - (int)1)) * _g2);		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(276)
		{
			HX_STACK_LINE(276)
			int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(276)
			Dynamic _g11 = this->_heights;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(276)
			while((true)){
				HX_STACK_LINE(276)
				if ((!(((_g3 < _g11->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(276)
					break;
				}
				HX_STACK_LINE(276)
				Dynamic item = _g11->__GetItem(_g3);		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(276)
				++(_g3);
				HX_STACK_LINE(277)
				Dynamic _g31 = item->__Field(HX_CSTRING("lastIndexOf"),true)(HX_CSTRING("%"));		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(277)
				if (((_g31 < (int)0))){
					HX_STACK_LINE(278)
					Float _g4 = ::Std_obj::parseFloat(item);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(278)
					hx::AddEq(total,_g4);
				}
			}
		}
		HX_STACK_LINE(281)
		{
			HX_STACK_LINE(281)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(281)
			int _g3 = this->_heights->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(281)
			while((true)){
				HX_STACK_LINE(281)
				if ((!(((_g11 < _g3))))){
					HX_STACK_LINE(281)
					break;
				}
				HX_STACK_LINE(281)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(282)
				::String itemi = this->_heights->__GetItem(i);		HX_STACK_VAR(itemi,"itemi");
				HX_STACK_LINE(283)
				int _g5 = itemi.lastIndexOf(HX_CSTRING("%"),null());		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(283)
				if (((_g5 > (int)0))){
					HX_STACK_LINE(284)
					Float _g6 = ::Std_obj::parseFloat(itemi);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(284)
					Float _g7 = (Float(_g6) / Float((int)100));		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(284)
					hx::IndexRef((this->_heights).mPtr,i) = (_g7 * ((this->_attributes->height - total)));
				}
			}
		}
	}
	HX_STACK_LINE(288)
	return (this->_heights != null());
}


HX_DEFINE_DYNAMIC_FUNC0(UIForm_obj,customHeights,return )

Void UIForm_obj::widthAndHeight( ::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","widthAndHeight",0xf68472fa,"com.danielfreeman.madcomponents.UIForm.widthAndHeight","com/danielfreeman/madcomponents/UIForm.hx",292,0x1627582f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(293)
		if ((xml->has->resolve(HX_CSTRING("width")))){
			HX_STACK_LINE(294)
			::String _g = xml->att->resolve(HX_CSTRING("width"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(294)
			Float _g1 = ::Std_obj::parseFloat(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(294)
			attributes->width = _g1;
		}
		HX_STACK_LINE(296)
		if ((xml->has->resolve(HX_CSTRING("height")))){
			HX_STACK_LINE(297)
			::String _g2 = xml->att->resolve(HX_CSTRING("height"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(297)
			Float _g3 = ::Std_obj::parseFloat(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(297)
			attributes->height = _g3;
		}
		HX_STACK_LINE(299)
		if ((xml->has->resolve(HX_CSTRING("size")))){
			HX_STACK_LINE(300)
			::String _g4 = xml->att->resolve(HX_CSTRING("size"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(300)
			::String size = ::Std_obj::string(_g4).toUpperCase();		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(301)
			::String _g5 = size.substr((int)-1,(int)1);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(301)
			if (((_g5 == HX_CSTRING("C")))){
				HX_STACK_LINE(302)
				::String _g6 = size.substr((int)0,(int)1);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(302)
				int start;		HX_STACK_VAR(start,"start");
				struct _Function_3_1{
					inline static bool Block( ::String &size){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",302,0x1627582f)
						{
							HX_STACK_LINE(302)
							::String _g7 = size.substr((int)0,(int)1);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(302)
							return (_g7 == HX_CSTRING("P"));
						}
						return null();
					}
				};
				HX_STACK_LINE(302)
				if (((  ((!(((_g6 == HX_CSTRING("L")))))) ? bool(_Function_3_1::Block(size)) : bool(true) ))){
					HX_STACK_LINE(302)
					start = (int)1;
				}
				else{
					HX_STACK_LINE(302)
					start = (int)0;
				}
				HX_STACK_LINE(303)
				int xPosition = size.indexOf(HX_CSTRING("X"),null());		HX_STACK_VAR(xPosition,"xPosition");
				HX_STACK_LINE(304)
				::String _g8 = size.substring(start,xPosition);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(304)
				Float _g9 = ::Std_obj::parseFloat(_g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(304)
				attributes->width = _g9;
				HX_STACK_LINE(305)
				::String _g10 = size.substring((xPosition + (int)1),(size.length - (int)1));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(305)
				Float _g11 = ::Std_obj::parseFloat(_g10);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(305)
				attributes->height = _g11;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIForm_obj,widthAndHeight,(void))

bool UIForm_obj::set_isVisible( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","set_isVisible",0x3bfad209,"com.danielfreeman.madcomponents.UIForm.set_isVisible","com/danielfreeman/madcomponents/UIForm.hx",311,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(312)
	if (((bool(this->_lazyRender) && bool(value)))){
		HX_STACK_LINE(313)
		this->parseBlock(this->_xml,this->_attributes,this->_localName,this->_row);
		HX_STACK_LINE(314)
		this->_lazyRender = false;
		HX_STACK_LINE(315)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("lazyLoad"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(315)
		this->dispatchEvent(_g);
	}
	else{
		HX_STACK_LINE(317)
		if (((bool(this->_recycle) && bool(!(value))))){
			HX_STACK_LINE(318)
			::com::danielfreeman::madcomponents::UI_obj::clear(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(319)
			this->_lazyRender = true;
			HX_STACK_LINE(320)
			::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(HX_CSTRING("lazyUnload"),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(320)
			this->dispatchEvent(_g1);
		}
	}
	HX_STACK_LINE(322)
	this->super::set_isVisible(value);
	HX_STACK_LINE(323)
	return value;
}


Void UIForm_obj::parseBlock( ::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,::String mode,bool row){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","parseBlock",0xda3dbadc,"com.danielfreeman.madcomponents.UIForm.parseBlock","com/danielfreeman/madcomponents/UIForm.hx",329,0x1627582f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(row,"row")
		HX_STACK_LINE(330)
		attributes->parse(xml);
		HX_STACK_LINE(331)
		this->widthAndHeight(xml,attributes);
		HX_STACK_LINE(332)
		if ((xml->has->resolve(HX_CSTRING("widths")))){
			HX_STACK_LINE(333)
			mode = HX_CSTRING("columns");
		}
		else{
			HX_STACK_LINE(335)
			if (((  ((!(xml->has->resolve(HX_CSTRING("heights"))))) ? bool((mode == HX_CSTRING("table"))) : bool(true) ))){
				HX_STACK_LINE(336)
				mode = HX_CSTRING("rows");
			}
		}
		HX_STACK_LINE(338)
		::com::danielfreeman::MadXMLList xmlList = xml->children(null());		HX_STACK_VAR(xmlList,"xmlList");
		HX_STACK_LINE(339)
		int nColumns = this->numberOfColumns(xmlList);		HX_STACK_VAR(nColumns,"nColumns");
		HX_STACK_LINE(340)
		Float pos;		HX_STACK_VAR(pos,"pos");
		struct _Function_1_1{
			inline static bool Block( ::String &mode){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",340,0x1627582f)
				{
					HX_STACK_LINE(340)
					int _g = mode.indexOf(HX_CSTRING("Panel"),null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(340)
					return (_g >= (int)0);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( ::String &mode){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",340,0x1627582f)
				{
					HX_STACK_LINE(340)
					int _g1 = mode.indexOf(HX_CSTRING("scroll"),null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(340)
					return (_g1 >= (int)0);
				}
				return null();
			}
		};
		HX_STACK_LINE(340)
		if (((  ((!(((  ((!(((bool((mode == HX_CSTRING("vertical"))) || bool((mode == HX_CSTRING("rows")))))))) ? bool(_Function_1_1::Block(mode)) : bool(true) ))))) ? bool(_Function_1_2::Block(mode)) : bool(true) ))){
			HX_STACK_LINE(340)
			pos = attributes->y;
		}
		else{
			HX_STACK_LINE(340)
			pos = attributes->x;
		}
		HX_STACK_LINE(341)
		Float _g2 = attributes->get_paddingH();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(341)
		Float _g3 = (((nColumns - (int)1)) * _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(341)
		Float _g4 = (attributes->width - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(341)
		Float columnWidth = (Float(_g4) / Float(nColumns));		HX_STACK_VAR(columnWidth,"columnWidth");
		HX_STACK_LINE(342)
		Float _g5 = attributes->get_paddingV();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(342)
		Float _g6 = (((nColumns - (int)1)) * _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(342)
		Float _g7 = (attributes->height - _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(342)
		Float columnHeight = (Float(_g7) / Float(nColumns));		HX_STACK_VAR(columnHeight,"columnHeight");
		HX_STACK_LINE(343)
		bool hasPicker = false;		HX_STACK_VAR(hasPicker,"hasPicker");
		HX_STACK_LINE(344)
		Float widthOffset = (int)0;		HX_STACK_VAR(widthOffset,"widthOffset");
		HX_STACK_LINE(345)
		Float heightOffset = (int)0;		HX_STACK_VAR(heightOffset,"heightOffset");
		HX_STACK_LINE(346)
		this->_xml = xml;
		HX_STACK_LINE(347)
		this->_attributes = attributes;
		HX_STACK_LINE(348)
		this->_mode = mode;
		HX_STACK_LINE(349)
		this->_children = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(350)
		int col = (int)0;		HX_STACK_VAR(col,"col");
		HX_STACK_LINE(351)
		{
			HX_STACK_LINE(351)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(351)
			int _g = xmlList->length();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(351)
			while((true)){
				HX_STACK_LINE(351)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(351)
					break;
				}
				HX_STACK_LINE(351)
				int l = (_g1)++;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(352)
				::com::danielfreeman::MadXML line = xmlList->get(l);		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(353)
				::String localName = line->get_name();		HX_STACK_VAR(localName,"localName");
				HX_STACK_LINE(354)
				if (((  ((!(((  ((!(((  ((!(line->get_nodeKindIsText()))) ? bool((localName == HX_CSTRING("data"))) : bool(true) ))))) ? bool((localName == HX_CSTRING("model"))) : bool(true) ))))) ? bool((localName == HX_CSTRING("sendModel"))) : bool(true) ))){
					HX_STACK_LINE(355)
					continue;
				}
				HX_STACK_LINE(357)
				::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(358)
				::com::danielfreeman::madcomponents::Attributes childAttributes = attributes->copy(line,true);		HX_STACK_VAR(childAttributes,"childAttributes");
				HX_STACK_LINE(359)
				childAttributes->y = (int)0;
				HX_STACK_LINE(360)
				if (((mode == HX_CSTRING("columns")))){
					HX_STACK_LINE(361)
					if ((this->customWidths())){
						HX_STACK_LINE(362)
						Float _g8 = columnWidth = this->_widths->__GetItem(col);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(362)
						childAttributes->width = _g8;
						HX_STACK_LINE(363)
						childAttributes->x = pos;
					}
					else{
						HX_STACK_LINE(366)
						childAttributes->width = columnWidth;
						HX_STACK_LINE(367)
						childAttributes->x = pos;
					}
				}
				else{
					HX_STACK_LINE(370)
					if (((mode == HX_CSTRING("rows")))){
						HX_STACK_LINE(371)
						if ((this->customHeights())){
							HX_STACK_LINE(372)
							Float _g9 = columnHeight = this->_heights->__GetItem(col);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(372)
							childAttributes->height = _g9;
							HX_STACK_LINE(373)
							childAttributes->y = pos;
						}
						else{
							HX_STACK_LINE(376)
							childAttributes->height = columnHeight;
							HX_STACK_LINE(377)
							childAttributes->y = pos;
						}
					}
					else{
						HX_STACK_LINE(380)
						if (((mode == HX_CSTRING("horizontal")))){
							HX_STACK_LINE(381)
							hx::AddEq(childAttributes->width,((childAttributes->x - pos) - widthOffset));
							HX_STACK_LINE(382)
							if (((childAttributes->width < (int)0))){
								HX_STACK_LINE(383)
								childAttributes->width = (int)0;
								HX_STACK_LINE(384)
								childAttributes->x = pos;
							}
						}
						else{
							HX_STACK_LINE(387)
							if (((mode != HX_CSTRING("frame")))){
								HX_STACK_LINE(388)
								hx::AddEq(childAttributes->height,((childAttributes->y - pos) - heightOffset));
								HX_STACK_LINE(389)
								if (((childAttributes->height < (int)0))){
									HX_STACK_LINE(390)
									childAttributes->height = (int)0;
								}
								HX_STACK_LINE(392)
								childAttributes->y = pos;
							}
						}
					}
				}
				HX_STACK_LINE(394)
				::openfl::display::DisplayObject _g10 = ::com::danielfreeman::madcomponents::UI_obj::containers(hx::ObjectPtr<OBJ_>(this),line,childAttributes);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(394)
				child = _g10;
				HX_STACK_LINE(395)
				if (((child == null()))){
					HX_STACK_LINE(396)
					::String _switch_1 = (localName);
					if (  ( _switch_1==HX_CSTRING("group")) ||  ( _switch_1==HX_CSTRING("clickableGroup")) ||  ( _switch_1==HX_CSTRING("frame")) ||  ( _switch_1==HX_CSTRING("horizontal")) ||  ( _switch_1==HX_CSTRING("vertical")) ||  ( _switch_1==HX_CSTRING("rows")) ||  ( _switch_1==HX_CSTRING("columns"))){
						HX_STACK_LINE(398)
						::com::danielfreeman::madcomponents::Attributes newAttributes = childAttributes->copy(null(),null());		HX_STACK_VAR(newAttributes,"newAttributes");
						HX_STACK_LINE(399)
						newAttributes->x = (int)0;
						HX_STACK_LINE(400)
						newAttributes->y = (int)0;
						HX_STACK_LINE(401)
						::com::danielfreeman::madcomponents::UIForm _g11 = ::com::danielfreeman::madcomponents::UIForm_obj::__new(hx::ObjectPtr<OBJ_>(this),line,newAttributes,row,this->_inGroup);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(401)
						child = _g11;
					}
					else if (  ( _switch_1==HX_CSTRING("picker"))){
						HX_STACK_LINE(405)
						bool _g14;		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(405)
						if ((!(((mode != HX_CSTRING("columns")))))){
							HX_STACK_LINE(405)
							int _g12 = xmlList->length();		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(405)
							int _g13 = (_g12 - (int)1);		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(405)
							_g14 = (l == _g13);
						}
						else{
							HX_STACK_LINE(405)
							_g14 = true;
						}
						HX_STACK_LINE(405)
						::com::danielfreeman::madcomponents::UIPicker _g15 = ::com::danielfreeman::madcomponents::UIPicker_obj::__new(hx::ObjectPtr<OBJ_>(this),line,childAttributes,(bool((mode != HX_CSTRING("columns"))) || bool((l == (int)0))),_g14,this->_pickerHeight,this->_cursorHeight);		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(405)
						child = _g15;
						HX_STACK_LINE(406)
						hasPicker = true;
					}
					else  {
						HX_STACK_LINE(409)
						::openfl::display::DisplayObject _g16 = this->otherCommands(line,childAttributes);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(409)
						child = _g16;
					}
;
;
				}
				HX_STACK_LINE(412)
				if (((child != null()))){
					struct _Function_4_1{
						inline static bool Block( ::com::danielfreeman::MadXML &line){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",413,0x1627582f)
							{
								HX_STACK_LINE(413)
								::String _g17 = line->att->resolve(HX_CSTRING("includeInLayout"));		HX_STACK_VAR(_g17,"_g17");
								HX_STACK_LINE(413)
								return (_g17 == HX_CSTRING("false"));
							}
							return null();
						}
					};
					HX_STACK_LINE(413)
					if (((  (((  ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))) ? bool(line->has->resolve(HX_CSTRING("includeInLayout"))) : bool(false) ))) ? bool(_Function_4_1::Block(line)) : bool(false) ))){
						HX_STACK_LINE(414)
						(hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(child))->set_includeInLayout(false);
					}
					HX_STACK_LINE(416)
					this->_children[l] = child;
					HX_STACK_LINE(417)
					if ((row)){
						HX_STACK_LINE(418)
						childAttributes->initPosition(child);
					}
					else{
						struct _Function_5_1{
							inline static Dynamic Block( ::com::danielfreeman::madcomponents::Attributes &childAttributes){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",421,0x1627582f)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UIForm.hx"),false);
									__result->Add(HX_CSTRING("lineNumber") , (int)421,false);
									__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.madcomponents.UIForm"),false);
									__result->Add(HX_CSTRING("methodName") , HX_CSTRING("parseBlock"),false);
									__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(childAttributes->x).Add(childAttributes->y)),false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(421)
						::haxe::Log_obj::trace(HX_CSTRING("childAttributes"),_Function_5_1::Block(childAttributes));
						HX_STACK_LINE(422)
						childAttributes->position(child,this->_inGroup);
					}
					HX_STACK_LINE(424)
					if (((this->_style != null()))){
						HX_STACK_LINE(425)
						Float _g18;		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(425)
						if (((mode == HX_CSTRING("rows")))){
							HX_STACK_LINE(425)
							_g18 = columnHeight;
						}
						else{
							HX_STACK_LINE(425)
							if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))){
								HX_STACK_LINE(425)
								_g18 = (hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(child))->get_theHeight();
							}
							else{
								HX_STACK_LINE(425)
								_g18 = child->get_height();
							}
						}
						HX_STACK_LINE(425)
						Float _g19 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(425)
						Float groupHeight = (_g18 + _g19);		HX_STACK_VAR(groupHeight,"groupHeight");
						HX_STACK_LINE(426)
						bool doLines;		HX_STACK_VAR(doLines,"doLines");
						struct _Function_5_1{
							inline static bool Block( ::com::danielfreeman::MadXML &line){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",426,0x1627582f)
								{
									HX_STACK_LINE(426)
									::String _g20 = line->att->resolve(HX_CSTRING("lines"));		HX_STACK_VAR(_g20,"_g20");
									HX_STACK_LINE(426)
									return (_g20 != HX_CSTRING("false"));
								}
								return null();
							}
						};
						HX_STACK_LINE(426)
						if (((  ((line->has->resolve(HX_CSTRING("lines")))) ? bool(_Function_5_1::Block(line)) : bool(false) ))){
							HX_STACK_LINE(426)
							doLines = ::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::UIForm >());
						}
						else{
							HX_STACK_LINE(426)
							doLines = false;
						}
						HX_STACK_LINE(427)
						Float _g21 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(427)
						Float _g22 = (Float(_g21) / Float((int)2));		HX_STACK_VAR(_g22,"_g22");
						HX_STACK_LINE(427)
						Float _g23 = (pos - _g22);		HX_STACK_VAR(_g23,"_g23");
						HX_STACK_LINE(427)
						Float _g24 = (_g23 + ::com::danielfreeman::madcomponents::UIForm_obj::GROUP_OFFSET);		HX_STACK_VAR(_g24,"_g24");
						HX_STACK_LINE(427)
						::com::danielfreeman::madcomponents::UIForm _g25;		HX_STACK_VAR(_g25,"_g25");
						HX_STACK_LINE(427)
						try
						{
						HX_STACK_CATCHABLE(Dynamic, 0);
						{
							HX_STACK_LINE(427)
							_g25 = hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(child);
						}
						}
						catch(Dynamic __e){
							{
								HX_STACK_BEGIN_CATCH
								Dynamic e = __e;{
									HX_STACK_LINE(427)
									_g25 = null();
								}
							}
						}
						HX_STACK_LINE(427)
						this->groupedBackground((l == (int)0),(l >= (nColumns - (int)1)),_g24,groupHeight,col,false,_g25,doLines);
					}
					HX_STACK_LINE(429)
					if ((!(childAttributes->get_visible()))){
						HX_STACK_LINE(430)
						if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))){
							HX_STACK_LINE(431)
							(hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(child))->set_isVisible(false);
						}
						else{
							HX_STACK_LINE(434)
							child->set_visible(false);
						}
					}
					HX_STACK_LINE(438)
					if ((this->included(child))){
						HX_STACK_LINE(439)
						if (((mode == HX_CSTRING("columns")))){
							HX_STACK_LINE(440)
							Float _g26 = attributes->get_paddingH();		HX_STACK_VAR(_g26,"_g26");
							HX_STACK_LINE(440)
							Float _g27 = (columnWidth + _g26);		HX_STACK_VAR(_g27,"_g27");
							HX_STACK_LINE(440)
							hx::AddEq(pos,_g27);
						}
						else{
							HX_STACK_LINE(442)
							if (((mode == HX_CSTRING("rows")))){
								HX_STACK_LINE(443)
								Float _g28 = attributes->get_paddingV();		HX_STACK_VAR(_g28,"_g28");
								HX_STACK_LINE(443)
								Float _g29 = (columnHeight + _g28);		HX_STACK_VAR(_g29,"_g29");
								HX_STACK_LINE(443)
								hx::AddEq(pos,_g29);
							}
							else{
								HX_STACK_LINE(445)
								if (((mode == HX_CSTRING("horizontal")))){
									struct _Function_8_1{
										inline static bool Block( ::com::danielfreeman::MadXML &line){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",446,0x1627582f)
											{
												HX_STACK_LINE(446)
												::String _g30 = line->att->resolve(HX_CSTRING("alignH"));		HX_STACK_VAR(_g30,"_g30");
												HX_STACK_LINE(446)
												return (_g30 == HX_CSTRING("right"));
											}
											return null();
										}
									};
									HX_STACK_LINE(446)
									if (((  ((line->has->resolve(HX_CSTRING("alignH")))) ? bool(_Function_8_1::Block(line)) : bool(false) ))){
										HX_STACK_LINE(447)
										Float _g31;		HX_STACK_VAR(_g31,"_g31");
										HX_STACK_LINE(447)
										if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))){
											HX_STACK_LINE(447)
											_g31 = (hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(child))->get_theWidth();
										}
										else{
											HX_STACK_LINE(447)
											_g31 = child->get_width();
										}
										HX_STACK_LINE(447)
										Float _g32 = attributes->get_paddingH();		HX_STACK_VAR(_g32,"_g32");
										HX_STACK_LINE(447)
										Float _g33 = (_g31 + _g32);		HX_STACK_VAR(_g33,"_g33");
										HX_STACK_LINE(447)
										hx::AddEq(widthOffset,_g33);
									}
									else{
										HX_STACK_LINE(450)
										Float _g34 = child->get_x();		HX_STACK_VAR(_g34,"_g34");
										HX_STACK_LINE(450)
										Float _g35;		HX_STACK_VAR(_g35,"_g35");
										HX_STACK_LINE(450)
										if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))){
											HX_STACK_LINE(450)
											_g35 = (hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(child))->get_theWidth();
										}
										else{
											HX_STACK_LINE(450)
											_g35 = child->get_width();
										}
										HX_STACK_LINE(450)
										Float _g36 = (_g34 + _g35);		HX_STACK_VAR(_g36,"_g36");
										HX_STACK_LINE(450)
										Float _g37 = attributes->get_paddingH();		HX_STACK_VAR(_g37,"_g37");
										HX_STACK_LINE(450)
										Float _g38 = (_g36 + _g37);		HX_STACK_VAR(_g38,"_g38");
										HX_STACK_LINE(450)
										pos = _g38;
									}
								}
								else{
									HX_STACK_LINE(453)
									if (((mode == HX_CSTRING("frame")))){
										HX_STACK_LINE(454)
										Float _g40;		HX_STACK_VAR(_g40,"_g40");
										HX_STACK_LINE(454)
										if ((line->has->resolve(HX_CSTRING("x")))){
											HX_STACK_LINE(454)
											::String _g39 = line->att->resolve(HX_CSTRING("x"));		HX_STACK_VAR(_g39,"_g39");
											HX_STACK_LINE(454)
											_g40 = ::Std_obj::parseFloat(_g39);
										}
										else{
											HX_STACK_LINE(454)
											_g40 = (int)0;
										}
										HX_STACK_LINE(454)
										child->set_x(_g40);
										HX_STACK_LINE(455)
										Float _g42;		HX_STACK_VAR(_g42,"_g42");
										HX_STACK_LINE(455)
										if ((line->has->resolve(HX_CSTRING("y")))){
											HX_STACK_LINE(455)
											::String _g41 = line->att->resolve(HX_CSTRING("y"));		HX_STACK_VAR(_g41,"_g41");
											HX_STACK_LINE(455)
											_g42 = ::Std_obj::parseFloat(_g41);
										}
										else{
											HX_STACK_LINE(455)
											_g42 = (int)0;
										}
										HX_STACK_LINE(455)
										child->set_y(_g42);
									}
									else{
										struct _Function_9_1{
											inline static bool Block( ::com::danielfreeman::MadXML &line){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",458,0x1627582f)
												{
													HX_STACK_LINE(458)
													::String _g43 = line->att->resolve(HX_CSTRING("alignV"));		HX_STACK_VAR(_g43,"_g43");
													HX_STACK_LINE(458)
													return (_g43 == HX_CSTRING("bottom"));
												}
												return null();
											}
										};
										HX_STACK_LINE(458)
										if (((  ((line->has->resolve(HX_CSTRING("alignV")))) ? bool(_Function_9_1::Block(line)) : bool(false) ))){
											HX_STACK_LINE(459)
											Float _g44;		HX_STACK_VAR(_g44,"_g44");
											HX_STACK_LINE(459)
											if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))){
												HX_STACK_LINE(459)
												_g44 = (hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(child))->get_theHeight();
											}
											else{
												HX_STACK_LINE(459)
												_g44 = child->get_height();
											}
											HX_STACK_LINE(459)
											Float _g45 = attributes->get_paddingV();		HX_STACK_VAR(_g45,"_g45");
											HX_STACK_LINE(459)
											Float _g46 = (_g44 + _g45);		HX_STACK_VAR(_g46,"_g46");
											HX_STACK_LINE(459)
											hx::AddEq(heightOffset,_g46);
										}
										else{
											HX_STACK_LINE(462)
											Float _g47 = child->get_y();		HX_STACK_VAR(_g47,"_g47");
											HX_STACK_LINE(462)
											Float _g48;		HX_STACK_VAR(_g48,"_g48");
											HX_STACK_LINE(462)
											if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))){
												HX_STACK_LINE(462)
												_g48 = (hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(child))->get_theHeight();
											}
											else{
												HX_STACK_LINE(462)
												_g48 = child->get_height();
											}
											HX_STACK_LINE(462)
											Float _g49 = (_g47 + _g48);		HX_STACK_VAR(_g49,"_g49");
											HX_STACK_LINE(462)
											Float _g50 = attributes->get_paddingV();		HX_STACK_VAR(_g50,"_g50");
											HX_STACK_LINE(462)
											Float _g51 = (_g49 + _g50);		HX_STACK_VAR(_g51,"_g51");
											HX_STACK_LINE(462)
											pos = _g51;
										}
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(468)
				(col)++;
			}
		}
		HX_STACK_LINE(470)
		this->_extra = (int)0;
		HX_STACK_LINE(473)
		if ((row)){
			HX_STACK_LINE(474)
			this->layout(attributes);
		}
		else{
			HX_STACK_LINE(476)
			if (((bool((this->_mode == HX_CSTRING("columns"))) && bool(hasPicker)))){
				HX_STACK_LINE(477)
				this->_pickerBackground = true;
				HX_STACK_LINE(478)
				this->pickerBackground(attributes);
				HX_STACK_LINE(479)
				this->_extra = ::com::danielfreeman::madcomponents::UI_obj::PADDING;
			}
			else{
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIForm_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",481,0x1627582f)
						{
							HX_STACK_LINE(481)
							int _g52 = __this->_mode.indexOf(HX_CSTRING("scroll"),null());		HX_STACK_VAR(_g52,"_g52");
							HX_STACK_LINE(481)
							return (_g52 < (int)0);
						}
						return null();
					}
				};
				HX_STACK_LINE(481)
				if (((  (((  ((!(this->_inGroup))) ? bool(_Function_3_1::Block(this)) : bool(false) ))) ? bool((this->_style == null())) : bool(false) ))){
					HX_STACK_LINE(482)
					this->drawBackground(null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(UIForm_obj,parseBlock,(void))

Void UIForm_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","layout",0x623da46c,"com.danielfreeman.madcomponents.UIForm.layout","com/danielfreeman/madcomponents/UIForm.hx",493,0x1627582f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(494)
		::com::danielfreeman::madcomponents::Attributes _g = attributes->copy(this->_xml,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(494)
		this->super::layout(_g);
		HX_STACK_LINE(495)
		if ((this->_lazyRender)){
			HX_STACK_LINE(496)
			return null();
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIForm_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",498,0x1627582f)
				{
					struct _Function_2_1{
						inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIForm_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",498,0x1627582f)
							{
								HX_STACK_LINE(498)
								::String _g1 = __this->_xml->att->resolve(HX_CSTRING("border"));		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(498)
								return (_g1 == HX_CSTRING("true"));
							}
							return null();
						}
					};
					HX_STACK_LINE(498)
					return (  (((  ((!(__this->_attributes->get_hasBorder()))) ? bool(__this->_xml->has->resolve(HX_CSTRING("border"))) : bool(false) ))) ? bool(_Function_2_1::Block(__this)) : bool(false) );
				}
				return null();
			}
		};
		HX_STACK_LINE(498)
		if (((  ((!(((this->_style != null()))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))){
			HX_STACK_LINE(499)
			Float _g2 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(499)
			Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(499)
			Float _g4 = (::com::danielfreeman::madcomponents::UI_obj::PADDING + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(499)
			this->_attributes->y = _g4;
			HX_STACK_LINE(500)
			hx::AddEq(this->_attributes->x,::com::danielfreeman::madcomponents::UI_obj::PADDING);
			HX_STACK_LINE(501)
			hx::SubEq(this->_attributes->width,((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING));
			HX_STACK_LINE(502)
			Float _g5 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(502)
			Float _g6 = (((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING) + _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(502)
			hx::SubEq(this->_attributes->height,_g6);
			HX_STACK_LINE(503)
			this->_attributes->set_hasBorder(true);
		}
		HX_STACK_LINE(505)
		this->widthAndHeight(this->_xml,this->_attributes);
		HX_STACK_LINE(506)
		if ((this->_row)){
			HX_STACK_LINE(507)
			Float _g7 = this->get_height();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(507)
			this->_attributes->height = _g7;
		}
		HX_STACK_LINE(509)
		this->_positions = Array_obj< Float >::__new();
		HX_STACK_LINE(510)
		::com::danielfreeman::MadXMLList xmlList = this->get_xml()->children(null());		HX_STACK_VAR(xmlList,"xmlList");
		HX_STACK_LINE(511)
		Float pos;		HX_STACK_VAR(pos,"pos");
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIForm_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",511,0x1627582f)
				{
					HX_STACK_LINE(511)
					int _g8 = __this->_mode.indexOf(HX_CSTRING("Panel"),null());		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(511)
					return (_g8 >= (int)0);
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIForm_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",511,0x1627582f)
				{
					HX_STACK_LINE(511)
					int _g9 = __this->_mode.indexOf(HX_CSTRING("scroll"),null());		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(511)
					return (_g9 >= (int)0);
				}
				return null();
			}
		};
		HX_STACK_LINE(511)
		if (((  ((!(((  ((!(((bool((this->_mode == HX_CSTRING("vertical"))) || bool((this->_mode == HX_CSTRING("rows")))))))) ? bool(_Function_1_2::Block(this)) : bool(true) ))))) ? bool(_Function_1_3::Block(this)) : bool(true) ))){
			HX_STACK_LINE(511)
			pos = this->_attributes->y;
		}
		else{
			HX_STACK_LINE(511)
			pos = this->_attributes->x;
		}
		HX_STACK_LINE(512)
		int nColumns = this->numberOfColumns(xmlList);		HX_STACK_VAR(nColumns,"nColumns");
		HX_STACK_LINE(513)
		Float _g10 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(513)
		Float _g11 = (((nColumns - (int)1)) * _g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(513)
		Float _g12 = (this->_attributes->width - _g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(513)
		Float columnWidth = (Float(_g12) / Float(nColumns));		HX_STACK_VAR(columnWidth,"columnWidth");
		HX_STACK_LINE(514)
		Float _g13 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(514)
		Float _g14 = (((nColumns - (int)1)) * _g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(514)
		Float _g15 = (this->_attributes->height - _g14);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(514)
		Float columnHeight = (Float(_g15) / Float(nColumns));		HX_STACK_VAR(columnHeight,"columnHeight");
		HX_STACK_LINE(515)
		bool hasPicker = false;		HX_STACK_VAR(hasPicker,"hasPicker");
		HX_STACK_LINE(516)
		int col = (int)0;		HX_STACK_VAR(col,"col");
		HX_STACK_LINE(517)
		bool group = false;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(518)
		Float widthOffset = (int)0;		HX_STACK_VAR(widthOffset,"widthOffset");
		HX_STACK_LINE(519)
		Float heightOffset = (int)0;		HX_STACK_VAR(heightOffset,"heightOffset");
		HX_STACK_LINE(520)
		if (((this->_style != null()))){
			HX_STACK_LINE(521)
			this->_style->get_graphics()->clear();
		}
		HX_STACK_LINE(523)
		{
			HX_STACK_LINE(523)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(523)
			int _g2 = xmlList->length();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(523)
			while((true)){
				HX_STACK_LINE(523)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(523)
					break;
				}
				HX_STACK_LINE(523)
				int l = (_g1)++;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(524)
				::com::danielfreeman::MadXML line = xmlList->get(l);		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(525)
				::String localName = line->get_name();		HX_STACK_VAR(localName,"localName");
				HX_STACK_LINE(526)
				if (((  ((!(((  ((!(((  ((!(line->get_nodeKindIsText()))) ? bool((localName == HX_CSTRING("data"))) : bool(true) ))))) ? bool((localName == HX_CSTRING("model"))) : bool(true) ))))) ? bool((localName == HX_CSTRING("sendModel"))) : bool(true) ))){
					HX_STACK_LINE(528)
					continue;
				}
				HX_STACK_LINE(530)
				::com::danielfreeman::madcomponents::Attributes childAttributes = this->_attributes->copy(line,true);		HX_STACK_VAR(childAttributes,"childAttributes");
				HX_STACK_LINE(531)
				childAttributes->y = (int)0;
				HX_STACK_LINE(532)
				::openfl::display::DisplayObject child = this->_children->__get(l).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(533)
				if (((this->_mode == HX_CSTRING("columns")))){
					HX_STACK_LINE(534)
					if ((this->customWidths())){
						HX_STACK_LINE(535)
						Float _g16 = columnWidth = this->_widths->__GetItem(col);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(535)
						childAttributes->width = _g16;
						HX_STACK_LINE(536)
						childAttributes->x = pos;
					}
					else{
						HX_STACK_LINE(539)
						childAttributes->width = columnWidth;
						HX_STACK_LINE(540)
						childAttributes->x = pos;
					}
				}
				else{
					HX_STACK_LINE(543)
					if (((this->_mode == HX_CSTRING("rows")))){
						HX_STACK_LINE(544)
						if ((this->customHeights())){
							HX_STACK_LINE(545)
							Float _g17 = columnHeight = this->_heights->__GetItem(col);		HX_STACK_VAR(_g17,"_g17");
							HX_STACK_LINE(545)
							childAttributes->height = _g17;
							HX_STACK_LINE(546)
							childAttributes->y = pos;
						}
						else{
							HX_STACK_LINE(549)
							childAttributes->height = columnHeight;
							HX_STACK_LINE(550)
							childAttributes->y = pos;
						}
					}
					else{
						HX_STACK_LINE(553)
						if (((this->_mode == HX_CSTRING("horizontal")))){
							HX_STACK_LINE(554)
							hx::AddEq(childAttributes->width,((childAttributes->x - pos) - widthOffset));
							HX_STACK_LINE(555)
							if (((childAttributes->width < (int)0))){
								HX_STACK_LINE(556)
								childAttributes->width = (int)0;
								HX_STACK_LINE(557)
								childAttributes->x = pos;
							}
						}
						else{
							HX_STACK_LINE(560)
							if (((this->_mode != HX_CSTRING("frame")))){
								HX_STACK_LINE(561)
								hx::AddEq(childAttributes->height,((childAttributes->y - pos) - heightOffset));
								HX_STACK_LINE(562)
								if (((childAttributes->height < (int)0))){
									HX_STACK_LINE(563)
									childAttributes->height = (int)0;
								}
								HX_STACK_LINE(565)
								childAttributes->y = pos;
							}
						}
					}
				}
				HX_STACK_LINE(567)
				if (((  ((::com::danielfreeman::madcomponents::UI_obj::isContainer(localName))) ? bool(::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::IComponentUI >())) : bool(false) ))){
					HX_STACK_LINE(568)
					(hx::TCast< com::danielfreeman::madcomponents::IComponentUI >::cast(child))->layout(childAttributes);
					HX_STACK_LINE(569)
					child->set_x(childAttributes->x);
					HX_STACK_LINE(570)
					child->set_y(childAttributes->y);
				}
				else{
					HX_STACK_LINE(573)
					::String _switch_2 = (localName);
					if (  ( _switch_2==HX_CSTRING("group")) ||  ( _switch_2==HX_CSTRING("clickableGroup")) ||  ( _switch_2==HX_CSTRING("frame")) ||  ( _switch_2==HX_CSTRING("horizontal")) ||  ( _switch_2==HX_CSTRING("vertical")) ||  ( _switch_2==HX_CSTRING("columns")) ||  ( _switch_2==HX_CSTRING("rows"))){
						HX_STACK_LINE(575)
						if (((bool((localName == HX_CSTRING("group"))) || bool((localName == HX_CSTRING("clickableGroup")))))){
							HX_STACK_LINE(576)
							group = true;
						}
						HX_STACK_LINE(578)
						::com::danielfreeman::madcomponents::Attributes newAttributes = childAttributes->copy(null(),null());		HX_STACK_VAR(newAttributes,"newAttributes");
						HX_STACK_LINE(579)
						newAttributes->x = (int)0;
						HX_STACK_LINE(580)
						newAttributes->y = (int)0;
						HX_STACK_LINE(581)
						(hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(child))->layout(newAttributes);
					}
					else if (  ( _switch_2==HX_CSTRING("picker"))){
						HX_STACK_LINE(584)
						hasPicker = true;
						HX_STACK_LINE(585)
						(hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(child))->__Field(HX_CSTRING("layout"),true)(childAttributes);
					}
					else  {
						HX_STACK_LINE(588)
						if ((childAttributes->get_fillH())){
							HX_STACK_LINE(589)
							Float _g18 = childAttributes->get_widthH();		HX_STACK_VAR(_g18,"_g18");
							HX_STACK_LINE(589)
							(hx::TCast< openfl::display::DisplayObject >::cast(child))->set_width(_g18);
						}
					}
;
;
				}
				HX_STACK_LINE(592)
				childAttributes->position(child,(bool(this->_inGroup) && bool(!(this->_row))));
				HX_STACK_LINE(593)
				if (((this->_style != null()))){
					HX_STACK_LINE(594)
					Float _g19;		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(594)
					if (((this->_mode == HX_CSTRING("rows")))){
						HX_STACK_LINE(594)
						_g19 = columnHeight;
					}
					else{
						HX_STACK_LINE(594)
						if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))){
							HX_STACK_LINE(594)
							_g19 = (hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(child))->get_theHeight();
						}
						else{
							HX_STACK_LINE(594)
							_g19 = child->get_height();
						}
					}
					HX_STACK_LINE(594)
					Float _g20 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(594)
					Float groupHeight = (_g19 + _g20);		HX_STACK_VAR(groupHeight,"groupHeight");
					HX_STACK_LINE(595)
					Float _g21 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(595)
					Float _g22 = (Float(_g21) / Float((int)2));		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(595)
					Float _g23 = (pos - _g22);		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(595)
					Float top = (_g23 + ::com::danielfreeman::madcomponents::UIForm_obj::GROUP_OFFSET);		HX_STACK_VAR(top,"top");
					HX_STACK_LINE(596)
					bool doLines;		HX_STACK_VAR(doLines,"doLines");
					struct _Function_4_1{
						inline static bool Block( ::com::danielfreeman::MadXML &line){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",596,0x1627582f)
							{
								HX_STACK_LINE(596)
								::String _g24 = line->att->resolve(HX_CSTRING("lines"));		HX_STACK_VAR(_g24,"_g24");
								HX_STACK_LINE(596)
								::String _g25 = ::Std_obj::string(_g24);		HX_STACK_VAR(_g25,"_g25");
								HX_STACK_LINE(596)
								return (_g25 != HX_CSTRING("false"));
							}
							return null();
						}
					};
					HX_STACK_LINE(596)
					if (((  ((line->has->resolve(HX_CSTRING("lines")))) ? bool(_Function_4_1::Block(line)) : bool(false) ))){
						HX_STACK_LINE(596)
						doLines = ::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::UIForm >());
					}
					else{
						HX_STACK_LINE(596)
						doLines = false;
					}
					HX_STACK_LINE(597)
					::com::danielfreeman::madcomponents::UIForm _g26;		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(597)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(597)
						_g26 = hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(child);
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e = __e;{
								HX_STACK_LINE(597)
								_g26 = null();
							}
						}
					}
					HX_STACK_LINE(597)
					this->groupedBackground((l == (int)0),(l >= (nColumns - (int)1)),top,groupHeight,col,false,_g26,doLines);
				}
				HX_STACK_LINE(600)
				if ((this->included(child))){
					HX_STACK_LINE(601)
					if (((this->_mode == HX_CSTRING("columns")))){
						HX_STACK_LINE(602)
						Float _g27 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g27,"_g27");
						HX_STACK_LINE(602)
						Float _g28 = (columnWidth + _g27);		HX_STACK_VAR(_g28,"_g28");
						HX_STACK_LINE(602)
						hx::AddEq(pos,_g28);
					}
					else{
						HX_STACK_LINE(604)
						if (((this->_mode == HX_CSTRING("rows")))){
							HX_STACK_LINE(605)
							Float _g29 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g29,"_g29");
							HX_STACK_LINE(605)
							Float _g30 = (columnHeight + _g29);		HX_STACK_VAR(_g30,"_g30");
							HX_STACK_LINE(605)
							hx::AddEq(pos,_g30);
						}
						else{
							HX_STACK_LINE(607)
							if (((this->_mode == HX_CSTRING("horizontal")))){
								struct _Function_7_1{
									inline static bool Block( ::com::danielfreeman::MadXML &line){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",608,0x1627582f)
										{
											HX_STACK_LINE(608)
											::String _g31 = line->att->resolve(HX_CSTRING("alignH"));		HX_STACK_VAR(_g31,"_g31");
											HX_STACK_LINE(608)
											return (_g31 == HX_CSTRING("right"));
										}
										return null();
									}
								};
								HX_STACK_LINE(608)
								if (((  ((line->has->resolve(HX_CSTRING("alignH")))) ? bool(_Function_7_1::Block(line)) : bool(false) ))){
									HX_STACK_LINE(609)
									Float _g32;		HX_STACK_VAR(_g32,"_g32");
									HX_STACK_LINE(609)
									if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))){
										HX_STACK_LINE(609)
										_g32 = (hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(child))->get_theWidth();
									}
									else{
										HX_STACK_LINE(609)
										_g32 = child->get_width();
									}
									HX_STACK_LINE(609)
									Float _g33 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g33,"_g33");
									HX_STACK_LINE(609)
									Float _g34 = (_g32 + _g33);		HX_STACK_VAR(_g34,"_g34");
									HX_STACK_LINE(609)
									hx::AddEq(widthOffset,_g34);
								}
								else{
									HX_STACK_LINE(612)
									Float _g35 = child->get_x();		HX_STACK_VAR(_g35,"_g35");
									HX_STACK_LINE(612)
									Float _g36;		HX_STACK_VAR(_g36,"_g36");
									HX_STACK_LINE(612)
									if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))){
										HX_STACK_LINE(612)
										_g36 = (hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(child))->get_theWidth();
									}
									else{
										HX_STACK_LINE(612)
										_g36 = child->get_width();
									}
									HX_STACK_LINE(612)
									Float _g37 = (_g35 + _g36);		HX_STACK_VAR(_g37,"_g37");
									HX_STACK_LINE(612)
									Float _g38 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g38,"_g38");
									HX_STACK_LINE(612)
									Float _g39 = (_g37 + _g38);		HX_STACK_VAR(_g39,"_g39");
									HX_STACK_LINE(612)
									pos = _g39;
								}
							}
							else{
								HX_STACK_LINE(615)
								if (((this->_mode == HX_CSTRING("frame")))){
									HX_STACK_LINE(616)
									Float _g41;		HX_STACK_VAR(_g41,"_g41");
									HX_STACK_LINE(616)
									if ((line->has->resolve(HX_CSTRING("x")))){
										HX_STACK_LINE(616)
										::String _g40 = line->att->resolve(HX_CSTRING("x"));		HX_STACK_VAR(_g40,"_g40");
										HX_STACK_LINE(616)
										_g41 = ::Std_obj::parseFloat(_g40);
									}
									else{
										HX_STACK_LINE(616)
										_g41 = (int)0;
									}
									HX_STACK_LINE(616)
									child->set_x(_g41);
									HX_STACK_LINE(617)
									Float _g43;		HX_STACK_VAR(_g43,"_g43");
									HX_STACK_LINE(617)
									if ((line->has->resolve(HX_CSTRING("y")))){
										HX_STACK_LINE(617)
										::String _g42 = line->att->resolve(HX_CSTRING("y"));		HX_STACK_VAR(_g42,"_g42");
										HX_STACK_LINE(617)
										_g43 = ::Std_obj::parseFloat(_g42);
									}
									else{
										HX_STACK_LINE(617)
										_g43 = (int)0;
									}
									HX_STACK_LINE(617)
									child->set_y(_g43);
								}
								else{
									struct _Function_8_1{
										inline static bool Block( ::com::danielfreeman::MadXML &line){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",620,0x1627582f)
											{
												HX_STACK_LINE(620)
												::String _g44 = line->att->resolve(HX_CSTRING("alignV"));		HX_STACK_VAR(_g44,"_g44");
												HX_STACK_LINE(620)
												return (_g44 == HX_CSTRING("bottom"));
											}
											return null();
										}
									};
									HX_STACK_LINE(620)
									if (((  ((line->has->resolve(HX_CSTRING("alignV")))) ? bool(_Function_8_1::Block(line)) : bool(false) ))){
										HX_STACK_LINE(621)
										Float _g45;		HX_STACK_VAR(_g45,"_g45");
										HX_STACK_LINE(621)
										if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))){
											HX_STACK_LINE(621)
											_g45 = (hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(child))->get_theHeight();
										}
										else{
											HX_STACK_LINE(621)
											_g45 = child->get_height();
										}
										HX_STACK_LINE(621)
										Float _g46 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g46,"_g46");
										HX_STACK_LINE(621)
										Float _g47 = (_g45 + _g46);		HX_STACK_VAR(_g47,"_g47");
										HX_STACK_LINE(621)
										hx::AddEq(heightOffset,_g47);
									}
									else{
										HX_STACK_LINE(624)
										Float _g48 = child->get_y();		HX_STACK_VAR(_g48,"_g48");
										HX_STACK_LINE(624)
										Float _g49;		HX_STACK_VAR(_g49,"_g49");
										HX_STACK_LINE(624)
										if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))){
											HX_STACK_LINE(624)
											_g49 = (hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(child))->get_theHeight();
										}
										else{
											HX_STACK_LINE(624)
											_g49 = child->get_height();
										}
										HX_STACK_LINE(624)
										Float _g50 = (_g48 + _g49);		HX_STACK_VAR(_g50,"_g50");
										HX_STACK_LINE(624)
										Float _g51 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g51,"_g51");
										HX_STACK_LINE(624)
										Float _g52 = (_g50 + _g51);		HX_STACK_VAR(_g52,"_g52");
										HX_STACK_LINE(624)
										pos = _g52;
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(629)
				Float _g53 = child->get_x();		HX_STACK_VAR(_g53,"_g53");
				HX_STACK_LINE(629)
				this->_positions->push(_g53);
				HX_STACK_LINE(630)
				(col)++;
			}
		}
		HX_STACK_LINE(632)
		this->_extra = (int)0;
		HX_STACK_LINE(634)
		if (((bool((this->_mode == HX_CSTRING("columns"))) && bool(hasPicker)))){
			HX_STACK_LINE(635)
			this->_pickerBackground = true;
			HX_STACK_LINE(636)
			this->pickerBackground(this->_attributes);
			HX_STACK_LINE(637)
			this->_extra = ::com::danielfreeman::madcomponents::UI_obj::PADDING;
		}
		else{
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIForm_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",639,0x1627582f)
					{
						HX_STACK_LINE(639)
						int _g54 = __this->_mode.indexOf(HX_CSTRING("scroll"),null());		HX_STACK_VAR(_g54,"_g54");
						HX_STACK_LINE(639)
						return (_g54 < (int)0);
					}
					return null();
				}
			};
			HX_STACK_LINE(639)
			if (((  (((  (((  ((!(this->_inGroup))) ? bool(_Function_2_1::Block(this)) : bool(false) ))) ? bool((this->_style == null())) : bool(false) ))) ? bool(!(this->_row)) : bool(false) ))){
				HX_STACK_LINE(640)
				this->drawBackground(null());
			}
		}
	}
return null();
}


bool UIForm_obj::get_hasPickerBackground( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","get_hasPickerBackground",0xb17ad72b,"com.danielfreeman.madcomponents.UIForm.get_hasPickerBackground","com/danielfreeman/madcomponents/UIForm.hx",646,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(646)
	return this->_pickerBackground;
}


HX_DEFINE_DYNAMIC_FUNC0(UIForm_obj,get_hasPickerBackground,return )

Dynamic UIForm_obj::get_children( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","get_children",0xb7f2808a,"com.danielfreeman.madcomponents.UIForm.get_children","com/danielfreeman/madcomponents/UIForm.hx",651,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(651)
	return this->_children;
}


HX_DEFINE_DYNAMIC_FUNC0(UIForm_obj,get_children,return )

bool UIForm_obj::included( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","included",0x9326cf7e,"com.danielfreeman.madcomponents.UIForm.included","com/danielfreeman/madcomponents/UIForm.hx",656,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(656)
	if ((!((!(::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >())))))){
		HX_STACK_LINE(656)
		return (hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(child))->get_includeInLayout();
	}
	else{
		HX_STACK_LINE(656)
		return true;
	}
	HX_STACK_LINE(656)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(UIForm_obj,included,return )

Array< Float > UIForm_obj::get_positions( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","get_positions",0x2023edff,"com.danielfreeman.madcomponents.UIForm.get_positions","com/danielfreeman/madcomponents/UIForm.hx",664,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(664)
	return this->_positions;
}


HX_DEFINE_DYNAMIC_FUNC0(UIForm_obj,get_positions,return )

Void UIForm_obj::doLayout( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","doLayout",0x19cf9ed7,"com.danielfreeman.madcomponents.UIForm.doLayout","com/danielfreeman/madcomponents/UIForm.hx",672,0x1627582f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(672)
		this->layout(this->_attributes);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIForm_obj,doLayout,(void))

Void UIForm_obj::doLayoutHandler( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","doLayoutHandler",0x8d04d1b3,"com.danielfreeman.madcomponents.UIForm.doLayoutHandler","com/danielfreeman/madcomponents/UIForm.hx",676,0x1627582f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(677)
		this->layout(this->_attributes);
		HX_STACK_LINE(678)
		event->stopPropagation();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIForm_obj,doLayoutHandler,(void))

int UIForm_obj::numberOfColumns( ::com::danielfreeman::MadXMLList xmlList){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","numberOfColumns",0x9ae3ce7b,"com.danielfreeman.madcomponents.UIForm.numberOfColumns","com/danielfreeman/madcomponents/UIForm.hx",685,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xmlList,"xmlList")
	HX_STACK_LINE(686)
	int result = (int)0;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(687)
	for(::cpp::FastIterator_obj< ::com::danielfreeman::MadXML > *__it = ::cpp::CreateFastIterator< ::com::danielfreeman::MadXML >(xmlList->iterator());  __it->hasNext(); ){
		::com::danielfreeman::MadXML column = __it->next();
		if ((!(column->get_nodeKindIsText()))){
			HX_STACK_LINE(690)
			::String localName = column->get_name();		HX_STACK_VAR(localName,"localName");
			HX_STACK_LINE(691)
			if (((bool((bool((localName != HX_CSTRING("data"))) && bool((localName != HX_CSTRING("model"))))) && bool((localName != HX_CSTRING("sendModel")))))){
				HX_STACK_LINE(691)
				(result)++;
			}
		}
;
	}
	HX_STACK_LINE(695)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(UIForm_obj,numberOfColumns,return )

Void UIForm_obj::pickerBackground( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","pickerBackground",0x3cd94d5e,"com.danielfreeman.madcomponents.UIForm.pickerBackground","com/danielfreeman/madcomponents/UIForm.hx",702,0x1627582f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(703)
		int colour;		HX_STACK_VAR(colour,"colour");
		HX_STACK_LINE(703)
		if (((attributes->get_backgroundColours()->length > (int)0))){
			HX_STACK_LINE(703)
			Array< int > _g = attributes->get_backgroundColours();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(703)
			colour = _g->__get((int)0);
		}
		else{
			HX_STACK_LINE(703)
			colour = (int)6710886;
		}
		HX_STACK_LINE(704)
		this->get_graphics()->clear();
		HX_STACK_LINE(705)
		int _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(705)
		if (((attributes->get_backgroundColours()->length > (int)1))){
			HX_STACK_LINE(705)
			Array< int > _g1 = attributes->get_backgroundColours();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(705)
			_g2 = _g1->__get((int)1);
		}
		else{
			HX_STACK_LINE(705)
			_g2 = colour;
		}
		HX_STACK_LINE(705)
		this->get_graphics()->beginFill(_g2,null());
		HX_STACK_LINE(706)
		Float width = (attributes->width + ((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING));		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(707)
		Float _g3 = this->get_theHeight();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(707)
		Float _g4 = (_g3 + ((int)2 * this->_padding));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(707)
		Float height = (_g4 + (int)10);		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(708)
		this->get_graphics()->drawRect((this->_attributes->x - ::com::danielfreeman::madcomponents::UI_obj::PADDING),-(this->_padding),width,height);
		HX_STACK_LINE(709)
		this->cutOuts((int)0);
		HX_STACK_LINE(710)
		::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(711)
		int _g5 = ::com::danielfreeman::madcomponents::Colour_obj::darken(colour,(int)128);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(711)
		int _g6 = ::com::danielfreeman::madcomponents::Colour_obj::lighten(colour,null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(711)
		int _g7 = ::com::danielfreeman::madcomponents::Colour_obj::darken(colour,null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(711)
		Array< int > gradient = Array_obj< int >::__new().Add(_g5).Add(_g6).Add(_g7);		HX_STACK_VAR(gradient,"gradient");
		HX_STACK_LINE(712)
		Float _g8 = this->get_theHeight();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(712)
		matr->createGradientBox(width,_g8,(Float(::Math_obj::PI) / Float((int)2)),(int)0,(int)0);
		HX_STACK_LINE(713)
		this->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,gradient,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)102).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(714)
		this->get_graphics()->drawRect(((this->_attributes->x - ::com::danielfreeman::madcomponents::UI_obj::PADDING) + (int)1),(-(this->_padding) + (int)1),(width - (int)2),(Float(((height - (int)2))) / Float((int)2)));
		HX_STACK_LINE(715)
		this->cutOuts((int)-1);
		HX_STACK_LINE(716)
		int _g10;		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(716)
		if (((attributes->get_backgroundColours()->length > (int)2))){
			HX_STACK_LINE(716)
			Array< int > _g9 = attributes->get_backgroundColours();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(716)
			_g10 = _g9->__get((int)2);
		}
		else{
			HX_STACK_LINE(716)
			_g10 = ::com::danielfreeman::madcomponents::Colour_obj::darken(colour,(int)-16);
		}
		HX_STACK_LINE(716)
		this->get_graphics()->beginFill(_g10,null());
		HX_STACK_LINE(717)
		this->get_graphics()->drawRect(((this->_attributes->x - ::com::danielfreeman::madcomponents::UI_obj::PADDING) + (int)1),(-(this->_padding) + (Float(((height - (int)2))) / Float((int)2))),(width - (int)2),(Float(((height - (int)2))) / Float((int)2)));
		HX_STACK_LINE(718)
		this->cutOuts((int)1);
		HX_STACK_LINE(719)
		this->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIForm_obj,pickerBackground,(void))

Void UIForm_obj::cutOuts( int partial){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","cutOuts",0x266c8ac5,"com.danielfreeman.madcomponents.UIForm.cutOuts","com/danielfreeman/madcomponents/UIForm.hx",724,0x1627582f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(partial,"partial")
		HX_STACK_LINE(724)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(724)
		int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(724)
		while((true)){
			HX_STACK_LINE(724)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(724)
				break;
			}
			HX_STACK_LINE(724)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(725)
			::openfl::display::DisplayObject child = this->getChildAt(i);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(726)
			if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::UIPicker >()))){
				HX_STACK_LINE(727)
				::openfl::display::Graphics _g2 = this->get_graphics();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(727)
				Float _g11 = child->get_x();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(727)
				Float _g21 = child->get_y();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(727)
				(hx::TCast< com::danielfreeman::madcomponents::UIPicker >::cast(child))->drawShape(_g2,_g11,_g21,partial);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIForm_obj,cutOuts,(void))

Void UIForm_obj::groupedBackground( bool begin,bool end,Float top,Float height,int count,hx::Null< bool >  __o_click,::com::danielfreeman::madcomponents::UIForm child,hx::Null< bool >  __o_lines){
bool click = __o_click.Default(false);
bool lines = __o_lines.Default(false);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","groupedBackground",0x0241106a,"com.danielfreeman.madcomponents.UIForm.groupedBackground","com/danielfreeman/madcomponents/UIForm.hx",735,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_ARG(top,"top")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(count,"count")
	HX_STACK_ARG(click,"click")
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(lines,"lines")
{
		HX_STACK_LINE(736)
		if (((this->_groups != null()))){
			struct _Function_2_1{
				inline static Dynamic Block( bool &lines,::com::danielfreeman::madcomponents::UIForm &child,bool &end,Float &top,Float &height,bool &begin){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",737,0x1627582f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("begin") , begin,false);
						__result->Add(HX_CSTRING("end") , end,false);
						__result->Add(HX_CSTRING("top") , top,false);
						__result->Add(HX_CSTRING("height") , height,false);
						__result->Add(HX_CSTRING("child") , child,false);
						__result->Add(HX_CSTRING("lines") , lines,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(737)
			hx::IndexRef((this->_groups).mPtr,count) = _Function_2_1::Block(lines,child,end,top,height,begin);
		}
		HX_STACK_LINE(747)
		int _g = this->_mode.indexOf(HX_CSTRING("scroll"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(747)
		Float left;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(747)
		if (((_g >= (int)0))){
			HX_STACK_LINE(747)
			left = ::com::danielfreeman::madcomponents::UI_obj::PADDING;
		}
		else{
			HX_STACK_LINE(747)
			left = (int)0;
		}
		HX_STACK_LINE(748)
		int _g1 = this->_attributes->get_colour();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(748)
		this->_style->get_graphics()->beginFill(_g1,null());
		HX_STACK_LINE(749)
		if (((bool(begin) && bool(end)))){
			HX_STACK_LINE(750)
			this->_style->get_graphics()->drawRoundRect(left,top,(this->_attributes->width + ((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING)),height,12.,null());
		}
		else{
			HX_STACK_LINE(752)
			if ((begin)){
				HX_STACK_LINE(753)
				::openfl::display::Graphics _g2 = this->_style->get_graphics();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(753)
				::com::danielfreeman::madcomponents::UIGroupedList_obj::curvedTop(_g2,left,top,((left + this->_attributes->width) + ((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING)),(top + height),null());
			}
			else{
				HX_STACK_LINE(755)
				if ((end)){
					HX_STACK_LINE(756)
					::openfl::display::Graphics _g3 = this->_style->get_graphics();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(756)
					::com::danielfreeman::madcomponents::UIGroupedList_obj::curvedBottom(_g3,left,top,((left + this->_attributes->width) + ((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING)),((top + height) + (int)1),null());
				}
				else{
					HX_STACK_LINE(759)
					this->_style->get_graphics()->drawRect(left,top,(this->_attributes->width + ((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING)),height);
				}
			}
		}
		HX_STACK_LINE(761)
		Array< int > colours;		HX_STACK_VAR(colours,"colours");
		HX_STACK_LINE(761)
		if (((child != null()))){
			HX_STACK_LINE(761)
			colours = child->get_attributes()->get_backgroundColours();
		}
		else{
			HX_STACK_LINE(761)
			colours = null();
		}
		HX_STACK_LINE(762)
		if ((click)){
			HX_STACK_LINE(763)
			this->_style->get_graphics()->beginFill((int)10066431,null());
		}
		else{
			HX_STACK_LINE(765)
			if (((bool((colours != null())) && bool((colours->length > (int)1))))){
				HX_STACK_LINE(766)
				::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
				HX_STACK_LINE(767)
				Float _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(767)
				if (((colours->length > (int)2))){
					HX_STACK_LINE(767)
					_g4 = colours->__get((int)2);
				}
				else{
					HX_STACK_LINE(767)
					_g4 = this->get_width();
				}
				HX_STACK_LINE(767)
				matr->createGradientBox(_g4,(  (((colours->length > (int)2))) ? Float(colours->__get((int)2)) : Float((height + ((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING))) ),(  (((colours->length > (int)3))) ? Float((Float((colours->__get((int)3) * ::Math_obj::PI)) / Float((int)180))) : Float((Float(::Math_obj::PI) / Float((int)2))) ),(int)0,(top - ::com::danielfreeman::madcomponents::UI_obj::PADDING));
				HX_STACK_LINE(768)
				this->_style->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,Dynamic( Array_obj<Dynamic>::__new().Add(colours->__get((int)0)).Add(colours->__get((int)1))),Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)255)),matr,::openfl::display::SpreadMethod_obj::REPEAT,null(),null());
			}
			else{
				HX_STACK_LINE(770)
				if (((bool((colours != null())) && bool((colours->length > (int)0))))){
					HX_STACK_LINE(771)
					this->_style->get_graphics()->beginFill(colours->__get((int)0),null());
				}
				else{
					HX_STACK_LINE(773)
					if (((this->_attributes->get_backgroundColours()->length > (int)0))){
						HX_STACK_LINE(774)
						Array< int > _g5 = this->_attributes->get_backgroundColours();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(774)
						int _g6 = _g5->__get(hx::Mod(count,this->_attributes->get_backgroundColours()->length));		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(774)
						this->_style->get_graphics()->beginFill(_g6,null());
					}
					else{
						HX_STACK_LINE(777)
						this->_style->get_graphics()->beginFill((int)16777215,null());
					}
				}
			}
		}
		HX_STACK_LINE(779)
		if (((bool(begin) && bool(end)))){
			HX_STACK_LINE(779)
			this->_style->get_graphics()->drawRoundRect((left + (int)1),(top + (int)1),((this->_attributes->width + ((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING)) - (int)2),(height - (int)2),12.,null());
		}
		else{
			HX_STACK_LINE(781)
			if ((begin)){
				HX_STACK_LINE(782)
				::openfl::display::Graphics _g7 = this->_style->get_graphics();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(782)
				::com::danielfreeman::madcomponents::UIGroupedList_obj::curvedTop(_g7,(left + (int)1),(top + (int)1),(((left + this->_attributes->width) + ((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING)) - (int)1),(top + height),null());
			}
			else{
				HX_STACK_LINE(784)
				if ((end)){
					HX_STACK_LINE(785)
					::openfl::display::Graphics _g8 = this->_style->get_graphics();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(785)
					::com::danielfreeman::madcomponents::UIGroupedList_obj::curvedBottom(_g8,(left + (int)1),(top + (int)1),(((left + this->_attributes->width) + ((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING)) - (int)1),(top + height),null());
					HX_STACK_LINE(785)
					this->_style->get_graphics()->endFill();
					HX_STACK_LINE(785)
					Float _g9 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(785)
					Float _g10 = (Float(_g9) / Float((int)2));		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(785)
					Float _g11 = ((top + height) + _g10);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(785)
					this->_style->get_graphics()->drawRect((int)0,_g11,(int)1,(int)1);
				}
				else{
					HX_STACK_LINE(788)
					this->_style->get_graphics()->drawRect((left + (int)1),(top + (int)1),((this->_attributes->width + ((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING)) - (int)2),(height - (int)1));
				}
			}
		}
		HX_STACK_LINE(790)
		if (((bool((child != null())) && bool(lines)))){
			HX_STACK_LINE(791)
			::com::danielfreeman::madcomponents::UIForm _g12;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(791)
			_g12 = hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(child);
			HX_STACK_LINE(791)
			this->drawLines(_g12,top,height);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(UIForm_obj,groupedBackground,(void))

Void UIForm_obj::drawLines( ::com::danielfreeman::madcomponents::UIForm child,Float top,Float height){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","drawLines",0x6f8aa2d9,"com.danielfreeman.madcomponents.UIForm.drawLines","com/danielfreeman/madcomponents/UIForm.hx",798,0x1627582f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(top,"top")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(799)
		int _g = this->_attributes->get_colour();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(799)
		this->_style->get_graphics()->beginFill(_g,null());
		HX_STACK_LINE(800)
		Dynamic positions = child->get_positions();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(801)
		{
			HX_STACK_LINE(801)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(801)
			int _g2 = positions->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(801)
			while((true)){
				HX_STACK_LINE(801)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(801)
					break;
				}
				HX_STACK_LINE(801)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(802)
				Float _g11 = child->get_x();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(802)
				Float _g21 = (_g11 + positions->__GetItem(i));		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(802)
				Float _g3 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(802)
				Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(802)
				Float _g5 = (_g21 - _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(802)
				this->_style->get_graphics()->drawRect(_g5,(top + (int)1),(int)1,height);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(UIForm_obj,drawLines,(void))

Void UIForm_obj::groupClicked( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","groupClicked",0xffae146a,"com.danielfreeman.madcomponents.UIForm.groupClicked","com/danielfreeman/madcomponents/UIForm.hx",809,0x1627582f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(810)
		Dynamic _g = event->get_target();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(810)
		if (((  ((!(((_g == hx::ObjectPtr<OBJ_>(this)))))) ? bool(this->_listenerAdded) : bool(true) ))){
			HX_STACK_LINE(811)
			return null();
		}
		struct _Function_1_1{
			inline static bool Block( ::openfl::events::MouseEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",813,0x1627582f)
				{
					HX_STACK_LINE(813)
					Dynamic _g1 = event->get_target();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(813)
					return ::Std_obj::is(_g1,hx::ClassOf< ::com::danielfreeman::madcomponents::UIForm >());
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIForm_obj > __this,::openfl::events::MouseEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",813,0x1627582f)
				{
					HX_STACK_LINE(813)
					Dynamic _g2 = event->get_target();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(813)
					return (_g2 == __this->_style);
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static bool Block( ::openfl::events::MouseEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",813,0x1627582f)
				{
					HX_STACK_LINE(813)
					Dynamic _g3 = event->get_target();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(813)
					return (  ((::Std_obj::is(_g3,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))) ? bool(!((hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(event->get_target()))->get_clickable())) : bool(false) );
				}
				return null();
			}
		};
		HX_STACK_LINE(813)
		if (((  ((!(((  ((!(((  ((!(this->_insideScroller))) ? bool(_Function_1_1::Block(event)) : bool(false) ))))) ? bool(_Function_1_2::Block(this,event)) : bool(true) ))))) ? bool(_Function_1_3::Block(event)) : bool(true) ))){
			HX_STACK_LINE(814)
			this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->groupClicked_dyn(),null());
			HX_STACK_LINE(815)
			this->_listenerAdded = true;
			HX_STACK_LINE(816)
			this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->resetGroupClicked_dyn(),null());
			HX_STACK_LINE(817)
			this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->resetGroupClicked_dyn(),null(),null(),null());
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIForm_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIForm.hx",818,0x1627582f)
					{
						HX_STACK_LINE(818)
						Float _g4 = __this->get_stage()->get_mouseX();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(818)
						Float _g5 = __this->get_stage()->get_mouseY();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(818)
						return __this->_style->hitTestPoint(_g4,_g5,true);
					}
					return null();
				}
			};
			HX_STACK_LINE(818)
			if (((  (((this->_style != null()))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(819)
				int i = (this->_groups->__Field(HX_CSTRING("length"),true) - (int)1);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(820)
				while((true)){
					HX_STACK_LINE(820)
					if ((!(((i >= (int)0))))){
						HX_STACK_LINE(820)
						break;
					}
					HX_STACK_LINE(821)
					Dynamic item = this->_groups->__GetItem(i);		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(822)
					Float _g6 = this->get_mouseY();		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(822)
					if (((_g6 > item->__Field(HX_CSTRING("top"),true)))){
						HX_STACK_LINE(823)
						int _g7 = ::Lambda_obj::indexOf(this->_disable,i);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(823)
						if (((_g7 >= (int)0))){
							HX_STACK_LINE(824)
							return null();
						}
						HX_STACK_LINE(826)
						this->_index = i;
						HX_STACK_LINE(827)
						this->groupedBackground((i == (int)0),(i == (this->_groups->__Field(HX_CSTRING("length"),true) - (int)1)),item->__Field(HX_CSTRING("top"),true),item->__Field(HX_CSTRING("height"),true),i,true,item->__Field(HX_CSTRING("child"),true),item->__Field(HX_CSTRING("lines"),true));
						HX_STACK_LINE(828)
						break;
					}
					HX_STACK_LINE(830)
					(i)--;
				}
				HX_STACK_LINE(832)
				::openfl::events::Event _g8 = ::openfl::events::Event_obj::__new((  ((this->_classic)) ? ::String(HX_CSTRING("groupClicked")) : ::String(HX_CSTRING("groupClickStart")) ),null(),null());		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(832)
				this->dispatchEvent(_g8);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIForm_obj,groupClicked,(void))

bool UIForm_obj::groupClickCancel( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","groupClickCancel",0x716c7f25,"com.danielfreeman.madcomponents.UIForm.groupClickCancel","com/danielfreeman/madcomponents/UIForm.hx",840,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(841)
	if (((this->_groups != null()))){
		HX_STACK_LINE(842)
		this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->groupClicked_dyn(),null(),null(),null());
	}
	HX_STACK_LINE(844)
	if (((bool((this->_index >= (int)0)) && bool((this->_index < this->_groups->__Field(HX_CSTRING("length"),true)))))){
		HX_STACK_LINE(845)
		Dynamic item = this->_groups->__GetItem(this->_index);		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(845)
		this->groupedBackground((this->_index == (int)0),(this->_index == (this->_groups->__Field(HX_CSTRING("length"),true) - (int)1)),item->__Field(HX_CSTRING("top"),true),item->__Field(HX_CSTRING("height"),true),this->_index,false,item->__Field(HX_CSTRING("child"),true),null());
		HX_STACK_LINE(846)
		return true;
	}
	else{
		HX_STACK_LINE(849)
		return false;
	}
	HX_STACK_LINE(844)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(UIForm_obj,groupClickCancel,return )

Void UIForm_obj::resetGroupClicked( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","resetGroupClicked",0x967f2f15,"com.danielfreeman.madcomponents.UIForm.resetGroupClicked","com/danielfreeman/madcomponents/UIForm.hx",854,0x1627582f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(855)
		Dynamic _g = event->get_target();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(855)
		if (((  ((!(((_g == hx::ObjectPtr<OBJ_>(this)))))) ? bool(!(this->_listenerAdded)) : bool(true) ))){
			HX_STACK_LINE(856)
			return null();
		}
		HX_STACK_LINE(858)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->resetGroupClicked_dyn(),null());
		HX_STACK_LINE(859)
		this->_listenerAdded = false;
		HX_STACK_LINE(860)
		if ((this->groupClickCancel())){
			HX_STACK_LINE(861)
			if ((!(this->_classic))){
				HX_STACK_LINE(862)
				::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(HX_CSTRING("groupClicked"),null(),null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(862)
				this->dispatchEvent(_g1);
			}
			HX_STACK_LINE(864)
			::openfl::events::Event _g2 = ::openfl::events::Event_obj::__new(HX_CSTRING("groupClickedEnd"),null(),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(864)
			this->dispatchEvent(_g2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIForm_obj,resetGroupClicked,(void))

int UIForm_obj::get_index( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","get_index",0x343b86e7,"com.danielfreeman.madcomponents.UIForm.get_index","com/danielfreeman/madcomponents/UIForm.hx",871,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(871)
	return this->_index;
}


HX_DEFINE_DYNAMIC_FUNC0(UIForm_obj,get_index,return )

Void UIForm_obj::drawComponent( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","drawComponent",0xfce92a97,"com.danielfreeman.madcomponents.UIForm.drawComponent","com/danielfreeman/madcomponents/UIForm.hx",875,0x1627582f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIForm_obj,drawComponent,(void))

Void UIForm_obj::drawBackground( Array< int > colours){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","drawBackground",0x1b1af8d4,"com.danielfreeman.madcomponents.UIForm.drawBackground","com/danielfreeman/madcomponents/UIForm.hx",882,0x1627582f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(colours,"colours")
		HX_STACK_LINE(883)
		if (((this->_attributes->get_backgroundColours()->length == (int)0))){
			HX_STACK_LINE(884)
			this->get_graphics()->clear();
			HX_STACK_LINE(885)
			return null();
		}
		HX_STACK_LINE(887)
		if (((colours == null()))){
			HX_STACK_LINE(888)
			Array< int > _g = this->_attributes->get_backgroundColours();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(888)
			colours = _g;
		}
		HX_STACK_LINE(890)
		if (((this->_attributes->x == (int)0))){
			HX_STACK_LINE(891)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(891)
			if ((this->_attributes->get_hasBorder())){
				HX_STACK_LINE(891)
				_g1 = ::com::danielfreeman::madcomponents::UI_obj::PADDING;
			}
			else{
				HX_STACK_LINE(891)
				_g1 = (int)0;
			}
			HX_STACK_LINE(891)
			::com::danielfreeman::madcomponents::UI_obj::drawBackgroundColour(colours,(this->_attributes->x + this->_attributes->width),((this->_attributes->y + this->_attributes->height) + 10.0),hx::ObjectPtr<OBJ_>(this),_g1);
		}
		else{
			HX_STACK_LINE(894)
			Float padding;		HX_STACK_VAR(padding,"padding");
			HX_STACK_LINE(894)
			if ((this->_attributes->get_hasBorder())){
				HX_STACK_LINE(894)
				padding = ((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING);
			}
			else{
				HX_STACK_LINE(894)
				padding = (int)0;
			}
			HX_STACK_LINE(895)
			::com::danielfreeman::madcomponents::UI_obj::drawBackgroundColour(colours,(padding + this->_attributes->width),((padding + this->_attributes->height) + 10.0),hx::ObjectPtr<OBJ_>(this),(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIForm_obj,drawBackground,(void))

::openfl::display::DisplayObject UIForm_obj::otherCommands( ::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","otherCommands",0x56e74a36,"com.danielfreeman.madcomponents.UIForm.otherCommands","com/danielfreeman/madcomponents/UIForm.hx",902,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_ARG(attributes,"attributes")
	HX_STACK_LINE(903)
	::String className = xml->get_name();		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(904)
	if (((className == null()))){
		HX_STACK_LINE(905)
		return null();
	}
	HX_STACK_LINE(908)
	::String nameSpace = HX_CSTRING("");		HX_STACK_VAR(nameSpace,"nameSpace");
	HX_STACK_LINE(909)
	className = ((nameSpace + HX_CSTRING("::")) + className);
	HX_STACK_LINE(910)
	::Class _g = ::Type_obj::resolveClass(className);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(910)
	::Class ChildClass = ::Type_obj::getClass(_g);		HX_STACK_VAR(ChildClass,"ChildClass");
	HX_STACK_LINE(911)
	if (((ChildClass != null()))){
		HX_STACK_LINE(912)
		Dynamic child = ::Type_obj::createInstance(ChildClass,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(913)
		this->addChild(child);
		HX_STACK_LINE(914)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(xml->x->attributes());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(915)
				::String _g1 = this->get_name();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(915)
				::String value = xml->x->get(_g1);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(916)
				::String _g2 = this->get_name();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(916)
				if ((child->__Field(HX_CSTRING("exists"),true)(_g2))){
					HX_STACK_LINE(917)
					try
					{
					HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
					{
						HX_STACK_LINE(917)
						::String field = this->get_name();		HX_STACK_VAR(field,"field");
						HX_STACK_LINE(917)
						if (((child != null()))){
							HX_STACK_LINE(917)
							child->__SetField(field,value,false);
						}
					}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::openfl::errors::Error >() ){
							HX_STACK_BEGIN_CATCH
							::openfl::errors::Error e = __e;{
								HX_STACK_LINE(920)
								::String field = this->get_name();		HX_STACK_VAR(field,"field");
								HX_STACK_LINE(920)
								::Class _g3 = ::Type_obj::resolveClass(value);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(920)
								Dynamic value1 = ::Type_obj::getClass(_g3);		HX_STACK_VAR(value1,"value1");
								HX_STACK_LINE(920)
								if (((child != null()))){
									HX_STACK_LINE(920)
									child->__SetField(field,value1,false);
								}
							}
						}
						else {
						    HX_STACK_DO_THROW(__e);
						}
					}
				}
			}
;
		}
		HX_STACK_LINE(924)
		if ((attributes->get_fillH())){
			HX_STACK_LINE(925)
			Float _g4 = attributes->get_widthH();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(925)
			child->__FieldRef(HX_CSTRING("width")) = _g4;
		}
		HX_STACK_LINE(927)
		return child;
	}
	else{
		HX_STACK_LINE(930)
		return null();
	}
	HX_STACK_LINE(911)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIForm_obj,otherCommands,return )

Void UIForm_obj::clear( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","clear",0xd6bfea0b,"com.danielfreeman.madcomponents.UIForm.clear","com/danielfreeman/madcomponents/UIForm.hx",939,0x1627582f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(939)
		::com::danielfreeman::madcomponents::UI_obj::clear(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIForm_obj,clear,(void))

::openfl::display::DisplayObject UIForm_obj::findViewById( ::String id,hx::Null< int >  __o_row,hx::Null< int >  __o_group){
int row = __o_row.Default(-1);
int group = __o_group.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","findViewById",0xfe318f32,"com.danielfreeman.madcomponents.UIForm.findViewById","com/danielfreeman/madcomponents/UIForm.hx",945,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(group,"group")
{
		HX_STACK_LINE(946)
		::openfl::display::DisplayObject found = null();		HX_STACK_VAR(found,"found");
		HX_STACK_LINE(947)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(948)
		while((true)){
			HX_STACK_LINE(948)
			int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(948)
			if ((!(((  (((i < _g))) ? bool((found == null())) : bool(false) ))))){
				HX_STACK_LINE(948)
				break;
			}
			HX_STACK_LINE(949)
			::openfl::display::DisplayObject item = this->getChildAt(i);		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(950)
			::String _g1 = item->get_name();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(950)
			if (((_g1 == id))){
				HX_STACK_LINE(951)
				found = item;
			}
			HX_STACK_LINE(953)
			if (((  (((found == null()))) ? bool(::Std_obj::is(item,hx::ClassOf< ::com::danielfreeman::madcomponents::IContainerUI >())) : bool(false) ))){
				HX_STACK_LINE(954)
				::openfl::display::DisplayObject _g2 = (hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(item))->findViewById(id,row,group);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(954)
				found = _g2;
			}
			HX_STACK_LINE(956)
			(i)++;
		}
		HX_STACK_LINE(958)
		return found;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(UIForm_obj,findViewById,return )

Float UIForm_obj::get_theHeight( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","get_theHeight",0xc08c418d,"com.danielfreeman.madcomponents.UIForm.get_theHeight","com/danielfreeman/madcomponents/UIForm.hx",964,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(965)
	if (((this->_height > (int)0))){
		HX_STACK_LINE(966)
		return this->_height;
	}
	HX_STACK_LINE(968)
	Float result = (int)0;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(969)
	{
		HX_STACK_LINE(969)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(969)
		int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(969)
		while((true)){
			HX_STACK_LINE(969)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(969)
				break;
			}
			HX_STACK_LINE(969)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(970)
			::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(970)
			child = hx::TCast< openfl::display::DisplayObject >::cast(this->getChildAt(i));
			HX_STACK_LINE(971)
			if ((this->included(child))){
				HX_STACK_LINE(972)
				Float _g2 = child->get_y();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(972)
				Float _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(972)
				if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))){
					HX_STACK_LINE(972)
					_g11 = (hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(child))->get_theHeight();
				}
				else{
					HX_STACK_LINE(972)
					_g11 = child->get_height();
				}
				HX_STACK_LINE(972)
				Float childHeight = (_g2 + _g11);		HX_STACK_VAR(childHeight,"childHeight");
				HX_STACK_LINE(973)
				if (((childHeight > result))){
					HX_STACK_LINE(974)
					result = childHeight;
				}
			}
		}
	}
	HX_STACK_LINE(979)
	return ((result + this->_extra) - ((  ((this->_pickerBackground)) ? int((int)10) : int((int)0) )));
}


Float UIForm_obj::get_theWidth( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","get_theWidth",0xd6b7f320,"com.danielfreeman.madcomponents.UIForm.get_theWidth","com/danielfreeman/madcomponents/UIForm.hx",986,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(986)
	if ((this->_pickerBackground)){
		HX_STACK_LINE(987)
		return this->super::get_theWidth();
	}
	else{
		HX_STACK_LINE(990)
		Float result = (int)0;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(991)
		{
			HX_STACK_LINE(991)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(991)
			int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(991)
			while((true)){
				HX_STACK_LINE(991)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(991)
					break;
				}
				HX_STACK_LINE(991)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(992)
				::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(992)
				child = hx::TCast< openfl::display::DisplayObject >::cast(this->getChildAt(i));
				HX_STACK_LINE(993)
				Float _g2 = child->get_x();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(993)
				Float _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(993)
				if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::MadSprite >()))){
					HX_STACK_LINE(993)
					_g11 = (hx::TCast< com::danielfreeman::madcomponents::MadSprite >::cast(child))->get_theWidth();
				}
				else{
					HX_STACK_LINE(993)
					_g11 = child->get_width();
				}
				HX_STACK_LINE(993)
				Float childWidth = (_g2 + _g11);		HX_STACK_VAR(childWidth,"childWidth");
				HX_STACK_LINE(994)
				if (((childWidth > result))){
					HX_STACK_LINE(995)
					result = childWidth;
				}
			}
		}
		HX_STACK_LINE(998)
		return result;
	}
	HX_STACK_LINE(986)
	return 0.;
}


Dynamic UIForm_obj::set_data( Dynamic values){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","set_data",0x9d7ad569,"com.danielfreeman.madcomponents.UIForm.set_data","com/danielfreeman/madcomponents/UIForm.hx",1005,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(values,"values")
	HX_STACK_LINE(1006)
	{
		HX_STACK_LINE(1006)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1006)
		Array< ::String > _g1 = ::Reflect_obj::fields(values);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1006)
		while((true)){
			HX_STACK_LINE(1006)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(1006)
				break;
			}
			HX_STACK_LINE(1006)
			::String idName = _g1->__get(_g);		HX_STACK_VAR(idName,"idName");
			HX_STACK_LINE(1006)
			++(_g);
			HX_STACK_LINE(1007)
			Dynamic uiThing = this->findViewById(idName,null(),null());		HX_STACK_VAR(uiThing,"uiThing");
			HX_STACK_LINE(1008)
			if (((uiThing != null()))){
				HX_STACK_LINE(1009)
				try
				{
				HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
				{
					HX_STACK_LINE(1010)
					if ((uiThing->__Field(HX_CSTRING("exists"),true)(HX_CSTRING("xmlText")))){
						HX_STACK_LINE(1011)
						Dynamic _g2 = ::Reflect_obj::field(values,idName);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1011)
						uiThing->__FieldRef(HX_CSTRING("xmlText")) = _g2;
					}
					else{
						HX_STACK_LINE(1014)
						Dynamic _g11 = ::Reflect_obj::field(values,idName);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(1014)
						uiThing->__FieldRef(HX_CSTRING("text")) = _g11;
					}
				}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::openfl::errors::Error >() ){
						HX_STACK_BEGIN_CATCH
						::openfl::errors::Error error = __e;{
							HX_STACK_LINE(1018)
							Dynamic _g2 = ::Reflect_obj::field(values,idName);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(1018)
							uiThing->__FieldRef(HX_CSTRING("text")) = _g2;
						}
					}
					else {
					    HX_STACK_DO_THROW(__e);
					}
				}
			}
		}
	}
	HX_STACK_LINE(1022)
	if ((this->_autoLayout)){
		HX_STACK_LINE(1023)
		this->layout(this->_attributes);
	}
	HX_STACK_LINE(1025)
	return values;
}


HX_DEFINE_DYNAMIC_FUNC1(UIForm_obj,set_data,return )

::com::danielfreeman::madcomponents::Model UIForm_obj::get_model( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","get_model",0x827f0f7e,"com.danielfreeman.madcomponents.UIForm.get_model","com/danielfreeman/madcomponents/UIForm.hx",1034,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1034)
	return this->_model;
}


HX_DEFINE_DYNAMIC_FUNC0(UIForm_obj,get_model,return )

Array< ::Dynamic > UIForm_obj::get_pages( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","get_pages",0x33741719,"com.danielfreeman.madcomponents.UIForm.get_pages","com/danielfreeman/madcomponents/UIForm.hx",1041,0x1627582f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1041)
	return Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(UIForm_obj,get_pages,return )

Void UIForm_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIForm","destructor",0x0f71d9fb,"com.danielfreeman.madcomponents.UIForm.destructor","com/danielfreeman/madcomponents/UIForm.hx",1045,0x1627582f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1046)
		this->removeEventListener(HX_CSTRING("imageLoaded"),this->doLayoutHandler_dyn(),null());
		HX_STACK_LINE(1047)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->groupClicked_dyn(),null());
		HX_STACK_LINE(1048)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->resetGroupClicked_dyn(),null());
		HX_STACK_LINE(1049)
		::com::danielfreeman::madcomponents::UI_obj::clear(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


::String UIForm_obj::CLICK_START;

::String UIForm_obj::CLICK_CANCEL;

::String UIForm_obj::CLICKED;

::String UIForm_obj::CLICKED_END;

::String UIForm_obj::LOADED;

::String UIForm_obj::UNLOADED;

Float UIForm_obj::DEFAULT_INPUT_WIDTH;

int UIForm_obj::LINE_COLOUR;

int UIForm_obj::CELL_COLOUR;

Float UIForm_obj::CURVE;

Float UIForm_obj::GROUP_OFFSET;

Float UIForm_obj::TWEAK;

int UIForm_obj::HIGHLIGHT;


UIForm_obj::UIForm_obj()
{
}

void UIForm_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIForm);
	HX_MARK_MEMBER_NAME(_mode,"_mode");
	HX_MARK_MEMBER_NAME(_model,"_model");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_children,"_children");
	HX_MARK_MEMBER_NAME(_row,"_row");
	HX_MARK_MEMBER_NAME(_widths,"_widths");
	HX_MARK_MEMBER_NAME(_heights,"_heights");
	HX_MARK_MEMBER_NAME(_autoLayout,"_autoLayout");
	HX_MARK_MEMBER_NAME(_pickerHeight,"_pickerHeight");
	HX_MARK_MEMBER_NAME(_cursorHeight,"_cursorHeight");
	HX_MARK_MEMBER_NAME(_extra,"_extra");
	HX_MARK_MEMBER_NAME(_style,"_style");
	HX_MARK_MEMBER_NAME(_groups,"_groups");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_insideScroller,"_insideScroller");
	HX_MARK_MEMBER_NAME(_positions,"_positions");
	HX_MARK_MEMBER_NAME(_inGroup,"_inGroup");
	HX_MARK_MEMBER_NAME(_disable,"_disable");
	HX_MARK_MEMBER_NAME(_lazyRender,"_lazyRender");
	HX_MARK_MEMBER_NAME(_recycle,"_recycle");
	HX_MARK_MEMBER_NAME(_localName,"_localName");
	HX_MARK_MEMBER_NAME(_pickerBackground,"_pickerBackground");
	HX_MARK_MEMBER_NAME(_padding,"_padding");
	HX_MARK_MEMBER_NAME(_classic,"_classic");
	HX_MARK_MEMBER_NAME(_listenerAdded,"_listenerAdded");
	::com::danielfreeman::madcomponents::MadMasking_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIForm_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_mode,"_mode");
	HX_VISIT_MEMBER_NAME(_model,"_model");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_children,"_children");
	HX_VISIT_MEMBER_NAME(_row,"_row");
	HX_VISIT_MEMBER_NAME(_widths,"_widths");
	HX_VISIT_MEMBER_NAME(_heights,"_heights");
	HX_VISIT_MEMBER_NAME(_autoLayout,"_autoLayout");
	HX_VISIT_MEMBER_NAME(_pickerHeight,"_pickerHeight");
	HX_VISIT_MEMBER_NAME(_cursorHeight,"_cursorHeight");
	HX_VISIT_MEMBER_NAME(_extra,"_extra");
	HX_VISIT_MEMBER_NAME(_style,"_style");
	HX_VISIT_MEMBER_NAME(_groups,"_groups");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_insideScroller,"_insideScroller");
	HX_VISIT_MEMBER_NAME(_positions,"_positions");
	HX_VISIT_MEMBER_NAME(_inGroup,"_inGroup");
	HX_VISIT_MEMBER_NAME(_disable,"_disable");
	HX_VISIT_MEMBER_NAME(_lazyRender,"_lazyRender");
	HX_VISIT_MEMBER_NAME(_recycle,"_recycle");
	HX_VISIT_MEMBER_NAME(_localName,"_localName");
	HX_VISIT_MEMBER_NAME(_pickerBackground,"_pickerBackground");
	HX_VISIT_MEMBER_NAME(_padding,"_padding");
	HX_VISIT_MEMBER_NAME(_classic,"_classic");
	HX_VISIT_MEMBER_NAME(_listenerAdded,"_listenerAdded");
	::com::danielfreeman::madcomponents::MadMasking_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIForm_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { return get_xml(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_row") ) { return _row; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return get_index(); }
		if (HX_FIELD_EQ(inName,"model") ) { return get_model(); }
		if (HX_FIELD_EQ(inName,"pages") ) { return get_pages(); }
		if (HX_FIELD_EQ(inName,"_mode") ) { return _mode; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_model") ) { return _model; }
		if (HX_FIELD_EQ(inName,"_extra") ) { return _extra; }
		if (HX_FIELD_EQ(inName,"_style") ) { return _style; }
		if (HX_FIELD_EQ(inName,"_index") ) { return _index; }
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"_widths") ) { return _widths; }
		if (HX_FIELD_EQ(inName,"_groups") ) { return _groups; }
		if (HX_FIELD_EQ(inName,"get_xml") ) { return get_xml_dyn(); }
		if (HX_FIELD_EQ(inName,"set_xml") ) { return set_xml_dyn(); }
		if (HX_FIELD_EQ(inName,"cutOuts") ) { return cutOuts_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return get_children(); }
		if (HX_FIELD_EQ(inName,"_heights") ) { return _heights; }
		if (HX_FIELD_EQ(inName,"_inGroup") ) { return _inGroup; }
		if (HX_FIELD_EQ(inName,"_disable") ) { return _disable; }
		if (HX_FIELD_EQ(inName,"_recycle") ) { return _recycle; }
		if (HX_FIELD_EQ(inName,"_padding") ) { return _padding; }
		if (HX_FIELD_EQ(inName,"_classic") ) { return _classic; }
		if (HX_FIELD_EQ(inName,"included") ) { return included_dyn(); }
		if (HX_FIELD_EQ(inName,"doLayout") ) { return doLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positions") ) { return get_positions(); }
		if (HX_FIELD_EQ(inName,"_children") ) { return _children; }
		if (HX_FIELD_EQ(inName,"drawLines") ) { return drawLines_dyn(); }
		if (HX_FIELD_EQ(inName,"get_index") ) { return get_index_dyn(); }
		if (HX_FIELD_EQ(inName,"get_model") ) { return get_model_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pages") ) { return get_pages_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_positions") ) { return _positions; }
		if (HX_FIELD_EQ(inName,"_localName") ) { return _localName; }
		if (HX_FIELD_EQ(inName,"parseBlock") ) { return parseBlock_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoLayout") ) { return _autoLayout; }
		if (HX_FIELD_EQ(inName,"_lazyRender") ) { return _lazyRender; }
		if (HX_FIELD_EQ(inName,"touchCancel") ) { return touchCancel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"GROUP_OFFSET") ) { return GROUP_OFFSET; }
		if (HX_FIELD_EQ(inName,"customWidths") ) { return customWidths_dyn(); }
		if (HX_FIELD_EQ(inName,"get_children") ) { return get_children_dyn(); }
		if (HX_FIELD_EQ(inName,"groupClicked") ) { return groupClicked_dyn(); }
		if (HX_FIELD_EQ(inName,"findViewById") ) { return findViewById_dyn(); }
		if (HX_FIELD_EQ(inName,"get_theWidth") ) { return get_theWidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pickerHeight") ) { return _pickerHeight; }
		if (HX_FIELD_EQ(inName,"_cursorHeight") ) { return _cursorHeight; }
		if (HX_FIELD_EQ(inName,"customHeights") ) { return customHeights_dyn(); }
		if (HX_FIELD_EQ(inName,"set_isVisible") ) { return set_isVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"get_positions") ) { return get_positions_dyn(); }
		if (HX_FIELD_EQ(inName,"drawComponent") ) { return drawComponent_dyn(); }
		if (HX_FIELD_EQ(inName,"otherCommands") ) { return otherCommands_dyn(); }
		if (HX_FIELD_EQ(inName,"get_theHeight") ) { return get_theHeight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_listenerAdded") ) { return _listenerAdded; }
		if (HX_FIELD_EQ(inName,"insideScroller") ) { return insideScroller_dyn(); }
		if (HX_FIELD_EQ(inName,"widthAndHeight") ) { return widthAndHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"drawBackground") ) { return drawBackground_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_insideScroller") ) { return _insideScroller; }
		if (HX_FIELD_EQ(inName,"doLayoutHandler") ) { return doLayoutHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"numberOfColumns") ) { return numberOfColumns_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"includeComponent") ) { return includeComponent_dyn(); }
		if (HX_FIELD_EQ(inName,"pickerBackground") ) { return pickerBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"groupClickCancel") ) { return groupClickCancel_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_pickerBackground") ) { return _pickerBackground; }
		if (HX_FIELD_EQ(inName,"groupedBackground") ) { return groupedBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"resetGroupClicked") ) { return resetGroupClicked_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hasPickerBackground") ) { return get_hasPickerBackground(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_hasPickerBackground") ) { return get_hasPickerBackground_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"disableClickableGroupRows") ) { return disableClickableGroupRows_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIForm_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { return set_xml(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return set_data(inValue); }
		if (HX_FIELD_EQ(inName,"_row") ) { _row=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_mode") ) { _mode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_model") ) { _model=inValue.Cast< ::com::danielfreeman::madcomponents::Model >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_extra") ) { _extra=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_style") ) { _style=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_widths") ) { _widths=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_groups") ) { _groups=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_heights") ) { _heights=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inGroup") ) { _inGroup=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_disable") ) { _disable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recycle") ) { _recycle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_padding") ) { _padding=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_classic") ) { _classic=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_children") ) { _children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_positions") ) { _positions=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_localName") ) { _localName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoLayout") ) { _autoLayout=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lazyRender") ) { _lazyRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"GROUP_OFFSET") ) { GROUP_OFFSET=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pickerHeight") ) { _pickerHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cursorHeight") ) { _cursorHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_listenerAdded") ) { _listenerAdded=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_insideScroller") ) { _insideScroller=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_pickerBackground") ) { _pickerBackground=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIForm_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("xml"));
	outFields->push(HX_CSTRING("hasPickerBackground"));
	outFields->push(HX_CSTRING("children"));
	outFields->push(HX_CSTRING("positions"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("model"));
	outFields->push(HX_CSTRING("pages"));
	outFields->push(HX_CSTRING("_mode"));
	outFields->push(HX_CSTRING("_model"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_children"));
	outFields->push(HX_CSTRING("_row"));
	outFields->push(HX_CSTRING("_widths"));
	outFields->push(HX_CSTRING("_heights"));
	outFields->push(HX_CSTRING("_autoLayout"));
	outFields->push(HX_CSTRING("_pickerHeight"));
	outFields->push(HX_CSTRING("_cursorHeight"));
	outFields->push(HX_CSTRING("_extra"));
	outFields->push(HX_CSTRING("_style"));
	outFields->push(HX_CSTRING("_groups"));
	outFields->push(HX_CSTRING("_index"));
	outFields->push(HX_CSTRING("_insideScroller"));
	outFields->push(HX_CSTRING("_positions"));
	outFields->push(HX_CSTRING("_inGroup"));
	outFields->push(HX_CSTRING("_disable"));
	outFields->push(HX_CSTRING("_lazyRender"));
	outFields->push(HX_CSTRING("_recycle"));
	outFields->push(HX_CSTRING("_localName"));
	outFields->push(HX_CSTRING("_pickerBackground"));
	outFields->push(HX_CSTRING("_padding"));
	outFields->push(HX_CSTRING("_classic"));
	outFields->push(HX_CSTRING("_listenerAdded"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CLICK_START"),
	HX_CSTRING("CLICK_CANCEL"),
	HX_CSTRING("CLICKED"),
	HX_CSTRING("CLICKED_END"),
	HX_CSTRING("LOADED"),
	HX_CSTRING("UNLOADED"),
	HX_CSTRING("DEFAULT_INPUT_WIDTH"),
	HX_CSTRING("LINE_COLOUR"),
	HX_CSTRING("CELL_COLOUR"),
	HX_CSTRING("CURVE"),
	HX_CSTRING("GROUP_OFFSET"),
	HX_CSTRING("TWEAK"),
	HX_CSTRING("HIGHLIGHT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(UIForm_obj,_mode),HX_CSTRING("_mode")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::Model*/ ,(int)offsetof(UIForm_obj,_model),HX_CSTRING("_model")},
	{hx::fsFloat,(int)offsetof(UIForm_obj,_height),HX_CSTRING("_height")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UIForm_obj,_children),HX_CSTRING("_children")},
	{hx::fsBool,(int)offsetof(UIForm_obj,_row),HX_CSTRING("_row")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UIForm_obj,_widths),HX_CSTRING("_widths")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UIForm_obj,_heights),HX_CSTRING("_heights")},
	{hx::fsBool,(int)offsetof(UIForm_obj,_autoLayout),HX_CSTRING("_autoLayout")},
	{hx::fsFloat,(int)offsetof(UIForm_obj,_pickerHeight),HX_CSTRING("_pickerHeight")},
	{hx::fsFloat,(int)offsetof(UIForm_obj,_cursorHeight),HX_CSTRING("_cursorHeight")},
	{hx::fsFloat,(int)offsetof(UIForm_obj,_extra),HX_CSTRING("_extra")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UIForm_obj,_style),HX_CSTRING("_style")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UIForm_obj,_groups),HX_CSTRING("_groups")},
	{hx::fsInt,(int)offsetof(UIForm_obj,_index),HX_CSTRING("_index")},
	{hx::fsBool,(int)offsetof(UIForm_obj,_insideScroller),HX_CSTRING("_insideScroller")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(UIForm_obj,_positions),HX_CSTRING("_positions")},
	{hx::fsBool,(int)offsetof(UIForm_obj,_inGroup),HX_CSTRING("_inGroup")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UIForm_obj,_disable),HX_CSTRING("_disable")},
	{hx::fsBool,(int)offsetof(UIForm_obj,_lazyRender),HX_CSTRING("_lazyRender")},
	{hx::fsBool,(int)offsetof(UIForm_obj,_recycle),HX_CSTRING("_recycle")},
	{hx::fsString,(int)offsetof(UIForm_obj,_localName),HX_CSTRING("_localName")},
	{hx::fsBool,(int)offsetof(UIForm_obj,_pickerBackground),HX_CSTRING("_pickerBackground")},
	{hx::fsFloat,(int)offsetof(UIForm_obj,_padding),HX_CSTRING("_padding")},
	{hx::fsBool,(int)offsetof(UIForm_obj,_classic),HX_CSTRING("_classic")},
	{hx::fsBool,(int)offsetof(UIForm_obj,_listenerAdded),HX_CSTRING("_listenerAdded")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_mode"),
	HX_CSTRING("_model"),
	HX_CSTRING("_height"),
	HX_CSTRING("_children"),
	HX_CSTRING("_row"),
	HX_CSTRING("_widths"),
	HX_CSTRING("_heights"),
	HX_CSTRING("_autoLayout"),
	HX_CSTRING("_pickerHeight"),
	HX_CSTRING("_cursorHeight"),
	HX_CSTRING("_extra"),
	HX_CSTRING("_style"),
	HX_CSTRING("_groups"),
	HX_CSTRING("_index"),
	HX_CSTRING("_insideScroller"),
	HX_CSTRING("_positions"),
	HX_CSTRING("_inGroup"),
	HX_CSTRING("_disable"),
	HX_CSTRING("_lazyRender"),
	HX_CSTRING("_recycle"),
	HX_CSTRING("_localName"),
	HX_CSTRING("_pickerBackground"),
	HX_CSTRING("_padding"),
	HX_CSTRING("_classic"),
	HX_CSTRING("_listenerAdded"),
	HX_CSTRING("touchCancel"),
	HX_CSTRING("reset"),
	HX_CSTRING("disableClickableGroupRows"),
	HX_CSTRING("insideScroller"),
	HX_CSTRING("get_xml"),
	HX_CSTRING("set_xml"),
	HX_CSTRING("includeComponent"),
	HX_CSTRING("customWidths"),
	HX_CSTRING("customHeights"),
	HX_CSTRING("widthAndHeight"),
	HX_CSTRING("set_isVisible"),
	HX_CSTRING("parseBlock"),
	HX_CSTRING("layout"),
	HX_CSTRING("get_hasPickerBackground"),
	HX_CSTRING("get_children"),
	HX_CSTRING("included"),
	HX_CSTRING("get_positions"),
	HX_CSTRING("doLayout"),
	HX_CSTRING("doLayoutHandler"),
	HX_CSTRING("numberOfColumns"),
	HX_CSTRING("pickerBackground"),
	HX_CSTRING("cutOuts"),
	HX_CSTRING("groupedBackground"),
	HX_CSTRING("drawLines"),
	HX_CSTRING("groupClicked"),
	HX_CSTRING("groupClickCancel"),
	HX_CSTRING("resetGroupClicked"),
	HX_CSTRING("get_index"),
	HX_CSTRING("drawComponent"),
	HX_CSTRING("drawBackground"),
	HX_CSTRING("otherCommands"),
	HX_CSTRING("clear"),
	HX_CSTRING("findViewById"),
	HX_CSTRING("get_theHeight"),
	HX_CSTRING("get_theWidth"),
	HX_CSTRING("set_data"),
	HX_CSTRING("get_model"),
	HX_CSTRING("get_pages"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIForm_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIForm_obj::CLICK_START,"CLICK_START");
	HX_MARK_MEMBER_NAME(UIForm_obj::CLICK_CANCEL,"CLICK_CANCEL");
	HX_MARK_MEMBER_NAME(UIForm_obj::CLICKED,"CLICKED");
	HX_MARK_MEMBER_NAME(UIForm_obj::CLICKED_END,"CLICKED_END");
	HX_MARK_MEMBER_NAME(UIForm_obj::LOADED,"LOADED");
	HX_MARK_MEMBER_NAME(UIForm_obj::UNLOADED,"UNLOADED");
	HX_MARK_MEMBER_NAME(UIForm_obj::DEFAULT_INPUT_WIDTH,"DEFAULT_INPUT_WIDTH");
	HX_MARK_MEMBER_NAME(UIForm_obj::LINE_COLOUR,"LINE_COLOUR");
	HX_MARK_MEMBER_NAME(UIForm_obj::CELL_COLOUR,"CELL_COLOUR");
	HX_MARK_MEMBER_NAME(UIForm_obj::CURVE,"CURVE");
	HX_MARK_MEMBER_NAME(UIForm_obj::GROUP_OFFSET,"GROUP_OFFSET");
	HX_MARK_MEMBER_NAME(UIForm_obj::TWEAK,"TWEAK");
	HX_MARK_MEMBER_NAME(UIForm_obj::HIGHLIGHT,"HIGHLIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIForm_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIForm_obj::CLICK_START,"CLICK_START");
	HX_VISIT_MEMBER_NAME(UIForm_obj::CLICK_CANCEL,"CLICK_CANCEL");
	HX_VISIT_MEMBER_NAME(UIForm_obj::CLICKED,"CLICKED");
	HX_VISIT_MEMBER_NAME(UIForm_obj::CLICKED_END,"CLICKED_END");
	HX_VISIT_MEMBER_NAME(UIForm_obj::LOADED,"LOADED");
	HX_VISIT_MEMBER_NAME(UIForm_obj::UNLOADED,"UNLOADED");
	HX_VISIT_MEMBER_NAME(UIForm_obj::DEFAULT_INPUT_WIDTH,"DEFAULT_INPUT_WIDTH");
	HX_VISIT_MEMBER_NAME(UIForm_obj::LINE_COLOUR,"LINE_COLOUR");
	HX_VISIT_MEMBER_NAME(UIForm_obj::CELL_COLOUR,"CELL_COLOUR");
	HX_VISIT_MEMBER_NAME(UIForm_obj::CURVE,"CURVE");
	HX_VISIT_MEMBER_NAME(UIForm_obj::GROUP_OFFSET,"GROUP_OFFSET");
	HX_VISIT_MEMBER_NAME(UIForm_obj::TWEAK,"TWEAK");
	HX_VISIT_MEMBER_NAME(UIForm_obj::HIGHLIGHT,"HIGHLIGHT");
};

#endif

Class UIForm_obj::__mClass;

void UIForm_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIForm"), hx::TCanCast< UIForm_obj> ,sStaticFields,sMemberFields,
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

void UIForm_obj::__boot()
{
	CLICK_START= HX_CSTRING("groupClickStart");
	CLICK_CANCEL= HX_CSTRING("groupClickCancel");
	CLICKED= HX_CSTRING("groupClicked");
	CLICKED_END= HX_CSTRING("groupClickedEnd");
	LOADED= HX_CSTRING("lazyLoad");
	UNLOADED= HX_CSTRING("lazyUnload");
	DEFAULT_INPUT_WIDTH= 100.0;
	LINE_COLOUR= (int)10066329;
	CELL_COLOUR= (int)16777215;
	CURVE= 8.0;
	GROUP_OFFSET= (int)-1;
	TWEAK= 10.0;
	HIGHLIGHT= (int)10066431;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
