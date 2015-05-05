#include <hxcpp.h>

#ifndef INCLUDED_com_danielfreeman_extendedmadness_UICell
#include <com/danielfreeman/extendedmadness/UICell.h>
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
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace com{
namespace danielfreeman{
namespace extendedmadness{

Void UICell_obj::__construct(::openfl::display::Sprite screen,int xx,int yy,::String __o_txt,hx::Null< Float >  __o_wdth,::openfl::text::TextFormat format,hx::Null< bool >  __o_multiLine,hx::Null< bool >  __o_wordWrap,hx::Null< int >  __o_borderColour,hx::Null< bool >  __o_border)
{
HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICell","new",0xb6c4fcd4,"com.danielfreeman.extendedmadness.UICell.new","com/danielfreeman/extendedmadness/UICell.hx",14,0x56a3a4f9)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xx,"xx")
HX_STACK_ARG(yy,"yy")
HX_STACK_ARG(__o_txt,"txt")
HX_STACK_ARG(__o_wdth,"wdth")
HX_STACK_ARG(format,"format")
HX_STACK_ARG(__o_multiLine,"multiLine")
HX_STACK_ARG(__o_wordWrap,"wordWrap")
HX_STACK_ARG(__o_borderColour,"borderColour")
HX_STACK_ARG(__o_border,"border")
::String txt = __o_txt.Default(HX_CSTRING(""));
Float wdth = __o_wdth.Default(0);
bool multiLine = __o_multiLine.Default(false);
bool wordWrap = __o_wordWrap.Default(false);
int borderColour = __o_borderColour.Default(6710886);
bool border = __o_border.Default(true);
{
	HX_STACK_LINE(19)
	this->FORMAT = ::openfl::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)13,(int)102,true,null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(23)
	if (((format == null()))){
		HX_STACK_LINE(24)
		format = this->FORMAT;
		HX_STACK_LINE(25)
		format->leftMargin = 4.0;
	}
	HX_STACK_LINE(27)
	super::__construct(screen,xx,yy,txt,format);
	HX_STACK_LINE(28)
	this->set_border(border);
	HX_STACK_LINE(29)
	this->set_borderColor(borderColour);
	HX_STACK_LINE(30)
	this->set_multiline(multiLine);
	HX_STACK_LINE(31)
	this->set_wordWrap(wordWrap);
	HX_STACK_LINE(32)
	this->setTextFormat(format,null(),null());
	HX_STACK_LINE(33)
	this->set_defaultTextFormat(format);
	HX_STACK_LINE(34)
	if (((wdth > (int)0))){
		HX_STACK_LINE(35)
		this->set_fixwidth(wdth);
	}
}
;
	return null();
}

//UICell_obj::~UICell_obj() { }

Dynamic UICell_obj::__CreateEmpty() { return  new UICell_obj; }
hx::ObjectPtr< UICell_obj > UICell_obj::__new(::openfl::display::Sprite screen,int xx,int yy,::String __o_txt,hx::Null< Float >  __o_wdth,::openfl::text::TextFormat format,hx::Null< bool >  __o_multiLine,hx::Null< bool >  __o_wordWrap,hx::Null< int >  __o_borderColour,hx::Null< bool >  __o_border)
{  hx::ObjectPtr< UICell_obj > result = new UICell_obj();
	result->__construct(screen,xx,yy,__o_txt,__o_wdth,format,__o_multiLine,__o_wordWrap,__o_borderColour,__o_border);
	return result;}

Dynamic UICell_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UICell_obj > result = new UICell_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9]);
	return result;}

Float UICell_obj::set_fixwidth( Float value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICell","set_fixwidth",0xc977ac9a,"com.danielfreeman.extendedmadness.UICell.set_fixwidth","com/danielfreeman/extendedmadness/UICell.hx",40,0x56a3a4f9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(41)
	this->set_autoSize(::openfl::text::TextFieldAutoSize_obj::NONE);
	HX_STACK_LINE(42)
	this->super::set_fixwidth(value);
	HX_STACK_LINE(43)
	return value;
}


int UICell_obj::set_defaultColour( int value){
	HX_STACK_FRAME("com.danielfreeman.extendedmadness.UICell","set_defaultColour",0x66880ec4,"com.danielfreeman.extendedmadness.UICell.set_defaultColour","com/danielfreeman/extendedmadness/UICell.hx",47,0x56a3a4f9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(48)
	this->set_background((value != (int)-1));
	HX_STACK_LINE(49)
	this->set_backgroundColor(value);
	HX_STACK_LINE(50)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UICell_obj,set_defaultColour,return )


UICell_obj::UICell_obj()
{
}

void UICell_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UICell);
	HX_MARK_MEMBER_NAME(FORMAT,"FORMAT");
	::openfl::text::TextField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UICell_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(FORMAT,"FORMAT");
	::openfl::text::TextField_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UICell_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"FORMAT") ) { return FORMAT; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_fixwidth") ) { return set_fixwidth_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_defaultColour") ) { return set_defaultColour_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UICell_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"FORMAT") ) { FORMAT=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultColour") ) { return set_defaultColour(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UICell_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("defaultColour"));
	outFields->push(HX_CSTRING("FORMAT"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(UICell_obj,FORMAT),HX_CSTRING("FORMAT")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("FORMAT"),
	HX_CSTRING("set_fixwidth"),
	HX_CSTRING("set_defaultColour"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UICell_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UICell_obj::__mClass,"__mClass");
};

#endif

Class UICell_obj::__mClass;

void UICell_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.extendedmadness.UICell"), hx::TCanCast< UICell_obj> ,sStaticFields,sMemberFields,
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

void UICell_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness
