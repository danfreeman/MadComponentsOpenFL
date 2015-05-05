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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabelX
#include <com/danielfreeman/madcomponents/UILabelX.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_AntiAliasType
#include <openfl/text/AntiAliasType.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UILabelX_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UILabelX","new",0x3b3bbdfe,"com.danielfreeman.madcomponents.UILabelX.new","com/danielfreeman/madcomponents/UILabelX.hx",15,0x1d91accf)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(26)
	this->_includeInLayout = true;
	HX_STACK_LINE(25)
	this->_clickable = true;
	HX_STACK_LINE(30)
	::String _g = xml->get_innerHTML();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(30)
	super::__construct(screen,attributes->x,attributes->y,_g,null());
	HX_STACK_LINE(31)
	bool _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(31)
	if ((xml->has->resolve(HX_CSTRING("embedFonts")))){
		HX_STACK_LINE(31)
		::String _g1 = xml->att->resolve(HX_CSTRING("embedFonts"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(31)
		_g2 = (_g1 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(31)
		_g2 = false;
	}
	HX_STACK_LINE(31)
	this->set_embedFonts(_g2);
	HX_STACK_LINE(32)
	if ((xml->has->resolve(HX_CSTRING("antiAliasType")))){
		HX_STACK_LINE(33)
		::openfl::text::AntiAliasType _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(33)
		_g3 = hx::TCast< openfl::text::AntiAliasType >::cast(xml->att->resolve(HX_CSTRING("antiAliasType")));
		HX_STACK_LINE(33)
		this->antiAliasType = _g3;
	}
	HX_STACK_LINE(35)
	this->assignToLabel(xml);
	HX_STACK_LINE(36)
	if ((xml->has->resolve(HX_CSTRING("height")))){
		HX_STACK_LINE(37)
		::String _g4 = xml->att->resolve(HX_CSTRING("height"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(37)
		Float _g5 = ::Std_obj::parseFloat(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(37)
		this->set_fixheight(_g5);
	}
	HX_STACK_LINE(39)
	if (((  ((!(attributes->get_fillH()))) ? bool(xml->has->resolve(HX_CSTRING("height"))) : bool(true) ))){
		HX_STACK_LINE(40)
		Float _g6 = attributes->get_widthH();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(40)
		this->set_fixwidth(_g6);
		HX_STACK_LINE(41)
		::String textAlign = attributes->get_textAlign();		HX_STACK_VAR(textAlign,"textAlign");
		HX_STACK_LINE(42)
		if (((textAlign != HX_CSTRING("")))){
			HX_STACK_LINE(43)
			::openfl::text::TextFormat format = ::openfl::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(format,"format");
			HX_STACK_LINE(45)
			format->align = textAlign;
			HX_STACK_LINE(46)
			this->set_defaultTextFormat(format);
		}
	}
	HX_STACK_LINE(49)
	bool _g8;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(49)
	if ((!((!(xml->has->resolve(HX_CSTRING("autosize"))))))){
		HX_STACK_LINE(49)
		::String _g7 = xml->att->resolve(HX_CSTRING("autosize"));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(49)
		_g8 = (_g7 != HX_CSTRING("false"));
	}
	else{
		HX_STACK_LINE(49)
		_g8 = true;
	}
	HX_STACK_LINE(49)
	this->_autoSize = _g8;
	HX_STACK_LINE(50)
	if ((this->_autoSize)){
		HX_STACK_LINE(51)
		this->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
	}
}
;
	return null();
}

//UILabelX_obj::~UILabelX_obj() { }

Dynamic UILabelX_obj::__CreateEmpty() { return  new UILabelX_obj; }
hx::ObjectPtr< UILabelX_obj > UILabelX_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UILabelX_obj > result = new UILabelX_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UILabelX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UILabelX_obj > result = new UILabelX_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UILabelX_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

Void UILabelX_obj::assignToLabel( ::MadXML xml){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UILabelX","assignToLabel",0x29ee4f28,"com.danielfreeman.madcomponents.UILabelX.assignToLabel","com/danielfreeman/madcomponents/UILabelX.hx",57,0x1d91accf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_LINE(57)
		if ((xml->get_hasChildren())){
			HX_STACK_LINE(58)
			::String xmlString = xml->toXMLString();		HX_STACK_VAR(xmlString,"xmlString");
			HX_STACK_LINE(59)
			int _g = xmlString.indexOf(HX_CSTRING(">"),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(59)
			int _g1 = (_g + (int)1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(59)
			int _g2 = xmlString.lastIndexOf(HX_CSTRING("<"),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(59)
			::String htmlText = xmlString.substring(_g1,_g2);		HX_STACK_VAR(htmlText,"htmlText");
			HX_STACK_LINE(60)
			this->set_xmlText(htmlText);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UILabelX_obj,assignToLabel,(void))

Void UILabelX_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UILabelX","layout",0xb83297cc,"com.danielfreeman.madcomponents.UILabelX.layout","com/danielfreeman/madcomponents/UILabelX.hx",65,0x1d91accf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(66)
		this->_attributes = attributes;
		HX_STACK_LINE(67)
		if ((attributes->get_fillV())){
			HX_STACK_LINE(68)
			Float _g = attributes->get_heightV();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(68)
			this->set_fixheight(_g);
		}
		HX_STACK_LINE(70)
		if ((attributes->get_fillH())){
			HX_STACK_LINE(71)
			Float _g1 = attributes->get_widthH();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(71)
			this->set_fixwidth(_g1);
		}
		HX_STACK_LINE(73)
		if ((this->_autoSize)){
			HX_STACK_LINE(74)
			this->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UILabelX_obj,layout,(void))

bool UILabelX_obj::set_clickable( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UILabelX","set_clickable",0x2f30c2e3,"com.danielfreeman.madcomponents.UILabelX.set_clickable","com/danielfreeman/madcomponents/UILabelX.hx",79,0x1d91accf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(80)
	this->_clickable = value;
	HX_STACK_LINE(81)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UILabelX_obj,set_clickable,return )

bool UILabelX_obj::get_clickable( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UILabelX","get_clickable",0xea2ae0d7,"com.danielfreeman.madcomponents.UILabelX.get_clickable","com/danielfreeman/madcomponents/UILabelX.hx",85,0x1d91accf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	return this->_clickable;
}


HX_DEFINE_DYNAMIC_FUNC0(UILabelX_obj,get_clickable,return )

bool UILabelX_obj::set_includeInLayout( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UILabelX","set_includeInLayout",0x7b3b6678,"com.danielfreeman.madcomponents.UILabelX.set_includeInLayout","com/danielfreeman/madcomponents/UILabelX.hx",88,0x1d91accf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(89)
	this->_includeInLayout = value;
	HX_STACK_LINE(90)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UILabelX_obj,set_includeInLayout,return )

bool UILabelX_obj::get_includeInLayout( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UILabelX","get_includeInLayout",0x3e9e736c,"com.danielfreeman.madcomponents.UILabelX.get_includeInLayout","com/danielfreeman/madcomponents/UILabelX.hx",94,0x1d91accf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	return this->_includeInLayout;
}


HX_DEFINE_DYNAMIC_FUNC0(UILabelX_obj,get_includeInLayout,return )

Void UILabelX_obj::touchCancel( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UILabelX","touchCancel",0xc6860e37,"com.danielfreeman.madcomponents.UILabelX.touchCancel","com/danielfreeman/madcomponents/UILabelX.hx",97,0x1d91accf)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UILabelX_obj,touchCancel,(void))

::com::danielfreeman::madcomponents::Attributes UILabelX_obj::get_attributes( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UILabelX","get_attributes",0xca820c42,"com.danielfreeman.madcomponents.UILabelX.get_attributes","com/danielfreeman/madcomponents/UILabelX.hx",115,0x1d91accf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	return this->_attributes;
}


HX_DEFINE_DYNAMIC_FUNC0(UILabelX_obj,get_attributes,return )

Void UILabelX_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UILabelX","destructor",0x14d3fd5b,"com.danielfreeman.madcomponents.UILabelX.destructor","com/danielfreeman/madcomponents/UILabelX.hx",119,0x1d91accf)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UILabelX_obj,destructor,(void))


UILabelX_obj::UILabelX_obj()
{
}

void UILabelX_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UILabelX);
	HX_MARK_MEMBER_NAME(_autoSize,"_autoSize");
	HX_MARK_MEMBER_NAME(_attributes,"_attributes");
	HX_MARK_MEMBER_NAME(_xml,"_xml");
	HX_MARK_MEMBER_NAME(_clickable,"_clickable");
	HX_MARK_MEMBER_NAME(_includeInLayout,"_includeInLayout");
	::openfl::text::TextField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UILabelX_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_autoSize,"_autoSize");
	HX_VISIT_MEMBER_NAME(_attributes,"_attributes");
	HX_VISIT_MEMBER_NAME(_xml,"_xml");
	HX_VISIT_MEMBER_NAME(_clickable,"_clickable");
	HX_VISIT_MEMBER_NAME(_includeInLayout,"_includeInLayout");
	::openfl::text::TextField_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UILabelX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_xml") ) { return _xml; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickable") ) { return get_clickable(); }
		if (HX_FIELD_EQ(inName,"_autoSize") ) { return _autoSize; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attributes") ) { return get_attributes(); }
		if (HX_FIELD_EQ(inName,"_clickable") ) { return _clickable; }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_attributes") ) { return _attributes; }
		if (HX_FIELD_EQ(inName,"touchCancel") ) { return touchCancel_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"assignToLabel") ) { return assignToLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clickable") ) { return set_clickable_dyn(); }
		if (HX_FIELD_EQ(inName,"get_clickable") ) { return get_clickable_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_attributes") ) { return get_attributes_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"includeInLayout") ) { return get_includeInLayout(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_includeInLayout") ) { return _includeInLayout; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_includeInLayout") ) { return set_includeInLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"get_includeInLayout") ) { return get_includeInLayout_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UILabelX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_xml") ) { _xml=inValue.Cast< ::MadXML >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickable") ) { return set_clickable(inValue); }
		if (HX_FIELD_EQ(inName,"_autoSize") ) { _autoSize=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_clickable") ) { _clickable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_attributes") ) { _attributes=inValue.Cast< ::com::danielfreeman::madcomponents::Attributes >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"includeInLayout") ) { return set_includeInLayout(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_includeInLayout") ) { _includeInLayout=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UILabelX_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("attributes"));
	outFields->push(HX_CSTRING("clickable"));
	outFields->push(HX_CSTRING("includeInLayout"));
	outFields->push(HX_CSTRING("_autoSize"));
	outFields->push(HX_CSTRING("_attributes"));
	outFields->push(HX_CSTRING("_xml"));
	outFields->push(HX_CSTRING("_clickable"));
	outFields->push(HX_CSTRING("_includeInLayout"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(UILabelX_obj,_autoSize),HX_CSTRING("_autoSize")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::Attributes*/ ,(int)offsetof(UILabelX_obj,_attributes),HX_CSTRING("_attributes")},
	{hx::fsObject /*::MadXML*/ ,(int)offsetof(UILabelX_obj,_xml),HX_CSTRING("_xml")},
	{hx::fsBool,(int)offsetof(UILabelX_obj,_clickable),HX_CSTRING("_clickable")},
	{hx::fsBool,(int)offsetof(UILabelX_obj,_includeInLayout),HX_CSTRING("_includeInLayout")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_autoSize"),
	HX_CSTRING("_attributes"),
	HX_CSTRING("_xml"),
	HX_CSTRING("_clickable"),
	HX_CSTRING("_includeInLayout"),
	HX_CSTRING("assignToLabel"),
	HX_CSTRING("layout"),
	HX_CSTRING("set_clickable"),
	HX_CSTRING("get_clickable"),
	HX_CSTRING("set_includeInLayout"),
	HX_CSTRING("get_includeInLayout"),
	HX_CSTRING("touchCancel"),
	HX_CSTRING("get_attributes"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UILabelX_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UILabelX_obj::__mClass,"__mClass");
};

#endif

Class UILabelX_obj::__mClass;

void UILabelX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UILabelX"), hx::TCanCast< UILabelX_obj> ,sStaticFields,sMemberFields,
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

void UILabelX_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
