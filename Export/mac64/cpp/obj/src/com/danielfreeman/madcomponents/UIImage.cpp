#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_danielfreeman_MadXML
#include <com/danielfreeman/MadXML.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_IComponentUI
#include <com/danielfreeman/madcomponents/IComponentUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UI
#include <com/danielfreeman/madcomponents/UI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIImage
#include <com/danielfreeman/madcomponents/UIImage.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
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

Void UIImage_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImage","new",0x9c4c73a5,"com.danielfreeman.madcomponents.UIImage.new","com/danielfreeman/madcomponents/UIImage.hx",13,0x8868486e)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(60)
	this->_border = HX_CSTRING("");
	HX_STACK_LINE(58)
	this->_colour = (int)15658734;
	HX_STACK_LINE(56)
	this->_alpha = 0.0;
	HX_STACK_LINE(52)
	this->_scale = true;
	HX_STACK_LINE(50)
	this->_image = null();
	HX_STACK_LINE(44)
	this->_height = -1.0;
	HX_STACK_LINE(42)
	this->_width = -1.0;
	HX_STACK_LINE(64)
	Float _g = attributes->get_widthH();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(64)
	this->_attributesWidth = _g;
	HX_STACK_LINE(65)
	Float _g1 = attributes->get_heightV();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(65)
	this->_attributesHeight = _g1;
	HX_STACK_LINE(66)
	::String _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(66)
	if ((xml->has->resolve(HX_CSTRING("border")))){
		HX_STACK_LINE(66)
		_g2 = xml->att->resolve(HX_CSTRING("border"));
	}
	else{
		HX_STACK_LINE(66)
		_g2 = HX_CSTRING("");
	}
	HX_STACK_LINE(66)
	this->_border = _g2;
	HX_STACK_LINE(67)
	bool _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(67)
	if ((xml->has->resolve(HX_CSTRING("stretch")))){
		HX_STACK_LINE(67)
		::String _g3 = xml->att->resolve(HX_CSTRING("stretch"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(67)
		_g4 = (_g3 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(67)
		_g4 = false;
	}
	HX_STACK_LINE(67)
	this->_stretch = _g4;
	HX_STACK_LINE(68)
	if (((bool((this->_border == HX_CSTRING(""))) || bool((this->_border == HX_CSTRING("false")))))){
		HX_STACK_LINE(68)
		this->_alpha = (int)0;
	}
	else{
		HX_STACK_LINE(68)
		this->_alpha = 1.0;
	}
	HX_STACK_LINE(69)
	if ((xml->has->resolve(HX_CSTRING("background")))){
		HX_STACK_LINE(70)
		::String _g5 = xml->att->resolve(HX_CSTRING("background"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(70)
		int _g6 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(70)
		this->_colour = _g6;
		HX_STACK_LINE(71)
		this->_alpha = 1.0;
	}
	HX_STACK_LINE(73)
	super::__construct(screen,attributes);
	HX_STACK_LINE(74)
	this->set_x(attributes->x);
	HX_STACK_LINE(75)
	this->set_y(attributes->y);
	HX_STACK_LINE(76)
	bool _g8;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(76)
	if ((!((!(xml->has->resolve(HX_CSTRING("scale"))))))){
		HX_STACK_LINE(76)
		::String _g7 = xml->att->resolve(HX_CSTRING("scale"));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(76)
		_g8 = (_g7 != HX_CSTRING("false"));
	}
	else{
		HX_STACK_LINE(76)
		_g8 = true;
	}
	HX_STACK_LINE(76)
	this->_scale = _g8;
	HX_STACK_LINE(77)
	bool _g9 = this->set_mouseChildren(false);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(77)
	this->set_mouseEnabled(_g9);
	HX_STACK_LINE(78)
	if ((xml->hasNode->resolve(HX_CSTRING("data")))){
		HX_STACK_LINE(79)
		if ((xml->node->resolve(HX_CSTRING("data"))->hasNode->resolve(HX_CSTRING("item")))){
			HX_STACK_LINE(80)
			::com::danielfreeman::MadXML _g10 = xml->node->resolve(HX_CSTRING("data"))->node->resolve(HX_CSTRING("item"));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(80)
			this->set_data(_g10);
		}
		else{
			HX_STACK_LINE(82)
			::com::danielfreeman::MadXML _g11 = xml->node->resolve(HX_CSTRING("data"));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(82)
			this->set_data(_g11);
		}
	}
	else{
		HX_STACK_LINE(85)
		::String _g12 = xml->toString();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(85)
		this->set_text(_g12);
	}
	HX_STACK_LINE(87)
	this->set_clickable(false);
}
;
	return null();
}

//UIImage_obj::~UIImage_obj() { }

Dynamic UIImage_obj::__CreateEmpty() { return  new UIImage_obj; }
hx::ObjectPtr< UIImage_obj > UIImage_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIImage_obj > result = new UIImage_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIImage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIImage_obj > result = new UIImage_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *UIImage_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::danielfreeman::madcomponents::IComponentUI_obj)) return operator ::com::danielfreeman::madcomponents::IComponentUI_obj *();
	return super::__ToInterface(inType);
}

::String UIImage_obj::set_text( ::String _tmp_source){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImage","set_text",0x3e8a4445,"com.danielfreeman.madcomponents.UIImage.set_text","com/danielfreeman/madcomponents/UIImage.hx",91,0x8868486e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tmp_source,"_tmp_source")
	HX_STACK_LINE(92)
	Dynamic source = _tmp_source;		HX_STACK_VAR(source,"source");
	HX_STACK_LINE(92)
	if (((  ((!(::Std_obj::is(source,hx::ClassOf< ::Class >())))) ? bool((source == null())) : bool(true) ))){
		HX_STACK_LINE(93)
		this->set_imageClass(source);
	}
	else{
		HX_STACK_LINE(94)
		if (((  ((!(::Std_obj::is(source,hx::ClassOf< ::openfl::display::BitmapData >())))) ? bool(::Std_obj::is(source,hx::ClassOf< ::openfl::display::DisplayObject >())) : bool(true) ))){
			HX_STACK_LINE(95)
			this->set_image(source);
		}
		else{
			HX_STACK_LINE(96)
			if ((::Std_obj::is(source,hx::ClassOf< ::String >()))){
				HX_STACK_LINE(97)
				if (((source == HX_CSTRING("")))){
					HX_STACK_LINE(98)
					this->set_imageClass(null());
				}
				else{
					HX_STACK_LINE(99)
					Dynamic _g = source->__Field(HX_CSTRING("charAt"),true)((int)0);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(99)
					Float _g1 = ::Std_obj::parseFloat(_g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(99)
					if ((!(::Math_obj::isNaN(_g1)))){
						HX_STACK_LINE(100)
						this->get_graphics()->clear();
						HX_STACK_LINE(101)
						this->get_graphics()->beginFill(this->_colour,this->_alpha);
						HX_STACK_LINE(102)
						::EReg _g2 = ::EReg_obj::__new(HX_CSTRING(" "),HX_CSTRING("gi"));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(102)
						source->__Field(HX_CSTRING("replace"),true)(_g2,HX_CSTRING(""));
						HX_STACK_LINE(103)
						Array< ::String > dimensions = source->__Field(HX_CSTRING("split"),true)(HX_CSTRING(","));		HX_STACK_VAR(dimensions,"dimensions");
						HX_STACK_LINE(104)
						Float border;		HX_STACK_VAR(border,"border");
						HX_STACK_LINE(104)
						if (((bool((this->_border == HX_CSTRING(""))) || bool((this->_border == HX_CSTRING("false")))))){
							HX_STACK_LINE(104)
							border = (int)0;
						}
						else{
							HX_STACK_LINE(104)
							border = 2.0;
						}
						HX_STACK_LINE(105)
						Float curve;		HX_STACK_VAR(curve,"curve");
						HX_STACK_LINE(105)
						if (((this->_border == HX_CSTRING("rounded")))){
							HX_STACK_LINE(105)
							curve = 6.0;
						}
						else{
							HX_STACK_LINE(105)
							curve = (int)0;
						}
						HX_STACK_LINE(106)
						if (((dimensions->length > (int)1))){
							HX_STACK_LINE(107)
							Float _g3 = ::Std_obj::parseFloat(dimensions->__get((int)0));		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(107)
							Float _g4 = this->_width = _g3;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(107)
							Float _g5 = (_g4 + ((int)2 * border));		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(107)
							Float _g6 = ::Std_obj::parseFloat(dimensions->__get((int)1));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(107)
							Float _g7 = this->_height = _g6;		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(107)
							Float _g8 = (_g7 + ((int)2 * border));		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(107)
							this->get_graphics()->drawRoundRect((int)0,(int)0,_g5,_g8,curve,null());
						}
						else{
							HX_STACK_LINE(109)
							Float _g9 = ::Std_obj::parseFloat(dimensions->__get((int)0));		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(109)
							Float _g10 = this->_width = _g9;		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(109)
							Float _g11 = (_g10 + ((int)2 * border));		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(109)
							Float _g12 = ::Std_obj::parseFloat(dimensions->__get((int)0));		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(109)
							Float _g13 = this->_height = _g12;		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(109)
							Float _g14 = (_g13 + ((int)2 * border));		HX_STACK_VAR(_g14,"_g14");
							HX_STACK_LINE(109)
							this->get_graphics()->drawRoundRect((int)0,(int)0,_g11,_g14,curve,null());
						}
						HX_STACK_LINE(111)
						if (((dimensions->length > (int)2))){
							HX_STACK_LINE(112)
							this->set_value(dimensions->__get((int)2));
						}
					}
					else{
						HX_STACK_LINE(115)
						this->set_value(source);
					}
				}
			}
		}
	}
	HX_STACK_LINE(118)
	return source;
}


::String UIImage_obj::set_value( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImage","set_value",0x9e90acd9,"com.danielfreeman.madcomponents.UIImage.set_value","com/danielfreeman/madcomponents/UIImage.hx",122,0x8868486e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(123)
	this->set_imageBitmapName(value);
	HX_STACK_LINE(124)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIImage_obj,set_value,return )

Dynamic UIImage_obj::set_image( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImage","set_image",0x2a414cc3,"com.danielfreeman.madcomponents.UIImage.set_image","com/danielfreeman/madcomponents/UIImage.hx",128,0x8868486e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(129)
	::openfl::display::DisplayObjectContainer _g = this->get_parent();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(129)
	if (((_g != null()))){
		HX_STACK_LINE(130)
		if (((this->_image != null()))){
			HX_STACK_LINE(131)
			this->removeChild(this->_image);
		}
		HX_STACK_LINE(133)
		::openfl::display::DisplayObject _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(133)
		if ((::Std_obj::is(value,hx::ClassOf< ::openfl::display::BitmapData >()))){
			HX_STACK_LINE(133)
			_g1 = ::openfl::display::Bitmap_obj::__new(value,null(),null());
		}
		else{
			HX_STACK_LINE(133)
			_g1 = value;
		}
		HX_STACK_LINE(133)
		this->_image = _g1;
		HX_STACK_LINE(134)
		Float _g2 = this->_image->set_y((  (((bool((this->_border == HX_CSTRING(""))) || bool((this->_border == HX_CSTRING("false")))))) ? Float((int)0) : Float(2.0) ));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(134)
		this->_image->set_x(_g2);
		HX_STACK_LINE(135)
		this->addChild(this->_image);
		HX_STACK_LINE(136)
		this->scaleImage();
	}
	HX_STACK_LINE(138)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIImage_obj,set_image,return )

::openfl::display::Bitmap UIImage_obj::set_pixelSnappedImageBitmap( ::openfl::display::Bitmap value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImage","set_pixelSnappedImageBitmap",0x26293073,"com.danielfreeman.madcomponents.UIImage.set_pixelSnappedImageBitmap","com/danielfreeman/madcomponents/UIImage.hx",142,0x8868486e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(143)
	this->_scale = false;
	HX_STACK_LINE(144)
	this->set_image(value);
	HX_STACK_LINE(145)
	Float _g = ::com::danielfreeman::madcomponents::UI_obj::get_scale();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(145)
	Float _g1 = (Float((int)1) / Float(_g));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(145)
	Float _g2 = value->set_scaleY(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(145)
	value->set_scaleX(_g2);
	HX_STACK_LINE(146)
	value->set_pixelSnapping(::openfl::display::PixelSnapping_obj::ALWAYS);
	HX_STACK_LINE(147)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIImage_obj,set_pixelSnappedImageBitmap,return )

::String UIImage_obj::set_pixelSnappedImageBitmapName( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImage","set_pixelSnappedImageBitmapName",0x956e845e,"com.danielfreeman.madcomponents.UIImage.set_pixelSnappedImageBitmapName","com/danielfreeman/madcomponents/UIImage.hx",151,0x8868486e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(152)
	::Class _g = ::Type_obj::resolveClass(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(152)
	::openfl::display::BitmapData _g1 = ::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(152)
	::openfl::display::Bitmap _g2 = ::openfl::display::Bitmap_obj::__new(_g1,null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(152)
	this->set_pixelSnappedImageBitmap(_g2);
	HX_STACK_LINE(153)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIImage_obj,set_pixelSnappedImageBitmapName,return )

::Class UIImage_obj::set_pixelSnappedImageClass( ::Class Value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImage","set_pixelSnappedImageClass",0x6c2bd434,"com.danielfreeman.madcomponents.UIImage.set_pixelSnappedImageClass","com/danielfreeman/madcomponents/UIImage.hx",157,0x8868486e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(158)
	::openfl::display::Bitmap _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(158)
	_g = hx::TCast< openfl::display::Bitmap >::cast(::Type_obj::createInstance(Value,Dynamic( Array_obj<Dynamic>::__new())));
	HX_STACK_LINE(158)
	this->set_pixelSnappedImageBitmap(_g);
	HX_STACK_LINE(159)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIImage_obj,set_pixelSnappedImageClass,return )

::String UIImage_obj::set_pixelSnappedImageName( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImage","set_pixelSnappedImageName",0xaabca9cf,"com.danielfreeman.madcomponents.UIImage.set_pixelSnappedImageName","com/danielfreeman/madcomponents/UIImage.hx",163,0x8868486e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(164)
	::Class _g = ::Type_obj::resolveClass(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(164)
	::Class _g1 = ::Type_obj::getClass(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(164)
	this->set_pixelSnappedImageClass(_g1);
	HX_STACK_LINE(165)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIImage_obj,set_pixelSnappedImageName,return )

::com::danielfreeman::MadXML UIImage_obj::set_data( ::com::danielfreeman::MadXML value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImage","set_data",0x33f3cdc2,"com.danielfreeman.madcomponents.UIImage.set_data","com/danielfreeman/madcomponents/UIImage.hx",169,0x8868486e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	struct _Function_1_1{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIImage.hx",170,0x8868486e)
			{
				HX_STACK_LINE(170)
				Float _g = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(170)
				return (_g < (int)160);
			}
			return null();
		}
	};
	HX_STACK_LINE(170)
	if (((  ((value->has->resolve(HX_CSTRING("ldpi")))) ? bool(_Function_1_1::Block()) : bool(false) ))){
		HX_STACK_LINE(171)
		::String _g1 = value->att->resolve(HX_CSTRING("ldpi"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(171)
		this->set_pixelSnappedImageBitmapName(_g1);
	}
	else{
		struct _Function_2_1{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIImage.hx",172,0x8868486e)
				{
					HX_STACK_LINE(172)
					Float _g2 = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(172)
					return (_g2 < (int)240);
				}
				return null();
			}
		};
		HX_STACK_LINE(172)
		if (((  ((value->has->resolve(HX_CSTRING("mdpi")))) ? bool(_Function_2_1::Block()) : bool(false) ))){
			HX_STACK_LINE(173)
			::String _g3 = value->att->resolve(HX_CSTRING("mdpi"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(173)
			this->set_pixelSnappedImageBitmapName(_g3);
		}
		else{
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIImage.hx",174,0x8868486e)
					{
						HX_STACK_LINE(174)
						Float _g4 = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(174)
						return (_g4 < (int)320);
					}
					return null();
				}
			};
			HX_STACK_LINE(174)
			if (((  ((value->has->resolve(HX_CSTRING("hdpi")))) ? bool(_Function_3_1::Block()) : bool(false) ))){
				HX_STACK_LINE(175)
				::String _g5 = value->att->resolve(HX_CSTRING("hdpi"));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(175)
				this->set_pixelSnappedImageBitmapName(_g5);
			}
			else{
				struct _Function_4_1{
					inline static bool Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIImage.hx",176,0x8868486e)
						{
							HX_STACK_LINE(176)
							Float _g6 = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(176)
							return (_g6 < (int)400);
						}
						return null();
					}
				};
				HX_STACK_LINE(176)
				if (((  ((value->has->resolve(HX_CSTRING("xhdpi")))) ? bool(_Function_4_1::Block()) : bool(false) ))){
					HX_STACK_LINE(177)
					::String _g7 = value->att->resolve(HX_CSTRING("xhdpi"));		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(177)
					this->set_pixelSnappedImageBitmapName(_g7);
				}
				else{
					struct _Function_5_1{
						inline static bool Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UIImage.hx",178,0x8868486e)
							{
								HX_STACK_LINE(178)
								Float _g8 = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(178)
								return (_g8 >= (int)400);
							}
							return null();
						}
					};
					HX_STACK_LINE(178)
					if (((  ((value->has->resolve(HX_CSTRING("xxhdpi")))) ? bool(_Function_5_1::Block()) : bool(false) ))){
						HX_STACK_LINE(179)
						::String _g9 = value->att->resolve(HX_CSTRING("xxhdpi"));		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(179)
						this->set_pixelSnappedImageBitmapName(_g9);
					}
					else{
						HX_STACK_LINE(180)
						if ((value->has->resolve(HX_CSTRING("image")))){
							HX_STACK_LINE(181)
							::String _g10 = value->att->resolve(HX_CSTRING("image"));		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(181)
							this->set_text(_g10);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(183)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIImage_obj,set_data,return )

Void UIImage_obj::scaleImage( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImage","scaleImage",0xbae74bcc,"com.danielfreeman.madcomponents.UIImage.scaleImage","com/danielfreeman/madcomponents/UIImage.hx",187,0x8868486e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(188)
		if (((bool((this->_image == null())) || bool(!(this->_scale))))){
			HX_STACK_LINE(189)
			return null();
		}
		HX_STACK_LINE(191)
		if ((::Std_obj::is(this->_image,hx::ClassOf< ::openfl::display::Bitmap >()))){
			HX_STACK_LINE(192)
			(hx::TCast< openfl::display::Bitmap >::cast(this->_image))->set_smoothing(true);
		}
		HX_STACK_LINE(194)
		Float _g = this->_image->set_scaleY(1.0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(194)
		this->_image->set_scaleX(_g);
		HX_STACK_LINE(195)
		if ((this->_stretch)){
			HX_STACK_LINE(196)
			Float _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(196)
			if (((this->_width > (int)0))){
				HX_STACK_LINE(196)
				Float _g1 = this->_image->get_width();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(196)
				Float _g2 = (Float(this->_width) / Float(_g1));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(196)
				Float _g3 = this->_image->get_width();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(196)
				Float _g4 = (Float(this->_attributesWidth) / Float(_g3));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(196)
				_g6 = ::Math_obj::min(_g2,_g4);
			}
			else{
				HX_STACK_LINE(196)
				Float _g5 = this->_image->get_width();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(196)
				_g6 = (Float(this->_attributesWidth) / Float(_g5));
			}
			HX_STACK_LINE(196)
			this->_image->set_scaleX(_g6);
			HX_STACK_LINE(197)
			Float _g12;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(197)
			if (((this->_height > (int)0))){
				HX_STACK_LINE(197)
				Float _g7 = this->_image->get_height();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(197)
				Float _g8 = (Float(this->_height) / Float(_g7));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(197)
				Float _g9 = this->_image->get_height();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(197)
				Float _g10 = (Float(this->_attributesWidth) / Float(_g9));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(197)
				_g12 = ::Math_obj::min(_g8,_g10);
			}
			else{
				HX_STACK_LINE(197)
				Float _g11 = this->_image->get_height();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(197)
				_g12 = (Float(this->_attributesHeight) / Float(_g11));
			}
			HX_STACK_LINE(197)
			this->_image->set_scaleY(_g12);
		}
		else{
			HX_STACK_LINE(199)
			if (((this->_width > (int)0))){
				HX_STACK_LINE(200)
				Float _g13 = this->_image->get_width();		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(200)
				Float _g14 = (Float(this->_width) / Float(_g13));		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(200)
				Float _g15 = this->_image->get_height();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(200)
				Float _g16 = (Float(this->_height) / Float(_g15));		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(200)
				Float _g17 = ::Math_obj::min(_g14,_g16);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(200)
				Float _g18 = this->_image->get_width();		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(200)
				Float _g19 = (Float(this->_attributesWidth) / Float(_g18));		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(200)
				Float _g20 = ::Math_obj::min(_g19,1.0);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(200)
				Float _g21 = ::Math_obj::min(_g17,_g20);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(200)
				Float _g22 = this->_image->set_scaleY(_g21);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(200)
				this->_image->set_scaleX(_g22);
			}
			else{
				HX_STACK_LINE(202)
				Float _g23 = this->_image->get_width();		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(202)
				Float _g24 = (Float(this->_attributesWidth) / Float(_g23));		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(202)
				Float _g25 = ::Math_obj::min(_g24,1.0);		HX_STACK_VAR(_g25,"_g25");
				HX_STACK_LINE(202)
				Float _g26 = this->_image->set_scaleY(_g25);		HX_STACK_VAR(_g26,"_g26");
				HX_STACK_LINE(202)
				this->_image->set_scaleX(_g26);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIImage_obj,scaleImage,(void))

Float UIImage_obj::set_attributesWidth( Float value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImage","set_attributesWidth",0x75e61117,"com.danielfreeman.madcomponents.UIImage.set_attributesWidth","com/danielfreeman/madcomponents/UIImage.hx",208,0x8868486e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(209)
	this->_attributesWidth = value;
	HX_STACK_LINE(210)
	this->scaleImage();
	HX_STACK_LINE(211)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIImage_obj,set_attributesWidth,return )

Float UIImage_obj::set_attributesHeight( Float value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImage","set_attributesHeight",0x69b85bb6,"com.danielfreeman.madcomponents.UIImage.set_attributesHeight","com/danielfreeman/madcomponents/UIImage.hx",215,0x8868486e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(216)
	this->_attributesHeight = value;
	HX_STACK_LINE(217)
	this->scaleImage();
	HX_STACK_LINE(218)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIImage_obj,set_attributesHeight,return )

::openfl::geom::Rectangle UIImage_obj::stageRect( hx::Null< Float >  __o_aspectRatio){
Float aspectRatio = __o_aspectRatio.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImage","stageRect",0x41890007,"com.danielfreeman.madcomponents.UIImage.stageRect","com/danielfreeman/madcomponents/UIImage.hx",222,0x8868486e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(aspectRatio,"aspectRatio")
{
		HX_STACK_LINE(223)
		::openfl::geom::Point _g = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(223)
		::openfl::geom::Point leftTop = this->localToGlobal(_g);		HX_STACK_VAR(leftTop,"leftTop");
		HX_STACK_LINE(224)
		::openfl::geom::Point rightBottom;		HX_STACK_VAR(rightBottom,"rightBottom");
		HX_STACK_LINE(224)
		if (((this->_width > (int)0))){
			HX_STACK_LINE(224)
			::openfl::geom::Point _g1 = ::openfl::geom::Point_obj::__new(this->_width,this->_height);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(224)
			rightBottom = this->localToGlobal(_g1);
		}
		else{
			HX_STACK_LINE(224)
			::openfl::geom::Point _g2 = ::openfl::geom::Point_obj::__new(this->_attributesWidth,this->_attributesHeight);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(224)
			rightBottom = this->localToGlobal(_g2);
		}
		HX_STACK_LINE(225)
		::openfl::geom::Rectangle result = ::openfl::geom::Rectangle_obj::__new(leftTop->x,leftTop->y,(rightBottom->x - leftTop->x),(rightBottom->y - leftTop->y));		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(226)
		Float aspectFrame = (Float(result->width) / Float(result->height));		HX_STACK_VAR(aspectFrame,"aspectFrame");
		HX_STACK_LINE(227)
		if (((aspectRatio > (int)0))){
			HX_STACK_LINE(228)
			if (((aspectRatio < aspectFrame))){
				HX_STACK_LINE(229)
				result->x = (result->x + (Float(((((int)1 - (Float(aspectRatio) / Float(aspectFrame)))) * result->width)) / Float((int)2)));
				HX_STACK_LINE(230)
				result->width = ((Float(aspectRatio) / Float(aspectFrame)) * result->width);
			}
			else{
				HX_STACK_LINE(232)
				result->y = (result->y + (Float(((((int)1 - (Float(aspectFrame) / Float(aspectRatio)))) * result->height)) / Float((int)2)));
				HX_STACK_LINE(233)
				result->height = ((Float(aspectFrame) / Float(aspectRatio)) * result->height);
			}
		}
		HX_STACK_LINE(236)
		return result;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(UIImage_obj,stageRect,return )

::String UIImage_obj::set_imageClassName( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImage","set_imageClassName",0x17fef560,"com.danielfreeman.madcomponents.UIImage.set_imageClassName","com/danielfreeman/madcomponents/UIImage.hx",240,0x8868486e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(241)
	::Class _g = ::Type_obj::resolveClass(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(241)
	::Class _g1 = ::Type_obj::getClass(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(241)
	this->set_imageClass(_g1);
	HX_STACK_LINE(242)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIImage_obj,set_imageClassName,return )

::String UIImage_obj::set_imageBitmapName( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImage","set_imageBitmapName",0x47d1d47d,"com.danielfreeman.madcomponents.UIImage.set_imageBitmapName","com/danielfreeman/madcomponents/UIImage.hx",246,0x8868486e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(247)
	::Class _g = ::Type_obj::resolveClass(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(247)
	::openfl::display::BitmapData _g1 = ::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(247)
	::openfl::display::Bitmap _g2 = ::openfl::display::Bitmap_obj::__new(_g1,null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(247)
	this->set_image(_g2);
	HX_STACK_LINE(248)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIImage_obj,set_imageBitmapName,return )

::Class UIImage_obj::set_imageClass( ::Class value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImage","set_imageClass",0xfca87875,"com.danielfreeman.madcomponents.UIImage.set_imageClass","com/danielfreeman/madcomponents/UIImage.hx",252,0x8868486e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(253)
	if (((this->_image != null()))){
		HX_STACK_LINE(254)
		this->removeChild(this->_image);
	}
	HX_STACK_LINE(256)
	this->_image = null();
	HX_STACK_LINE(257)
	if (((value != null()))){
		HX_STACK_LINE(258)
		Dynamic _g = ::Type_obj::createInstance(value,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(258)
		this->set_image(_g);
	}
	HX_STACK_LINE(260)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(UIImage_obj,set_imageClass,return )

Void UIImage_obj::layout( ::com::danielfreeman::madcomponents::Attributes attributes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImage","layout",0x7323a485,"com.danielfreeman.madcomponents.UIImage.layout","com/danielfreeman/madcomponents/UIImage.hx",264,0x8868486e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attributes,"attributes")
		HX_STACK_LINE(265)
		this->super::layout(attributes);
		HX_STACK_LINE(266)
		Float _g = attributes->get_widthH();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(266)
		this->set_attributesWidth(_g);
		HX_STACK_LINE(267)
		Float _g1 = attributes->get_heightV();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(267)
		this->set_attributesHeight(_g1);
	}
return null();
}



UIImage_obj::UIImage_obj()
{
}

void UIImage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIImage);
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_attributesWidth,"_attributesWidth");
	HX_MARK_MEMBER_NAME(_attributesHeight,"_attributesHeight");
	HX_MARK_MEMBER_NAME(_image,"_image");
	HX_MARK_MEMBER_NAME(_scale,"_scale");
	HX_MARK_MEMBER_NAME(_stretch,"_stretch");
	HX_MARK_MEMBER_NAME(_alpha,"_alpha");
	HX_MARK_MEMBER_NAME(_colour,"_colour");
	HX_MARK_MEMBER_NAME(_border,"_border");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIImage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_attributesWidth,"_attributesWidth");
	HX_VISIT_MEMBER_NAME(_attributesHeight,"_attributesHeight");
	HX_VISIT_MEMBER_NAME(_image,"_image");
	HX_VISIT_MEMBER_NAME(_scale,"_scale");
	HX_VISIT_MEMBER_NAME(_stretch,"_stretch");
	HX_VISIT_MEMBER_NAME(_alpha,"_alpha");
	HX_VISIT_MEMBER_NAME(_colour,"_colour");
	HX_VISIT_MEMBER_NAME(_border,"_border");
	::com::danielfreeman::madcomponents::MadSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIImage_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_image") ) { return _image; }
		if (HX_FIELD_EQ(inName,"_scale") ) { return _scale; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { return _alpha; }
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"_colour") ) { return _colour; }
		if (HX_FIELD_EQ(inName,"_border") ) { return _border; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_stretch") ) { return _stretch; }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		if (HX_FIELD_EQ(inName,"set_image") ) { return set_image_dyn(); }
		if (HX_FIELD_EQ(inName,"stageRect") ) { return stageRect_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scaleImage") ) { return scaleImage_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_imageClass") ) { return set_imageClass_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_attributesWidth") ) { return _attributesWidth; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_attributesHeight") ) { return _attributesHeight; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_imageClassName") ) { return set_imageClassName_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_attributesWidth") ) { return set_attributesWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_imageBitmapName") ) { return set_imageBitmapName_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_attributesHeight") ) { return set_attributesHeight_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"set_pixelSnappedImageName") ) { return set_pixelSnappedImageName_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"set_pixelSnappedImageClass") ) { return set_pixelSnappedImageClass_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"set_pixelSnappedImageBitmap") ) { return set_pixelSnappedImageBitmap_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"set_pixelSnappedImageBitmapName") ) { return set_pixelSnappedImageBitmapName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIImage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return set_data(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return set_value(inValue); }
		if (HX_FIELD_EQ(inName,"image") ) { return set_image(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_image") ) { _image=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scale") ) { _scale=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colour") ) { _colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_border") ) { _border=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_stretch") ) { _stretch=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imageClass") ) { return set_imageClass(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"imageClassName") ) { return set_imageClassName(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"attributesWidth") ) { return set_attributesWidth(inValue); }
		if (HX_FIELD_EQ(inName,"imageBitmapName") ) { return set_imageBitmapName(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"attributesHeight") ) { return set_attributesHeight(inValue); }
		if (HX_FIELD_EQ(inName,"_attributesWidth") ) { _attributesWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_attributesHeight") ) { _attributesHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"pixelSnappedImageName") ) { return set_pixelSnappedImageName(inValue); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"pixelSnappedImageClass") ) { return set_pixelSnappedImageClass(inValue); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"pixelSnappedImageBitmap") ) { return set_pixelSnappedImageBitmap(inValue); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"pixelSnappedImageBitmapName") ) { return set_pixelSnappedImageBitmapName(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIImage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("image"));
	outFields->push(HX_CSTRING("pixelSnappedImageBitmap"));
	outFields->push(HX_CSTRING("pixelSnappedImageBitmapName"));
	outFields->push(HX_CSTRING("pixelSnappedImageClass"));
	outFields->push(HX_CSTRING("pixelSnappedImageName"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("attributesWidth"));
	outFields->push(HX_CSTRING("attributesHeight"));
	outFields->push(HX_CSTRING("imageClassName"));
	outFields->push(HX_CSTRING("imageClass"));
	outFields->push(HX_CSTRING("imageBitmapName"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_attributesWidth"));
	outFields->push(HX_CSTRING("_attributesHeight"));
	outFields->push(HX_CSTRING("_image"));
	outFields->push(HX_CSTRING("_scale"));
	outFields->push(HX_CSTRING("_stretch"));
	outFields->push(HX_CSTRING("_alpha"));
	outFields->push(HX_CSTRING("_colour"));
	outFields->push(HX_CSTRING("_border"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(UIImage_obj,_width),HX_CSTRING("_width")},
	{hx::fsFloat,(int)offsetof(UIImage_obj,_height),HX_CSTRING("_height")},
	{hx::fsFloat,(int)offsetof(UIImage_obj,_attributesWidth),HX_CSTRING("_attributesWidth")},
	{hx::fsFloat,(int)offsetof(UIImage_obj,_attributesHeight),HX_CSTRING("_attributesHeight")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(UIImage_obj,_image),HX_CSTRING("_image")},
	{hx::fsBool,(int)offsetof(UIImage_obj,_scale),HX_CSTRING("_scale")},
	{hx::fsBool,(int)offsetof(UIImage_obj,_stretch),HX_CSTRING("_stretch")},
	{hx::fsFloat,(int)offsetof(UIImage_obj,_alpha),HX_CSTRING("_alpha")},
	{hx::fsInt,(int)offsetof(UIImage_obj,_colour),HX_CSTRING("_colour")},
	{hx::fsString,(int)offsetof(UIImage_obj,_border),HX_CSTRING("_border")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_width"),
	HX_CSTRING("_height"),
	HX_CSTRING("_attributesWidth"),
	HX_CSTRING("_attributesHeight"),
	HX_CSTRING("_image"),
	HX_CSTRING("_scale"),
	HX_CSTRING("_stretch"),
	HX_CSTRING("_alpha"),
	HX_CSTRING("_colour"),
	HX_CSTRING("_border"),
	HX_CSTRING("set_text"),
	HX_CSTRING("set_value"),
	HX_CSTRING("set_image"),
	HX_CSTRING("set_pixelSnappedImageBitmap"),
	HX_CSTRING("set_pixelSnappedImageBitmapName"),
	HX_CSTRING("set_pixelSnappedImageClass"),
	HX_CSTRING("set_pixelSnappedImageName"),
	HX_CSTRING("set_data"),
	HX_CSTRING("scaleImage"),
	HX_CSTRING("set_attributesWidth"),
	HX_CSTRING("set_attributesHeight"),
	HX_CSTRING("stageRect"),
	HX_CSTRING("set_imageClassName"),
	HX_CSTRING("set_imageBitmapName"),
	HX_CSTRING("set_imageClass"),
	HX_CSTRING("layout"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIImage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIImage_obj::__mClass,"__mClass");
};

#endif

Class UIImage_obj::__mClass;

void UIImage_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIImage"), hx::TCanCast< UIImage_obj> ,sStaticFields,sMemberFields,
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

void UIImage_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
