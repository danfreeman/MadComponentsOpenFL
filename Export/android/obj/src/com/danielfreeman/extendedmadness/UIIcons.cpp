#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_MadXML
#include <MadXML.h>
#endif
#ifndef INCLUDED_MadXMLList
#include <MadXMLList.h>
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
#ifndef INCLUDED__MadXML_HasNodeAccess
#include <_MadXML/HasNodeAccess.h>
#endif
#ifndef INCLUDED__MadXML_NodeAccess
#include <_MadXML/NodeAccess.h>
#endif
#ifndef INCLUDED__MadXML_NodeListAccess
#include <_MadXML/NodeListAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIIcons
#include <com/danielfreeman/extendedmadness/UIIcons.h>
#endif
#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIe
#include <com/danielfreeman/extendedmadness/UIe.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIList
#include <com/danielfreeman/madcomponents/UIList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical
#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
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
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
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
#ifndef INCLUDED_openfl_system_Capabilities
#include <openfl/system/Capabilities.h>
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

Void UIIcons_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","new",0x8eb20f8c,"com.danielfreeman.extendedmadness.UIIcons.new","com/danielfreeman/extendedmadness/UIIcons.hx",69,0x03df5ae7)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(104)
	this->_text = HX_CSTRING("");
	HX_STACK_LINE(103)
	this->_scaleHeight = (int)0;
	HX_STACK_LINE(101)
	this->_enabled = null();
	HX_STACK_LINE(100)
	this->_labelDisable = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)10,(int)3355494,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(99)
	this->_labelHighlight = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)10,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(98)
	this->_labelFormat = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)10,(int)13421772,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(97)
	this->_labels = null();
	HX_STACK_LINE(96)
	this->_data = null();
	HX_STACK_LINE(95)
	this->_leftMargin = (int)0;
	HX_STACK_LINE(94)
	this->_disableColour = (int)3355494;
	HX_STACK_LINE(93)
	this->_highlightColour = ::com::danielfreeman::madcomponents::UIList_obj::HIGHLIGHT;
	HX_STACK_LINE(92)
	this->_activeColour = (int)-1;
	HX_STACK_LINE(91)
	this->_iconColour = (int)-1;
	HX_STACK_LINE(90)
	this->_pressIndex = (int)-1;
	HX_STACK_LINE(89)
	this->_index = (int)-1;
	HX_STACK_LINE(88)
	this->_timer = ::openfl::utils::Timer_obj::__new((int)50,(int)1);
	HX_STACK_LINE(85)
	this->LABEL_DISABLE = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)10,(int)3355494,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(84)
	this->LABEL_HIGHLIGHT = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)10,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(83)
	this->LABEL_FORMAT = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)10,(int)13421772,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(111)
	if ((xml->has->resolve(HX_CSTRING("highlightColour")))){
		HX_STACK_LINE(112)
		::String _g = xml->att->resolve(HX_CSTRING("highlightColour"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(112)
		int _g1 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(112)
		this->_highlightColour = _g1;
	}
	HX_STACK_LINE(114)
	if ((xml->has->resolve(HX_CSTRING("iconColour")))){
		HX_STACK_LINE(115)
		::String _g2 = xml->att->resolve(HX_CSTRING("iconColour"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(115)
		int _g3 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(115)
		this->_iconColour = _g3;
	}
	HX_STACK_LINE(117)
	if ((xml->has->resolve(HX_CSTRING("activeColour")))){
		HX_STACK_LINE(118)
		::String _g4 = xml->att->resolve(HX_CSTRING("activeColour"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(118)
		int _g5 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(118)
		this->_activeColour = _g5;
	}
	HX_STACK_LINE(120)
	if ((xml->has->resolve(HX_CSTRING("disableColour")))){
		HX_STACK_LINE(121)
		::String _g6 = xml->att->resolve(HX_CSTRING("disableColour"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(121)
		int _g7 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(121)
		this->_disableColour = _g7;
	}
	HX_STACK_LINE(123)
	if ((xml->has->resolve(HX_CSTRING("leftMargin")))){
		HX_STACK_LINE(124)
		::String _g8 = xml->att->resolve(HX_CSTRING("leftMargin"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(124)
		Float _g9 = ::Std_obj::parseFloat(_g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(124)
		this->_leftMargin = _g9;
	}
	HX_STACK_LINE(126)
	if ((xml->has->resolve(HX_CSTRING("scaleHeight")))){
		HX_STACK_LINE(127)
		::String _g10 = xml->att->resolve(HX_CSTRING("scaleHeight"));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(127)
		Float _g11 = ::Std_obj::parseFloat(_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(127)
		this->_scaleHeight = _g11;
	}
	HX_STACK_LINE(129)
	bool _g13;		HX_STACK_VAR(_g13,"_g13");
	struct _Function_1_1{
		inline static bool Block( ::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIIcons.hx",129,0x03df5ae7)
			{
				HX_STACK_LINE(129)
				::String _g12 = xml->att->resolve(HX_CSTRING("pixelSnapping"));		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(129)
				return (_g12 == HX_CSTRING("true"));
			}
			return null();
		}
	};
	HX_STACK_LINE(129)
	if ((!(((  ((xml->has->resolve(HX_CSTRING("pixelSnapping")))) ? bool(_Function_1_1::Block(xml)) : bool(false) ))))){
		HX_STACK_LINE(129)
		_g13 = xml->hasNode->resolve(HX_CSTRING("data"));
	}
	else{
		HX_STACK_LINE(129)
		_g13 = true;
	}
	HX_STACK_LINE(129)
	this->_pixelSnapping = _g13;
	HX_STACK_LINE(130)
	super::__construct(screen,attributes);
	HX_STACK_LINE(131)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null(),null(),null());
	HX_STACK_LINE(132)
	this->_timer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->unHighlight_dyn(),null(),null(),null());
	HX_STACK_LINE(134)
	if ((xml->hasNode->resolve(HX_CSTRING("font")))){
		HX_STACK_LINE(135)
		::MadXML _g14 = xml->node->resolve(HX_CSTRING("font"));		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(135)
		::openfl::text::TextFormat _g15 = ::com::danielfreeman::extendedmadness::UIe_obj::toTextFormat(_g14,this->LABEL_FORMAT);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(135)
		this->_labelFormat = _g15;
	}
	HX_STACK_LINE(137)
	if ((xml->hasNode->resolve(HX_CSTRING("activeFont")))){
		HX_STACK_LINE(138)
		::MadXML _g16 = xml->node->resolve(HX_CSTRING("activeFont"));		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(138)
		::openfl::text::TextFormat _g17 = ::com::danielfreeman::extendedmadness::UIe_obj::toTextFormat(_g16,this->LABEL_HIGHLIGHT);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(138)
		this->_labelHighlight = _g17;
	}
	HX_STACK_LINE(140)
	if ((xml->hasNode->resolve(HX_CSTRING("disableFont")))){
		HX_STACK_LINE(141)
		::MadXML _g18 = xml->node->resolve(HX_CSTRING("disableFont"));		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(141)
		::openfl::text::TextFormat _g19 = ::com::danielfreeman::extendedmadness::UIe_obj::toTextFormat(_g18,this->LABEL_DISABLE);		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(141)
		this->_labelDisable = _g19;
	}
	HX_STACK_LINE(143)
	if ((xml->hasNode->resolve(HX_CSTRING("data")))){
		HX_STACK_LINE(144)
		this->extractData(xml);
	}
	HX_STACK_LINE(146)
	::MadXML _g20 = this->doDeletes(xml);		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(146)
	xml = _g20;
	struct _Function_1_2{
		inline static bool Block( ::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIIcons.hx",147,0x03df5ae7)
			{
				HX_STACK_LINE(147)
				::String _g21 = xml->toString();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(147)
				return (_g21 != HX_CSTRING(""));
			}
			return null();
		}
	};
	HX_STACK_LINE(147)
	if (((  (((this->_text == HX_CSTRING("")))) ? bool(_Function_1_2::Block(xml)) : bool(false) ))){
		HX_STACK_LINE(148)
		::String theText = xml->toString();		HX_STACK_VAR(theText,"theText");
		HX_STACK_LINE(149)
		::EReg_obj::__new(HX_CSTRING("[\\s\\r\\n\\t]"),HX_CSTRING("g"))->replace(theText,HX_CSTRING(""));
		HX_STACK_LINE(150)
		this->set_text(theText);
		HX_STACK_LINE(151)
		this->unHighlight(null());
	}
}
;
	return null();
}

//UIIcons_obj::~UIIcons_obj() { }

Dynamic UIIcons_obj::__CreateEmpty() { return  new UIIcons_obj; }
hx::ObjectPtr< UIIcons_obj > UIIcons_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIIcons_obj > result = new UIIcons_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIIcons_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIIcons_obj > result = new UIIcons_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UIIcons_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

::MadXML UIIcons_obj::doDeletes( ::MadXML xml){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","doDeletes",0xaa14f5c9,"com.danielfreeman.extendedmadness.UIIcons.doDeletes","com/danielfreeman/extendedmadness/UIIcons.hx",156,0x03df5ae7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_LINE(157)
	Array< ::String > exclude = Array_obj< ::String >::__new().Add(HX_CSTRING("font")).Add(HX_CSTRING("activeFont")).Add(HX_CSTRING("disableFont")).Add(HX_CSTRING("data"));		HX_STACK_VAR(exclude,"exclude");
	HX_STACK_LINE(158)
	::String result = HX_CSTRING("<icons>");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(159)
	for(::cpp::FastIterator_obj< ::MadXML > *__it = ::cpp::CreateFastIterator< ::MadXML >(xml->children(null())->iterator());  __it->hasNext(); ){
		::MadXML child = __it->next();
		{
			HX_STACK_LINE(160)
			::String _g = child->get_name();		HX_STACK_VAR(_g,"_g");
			struct _Function_2_1{
				inline static bool Block( ::MadXML &child,Array< ::String > &exclude){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIIcons.hx",160,0x03df5ae7)
					{
						HX_STACK_LINE(160)
						::String _g1 = child->get_name();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(160)
						int _g2 = ::Lambda_obj::indexOf(exclude,_g1);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(160)
						return (_g2 < (int)0);
					}
					return null();
				}
			};
			HX_STACK_LINE(160)
			if (((  ((!(((_g == HX_CSTRING("")))))) ? bool(_Function_2_1::Block(child,exclude)) : bool(true) ))){
				HX_STACK_LINE(161)
				::String _g3 = child->toXMLString();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(161)
				hx::AddEq(result,_g3);
			}
		}
;
	}
	HX_STACK_LINE(164)
	return ::MadXML_obj::parse((result + HX_CSTRING("</icons>")));
}


HX_DEFINE_DYNAMIC_FUNC1(UIIcons_obj,doDeletes,return )

Void UIIcons_obj::extractData( ::MadXML xml){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","extractData",0x1de4b737,"com.danielfreeman.extendedmadness.UIIcons.extractData","com/danielfreeman/extendedmadness/UIIcons.hx",169,0x03df5ae7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_LINE(169)
		for(::cpp::FastIterator_obj< ::MadXML > *__it = ::cpp::CreateFastIterator< ::MadXML >(xml->nodes->resolve(HX_CSTRING("data"))->iterator());  __it->hasNext(); ){
			::MadXML data = __it->next();
			if ((!(data->has->resolve(HX_CSTRING("size"))))){
				HX_STACK_LINE(171)
				this->set_xmlData(data);
				HX_STACK_LINE(172)
				return null();
			}
			else{
				HX_STACK_LINE(174)
				::String _g = data->att->resolve(HX_CSTRING("size")).substr((int)-3,(int)3).toUpperCase();		HX_STACK_VAR(_g,"_g");
				struct _Function_2_1{
					inline static bool Block( ::MadXML &data){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIIcons.hx",174,0x03df5ae7)
						{
							HX_STACK_LINE(174)
							::String _g1 = data->att->resolve(HX_CSTRING("size")).substr((int)0,(int)-3);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(174)
							Float _g2 = ::Std_obj::parseFloat(_g1);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(174)
							Float _g3 = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(174)
							return (_g2 >= _g3);
						}
						return null();
					}
				};
				HX_STACK_LINE(174)
				if (((  (((_g == HX_CSTRING("DPI")))) ? bool(_Function_2_1::Block(data)) : bool(false) ))){
					HX_STACK_LINE(175)
					this->set_xmlData(data);
					HX_STACK_LINE(176)
					return null();
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIIcons_obj,extractData,(void))

::String UIIcons_obj::imageAttributeText( ::MadXML item){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","imageAttributeText",0x9a57cce2,"com.danielfreeman.extendedmadness.UIIcons.imageAttributeText","com/danielfreeman/extendedmadness/UIIcons.hx",183,0x03df5ae7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	struct _Function_1_1{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIIcons.hx",183,0x03df5ae7)
			{
				HX_STACK_LINE(183)
				Float _g = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(183)
				return (_g < (int)160);
			}
			return null();
		}
	};
	HX_STACK_LINE(183)
	if (((  ((item->has->resolve(HX_CSTRING("ldpi")))) ? bool(_Function_1_1::Block()) : bool(false) ))){
		HX_STACK_LINE(184)
		this->_pixelSnapping = true;
		HX_STACK_LINE(185)
		::String _g1 = item->att->resolve(HX_CSTRING("ldpi"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(185)
		return (_g1 + HX_CSTRING(","));
	}
	else{
		struct _Function_2_1{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIIcons.hx",187,0x03df5ae7)
				{
					HX_STACK_LINE(187)
					Float _g2 = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(187)
					return (_g2 < (int)240);
				}
				return null();
			}
		};
		HX_STACK_LINE(187)
		if (((  ((item->has->resolve(HX_CSTRING("mdpi")))) ? bool(_Function_2_1::Block()) : bool(false) ))){
			HX_STACK_LINE(188)
			this->_pixelSnapping = true;
			HX_STACK_LINE(189)
			::String _g3 = item->att->resolve(HX_CSTRING("mdpi"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(189)
			return (_g3 + HX_CSTRING(","));
		}
		else{
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIIcons.hx",191,0x03df5ae7)
					{
						HX_STACK_LINE(191)
						Float _g4 = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(191)
						return (_g4 < (int)320);
					}
					return null();
				}
			};
			HX_STACK_LINE(191)
			if (((  ((item->has->resolve(HX_CSTRING("hdpi")))) ? bool(_Function_3_1::Block()) : bool(false) ))){
				HX_STACK_LINE(192)
				this->_pixelSnapping = true;
				HX_STACK_LINE(193)
				::String _g5 = item->att->resolve(HX_CSTRING("hdpi"));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(193)
				return (_g5 + HX_CSTRING(","));
			}
			else{
				struct _Function_4_1{
					inline static bool Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIIcons.hx",195,0x03df5ae7)
						{
							HX_STACK_LINE(195)
							Float _g6 = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(195)
							return (_g6 < (int)400);
						}
						return null();
					}
				};
				HX_STACK_LINE(195)
				if (((  ((item->has->resolve(HX_CSTRING("xhdpi")))) ? bool(_Function_4_1::Block()) : bool(false) ))){
					HX_STACK_LINE(196)
					this->_pixelSnapping = true;
					HX_STACK_LINE(197)
					::String _g7 = item->att->resolve(HX_CSTRING("xhdpi"));		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(197)
					return (_g7 + HX_CSTRING(","));
				}
				else{
					struct _Function_5_1{
						inline static bool Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/extendedmadness/UIIcons.hx",199,0x03df5ae7)
							{
								HX_STACK_LINE(199)
								Float _g8 = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(199)
								return (_g8 >= (int)400);
							}
							return null();
						}
					};
					HX_STACK_LINE(199)
					if (((  ((item->has->resolve(HX_CSTRING("xxhdpi")))) ? bool(_Function_5_1::Block()) : bool(false) ))){
						HX_STACK_LINE(200)
						this->_pixelSnapping = true;
						HX_STACK_LINE(201)
						::String _g9 = item->att->resolve(HX_CSTRING("xxhdpi"));		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(201)
						return (_g9 + HX_CSTRING(","));
					}
					else{
						HX_STACK_LINE(203)
						if ((item->has->resolve(HX_CSTRING("image")))){
							HX_STACK_LINE(204)
							::String _g10 = item->att->resolve(HX_CSTRING("image"));		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(204)
							return (_g10 + HX_CSTRING(","));
						}
						else{
							HX_STACK_LINE(207)
							return HX_CSTRING("");
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(183)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIIcons_obj,imageAttributeText,return )

::MadXML UIIcons_obj::set_xmlData( ::MadXML value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","set_xmlData",0xc693d9f0,"com.danielfreeman.extendedmadness.UIIcons.set_xmlData","com/danielfreeman/extendedmadness/UIIcons.hx",212,0x03df5ae7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(213)
	if (((this->_icons != null()))){
		HX_STACK_LINE(214)
		this->clear();
	}
	HX_STACK_LINE(216)
	this->_data = Array_obj< ::String >::__new();
	HX_STACK_LINE(217)
	this->_labels = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(218)
	this->_text = HX_CSTRING("");
	HX_STACK_LINE(219)
	for(::cpp::FastIterator_obj< ::MadXML > *__it = ::cpp::CreateFastIterator< ::MadXML >(value->children(null())->iterator());  __it->hasNext(); ){
		::MadXML item = __it->next();
		{
			HX_STACK_LINE(220)
			::String _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(220)
			if ((item->has->resolve(HX_CSTRING("label")))){
				HX_STACK_LINE(220)
				_g = item->att->resolve(HX_CSTRING("label"));
			}
			else{
				HX_STACK_LINE(220)
				_g = item->get_name();
			}
			HX_STACK_LINE(220)
			this->_data->push(_g);
			HX_STACK_LINE(221)
			::String _g1 = this->imageAttributeText(item);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(221)
			hx::AddEq(this->_text,_g1);
		}
;
	}
	HX_STACK_LINE(223)
	if (((this->_text != HX_CSTRING("")))){
		HX_STACK_LINE(224)
		::String _g2 = this->_text.substr((int)0,(int)-1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(224)
		this->set_text(_g2);
		HX_STACK_LINE(225)
		this->unHighlight(null());
	}
	HX_STACK_LINE(227)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIIcons_obj,set_xmlData,return )

Array< ::Dynamic > UIIcons_obj::get_labels( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","get_labels",0x9227d61c,"com.danielfreeman.extendedmadness.UIIcons.get_labels","com/danielfreeman/extendedmadness/UIIcons.hx",232,0x03df5ae7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(232)
	return this->_labels;
}


HX_DEFINE_DYNAMIC_FUNC0(UIIcons_obj,get_labels,return )

Void UIIcons_obj::enable( int index,bool state){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","enable",0xfa7032d7,"com.danielfreeman.extendedmadness.UIIcons.enable","com/danielfreeman/extendedmadness/UIIcons.hx",236,0x03df5ae7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(240)
		this->_enabled[index] = state;
		HX_STACK_LINE(241)
		this->unHighlight(null());
		HX_STACK_LINE(242)
		this->labelHighlight();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIIcons_obj,enable,(void))

Void UIIcons_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","mouseDown",0x858a9953,"com.danielfreeman.extendedmadness.UIIcons.mouseDown","com/danielfreeman/extendedmadness/UIIcons.hx",246,0x03df5ae7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(247)
		this->_pressIndex = (int)-1;
		HX_STACK_LINE(248)
		{
			HX_STACK_LINE(248)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(248)
			int _g = this->_icons->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(248)
			while((true)){
				HX_STACK_LINE(248)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(248)
					break;
				}
				HX_STACK_LINE(248)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(249)
				::openfl::display::DisplayObject icon = this->_icons->__get(i).StaticCast< ::openfl::display::Bitmap >();		HX_STACK_VAR(icon,"icon");
				HX_STACK_LINE(250)
				Float _g2 = this->get_mouseX();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(250)
				Float _g11 = icon->get_x();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(250)
				Float _g21 = icon->get_width();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(250)
				Float _g3 = (_g11 + _g21);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(250)
				Float _g4 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(250)
				Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(250)
				Float _g6 = (_g3 + _g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(250)
				if (((_g2 < _g6))){
					HX_STACK_LINE(251)
					if ((this->_enabled->__get(i))){
						HX_STACK_LINE(252)
						this->_pressIndex = i;
						HX_STACK_LINE(253)
						this->highlight();
					}
					HX_STACK_LINE(255)
					break;
				}
			}
		}
		HX_STACK_LINE(258)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(259)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIIcons_obj,mouseDown,(void))

Void UIIcons_obj::clearHighlight( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","clearHighlight",0x8648a33b,"com.danielfreeman.extendedmadness.UIIcons.clearHighlight","com/danielfreeman/extendedmadness/UIIcons.hx",263,0x03df5ae7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(264)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(265)
		{
			HX_STACK_LINE(265)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(265)
			Array< ::Dynamic > _g1 = this->_labels;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(265)
			while((true)){
				HX_STACK_LINE(265)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(265)
					break;
				}
				HX_STACK_LINE(265)
				::com::danielfreeman::madcomponents::UILabel label = _g1->__get(_g).StaticCast< ::com::danielfreeman::madcomponents::UILabel >();		HX_STACK_VAR(label,"label");
				HX_STACK_LINE(265)
				++(_g);
				HX_STACK_LINE(266)
				int _g2 = (index)++;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(266)
				::openfl::text::TextFormat _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(266)
				if ((this->_enabled->__get(_g2))){
					HX_STACK_LINE(266)
					_g11 = this->_labelFormat;
				}
				else{
					HX_STACK_LINE(266)
					_g11 = this->_labelDisable;
				}
				HX_STACK_LINE(266)
				label->setTextFormat(_g11,null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIIcons_obj,clearHighlight,(void))

Void UIIcons_obj::touchCancel( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","touchCancel",0xe41d9dc5,"com.danielfreeman.extendedmadness.UIIcons.touchCancel","com/danielfreeman/extendedmadness/UIIcons.hx",271,0x03df5ae7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(272)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(273)
		this->unHighlight(null());
	}
return null();
}


Void UIIcons_obj::labelHighlight( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","labelHighlight",0x1b97c1f4,"com.danielfreeman.extendedmadness.UIIcons.labelHighlight","com/danielfreeman/extendedmadness/UIIcons.hx",277,0x03df5ae7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(278)
		this->clearHighlight();
		HX_STACK_LINE(279)
		if (((bool((bool((this->_labels != null())) && bool((this->_index >= (int)0)))) && bool((this->_index < this->_labels->length))))){
			HX_STACK_LINE(280)
			this->_labels->__get(this->_index).StaticCast< ::com::danielfreeman::madcomponents::UILabel >()->setTextFormat((  ((this->_enabled->__get(this->_index))) ? ::openfl::text::TextFormat(this->_labelHighlight) : ::openfl::text::TextFormat(this->_labelDisable) ),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIIcons_obj,labelHighlight,(void))

Void UIIcons_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","mouseUp",0x69fe390c,"com.danielfreeman.extendedmadness.UIIcons.mouseUp","com/danielfreeman/extendedmadness/UIIcons.hx",285,0x03df5ae7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(286)
		this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(287)
		int index = (int)-1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(288)
		{
			HX_STACK_LINE(288)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(288)
			int _g = this->_icons->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(288)
			while((true)){
				HX_STACK_LINE(288)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(288)
					break;
				}
				HX_STACK_LINE(288)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(289)
				::openfl::display::DisplayObject icon = this->_icons->__get(i).StaticCast< ::openfl::display::Bitmap >();		HX_STACK_VAR(icon,"icon");
				HX_STACK_LINE(290)
				Float _g2 = this->get_mouseX();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(290)
				Float _g11 = icon->get_x();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(290)
				Float _g21 = icon->get_width();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(290)
				Float _g3 = (_g11 + _g21);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(290)
				Float _g4 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(290)
				Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(290)
				Float _g6 = (_g3 + _g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(290)
				if (((_g2 < _g6))){
					HX_STACK_LINE(291)
					if ((this->_enabled->__get(i))){
						HX_STACK_LINE(292)
						index = i;
					}
					HX_STACK_LINE(294)
					break;
				}
			}
		}
		HX_STACK_LINE(297)
		if (((bool((index >= (int)0)) && bool((this->_pressIndex == index))))){
			HX_STACK_LINE(298)
			this->_index = this->_pressIndex;
			HX_STACK_LINE(299)
			::openfl::events::Event _g7 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(299)
			this->dispatchEvent(_g7);
			HX_STACK_LINE(300)
			this->labelHighlight();
		}
		HX_STACK_LINE(302)
		this->_timer->reset();
		HX_STACK_LINE(303)
		this->_timer->start();
		HX_STACK_LINE(304)
		this->_pressIndex = (int)-1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIIcons_obj,mouseUp,(void))

Void UIIcons_obj::highlight( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","highlight",0x83c83e60,"com.danielfreeman.extendedmadness.UIIcons.highlight","com/danielfreeman/extendedmadness/UIIcons.hx",308,0x03df5ae7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(309)
		::openfl::geom::ColorTransform colour = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(colour,"colour");
		HX_STACK_LINE(310)
		colour->set_color(this->_highlightColour);
		HX_STACK_LINE(311)
		(hx::TCast< openfl::display::DisplayObject >::cast(this->_icons->__get(this->_pressIndex).StaticCast< ::openfl::display::Bitmap >()))->get_transform()->set_colorTransform(colour);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIIcons_obj,highlight,(void))

::openfl::geom::ColorTransform UIIcons_obj::newColourTransform( int colour){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","newColourTransform",0x4ebb3154,"com.danielfreeman.extendedmadness.UIIcons.newColourTransform","com/danielfreeman/extendedmadness/UIIcons.hx",316,0x03df5ae7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(colour,"colour")
	HX_STACK_LINE(316)
	if (((colour >= (int)0))){
		HX_STACK_LINE(319)
		int _g = ::Math_obj::round((0.5 * ((int((int(colour) >> int((int)16))) & int((int)255)))));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(320)
		int _g1 = ::Math_obj::round((0.5 * ((int((int(colour) >> int((int)8))) & int((int)255)))));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(321)
		int _g2 = ::Math_obj::round((0.5 * ((int(colour) & int((int)255)))));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(317)
		return ::openfl::geom::ColorTransform_obj::__new(0.5,0.5,0.5,1.0,_g,_g1,_g2,(int)0);
	}
	else{
		HX_STACK_LINE(325)
		return ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
	}
	HX_STACK_LINE(316)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIIcons_obj,newColourTransform,return )

Void UIIcons_obj::unHighlight( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","unHighlight",0xdb2d07c7,"com.danielfreeman.extendedmadness.UIIcons.unHighlight","com/danielfreeman/extendedmadness/UIIcons.hx",330,0x03df5ae7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(331)
		::openfl::geom::ColorTransform disableColourTransform = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(disableColourTransform,"disableColourTransform");
		HX_STACK_LINE(332)
		disableColourTransform->set_color(this->_disableColour);
		HX_STACK_LINE(333)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(334)
		this->get_graphics()->clear();
		HX_STACK_LINE(335)
		if (((this->_attributes->get_backgroundColours()->length > (int)0))){
			HX_STACK_LINE(336)
			Array< int > _g = this->_attributes->get_backgroundColours();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(336)
			int _g1 = _g->__get((int)0);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(336)
			this->get_graphics()->beginFill(_g1,null());
		}
		else{
			HX_STACK_LINE(339)
			this->get_graphics()->beginFill((int)0,(int)0);
		}
		HX_STACK_LINE(341)
		{
			HX_STACK_LINE(341)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(341)
			Array< ::Dynamic > _g1 = this->_icons;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(341)
			while((true)){
				HX_STACK_LINE(341)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(341)
					break;
				}
				HX_STACK_LINE(341)
				::openfl::display::Bitmap icon = _g1->__get(_g).StaticCast< ::openfl::display::Bitmap >();		HX_STACK_VAR(icon,"icon");
				HX_STACK_LINE(341)
				++(_g);
				HX_STACK_LINE(342)
				Float _g2 = icon->get_x();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(342)
				Float _g3 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(342)
				Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(342)
				Float _g5 = (_g2 - _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(342)
				Float _g6 = icon->get_width();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(342)
				Float _g7 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(342)
				Float _g8 = (_g6 + _g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(342)
				Float _g9 = this->_attributes->get_heightV();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(342)
				this->get_graphics()->drawRect(_g5,(int)0,_g8,_g9);
				HX_STACK_LINE(343)
				int _g10 = (index)++;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(343)
				::openfl::geom::ColorTransform _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(343)
				if ((this->_enabled->__get(_g10))){
					HX_STACK_LINE(343)
					_g11 = this->newColourTransform(this->_iconColour);
				}
				else{
					HX_STACK_LINE(343)
					_g11 = disableColourTransform;
				}
				HX_STACK_LINE(343)
				icon->get_transform()->set_colorTransform(_g11);
			}
		}
		HX_STACK_LINE(345)
		if (((bool((this->_index >= (int)0)) && bool((this->_activeColour >= (int)0))))){
			HX_STACK_LINE(346)
			::openfl::geom::ColorTransform _g12;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(346)
			if ((this->_enabled->__get(this->_index))){
				HX_STACK_LINE(346)
				_g12 = this->newColourTransform(this->_activeColour);
			}
			else{
				HX_STACK_LINE(346)
				_g12 = disableColourTransform;
			}
			HX_STACK_LINE(346)
			this->_icons->__get(this->_index).StaticCast< ::openfl::display::Bitmap >()->get_transform()->set_colorTransform(_g12);
			HX_STACK_LINE(347)
			if (((this->_attributes->get_backgroundColours()->length > (int)1))){
				HX_STACK_LINE(348)
				Array< int > _g13 = this->_attributes->get_backgroundColours();		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(348)
				int _g14 = _g13->__get((int)1);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(348)
				this->get_graphics()->beginFill(_g14,null());
				HX_STACK_LINE(349)
				Float _g15 = this->_icons->__get(this->_index).StaticCast< ::openfl::display::Bitmap >()->get_x();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(349)
				Float _g16 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(349)
				Float _g17 = (Float(_g16) / Float((int)2));		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(349)
				Float _g18 = (_g15 - _g17);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(349)
				Float _g19 = this->_icons->__get(this->_index).StaticCast< ::openfl::display::Bitmap >()->get_width();		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(349)
				Float _g20 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(349)
				Float _g21 = (_g19 + _g20);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(349)
				Float _g22 = this->_attributes->get_heightV();		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(349)
				this->get_graphics()->drawRect(_g18,(int)0,_g21,_g22);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIIcons_obj,unHighlight,(void))

int UIIcons_obj::get_index( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","get_index",0x9885df95,"com.danielfreeman.extendedmadness.UIIcons.get_index","com/danielfreeman/extendedmadness/UIIcons.hx",356,0x03df5ae7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(356)
	return this->_index;
}


HX_DEFINE_DYNAMIC_FUNC0(UIIcons_obj,get_index,return )

int UIIcons_obj::set_index( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","set_index",0x7bd6cba1,"com.danielfreeman.extendedmadness.UIIcons.set_index","com/danielfreeman/extendedmadness/UIIcons.hx",360,0x03df5ae7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(361)
	int _g = this->_index = value;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(361)
	this->_pressIndex = _g;
	HX_STACK_LINE(362)
	this->unHighlight(null());
	HX_STACK_LINE(363)
	this->labelHighlight();
	HX_STACK_LINE(364)
	this->_timer->reset();
	HX_STACK_LINE(365)
	this->_timer->start();
	HX_STACK_LINE(366)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIIcons_obj,set_index,return )

::String UIIcons_obj::set_text( ::String source){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","set_text",0x2b6322fe,"com.danielfreeman.extendedmadness.UIIcons.set_text","com/danielfreeman/extendedmadness/UIIcons.hx",377,0x03df5ae7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(378)
	Float position = this->_leftMargin;		HX_STACK_VAR(position,"position");
	HX_STACK_LINE(379)
	Dynamic dimensions = source.split(HX_CSTRING(","));		HX_STACK_VAR(dimensions,"dimensions");
	HX_STACK_LINE(380)
	if (((this->_icons != null()))){
		HX_STACK_LINE(381)
		this->clear();
	}
	HX_STACK_LINE(383)
	this->_icons = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(384)
	this->_enabled = Array_obj< bool >::__new();
	HX_STACK_LINE(385)
	this->_labels = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(386)
	{
		HX_STACK_LINE(386)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(386)
		Float _g = ::Math_obj::max((  (((this->_data != null()))) ? Float(this->_data->length) : Float((int)0) ),dimensions->__Field(HX_CSTRING("length"),true));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(386)
		int _g2 = ::Math_obj::round(_g);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(386)
		while((true)){
			HX_STACK_LINE(386)
			if ((!(((_g1 < _g2))))){
				HX_STACK_LINE(386)
				break;
			}
			HX_STACK_LINE(386)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(387)
			::openfl::display::Bitmap icon;		HX_STACK_VAR(icon,"icon");
			HX_STACK_LINE(388)
			if (((bool((i < dimensions->__Field(HX_CSTRING("length"),true))) && bool((dimensions->__GetItem(i) != HX_CSTRING("")))))){
				HX_STACK_LINE(389)
				::Class _g11 = ::Type_obj::resolveClass(dimensions->__GetItem(i));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(389)
				::openfl::display::BitmapData _g21 = ::Type_obj::createInstance(_g11,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)));		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(389)
				::openfl::display::Bitmap _g3 = ::openfl::display::Bitmap_obj::__new(_g21,null(),null());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(389)
				icon = _g3;
			}
			else{
				HX_STACK_LINE(392)
				Float _g4 = ::com::danielfreeman::madcomponents::UI_obj::get_scale();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(392)
				Float _g5 = ((int)20 * _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(392)
				int _g6 = ::Math_obj::round(_g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(392)
				Float _g7 = ::com::danielfreeman::madcomponents::UI_obj::get_scale();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(392)
				Float _g8 = ((int)20 * _g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(392)
				int _g9 = ::Math_obj::round(_g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(392)
				::openfl::display::BitmapData _g10 = ::openfl::display::BitmapData_obj::__new(_g6,_g9,null(),null(),null());		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(392)
				::openfl::display::Bitmap _g11 = ::openfl::display::Bitmap_obj::__new(_g10,null(),null());		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(392)
				icon = _g11;
			}
			HX_STACK_LINE(394)
			this->_icons->push(icon);
			HX_STACK_LINE(395)
			icon->set_smoothing(!(this->_pixelSnapping));
			HX_STACK_LINE(396)
			if (((this->_scaleHeight > (int)0))){
				HX_STACK_LINE(397)
				Float _g12 = icon->get_scaleY();		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(397)
				Float _g13 = (_g12 * this->_scaleHeight);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(397)
				Float _g14 = icon->get_height();		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(397)
				Float _g15 = (Float(_g13) / Float(_g14));		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(397)
				Float _g16 = icon->set_scaleY(_g15);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(397)
				icon->set_scaleX(_g16);
				HX_STACK_LINE(398)
				Float _g17 = this->_attributes->get_heightV();		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(398)
				Float _g18 = icon->get_height();		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(398)
				Float _g19 = (_g17 - _g18);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(398)
				Float _g20 = (Float(_g19) / Float((int)2));		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(398)
				Float _g21;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(398)
				_g21 = (_g20 - ((  (((this->_data != null()))) ? Float((int)5) : Float((int)0) )));
				HX_STACK_LINE(398)
				icon->set_y(_g21);
			}
			else{
				HX_STACK_LINE(400)
				if ((this->_pixelSnapping)){
					HX_STACK_LINE(401)
					Float _g22 = ::com::danielfreeman::madcomponents::UI_obj::get_scale();		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(401)
					Float _g23 = (Float((int)1) / Float(_g22));		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(401)
					Float _g24 = icon->set_scaleY(_g23);		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(401)
					icon->set_scaleX(_g24);
					HX_STACK_LINE(402)
					Float _g25 = this->_attributes->get_heightV();		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(402)
					Float _g26 = icon->get_height();		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(402)
					Float _g27 = (_g25 - _g26);		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(402)
					Float _g28 = (Float(_g27) / Float((int)2));		HX_STACK_VAR(_g28,"_g28");
					HX_STACK_LINE(402)
					Float _g29;		HX_STACK_VAR(_g29,"_g29");
					HX_STACK_LINE(402)
					_g29 = (_g28 - ((  (((this->_data != null()))) ? Float((int)5) : Float((int)0) )));
					HX_STACK_LINE(402)
					icon->set_y(_g29);
				}
			}
			HX_STACK_LINE(404)
			icon->set_pixelSnapping((  ((this->_pixelSnapping)) ? ::openfl::display::PixelSnapping(::openfl::display::PixelSnapping_obj::ALWAYS) : ::openfl::display::PixelSnapping(::openfl::display::PixelSnapping_obj::NEVER) ));
			HX_STACK_LINE(406)
			this->addChild(icon);
			HX_STACK_LINE(407)
			icon->set_x(position);
			HX_STACK_LINE(409)
			if (((bool((this->_data != null())) && bool((i < this->_data->length))))){
				HX_STACK_LINE(410)
				Float _g30 = icon->get_y();		HX_STACK_VAR(_g30,"_g30");
				HX_STACK_LINE(410)
				Float _g31 = icon->get_height();		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(410)
				Float _g32 = (_g30 + _g31);		HX_STACK_VAR(_g32,"_g32");
				HX_STACK_LINE(410)
				Float _g33 = (_g32 - (int)3);		HX_STACK_VAR(_g33,"_g33");
				HX_STACK_LINE(410)
				::com::danielfreeman::madcomponents::UILabel label = ::com::danielfreeman::madcomponents::UILabel_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)0,_g33,this->_data->__get(i),this->_labelFormat);		HX_STACK_VAR(label,"label");
				HX_STACK_LINE(411)
				Float _g34 = icon->get_width();		HX_STACK_VAR(_g34,"_g34");
				HX_STACK_LINE(411)
				Float _g35 = (Float(_g34) / Float((int)2));		HX_STACK_VAR(_g35,"_g35");
				HX_STACK_LINE(411)
				Float _g36 = (position + _g35);		HX_STACK_VAR(_g36,"_g36");
				HX_STACK_LINE(411)
				Float _g37 = label->get_width();		HX_STACK_VAR(_g37,"_g37");
				HX_STACK_LINE(411)
				Float _g38 = (Float(_g37) / Float((int)2));		HX_STACK_VAR(_g38,"_g38");
				HX_STACK_LINE(411)
				Float _g39 = (_g36 - _g38);		HX_STACK_VAR(_g39,"_g39");
				HX_STACK_LINE(411)
				label->set_x(_g39);
				HX_STACK_LINE(412)
				this->_labels->push(label);
			}
			HX_STACK_LINE(414)
			this->_enabled->push(true);
			HX_STACK_LINE(415)
			Float _g40 = icon->get_width();		HX_STACK_VAR(_g40,"_g40");
			HX_STACK_LINE(415)
			Float _g41 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g41,"_g41");
			HX_STACK_LINE(415)
			Float _g42 = (_g40 + _g41);		HX_STACK_VAR(_g42,"_g42");
			HX_STACK_LINE(415)
			hx::AddEq(position,_g42);
		}
	}
	HX_STACK_LINE(417)
	return source;
}


Void UIIcons_obj::clear( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","clear",0xda28d3b9,"com.danielfreeman.extendedmadness.UIIcons.clear","com/danielfreeman/extendedmadness/UIIcons.hx",421,0x03df5ae7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(422)
		{
			HX_STACK_LINE(422)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(422)
			Array< ::Dynamic > _g1 = this->_icons;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(422)
			while((true)){
				HX_STACK_LINE(422)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(422)
					break;
				}
				HX_STACK_LINE(422)
				::openfl::display::Bitmap icon = _g1->__get(_g).StaticCast< ::openfl::display::Bitmap >();		HX_STACK_VAR(icon,"icon");
				HX_STACK_LINE(422)
				++(_g);
				HX_STACK_LINE(423)
				this->removeChild(icon);
			}
		}
		HX_STACK_LINE(425)
		{
			HX_STACK_LINE(425)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(425)
			Array< ::Dynamic > _g1 = this->_labels;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(425)
			while((true)){
				HX_STACK_LINE(425)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(425)
					break;
				}
				HX_STACK_LINE(425)
				::com::danielfreeman::madcomponents::UILabel label = _g1->__get(_g).StaticCast< ::com::danielfreeman::madcomponents::UILabel >();		HX_STACK_VAR(label,"label");
				HX_STACK_LINE(425)
				++(_g);
				HX_STACK_LINE(426)
				this->removeChild(label);
			}
		}
		HX_STACK_LINE(428)
		this->get_graphics()->clear();
		HX_STACK_LINE(429)
		this->_icons = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIIcons_obj,clear,(void))

Array< ::Dynamic > UIIcons_obj::set_icons( Array< ::Dynamic > value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","set_icons",0x7499d369,"com.danielfreeman.extendedmadness.UIIcons.set_icons","com/danielfreeman/extendedmadness/UIIcons.hx",433,0x03df5ae7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(434)
	if (((this->_icons != null()))){
		HX_STACK_LINE(435)
		this->clear();
	}
	HX_STACK_LINE(437)
	this->_icons = value;
	HX_STACK_LINE(438)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIIcons_obj,set_icons,return )

Array< ::Dynamic > UIIcons_obj::get_icons( ){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","get_icons",0x9148e75d,"com.danielfreeman.extendedmadness.UIIcons.get_icons","com/danielfreeman/extendedmadness/UIIcons.hx",443,0x03df5ae7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(443)
	return this->_icons;
}


HX_DEFINE_DYNAMIC_FUNC0(UIIcons_obj,get_icons,return )

Void UIIcons_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.extendedmadness.UIIcons","destructor",0x6c35198d,"com.danielfreeman.extendedmadness.UIIcons.destructor","com/danielfreeman/extendedmadness/UIIcons.hx",447,0x03df5ae7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(448)
		this->super::destructor();
		HX_STACK_LINE(449)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseDown_dyn(),null());
		HX_STACK_LINE(450)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(451)
		this->_timer->removeEventListener(::openfl::events::TimerEvent_obj::TIMER,this->unHighlight_dyn(),null());
	}
return null();
}


Float UIIcons_obj::COLOUR_OFFSET;

Float UIIcons_obj::COLOUR_FACTOR;

int UIIcons_obj::DISABLED_COLOUR;

Float UIIcons_obj::CENTRE_OFFSET;


UIIcons_obj::UIIcons_obj()
{
}

void UIIcons_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIIcons);
	HX_MARK_MEMBER_NAME(LABEL_FORMAT,"LABEL_FORMAT");
	HX_MARK_MEMBER_NAME(LABEL_HIGHLIGHT,"LABEL_HIGHLIGHT");
	HX_MARK_MEMBER_NAME(LABEL_DISABLE,"LABEL_DISABLE");
	HX_MARK_MEMBER_NAME(_icons,"_icons");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_pressIndex,"_pressIndex");
	HX_MARK_MEMBER_NAME(_iconColour,"_iconColour");
	HX_MARK_MEMBER_NAME(_activeColour,"_activeColour");
	HX_MARK_MEMBER_NAME(_highlightColour,"_highlightColour");
	HX_MARK_MEMBER_NAME(_disableColour,"_disableColour");
	HX_MARK_MEMBER_NAME(_leftMargin,"_leftMargin");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_labels,"_labels");
	HX_MARK_MEMBER_NAME(_labelFormat,"_labelFormat");
	HX_MARK_MEMBER_NAME(_labelHighlight,"_labelHighlight");
	HX_MARK_MEMBER_NAME(_labelDisable,"_labelDisable");
	HX_MARK_MEMBER_NAME(_enabled,"_enabled");
	HX_MARK_MEMBER_NAME(_pixelSnapping,"_pixelSnapping");
	HX_MARK_MEMBER_NAME(_scaleHeight,"_scaleHeight");
	HX_MARK_MEMBER_NAME(_text,"_text");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIIcons_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(LABEL_FORMAT,"LABEL_FORMAT");
	HX_VISIT_MEMBER_NAME(LABEL_HIGHLIGHT,"LABEL_HIGHLIGHT");
	HX_VISIT_MEMBER_NAME(LABEL_DISABLE,"LABEL_DISABLE");
	HX_VISIT_MEMBER_NAME(_icons,"_icons");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_pressIndex,"_pressIndex");
	HX_VISIT_MEMBER_NAME(_iconColour,"_iconColour");
	HX_VISIT_MEMBER_NAME(_activeColour,"_activeColour");
	HX_VISIT_MEMBER_NAME(_highlightColour,"_highlightColour");
	HX_VISIT_MEMBER_NAME(_disableColour,"_disableColour");
	HX_VISIT_MEMBER_NAME(_leftMargin,"_leftMargin");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_labels,"_labels");
	HX_VISIT_MEMBER_NAME(_labelFormat,"_labelFormat");
	HX_VISIT_MEMBER_NAME(_labelHighlight,"_labelHighlight");
	HX_VISIT_MEMBER_NAME(_labelDisable,"_labelDisable");
	HX_VISIT_MEMBER_NAME(_enabled,"_enabled");
	HX_VISIT_MEMBER_NAME(_pixelSnapping,"_pixelSnapping");
	HX_VISIT_MEMBER_NAME(_scaleHeight,"_scaleHeight");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIIcons_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return get_index(); }
		if (HX_FIELD_EQ(inName,"icons") ) { return get_icons(); }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"labels") ) { return get_labels(); }
		if (HX_FIELD_EQ(inName,"_icons") ) { return _icons; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"_index") ) { return _index; }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_labels") ) { return _labels; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enabled") ) { return _enabled; }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"doDeletes") ) { return doDeletes_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"highlight") ) { return highlight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_index") ) { return get_index_dyn(); }
		if (HX_FIELD_EQ(inName,"set_index") ) { return set_index_dyn(); }
		if (HX_FIELD_EQ(inName,"set_icons") ) { return set_icons_dyn(); }
		if (HX_FIELD_EQ(inName,"get_icons") ) { return get_icons_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_labels") ) { return get_labels_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_pressIndex") ) { return _pressIndex; }
		if (HX_FIELD_EQ(inName,"_iconColour") ) { return _iconColour; }
		if (HX_FIELD_EQ(inName,"_leftMargin") ) { return _leftMargin; }
		if (HX_FIELD_EQ(inName,"extractData") ) { return extractData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_xmlData") ) { return set_xmlData_dyn(); }
		if (HX_FIELD_EQ(inName,"touchCancel") ) { return touchCancel_dyn(); }
		if (HX_FIELD_EQ(inName,"unHighlight") ) { return unHighlight_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"LABEL_FORMAT") ) { return LABEL_FORMAT; }
		if (HX_FIELD_EQ(inName,"_labelFormat") ) { return _labelFormat; }
		if (HX_FIELD_EQ(inName,"_scaleHeight") ) { return _scaleHeight; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"LABEL_DISABLE") ) { return LABEL_DISABLE; }
		if (HX_FIELD_EQ(inName,"_activeColour") ) { return _activeColour; }
		if (HX_FIELD_EQ(inName,"_labelDisable") ) { return _labelDisable; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_disableColour") ) { return _disableColour; }
		if (HX_FIELD_EQ(inName,"_pixelSnapping") ) { return _pixelSnapping; }
		if (HX_FIELD_EQ(inName,"clearHighlight") ) { return clearHighlight_dyn(); }
		if (HX_FIELD_EQ(inName,"labelHighlight") ) { return labelHighlight_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"LABEL_HIGHLIGHT") ) { return LABEL_HIGHLIGHT; }
		if (HX_FIELD_EQ(inName,"_labelHighlight") ) { return _labelHighlight; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_highlightColour") ) { return _highlightColour; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"imageAttributeText") ) { return imageAttributeText_dyn(); }
		if (HX_FIELD_EQ(inName,"newColourTransform") ) { return newColourTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIIcons_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return set_index(inValue); }
		if (HX_FIELD_EQ(inName,"icons") ) { return set_icons(inValue); }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_icons") ) { _icons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< ::openfl::utils::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xmlData") ) { return set_xmlData(inValue); }
		if (HX_FIELD_EQ(inName,"_labels") ) { _labels=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enabled") ) { _enabled=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_pressIndex") ) { _pressIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_iconColour") ) { _iconColour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_leftMargin") ) { _leftMargin=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"LABEL_FORMAT") ) { LABEL_FORMAT=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_labelFormat") ) { _labelFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleHeight") ) { _scaleHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"LABEL_DISABLE") ) { LABEL_DISABLE=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_activeColour") ) { _activeColour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_labelDisable") ) { _labelDisable=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_disableColour") ) { _disableColour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pixelSnapping") ) { _pixelSnapping=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"LABEL_HIGHLIGHT") ) { LABEL_HIGHLIGHT=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_labelHighlight") ) { _labelHighlight=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_highlightColour") ) { _highlightColour=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIIcons_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("xmlData"));
	outFields->push(HX_CSTRING("labels"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("icons"));
	outFields->push(HX_CSTRING("LABEL_FORMAT"));
	outFields->push(HX_CSTRING("LABEL_HIGHLIGHT"));
	outFields->push(HX_CSTRING("LABEL_DISABLE"));
	outFields->push(HX_CSTRING("_icons"));
	outFields->push(HX_CSTRING("_timer"));
	outFields->push(HX_CSTRING("_index"));
	outFields->push(HX_CSTRING("_pressIndex"));
	outFields->push(HX_CSTRING("_iconColour"));
	outFields->push(HX_CSTRING("_activeColour"));
	outFields->push(HX_CSTRING("_highlightColour"));
	outFields->push(HX_CSTRING("_disableColour"));
	outFields->push(HX_CSTRING("_leftMargin"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_labels"));
	outFields->push(HX_CSTRING("_labelFormat"));
	outFields->push(HX_CSTRING("_labelHighlight"));
	outFields->push(HX_CSTRING("_labelDisable"));
	outFields->push(HX_CSTRING("_enabled"));
	outFields->push(HX_CSTRING("_pixelSnapping"));
	outFields->push(HX_CSTRING("_scaleHeight"));
	outFields->push(HX_CSTRING("_text"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("COLOUR_OFFSET"),
	HX_CSTRING("COLOUR_FACTOR"),
	HX_CSTRING("DISABLED_COLOUR"),
	HX_CSTRING("CENTRE_OFFSET"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UIIcons_obj,LABEL_FORMAT),HX_CSTRING("LABEL_FORMAT")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UIIcons_obj,LABEL_HIGHLIGHT),HX_CSTRING("LABEL_HIGHLIGHT")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UIIcons_obj,LABEL_DISABLE),HX_CSTRING("LABEL_DISABLE")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UIIcons_obj,_icons),HX_CSTRING("_icons")},
	{hx::fsObject /*::openfl::utils::Timer*/ ,(int)offsetof(UIIcons_obj,_timer),HX_CSTRING("_timer")},
	{hx::fsInt,(int)offsetof(UIIcons_obj,_index),HX_CSTRING("_index")},
	{hx::fsInt,(int)offsetof(UIIcons_obj,_pressIndex),HX_CSTRING("_pressIndex")},
	{hx::fsInt,(int)offsetof(UIIcons_obj,_iconColour),HX_CSTRING("_iconColour")},
	{hx::fsInt,(int)offsetof(UIIcons_obj,_activeColour),HX_CSTRING("_activeColour")},
	{hx::fsInt,(int)offsetof(UIIcons_obj,_highlightColour),HX_CSTRING("_highlightColour")},
	{hx::fsInt,(int)offsetof(UIIcons_obj,_disableColour),HX_CSTRING("_disableColour")},
	{hx::fsFloat,(int)offsetof(UIIcons_obj,_leftMargin),HX_CSTRING("_leftMargin")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(UIIcons_obj,_data),HX_CSTRING("_data")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UIIcons_obj,_labels),HX_CSTRING("_labels")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UIIcons_obj,_labelFormat),HX_CSTRING("_labelFormat")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UIIcons_obj,_labelHighlight),HX_CSTRING("_labelHighlight")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UIIcons_obj,_labelDisable),HX_CSTRING("_labelDisable")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(UIIcons_obj,_enabled),HX_CSTRING("_enabled")},
	{hx::fsBool,(int)offsetof(UIIcons_obj,_pixelSnapping),HX_CSTRING("_pixelSnapping")},
	{hx::fsFloat,(int)offsetof(UIIcons_obj,_scaleHeight),HX_CSTRING("_scaleHeight")},
	{hx::fsString,(int)offsetof(UIIcons_obj,_text),HX_CSTRING("_text")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("LABEL_FORMAT"),
	HX_CSTRING("LABEL_HIGHLIGHT"),
	HX_CSTRING("LABEL_DISABLE"),
	HX_CSTRING("_icons"),
	HX_CSTRING("_timer"),
	HX_CSTRING("_index"),
	HX_CSTRING("_pressIndex"),
	HX_CSTRING("_iconColour"),
	HX_CSTRING("_activeColour"),
	HX_CSTRING("_highlightColour"),
	HX_CSTRING("_disableColour"),
	HX_CSTRING("_leftMargin"),
	HX_CSTRING("_data"),
	HX_CSTRING("_labels"),
	HX_CSTRING("_labelFormat"),
	HX_CSTRING("_labelHighlight"),
	HX_CSTRING("_labelDisable"),
	HX_CSTRING("_enabled"),
	HX_CSTRING("_pixelSnapping"),
	HX_CSTRING("_scaleHeight"),
	HX_CSTRING("_text"),
	HX_CSTRING("doDeletes"),
	HX_CSTRING("extractData"),
	HX_CSTRING("imageAttributeText"),
	HX_CSTRING("set_xmlData"),
	HX_CSTRING("get_labels"),
	HX_CSTRING("enable"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("clearHighlight"),
	HX_CSTRING("touchCancel"),
	HX_CSTRING("labelHighlight"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("highlight"),
	HX_CSTRING("newColourTransform"),
	HX_CSTRING("unHighlight"),
	HX_CSTRING("get_index"),
	HX_CSTRING("set_index"),
	HX_CSTRING("set_text"),
	HX_CSTRING("clear"),
	HX_CSTRING("set_icons"),
	HX_CSTRING("get_icons"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIIcons_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIIcons_obj::COLOUR_OFFSET,"COLOUR_OFFSET");
	HX_MARK_MEMBER_NAME(UIIcons_obj::COLOUR_FACTOR,"COLOUR_FACTOR");
	HX_MARK_MEMBER_NAME(UIIcons_obj::DISABLED_COLOUR,"DISABLED_COLOUR");
	HX_MARK_MEMBER_NAME(UIIcons_obj::CENTRE_OFFSET,"CENTRE_OFFSET");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIIcons_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIIcons_obj::COLOUR_OFFSET,"COLOUR_OFFSET");
	HX_VISIT_MEMBER_NAME(UIIcons_obj::COLOUR_FACTOR,"COLOUR_FACTOR");
	HX_VISIT_MEMBER_NAME(UIIcons_obj::DISABLED_COLOUR,"DISABLED_COLOUR");
	HX_VISIT_MEMBER_NAME(UIIcons_obj::CENTRE_OFFSET,"CENTRE_OFFSET");
};

#endif

Class UIIcons_obj::__mClass;

void UIIcons_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UIIcons"), hx::TCanCast< UIIcons_obj> ,sStaticFields,sMemberFields,
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

void UIIcons_obj::__boot()
{
	COLOUR_OFFSET= 0.5;
	COLOUR_FACTOR= 0.5;
	DISABLED_COLOUR= (int)3355494;
	CENTRE_OFFSET= (int)5;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
