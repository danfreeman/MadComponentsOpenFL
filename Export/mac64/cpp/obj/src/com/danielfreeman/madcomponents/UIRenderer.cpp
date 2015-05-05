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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIContainerBaseClass
#include <com/danielfreeman/madcomponents/UIContainerBaseClass.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIImage
#include <com/danielfreeman/madcomponents/UIImage.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIRenderer
#include <com/danielfreeman/madcomponents/UIRenderer.h>
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

Void UIRenderer_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIRenderer","new",0xde4f10dd,"com.danielfreeman.madcomponents.UIRenderer.new","com/danielfreeman/madcomponents/UIRenderer.hx",58,0x8b0ffc10)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(58)
	super::__construct(screen,xml,attributes);
}
;
	return null();
}

//UIRenderer_obj::~UIRenderer_obj() { }

Dynamic UIRenderer_obj::__CreateEmpty() { return  new UIRenderer_obj; }
hx::ObjectPtr< UIRenderer_obj > UIRenderer_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIRenderer_obj > result = new UIRenderer_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIRenderer_obj > result = new UIRenderer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void UIRenderer_obj::initialise( ::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIRenderer","initialise",0x1e49a45a,"com.danielfreeman.madcomponents.UIRenderer.initialise","com/danielfreeman/madcomponents/UIRenderer.hx",62,0x8b0ffc10)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(63)
		this->_childAttributes = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(64)
		this->_children = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(65)
		this->_alignRight = Array_obj< bool >::__new();
		HX_STACK_LINE(66)
		for(::cpp::FastIterator_obj< ::com::danielfreeman::MadXML > *__it = ::cpp::CreateFastIterator< ::com::danielfreeman::MadXML >(xml->children(null())->iterator());  __it->hasNext(); ){
			::com::danielfreeman::MadXML xmlChild = __it->next();
			{
				HX_STACK_LINE(67)
				::com::danielfreeman::madcomponents::Attributes childAttributes = attributes->copy(xml,true);		HX_STACK_VAR(childAttributes,"childAttributes");
				HX_STACK_LINE(68)
				childAttributes->y = (int)0;
				HX_STACK_LINE(69)
				::String localName = xmlChild->get_name();		HX_STACK_VAR(localName,"localName");
				HX_STACK_LINE(70)
				if ((::com::danielfreeman::madcomponents::UI_obj::isContainer(localName))){
					HX_STACK_LINE(71)
					this->_childAttributes->push(childAttributes);
					HX_STACK_LINE(72)
					::openfl::display::DisplayObject _g = ::com::danielfreeman::madcomponents::UI_obj::containers(hx::ObjectPtr<OBJ_>(this),xmlChild,childAttributes);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(72)
					this->_children->push(_g);
					HX_STACK_LINE(73)
					bool _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(73)
					if ((xmlChild->has->resolve(HX_CSTRING("alignH")))){
						HX_STACK_LINE(73)
						::String _g1 = xmlChild->att->resolve(HX_CSTRING("alignH"));		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(73)
						_g2 = (_g1 == HX_CSTRING("right"));
					}
					else{
						HX_STACK_LINE(73)
						_g2 = false;
					}
					HX_STACK_LINE(73)
					this->_alignRight->push(_g2);
				}
				else{
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIRenderer.hx",76,0x8b0ffc10)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("fileName") , HX_CSTRING("UIRenderer.hx"),false);
								__result->Add(HX_CSTRING("lineNumber") , (int)76,false);
								__result->Add(HX_CSTRING("className") , HX_CSTRING("com.danielfreeman.madcomponents.UIRenderer"),false);
								__result->Add(HX_CSTRING("methodName") , HX_CSTRING("initialise"),false);
								__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING(" not supported by UIRenderer"))),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(76)
					::haxe::Log_obj::trace(localName,_Function_3_1::Block());
				}
			}
;
		}
	}
return null();
}


Void UIRenderer_obj::drawComponent( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIRenderer","drawComponent",0x3ba0a2d6,"com.danielfreeman.madcomponents.UIRenderer.drawComponent","com/danielfreeman/madcomponents/UIRenderer.hx",82,0x8b0ffc10)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		Float left = (int)0;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(84)
		Float right = this->_attributes->get_widthH();		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(85)
		Float lastY = (int)0;		HX_STACK_VAR(lastY,"lastY");
		HX_STACK_LINE(86)
		::com::danielfreeman::madcomponents::UIImage image;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(86)
		if (((  (((this->_children->length > (int)0))) ? bool(::Std_obj::is(this->_children->__get((int)0).StaticCast< ::openfl::display::DisplayObject >(),hx::ClassOf< ::com::danielfreeman::madcomponents::UIImage >())) : bool(false) ))){
			HX_STACK_LINE(86)
			image = hx::TCast< com::danielfreeman::madcomponents::UIImage >::cast(this->_children->__get((int)0).StaticCast< ::openfl::display::DisplayObject >());
		}
		else{
			HX_STACK_LINE(86)
			image = null();
		}
		HX_STACK_LINE(87)
		if (((image != null()))){
			HX_STACK_LINE(88)
			Float _g = image->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			Float _g1 = this->_attributes->get_paddingH();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(88)
			Float _g2 = (_g + _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(88)
			left = _g2;
		}
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			int _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(91)
			if (((image != null()))){
				HX_STACK_LINE(91)
				_g1 = (int)1;
			}
			else{
				HX_STACK_LINE(91)
				_g1 = (int)0;
			}
			HX_STACK_LINE(91)
			int _g = this->_children->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(91)
			while((true)){
				HX_STACK_LINE(91)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(91)
					break;
				}
				HX_STACK_LINE(91)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(92)
				::openfl::display::DisplayObject child = this->_children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(93)
				if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::IComponentUI >()))){
					HX_STACK_LINE(94)
					::com::danielfreeman::madcomponents::Attributes childAttributes = this->_childAttributes->__get(i).StaticCast< ::com::danielfreeman::madcomponents::Attributes >();		HX_STACK_VAR(childAttributes,"childAttributes");
					HX_STACK_LINE(95)
					childAttributes->x = left;
					HX_STACK_LINE(96)
					childAttributes->width = (right - left);
					HX_STACK_LINE(97)
					(hx::TCast< com::danielfreeman::madcomponents::IComponentUI >::cast(child))->layout(childAttributes);
					HX_STACK_LINE(98)
					child->set_y(lastY);
					HX_STACK_LINE(99)
					if ((this->_alignRight->__get(i))){
						HX_STACK_LINE(100)
						Float _g3 = child->get_width();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(100)
						Float _g4 = (right - _g3);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(100)
						right = _g4;
						HX_STACK_LINE(101)
						child->set_x(right);
					}
					else{
						HX_STACK_LINE(104)
						child->set_x(left);
						HX_STACK_LINE(105)
						Float _g5 = child->get_height();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(105)
						Float _g6 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(105)
						Float _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(105)
						hx::AddEq(lastY,_g7);
					}
				}
			}
		}
		HX_STACK_LINE(109)
		if (((image != null()))){
			HX_STACK_LINE(110)
			Float _g8 = image->get_height();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(110)
			Float _g9 = (_g8 - lastY);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(110)
			Float _g10 = this->_attributes->get_paddingV();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(110)
			Float _g11 = (_g9 + _g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(110)
			Float offset = (Float(_g11) / Float((int)2));		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(111)
			if (((offset > (int)0))){
				HX_STACK_LINE(112)
				int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(112)
				int _g = this->_children->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(112)
				while((true)){
					HX_STACK_LINE(112)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(112)
						break;
					}
					HX_STACK_LINE(112)
					int j = (_g1)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(113)
					{
						HX_STACK_LINE(113)
						::openfl::display::DisplayObject _g2 = this->_children->__get(j).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(113)
						Float _g12 = _g2->get_y();		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(113)
						Float _g13 = (_g12 + offset);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(113)
						_g2->set_y(_g13);
					}
				}
			}
		}
	}
return null();
}


Void UIRenderer_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIRenderer","destructor",0x45a0545c,"com.danielfreeman.madcomponents.UIRenderer.destructor","com/danielfreeman/madcomponents/UIRenderer.hx",120,0x8b0ffc10)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		this->super::destructor();
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(122)
			Array< ::Dynamic > _g1 = this->_children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(122)
			while((true)){
				HX_STACK_LINE(122)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(122)
					break;
				}
				HX_STACK_LINE(122)
				::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(122)
				++(_g);
				HX_STACK_LINE(123)
				if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::IComponentUI >()))){
					HX_STACK_LINE(124)
					(hx::TCast< com::danielfreeman::madcomponents::IComponentUI >::cast(child))->destructor();
				}
			}
		}
	}
return null();
}



UIRenderer_obj::UIRenderer_obj()
{
}

void UIRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIRenderer);
	HX_MARK_MEMBER_NAME(_childAttributes,"_childAttributes");
	HX_MARK_MEMBER_NAME(_children,"_children");
	HX_MARK_MEMBER_NAME(_alignRight,"_alignRight");
	::com::danielfreeman::madcomponents::UIContainerBaseClass_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_childAttributes,"_childAttributes");
	HX_VISIT_MEMBER_NAME(_children,"_children");
	HX_VISIT_MEMBER_NAME(_alignRight,"_alignRight");
	::com::danielfreeman::madcomponents::UIContainerBaseClass_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_children") ) { return _children; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialise") ) { return initialise_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_alignRight") ) { return _alignRight; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawComponent") ) { return drawComponent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_childAttributes") ) { return _childAttributes; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_children") ) { _children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_alignRight") ) { _alignRight=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_childAttributes") ) { _childAttributes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_childAttributes"));
	outFields->push(HX_CSTRING("_children"));
	outFields->push(HX_CSTRING("_alignRight"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UIRenderer_obj,_childAttributes),HX_CSTRING("_childAttributes")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UIRenderer_obj,_children),HX_CSTRING("_children")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(UIRenderer_obj,_alignRight),HX_CSTRING("_alignRight")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_childAttributes"),
	HX_CSTRING("_children"),
	HX_CSTRING("_alignRight"),
	HX_CSTRING("initialise"),
	HX_CSTRING("drawComponent"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIRenderer_obj::__mClass,"__mClass");
};

#endif

Class UIRenderer_obj::__mClass;

void UIRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIRenderer"), hx::TCanCast< UIRenderer_obj> ,sStaticFields,sMemberFields,
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

void UIRenderer_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
