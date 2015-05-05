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
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIButton
#include <com/danielfreeman/madcomponents/UIButton.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIPages
#include <com/danielfreeman/madcomponents/UIPages.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UITabButton
#include <com/danielfreeman/madcomponents/UITabButton.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UITabPages
#include <com/danielfreeman/madcomponents/UITabPages.h>
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
#ifndef INCLUDED_openfl_system_Capabilities
#include <openfl/system/Capabilities.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UITabPages_obj::__construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","new",0xc52b1e49,"com.danielfreeman.madcomponents.UITabPages.new","com/danielfreeman/madcomponents/UITabPages.hx",35,0x24c78024)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(57)
	this->_fullPage = Array_obj< bool >::__new();
	HX_STACK_LINE(56)
	this->_iconOffset = (int)0;
	HX_STACK_LINE(50)
	this->_mouseDownTarget = null();
	HX_STACK_LINE(49)
	this->_buttons = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(48)
	this->_buttonBar = null();
	HX_STACK_LINE(62)
	::com::danielfreeman::madcomponents::Attributes _g = this->_attributes = attributes;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(62)
	this->_fullPageAttributes = _g;
	HX_STACK_LINE(63)
	int _g1 = attributes->get_colour();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(63)
	this->_colour = _g1;
	HX_STACK_LINE(64)
	bool _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(64)
	if ((xml->has->resolve(HX_CSTRING("alt")))){
		HX_STACK_LINE(64)
		::String _g2 = xml->att->resolve(HX_CSTRING("alt"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(64)
		_g3 = (_g2 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(64)
		_g3 = false;
	}
	HX_STACK_LINE(64)
	this->_alt = _g3;
	HX_STACK_LINE(65)
	bool _g5;		HX_STACK_VAR(_g5,"_g5");
	struct _Function_1_1{
		inline static bool Block( ::MadXML &xml){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UITabPages.hx",65,0x24c78024)
			{
				HX_STACK_LINE(65)
				::String _g4 = xml->att->resolve(HX_CSTRING("pixelSnapping"));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(65)
				return (_g4 == HX_CSTRING("true"));
			}
			return null();
		}
	};
	HX_STACK_LINE(65)
	if ((!(((  ((xml->has->resolve(HX_CSTRING("pixelSnapping")))) ? bool(_Function_1_1::Block(xml)) : bool(false) ))))){
		HX_STACK_LINE(65)
		_g5 = xml->hasNode->resolve(HX_CSTRING("data"));
	}
	else{
		HX_STACK_LINE(65)
		_g5 = true;
	}
	HX_STACK_LINE(65)
	this->_pixelSnapping = _g5;
	HX_STACK_LINE(66)
	Float _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(66)
	if ((xml->has->resolve(HX_CSTRING("iconOffset")))){
		HX_STACK_LINE(66)
		::String _g6 = xml->att->resolve(HX_CSTRING("iconOffset"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(66)
		_g7 = ::Std_obj::parseFloat(_g6);
	}
	else{
		HX_STACK_LINE(66)
		_g7 = (int)0;
	}
	HX_STACK_LINE(66)
	this->_iconOffset = _g7;
	HX_STACK_LINE(67)
	for(::cpp::FastIterator_obj< ::MadXML > *__it = ::cpp::CreateFastIterator< ::MadXML >(xml->children(null())->iterator());  __it->hasNext(); ){
		::MadXML child = __it->next();
		{
			HX_STACK_LINE(68)
			bool _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(68)
			if ((child->has->resolve(HX_CSTRING("fullPage")))){
				HX_STACK_LINE(68)
				::String _g8 = child->att->resolve(HX_CSTRING("fullPage"));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(68)
				_g9 = (_g8 == HX_CSTRING("true"));
			}
			else{
				HX_STACK_LINE(68)
				_g9 = false;
			}
			HX_STACK_LINE(68)
			this->_fullPage->push(_g9);
		}
;
	}
	HX_STACK_LINE(70)
	this->initialiseButtonBar(xml,attributes);
	HX_STACK_LINE(71)
	super::__construct(screen,xml,attributes);
	HX_STACK_LINE(73)
	this->addChild(this->_buttonBar);
	HX_STACK_LINE(75)
	this->_buttonBar->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null(),null(),null());
	HX_STACK_LINE(76)
	this->_buttonBar->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null(),null(),null());
	HX_STACK_LINE(77)
	int _g10 = this->get_numChildren();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(77)
	int _g11 = (_g10 - (int)1);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(77)
	this->setChildIndex(this->_buttonBar,_g11);
	HX_STACK_LINE(78)
	this->extractData(xml);
}
;
	return null();
}

//UITabPages_obj::~UITabPages_obj() { }

Dynamic UITabPages_obj::__CreateEmpty() { return  new UITabPages_obj; }
hx::ObjectPtr< UITabPages_obj > UITabPages_obj::__new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UITabPages_obj > result = new UITabPages_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UITabPages_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UITabPages_obj > result = new UITabPages_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool UITabPages_obj::get_fullPage( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","get_fullPage",0xe59d447e,"com.danielfreeman.madcomponents.UITabPages.get_fullPage","com/danielfreeman/madcomponents/UITabPages.hx",83,0x24c78024)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	return this->_fullPage->__get(this->_page);
}


HX_DEFINE_DYNAMIC_FUNC0(UITabPages_obj,get_fullPage,return )

bool UITabPages_obj::set_fullPage( bool value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","set_fullPage",0xfa9667f2,"com.danielfreeman.madcomponents.UITabPages.set_fullPage","com/danielfreeman/madcomponents/UITabPages.hx",87,0x24c78024)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(88)
	this->_fullPage[this->_page] = value;
	HX_STACK_LINE(89)
	this->_buttonBar->set_visible(!(value));
	HX_STACK_LINE(90)
	this->doLayout();
	HX_STACK_LINE(91)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UITabPages_obj,set_fullPage,return )

::openfl::display::Sprite UITabPages_obj::get_buttonBar( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","get_buttonBar",0x19a74a01,"com.danielfreeman.madcomponents.UITabPages.get_buttonBar","com/danielfreeman/madcomponents/UITabPages.hx",96,0x24c78024)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	return this->_buttonBar;
}


HX_DEFINE_DYNAMIC_FUNC0(UITabPages_obj,get_buttonBar,return )

Void UITabPages_obj::extractData( ::MadXML xml){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","extractData",0xe5564af4,"com.danielfreeman.madcomponents.UITabPages.extractData","com/danielfreeman/madcomponents/UITabPages.hx",101,0x24c78024)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_LINE(101)
		if ((xml->hasNode->resolve(HX_CSTRING("data")))){
			HX_STACK_LINE(102)
			if ((!(xml->node->resolve(HX_CSTRING("data"))->has->resolve(HX_CSTRING("size"))))){
				HX_STACK_LINE(103)
				::MadXML _g = xml->node->resolve(HX_CSTRING("data"));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(103)
				this->set_xmlData(_g);
				HX_STACK_LINE(104)
				return null();
			}
			else{
				HX_STACK_LINE(106)
				::String _g1 = xml->node->resolve(HX_CSTRING("data"))->att->resolve(HX_CSTRING("size")).substr((int)-3,(int)3).toUpperCase();		HX_STACK_VAR(_g1,"_g1");
				struct _Function_3_1{
					inline static bool Block( ::MadXML &xml){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UITabPages.hx",106,0x24c78024)
						{
							HX_STACK_LINE(106)
							::String _g2 = xml->node->resolve(HX_CSTRING("data"))->att->resolve(HX_CSTRING("size")).substr((int)0,(int)-3);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(106)
							Float _g3 = ::Std_obj::parseFloat(_g2);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(106)
							Float _g4 = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(106)
							return (_g3 >= _g4);
						}
						return null();
					}
				};
				HX_STACK_LINE(106)
				if (((  (((_g1 == HX_CSTRING("DPI")))) ? bool(_Function_3_1::Block(xml)) : bool(false) ))){
					HX_STACK_LINE(107)
					::MadXML _g5 = xml->node->resolve(HX_CSTRING("data"));		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(107)
					this->set_xmlData(_g5);
					HX_STACK_LINE(108)
					return null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UITabPages_obj,extractData,(void))

::Class UITabPages_obj::imageAttributeBitmapData( Dynamic item){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","imageAttributeBitmapData",0x5e5565d1,"com.danielfreeman.madcomponents.UITabPages.imageAttributeBitmapData","com/danielfreeman/madcomponents/UITabPages.hx",115,0x24c78024)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	struct _Function_1_1{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UITabPages.hx",115,0x24c78024)
			{
				HX_STACK_LINE(115)
				Float _g = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(115)
				return (_g < (int)160);
			}
			return null();
		}
	};
	HX_STACK_LINE(115)
	if (((  (((item->__Field(HX_CSTRING("ldpi"),true) != null()))) ? bool(_Function_1_1::Block()) : bool(false) ))){
		HX_STACK_LINE(116)
		this->_pixelSnapping = true;
		HX_STACK_LINE(117)
		return ::Type_obj::resolveClass(item->__Field(HX_CSTRING("ldpi"),true));
	}
	else{
		struct _Function_2_1{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UITabPages.hx",119,0x24c78024)
				{
					HX_STACK_LINE(119)
					Float _g1 = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(119)
					return (_g1 < (int)240);
				}
				return null();
			}
		};
		HX_STACK_LINE(119)
		if (((  (((item->__Field(HX_CSTRING("mdpi"),true) != null()))) ? bool(_Function_2_1::Block()) : bool(false) ))){
			HX_STACK_LINE(120)
			this->_pixelSnapping = true;
			HX_STACK_LINE(121)
			return ::Type_obj::resolveClass(item->__Field(HX_CSTRING("mdpi"),true));
		}
		else{
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UITabPages.hx",123,0x24c78024)
					{
						HX_STACK_LINE(123)
						Float _g2 = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(123)
						return (_g2 < (int)320);
					}
					return null();
				}
			};
			HX_STACK_LINE(123)
			if (((  (((item->__Field(HX_CSTRING("hdpi"),true) != null()))) ? bool(_Function_3_1::Block()) : bool(false) ))){
				HX_STACK_LINE(124)
				this->_pixelSnapping = true;
				HX_STACK_LINE(125)
				return ::Type_obj::resolveClass(item->__Field(HX_CSTRING("hdpi"),true));
			}
			else{
				struct _Function_4_1{
					inline static bool Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UITabPages.hx",127,0x24c78024)
						{
							HX_STACK_LINE(127)
							Float _g3 = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(127)
							return (_g3 < (int)400);
						}
						return null();
					}
				};
				HX_STACK_LINE(127)
				if (((  (((item->__Field(HX_CSTRING("xhdpi"),true) != null()))) ? bool(_Function_4_1::Block()) : bool(false) ))){
					HX_STACK_LINE(128)
					this->_pixelSnapping = true;
					HX_STACK_LINE(129)
					return ::Type_obj::resolveClass(item->__Field(HX_CSTRING("xhdpi"),true));
				}
				else{
					struct _Function_5_1{
						inline static bool Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UITabPages.hx",131,0x24c78024)
							{
								HX_STACK_LINE(131)
								Float _g4 = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(131)
								return (_g4 >= (int)400);
							}
							return null();
						}
					};
					HX_STACK_LINE(131)
					if (((  (((item->__Field(HX_CSTRING("xxhdpi"),true) != null()))) ? bool(_Function_5_1::Block()) : bool(false) ))){
						HX_STACK_LINE(132)
						this->_pixelSnapping = true;
						HX_STACK_LINE(133)
						return ::Type_obj::resolveClass(item->__Field(HX_CSTRING("xxhdpi"),true));
					}
					else{
						HX_STACK_LINE(135)
						if (((item->__Field(HX_CSTRING("image"),true) != null()))){
							HX_STACK_LINE(136)
							return ::Type_obj::resolveClass(item->__Field(HX_CSTRING("image"),true));
						}
						else{
							HX_STACK_LINE(139)
							return null();
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(115)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UITabPages_obj,imageAttributeBitmapData,return )

Dynamic UITabPages_obj::set_data( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","set_data",0x6434109e,"com.danielfreeman.madcomponents.UITabPages.set_data","com/danielfreeman/madcomponents/UITabPages.hx",144,0x24c78024)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(145)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(146)
	{
		HX_STACK_LINE(146)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(146)
		while((true)){
			HX_STACK_LINE(146)
			if ((!(((_g < value->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(146)
				break;
			}
			HX_STACK_LINE(146)
			Dynamic item = value->__GetItem(_g);		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(146)
			++(_g);
			HX_STACK_LINE(147)
			if ((::Std_obj::is(item,hx::ClassOf< ::String >()))){
				HX_STACK_LINE(148)
				int _g1 = (index)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(148)
				::String _g11 = ::Std_obj::string(item);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(148)
				this->setTab(_g1,_g11,null());
			}
			else{
				HX_STACK_LINE(151)
				::Class image = this->imageAttributeBitmapData(item);		HX_STACK_VAR(image,"image");
				HX_STACK_LINE(152)
				int _g2 = (index)++;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(152)
				::String _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(152)
				if ((::Reflect_obj::hasField(item,HX_CSTRING("label")))){
					HX_STACK_LINE(152)
					_g3 = ::Reflect_obj::field(item,HX_CSTRING("label"));
				}
				else{
					HX_STACK_LINE(152)
					_g3 = HX_CSTRING("");
				}
				HX_STACK_LINE(152)
				this->setTab(_g2,_g3,image);
			}
		}
	}
	HX_STACK_LINE(155)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UITabPages_obj,set_data,return )

::MadXML UITabPages_obj::set_xmlData( ::MadXML value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","set_xmlData",0x8e056dad,"com.danielfreeman.madcomponents.UITabPages.set_xmlData","com/danielfreeman/madcomponents/UITabPages.hx",162,0x24c78024)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(163)
	Dynamic result = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(164)
	::MadXMLList children = value->children(null());		HX_STACK_VAR(children,"children");
	HX_STACK_LINE(165)
	for(::cpp::FastIterator_obj< ::MadXML > *__it = ::cpp::CreateFastIterator< ::MadXML >(children->iterator());  __it->hasNext(); ){
		::MadXML child = __it->next();
		if ((!(child->get_nodeKindIsText()))){
			HX_STACK_LINE(167)
			Dynamic _g = this->attributesToObject(child);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(167)
			result->__Field(HX_CSTRING("push"),true)(_g);
		}
;
	}
	HX_STACK_LINE(170)
	this->set_data(result);
	HX_STACK_LINE(171)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UITabPages_obj,set_xmlData,return )

Dynamic UITabPages_obj::attributesToObject( ::MadXML child){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","attributesToObject",0xa8857ac8,"com.danielfreeman.madcomponents.UITabPages.attributesToObject","com/danielfreeman/madcomponents/UITabPages.hx",175,0x24c78024)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(176)
	Dynamic attributes = child->x->attributes();		HX_STACK_VAR(attributes,"attributes");
	HX_STACK_LINE(177)
	if ((!(attributes->__Field(HX_CSTRING("hasNext"),true)()))){
		HX_STACK_LINE(178)
		::String _g = child->get_name();		HX_STACK_VAR(_g,"_g");
		struct _Function_2_1{
			inline static Dynamic Block( ::String &_g){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UITabPages.hx",178,0x24c78024)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("label") , _g,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(178)
		return _Function_2_1::Block(_g);
	}
	else{
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UITabPages.hx",181,0x24c78024)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(181)
		Dynamic result = _Function_2_1::Block();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(182)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(attributes);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(183)
				Dynamic value = child->x->get(key);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(183)
				if (((result != null()))){
					HX_STACK_LINE(183)
					result->__SetField(key,value,false);
				}
			}
;
		}
		HX_STACK_LINE(185)
		return result;
	}
	HX_STACK_LINE(187)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UITabPages_obj,attributesToObject,return )

Void UITabPages_obj::initialiseButtonBar( ::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","initialiseButtonBar",0x90bfd0b3,"com.danielfreeman.madcomponents.UITabPages.initialiseButtonBar","com/danielfreeman/madcomponents/UITabPages.hx",191,0x24c78024)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(192)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(192)
		this->_buttonBar = _g;
		HX_STACK_LINE(194)
		int count = (int)0;		HX_STACK_VAR(count,"count");
		struct _Function_1_1{
			inline static bool Block( ::MadXML &child){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UITabPages.hx",196,0x24c78024)
				{
					HX_STACK_LINE(196)
					::String _g1 = child->get_name();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(196)
					return (_g1 != HX_CSTRING("data"));
				}
				return null();
			}
		};
		HX_STACK_LINE(195)
		for(::cpp::FastIterator_obj< ::MadXML > *__it = ::cpp::CreateFastIterator< ::MadXML >(xml->children(null())->iterator());  __it->hasNext(); ){
			::MadXML child = __it->next();
			if (((  ((!(child->get_nodeKindIsText()))) ? bool(_Function_1_1::Block(child)) : bool(false) ))){
				HX_STACK_LINE(197)
				(count)++;
			}
;
		}
		HX_STACK_LINE(200)
		this->makeTabButtons(attributes,count,this->_alt);
		HX_STACK_LINE(201)
		::com::danielfreeman::madcomponents::Attributes _g2 = attributes->copy(null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(201)
		this->_pagesAttributes = _g2;
		HX_STACK_LINE(202)
		Float _g3 = this->_buttonBar->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(202)
		Float _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(202)
		_g4 = (_g3 - ((  ((this->_alt)) ? Float((int)1) : Float(6.0) )));
		HX_STACK_LINE(202)
		hx::SubEq(this->_pagesAttributes->height,_g4);
		HX_STACK_LINE(203)
		this->_buttonBar->set_y(this->_pagesAttributes->height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UITabPages_obj,initialiseButtonBar,(void))

Void UITabPages_obj::mouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","mouseDown",0x3c9ad3d0,"com.danielfreeman.madcomponents.UITabPages.mouseDown","com/danielfreeman/madcomponents/UITabPages.hx",207,0x24c78024)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(208)
		Dynamic _g = event->get_target();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(208)
		if ((::Std_obj::is(_g,hx::ClassOf< ::com::danielfreeman::madcomponents::UITabButton >()))){
			HX_STACK_LINE(208)
			::haxe::Log_obj::trace(HX_CSTRING("mouseDown"),hx::SourceInfo(HX_CSTRING("UITabPages.hx"),208,HX_CSTRING("com.danielfreeman.madcomponents.UITabPages"),HX_CSTRING("mouseDown")));
			HX_STACK_LINE(209)
			::com::danielfreeman::madcomponents::UITabButton _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(209)
			_g1 = hx::TCast< com::danielfreeman::madcomponents::UITabButton >::cast(event->get_target());
			HX_STACK_LINE(209)
			this->_mouseDownTarget = _g1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UITabPages_obj,mouseDown,(void))

Void UITabPages_obj::goToPage( int page,::String __o_transition){
::String transition = __o_transition.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","goToPage",0xb372c729,"com.danielfreeman.madcomponents.UITabPages.goToPage","com/danielfreeman/madcomponents/UITabPages.hx",214,0x24c78024)
	HX_STACK_THIS(this)
	HX_STACK_ARG(page,"page")
	HX_STACK_ARG(transition,"transition")
{
		HX_STACK_LINE(215)
		this->super::goToPage(page,transition);
		HX_STACK_LINE(216)
		this->_buttonBar->set_visible(!(this->_fullPage->__get(page)));
		HX_STACK_LINE(217)
		if ((!(this->_buttonBar->get_visible()))){
			HX_STACK_LINE(218)
			this->_thisPage->set_y((int)0);
		}
	}
return null();
}


Void UITabPages_obj::mouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","mouseUp",0x3fd1ea49,"com.danielfreeman.madcomponents.UITabPages.mouseUp","com/danielfreeman/madcomponents/UITabPages.hx",224,0x24c78024)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::UITabPages_obj > __this,::openfl::events::MouseEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UITabPages.hx",225,0x24c78024)
				{
					HX_STACK_LINE(225)
					Dynamic _g = event->get_target();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(225)
					return (_g == __this->_mouseDownTarget);
				}
				return null();
			}
		};
		HX_STACK_LINE(225)
		if (((  (((this->_mouseDownTarget != null()))) ? bool(_Function_1_1::Block(this,event)) : bool(false) ))){
			HX_STACK_LINE(226)
			Dynamic _g1 = ::Std_obj::parseInt(event->get_target()->__Field(HX_CSTRING("name"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(226)
			this->goToPage(_g1,null());
		}
		HX_STACK_LINE(228)
		this->_mouseDownTarget = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UITabPages_obj,mouseUp,(void))

Void UITabPages_obj::setTab( int index,::String label,::Class imageBitmapDataClass){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","setTab",0x8a69718a,"com.danielfreeman.madcomponents.UITabPages.setTab","com/danielfreeman/madcomponents/UITabPages.hx",234,0x24c78024)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(label,"label")
		HX_STACK_ARG(imageBitmapDataClass,"imageBitmapDataClass")
		HX_STACK_LINE(235)
		::com::danielfreeman::madcomponents::UITabButton button;		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(235)
		button = hx::TCast< com::danielfreeman::madcomponents::UITabButton >::cast(this->_buttons->__get(index).StaticCast< ::com::danielfreeman::madcomponents::UITabButton >());
		HX_STACK_LINE(236)
		button->set_text(label);
		HX_STACK_LINE(237)
		if (((imageBitmapDataClass != null()))){
			HX_STACK_LINE(239)
			button->set_imageBitmapDataClass(imageBitmapDataClass);
			HX_STACK_LINE(240)
			if ((this->_pixelSnapping)){
				HX_STACK_LINE(241)
				button->pixelSnapImage(this->_iconOffset);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(UITabPages_obj,setTab,(void))

Void UITabPages_obj::superLayout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","superLayout",0x4078d16e,"com.danielfreeman.madcomponents.UITabPages.superLayout","com/danielfreeman/madcomponents/UITabPages.hx",248,0x24c78024)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(248)
		this->super::layout(attributes);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UITabPages_obj,superLayout,(void))

Void UITabPages_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","layout",0x73b23861,"com.danielfreeman.madcomponents.UITabPages.layout","com/danielfreeman/madcomponents/UITabPages.hx",254,0x24c78024)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(255)
		this->_fullPageAttributes = attributes;
		HX_STACK_LINE(256)
		::com::danielfreeman::madcomponents::Attributes _g = attributes->copy(null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(256)
		this->_pagesAttributes = _g;
		HX_STACK_LINE(257)
		Float _g1 = this->_buttonBar->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(257)
		Float _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(257)
		_g2 = (_g1 - ((  ((this->_alt)) ? Float((int)1) : Float(6.0) )));
		HX_STACK_LINE(257)
		hx::SubEq(this->_pagesAttributes->height,_g2);
		HX_STACK_LINE(258)
		this->_buttonBar->set_y(this->_pagesAttributes->height);
		HX_STACK_LINE(259)
		this->superLayout(this->_pagesAttributes);
		HX_STACK_LINE(260)
		int _g3 = this->_buttonBar->get_numChildren();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(260)
		Float buttonWidth = (Float(attributes->width) / Float(_g3));		HX_STACK_VAR(buttonWidth,"buttonWidth");
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(261)
			int _g4 = this->_buttonBar->get_numChildren();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(261)
			while((true)){
				HX_STACK_LINE(261)
				if ((!(((_g11 < _g4))))){
					HX_STACK_LINE(261)
					break;
				}
				HX_STACK_LINE(261)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(262)
				::com::danielfreeman::madcomponents::UITabButton button;		HX_STACK_VAR(button,"button");
				HX_STACK_LINE(262)
				button = hx::TCast< com::danielfreeman::madcomponents::UITabButton >::cast(this->_buttonBar->getChildAt(i));
				HX_STACK_LINE(263)
				button->set_x((i * buttonWidth));
				HX_STACK_LINE(264)
				button->set_fixwidth(buttonWidth);
			}
		}
		HX_STACK_LINE(266)
		this->drawTabButtonBackground();
		HX_STACK_LINE(267)
		this->_attributes = attributes;
		HX_STACK_LINE(268)
		if (((  (((this->_thisPage != null()))) ? bool(!(this->_buttonBar->get_visible())) : bool(false) ))){
			HX_STACK_LINE(269)
			this->_thisPage->set_y((int)0);
		}
	}
return null();
}


Void UITabPages_obj::attachPages( Array< ::Dynamic > pages,hx::Null< bool >  __o_alt){
bool alt = __o_alt.Default(false);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","attachPages",0xc00fb428,"com.danielfreeman.madcomponents.UITabPages.attachPages","com/danielfreeman/madcomponents/UITabPages.hx",276,0x24c78024)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pages,"pages")
	HX_STACK_ARG(alt,"alt")
{
		HX_STACK_LINE(277)
		this->super::attachPages(pages,alt);
		HX_STACK_LINE(278)
		this->makeTabButtons(this->_attributes,pages->length,alt);
		HX_STACK_LINE(279)
		this->_buttonBar->set_y((this->_attributes->height + ((  ((alt)) ? Float((int)1) : Float(6.0) ))));
	}
return null();
}


int UITabPages_obj::set_pageNumber( int value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","set_pageNumber",0x1d3203ec,"com.danielfreeman.madcomponents.UITabPages.set_pageNumber","com/danielfreeman/madcomponents/UITabPages.hx",283,0x24c78024)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(284)
	{
		HX_STACK_LINE(284)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(284)
		int _g = this->_buttonBar->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(284)
		while((true)){
			HX_STACK_LINE(284)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(284)
				break;
			}
			HX_STACK_LINE(284)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(285)
			::com::danielfreeman::madcomponents::UITabButton button;		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(285)
			button = hx::TCast< com::danielfreeman::madcomponents::UITabButton >::cast(this->_buttonBar->getChildAt(i));
			HX_STACK_LINE(286)
			button->set_state((i == value));
		}
	}
	HX_STACK_LINE(288)
	this->goToPage(value,null());
	HX_STACK_LINE(289)
	return value;
}


::com::danielfreeman::madcomponents::Attributes UITabPages_obj::get_attributes( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","get_attributes",0x4523c9d7,"com.danielfreeman.madcomponents.UITabPages.get_attributes","com/danielfreeman/madcomponents/UITabPages.hx",294,0x24c78024)
	HX_STACK_THIS(this)
	HX_STACK_LINE(294)
	return this->_fullPageAttributes;
}


::com::danielfreeman::madcomponents::Attributes UITabPages_obj::childAttributes( int index){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","childAttributes",0x7ebbf8fc,"com.danielfreeman.madcomponents.UITabPages.childAttributes","com/danielfreeman/madcomponents/UITabPages.hx",299,0x24c78024)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(299)
	if ((this->_fullPage->__get(index))){
		HX_STACK_LINE(300)
		return this->_fullPageAttributes->copy(null(),null());
	}
	else{
		HX_STACK_LINE(303)
		return this->_pagesAttributes->copy(null(),null());
	}
	HX_STACK_LINE(299)
	return null();
}


Void UITabPages_obj::makeTabButtons( ::com::danielfreeman::madcomponents::Attributes attributes,int numberOfPages,bool alt){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","makeTabButtons",0x5f3a10b1,"com.danielfreeman.madcomponents.UITabPages.makeTabButtons","com/danielfreeman/madcomponents/UITabPages.hx",312,0x24c78024)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_ARG(numberOfPages,"numberOfPages")
		HX_STACK_ARG(alt,"alt")
		HX_STACK_LINE(312)
		if (((numberOfPages > (int)0))){
			HX_STACK_LINE(313)
			Float buttonWidth = (Float(attributes->width) / Float(numberOfPages));		HX_STACK_VAR(buttonWidth,"buttonWidth");
			HX_STACK_LINE(314)
			{
				HX_STACK_LINE(314)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(314)
				while((true)){
					HX_STACK_LINE(314)
					if ((!(((_g < numberOfPages))))){
						HX_STACK_LINE(314)
						break;
					}
					HX_STACK_LINE(314)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(315)
					::String _g1 = ::Std_obj::string(i);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(315)
					bool _g11 = this->_attributes->get_style7();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(315)
					::com::danielfreeman::madcomponents::UITabButton _tab = ::com::danielfreeman::madcomponents::UITabButton_obj::__new(this->_buttonBar,((i * buttonWidth) - 0.5),(int)0,_g1,this->_colour,alt,_g11);		HX_STACK_VAR(_tab,"_tab");
					HX_STACK_LINE(316)
					this->_buttons->push(_tab);
					HX_STACK_LINE(317)
					::String _g2 = ::Std_obj::string(i);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(317)
					_tab->set_name(_g2);
					HX_STACK_LINE(318)
					_tab->set_fixwidth((buttonWidth + (int)1));
				}
			}
			HX_STACK_LINE(321)
			(hx::TCast< com::danielfreeman::madcomponents::UITabButton >::cast(this->_buttons->__get((int)0).StaticCast< ::com::danielfreeman::madcomponents::UITabButton >()))->set_state(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(UITabPages_obj,makeTabButtons,(void))

int UITabPages_obj::set_colour( int value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","set_colour",0x89d207c0,"com.danielfreeman.madcomponents.UITabPages.set_colour","com/danielfreeman/madcomponents/UITabPages.hx",328,0x24c78024)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(329)
	this->_colour = value;
	HX_STACK_LINE(330)
	this->drawTabButtonBackground();
	HX_STACK_LINE(331)
	{
		HX_STACK_LINE(331)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(331)
		Array< ::Dynamic > _g1 = this->_buttons;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(331)
		while((true)){
			HX_STACK_LINE(331)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(331)
				break;
			}
			HX_STACK_LINE(331)
			::com::danielfreeman::madcomponents::UITabButton button = _g1->__get(_g).StaticCast< ::com::danielfreeman::madcomponents::UITabButton >();		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(331)
			++(_g);
			HX_STACK_LINE(332)
			button->set_colour(value);
		}
	}
	HX_STACK_LINE(334)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UITabPages_obj,set_colour,return )

Void UITabPages_obj::drawTabButtonBackground( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","drawTabButtonBackground",0x89a703ba,"com.danielfreeman.madcomponents.UITabPages.drawTabButtonBackground","com/danielfreeman/madcomponents/UITabPages.hx",340,0x24c78024)
		HX_STACK_THIS(this)
		HX_STACK_LINE(341)
		::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(342)
		int _g = ::com::danielfreeman::madcomponents::Colour_obj::lighten(this->_colour,(int)96);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(342)
		int _g1 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(342)
		int _g2 = ::com::danielfreeman::madcomponents::Colour_obj::darken(this->_colour,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(342)
		Array< int > gradient = Array_obj< int >::__new().Add(_g).Add(_g1).Add(_g2);		HX_STACK_VAR(gradient,"gradient");
		HX_STACK_LINE(343)
		Float _g3 = this->get_width();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(343)
		Float _g4 = this->get_height();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(343)
		matr->createGradientBox(_g3,_g4,(Float(::Math_obj::PI) / Float((int)2)),(int)0,(int)0);
		HX_STACK_LINE(344)
		this->_buttonBar->get_graphics()->clear();
		HX_STACK_LINE(345)
		this->_buttonBar->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,gradient,Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)128).Add((int)255)),matr,null(),null(),null());
		HX_STACK_LINE(346)
		Float _g5 = this->_buttonBar->get_width();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(346)
		Float _g6 = this->_buttonBar->get_height();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(346)
		Float _g7 = (_g6 + 1.0);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(346)
		this->_buttonBar->get_graphics()->drawRect((int)0,-1.,_g5,_g7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UITabPages_obj,drawTabButtonBackground,(void))

::com::danielfreeman::madcomponents::UITabButton UITabPages_obj::button( int index){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","button",0xf4d9eba9,"com.danielfreeman.madcomponents.UITabPages.button","com/danielfreeman/madcomponents/UITabPages.hx",351,0x24c78024)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(351)
	return hx::TCast< com::danielfreeman::madcomponents::UITabButton >::cast(this->_buttons->__get(index).StaticCast< ::com::danielfreeman::madcomponents::UITabButton >());
}


HX_DEFINE_DYNAMIC_FUNC1(UITabPages_obj,button,return )

Void UITabPages_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UITabPages","destructor",0xe3580c70,"com.danielfreeman.madcomponents.UITabPages.destructor","com/danielfreeman/madcomponents/UITabPages.hx",355,0x24c78024)
		HX_STACK_THIS(this)
		HX_STACK_LINE(356)
		this->_buttonBar->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null());
		HX_STACK_LINE(357)
		this->_buttonBar->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(358)
		this->super::destructor();
	}
return null();
}


Float UITabPages_obj::PADDING;

Float UITabPages_obj::TWEAK;


UITabPages_obj::UITabPages_obj()
{
}

void UITabPages_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UITabPages);
	HX_MARK_MEMBER_NAME(_buttonBar,"_buttonBar");
	HX_MARK_MEMBER_NAME(_buttons,"_buttons");
	HX_MARK_MEMBER_NAME(_mouseDownTarget,"_mouseDownTarget");
	HX_MARK_MEMBER_NAME(_colour,"_colour");
	HX_MARK_MEMBER_NAME(_alt,"_alt");
	HX_MARK_MEMBER_NAME(_fullPageAttributes,"_fullPageAttributes");
	HX_MARK_MEMBER_NAME(_pagesAttributes,"_pagesAttributes");
	HX_MARK_MEMBER_NAME(_pixelSnapping,"_pixelSnapping");
	HX_MARK_MEMBER_NAME(_iconOffset,"_iconOffset");
	HX_MARK_MEMBER_NAME(_fullPage,"_fullPage");
	::com::danielfreeman::madcomponents::UIPages_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UITabPages_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_buttonBar,"_buttonBar");
	HX_VISIT_MEMBER_NAME(_buttons,"_buttons");
	HX_VISIT_MEMBER_NAME(_mouseDownTarget,"_mouseDownTarget");
	HX_VISIT_MEMBER_NAME(_colour,"_colour");
	HX_VISIT_MEMBER_NAME(_alt,"_alt");
	HX_VISIT_MEMBER_NAME(_fullPageAttributes,"_fullPageAttributes");
	HX_VISIT_MEMBER_NAME(_pagesAttributes,"_pagesAttributes");
	HX_VISIT_MEMBER_NAME(_pixelSnapping,"_pixelSnapping");
	HX_VISIT_MEMBER_NAME(_iconOffset,"_iconOffset");
	HX_VISIT_MEMBER_NAME(_fullPage,"_fullPage");
	::com::danielfreeman::madcomponents::UIPages_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UITabPages_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_alt") ) { return _alt; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setTab") ) { return setTab_dyn(); }
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		if (HX_FIELD_EQ(inName,"button") ) { return button_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_colour") ) { return _colour; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fullPage") ) { return get_fullPage(); }
		if (HX_FIELD_EQ(inName,"_buttons") ) { return _buttons; }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		if (HX_FIELD_EQ(inName,"goToPage") ) { return goToPage_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"buttonBar") ) { return get_buttonBar(); }
		if (HX_FIELD_EQ(inName,"_fullPage") ) { return _fullPage; }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_buttonBar") ) { return _buttonBar; }
		if (HX_FIELD_EQ(inName,"set_colour") ) { return set_colour_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_iconOffset") ) { return _iconOffset; }
		if (HX_FIELD_EQ(inName,"extractData") ) { return extractData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_xmlData") ) { return set_xmlData_dyn(); }
		if (HX_FIELD_EQ(inName,"superLayout") ) { return superLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"attachPages") ) { return attachPages_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_fullPage") ) { return get_fullPage_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fullPage") ) { return set_fullPage_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_buttonBar") ) { return get_buttonBar_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_pixelSnapping") ) { return _pixelSnapping; }
		if (HX_FIELD_EQ(inName,"set_pageNumber") ) { return set_pageNumber_dyn(); }
		if (HX_FIELD_EQ(inName,"get_attributes") ) { return get_attributes_dyn(); }
		if (HX_FIELD_EQ(inName,"makeTabButtons") ) { return makeTabButtons_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"childAttributes") ) { return childAttributes_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseDownTarget") ) { return _mouseDownTarget; }
		if (HX_FIELD_EQ(inName,"_pagesAttributes") ) { return _pagesAttributes; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"attributesToObject") ) { return attributesToObject_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_fullPageAttributes") ) { return _fullPageAttributes; }
		if (HX_FIELD_EQ(inName,"initialiseButtonBar") ) { return initialiseButtonBar_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"drawTabButtonBackground") ) { return drawTabButtonBackground_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"imageAttributeBitmapData") ) { return imageAttributeBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UITabPages_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return set_data(inValue); }
		if (HX_FIELD_EQ(inName,"_alt") ) { _alt=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { return set_colour(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xmlData") ) { return set_xmlData(inValue); }
		if (HX_FIELD_EQ(inName,"_colour") ) { _colour=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fullPage") ) { return set_fullPage(inValue); }
		if (HX_FIELD_EQ(inName,"_buttons") ) { _buttons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fullPage") ) { _fullPage=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_buttonBar") ) { _buttonBar=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_iconOffset") ) { _iconOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_pixelSnapping") ) { _pixelSnapping=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseDownTarget") ) { _mouseDownTarget=inValue.Cast< ::com::danielfreeman::madcomponents::UITabButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pagesAttributes") ) { _pagesAttributes=inValue.Cast< ::com::danielfreeman::madcomponents::Attributes >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_fullPageAttributes") ) { _fullPageAttributes=inValue.Cast< ::com::danielfreeman::madcomponents::Attributes >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UITabPages_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fullPage"));
	outFields->push(HX_CSTRING("buttonBar"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("xmlData"));
	outFields->push(HX_CSTRING("colour"));
	outFields->push(HX_CSTRING("_buttonBar"));
	outFields->push(HX_CSTRING("_buttons"));
	outFields->push(HX_CSTRING("_mouseDownTarget"));
	outFields->push(HX_CSTRING("_colour"));
	outFields->push(HX_CSTRING("_alt"));
	outFields->push(HX_CSTRING("_fullPageAttributes"));
	outFields->push(HX_CSTRING("_pagesAttributes"));
	outFields->push(HX_CSTRING("_pixelSnapping"));
	outFields->push(HX_CSTRING("_iconOffset"));
	outFields->push(HX_CSTRING("_fullPage"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("PADDING"),
	HX_CSTRING("TWEAK"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(UITabPages_obj,_buttonBar),HX_CSTRING("_buttonBar")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UITabPages_obj,_buttons),HX_CSTRING("_buttons")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::UITabButton*/ ,(int)offsetof(UITabPages_obj,_mouseDownTarget),HX_CSTRING("_mouseDownTarget")},
	{hx::fsInt,(int)offsetof(UITabPages_obj,_colour),HX_CSTRING("_colour")},
	{hx::fsBool,(int)offsetof(UITabPages_obj,_alt),HX_CSTRING("_alt")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::Attributes*/ ,(int)offsetof(UITabPages_obj,_fullPageAttributes),HX_CSTRING("_fullPageAttributes")},
	{hx::fsObject /*::com::danielfreeman::madcomponents::Attributes*/ ,(int)offsetof(UITabPages_obj,_pagesAttributes),HX_CSTRING("_pagesAttributes")},
	{hx::fsBool,(int)offsetof(UITabPages_obj,_pixelSnapping),HX_CSTRING("_pixelSnapping")},
	{hx::fsFloat,(int)offsetof(UITabPages_obj,_iconOffset),HX_CSTRING("_iconOffset")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(UITabPages_obj,_fullPage),HX_CSTRING("_fullPage")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_buttonBar"),
	HX_CSTRING("_buttons"),
	HX_CSTRING("_mouseDownTarget"),
	HX_CSTRING("_colour"),
	HX_CSTRING("_alt"),
	HX_CSTRING("_fullPageAttributes"),
	HX_CSTRING("_pagesAttributes"),
	HX_CSTRING("_pixelSnapping"),
	HX_CSTRING("_iconOffset"),
	HX_CSTRING("_fullPage"),
	HX_CSTRING("get_fullPage"),
	HX_CSTRING("set_fullPage"),
	HX_CSTRING("get_buttonBar"),
	HX_CSTRING("extractData"),
	HX_CSTRING("imageAttributeBitmapData"),
	HX_CSTRING("set_data"),
	HX_CSTRING("set_xmlData"),
	HX_CSTRING("attributesToObject"),
	HX_CSTRING("initialiseButtonBar"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("goToPage"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("setTab"),
	HX_CSTRING("superLayout"),
	HX_CSTRING("layout"),
	HX_CSTRING("attachPages"),
	HX_CSTRING("set_pageNumber"),
	HX_CSTRING("get_attributes"),
	HX_CSTRING("childAttributes"),
	HX_CSTRING("makeTabButtons"),
	HX_CSTRING("set_colour"),
	HX_CSTRING("drawTabButtonBackground"),
	HX_CSTRING("button"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UITabPages_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UITabPages_obj::PADDING,"PADDING");
	HX_MARK_MEMBER_NAME(UITabPages_obj::TWEAK,"TWEAK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UITabPages_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UITabPages_obj::PADDING,"PADDING");
	HX_VISIT_MEMBER_NAME(UITabPages_obj::TWEAK,"TWEAK");
};

#endif

Class UITabPages_obj::__mClass;

void UITabPages_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UITabPages"), hx::TCanCast< UITabPages_obj> ,sStaticFields,sMemberFields,
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

void UITabPages_obj::__boot()
{
	PADDING= 1.0;
	TWEAK= 6.0;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
