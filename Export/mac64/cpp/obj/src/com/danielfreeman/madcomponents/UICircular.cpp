#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_Attributes
#include <com/danielfreeman/madcomponents/Attributes.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IComponentUI
#include <com/danielfreeman/madcomponents/IComponentUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IContainerUI
#include <com/danielfreeman/madcomponents/IContainerUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UI
#include <com/danielfreeman/madcomponents/UI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UICircular
#include <com/danielfreeman/madcomponents/UICircular.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIContainerBaseClass
#include <com/danielfreeman/madcomponents/UIContainerBaseClass.h>
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
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UICircular_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UICircular","new",0x3602aff9,"com.danielfreeman.madcomponents.UICircular.new","com/danielfreeman/madcomponents/UICircular.hx",44,0xf75db474)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(50)
	this->_startAngle = (int)0;
	HX_STACK_LINE(49)
	this->_maximumHeight = 0.0;
	HX_STACK_LINE(48)
	this->_maximumWidth = 0.0;
	HX_STACK_LINE(47)
	this->_radius = (int)99999;
	HX_STACK_LINE(56)
	super::__construct(screen,xml,attributes);
}
;
	return null();
}

//UICircular_obj::~UICircular_obj() { }

Dynamic UICircular_obj::__CreateEmpty() { return  new UICircular_obj; }
hx::ObjectPtr< UICircular_obj > UICircular_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UICircular_obj > result = new UICircular_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UICircular_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UICircular_obj > result = new UICircular_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void UICircular_obj::initialise( ::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UICircular","initialise",0x095c60be,"com.danielfreeman.madcomponents.UICircular.initialise","com/danielfreeman/madcomponents/UICircular.hx",60,0xf75db474)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(62)
		if ((xml->has->resolve(HX_CSTRING("radius")))){
			HX_STACK_LINE(63)
			::String _g = xml->att->resolve(HX_CSTRING("radius"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(63)
			Dynamic _g1 = ::Std_obj::parseInt(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(63)
			this->_radius = _g1;
		}
		HX_STACK_LINE(65)
		if ((xml->has->resolve(HX_CSTRING("startAngle")))){
			HX_STACK_LINE(66)
			::String _g2 = xml->att->resolve(HX_CSTRING("startAngle"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(66)
			Float _g3 = ::Std_obj::parseFloat(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(66)
			this->_startAngle = _g3;
		}
		HX_STACK_LINE(68)
		if ((xml->has->resolve(HX_CSTRING("finishAngle")))){
			HX_STACK_LINE(69)
			::String _g4 = xml->att->resolve(HX_CSTRING("finishAngle"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(69)
			Float _g5 = ::Std_obj::parseFloat(_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(69)
			this->_finishAngle = _g5;
		}
		else{
			HX_STACK_LINE(73)
			int _g6 = xml->children(null())->length();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(72)
			int _g7 = (_g6 - (int)1);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(72)
			int _g8 = (_g7 * (int)360);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(73)
			int _g9 = xml->children(null())->length();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(72)
			Float _g10 = (Float(_g8) / Float(_g9));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(72)
			this->_finishAngle = _g10;
		}
		HX_STACK_LINE(76)
		for(::cpp::FastIterator_obj< ::com::danielfreeman::MadXML > *__it = ::cpp::CreateFastIterator< ::com::danielfreeman::MadXML >(xml->children(null())->iterator());  __it->hasNext(); ){
			::com::danielfreeman::MadXML xmlChild = __it->next();
			{
				HX_STACK_LINE(77)
				::com::danielfreeman::madcomponents::Attributes childAttributes = attributes->copy(xml,true);		HX_STACK_VAR(childAttributes,"childAttributes");
				HX_STACK_LINE(78)
				::String localName = xmlChild->get_name();		HX_STACK_VAR(localName,"localName");
				HX_STACK_LINE(79)
				if ((::com::danielfreeman::madcomponents::UI_obj::isContainer(localName))){
					HX_STACK_LINE(80)
					::openfl::display::DisplayObject child = ::com::danielfreeman::madcomponents::UI_obj::containers(hx::ObjectPtr<OBJ_>(this),xmlChild,childAttributes);		HX_STACK_VAR(child,"child");
					HX_STACK_LINE(81)
					Float _g11 = child->get_width();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(81)
					Float _g12 = ::Math_obj::max(this->_maximumWidth,_g11);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(81)
					this->_maximumWidth = _g12;
					HX_STACK_LINE(82)
					Float _g13 = child->get_height();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(82)
					Float _g14 = ::Math_obj::max(this->_maximumHeight,_g13);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(82)
					this->_maximumHeight = _g14;
				}
				else{
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UICircular.hx",85,0xf75db474)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UICircular.hx"),false);
								__result->Add(HX_CSTRING("lineNumber") , (int)85,false);
								__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.madcomponents.UICircular"),false);
								__result->Add(HX_CSTRING("methodName") , HX_CSTRING("initialise"),false);
								__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING(" not supported by UICircular"))),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(85)
					::haxe::Log_obj::trace(localName,_Function_3_1::Block());
				}
			}
;
		}
	}
return null();
}


Void UICircular_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UICircular","layout",0x2f80d4b1,"com.danielfreeman.madcomponents.UICircular.layout","com/danielfreeman/madcomponents/UICircular.hx",91,0xf75db474)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(92)
		this->super::layout(attributes);
		HX_STACK_LINE(93)
		this->drawComponent();
	}
return null();
}


Void UICircular_obj::drawComponent( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UICircular","drawComponent",0x8e04bcf2,"com.danielfreeman.madcomponents.UICircular.drawComponent","com/danielfreeman/madcomponents/UICircular.hx",97,0xf75db474)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		this->super::drawComponent();
		HX_STACK_LINE(99)
		Float _g = ::Math_obj::min(this->_radius,(Float(((this->_attributes->width - this->_maximumWidth))) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		Float useRadius = ::Math_obj::min(_g,(Float(((this->_attributes->height - this->_maximumHeight))) / Float((int)2)));		HX_STACK_VAR(useRadius,"useRadius");
		HX_STACK_LINE(100)
		int _g1 = this->get_numChildren();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(100)
		int _g2 = (_g1 - (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(100)
		Float interval = (Float(((this->_finishAngle - this->_startAngle))) / Float(_g2));		HX_STACK_VAR(interval,"interval");
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(101)
			int _g3 = this->get_numChildren();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(101)
			while((true)){
				HX_STACK_LINE(101)
				if ((!(((_g11 < _g3))))){
					HX_STACK_LINE(101)
					break;
				}
				HX_STACK_LINE(101)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(102)
				Float angle = ((Float(((this->_startAngle + (i * interval)))) / Float((int)180)) * ::Math_obj::PI);		HX_STACK_VAR(angle,"angle");
				HX_STACK_LINE(103)
				::openfl::display::DisplayObject item = this->getChildAt(i);		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(104)
				Float _g31 = ::Math_obj::sin(angle);		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(104)
				Float _g4 = (useRadius * _g31);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(104)
				Float _g5 = ((Float(this->_attributes->width) / Float((int)2)) + _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(104)
				Float _g6 = item->get_width();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(104)
				Float _g7 = (Float(_g6) / Float((int)2));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(104)
				Float _g8 = (_g5 - _g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(104)
				item->set_x(_g8);
				HX_STACK_LINE(105)
				Float _g9 = ::Math_obj::cos(angle);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(105)
				Float _g10 = (useRadius * _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(105)
				Float _g111 = ((Float(this->_attributes->height) / Float((int)2)) - _g10);		HX_STACK_VAR(_g111,"_g111");
				HX_STACK_LINE(105)
				Float _g12 = item->get_height();		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(105)
				Float _g13 = (Float(_g12) / Float((int)2));		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(105)
				Float _g14 = (_g111 - _g13);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(105)
				item->set_y(_g14);
			}
		}
	}
return null();
}



UICircular_obj::UICircular_obj()
{
}

Dynamic UICircular_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialise") ) { return initialise_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_startAngle") ) { return _startAngle; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_finishAngle") ) { return _finishAngle; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_maximumWidth") ) { return _maximumWidth; }
		if (HX_FIELD_EQ(inName,"drawComponent") ) { return drawComponent_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_maximumHeight") ) { return _maximumHeight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UICircular_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_startAngle") ) { _startAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_finishAngle") ) { _finishAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_maximumWidth") ) { _maximumWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_maximumHeight") ) { _maximumHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UICircular_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_radius"));
	outFields->push(HX_CSTRING("_maximumWidth"));
	outFields->push(HX_CSTRING("_maximumHeight"));
	outFields->push(HX_CSTRING("_startAngle"));
	outFields->push(HX_CSTRING("_finishAngle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(UICircular_obj,_radius),HX_CSTRING("_radius")},
	{hx::fsFloat,(int)offsetof(UICircular_obj,_maximumWidth),HX_CSTRING("_maximumWidth")},
	{hx::fsFloat,(int)offsetof(UICircular_obj,_maximumHeight),HX_CSTRING("_maximumHeight")},
	{hx::fsFloat,(int)offsetof(UICircular_obj,_startAngle),HX_CSTRING("_startAngle")},
	{hx::fsFloat,(int)offsetof(UICircular_obj,_finishAngle),HX_CSTRING("_finishAngle")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_radius"),
	HX_CSTRING("_maximumWidth"),
	HX_CSTRING("_maximumHeight"),
	HX_CSTRING("_startAngle"),
	HX_CSTRING("_finishAngle"),
	HX_CSTRING("initialise"),
	HX_CSTRING("layout"),
	HX_CSTRING("drawComponent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UICircular_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UICircular_obj::__mClass,"__mClass");
};

#endif

Class UICircular_obj::__mClass;

void UICircular_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UICircular"), hx::TCanCast< UICircular_obj> ,sStaticFields,sMemberFields,
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

void UICircular_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
