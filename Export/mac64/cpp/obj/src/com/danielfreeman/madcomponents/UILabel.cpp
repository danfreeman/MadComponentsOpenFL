#include <hxcpp.h>

#ifndef INCLUDED_com_danielfreeman_MadXML
#include <com/danielfreeman/MadXML.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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

Void UILabel_obj::__construct(::openfl::display::Sprite screen,Float xx,Float yy,::String __o_txt,::openfl::text::TextFormat format)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UILabel","new",0xcb7022be,"com.danielfreeman.madcomponents.UILabel.new","com/danielfreeman/madcomponents/UILabel.hx",51,0x852cbf75)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xx,"xx")
HX_STACK_ARG(yy,"yy")
HX_STACK_ARG(__o_txt,"txt")
HX_STACK_ARG(format,"format")
::String txt = __o_txt.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(52)
	super::__construct();
	HX_STACK_LINE(53)
	screen->addChild(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(54)
	this->set_x(xx);
	HX_STACK_LINE(55)
	this->set_y(yy);
	HX_STACK_LINE(56)
	bool _g = this->set_selectable(false);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(56)
	bool _g1 = this->set_multiline(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(56)
	this->set_mouseEnabled(_g1);
	HX_STACK_LINE(57)
	this->set_type(::openfl::text::TextFieldType_obj::DYNAMIC);
	HX_STACK_LINE(58)
	this->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(59)
	if (((format == null()))){
		HX_STACK_LINE(59)
		format = ::com::danielfreeman::madcomponents::UILabel_obj::FORMAT;
	}
	HX_STACK_LINE(60)
	this->set_defaultTextFormat(format);
	HX_STACK_LINE(61)
	this->set_height((int)30);
	HX_STACK_LINE(62)
	if (((txt == HX_CSTRING("")))){
		HX_STACK_LINE(63)
		this->set_text(HX_CSTRING(" "));
	}
	else{
		HX_STACK_LINE(65)
		this->set_xmlText(txt);
	}
}
;
	return null();
}

//UILabel_obj::~UILabel_obj() { }

Dynamic UILabel_obj::__CreateEmpty() { return  new UILabel_obj; }
hx::ObjectPtr< UILabel_obj > UILabel_obj::__new(::openfl::display::Sprite screen,Float xx,Float yy,::String __o_txt,::openfl::text::TextFormat format)
{  hx::ObjectPtr< UILabel_obj > result = new UILabel_obj();
	result->__construct(screen,xx,yy,__o_txt,format);
	return result;}

Dynamic UILabel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UILabel_obj > result = new UILabel_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Float UILabel_obj::set_fixwidth( Float value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UILabel","set_fixwidth",0xced17970,"com.danielfreeman.madcomponents.UILabel.set_fixwidth","com/danielfreeman/madcomponents/UILabel.hx",70,0x852cbf75)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(71)
	bool _g = this->set_wordWrap(true);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(71)
	this->set_multiline(_g);
	HX_STACK_LINE(72)
	this->set_width(value);
	HX_STACK_LINE(73)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UILabel_obj,set_fixwidth,return )

::String UILabel_obj::set_xmlText( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UILabel","set_xmlText",0x19d9e5a5,"com.danielfreeman.madcomponents.UILabel.set_xmlText","com/danielfreeman/madcomponents/UILabel.hx",77,0x852cbf75)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(79)
	try
	{
	HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
	{
		HX_STACK_LINE(80)
		::com::danielfreeman::MadXML xmlValue = ::com::danielfreeman::MadXML_obj::parse(((HX_CSTRING("<a>") + value) + HX_CSTRING("</a>")));		HX_STACK_VAR(xmlValue,"xmlValue");
		HX_STACK_LINE(81)
		if ((xmlValue->get_hasChildren())){
			HX_STACK_LINE(82)
			::haxe::Log_obj::trace(value,hx::SourceInfo(HX_CSTRING("UILabel.hx"),82,HX_CSTRING("com.danielfreeman.madcomponents.UILabel"),HX_CSTRING("set_xmlText")));
			HX_STACK_LINE(83)
			this->set_htmlText(value);
			HX_STACK_LINE(84)
			::String _g = this->get_text();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(84)
			if (((_g == HX_CSTRING("")))){
				HX_STACK_LINE(85)
				this->set_text(HX_CSTRING(" "));
			}
		}
		else{
			HX_STACK_LINE(88)
			this->set_text(value);
		}
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::openfl::errors::Error >() ){
			HX_STACK_BEGIN_CATCH
			::openfl::errors::Error error = __e;{
				HX_STACK_LINE(91)
				this->set_text((  (((value != null()))) ? ::String(value) : ::String(HX_CSTRING("")) ));
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(93)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UILabel_obj,set_xmlText,return )

Float UILabel_obj::set_fixheight( Float value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UILabel","set_fixheight",0xdec8413d,"com.danielfreeman.madcomponents.UILabel.set_fixheight","com/danielfreeman/madcomponents/UILabel.hx",97,0x852cbf75)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(98)
	if (((value < (int)0))){
		HX_STACK_LINE(99)
		this->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
	}
	else{
		HX_STACK_LINE(101)
		this->set_autoSize(::openfl::text::TextFieldAutoSize_obj::NONE);
		HX_STACK_LINE(102)
		bool _g = this->set_wordWrap(true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		this->set_multiline(_g);
		HX_STACK_LINE(103)
		this->set_height(value);
	}
	HX_STACK_LINE(105)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UILabel_obj,set_fixheight,return )

::openfl::text::TextFormat UILabel_obj::FORMAT;


UILabel_obj::UILabel_obj()
{
}

Dynamic UILabel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"FORMAT") ) { return FORMAT; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_xmlText") ) { return set_xmlText_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_fixwidth") ) { return set_fixwidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_fixheight") ) { return set_fixheight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UILabel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"FORMAT") ) { FORMAT=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xmlText") ) { return set_xmlText(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fixwidth") ) { return set_fixwidth(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fixheight") ) { return set_fixheight(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UILabel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("xmlText"));
	outFields->push(HX_CSTRING("fixwidth"));
	outFields->push(HX_CSTRING("fixheight"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FORMAT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("set_fixwidth"),
	HX_CSTRING("set_xmlText"),
	HX_CSTRING("set_fixheight"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UILabel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UILabel_obj::FORMAT,"FORMAT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UILabel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UILabel_obj::FORMAT,"FORMAT");
};

#endif

Class UILabel_obj::__mClass;

void UILabel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UILabel"), hx::TCanCast< UILabel_obj> ,sStaticFields,sMemberFields,
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

void UILabel_obj::__boot()
{
	FORMAT= ::openfl::text::TextFormat_obj::__new(HX_CSTRING("_sans"),(int)16,(int)3355443,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
