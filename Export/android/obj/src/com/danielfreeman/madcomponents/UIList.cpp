#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
#endif
#ifndef INCLUDED_MadXMLList
#include <MadXMLList.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_Model
#include <com/danielfreeman/madcomponents/Model.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIRefresh
#include <com/danielfreeman/madcomponents/UIRefresh.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical
#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UISearch
#include <com/danielfreeman/madcomponents/UISearch.h>
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
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
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
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
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

Void UIList_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","new",0xd427dd78,"com.danielfreeman.madcomponents.UIList.new","com/danielfreeman/madcomponents/UIList.hx",92,0x418b0955)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(167)
	this->_highlightTimer = ::openfl::utils::Timer_obj::__new(::com::danielfreeman::madcomponents::UIScrollVertical_obj::CLICK_DURATION,(int)1);
	HX_STACK_LINE(163)
	this->_header = (int)0;
	HX_STACK_LINE(162)
	this->_saveIndex = (int)-1;
	HX_STACK_LINE(161)
	this->_highlightIsOn = false;
	HX_STACK_LINE(160)
	this->_labelField = HX_CSTRING("label");
	HX_STACK_LINE(159)
	this->_highlightColour = ::com::danielfreeman::madcomponents::UIList_obj::HIGHLIGHT;
	HX_STACK_LINE(158)
	this->_rowClick = false;
	HX_STACK_LINE(157)
	this->_highlightPressed = true;
	HX_STACK_LINE(155)
	this->_showPressed = false;
	HX_STACK_LINE(154)
	this->_refreshState = false;
	HX_STACK_LINE(153)
	this->_refresh = null();
	HX_STACK_LINE(151)
	this->_lines = false;
	HX_STACK_LINE(149)
	this->_sortMode = HX_CSTRING("");
	HX_STACK_LINE(148)
	this->_sortBy = HX_CSTRING("");
	HX_STACK_LINE(147)
	this->_filteredData = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(142)
	this->_top = (int)0;
	HX_STACK_LINE(141)
	this->_search = null();
	HX_STACK_LINE(140)
	this->_model = null();
	HX_STACK_LINE(139)
	this->_font = HX_CSTRING("");
	HX_STACK_LINE(138)
	this->_suffix = HX_CSTRING("");
	HX_STACK_LINE(136)
	this->_cellRendererLeft = (int)0;
	HX_STACK_LINE(135)
	this->_cellTop = (int)-99999;
	HX_STACK_LINE(134)
	this->_clickRow = true;
	HX_STACK_LINE(132)
	this->_pressedCell = (int)-1;
	HX_STACK_LINE(131)
	this->_cellHeight = (int)-1;
	HX_STACK_LINE(130)
	this->_count = (int)0;
	HX_STACK_LINE(122)
	this->FORMAT = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Tahoma"),(int)18,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(172)
	Array< int > _g = attributes->get_backgroundColours();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(172)
	this->_colours = _g;
	HX_STACK_LINE(173)
	bool _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(173)
	if ((xml->has->resolve(HX_CSTRING("arrows")))){
		HX_STACK_LINE(173)
		::String _g1 = xml->att->resolve(HX_CSTRING("arrows"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(173)
		_g2 = (_g1 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(173)
		_g2 = false;
	}
	HX_STACK_LINE(173)
	this->_arrows = _g2;
	HX_STACK_LINE(174)
	this->_xml = xml;
	HX_STACK_LINE(175)
	Float _g3 = attributes->get_paddingH();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(175)
	this->_lineGap = _g3;
	HX_STACK_LINE(176)
	if ((xml->has->resolve(HX_CSTRING("header")))){
		HX_STACK_LINE(177)
		::String _g4 = xml->att->resolve(HX_CSTRING("header"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(177)
		Dynamic _g5 = ::Std_obj::parseInt(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(177)
		this->_header = _g5;
	}
	HX_STACK_LINE(179)
	bool _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(179)
	if ((!((!(xml->has->resolve(HX_CSTRING("highlightPressed"))))))){
		HX_STACK_LINE(179)
		::String _g6 = xml->att->resolve(HX_CSTRING("highlightPressed"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(179)
		_g7 = (_g6 != HX_CSTRING("false"));
	}
	else{
		HX_STACK_LINE(179)
		_g7 = true;
	}
	HX_STACK_LINE(179)
	this->_highlightPressed = _g7;
	HX_STACK_LINE(180)
	if ((xml->has->resolve(HX_CSTRING("labelField")))){
		HX_STACK_LINE(181)
		::String _g8 = xml->att->resolve(HX_CSTRING("labelField"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(181)
		this->_labelField = _g8;
	}
	HX_STACK_LINE(183)
	if ((xml->has->resolve(HX_CSTRING("highlightColour")))){
		HX_STACK_LINE(184)
		::String _g9 = xml->att->resolve(HX_CSTRING("highlightColour"));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(184)
		int _g10 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(184)
		this->_highlightColour = _g10;
	}
	HX_STACK_LINE(186)
	if ((xml->has->resolve(HX_CSTRING("lineGap")))){
		HX_STACK_LINE(187)
		::String _g11 = xml->att->resolve(HX_CSTRING("lineGap"));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(187)
		Float _g12 = ::Std_obj::parseFloat(_g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(187)
		this->_lineGap = _g12;
	}
	HX_STACK_LINE(189)
	super::__construct(screen,xml,attributes);
	HX_STACK_LINE(190)
	::MadXML _g13 = this->extractRenderer(xml);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(190)
	this->_renderer = _g13;
	HX_STACK_LINE(191)
	this->_simple = (this->_renderer == null());
	HX_STACK_LINE(192)
	this->_autoLayout = (bool(this->_autoLayout) && bool(!(this->_simple)));
	HX_STACK_LINE(193)
	if (((bool(!(this->_simple)) && bool((this->_rendererAttributes == null()))))){
		HX_STACK_LINE(194)
		this->initialiseRenderAttributes(xml,attributes);
	}
	HX_STACK_LINE(196)
	bool _g15;		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(196)
	if ((xml->has->resolve(HX_CSTRING("lines")))){
		HX_STACK_LINE(196)
		::String _g14 = xml->att->resolve(HX_CSTRING("lines"));		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(196)
		_g15 = (_g14 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(196)
		_g15 = false;
	}
	HX_STACK_LINE(196)
	this->_lines = _g15;
	HX_STACK_LINE(197)
	if ((xml->hasNode->resolve(HX_CSTRING("font")))){
		HX_STACK_LINE(198)
		::String _g16 = xml->node->resolve(HX_CSTRING("font"))->toXMLString();		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(198)
		this->_font = _g16;
	}
	HX_STACK_LINE(200)
	if ((xml->hasNode->resolve(HX_CSTRING("search")))){
		HX_STACK_LINE(201)
		this->addASearch(xml);
	}
	struct _Function_1_1{
		inline static bool Block( ::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIList.hx",203,0x418b0955)
			{
				HX_STACK_LINE(203)
				::String _g17 = xml->att->resolve(HX_CSTRING("pullDownRefresh"));		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(203)
				return (_g17 == HX_CSTRING("true"));
			}
			return null();
		}
	};
	HX_STACK_LINE(203)
	if (((  ((xml->has->resolve(HX_CSTRING("pullDownRefresh")))) ? bool(_Function_1_1::Block(xml)) : bool(false) ))){
		HX_STACK_LINE(204)
		int _g19;		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(204)
		if ((xml->has->resolve(HX_CSTRING("pullDownColour")))){
			HX_STACK_LINE(204)
			::String _g18 = xml->att->resolve(HX_CSTRING("pullDownColour"));		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(204)
			_g19 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g18);
		}
		else{
			HX_STACK_LINE(204)
			_g19 = (int)3355443;
		}
		HX_STACK_LINE(204)
		::com::danielfreeman::madcomponents::UIRefresh _g20 = ::com::danielfreeman::madcomponents::UIRefresh_obj::__new(this->_slider,(int)0,(Float(-((int)40)) / Float((int)2)),_g19,::com::danielfreeman::madcomponents::UIList_obj::PULL_DOWN_TEXT);		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(204)
		this->_refresh = _g20;
		HX_STACK_LINE(205)
		this->resizeRefresh();
	}
	HX_STACK_LINE(207)
	if ((xml->has->resolve(HX_CSTRING("sortBy")))){
		HX_STACK_LINE(208)
		::String _g21 = xml->att->resolve(HX_CSTRING("sortBy"));		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(208)
		this->_sortBy = _g21;
	}
	HX_STACK_LINE(210)
	if ((xml->has->resolve(HX_CSTRING("sortMode")))){
		HX_STACK_LINE(211)
		::String _g22 = xml->att->resolve(HX_CSTRING("sortMode"));		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(211)
		this->_sortMode = _g22;
	}
	HX_STACK_LINE(213)
	if ((xml->has->resolve(HX_CSTRING("showPressed")))){
		HX_STACK_LINE(214)
		::String _g23 = xml->att->resolve(HX_CSTRING("showPressed"));		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(214)
		bool _g24 = (_g23 == HX_CSTRING("true"));		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(214)
		this->_showPressed = _g24;
	}
	HX_STACK_LINE(216)
	if ((xml->hasNode->resolve(HX_CSTRING("data")))){
		HX_STACK_LINE(217)
		::MadXML _g25 = xml->node->resolve(HX_CSTRING("data"));		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(217)
		this->set_xmlData(_g25);
	}
	HX_STACK_LINE(219)
	if ((xml->hasNode->resolve(HX_CSTRING("model")))){
		HX_STACK_LINE(220)
		::MadXML _g26 = xml->node->resolve(HX_CSTRING("model"));		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(220)
		::com::danielfreeman::madcomponents::Model _g27 = ::com::danielfreeman::madcomponents::Model_obj::__new(hx::ObjectPtr<OBJ_>(this),_g26,null());		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(220)
		this->_model = _g27;
	}
	HX_STACK_LINE(222)
	bool _g28 = this->useHandCursor = true;		HX_STACK_VAR(_g28,"_g28");
	HX_STACK_LINE(222)
	this->buttonMode = _g28;
	HX_STACK_LINE(223)
	if ((xml->has->resolve(HX_CSTRING("index")))){
		HX_STACK_LINE(224)
		::String _g29 = xml->att->resolve(HX_CSTRING("index"));		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(224)
		Dynamic _g30 = ::Std_obj::parseInt(_g29);		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(224)
		this->set_index(_g30);
	}
	HX_STACK_LINE(226)
	this->_highlightTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER,this->clearHighlight_dyn(),null(),null(),null());
}
;
	return null();
}

//UIList_obj::~UIList_obj() { }

Dynamic UIList_obj::__CreateEmpty() { return  new UIList_obj; }
hx::ObjectPtr< UIList_obj > UIList_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIList_obj > result = new UIList_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIList_obj > result = new UIList_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void UIList_obj::addASearch( ::MadXML xml){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","addASearch",0xbbea8470,"com.danielfreeman.madcomponents.UIList.addASearch","com/danielfreeman/madcomponents/UIList.hx",230,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_LINE(231)
		::MadXML _g = xml->node->resolve(HX_CSTRING("search"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(231)
		::com::danielfreeman::madcomponents::Attributes searchAttributes = this->get_attributes()->copy(_g,null());		HX_STACK_VAR(searchAttributes,"searchAttributes");
		HX_STACK_LINE(232)
		Float _g1 = searchAttributes->y = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(232)
		searchAttributes->x = _g1;
		HX_STACK_LINE(233)
		::MadXML _g2 = xml->node->resolve(HX_CSTRING("search"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(233)
		::com::danielfreeman::madcomponents::UISearch _g3 = ::com::danielfreeman::madcomponents::UISearch_obj::__new(this->_slider,_g2,searchAttributes);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(233)
		this->_search = _g3;
		HX_STACK_LINE(234)
		if ((xml->node->resolve(HX_CSTRING("search"))->has->resolve(HX_CSTRING("id")))){
			HX_STACK_LINE(235)
			::String _g4 = xml->node->resolve(HX_CSTRING("search"))->att->resolve(HX_CSTRING("id"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(235)
			this->_search->set_name(_g4);
		}
		HX_STACK_LINE(237)
		Float _g5 = this->_search->get_height();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(237)
		int _g6 = ::Math_obj::ceil(_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(237)
		this->_top = _g6;
		HX_STACK_LINE(238)
		if ((xml->node->resolve(HX_CSTRING("search"))->has->resolve(HX_CSTRING("field")))){
			HX_STACK_LINE(239)
			::String _g7 = xml->node->resolve(HX_CSTRING("search"))->att->resolve(HX_CSTRING("field"));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(239)
			this->_field = _g7;
			HX_STACK_LINE(240)
			bool _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(240)
			if ((xml->node->resolve(HX_CSTRING("search"))->has->resolve(HX_CSTRING("begins")))){
				HX_STACK_LINE(240)
				::String _g8 = xml->node->resolve(HX_CSTRING("search"))->att->resolve(HX_CSTRING("begins"));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(240)
				_g9 = (_g8 == HX_CSTRING("true"));
			}
			else{
				HX_STACK_LINE(240)
				_g9 = false;
			}
			HX_STACK_LINE(240)
			this->_begins = _g9;
			HX_STACK_LINE(241)
			this->_search->addEventListener(::openfl::events::TextEvent_obj::TEXT_INPUT,this->searchHandler_dyn(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,addASearch,(void))

::MadXML UIList_obj::set_rendererXML( ::MadXML value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","set_rendererXML",0xfa86360f,"com.danielfreeman.madcomponents.UIList.set_rendererXML","com/danielfreeman/madcomponents/UIList.hx",248,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(249)
	this->_renderer = value;
	HX_STACK_LINE(250)
	this->_simple = (value == null());
	HX_STACK_LINE(251)
	bool _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(251)
	if (((  ((!(this->_simple))) ? bool(this->_xml->has->resolve(HX_CSTRING("autoLayout"))) : bool(false) ))){
		HX_STACK_LINE(251)
		::String _g = this->_xml->att->resolve(HX_CSTRING("autoLayout"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(251)
		_g1 = (_g == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(251)
		_g1 = false;
	}
	HX_STACK_LINE(251)
	this->_autoLayout = _g1;
	HX_STACK_LINE(252)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,set_rendererXML,return )

bool UIList_obj::set_arrows( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","set_arrows",0xa7326aaf,"com.danielfreeman.madcomponents.UIList.set_arrows","com/danielfreeman/madcomponents/UIList.hx",256,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(257)
	this->_arrows = value;
	HX_STACK_LINE(258)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,set_arrows,return )

int UIList_obj::set_header( int value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","set_header",0xec375db2,"com.danielfreeman.madcomponents.UIList.set_header","com/danielfreeman/madcomponents/UIList.hx",262,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(263)
	this->_header = value;
	HX_STACK_LINE(264)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,set_header,return )

int UIList_obj::get_header( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","get_header",0xe8b9bf3e,"com.danielfreeman.madcomponents.UIList.get_header","com/danielfreeman/madcomponents/UIList.hx",269,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_LINE(269)
	return this->_header;
}


HX_DEFINE_DYNAMIC_FUNC0(UIList_obj,get_header,return )

::String UIList_obj::set_labelField( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","set_labelField",0x69bbaccb,"com.danielfreeman.madcomponents.UIList.set_labelField","com/danielfreeman/madcomponents/UIList.hx",273,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(274)
	if (((value != null()))){
		HX_STACK_LINE(274)
		this->_labelField = value;
	}
	else{
		HX_STACK_LINE(274)
		this->_labelField = HX_CSTRING("label");
	}
	HX_STACK_LINE(275)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,set_labelField,return )

Array< int > UIList_obj::set_colours( Array< int > value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","set_colours",0x509ac6e2,"com.danielfreeman.madcomponents.UIList.set_colours","com/danielfreeman/madcomponents/UIList.hx",279,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(280)
	this->_colours = value;
	HX_STACK_LINE(281)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,set_colours,return )

Void UIList_obj::initialiseRenderAttributes( ::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","initialiseRenderAttributes",0x29389b0c,"com.danielfreeman.madcomponents.UIList.initialiseRenderAttributes","com/danielfreeman/madcomponents/UIList.hx",285,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(286)
		::com::danielfreeman::madcomponents::Attributes _g = attributes->copy(null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(286)
		this->_rendererAttributes = _g;
		HX_STACK_LINE(287)
		this->_rendererAttributes->parse(this->_renderer);
		HX_STACK_LINE(288)
		Float _g1 = this->_rendererAttributes->y = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(288)
		this->_rendererAttributes->x = _g1;
		HX_STACK_LINE(289)
		Float _g2 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(289)
		Float _g3 = ((int)2 * _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(289)
		Float _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(289)
		if (((  ((this->_attributes->get_style7())) ? bool(this->_arrows) : bool(false) ))){
			HX_STACK_LINE(289)
			_g4 = ::com::danielfreeman::madcomponents::UI_obj::PADDING;
		}
		else{
			HX_STACK_LINE(289)
			_g4 = (int)0;
		}
		HX_STACK_LINE(289)
		Float _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(289)
		hx::SubEq(this->_rendererAttributes->width,_g5);
		HX_STACK_LINE(290)
		Float _g6 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(290)
		Float _g7 = ((int)2 * _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(290)
		hx::SubEq(this->_rendererAttributes->height,_g7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIList_obj,initialiseRenderAttributes,(void))

Float UIList_obj::indexToScrollPosition( int value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","indexToScrollPosition",0x6d9d72fb,"com.danielfreeman.madcomponents.UIList.indexToScrollPosition","com/danielfreeman/madcomponents/UIList.hx",295,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(295)
	return ((this->_cellHeight * value) - this->_offset);
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,indexToScrollPosition,return )

Void UIList_obj::setIndex( int value,hx::Null< bool >  __o_animate,hx::Null< bool >  __o_move,hx::Null< bool >  __o_highlight,hx::Null< Float >  __o_offset){
bool animate = __o_animate.Default(false);
bool move = __o_move.Default(false);
bool highlight = __o_highlight.Default(false);
Float offset = __o_offset.Default(0);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","setIndex",0xd4367ff8,"com.danielfreeman.madcomponents.UIList.setIndex","com/danielfreeman/madcomponents/UIList.hx",299,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(animate,"animate")
	HX_STACK_ARG(move,"move")
	HX_STACK_ARG(highlight,"highlight")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(300)
		this->_pressedCell = value;
		HX_STACK_LINE(301)
		if (((value < (int)0))){
			HX_STACK_LINE(302)
			return null();
		}
		HX_STACK_LINE(304)
		if ((move)){
			HX_STACK_LINE(305)
			Float _g = this->indexToScrollPosition(value);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(305)
			Float position = (_g - offset);		HX_STACK_VAR(position,"position");
		}
		else{
			HX_STACK_LINE(308)
			if ((animate)){
				HX_STACK_LINE(310)
				Float _g1 = this->indexToScrollPosition(value);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(310)
				this->_endSlider = _g1;
				HX_STACK_LINE(311)
				this->_moveTimer->start();
			}
		}
		HX_STACK_LINE(313)
		if ((highlight)){
			HX_STACK_LINE(314)
			this->illuminate(value,false,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(UIList_obj,setIndex,(void))

int UIList_obj::set_index( int value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","set_index",0xccedd28d,"com.danielfreeman.madcomponents.UIList.set_index","com/danielfreeman/madcomponents/UIList.hx",321,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(322)
	this->setIndex(value,false,false,this->_showPressed,null());
	HX_STACK_LINE(323)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,set_index,return )

::MadXML UIList_obj::get_rendererXML( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","get_rendererXML",0xfebab903,"com.danielfreeman.madcomponents.UIList.get_rendererXML","com/danielfreeman/madcomponents/UIList.hx",328,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_LINE(328)
	return this->_renderer;
}


HX_DEFINE_DYNAMIC_FUNC0(UIList_obj,get_rendererXML,return )

Void UIList_obj::doLayoutHandler( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","doLayoutHandler",0x7c20e0cd,"com.danielfreeman.madcomponents.UIList.doLayoutHandler","com/danielfreeman/madcomponents/UIList.hx",332,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(333)
		this->doLayout();
		HX_STACK_LINE(334)
		event->stopPropagation();
	}
return null();
}


::MadXML UIList_obj::extractRenderer( ::MadXML xml){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","extractRenderer",0xd04030bc,"com.danielfreeman.madcomponents.UIList.extractRenderer","com/danielfreeman/madcomponents/UIList.hx",343,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_LINE(344)
	::MadXMLList children = xml->children(null());		HX_STACK_VAR(children,"children");
	HX_STACK_LINE(345)
	int _g = children->length();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(345)
	if (((_g == (int)0))){
		HX_STACK_LINE(346)
		return null();
	}
	else{
		HX_STACK_LINE(348)
		if (((  (((  (((  ((!(xml->hasNode->resolve(HX_CSTRING("data"))))) ? bool(!(xml->hasNode->resolve(HX_CSTRING("font")))) : bool(false) ))) ? bool(!(xml->hasNode->resolve(HX_CSTRING("model")))) : bool(false) ))) ? bool(!(xml->hasNode->resolve(HX_CSTRING("search")))) : bool(false) ))){
			HX_STACK_LINE(349)
			return children->get((int)0);
		}
	}
	HX_STACK_LINE(351)
	for(::cpp::FastIterator_obj< ::MadXML > *__it = ::cpp::CreateFastIterator< ::MadXML >(children->iterator());  __it->hasNext(); ){
		::MadXML child = __it->next();
		{
			HX_STACK_LINE(352)
			::String _g1 = child->get_name();		HX_STACK_VAR(_g1,"_g1");
			struct _Function_2_1{
				inline static bool Block( ::MadXML &child){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIList.hx",352,0x418b0955)
					{
						HX_STACK_LINE(352)
						::String _g2 = child->get_name();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(352)
						return (_g2 != HX_CSTRING("font"));
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( ::MadXML &child){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIList.hx",352,0x418b0955)
					{
						HX_STACK_LINE(352)
						::String _g3 = child->get_name();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(352)
						return (_g3 != HX_CSTRING("model"));
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static bool Block( ::MadXML &child){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIList.hx",352,0x418b0955)
					{
						HX_STACK_LINE(352)
						::String _g4 = child->get_name();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(352)
						return (_g4 != HX_CSTRING("search"));
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static bool Block( ::MadXML &child){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIList.hx",352,0x418b0955)
					{
						HX_STACK_LINE(352)
						::String _g5 = child->get_name();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(352)
						return (_g5 != HX_CSTRING("detail"));
					}
					return null();
				}
			};
			HX_STACK_LINE(352)
			if (((  (((  (((  (((  (((_g1 != HX_CSTRING("data")))) ? bool(_Function_2_1::Block(child)) : bool(false) ))) ? bool(_Function_2_2::Block(child)) : bool(false) ))) ? bool(_Function_2_3::Block(child)) : bool(false) ))) ? bool(_Function_2_4::Block(child)) : bool(false) ))){
				HX_STACK_LINE(353)
				return child;
			}
		}
;
	}
	HX_STACK_LINE(356)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,extractRenderer,return )

bool UIList_obj::set_highlightPressed( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","set_highlightPressed",0xa01b6733,"com.danielfreeman.madcomponents.UIList.set_highlightPressed","com/danielfreeman/madcomponents/UIList.hx",362,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(363)
	this->_highlightPressed = value;
	HX_STACK_LINE(364)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,set_highlightPressed,return )

bool UIList_obj::set_showPressed( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","set_showPressed",0x656ef4e0,"com.danielfreeman.madcomponents.UIList.set_showPressed","com/danielfreeman/madcomponents/UIList.hx",370,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(371)
	this->_showPressed = value;
	HX_STACK_LINE(372)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,set_showPressed,return )

bool UIList_obj::get_showPressed( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","get_showPressed",0x69a377d4,"com.danielfreeman.madcomponents.UIList.get_showPressed","com/danielfreeman/madcomponents/UIList.hx",376,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_LINE(376)
	return this->_showPressed;
}


HX_DEFINE_DYNAMIC_FUNC0(UIList_obj,get_showPressed,return )

Void UIList_obj::clearPressed( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","clearPressed",0xf623147d,"com.danielfreeman.madcomponents.UIList.clearPressed","com/danielfreeman/madcomponents/UIList.hx",383,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_LINE(384)
		this->_highlight->get_graphics()->clear();
		HX_STACK_LINE(385)
		this->_highlightIsOn = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIList_obj,clearPressed,(void))

Void UIList_obj::clearHighlight( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","clearHighlight",0x623504cf,"com.danielfreeman.madcomponents.UIList.clearHighlight","com/danielfreeman/madcomponents/UIList.hx",389,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(390)
		this->clearPressed();
		HX_STACK_LINE(391)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("listClickedEnd"),true,true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(391)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,clearHighlight,(void))

Void UIList_obj::dispatchClickedEnd( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","dispatchClickedEnd",0x7b1b54b6,"com.danielfreeman.madcomponents.UIList.dispatchClickedEnd","com/danielfreeman/madcomponents/UIList.hx",396,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_LINE(396)
		if ((!(this->_classic))){
			HX_STACK_LINE(397)
			::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("clicked"),true,true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(397)
			this->dispatchEvent(_g);
			HX_STACK_LINE(398)
			int _g1 = this->get_index();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(398)
			Dynamic _g2 = Dynamic( Array_obj<Dynamic>::__new().Add(_g1));		HX_STACK_VAR(_g2,"_g2");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &_g2){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIList.hx",398,0x418b0955)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UIList.hx"),false);
						__result->Add(HX_CSTRING("lineNumber") , (int)398,false);
						__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.madcomponents.UIList"),false);
						__result->Add(HX_CSTRING("methodName") , HX_CSTRING("dispatchClickedEnd"),false);
						__result->Add(HX_CSTRING("customParams") , _g2,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(398)
			Dynamic _g3 = _Function_2_1::Block(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(398)
			::haxe::Log_obj::trace(HX_CSTRING("index="),_g3);
			HX_STACK_LINE(399)
			if (((this->_touchTimer->currentCount < (int)8))){
				HX_STACK_LINE(400)
				this->illuminate((int)-1,false,true);
				HX_STACK_LINE(401)
				if ((this->_showPressed)){
					HX_STACK_LINE(402)
					::openfl::events::Event _g4 = ::openfl::events::Event_obj::__new(HX_CSTRING("listClickedEnd"),true,true);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(402)
					this->dispatchEvent(_g4);
				}
				else{
					HX_STACK_LINE(405)
					this->_highlightTimer->stop();
					HX_STACK_LINE(406)
					this->_highlightTimer->reset();
					HX_STACK_LINE(407)
					this->_highlightTimer->start();
				}
			}
			else{
				HX_STACK_LINE(412)
				::openfl::events::Event _g5 = ::openfl::events::Event_obj::__new(HX_CSTRING("listClickedEnd"),true,true);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(412)
				this->dispatchEvent(_g5);
			}
		}
		else{
			HX_STACK_LINE(416)
			::openfl::events::Event _g6 = ::openfl::events::Event_obj::__new(HX_CSTRING("listClickedEnd"),true,true);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(416)
			this->dispatchEvent(_g6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIList_obj,dispatchClickedEnd,(void))

Void UIList_obj::endPressed( hx::Null< bool >  __o_delay){
bool delay = __o_delay.Default(false);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","endPressed",0xdb3b3def,"com.danielfreeman.madcomponents.UIList.endPressed","com/danielfreeman/madcomponents/UIList.hx",426,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(delay,"delay")
{
		HX_STACK_LINE(426)
		if ((delay)){
			HX_STACK_LINE(427)
			this->_showPressed = false;
			HX_STACK_LINE(428)
			this->_clickTimer->reset();
			HX_STACK_LINE(429)
			this->_clickTimer->start();
		}
		else{
			HX_STACK_LINE(432)
			this->clearPressed();
			HX_STACK_LINE(433)
			this->dispatchClickedEnd();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,endPressed,(void))

::MadXML UIList_obj::set_xmlData( ::MadXML value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","set_xmlData",0xd0ab73dc,"com.danielfreeman.madcomponents.UIList.set_xmlData","com/danielfreeman/madcomponents/UIList.hx",441,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(442)
	Dynamic result = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(443)
	::MadXMLList children = value->children(null());		HX_STACK_VAR(children,"children");
	HX_STACK_LINE(444)
	for(::cpp::FastIterator_obj< ::MadXML > *__it = ::cpp::CreateFastIterator< ::MadXML >(children->iterator());  __it->hasNext(); ){
		::MadXML child = __it->next();
		if ((!(child->get_nodeKindIsText()))){
			HX_STACK_LINE(446)
			Dynamic _g = this->attributesToObject(child);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(446)
			result->__Field(HX_CSTRING("push"),true)(_g);
		}
;
	}
	HX_STACK_LINE(449)
	this->set_data(result);
	HX_STACK_LINE(450)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,set_xmlData,return )

Dynamic UIList_obj::attributesToObject( ::MadXML child){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","attributesToObject",0x558f2879,"com.danielfreeman.madcomponents.UIList.attributesToObject","com/danielfreeman/madcomponents/UIList.hx",454,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(455)
	Dynamic attributes = child->x->attributes();		HX_STACK_VAR(attributes,"attributes");
	HX_STACK_LINE(456)
	if ((!(attributes->__Field(HX_CSTRING("hasNext"),true)()))){
		HX_STACK_LINE(457)
		::String _g = child->get_name();		HX_STACK_VAR(_g,"_g");
		struct _Function_2_1{
			inline static Dynamic Block( ::String &_g){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIList.hx",457,0x418b0955)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("label") , _g,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(457)
		return _Function_2_1::Block(_g);
	}
	else{
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIList.hx",460,0x418b0955)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(460)
		Dynamic result = _Function_2_1::Block();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(461)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(attributes);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(462)
				Dynamic value = child->x->get(key);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(462)
				if (((result != null()))){
					HX_STACK_LINE(462)
					result->__SetField(key,value,false);
				}
			}
;
		}
		HX_STACK_LINE(465)
		return result;
	}
	HX_STACK_LINE(467)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,attributesToObject,return )

Void UIList_obj::drawComponent( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","drawComponent",0x339b5f31,"com.danielfreeman.madcomponents.UIList.drawComponent","com/danielfreeman/madcomponents/UIList.hx",473,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_LINE(474)
		this->get_graphics()->clear();
		HX_STACK_LINE(475)
		if (((bool((this->_colours != null())) && bool((this->_colours->length > (int)0))))){
			HX_STACK_LINE(476)
			this->get_graphics()->beginFill(this->_colours->__get((int)0),null());
		}
		else{
			HX_STACK_LINE(479)
			this->get_graphics()->beginFill((int)0,(int)0);
		}
		HX_STACK_LINE(481)
		Float _g = this->_attributes->get_widthH();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(481)
		Float _g1 = this->_attributes->get_heightV();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(481)
		this->get_graphics()->drawRect((int)0,(int)0,_g,_g1);
	}
return null();
}


Void UIList_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","layout",0x4907e092,"com.danielfreeman.madcomponents.UIList.layout","com/danielfreeman/madcomponents/UIList.hx",487,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(488)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(489)
		Dynamic cell;		HX_STACK_VAR(cell,"cell");
		HX_STACK_LINE(490)
		this->_width = attributes->width;
		HX_STACK_LINE(491)
		this->_height = attributes->height;
		HX_STACK_LINE(492)
		if (((this->_search != null()))){
			HX_STACK_LINE(493)
			this->_search->layout(attributes);
		}
		HX_STACK_LINE(495)
		this->_attributes = attributes;
		HX_STACK_LINE(496)
		this->resizeRefresh();
		HX_STACK_LINE(497)
		this->drawComponent();
		HX_STACK_LINE(498)
		this->_slider->get_graphics()->clear();
		HX_STACK_LINE(500)
		if ((this->_simple)){
			HX_STACK_LINE(501)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(501)
			int _g = this->_slider->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(501)
			while((true)){
				HX_STACK_LINE(501)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(501)
					break;
				}
				HX_STACK_LINE(501)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(502)
				::openfl::display::DisplayObject _g2 = this->_slider->getChildAt(i1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(502)
				cell = _g2;
				HX_STACK_LINE(503)
				if (((  ((::Std_obj::is(cell,hx::ClassOf< ::com::danielfreeman::madcomponents::UILabel >()))) ? bool(!(::Std_obj::is(cell,hx::ClassOf< ::com::danielfreeman::madcomponents::UISearch >()))) : bool(false) ))){
					HX_STACK_LINE(504)
					Float _g11 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(504)
					Float _g21 = ((int)2 * _g11);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(504)
					Float _g3 = (this->_attributes->width - _g21);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(504)
					(hx::TCast< com::danielfreeman::madcomponents::UILabel >::cast(cell))->set_fixwidth(_g3);
					HX_STACK_LINE(505)
					Dynamic _g4 = cell->__FieldRef(HX_CSTRING("wordWrap")) = false;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(505)
					cell->__FieldRef(HX_CSTRING("multiline")) = _g4;
				}
			}
		}
		else{
			HX_STACK_LINE(511)
			Float _g5 = attributes->get_paddingH();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(511)
			Float _g6 = ((int)2 * _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(511)
			Float _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(511)
			if (((  ((this->_attributes->get_style7())) ? bool(this->_arrows) : bool(false) ))){
				HX_STACK_LINE(511)
				_g7 = ::com::danielfreeman::madcomponents::UI_obj::PADDING;
			}
			else{
				HX_STACK_LINE(511)
				_g7 = (int)0;
			}
			HX_STACK_LINE(511)
			Float _g8 = (_g6 + _g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(511)
			Float _g9 = (attributes->width - _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(511)
			this->_rendererAttributes->width = _g9;
			HX_STACK_LINE(512)
			Float _g10 = attributes->get_paddingV();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(512)
			Float _g11 = ((int)2 * _g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(512)
			Float _g12 = (attributes->height - _g11);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(512)
			this->_rendererAttributes->height = _g12;
			HX_STACK_LINE(513)
			if (((bool((this->_filteredData != null())) && bool(this->_autoLayout)))){
				HX_STACK_LINE(514)
				this->autoLayout();
			}
			else{
				HX_STACK_LINE(517)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(517)
				int _g = this->_slider->get_numChildren();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(517)
				while((true)){
					HX_STACK_LINE(517)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(517)
						break;
					}
					HX_STACK_LINE(517)
					int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(518)
					::openfl::display::DisplayObject _g13 = this->_slider->getChildAt(i1);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(518)
					cell = _g13;
					HX_STACK_LINE(519)
					if (((  ((::Std_obj::is(cell,hx::ClassOf< ::com::danielfreeman::madcomponents::IComponentUI >()))) ? bool(!(::Std_obj::is(cell,hx::ClassOf< ::com::danielfreeman::madcomponents::UISearch >()))) : bool(false) ))){
						HX_STACK_LINE(520)
						(hx::TCast< com::danielfreeman::madcomponents::IComponentUI >::cast(cell))->layout(this->_rendererAttributes);
					}
				}
			}
		}
		HX_STACK_LINE(525)
		this->refreshMasking(null());
		HX_STACK_LINE(526)
		if (((bool(!(this->_autoLayout)) || bool(this->_simple)))){
			HX_STACK_LINE(527)
			this->redrawCells();
		}
		HX_STACK_LINE(529)
		if (((bool(this->_highlightIsOn) && bool(this->_showPressed)))){
			HX_STACK_LINE(530)
			this->setIndex(this->_pressedCell,false,false,true,null());
		}
		HX_STACK_LINE(532)
		this->calculateMaximumSlide();
	}
return null();
}


Void UIList_obj::autoLayout( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","autoLayout",0xbfb60561,"com.danielfreeman.madcomponents.UIList.autoLayout","com/danielfreeman/madcomponents/UIList.hx",536,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_LINE(537)
		Float _g = this->_attributes->get_paddingV();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(537)
		Float _g1 = (this->_top + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(537)
		int last = ::Math_obj::round(_g1);		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(538)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(539)
		this->initDraw();
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(540)
			Dynamic _g11 = this->_filteredData;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(540)
			while((true)){
				HX_STACK_LINE(540)
				if ((!(((_g2 < _g11->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(540)
					break;
				}
				HX_STACK_LINE(540)
				Dynamic record = _g11->__GetItem(_g2);		HX_STACK_VAR(record,"record");
				HX_STACK_LINE(540)
				++(_g2);
				HX_STACK_LINE(541)
				::String _g21 = ::Std_obj::string(i);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(541)
				::String _g3 = (HX_CSTRING("label_") + _g21);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(541)
				Dynamic cell = this->_slider->getChildByName(_g3);		HX_STACK_VAR(cell,"cell");
				HX_STACK_LINE(542)
				if (((  (((cell != null()))) ? bool(::Std_obj::is(cell,hx::ClassOf< ::com::danielfreeman::madcomponents::IComponentUI >())) : bool(false) ))){
					HX_STACK_LINE(543)
					(hx::TCast< com::danielfreeman::madcomponents::IComponentUI >::cast(cell))->layout(this->_rendererAttributes);
					HX_STACK_LINE(544)
					cell->__FieldRef(HX_CSTRING("y")) = last;
					HX_STACK_LINE(545)
					Float _g4 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(545)
					Dynamic _g5 = (cell->__Field(HX_CSTRING("height"),true) + _g4);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(545)
					int _g6 = ::Math_obj::ceil(_g5);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(545)
					hx::AddEq(last,_g6);
					HX_STACK_LINE(546)
					this->drawCell(last,i,record);
					HX_STACK_LINE(547)
					Float _g7 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(547)
					int _g8 = ::Math_obj::ceil(_g7);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(547)
					hx::AddEq(last,_g8);
					HX_STACK_LINE(548)
					(i)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIList_obj,autoLayout,(void))

Void UIList_obj::doLayout( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","doLayout",0xf4bdb07d,"com.danielfreeman.madcomponents.UIList.doLayout","com/danielfreeman/madcomponents/UIList.hx",557,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_LINE(558)
		this->layout(this->_attributes);
		HX_STACK_LINE(559)
		this->adjustMaximumSlide();
	}
return null();
}


Void UIList_obj::redrawCells( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","redrawCells",0x1d0374f2,"com.danielfreeman.madcomponents.UIList.redrawCells","com/danielfreeman/madcomponents/UIList.hx",565,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_LINE(566)
		this->initDraw();
		HX_STACK_LINE(567)
		if ((!(this->_autoLayout))){
			HX_STACK_LINE(568)
			int l = (int)0;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(569)
			{
				HX_STACK_LINE(569)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(569)
				Dynamic _g1 = this->_filteredData;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(569)
				while((true)){
					HX_STACK_LINE(569)
					if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(569)
						break;
					}
					HX_STACK_LINE(569)
					Dynamic record = _g1->__GetItem(_g);		HX_STACK_VAR(record,"record");
					HX_STACK_LINE(569)
					++(_g);
					HX_STACK_LINE(570)
					int _g2 = ::Math_obj::ceil(((this->_cellHeight * ((l + (int)1))) + this->_top));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(570)
					this->drawCell(_g2,l,record);
					HX_STACK_LINE(571)
					(l)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIList_obj,redrawCells,(void))

Void UIList_obj::createSlider( ::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","createSlider",0x73179625,"com.danielfreeman.madcomponents.UIList.createSlider","com/danielfreeman/madcomponents/UIList.hx",579,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(579)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(579)
		::openfl::display::Sprite _g1 = this->_slider = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(579)
		this->addChild(_g1);
		HX_STACK_LINE(580)
		::openfl::display::Shape _g2 = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(580)
		::openfl::display::Shape _g3 = this->_highlight = _g2;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(580)
		this->_slider->addChild(_g3);
		HX_STACK_LINE(581)
		this->_width = attributes->width;
		HX_STACK_LINE(582)
		this->_height = attributes->height;
	}
return null();
}


Dynamic UIList_obj::sortParameter( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","sortParameter",0x0be66d83,"com.danielfreeman.madcomponents.UIList.sortParameter","com/danielfreeman/madcomponents/UIList.hx",586,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(587)
	int _g = value.indexOf(HX_CSTRING(","),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(587)
	if (((_g < (int)0))){
		HX_STACK_LINE(588)
		return value;
	}
	else{
		HX_STACK_LINE(591)
		return value.split(HX_CSTRING(","));
	}
	HX_STACK_LINE(587)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,sortParameter,return )

Dynamic UIList_obj::set_data( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","set_data",0x7868e70f,"com.danielfreeman.madcomponents.UIList.set_data","com/danielfreeman/madcomponents/UIList.hx",598,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(599)
	Dynamic _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(599)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(599)
		_g = hx::TCastToArray(value);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(599)
				_g = null();
			}
		}
	}
	HX_STACK_LINE(599)
	this->_data = _g;
	HX_STACK_LINE(600)
	this->_saveIndex = (int)-1;
	HX_STACK_LINE(604)
	this->clearPressed();
	HX_STACK_LINE(605)
	Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(605)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(605)
		_g1 = hx::TCastToArray(value);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(605)
				_g1 = null();
			}
		}
	}
	HX_STACK_LINE(605)
	this->set_filteredData(_g1);
	HX_STACK_LINE(606)
	return value;
}


bool UIList_obj::setData( Dynamic value,hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","setData",0x5ce41004,"com.danielfreeman.madcomponents.UIList.setData","com/danielfreeman/madcomponents/UIList.hx",610,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(611)
		{
			HX_STACK_LINE(611)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(611)
			while((true)){
				HX_STACK_LINE(611)
				if ((!(((_g < value->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(611)
					break;
				}
				HX_STACK_LINE(611)
				Dynamic record = value->__GetItem(_g);		HX_STACK_VAR(record,"record");
				HX_STACK_LINE(611)
				++(_g);
				HX_STACK_LINE(612)
				::String _g1 = ::Std_obj::string(index);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(612)
				::String _g11 = (HX_CSTRING("label_") + _g1);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(612)
				::String _g2 = (_g11 + this->_suffix);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(612)
				Dynamic cell = this->_slider->getChildByName(_g2);		HX_STACK_VAR(cell,"cell");
				HX_STACK_LINE(613)
				if ((::Std_obj::is(cell,hx::ClassOf< ::com::danielfreeman::madcomponents::UILabel >()))){
					HX_STACK_LINE(614)
					::String _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(614)
					if ((::Std_obj::is(record,hx::ClassOf< ::String >()))){
						HX_STACK_LINE(614)
						_g3 = record;
					}
					else{
						HX_STACK_LINE(614)
						_g3 = ::Reflect_obj::field(record,this->_labelField);
					}
					HX_STACK_LINE(614)
					(hx::TCast< com::danielfreeman::madcomponents::UILabel >::cast(cell))->set_xmlText(_g3);
				}
				else{
					HX_STACK_LINE(616)
					if ((::Std_obj::is(cell,hx::ClassOf< ::com::danielfreeman::madcomponents::IContainerUI >()))){
						HX_STACK_LINE(617)
						this->fillInValues(cell,record);
					}
					else{
						HX_STACK_LINE(620)
						return true;
					}
				}
				HX_STACK_LINE(622)
				(index)++;
			}
		}
		HX_STACK_LINE(624)
		if ((this->_autoLayout)){
			HX_STACK_LINE(625)
			this->doLayout();
			HX_STACK_LINE(626)
			this->calculateMaximumSlide();
		}
		HX_STACK_LINE(628)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(UIList_obj,setData,return )

Dynamic UIList_obj::set_filteredData( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","set_filteredData",0xbb262dc6,"com.danielfreeman.madcomponents.UIList.set_filteredData","com/danielfreeman/madcomponents/UIList.hx",634,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(635)
	this->_filteredData = value;
	HX_STACK_LINE(636)
	this->set_data0(value);
	HX_STACK_LINE(637)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,set_filteredData,return )

Dynamic UIList_obj::set_data0( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","set_data0",0xe3614641,"com.danielfreeman.madcomponents.UIList.set_data0","com/danielfreeman/madcomponents/UIList.hx",643,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(644)
	if (((this->_refresh != null()))){
		HX_STACK_LINE(645)
		this->_refresh->changeState(::com::danielfreeman::madcomponents::UIList_obj::PULL_DOWN_TEXT,false);
	}
	HX_STACK_LINE(647)
	this->clearCells();
	HX_STACK_LINE(648)
	this->initDraw();
	HX_STACK_LINE(649)
	if ((this->_simple)){
		HX_STACK_LINE(650)
		Float _g = this->_attributes->get_paddingV();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(650)
		Float _g1 = ((int)2 * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(650)
		Float _g2 = (this->_cellTop + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(650)
		this->simpleRenderers(value,_g2);
	}
	else{
		HX_STACK_LINE(653)
		Float _g3 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(653)
		Float _g4 = (this->_cellTop + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(653)
		this->customRenderers(value,_g4);
	}
	HX_STACK_LINE(655)
	if ((this->_autoLayout)){
		HX_STACK_LINE(656)
		this->doLayout();
	}
	HX_STACK_LINE(658)
	this->calculateMaximumSlide();
	HX_STACK_LINE(659)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,set_data0,return )

Void UIList_obj::calculateMaximumSlide( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","calculateMaximumSlide",0x11a98ecf,"com.danielfreeman.madcomponents.UIList.calculateMaximumSlide","com/danielfreeman/madcomponents/UIList.hx",665,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_LINE(666)
		Float _g = this->_slider->getBounds(this->_slider)->get_bottom();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(666)
		this->_scrollerHeight = _g;
		HX_STACK_LINE(667)
		this->_maximumSlide = (this->_scrollerHeight - this->_height);
		HX_STACK_LINE(668)
		if (((this->_maximumSlide < (int)0))){
			HX_STACK_LINE(669)
			this->_maximumSlide = (int)0;
		}
		HX_STACK_LINE(671)
		if (((bool((bool(!(this->_simple)) && bool((this->_count > (int)0)))) && bool(((bool((this->_cellHeight < (int)0)) || bool(this->_autoLayout))))))){
			HX_STACK_LINE(673)
			Float _g1 = this->_slider->getBounds(hx::ObjectPtr<OBJ_>(this))->get_bottom();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(673)
			Float _g2 = (_g1 - this->_top);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(673)
			Float _g3 = (Float(_g2) / Float(this->_count));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(673)
			int _g4 = ::Math_obj::ceil(_g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(673)
			int _g5 = (_g4 - (int)1);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(673)
			this->_cellHeight = _g5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIList_obj,calculateMaximumSlide,(void))

Void UIList_obj::adjustMaximumSlide( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","adjustMaximumSlide",0xbdd49a48,"com.danielfreeman.madcomponents.UIList.adjustMaximumSlide","com/danielfreeman/madcomponents/UIList.hx",678,0x418b0955)
		HX_STACK_THIS(this)
	}
return null();
}


Dynamic UIList_obj::get_data( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","get_data",0xca0b8d9b,"com.danielfreeman.madcomponents.UIList.get_data","com/danielfreeman/madcomponents/UIList.hx",685,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_LINE(685)
	return this->_data;
}


HX_DEFINE_DYNAMIC_FUNC0(UIList_obj,get_data,return )

Dynamic UIList_obj::get_filteredData( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","get_filteredData",0x64e44052,"com.danielfreeman.madcomponents.UIList.get_filteredData","com/danielfreeman/madcomponents/UIList.hx",692,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_LINE(692)
	return this->_filteredData;
}


HX_DEFINE_DYNAMIC_FUNC0(UIList_obj,get_filteredData,return )

Dynamic UIList_obj::filterArray( Dynamic data,::String searchFor,::String field,bool caseSensitive,bool begins){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","filterArray",0xa60ca7d9,"com.danielfreeman.madcomponents.UIList.filterArray","com/danielfreeman/madcomponents/UIList.hx",695,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(searchFor,"searchFor")
	HX_STACK_ARG(field,"field")
	HX_STACK_ARG(caseSensitive,"caseSensitive")
	HX_STACK_ARG(begins,"begins")
	HX_STACK_LINE(696)
	Dynamic result = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(697)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(698)
	{
		HX_STACK_LINE(698)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(698)
		while((true)){
			HX_STACK_LINE(698)
			if ((!(((_g < data->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(698)
				break;
			}
			HX_STACK_LINE(698)
			Dynamic record = data->__GetItem(_g);		HX_STACK_VAR(record,"record");
			HX_STACK_LINE(698)
			++(_g);
			HX_STACK_LINE(699)
			::String item = ::Reflect_obj::field(record,field);		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(700)
			int _g1 = (index)++;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(700)
			record->__FieldRef(HX_CSTRING("_index")) = _g1;
			HX_STACK_LINE(701)
			if ((!(caseSensitive))){
				HX_STACK_LINE(702)
				::String _g11 = item.toLowerCase();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(702)
				item = _g11;
			}
			HX_STACK_LINE(704)
			if ((begins)){
				HX_STACK_LINE(705)
				::String _g2 = item.substr((int)0,searchFor.length);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(705)
				if (((_g2 == searchFor))){
					HX_STACK_LINE(706)
					result->__Field(HX_CSTRING("push"),true)(record);
				}
			}
			else{
				HX_STACK_LINE(710)
				int _g3 = item.indexOf(searchFor,null());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(710)
				if (((_g3 >= (int)0))){
					HX_STACK_LINE(711)
					result->__Field(HX_CSTRING("push"),true)(record);
				}
			}
		}
	}
	HX_STACK_LINE(715)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC5(UIList_obj,filterArray,return )

Void UIList_obj::filter( ::String searchFor,::String __o_field,hx::Null< bool >  __o_caseSensitive,hx::Null< bool >  __o_begins){
::String field = __o_field.Default(HX_CSTRING(""));
bool caseSensitive = __o_caseSensitive.Default(false);
bool begins = __o_begins.Default(false);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","filter",0x758451a0,"com.danielfreeman.madcomponents.UIList.filter","com/danielfreeman/madcomponents/UIList.hx",722,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(searchFor,"searchFor")
	HX_STACK_ARG(field,"field")
	HX_STACK_ARG(caseSensitive,"caseSensitive")
	HX_STACK_ARG(begins,"begins")
{
		HX_STACK_LINE(722)
		if (((searchFor == HX_CSTRING("")))){
			HX_STACK_LINE(723)
			this->set_filteredData(this->_data);
		}
		else{
			HX_STACK_LINE(725)
			if (((field == HX_CSTRING("")))){
				HX_STACK_LINE(726)
				field = this->_field;
			}
			HX_STACK_LINE(728)
			Dynamic _g = this->filterArray(this->_data,searchFor,field,caseSensitive,begins);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(728)
			this->set_filteredData(_g);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(UIList_obj,filter,(void))

Void UIList_obj::simpleRenderers( Dynamic value,hx::Null< Float >  __o_position){
Float position = __o_position.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","simpleRenderers",0x798eec56,"com.danielfreeman.madcomponents.UIList.simpleRenderers","com/danielfreeman/madcomponents/UIList.hx",735,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(position,"position")
{
		HX_STACK_LINE(736)
		if (((position < (int)0))){
			HX_STACK_LINE(737)
			Float _g = this->_attributes->get_paddingV();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(737)
			Float _g1 = ((int)2 * _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(737)
			position = _g1;
		}
		HX_STACK_LINE(739)
		this->_count = (int)0;
		HX_STACK_LINE(740)
		::String _g2 = this->_attributes->get_textAlign();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(740)
		this->_textAlign = _g2;
		HX_STACK_LINE(741)
		{
			HX_STACK_LINE(741)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(741)
			while((true)){
				HX_STACK_LINE(741)
				if ((!(((_g < value->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(741)
					break;
				}
				HX_STACK_LINE(741)
				Dynamic record = value->__GetItem(_g);		HX_STACK_VAR(record,"record");
				HX_STACK_LINE(741)
				++(_g);
				HX_STACK_LINE(742)
				::com::danielfreeman::madcomponents::UILabel label = this->labelCell(record,position);		HX_STACK_VAR(label,"label");
				HX_STACK_LINE(743)
				Float _g3 = label->get_height();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(743)
				Float _g4 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(743)
				Float _g5 = ((int)2 * _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(743)
				Float _g6 = (_g3 + _g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(743)
				int _g7 = ::Math_obj::ceil(_g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(743)
				hx::AddEq(position,_g7);
				HX_STACK_LINE(744)
				this->drawCell(position,this->_count,record);
				HX_STACK_LINE(745)
				Float _g8 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(745)
				Float _g9 = ((int)2 * _g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(745)
				hx::AddEq(position,_g9);
				HX_STACK_LINE(746)
				Float _g10 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(746)
				Float _g11 = ((int)4 * _g10);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(746)
				Float _g12 = label->get_height();		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(746)
				Float _g13 = (_g11 + _g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(746)
				int _g14 = ::Math_obj::ceil(_g13);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(746)
				this->_cellHeight = _g14;
				HX_STACK_LINE(747)
				(this->_count)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIList_obj,simpleRenderers,(void))

::com::danielfreeman::madcomponents::UILabel UIList_obj::labelCell( Dynamic record,Float position){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","labelCell",0x3af454ce,"com.danielfreeman.madcomponents.UIList.labelCell","com/danielfreeman/madcomponents/UIList.hx",754,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(record,"record")
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(755)
	::String labelText;		HX_STACK_VAR(labelText,"labelText");
	HX_STACK_LINE(755)
	if ((::Std_obj::is(record,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(755)
		labelText = record;
	}
	else{
		HX_STACK_LINE(755)
		labelText = ::Reflect_obj::field(record,this->_labelField);
	}
	HX_STACK_LINE(756)
	::com::danielfreeman::madcomponents::UILabel label = this->newLabel();		HX_STACK_VAR(label,"label");
	HX_STACK_LINE(757)
	label->set_y(position);
	HX_STACK_LINE(758)
	::String _g = ::Std_obj::string(this->_count);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(758)
	::String _g1 = (HX_CSTRING("label_") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(758)
	::String _g2 = (_g1 + this->_suffix);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(758)
	label->set_name(_g2);
	HX_STACK_LINE(759)
	::MadXML xml = ::MadXML_obj::parse(((HX_CSTRING("<t>") + labelText) + HX_CSTRING("</t>")));		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(760)
	if ((xml->get_hasChildren())){
		HX_STACK_LINE(762)
		::String _g3 = xml->toString();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(762)
		label->set_htmlText(_g3);
	}
	else{
		HX_STACK_LINE(765)
		if (((this->_font != HX_CSTRING("")))){
			HX_STACK_LINE(766)
			::String _g4 = this->_font.substr((int)0,(this->_font.length - (int)2));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(766)
			::String _g5 = (_g4 + HX_CSTRING(">"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(766)
			::String _g6 = (_g5 + labelText);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(766)
			::String _g7 = (_g6 + HX_CSTRING("</font>"));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(766)
			label->set_htmlText(_g7);
		}
		else{
			HX_STACK_LINE(769)
			label->set_text(labelText);
		}
	}
	HX_STACK_LINE(772)
	if (((this->_textAlign != HX_CSTRING("")))){
		HX_STACK_LINE(773)
		::openfl::text::TextFormat format = ::openfl::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(775)
		format->align = this->_textAlign;
		HX_STACK_LINE(776)
		label->setTextFormat(format,null(),null());
	}
	HX_STACK_LINE(778)
	Float _g8 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(778)
	Float _g9 = ((int)2 * _g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(778)
	Float _g10 = (this->_attributes->width - _g9);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(778)
	label->set_fixwidth(_g10);
	HX_STACK_LINE(779)
	bool _g11 = label->set_wordWrap(false);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(779)
	label->set_multiline(_g11);
	HX_STACK_LINE(780)
	return label;
}


HX_DEFINE_DYNAMIC_FUNC2(UIList_obj,labelCell,return )

Void UIList_obj::initDraw( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","initDraw",0x4f14d71c,"com.danielfreeman.madcomponents.UIList.initDraw","com/danielfreeman/madcomponents/UIList.hx",786,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_LINE(787)
		this->_slider->get_graphics()->clear();
		HX_STACK_LINE(789)
		this->_slider->get_graphics()->beginFill(this->_colour,null());
		HX_STACK_LINE(790)
		this->_slider->get_graphics()->drawRect((int)0,this->_top,this->_width,(int)1);
		HX_STACK_LINE(791)
		int _g = this->_cellTop = this->_top;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(791)
		this->_lastPosition = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIList_obj,initDraw,(void))

Void UIList_obj::resizeRefresh( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","resizeRefresh",0x5a38e95f,"com.danielfreeman.madcomponents.UIList.resizeRefresh","com/danielfreeman/madcomponents/UIList.hx",798,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_LINE(798)
		if (((this->_refresh != null()))){
			HX_STACK_LINE(799)
			this->_slider->get_graphics()->beginFill((  (((this->_colours->length > (int)0))) ? int(this->_colours->__get((this->_colours->length - (int)1))) : int((int)16382457) ),null());
			HX_STACK_LINE(800)
			this->_slider->get_graphics()->drawRect((int)0,-((int)40),this->get_attributes()->width,(int)40);
			HX_STACK_LINE(801)
			Float _g = this->_attributes->get_widthH();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(801)
			Float _g1 = this->_refresh->get_width();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(801)
			Float _g2 = (_g - _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(801)
			Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(801)
			this->_refresh->set_x(_g3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIList_obj,resizeRefresh,(void))

Void UIList_obj::clearCells( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","clearCells",0x13fcd1ac,"com.danielfreeman.madcomponents.UIList.clearCells","com/danielfreeman/madcomponents/UIList.hx",808,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_LINE(809)
		int i = this->_slider->get_numChildren();		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(810)
		while((true)){
			HX_STACK_LINE(810)
			int _g = --(i);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(810)
			if ((!(((_g >= (((  (((this->_search != null()))) ? int((int)2) : int((int)1) )) + ((  (((this->_refresh != null()))) ? int((int)1) : int((int)0) )))))))){
				HX_STACK_LINE(810)
				break;
			}
			HX_STACK_LINE(811)
			::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(811)
			child = hx::TCast< openfl::display::DisplayObject >::cast(this->_slider->getChildAt(i));
			HX_STACK_LINE(812)
			if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::IContainerUI >()))){
				HX_STACK_LINE(813)
				(hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(child))->__Field(HX_CSTRING("destructor"),true)();
			}
			HX_STACK_LINE(815)
			this->_slider->removeChildAt(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIList_obj,clearCells,(void))

bool UIList_obj::hasLines( Dynamic record){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","hasLines",0x0947a42d,"com.danielfreeman.madcomponents.UIList.hasLines","com/danielfreeman/madcomponents/UIList.hx",821,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(record,"record")
	HX_STACK_LINE(821)
	if ((::Reflect_obj::hasField(record,HX_CSTRING("_lines")))){
		HX_STACK_LINE(821)
		return (record->__Field(HX_CSTRING("_lines"),true) == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(821)
		return this->_lines;
	}
	HX_STACK_LINE(821)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,hasLines,return )

Void UIList_obj::drawCell( Float position,int count,Dynamic record){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","drawCell",0x5e1447ae,"com.danielfreeman.madcomponents.UIList.drawCell","com/danielfreeman/madcomponents/UIList.hx",827,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(record,"record")
		HX_STACK_LINE(828)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(828)
		if (((  ((!(::Std_obj::is(record,hx::ClassOf< ::String >())))) ? bool(::Reflect_obj::hasField(record,HX_CSTRING("_colour"))) : bool(false) ))){
			HX_STACK_LINE(828)
			_g = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(record->__Field(HX_CSTRING("_colour"),true));
		}
		else{
			HX_STACK_LINE(828)
			_g = (int)-1;
		}
		HX_STACK_LINE(828)
		this->drawSimpleCell(position,count,_g);
		HX_STACK_LINE(829)
		if (((  ((!(::Std_obj::is(record,hx::ClassOf< ::String >())))) ? bool(this->hasLines(record)) : bool(false) ))){
			HX_STACK_LINE(830)
			this->drawLines(position);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(UIList_obj,drawCell,(void))

Void UIList_obj::drawArrow( Float x,Float y){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","drawArrow",0xd5799e3d,"com.danielfreeman.madcomponents.UIList.drawArrow","com/danielfreeman/madcomponents/UIList.hx",835,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(836)
		this->_slider->get_graphics()->beginFill(this->_colour,null());
		HX_STACK_LINE(837)
		this->_slider->get_graphics()->moveTo(x,y);
		HX_STACK_LINE(838)
		this->_slider->get_graphics()->lineTo((x - (int)6),(y - (int)6));
		HX_STACK_LINE(839)
		if ((this->_attributes->get_style7())){
			HX_STACK_LINE(840)
			this->_slider->get_graphics()->lineTo((x - (int)6),((y - (int)6) + (int)3));
			HX_STACK_LINE(841)
			this->_slider->get_graphics()->lineTo((x - (int)3),y);
			HX_STACK_LINE(842)
			this->_slider->get_graphics()->lineTo((x - (int)6),((y + (int)6) - (int)3));
		}
		HX_STACK_LINE(844)
		this->_slider->get_graphics()->lineTo((x - (int)6),(y + (int)6));
		HX_STACK_LINE(845)
		this->_slider->get_graphics()->lineTo(x,y);
		HX_STACK_LINE(846)
		this->_slider->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIList_obj,drawArrow,(void))

Void UIList_obj::drawSimpleCell( Float position,int count,hx::Null< int >  __o_colour){
int colour = __o_colour.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","drawSimpleCell",0x8f298a00,"com.danielfreeman.madcomponents.UIList.drawSimpleCell","com/danielfreeman/madcomponents/UIList.hx",853,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_ARG(count,"count")
	HX_STACK_ARG(colour,"colour")
{
		HX_STACK_LINE(854)
		if (((bool((this->_colours->length > (int)1)) || bool((colour >= (int)0))))){
			HX_STACK_LINE(855)
			this->_slider->get_graphics()->beginFill((  (((colour >= (int)0))) ? int(colour) : int(this->_colours->__get((hx::Mod(count,((this->_colours->length - (int)1))) + (int)1))) ),null());
			HX_STACK_LINE(856)
			int _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(856)
			if ((this->_attributes->get_style7())){
				HX_STACK_LINE(856)
				_g = (int)1;
			}
			else{
				HX_STACK_LINE(856)
				_g = (int)2;
			}
			HX_STACK_LINE(856)
			Float _g1 = (this->_lastPosition + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(856)
			int _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(856)
			if ((this->_attributes->get_style7())){
				HX_STACK_LINE(856)
				_g2 = (int)0;
			}
			else{
				HX_STACK_LINE(856)
				_g2 = (int)1;
			}
			HX_STACK_LINE(856)
			Float _g3 = ((position - this->_lastPosition) - _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(856)
			this->_slider->get_graphics()->drawRect((int)0,_g1,this->_width,_g3);
			HX_STACK_LINE(857)
			this->_slider->get_graphics()->endFill();
		}
		HX_STACK_LINE(859)
		this->_slider->get_graphics()->beginFill(this->_colour,null());
		HX_STACK_LINE(860)
		Float startLine;		HX_STACK_VAR(startLine,"startLine");
		HX_STACK_LINE(860)
		if ((this->_attributes->get_style7())){
			HX_STACK_LINE(860)
			startLine = this->_lineGap;
		}
		else{
			HX_STACK_LINE(860)
			startLine = (int)0;
		}
		HX_STACK_LINE(861)
		this->_slider->get_graphics()->drawRect(startLine,position,(this->_width - startLine),(int)1);
		HX_STACK_LINE(862)
		this->_slider->get_graphics()->endFill();
		HX_STACK_LINE(863)
		this->dealWithArrows(count,position);
		HX_STACK_LINE(864)
		this->_lastPosition = this->toPixelBoundary(hx::ObjectPtr<OBJ_>(this),(int)0,position)->y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(UIList_obj,drawSimpleCell,(void))

Void UIList_obj::dealWithArrows( int count,Float position){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","dealWithArrows",0x29a984e4,"com.danielfreeman.madcomponents.UIList.dealWithArrows","com/danielfreeman/madcomponents/UIList.hx",869,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(position,"position")
		HX_STACK_LINE(869)
		if (((bool(this->_arrows) && bool(((  (((this->_header > (int)0))) ? bool((count >= this->_header)) : bool((count < (this->_count + this->_header))) )))))){
			HX_STACK_LINE(870)
			Float _g = this->_attributes->get_paddingH();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(870)
			Float _g1 = (this->_width - _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(870)
			this->drawArrow(_g1,(Float(((this->_lastPosition + position))) / Float((int)2)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIList_obj,dealWithArrows,(void))

Void UIList_obj::drawLines( Float position){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","drawLines",0x24ec0273,"com.danielfreeman.madcomponents.UIList.drawLines","com/danielfreeman/madcomponents/UIList.hx",878,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_LINE(878)
		if ((::Std_obj::is(this->_cell,hx::ClassOf< ::com::danielfreeman::madcomponents::UIForm >()))){
			HX_STACK_LINE(879)
			this->_slider->get_graphics()->beginFill(this->_colour,null());
			HX_STACK_LINE(880)
			Array< Float > positions = (hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(this->_cell))->get_positions();		HX_STACK_VAR(positions,"positions");
			HX_STACK_LINE(881)
			{
				HX_STACK_LINE(881)
				int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(881)
				int _g = positions->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(881)
				while((true)){
					HX_STACK_LINE(881)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(881)
						break;
					}
					HX_STACK_LINE(881)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(882)
					Float _g2 = this->_rendererAttributes->get_paddingH();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(882)
					Float _g11 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(882)
					Float _g21 = ((this->_cell->__Field(HX_CSTRING("x"),true) + positions->__get(i)) - _g11);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(882)
					this->_slider->get_graphics()->drawRect(_g21,this->_cellTop,(int)1,(position - this->_cellTop));
				}
			}
			HX_STACK_LINE(884)
			this->_slider->get_graphics()->endFill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,drawLines,(void))

::openfl::display::DisplayObject UIList_obj::pressButton( hx::Null< bool >  __o_show){
bool show = __o_show.Default(true);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","pressButton",0x7ac412ed,"com.danielfreeman.madcomponents.UIList.pressButton","com/danielfreeman/madcomponents/UIList.hx",891,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(show,"show")
{
		HX_STACK_LINE(892)
		this->_scrollBarLayer->get_graphics()->clear();
		HX_STACK_LINE(893)
		this->clearPressed();
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIList_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIList.hx",894,0x418b0955)
				{
					struct _Function_2_1{
						inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIList_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIList.hx",894,0x418b0955)
							{
								HX_STACK_LINE(894)
								Float _g = __this->_slider->get_mouseY();		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(894)
								return (_g < __this->_top);
							}
							return null();
						}
					};
					HX_STACK_LINE(894)
					return (  ((!((!(__this->_simple))))) ? bool(_Function_2_1::Block(__this)) : bool(true) );
				}
				return null();
			}
		};
		HX_STACK_LINE(894)
		if (((  ((!(show))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(895)
			this->doSearchHit();
		}
		HX_STACK_LINE(897)
		this->illuminate((int)-1,!(show),show);
		HX_STACK_LINE(898)
		return this->_pressButton;
	}
}


bool UIList_obj::doClickRow( hx::Null< bool >  __o_dispatch){
bool dispatch = __o_dispatch.Default(true);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","doClickRow",0x55545745,"com.danielfreeman.madcomponents.UIList.doClickRow","com/danielfreeman/madcomponents/UIList.hx",902,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dispatch,"dispatch")
{
		HX_STACK_LINE(903)
		this->_highlight->get_graphics()->clear();
		HX_STACK_LINE(904)
		this->_showPressed = true;
		HX_STACK_LINE(905)
		this->illuminate((int)-1,dispatch,null());
		HX_STACK_LINE(906)
		return (bool((bool(dispatch) && bool((this->_pressedCell >= (int)0)))) && bool((this->_pressedCell < this->_count)));
	}
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,doClickRow,return )

Void UIList_obj::pressedCellLimits( Dynamic groupDetail){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","pressedCellLimits",0x4d49ac74,"com.danielfreeman.madcomponents.UIList.pressedCellLimits","com/danielfreeman/madcomponents/UIList.hx",911,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_ARG(groupDetail,"groupDetail")
		HX_STACK_LINE(911)
		if (((bool((this->_pressedCell < this->_header)) || bool((this->_pressedCell >= this->_count))))){
			HX_STACK_LINE(912)
			this->_pressedCell = this->_saveIndex;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,pressedCellLimits,(void))

bool UIList_obj::highlightForIndex( int rowIndex){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","highlightForIndex",0x8e6250b5,"com.danielfreeman.madcomponents.UIList.highlightForIndex","com/danielfreeman/madcomponents/UIList.hx",917,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rowIndex,"rowIndex")
	HX_STACK_LINE(918)
	Dynamic rowData = this->_data->__GetItem(rowIndex);		HX_STACK_VAR(rowData,"rowData");
	HX_STACK_LINE(919)
	if ((::Reflect_obj::hasField(rowData,HX_CSTRING("_highlight")))){
		HX_STACK_LINE(920)
		return (rowData->__Field(HX_CSTRING("_highlight"),true) == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(923)
		return this->_highlightPressed;
	}
	HX_STACK_LINE(919)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,highlightForIndex,return )

Void UIList_obj::illuminate( hx::Null< int >  __o_pressedCell,hx::Null< bool >  __o_dispatch,hx::Null< bool >  __o_show){
int pressedCell = __o_pressedCell.Default(-1);
bool dispatch = __o_dispatch.Default(true);
bool show = __o_show.Default(true);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","illuminate",0x4d25ddd4,"com.danielfreeman.madcomponents.UIList.illuminate","com/danielfreeman/madcomponents/UIList.hx",928,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pressedCell,"pressedCell")
	HX_STACK_ARG(dispatch,"dispatch")
	HX_STACK_ARG(show,"show")
{
		HX_STACK_LINE(929)
		Float tweak = 1.0;		HX_STACK_VAR(tweak,"tweak");
		HX_STACK_LINE(930)
		Float sliderMouseY;		HX_STACK_VAR(sliderMouseY,"sliderMouseY");
		HX_STACK_LINE(930)
		if ((this->_slider->get_visible())){
			HX_STACK_LINE(930)
			sliderMouseY = this->_slider->get_mouseY();
		}
		else{
			HX_STACK_LINE(930)
			Float _g = this->get_mouseY();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(930)
			sliderMouseY = (_g - this->_sliderPosition);
		}
		HX_STACK_LINE(931)
		if (((bool((this->_pressButton == null())) && bool(this->_clickRow)))){
			HX_STACK_LINE(932)
			if (((bool((bool(this->_autoLayout) && bool(!(this->_simple)))) && bool((sliderMouseY > this->_top))))){
				HX_STACK_LINE(933)
				int _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(933)
				if (((pressedCell >= (int)0))){
					HX_STACK_LINE(933)
					_g1 = pressedCell;
				}
				else{
					HX_STACK_LINE(933)
					_g1 = this->autoLayoutPressedCell(sliderMouseY);
				}
				HX_STACK_LINE(933)
				this->_pressedCell = _g1;
				HX_STACK_LINE(934)
				this->pressedCellLimits(null());
				HX_STACK_LINE(935)
				if (((bool((bool((this->_row != null())) && bool((this->_pressedCell >= this->_header)))) && bool((this->_pressedCell < this->_count))))){
					HX_STACK_LINE(937)
					if (((  ((show)) ? bool(this->highlightForIndex(this->_pressedCell)) : bool(false) ))){
						HX_STACK_LINE(938)
						this->_highlight->get_graphics()->beginFill(this->_highlightColour,null());
						HX_STACK_LINE(939)
						Float _g2 = this->_row->get_y();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(939)
						Float _g3 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(939)
						Float _g4 = (_g2 - _g3);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(939)
						Float _g5 = (_g4 + tweak);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(939)
						Float _g6 = this->_row->get_height();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(939)
						Float _g7 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(939)
						Float _g8 = ((int)2 * _g7);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(939)
						Float _g9 = (_g6 + _g8);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(939)
						Float _g10 = (_g9 - tweak);		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(939)
						this->_highlight->get_graphics()->drawRect((int)0,_g5,this->_width,_g10);
						HX_STACK_LINE(941)
						this->_highlight->get_graphics()->endFill();
					}
					HX_STACK_LINE(943)
					this->activate(dispatch);
				}
			}
			else{
				HX_STACK_LINE(947)
				int _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(947)
				if (((pressedCell >= (int)0))){
					HX_STACK_LINE(947)
					_g11 = pressedCell;
				}
				else{
					HX_STACK_LINE(947)
					_g11 = ::Math_obj::floor((Float(((sliderMouseY - this->_top))) / Float(this->_cellHeight)));
				}
				HX_STACK_LINE(947)
				this->_pressedCell = _g11;
				HX_STACK_LINE(948)
				this->pressedCellLimits(null());
				HX_STACK_LINE(949)
				if (((bool((this->_pressedCell >= this->_header)) && bool((this->_pressedCell < this->_count))))){
					HX_STACK_LINE(951)
					if (((  ((show)) ? bool(this->highlightForIndex(this->_pressedCell)) : bool(false) ))){
						HX_STACK_LINE(952)
						this->_highlight->get_graphics()->beginFill(this->_highlightColour,null());
						HX_STACK_LINE(953)
						this->_highlight->get_graphics()->drawRect((int)0,((this->_top + (this->_pressedCell * this->_cellHeight)) + tweak),this->_width,(this->_cellHeight - tweak));
						HX_STACK_LINE(954)
						this->_highlight->get_graphics()->endFill();
					}
					HX_STACK_LINE(956)
					this->activate(dispatch);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(UIList_obj,illuminate,(void))

int UIList_obj::autoLayoutPressedCell( Float y){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","autoLayoutPressedCell",0xd9215583,"com.danielfreeman.madcomponents.UIList.autoLayoutPressedCell","com/danielfreeman/madcomponents/UIList.hx",965,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(966)
	{
		HX_STACK_LINE(966)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(966)
		int _g = this->_count;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(966)
		while((true)){
			HX_STACK_LINE(966)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(966)
				break;
			}
			HX_STACK_LINE(966)
			int l = (_g1)++;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(967)
			::String _g2 = ::Std_obj::string(l);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(967)
			::String _g11 = (HX_CSTRING("label_") + _g2);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(967)
			::openfl::display::DisplayObject _g21 = this->_slider->getChildByName(_g11);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(967)
			this->_row = _g21;
			struct _Function_3_1{
				inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIList_obj > __this,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIList.hx",968,0x418b0955)
					{
						HX_STACK_LINE(968)
						Float _g3 = __this->_row->get_y();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(968)
						Float _g4 = __this->_row->get_height();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(968)
						Float _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(968)
						Float _g6 = __this->_attributes->get_paddingV();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(968)
						Float _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(968)
						return (_g7 > y);
					}
					return null();
				}
			};
			HX_STACK_LINE(968)
			if (((  (((this->_row != null()))) ? bool(_Function_3_1::Block(this,y)) : bool(false) ))){
				HX_STACK_LINE(969)
				return l;
			}
		}
	}
	HX_STACK_LINE(972)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,autoLayoutPressedCell,return )

Void UIList_obj::activate( hx::Null< bool >  __o_dispatch){
bool dispatch = __o_dispatch.Default(true);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","activate",0xed99979b,"com.danielfreeman.madcomponents.UIList.activate","com/danielfreeman/madcomponents/UIList.hx",978,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dispatch,"dispatch")
{
		HX_STACK_LINE(979)
		if ((this->_classic)){
			HX_STACK_LINE(980)
			this->_touchTimer->stop();
			HX_STACK_LINE(981)
			this->_dragTimer->stop();
			HX_STACK_LINE(982)
			this->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
			HX_STACK_LINE(983)
			this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null(),null(),null());
			HX_STACK_LINE(984)
			this->_clickTimer->stop();
			HX_STACK_LINE(985)
			this->_clickTimer->reset();
			HX_STACK_LINE(986)
			this->_clickTimer->start();
		}
		HX_STACK_LINE(990)
		this->_rowClick = true;
		HX_STACK_LINE(991)
		if ((dispatch)){
			HX_STACK_LINE(998)
			::openfl::events::Event _g = ::openfl::events::Event_obj::__new((  ((this->_classic)) ? ::String(HX_CSTRING("clicked")) : ::String(HX_CSTRING("clickStart")) ),true,true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(998)
			this->dispatchEvent(_g);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,activate,(void))

Void UIList_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","mouseDown",0xd6a1a03f,"com.danielfreeman.madcomponents.UIList.mouseDown","com/danielfreeman/madcomponents/UIList.hx",1003,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1004)
		this->_saveIndex = this->_pressedCell;
		HX_STACK_LINE(1005)
		this->_rowClick = false;
		HX_STACK_LINE(1006)
		this->super::mouseDown(event);
	}
return null();
}


Void UIList_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","mouseUp",0x156f6cf8,"com.danielfreeman.madcomponents.UIList.mouseUp","com/danielfreeman/madcomponents/UIList.hx",1010,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1011)
		if (((bool(!(this->_classic)) && bool(this->_rowClick)))){
			HX_STACK_LINE(1012)
			if ((!(this->_showPressed))){
				HX_STACK_LINE(1013)
				this->clearPressed();
			}
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIList_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIList.hx",1015,0x418b0955)
					{
						HX_STACK_LINE(1015)
						Float _g = ::Math_obj::abs(__this->_delta);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1015)
						return (_g > 2.0);
					}
					return null();
				}
			};
			HX_STACK_LINE(1015)
			if (((  ((!(((this->_touchTimer->currentCount < ::com::danielfreeman::madcomponents::UIList_obj::TOUCH_THRESHOLD))))) ? bool(_Function_2_1::Block(this)) : bool(true) ))){
				HX_STACK_LINE(1016)
				this->doCancel();
			}
			else{
				HX_STACK_LINE(1019)
				this->dispatchClickedEnd();
			}
			HX_STACK_LINE(1021)
			this->_rowClick = false;
		}
		HX_STACK_LINE(1023)
		this->super::mouseUp(event);
	}
return null();
}


Void UIList_obj::doCancel( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","doCancel",0x5438ef4d,"com.danielfreeman.madcomponents.UIList.doCancel","com/danielfreeman/madcomponents/UIList.hx",1027,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1028)
		this->_pressedCell = this->_saveIndex;
		HX_STACK_LINE(1029)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("listClickCancel"),true,true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1029)
		this->dispatchEvent(_g);
		HX_STACK_LINE(1030)
		this->_highlight->get_graphics()->clear();
		HX_STACK_LINE(1031)
		if (((bool(this->_showPressed) && bool((this->_pressedCell >= (int)0))))){
			HX_STACK_LINE(1032)
			this->illuminate(this->_pressedCell,false,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIList_obj,doCancel,(void))

Void UIList_obj::touchCancel( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","touchCancel",0xee3537b1,"com.danielfreeman.madcomponents.UIList.touchCancel","com/danielfreeman/madcomponents/UIList.hx",1037,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1038)
		this->super::touchCancel();
		HX_STACK_LINE(1039)
		this->clearPressed();
		HX_STACK_LINE(1040)
		if (((bool(!(this->_classic)) && bool(this->_rowClick)))){
			HX_STACK_LINE(1042)
			this->doCancel();
			HX_STACK_LINE(1043)
			this->_rowClick = false;
		}
	}
return null();
}


int UIList_obj::get_index( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","get_index",0xe99ce681,"com.danielfreeman.madcomponents.UIList.get_index","com/danielfreeman/madcomponents/UIList.hx",1051,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1051)
	return this->_pressedCell;
}


HX_DEFINE_DYNAMIC_FUNC0(UIList_obj,get_index,return )

Dynamic UIList_obj::get_row( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","get_row",0x7bc823c9,"com.danielfreeman.madcomponents.UIList.get_row","com/danielfreeman/madcomponents/UIList.hx",1058,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1058)
	if (((this->_pressedCell >= (int)0))){
		HX_STACK_LINE(1058)
		return this->_filteredData->__GetItem(this->_pressedCell);
	}
	else{
		HX_STACK_LINE(1058)
		return null();
	}
	HX_STACK_LINE(1058)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIList_obj,get_row,return )

Void UIList_obj::clickUp( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","clickUp",0x4f28e1db,"com.danielfreeman.madcomponents.UIList.clickUp","com/danielfreeman/madcomponents/UIList.hx",1064,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1065)
		if ((!(this->_simple))){
			HX_STACK_LINE(1066)
			this->super::clickUp(event);
		}
		HX_STACK_LINE(1067)
		if ((this->_clickRow)){
			HX_STACK_LINE(1068)
			if ((!(this->_showPressed))){
				HX_STACK_LINE(1069)
				this->clearPressed();
			}
			HX_STACK_LINE(1071)
			this->dispatchClickedEnd();
		}
		HX_STACK_LINE(1073)
		this->_scrollBarLayer->get_graphics()->clear();
	}
return null();
}


Void UIList_obj::customRenderers( Dynamic value,hx::Null< Float >  __o_position){
Float position = __o_position.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","customRenderers",0x786480f7,"com.danielfreeman.madcomponents.UIList.customRenderers","com/danielfreeman/madcomponents/UIList.hx",1079,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(position,"position")
{
		HX_STACK_LINE(1081)
		if (((position < (int)0))){
			HX_STACK_LINE(1082)
			Float _g = this->_attributes->get_paddingV();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1082)
			position = _g;
		}
		HX_STACK_LINE(1084)
		this->_count = (int)0;
		HX_STACK_LINE(1085)
		{
			HX_STACK_LINE(1085)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1085)
			while((true)){
				HX_STACK_LINE(1085)
				if ((!(((_g < value->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(1085)
					break;
				}
				HX_STACK_LINE(1085)
				Dynamic record = value->__GetItem(_g);		HX_STACK_VAR(record,"record");
				HX_STACK_LINE(1085)
				++(_g);
				HX_STACK_LINE(1086)
				this->customCell(record,position);
				HX_STACK_LINE(1087)
				Float _g1 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1087)
				Dynamic _g2 = (this->_cell->__Field(HX_CSTRING("height"),true) + _g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1087)
				hx::AddEq(position,_g2);
				HX_STACK_LINE(1088)
				position = this->toPixelBoundary(hx::ObjectPtr<OBJ_>(this),(int)0,position)->y;
				HX_STACK_LINE(1089)
				this->drawCell(position,this->_count,record);
				HX_STACK_LINE(1090)
				Float _g3 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1090)
				hx::AddEq(position,_g3);
				HX_STACK_LINE(1091)
				position = this->toPixelBoundary(hx::ObjectPtr<OBJ_>(this),(int)0,position)->y;
				HX_STACK_LINE(1092)
				(this->_count)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIList_obj,customRenderers,(void))

::openfl::display::DisplayObject UIList_obj::newRow( ::MadXML rendererXML){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","newRow",0x61f07782,"com.danielfreeman.madcomponents.UIList.newRow","com/danielfreeman/madcomponents/UIList.hx",1099,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rendererXML,"rendererXML")
	HX_STACK_LINE(1100)
	::openfl::display::DisplayObject result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1102)
	::String _g = rendererXML->get_name();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1102)
	if ((::com::danielfreeman::madcomponents::UI_obj::isForm(_g))){
		HX_STACK_LINE(1103)
		::com::danielfreeman::madcomponents::UIForm _g1 = ::com::danielfreeman::madcomponents::UIForm_obj::__new(this->_slider,rendererXML,this->_rendererAttributes,true,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1103)
		result = _g1;
	}
	else{
		HX_STACK_LINE(1106)
		::com::danielfreeman::madcomponents::Attributes _g2 = this->_rendererAttributes->copy(null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1106)
		::openfl::display::DisplayObject _g3 = ::com::danielfreeman::madcomponents::UI_obj::containers(this->_slider,rendererXML,_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1106)
		result = _g3;
	}
	HX_STACK_LINE(1108)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,newRow,return )

::com::danielfreeman::madcomponents::UILabel UIList_obj::newLabel( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","newLabel",0x9ae6cd5c,"com.danielfreeman.madcomponents.UIList.newLabel","com/danielfreeman/madcomponents/UIList.hx",1114,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1115)
	Float _g = this->_attributes->get_paddingH();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1115)
	return ::com::danielfreeman::madcomponents::UILabel_obj::__new(this->_slider,_g,(int)0,HX_CSTRING(""),this->FORMAT);
}


HX_DEFINE_DYNAMIC_FUNC0(UIList_obj,newLabel,return )

Void UIList_obj::customCell( Dynamic record,Float position){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","customCell",0x9a9747db,"com.danielfreeman.madcomponents.UIList.customCell","com/danielfreeman/madcomponents/UIList.hx",1121,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_ARG(record,"record")
		HX_STACK_ARG(position,"position")
		HX_STACK_LINE(1127)
		::MadXML _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1127)
		if ((::Reflect_obj::hasField(record,HX_CSTRING("_renderer")))){
			HX_STACK_LINE(1127)
			_g = ::MadXML_obj::parse(record->__Field(HX_CSTRING("_renderer"),true));
		}
		else{
			HX_STACK_LINE(1127)
			_g = this->_renderer;
		}
		HX_STACK_LINE(1127)
		::openfl::display::DisplayObject _g1 = this->newRow(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1127)
		this->_cell = _g1;
		HX_STACK_LINE(1128)
		Float _g2 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1128)
		Float _g3 = (this->_cellRendererLeft + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1128)
		this->_cell->__FieldRef(HX_CSTRING("x")) = _g3;
		HX_STACK_LINE(1129)
		int _g4 = ::Math_obj::ceil(position);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(1129)
		this->_cell->__FieldRef(HX_CSTRING("y")) = _g4;
		HX_STACK_LINE(1130)
		if ((::Std_obj::is(this->_cell,hx::ClassOf< ::openfl::display::Sprite >()))){
			HX_STACK_LINE(1131)
			this->_cell->__FieldRef(HX_CSTRING("mouseChildren")) = false;
		}
		HX_STACK_LINE(1133)
		::String _g5 = ::Std_obj::string(this->_count);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(1133)
		::String _g6 = (HX_CSTRING("label_") + _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(1133)
		::String _g7 = (_g6 + this->_suffix);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(1133)
		this->_cell->__FieldRef(HX_CSTRING("name")) = _g7;
		HX_STACK_LINE(1134)
		this->fillInValues(this->_cell,record);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIList_obj,customCell,(void))

Void UIList_obj::fillInValues( ::openfl::display::DisplayObject cell,Dynamic record){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","fillInValues",0xbd672332,"com.danielfreeman.madcomponents.UIList.fillInValues","com/danielfreeman/madcomponents/UIList.hx",1140,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cell,"cell")
		HX_STACK_ARG(record,"record")
		HX_STACK_LINE(1141)
		::openfl::display::DisplayObject view;		HX_STACK_VAR(view,"view");
		HX_STACK_LINE(1142)
		if ((::Std_obj::is(record,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(1143)
			::openfl::display::DisplayObject _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1143)
			if ((::Std_obj::is(cell,hx::ClassOf< ::com::danielfreeman::madcomponents::IContainerUI >()))){
				HX_STACK_LINE(1143)
				_g = (hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(cell))->findViewById(this->_labelField,null(),null());
			}
			else{
				HX_STACK_LINE(1143)
				_g = cell;
			}
			HX_STACK_LINE(1143)
			view = _g;
			HX_STACK_LINE(1144)
			if ((::Std_obj::is(view,hx::ClassOf< ::com::danielfreeman::madcomponents::UILabel >()))){
				HX_STACK_LINE(1145)
				(hx::TCast< com::danielfreeman::madcomponents::UILabel >::cast(view))->set_xmlText(record);
			}
			else{
				HX_STACK_LINE(1147)
				if ((::Std_obj::is(view,hx::ClassOf< ::com::danielfreeman::madcomponents::IComponentUI >()))){
					HX_STACK_LINE(1148)
					(hx::TCast< com::danielfreeman::madcomponents::IComponentUI >::cast(view))->__Field(HX_CSTRING("set_text"),true)(record);
				}
			}
		}
		else{
			HX_STACK_LINE(1152)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1152)
			Array< ::String > _g1 = ::Reflect_obj::fields(record);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1152)
			while((true)){
				HX_STACK_LINE(1152)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(1152)
					break;
				}
				HX_STACK_LINE(1152)
				::String id = _g1->__get(_g);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(1152)
				++(_g);
				HX_STACK_LINE(1153)
				::openfl::display::DisplayObject _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1153)
				if ((::Std_obj::is(cell,hx::ClassOf< ::com::danielfreeman::madcomponents::IContainerUI >()))){
					HX_STACK_LINE(1153)
					_g11 = (hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(cell))->findViewById(id,null(),null());
				}
				else{
					HX_STACK_LINE(1153)
					if (((id == this->_labelField))){
						HX_STACK_LINE(1153)
						_g11 = cell;
					}
					else{
						HX_STACK_LINE(1153)
						_g11 = null();
					}
				}
				HX_STACK_LINE(1153)
				view = _g11;
				HX_STACK_LINE(1154)
				if (((view != null()))){
					HX_STACK_LINE(1155)
					::String value = ::Reflect_obj::field(record,id);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(1156)
					if ((::Std_obj::is(view,hx::ClassOf< ::com::danielfreeman::madcomponents::UILabel >()))){
						HX_STACK_LINE(1157)
						(hx::TCast< com::danielfreeman::madcomponents::UILabel >::cast(view))->set_xmlText(value);
					}
					else{
						HX_STACK_LINE(1170)
						if ((::Std_obj::is(view,hx::ClassOf< ::com::danielfreeman::madcomponents::IComponentUI >()))){
							HX_STACK_LINE(1171)
							(hx::TCast< com::danielfreeman::madcomponents::IComponentUI >::cast(view))->__Field(HX_CSTRING("set_text"),true)(value);
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIList_obj,fillInValues,(void))

bool UIList_obj::set_clickRow( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","set_clickRow",0x977d6217,"com.danielfreeman.madcomponents.UIList.set_clickRow","com/danielfreeman/madcomponents/UIList.hx",1180,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1181)
	this->_clickRow = value;
	HX_STACK_LINE(1182)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,set_clickRow,return )

::com::danielfreeman::madcomponents::Model UIList_obj::get_model( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","get_model",0x37e06f18,"com.danielfreeman.madcomponents.UIList.get_model","com/danielfreeman/madcomponents/UIList.hx",1188,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1188)
	return this->_model;
}


Void UIList_obj::searchHandler( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","searchHandler",0x638fd05a,"com.danielfreeman.madcomponents.UIList.searchHandler","com/danielfreeman/madcomponents/UIList.hx",1194,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1195)
		::String _g = this->_search->get_text().toLowerCase();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1195)
		this->filter(_g,HX_CSTRING(""),false,this->_begins);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,searchHandler,(void))

Void UIList_obj::doSearchHit( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","doSearchHit",0x191493d8,"com.danielfreeman.madcomponents.UIList.doSearchHit","com/danielfreeman/madcomponents/UIList.hx",1202,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1203)
		this->super::doSearchHit();
		HX_STACK_LINE(1204)
		if (((  ((::Std_obj::is(this->_pressButton,hx::ClassOf< ::openfl::display::InteractiveObject >()))) ? bool(!((hx::TCast< openfl::display::InteractiveObject >::cast(this->_pressButton))->get_mouseEnabled())) : bool(false) ))){
			HX_STACK_LINE(1205)
			this->_pressButton = null();
		}
	}
return null();
}


::openfl::display::DisplayObject UIList_obj::findViewById( ::String id,hx::Null< int >  __o_row,hx::Null< int >  __o_group){
int row = __o_row.Default(-1);
int group = __o_group.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","findViewById",0x4c806bd8,"com.danielfreeman.madcomponents.UIList.findViewById","com/danielfreeman/madcomponents/UIList.hx",1214,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(group,"group")
{
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIList_obj > __this,::String &id){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIList.hx",1214,0x418b0955)
				{
					HX_STACK_LINE(1214)
					::String _g = __this->_search->get_name();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1214)
					return (_g == id);
				}
				return null();
			}
		};
		HX_STACK_LINE(1214)
		if (((  (((this->_search != null()))) ? bool(_Function_1_1::Block(this,id)) : bool(false) ))){
			HX_STACK_LINE(1215)
			return this->_search;
		}
		else{
			HX_STACK_LINE(1217)
			if ((this->_simple)){
				HX_STACK_LINE(1218)
				::String _g1 = ::Std_obj::string(row);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1218)
				::String _g2 = ((id + HX_CSTRING("_")) + _g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1218)
				return this->_slider->getChildByName(_g2);
			}
			else{
				HX_STACK_LINE(1220)
				if (((row >= (int)0))){
					HX_STACK_LINE(1221)
					::String _g3 = ::Std_obj::string(row);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1221)
					::String _g4 = (HX_CSTRING("label_") + _g3);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(1221)
					::com::danielfreeman::madcomponents::IContainerUI container;		HX_STACK_VAR(container,"container");
					HX_STACK_LINE(1221)
					container = hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(this->_slider->getChildByName(_g4));
					HX_STACK_LINE(1222)
					if (((container != null()))){
						HX_STACK_LINE(1222)
						return container->findViewById(id,row,group);
					}
					else{
						HX_STACK_LINE(1222)
						return null();
					}
				}
				else{
					HX_STACK_LINE(1224)
					return null();
				}
			}
		}
		HX_STACK_LINE(1214)
		return null();
	}
}


::com::danielfreeman::madcomponents::IContainerUI UIList_obj::get_rowContainer( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","get_rowContainer",0x5559f038,"com.danielfreeman.madcomponents.UIList.get_rowContainer","com/danielfreeman/madcomponents/UIList.hx",1230,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1230)
	return hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(this->_slider->getChildAt((this->_pressedCell + (int)1)));
}


HX_DEFINE_DYNAMIC_FUNC0(UIList_obj,get_rowContainer,return )

Void UIList_obj::mouseMove( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","mouseMove",0xdc948aee,"com.danielfreeman.madcomponents.UIList.mouseMove","com/danielfreeman/madcomponents/UIList.hx",1237,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UIList_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIList.hx",1238,0x418b0955)
				{
					HX_STACK_LINE(1238)
					Float _g = __this->get_sliderY();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1238)
					return (_g > (int)70);
				}
				return null();
			}
		};
		HX_STACK_LINE(1238)
		if (((  (((bool((this->_refresh != null())) && bool(!(this->_refreshState))))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(1239)
			this->_refresh->changeState(::com::danielfreeman::madcomponents::UIList_obj::REFRESH_TEXT,true);
			HX_STACK_LINE(1240)
			if (((this->_model != null()))){
				HX_STACK_LINE(1241)
				this->_model->refresh();
			}
			HX_STACK_LINE(1243)
			this->_refreshState = true;
			HX_STACK_LINE(1244)
			::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(HX_CSTRING("pullRefresh"),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1244)
			this->dispatchEvent(_g1);
		}
		HX_STACK_LINE(1246)
		this->super::mouseMove(event);
		HX_STACK_LINE(1247)
		if (((bool((bool(this->_rowClick) && bool((this->_distance < 8.0)))) && bool((this->_touchTimer->currentCount == ::com::danielfreeman::madcomponents::UIList_obj::LONG_CLICK_THRESHOLD))))){
			HX_STACK_LINE(1248)
			::openfl::events::Event _g2 = ::openfl::events::Event_obj::__new(HX_CSTRING("longClick"),null(),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1248)
			this->dispatchEvent(_g2);
		}
	}
return null();
}


Void UIList_obj::stopMovement( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","stopMovement",0x52559339,"com.danielfreeman.madcomponents.UIList.stopMovement","com/danielfreeman/madcomponents/UIList.hx",1256,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1257)
		this->super::stopMovement();
		HX_STACK_LINE(1258)
		this->_refreshState = false;
	}
return null();
}


int UIList_obj::get_length( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","get_length",0x8ac14a97,"com.danielfreeman.madcomponents.UIList.get_length","com/danielfreeman/madcomponents/UIList.hx",1263,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1263)
	return this->_count;
}


HX_DEFINE_DYNAMIC_FUNC0(UIList_obj,get_length,return )

::openfl::geom::Rectangle UIList_obj::rowRectangle( Float y){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","rowRectangle",0x265a4e9d,"com.danielfreeman.madcomponents.UIList.rowRectangle","com/danielfreeman/madcomponents/UIList.hx",1267,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(1268)
	{
		HX_STACK_LINE(1268)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1268)
		int _g = this->_slider->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1268)
		int _g2 = (_g - (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1268)
		while((true)){
			HX_STACK_LINE(1268)
			if ((!(((_g1 < _g2))))){
				HX_STACK_LINE(1268)
				break;
			}
			HX_STACK_LINE(1268)
			int l = (_g1)++;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(1269)
			::openfl::display::DisplayObject row = this->_slider->getChildAt((l + (int)1));		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(1270)
			Float _g11 = row->get_y();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1270)
			Float _g21 = row->get_height();		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(1270)
			Float _g3 = (_g11 + _g21);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1270)
			Float _g4 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1270)
			Float _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1270)
			if (((_g5 > y))){
				HX_STACK_LINE(1271)
				if ((this->_simple)){
					HX_STACK_LINE(1272)
					Float _g6 = row->get_y();		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(1272)
					Float _g7 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(1272)
					Float _g8 = ((int)2 * _g7);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(1272)
					Float _g9 = (_g6 - _g8);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(1272)
					Float _g10 = row->get_height();		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(1272)
					Float _g111 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g111,"_g111");
					HX_STACK_LINE(1272)
					Float _g12 = ((int)4 * _g111);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(1272)
					Float _g13 = (_g10 + _g12);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(1272)
					return ::openfl::geom::Rectangle_obj::__new((int)0,_g9,this->_attributes->width,_g13);
				}
				else{
					HX_STACK_LINE(1275)
					Float _g14 = row->get_y();		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(1275)
					Float _g15 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(1275)
					Float _g16 = (_g14 - _g15);		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(1275)
					Float _g17 = row->get_height();		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(1275)
					Float _g18 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(1275)
					Float _g19 = ((int)2 * _g18);		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(1275)
					Float _g20 = (_g17 + _g19);		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(1275)
					return ::openfl::geom::Rectangle_obj::__new((int)0,_g16,this->_attributes->width,_g20);
				}
			}
		}
	}
	HX_STACK_LINE(1279)
	return null();
}


bool UIList_obj::set_searchVisible( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","set_searchVisible",0x4323e865,"com.danielfreeman.madcomponents.UIList.set_searchVisible","com/danielfreeman/madcomponents/UIList.hx",1283,0x418b0955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1284)
	if (((this->_search != null()))){
		HX_STACK_LINE(1285)
		this->_search->set_visible(value);
		HX_STACK_LINE(1286)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1286)
		if ((value)){
			HX_STACK_LINE(1286)
			_g = this->_search->get_height();
		}
		else{
			HX_STACK_LINE(1286)
			_g = (int)0;
		}
		HX_STACK_LINE(1286)
		int _g1 = ::Math_obj::round(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1286)
		this->_top = _g1;
	}
	HX_STACK_LINE(1288)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIList_obj,set_searchVisible,return )

Void UIList_obj::clear( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","clear",0xc31ef4a5,"com.danielfreeman.madcomponents.UIList.clear","com/danielfreeman/madcomponents/UIList.hx",1293,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1293)
		this->set_data(Dynamic( Array_obj<Dynamic>::__new()));
	}
return null();
}


Void UIList_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIList","destructor",0x0f442121,"com.danielfreeman.madcomponents.UIList.destructor","com/danielfreeman/madcomponents/UIList.hx",1297,0x418b0955)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1298)
		if (((this->_search != null()))){
			HX_STACK_LINE(1299)
			this->_search->removeEventListener(::openfl::events::TextEvent_obj::TEXT_INPUT,this->searchHandler_dyn(),null());
			HX_STACK_LINE(1300)
			this->_search->destructor();
		}
		HX_STACK_LINE(1302)
		this->_highlightTimer->removeEventListener(::openfl::events::TimerEvent_obj::TIMER,this->clearHighlight_dyn(),null());
		HX_STACK_LINE(1303)
		this->super::destructor();
	}
return null();
}


::String UIList_obj::CLICK_START;

::String UIList_obj::CLICKED;

::String UIList_obj::CLICKED_END;

::String UIList_obj::CLICK_CANCEL;

::String UIList_obj::LONG_CLICK;

::String UIList_obj::REFRESH;

Float UIList_obj::ARROW;

Float UIList_obj::TOP;

Float UIList_obj::PULL_THRESHOLD;

int UIList_obj::LONG_CLICK_THRESHOLD;

int UIList_obj::HIGHLIGHT;

::String UIList_obj::PULL_DOWN_TEXT;

::String UIList_obj::REFRESH_TEXT;

int UIList_obj::TOUCH_THRESHOLD;


UIList_obj::UIList_obj()
{
}

void UIList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIList);
	HX_MARK_MEMBER_NAME(FORMAT,"FORMAT");
	HX_MARK_MEMBER_NAME(_renderer,"_renderer");
	HX_MARK_MEMBER_NAME(_simple,"_simple");
	HX_MARK_MEMBER_NAME(_count,"_count");
	HX_MARK_MEMBER_NAME(_cellHeight,"_cellHeight");
	HX_MARK_MEMBER_NAME(_pressedCell,"_pressedCell");
	HX_MARK_MEMBER_NAME(_highlight,"_highlight");
	HX_MARK_MEMBER_NAME(_clickRow,"_clickRow");
	HX_MARK_MEMBER_NAME(_cellTop,"_cellTop");
	HX_MARK_MEMBER_NAME(_cellRendererLeft,"_cellRendererLeft");
	HX_MARK_MEMBER_NAME(_colours,"_colours");
	HX_MARK_MEMBER_NAME(_suffix,"_suffix");
	HX_MARK_MEMBER_NAME(_font,"_font");
	HX_MARK_MEMBER_NAME(_model,"_model");
	HX_MARK_MEMBER_NAME(_search,"_search");
	HX_MARK_MEMBER_NAME(_top,"_top");
	HX_MARK_MEMBER_NAME(_rendererAttributes,"_rendererAttributes");
	HX_MARK_MEMBER_NAME(_field,"_field");
	HX_MARK_MEMBER_NAME(_begins,"_begins");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_filteredData,"_filteredData");
	HX_MARK_MEMBER_NAME(_sortBy,"_sortBy");
	HX_MARK_MEMBER_NAME(_sortMode,"_sortMode");
	HX_MARK_MEMBER_NAME(_row,"_row");
	HX_MARK_MEMBER_NAME(_lines,"_lines");
	HX_MARK_MEMBER_NAME(_cell,"_cell");
	HX_MARK_MEMBER_NAME(_refresh,"_refresh");
	HX_MARK_MEMBER_NAME(_refreshState,"_refreshState");
	HX_MARK_MEMBER_NAME(_showPressed,"_showPressed");
	HX_MARK_MEMBER_NAME(_textAlign,"_textAlign");
	HX_MARK_MEMBER_NAME(_highlightPressed,"_highlightPressed");
	HX_MARK_MEMBER_NAME(_rowClick,"_rowClick");
	HX_MARK_MEMBER_NAME(_highlightColour,"_highlightColour");
	HX_MARK_MEMBER_NAME(_labelField,"_labelField");
	HX_MARK_MEMBER_NAME(_highlightIsOn,"_highlightIsOn");
	HX_MARK_MEMBER_NAME(_saveIndex,"_saveIndex");
	HX_MARK_MEMBER_NAME(_header,"_header");
	HX_MARK_MEMBER_NAME(_arrows,"_arrows");
	HX_MARK_MEMBER_NAME(_lineGap,"_lineGap");
	HX_MARK_MEMBER_NAME(_lastPosition,"_lastPosition");
	HX_MARK_MEMBER_NAME(_highlightTimer,"_highlightTimer");
	::com::danielfreeman::madcomponents::UIScrollVertical_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(FORMAT,"FORMAT");
	HX_VISIT_MEMBER_NAME(_renderer,"_renderer");
	HX_VISIT_MEMBER_NAME(_simple,"_simple");
	HX_VISIT_MEMBER_NAME(_count,"_count");
	HX_VISIT_MEMBER_NAME(_cellHeight,"_cellHeight");
	HX_VISIT_MEMBER_NAME(_pressedCell,"_pressedCell");
	HX_VISIT_MEMBER_NAME(_highlight,"_highlight");
	HX_VISIT_MEMBER_NAME(_clickRow,"_clickRow");
	HX_VISIT_MEMBER_NAME(_cellTop,"_cellTop");
	HX_VISIT_MEMBER_NAME(_cellRendererLeft,"_cellRendererLeft");
	HX_VISIT_MEMBER_NAME(_colours,"_colours");
	HX_VISIT_MEMBER_NAME(_suffix,"_suffix");
	HX_VISIT_MEMBER_NAME(_font,"_font");
	HX_VISIT_MEMBER_NAME(_model,"_model");
	HX_VISIT_MEMBER_NAME(_search,"_search");
	HX_VISIT_MEMBER_NAME(_top,"_top");
	HX_VISIT_MEMBER_NAME(_rendererAttributes,"_rendererAttributes");
	HX_VISIT_MEMBER_NAME(_field,"_field");
	HX_VISIT_MEMBER_NAME(_begins,"_begins");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_filteredData,"_filteredData");
	HX_VISIT_MEMBER_NAME(_sortBy,"_sortBy");
	HX_VISIT_MEMBER_NAME(_sortMode,"_sortMode");
	HX_VISIT_MEMBER_NAME(_row,"_row");
	HX_VISIT_MEMBER_NAME(_lines,"_lines");
	HX_VISIT_MEMBER_NAME(_cell,"_cell");
	HX_VISIT_MEMBER_NAME(_refresh,"_refresh");
	HX_VISIT_MEMBER_NAME(_refreshState,"_refreshState");
	HX_VISIT_MEMBER_NAME(_showPressed,"_showPressed");
	HX_VISIT_MEMBER_NAME(_textAlign,"_textAlign");
	HX_VISIT_MEMBER_NAME(_highlightPressed,"_highlightPressed");
	HX_VISIT_MEMBER_NAME(_rowClick,"_rowClick");
	HX_VISIT_MEMBER_NAME(_highlightColour,"_highlightColour");
	HX_VISIT_MEMBER_NAME(_labelField,"_labelField");
	HX_VISIT_MEMBER_NAME(_highlightIsOn,"_highlightIsOn");
	HX_VISIT_MEMBER_NAME(_saveIndex,"_saveIndex");
	HX_VISIT_MEMBER_NAME(_header,"_header");
	HX_VISIT_MEMBER_NAME(_arrows,"_arrows");
	HX_VISIT_MEMBER_NAME(_lineGap,"_lineGap");
	HX_VISIT_MEMBER_NAME(_lastPosition,"_lastPosition");
	HX_VISIT_MEMBER_NAME(_highlightTimer,"_highlightTimer");
	::com::danielfreeman::madcomponents::UIScrollVertical_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"row") ) { return get_row(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_top") ) { return _top; }
		if (HX_FIELD_EQ(inName,"_row") ) { return _row; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return get_index(); }
		if (HX_FIELD_EQ(inName,"_font") ) { return _font; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		if (HX_FIELD_EQ(inName,"_cell") ) { return _cell; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { return get_header(); }
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		if (HX_FIELD_EQ(inName,"FORMAT") ) { return FORMAT; }
		if (HX_FIELD_EQ(inName,"_count") ) { return _count; }
		if (HX_FIELD_EQ(inName,"_model") ) { return _model; }
		if (HX_FIELD_EQ(inName,"_field") ) { return _field; }
		if (HX_FIELD_EQ(inName,"_lines") ) { return _lines; }
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		if (HX_FIELD_EQ(inName,"newRow") ) { return newRow_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_simple") ) { return _simple; }
		if (HX_FIELD_EQ(inName,"_suffix") ) { return _suffix; }
		if (HX_FIELD_EQ(inName,"_search") ) { return _search; }
		if (HX_FIELD_EQ(inName,"_begins") ) { return _begins; }
		if (HX_FIELD_EQ(inName,"_sortBy") ) { return _sortBy; }
		if (HX_FIELD_EQ(inName,"_header") ) { return _header; }
		if (HX_FIELD_EQ(inName,"_arrows") ) { return _arrows; }
		if (HX_FIELD_EQ(inName,"setData") ) { return setData_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"get_row") ) { return get_row_dyn(); }
		if (HX_FIELD_EQ(inName,"clickUp") ) { return clickUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_cellTop") ) { return _cellTop; }
		if (HX_FIELD_EQ(inName,"_colours") ) { return _colours; }
		if (HX_FIELD_EQ(inName,"_refresh") ) { return _refresh; }
		if (HX_FIELD_EQ(inName,"_lineGap") ) { return _lineGap; }
		if (HX_FIELD_EQ(inName,"setIndex") ) { return setIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"doLayout") ) { return doLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		if (HX_FIELD_EQ(inName,"initDraw") ) { return initDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"hasLines") ) { return hasLines_dyn(); }
		if (HX_FIELD_EQ(inName,"drawCell") ) { return drawCell_dyn(); }
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		if (HX_FIELD_EQ(inName,"doCancel") ) { return doCancel_dyn(); }
		if (HX_FIELD_EQ(inName,"newLabel") ) { return newLabel_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"HIGHLIGHT") ) { return HIGHLIGHT; }
		if (HX_FIELD_EQ(inName,"_renderer") ) { return _renderer; }
		if (HX_FIELD_EQ(inName,"_clickRow") ) { return _clickRow; }
		if (HX_FIELD_EQ(inName,"_sortMode") ) { return _sortMode; }
		if (HX_FIELD_EQ(inName,"_rowClick") ) { return _rowClick; }
		if (HX_FIELD_EQ(inName,"set_index") ) { return set_index_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data0") ) { return set_data0_dyn(); }
		if (HX_FIELD_EQ(inName,"labelCell") ) { return labelCell_dyn(); }
		if (HX_FIELD_EQ(inName,"drawArrow") ) { return drawArrow_dyn(); }
		if (HX_FIELD_EQ(inName,"drawLines") ) { return drawLines_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"get_index") ) { return get_index_dyn(); }
		if (HX_FIELD_EQ(inName,"get_model") ) { return get_model_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseMove") ) { return mouseMove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_highlight") ) { return _highlight; }
		if (HX_FIELD_EQ(inName,"_textAlign") ) { return _textAlign; }
		if (HX_FIELD_EQ(inName,"_saveIndex") ) { return _saveIndex; }
		if (HX_FIELD_EQ(inName,"addASearch") ) { return addASearch_dyn(); }
		if (HX_FIELD_EQ(inName,"set_arrows") ) { return set_arrows_dyn(); }
		if (HX_FIELD_EQ(inName,"set_header") ) { return set_header_dyn(); }
		if (HX_FIELD_EQ(inName,"get_header") ) { return get_header_dyn(); }
		if (HX_FIELD_EQ(inName,"endPressed") ) { return endPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"autoLayout") ) { return autoLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"clearCells") ) { return clearCells_dyn(); }
		if (HX_FIELD_EQ(inName,"doClickRow") ) { return doClickRow_dyn(); }
		if (HX_FIELD_EQ(inName,"illuminate") ) { return illuminate_dyn(); }
		if (HX_FIELD_EQ(inName,"customCell") ) { return customCell_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rendererXML") ) { return get_rendererXML(); }
		if (HX_FIELD_EQ(inName,"showPressed") ) { return get_showPressed(); }
		if (HX_FIELD_EQ(inName,"_cellHeight") ) { return _cellHeight; }
		if (HX_FIELD_EQ(inName,"_labelField") ) { return _labelField; }
		if (HX_FIELD_EQ(inName,"set_colours") ) { return set_colours_dyn(); }
		if (HX_FIELD_EQ(inName,"set_xmlData") ) { return set_xmlData_dyn(); }
		if (HX_FIELD_EQ(inName,"redrawCells") ) { return redrawCells_dyn(); }
		if (HX_FIELD_EQ(inName,"filterArray") ) { return filterArray_dyn(); }
		if (HX_FIELD_EQ(inName,"pressButton") ) { return pressButton_dyn(); }
		if (HX_FIELD_EQ(inName,"touchCancel") ) { return touchCancel_dyn(); }
		if (HX_FIELD_EQ(inName,"doSearchHit") ) { return doSearchHit_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"REFRESH_TEXT") ) { return REFRESH_TEXT; }
		if (HX_FIELD_EQ(inName,"filteredData") ) { return get_filteredData(); }
		if (HX_FIELD_EQ(inName,"rowContainer") ) { return get_rowContainer(); }
		if (HX_FIELD_EQ(inName,"_pressedCell") ) { return _pressedCell; }
		if (HX_FIELD_EQ(inName,"_showPressed") ) { return _showPressed; }
		if (HX_FIELD_EQ(inName,"clearPressed") ) { return clearPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"createSlider") ) { return createSlider_dyn(); }
		if (HX_FIELD_EQ(inName,"fillInValues") ) { return fillInValues_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clickRow") ) { return set_clickRow_dyn(); }
		if (HX_FIELD_EQ(inName,"findViewById") ) { return findViewById_dyn(); }
		if (HX_FIELD_EQ(inName,"stopMovement") ) { return stopMovement_dyn(); }
		if (HX_FIELD_EQ(inName,"rowRectangle") ) { return rowRectangle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_filteredData") ) { return _filteredData; }
		if (HX_FIELD_EQ(inName,"_refreshState") ) { return _refreshState; }
		if (HX_FIELD_EQ(inName,"_lastPosition") ) { return _lastPosition; }
		if (HX_FIELD_EQ(inName,"drawComponent") ) { return drawComponent_dyn(); }
		if (HX_FIELD_EQ(inName,"sortParameter") ) { return sortParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"resizeRefresh") ) { return resizeRefresh_dyn(); }
		if (HX_FIELD_EQ(inName,"searchHandler") ) { return searchHandler_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"PULL_DOWN_TEXT") ) { return PULL_DOWN_TEXT; }
		if (HX_FIELD_EQ(inName,"_highlightIsOn") ) { return _highlightIsOn; }
		if (HX_FIELD_EQ(inName,"set_labelField") ) { return set_labelField_dyn(); }
		if (HX_FIELD_EQ(inName,"clearHighlight") ) { return clearHighlight_dyn(); }
		if (HX_FIELD_EQ(inName,"drawSimpleCell") ) { return drawSimpleCell_dyn(); }
		if (HX_FIELD_EQ(inName,"dealWithArrows") ) { return dealWithArrows_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"TOUCH_THRESHOLD") ) { return TOUCH_THRESHOLD; }
		if (HX_FIELD_EQ(inName,"_highlightTimer") ) { return _highlightTimer; }
		if (HX_FIELD_EQ(inName,"set_rendererXML") ) { return set_rendererXML_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rendererXML") ) { return get_rendererXML_dyn(); }
		if (HX_FIELD_EQ(inName,"doLayoutHandler") ) { return doLayoutHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"extractRenderer") ) { return extractRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"set_showPressed") ) { return set_showPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"get_showPressed") ) { return get_showPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"simpleRenderers") ) { return simpleRenderers_dyn(); }
		if (HX_FIELD_EQ(inName,"customRenderers") ) { return customRenderers_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_highlightColour") ) { return _highlightColour; }
		if (HX_FIELD_EQ(inName,"set_filteredData") ) { return set_filteredData_dyn(); }
		if (HX_FIELD_EQ(inName,"get_filteredData") ) { return get_filteredData_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rowContainer") ) { return get_rowContainer_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_cellRendererLeft") ) { return _cellRendererLeft; }
		if (HX_FIELD_EQ(inName,"_highlightPressed") ) { return _highlightPressed; }
		if (HX_FIELD_EQ(inName,"pressedCellLimits") ) { return pressedCellLimits_dyn(); }
		if (HX_FIELD_EQ(inName,"highlightForIndex") ) { return highlightForIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_searchVisible") ) { return set_searchVisible_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dispatchClickedEnd") ) { return dispatchClickedEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"attributesToObject") ) { return attributesToObject_dyn(); }
		if (HX_FIELD_EQ(inName,"adjustMaximumSlide") ) { return adjustMaximumSlide_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_rendererAttributes") ) { return _rendererAttributes; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"LONG_CLICK_THRESHOLD") ) { return LONG_CLICK_THRESHOLD; }
		if (HX_FIELD_EQ(inName,"set_highlightPressed") ) { return set_highlightPressed_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"indexToScrollPosition") ) { return indexToScrollPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"calculateMaximumSlide") ) { return calculateMaximumSlide_dyn(); }
		if (HX_FIELD_EQ(inName,"autoLayoutPressedCell") ) { return autoLayoutPressedCell_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"initialiseRenderAttributes") ) { return initialiseRenderAttributes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_top") ) { _top=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_row") ) { _row=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return set_index(inValue); }
		if (HX_FIELD_EQ(inName,"data0") ) { return set_data0(inValue); }
		if (HX_FIELD_EQ(inName,"_font") ) { _font=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cell") ) { _cell=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"arrows") ) { return set_arrows(inValue); }
		if (HX_FIELD_EQ(inName,"header") ) { return set_header(inValue); }
		if (HX_FIELD_EQ(inName,"FORMAT") ) { FORMAT=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_model") ) { _model=inValue.Cast< ::com::danielfreeman::madcomponents::Model >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_field") ) { _field=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lines") ) { _lines=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colours") ) { return set_colours(inValue); }
		if (HX_FIELD_EQ(inName,"xmlData") ) { return set_xmlData(inValue); }
		if (HX_FIELD_EQ(inName,"_simple") ) { _simple=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_suffix") ) { _suffix=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_search") ) { _search=inValue.Cast< ::com::danielfreeman::madcomponents::UISearch >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_begins") ) { _begins=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sortBy") ) { _sortBy=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_header") ) { _header=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_arrows") ) { _arrows=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clickRow") ) { return set_clickRow(inValue); }
		if (HX_FIELD_EQ(inName,"_cellTop") ) { _cellTop=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colours") ) { _colours=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_refresh") ) { _refresh=inValue.Cast< ::com::danielfreeman::madcomponents::UIRefresh >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lineGap") ) { _lineGap=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"HIGHLIGHT") ) { HIGHLIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderer") ) { _renderer=inValue.Cast< ::MadXML >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clickRow") ) { _clickRow=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sortMode") ) { _sortMode=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rowClick") ) { _rowClick=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"labelField") ) { return set_labelField(inValue); }
		if (HX_FIELD_EQ(inName,"_highlight") ) { _highlight=inValue.Cast< ::openfl::display::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textAlign") ) { _textAlign=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_saveIndex") ) { _saveIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rendererXML") ) { return set_rendererXML(inValue); }
		if (HX_FIELD_EQ(inName,"showPressed") ) { return set_showPressed(inValue); }
		if (HX_FIELD_EQ(inName,"_cellHeight") ) { _cellHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_labelField") ) { _labelField=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"REFRESH_TEXT") ) { REFRESH_TEXT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filteredData") ) { return set_filteredData(inValue); }
		if (HX_FIELD_EQ(inName,"_pressedCell") ) { _pressedCell=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_showPressed") ) { _showPressed=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"searchVisible") ) { return set_searchVisible(inValue); }
		if (HX_FIELD_EQ(inName,"_filteredData") ) { _filteredData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_refreshState") ) { _refreshState=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastPosition") ) { _lastPosition=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"PULL_DOWN_TEXT") ) { PULL_DOWN_TEXT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_highlightIsOn") ) { _highlightIsOn=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"TOUCH_THRESHOLD") ) { TOUCH_THRESHOLD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_highlightTimer") ) { _highlightTimer=inValue.Cast< ::openfl::utils::Timer >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"highlightPressed") ) { return set_highlightPressed(inValue); }
		if (HX_FIELD_EQ(inName,"_highlightColour") ) { _highlightColour=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_cellRendererLeft") ) { _cellRendererLeft=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_highlightPressed") ) { _highlightPressed=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_rendererAttributes") ) { _rendererAttributes=inValue.Cast< ::com::danielfreeman::madcomponents::Attributes >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"LONG_CLICK_THRESHOLD") ) { LONG_CLICK_THRESHOLD=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rendererXML"));
	outFields->push(HX_CSTRING("arrows"));
	outFields->push(HX_CSTRING("header"));
	outFields->push(HX_CSTRING("labelField"));
	outFields->push(HX_CSTRING("colours"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("highlightPressed"));
	outFields->push(HX_CSTRING("showPressed"));
	outFields->push(HX_CSTRING("xmlData"));
	outFields->push(HX_CSTRING("filteredData"));
	outFields->push(HX_CSTRING("data0"));
	outFields->push(HX_CSTRING("row"));
	outFields->push(HX_CSTRING("clickRow"));
	outFields->push(HX_CSTRING("rowContainer"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("searchVisible"));
	outFields->push(HX_CSTRING("FORMAT"));
	outFields->push(HX_CSTRING("_renderer"));
	outFields->push(HX_CSTRING("_simple"));
	outFields->push(HX_CSTRING("_count"));
	outFields->push(HX_CSTRING("_cellHeight"));
	outFields->push(HX_CSTRING("_pressedCell"));
	outFields->push(HX_CSTRING("_highlight"));
	outFields->push(HX_CSTRING("_clickRow"));
	outFields->push(HX_CSTRING("_cellTop"));
	outFields->push(HX_CSTRING("_cellRendererLeft"));
	outFields->push(HX_CSTRING("_colours"));
	outFields->push(HX_CSTRING("_suffix"));
	outFields->push(HX_CSTRING("_font"));
	outFields->push(HX_CSTRING("_model"));
	outFields->push(HX_CSTRING("_search"));
	outFields->push(HX_CSTRING("_top"));
	outFields->push(HX_CSTRING("_rendererAttributes"));
	outFields->push(HX_CSTRING("_field"));
	outFields->push(HX_CSTRING("_begins"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_filteredData"));
	outFields->push(HX_CSTRING("_sortBy"));
	outFields->push(HX_CSTRING("_sortMode"));
	outFields->push(HX_CSTRING("_row"));
	outFields->push(HX_CSTRING("_lines"));
	outFields->push(HX_CSTRING("_cell"));
	outFields->push(HX_CSTRING("_refresh"));
	outFields->push(HX_CSTRING("_refreshState"));
	outFields->push(HX_CSTRING("_showPressed"));
	outFields->push(HX_CSTRING("_textAlign"));
	outFields->push(HX_CSTRING("_highlightPressed"));
	outFields->push(HX_CSTRING("_rowClick"));
	outFields->push(HX_CSTRING("_highlightColour"));
	outFields->push(HX_CSTRING("_labelField"));
	outFields->push(HX_CSTRING("_highlightIsOn"));
	outFields->push(HX_CSTRING("_saveIndex"));
	outFields->push(HX_CSTRING("_header"));
	outFields->push(HX_CSTRING("_arrows"));
	outFields->push(HX_CSTRING("_lineGap"));
	outFields->push(HX_CSTRING("_lastPosition"));
	outFields->push(HX_CSTRING("_highlightTimer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CLICK_START"),
	HX_CSTRING("CLICKED"),
	HX_CSTRING("CLICKED_END"),
	HX_CSTRING("CLICK_CANCEL"),
	HX_CSTRING("LONG_CLICK"),
	HX_CSTRING("REFRESH"),
	HX_CSTRING("ARROW"),
	HX_CSTRING("TOP"),
	HX_CSTRING("PULL_THRESHOLD"),
	HX_CSTRING("LONG_CLICK_THRESHOLD"),
	HX_CSTRING("HIGHLIGHT"),
	HX_CSTRING("PULL_DOWN_TEXT"),
	HX_CSTRING("REFRESH_TEXT"),
	HX_CSTRING("TOUCH_THRESHOLD"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UIList_obj,FORMAT),HX_CSTRING("FORMAT")},
	{hx::fsObject /*::MadXML*/ ,(int)offsetof(UIList_obj,_renderer),HX_CSTRING("_renderer")},
	{hx::fsBool,(int)offsetof(UIList_obj,_simple),HX_CSTRING("_simple")},
	{hx::fsInt,(int)offsetof(UIList_obj,_count),HX_CSTRING("_count")},
	{hx::fsInt,(int)offsetof(UIList_obj,_cellHeight),HX_CSTRING("_cellHeight")},
	{hx::fsInt,(int)offsetof(UIList_obj,_pressedCell),HX_CSTRING("_pressedCell")},
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(UIList_obj,_highlight),HX_CSTRING("_highlight")},
	{hx::fsBool,(int)offsetof(UIList_obj,_clickRow),HX_CSTRING("_clickRow")},
	{hx::fsInt,(int)offsetof(UIList_obj,_cellTop),HX_CSTRING("_cellTop")},
	{hx::fsFloat,(int)offsetof(UIList_obj,_cellRendererLeft),HX_CSTRING("_cellRendererLeft")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(UIList_obj,_colours),HX_CSTRING("_colours")},
	{hx::fsString,(int)offsetof(UIList_obj,_suffix),HX_CSTRING("_suffix")},
	{hx::fsString,(int)offsetof(UIList_obj,_font),HX_CSTRING("_font")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::Model*/ ,(int)offsetof(UIList_obj,_model),HX_CSTRING("_model")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UISearch*/ ,(int)offsetof(UIList_obj,_search),HX_CSTRING("_search")},
	{hx::fsInt,(int)offsetof(UIList_obj,_top),HX_CSTRING("_top")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::Attributes*/ ,(int)offsetof(UIList_obj,_rendererAttributes),HX_CSTRING("_rendererAttributes")},
	{hx::fsString,(int)offsetof(UIList_obj,_field),HX_CSTRING("_field")},
	{hx::fsBool,(int)offsetof(UIList_obj,_begins),HX_CSTRING("_begins")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UIList_obj,_data),HX_CSTRING("_data")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UIList_obj,_filteredData),HX_CSTRING("_filteredData")},
	{hx::fsString,(int)offsetof(UIList_obj,_sortBy),HX_CSTRING("_sortBy")},
	{hx::fsString,(int)offsetof(UIList_obj,_sortMode),HX_CSTRING("_sortMode")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(UIList_obj,_row),HX_CSTRING("_row")},
	{hx::fsBool,(int)offsetof(UIList_obj,_lines),HX_CSTRING("_lines")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UIList_obj,_cell),HX_CSTRING("_cell")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UIRefresh*/ ,(int)offsetof(UIList_obj,_refresh),HX_CSTRING("_refresh")},
	{hx::fsBool,(int)offsetof(UIList_obj,_refreshState),HX_CSTRING("_refreshState")},
	{hx::fsBool,(int)offsetof(UIList_obj,_showPressed),HX_CSTRING("_showPressed")},
	{hx::fsString,(int)offsetof(UIList_obj,_textAlign),HX_CSTRING("_textAlign")},
	{hx::fsBool,(int)offsetof(UIList_obj,_highlightPressed),HX_CSTRING("_highlightPressed")},
	{hx::fsBool,(int)offsetof(UIList_obj,_rowClick),HX_CSTRING("_rowClick")},
	{hx::fsInt,(int)offsetof(UIList_obj,_highlightColour),HX_CSTRING("_highlightColour")},
	{hx::fsString,(int)offsetof(UIList_obj,_labelField),HX_CSTRING("_labelField")},
	{hx::fsBool,(int)offsetof(UIList_obj,_highlightIsOn),HX_CSTRING("_highlightIsOn")},
	{hx::fsInt,(int)offsetof(UIList_obj,_saveIndex),HX_CSTRING("_saveIndex")},
	{hx::fsInt,(int)offsetof(UIList_obj,_header),HX_CSTRING("_header")},
	{hx::fsBool,(int)offsetof(UIList_obj,_arrows),HX_CSTRING("_arrows")},
	{hx::fsFloat,(int)offsetof(UIList_obj,_lineGap),HX_CSTRING("_lineGap")},
	{hx::fsFloat,(int)offsetof(UIList_obj,_lastPosition),HX_CSTRING("_lastPosition")},
	{hx::fsObject /*::openfl::utils::Timer*/ ,(int)offsetof(UIList_obj,_highlightTimer),HX_CSTRING("_highlightTimer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("FORMAT"),
	HX_CSTRING("_renderer"),
	HX_CSTRING("_simple"),
	HX_CSTRING("_count"),
	HX_CSTRING("_cellHeight"),
	HX_CSTRING("_pressedCell"),
	HX_CSTRING("_highlight"),
	HX_CSTRING("_clickRow"),
	HX_CSTRING("_cellTop"),
	HX_CSTRING("_cellRendererLeft"),
	HX_CSTRING("_colours"),
	HX_CSTRING("_suffix"),
	HX_CSTRING("_font"),
	HX_CSTRING("_model"),
	HX_CSTRING("_search"),
	HX_CSTRING("_top"),
	HX_CSTRING("_rendererAttributes"),
	HX_CSTRING("_field"),
	HX_CSTRING("_begins"),
	HX_CSTRING("_data"),
	HX_CSTRING("_filteredData"),
	HX_CSTRING("_sortBy"),
	HX_CSTRING("_sortMode"),
	HX_CSTRING("_row"),
	HX_CSTRING("_lines"),
	HX_CSTRING("_cell"),
	HX_CSTRING("_refresh"),
	HX_CSTRING("_refreshState"),
	HX_CSTRING("_showPressed"),
	HX_CSTRING("_textAlign"),
	HX_CSTRING("_highlightPressed"),
	HX_CSTRING("_rowClick"),
	HX_CSTRING("_highlightColour"),
	HX_CSTRING("_labelField"),
	HX_CSTRING("_highlightIsOn"),
	HX_CSTRING("_saveIndex"),
	HX_CSTRING("_header"),
	HX_CSTRING("_arrows"),
	HX_CSTRING("_lineGap"),
	HX_CSTRING("_lastPosition"),
	HX_CSTRING("_highlightTimer"),
	HX_CSTRING("addASearch"),
	HX_CSTRING("set_rendererXML"),
	HX_CSTRING("set_arrows"),
	HX_CSTRING("set_header"),
	HX_CSTRING("get_header"),
	HX_CSTRING("set_labelField"),
	HX_CSTRING("set_colours"),
	HX_CSTRING("initialiseRenderAttributes"),
	HX_CSTRING("indexToScrollPosition"),
	HX_CSTRING("setIndex"),
	HX_CSTRING("set_index"),
	HX_CSTRING("get_rendererXML"),
	HX_CSTRING("doLayoutHandler"),
	HX_CSTRING("extractRenderer"),
	HX_CSTRING("set_highlightPressed"),
	HX_CSTRING("set_showPressed"),
	HX_CSTRING("get_showPressed"),
	HX_CSTRING("clearPressed"),
	HX_CSTRING("clearHighlight"),
	HX_CSTRING("dispatchClickedEnd"),
	HX_CSTRING("endPressed"),
	HX_CSTRING("set_xmlData"),
	HX_CSTRING("attributesToObject"),
	HX_CSTRING("drawComponent"),
	HX_CSTRING("layout"),
	HX_CSTRING("autoLayout"),
	HX_CSTRING("doLayout"),
	HX_CSTRING("redrawCells"),
	HX_CSTRING("createSlider"),
	HX_CSTRING("sortParameter"),
	HX_CSTRING("set_data"),
	HX_CSTRING("setData"),
	HX_CSTRING("set_filteredData"),
	HX_CSTRING("set_data0"),
	HX_CSTRING("calculateMaximumSlide"),
	HX_CSTRING("adjustMaximumSlide"),
	HX_CSTRING("get_data"),
	HX_CSTRING("get_filteredData"),
	HX_CSTRING("filterArray"),
	HX_CSTRING("filter"),
	HX_CSTRING("simpleRenderers"),
	HX_CSTRING("labelCell"),
	HX_CSTRING("initDraw"),
	HX_CSTRING("resizeRefresh"),
	HX_CSTRING("clearCells"),
	HX_CSTRING("hasLines"),
	HX_CSTRING("drawCell"),
	HX_CSTRING("drawArrow"),
	HX_CSTRING("drawSimpleCell"),
	HX_CSTRING("dealWithArrows"),
	HX_CSTRING("drawLines"),
	HX_CSTRING("pressButton"),
	HX_CSTRING("doClickRow"),
	HX_CSTRING("pressedCellLimits"),
	HX_CSTRING("highlightForIndex"),
	HX_CSTRING("illuminate"),
	HX_CSTRING("autoLayoutPressedCell"),
	HX_CSTRING("activate"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("doCancel"),
	HX_CSTRING("touchCancel"),
	HX_CSTRING("get_index"),
	HX_CSTRING("get_row"),
	HX_CSTRING("clickUp"),
	HX_CSTRING("customRenderers"),
	HX_CSTRING("newRow"),
	HX_CSTRING("newLabel"),
	HX_CSTRING("customCell"),
	HX_CSTRING("fillInValues"),
	HX_CSTRING("set_clickRow"),
	HX_CSTRING("get_model"),
	HX_CSTRING("searchHandler"),
	HX_CSTRING("doSearchHit"),
	HX_CSTRING("findViewById"),
	HX_CSTRING("get_rowContainer"),
	HX_CSTRING("mouseMove"),
	HX_CSTRING("stopMovement"),
	HX_CSTRING("get_length"),
	HX_CSTRING("rowRectangle"),
	HX_CSTRING("set_searchVisible"),
	HX_CSTRING("clear"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIList_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIList_obj::CLICK_START,"CLICK_START");
	HX_MARK_MEMBER_NAME(UIList_obj::CLICKED,"CLICKED");
	HX_MARK_MEMBER_NAME(UIList_obj::CLICKED_END,"CLICKED_END");
	HX_MARK_MEMBER_NAME(UIList_obj::CLICK_CANCEL,"CLICK_CANCEL");
	HX_MARK_MEMBER_NAME(UIList_obj::LONG_CLICK,"LONG_CLICK");
	HX_MARK_MEMBER_NAME(UIList_obj::REFRESH,"REFRESH");
	HX_MARK_MEMBER_NAME(UIList_obj::ARROW,"ARROW");
	HX_MARK_MEMBER_NAME(UIList_obj::TOP,"TOP");
	HX_MARK_MEMBER_NAME(UIList_obj::PULL_THRESHOLD,"PULL_THRESHOLD");
	HX_MARK_MEMBER_NAME(UIList_obj::LONG_CLICK_THRESHOLD,"LONG_CLICK_THRESHOLD");
	HX_MARK_MEMBER_NAME(UIList_obj::HIGHLIGHT,"HIGHLIGHT");
	HX_MARK_MEMBER_NAME(UIList_obj::PULL_DOWN_TEXT,"PULL_DOWN_TEXT");
	HX_MARK_MEMBER_NAME(UIList_obj::REFRESH_TEXT,"REFRESH_TEXT");
	HX_MARK_MEMBER_NAME(UIList_obj::TOUCH_THRESHOLD,"TOUCH_THRESHOLD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIList_obj::CLICK_START,"CLICK_START");
	HX_VISIT_MEMBER_NAME(UIList_obj::CLICKED,"CLICKED");
	HX_VISIT_MEMBER_NAME(UIList_obj::CLICKED_END,"CLICKED_END");
	HX_VISIT_MEMBER_NAME(UIList_obj::CLICK_CANCEL,"CLICK_CANCEL");
	HX_VISIT_MEMBER_NAME(UIList_obj::LONG_CLICK,"LONG_CLICK");
	HX_VISIT_MEMBER_NAME(UIList_obj::REFRESH,"REFRESH");
	HX_VISIT_MEMBER_NAME(UIList_obj::ARROW,"ARROW");
	HX_VISIT_MEMBER_NAME(UIList_obj::TOP,"TOP");
	HX_VISIT_MEMBER_NAME(UIList_obj::PULL_THRESHOLD,"PULL_THRESHOLD");
	HX_VISIT_MEMBER_NAME(UIList_obj::LONG_CLICK_THRESHOLD,"LONG_CLICK_THRESHOLD");
	HX_VISIT_MEMBER_NAME(UIList_obj::HIGHLIGHT,"HIGHLIGHT");
	HX_VISIT_MEMBER_NAME(UIList_obj::PULL_DOWN_TEXT,"PULL_DOWN_TEXT");
	HX_VISIT_MEMBER_NAME(UIList_obj::REFRESH_TEXT,"REFRESH_TEXT");
	HX_VISIT_MEMBER_NAME(UIList_obj::TOUCH_THRESHOLD,"TOUCH_THRESHOLD");
};

#endif

Class UIList_obj::__mClass;

void UIList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIList"), hx::TCanCast< UIList_obj> ,sStaticFields,sMemberFields,
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

void UIList_obj::__boot()
{
	CLICK_START= HX_CSTRING("clickStart");
	CLICKED= HX_CSTRING("clicked");
	CLICKED_END= HX_CSTRING("listClickedEnd");
	CLICK_CANCEL= HX_CSTRING("listClickCancel");
	LONG_CLICK= HX_CSTRING("longClick");
	REFRESH= HX_CSTRING("pullRefresh");
	ARROW= (int)6;
	TOP= (int)40;
	PULL_THRESHOLD= (int)70;
	LONG_CLICK_THRESHOLD= (int)20;
	HIGHLIGHT= (int)10066431;
	PULL_DOWN_TEXT= HX_CSTRING("pull down to refresh");
	REFRESH_TEXT= HX_CSTRING("refreshing...");
	TOUCH_THRESHOLD= (int)1;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
