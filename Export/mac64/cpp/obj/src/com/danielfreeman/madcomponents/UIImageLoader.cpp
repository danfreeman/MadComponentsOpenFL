#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_Attributes
#include <com/danielfreeman/madcomponents/Attributes.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IComponentUI
#include <com/danielfreeman/madcomponents/IComponentUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIImage
#include <com/danielfreeman/madcomponents/UIImage.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIImageLoader
#include <com/danielfreeman/madcomponents/UIImageLoader.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
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
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
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
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
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
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UIImageLoader_obj::__construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImageLoader","new",0x54394d98,"com.danielfreeman.madcomponents.UIImageLoader.new","com/danielfreeman/madcomponents/UIImageLoader.hx",13,0xa8eb521b)
HX_STACK_THIS(this)
HX_STACK_ARG(screen,"screen")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(attributes,"attributes")
{
	HX_STACK_LINE(34)
	this->_loader = null();
	HX_STACK_LINE(32)
	this->_queue = false;
	HX_STACK_LINE(30)
	this->_cache = false;
	HX_STACK_LINE(26)
	this->_base = HX_CSTRING("");
	HX_STACK_LINE(74)
	if ((xml->has->resolve(HX_CSTRING("base")))){
		HX_STACK_LINE(75)
		::String _g = xml->att->resolve(HX_CSTRING("base"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(75)
		this->_base = _g;
	}
	HX_STACK_LINE(77)
	bool _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(77)
	if ((xml->has->resolve(HX_CSTRING("cache")))){
		HX_STACK_LINE(77)
		::String _g1 = xml->att->resolve(HX_CSTRING("cache"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(77)
		_g2 = (_g1 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(77)
		_g2 = false;
	}
	HX_STACK_LINE(77)
	this->_cache = _g2;
	HX_STACK_LINE(78)
	bool _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(78)
	if ((xml->has->resolve(HX_CSTRING("queue")))){
		HX_STACK_LINE(78)
		::String _g3 = xml->att->resolve(HX_CSTRING("queue"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(78)
		_g4 = (_g3 == HX_CSTRING("true"));
	}
	else{
		HX_STACK_LINE(78)
		_g4 = false;
	}
	HX_STACK_LINE(78)
	this->_queue = _g4;
	HX_STACK_LINE(79)
	super::__construct(screen,xml,attributes);
}
;
	return null();
}

//UIImageLoader_obj::~UIImageLoader_obj() { }

Dynamic UIImageLoader_obj::__CreateEmpty() { return  new UIImageLoader_obj; }
hx::ObjectPtr< UIImageLoader_obj > UIImageLoader_obj::__new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes)
{  hx::ObjectPtr< UIImageLoader_obj > result = new UIImageLoader_obj();
	result->__construct(screen,xml,attributes);
	return result;}

Dynamic UIImageLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIImageLoader_obj > result = new UIImageLoader_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String UIImageLoader_obj::set_value( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImageLoader","set_value",0x3a05ff0c,"com.danielfreeman.madcomponents.UIImageLoader.set_value","com/danielfreeman/madcomponents/UIImageLoader.hx",83,0xa8eb521b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(84)
	this->_url = value;
	HX_STACK_LINE(85)
	bool waitFor;		HX_STACK_VAR(waitFor,"waitFor");
	HX_STACK_LINE(85)
	if ((this->_queue)){
		HX_STACK_LINE(85)
		if ((!((!(this->_cache))))){
			HX_STACK_LINE(85)
			if ((this->_cache)){
				HX_STACK_LINE(85)
				::openfl::display::BitmapData _g = ::com::danielfreeman::madcomponents::UIImageLoader_obj::_imageCache->get(value);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(85)
				waitFor = (_g == ::com::danielfreeman::madcomponents::UIImageLoader_obj::_placeHolder);
			}
			else{
				HX_STACK_LINE(85)
				waitFor = false;
			}
		}
		else{
			HX_STACK_LINE(85)
			waitFor = true;
		}
	}
	else{
		HX_STACK_LINE(85)
		waitFor = false;
	}
	HX_STACK_LINE(86)
	if ((waitFor)){
		HX_STACK_LINE(87)
		::com::danielfreeman::madcomponents::UIImageLoader_obj::addToQueue(hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(89)
		this->doLoad();
	}
	HX_STACK_LINE(91)
	return value;
}


Void UIImageLoader_obj::loadURLImage( ::String url){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImageLoader","loadURLImage",0xd75a357a,"com.danielfreeman.madcomponents.UIImageLoader.loadURLImage","com/danielfreeman/madcomponents/UIImageLoader.hx",95,0xa8eb521b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(url,"url")
		HX_STACK_LINE(96)
		if (((bool(this->_queue) && bool(this->_cache)))){
			HX_STACK_LINE(97)
			::com::danielfreeman::madcomponents::UIImageLoader_obj::_imageCache->set(url,::com::danielfreeman::madcomponents::UIImageLoader_obj::_placeHolder);
		}
		HX_STACK_LINE(99)
		::openfl::display::Loader loader = ::openfl::display::Loader_obj::__new();		HX_STACK_VAR(loader,"loader");
		HX_STACK_LINE(100)
		loader->contentLoaderInfo->addEventListener(::openfl::events::Event_obj::COMPLETE,this->isLoaded_dyn(),null(),null(),null());
		HX_STACK_LINE(101)
		loader->contentLoaderInfo->addEventListener(HX_CSTRING("securityError"),this->errorFn_dyn(),null(),null(),null());
		HX_STACK_LINE(102)
		loader->addEventListener(::openfl::events::IOErrorEvent_obj::IO_ERROR,this->errorFn_dyn(),null(),null(),null());
		HX_STACK_LINE(103)
		loader->contentLoaderInfo->addEventListener(::openfl::events::IOErrorEvent_obj::IO_ERROR,this->errorFn_dyn(),null(),null(),null());
		HX_STACK_LINE(104)
		::openfl::net::URLRequest request = ::openfl::net::URLRequest_obj::__new((this->_base + url));		HX_STACK_VAR(request,"request");
		HX_STACK_LINE(105)
		try
		{
		HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
		{
			HX_STACK_LINE(106)
			loader->load(request,null());
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::openfl::errors::Error >() ){
				HX_STACK_BEGIN_CATCH
				::openfl::errors::Error error = __e;{
					HX_STACK_LINE(108)
					this->_error = error;
					HX_STACK_LINE(109)
					::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::ErrorEvent_obj::ERROR,null(),null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(109)
					this->dispatchEvent(_g);
					HX_STACK_LINE(110)
					if ((this->_queue)){
						HX_STACK_LINE(111)
						::com::danielfreeman::madcomponents::UIImageLoader_obj::loadNext();
					}
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIImageLoader_obj,loadURLImage,(void))

Void UIImageLoader_obj::doLoad( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImageLoader","doLoad",0x45a5d519,"com.danielfreeman.madcomponents.UIImageLoader.doLoad","com/danielfreeman/madcomponents/UIImageLoader.hx",118,0xa8eb521b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		if ((this->_cache)){
			HX_STACK_LINE(119)
			::openfl::display::BitmapData cacheValue = ::com::danielfreeman::madcomponents::UIImageLoader_obj::_imageCache->get(this->_url);		HX_STACK_VAR(cacheValue,"cacheValue");
			HX_STACK_LINE(120)
			if (((bool((cacheValue != null())) && bool((cacheValue != ::com::danielfreeman::madcomponents::UIImageLoader_obj::_placeHolder))))){
				HX_STACK_LINE(121)
				this->set_image(cacheValue);
				HX_STACK_LINE(122)
				::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("imageLoaded"),true,true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(122)
				this->dispatchEvent(_g);
				HX_STACK_LINE(123)
				if ((this->_queue)){
					HX_STACK_LINE(124)
					::com::danielfreeman::madcomponents::UIImageLoader_obj::loadNext();
				}
			}
			else{
				HX_STACK_LINE(127)
				this->loadURLImage(this->_url);
			}
		}
		else{
			HX_STACK_LINE(130)
			this->loadURLImage(this->_url);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIImageLoader_obj,doLoad,(void))

Void UIImageLoader_obj::errorFn( Dynamic event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImageLoader","errorFn",0xe9630468,"com.danielfreeman.madcomponents.UIImageLoader.errorFn","com/danielfreeman/madcomponents/UIImageLoader.hx",135,0xa8eb521b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(136)
		::openfl::display::Loader loader = event->__Field(HX_CSTRING("target"),true)->__Field(HX_CSTRING("loader"),true);		HX_STACK_VAR(loader,"loader");
		HX_STACK_LINE(137)
		this->removeListeners(loader);
		HX_STACK_LINE(138)
		this->_error = event;
		HX_STACK_LINE(139)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::ErrorEvent_obj::ERROR,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(139)
		this->dispatchEvent(_g);
		HX_STACK_LINE(140)
		if ((this->_queue)){
			HX_STACK_LINE(141)
			::com::danielfreeman::madcomponents::UIImageLoader_obj::loadNext();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIImageLoader_obj,errorFn,(void))

Dynamic UIImageLoader_obj::get_theError( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImageLoader","get_theError",0xe15d7168,"com.danielfreeman.madcomponents.UIImageLoader.get_theError","com/danielfreeman/madcomponents/UIImageLoader.hx",147,0xa8eb521b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	return this->_error;
}


HX_DEFINE_DYNAMIC_FUNC0(UIImageLoader_obj,get_theError,return )

Void UIImageLoader_obj::isLoaded( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImageLoader","isLoaded",0x1eea7b57,"com.danielfreeman.madcomponents.UIImageLoader.isLoaded","com/danielfreeman/madcomponents/UIImageLoader.hx",151,0xa8eb521b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(152)
		::openfl::display::Loader loader = event->get_target()->__Field(HX_CSTRING("loader"),true);		HX_STACK_VAR(loader,"loader");
		HX_STACK_LINE(153)
		this->removeListeners(loader);
		HX_STACK_LINE(154)
		::openfl::display::Bitmap _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(154)
		_g = hx::TCast< openfl::display::Bitmap >::cast(loader->content);
		HX_STACK_LINE(154)
		this->set_image(_g);
		HX_STACK_LINE(155)
		if (((this->_image != null()))){
			HX_STACK_LINE(156)
			if ((this->_cache)){
				HX_STACK_LINE(157)
				::openfl::display::LoaderInfo loaderInfo;		HX_STACK_VAR(loaderInfo,"loaderInfo");
				HX_STACK_LINE(157)
				loaderInfo = hx::TCast< openfl::display::LoaderInfo >::cast(event->get_target());
				HX_STACK_LINE(158)
				::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new(loaderInfo->width,loaderInfo->height,true,(int)0,null());		HX_STACK_VAR(bitmapData,"bitmapData");
				HX_STACK_LINE(159)
				bitmapData->draw(this->_image,null(),null(),null(),null(),null());
				HX_STACK_LINE(160)
				::com::danielfreeman::madcomponents::UIImageLoader_obj::_imageCache->set(loader->contentLoaderInfo->url,bitmapData);
			}
			HX_STACK_LINE(162)
			::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(HX_CSTRING("imageLoaded"),true,true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(162)
			this->dispatchEvent(_g1);
		}
		HX_STACK_LINE(164)
		if ((this->_queue)){
			HX_STACK_LINE(165)
			::com::danielfreeman::madcomponents::UIImageLoader_obj::loadNext();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIImageLoader_obj,isLoaded,(void))

Void UIImageLoader_obj::removeListeners( ::openfl::display::Loader loader){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImageLoader","removeListeners",0x8b7571d3,"com.danielfreeman.madcomponents.UIImageLoader.removeListeners","com/danielfreeman/madcomponents/UIImageLoader.hx",171,0xa8eb521b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(loader,"loader")
		HX_STACK_LINE(171)
		if (((loader != null()))){
			HX_STACK_LINE(172)
			loader->contentLoaderInfo->removeEventListener(::openfl::events::Event_obj::COMPLETE,this->isLoaded_dyn(),null());
			HX_STACK_LINE(173)
			loader->contentLoaderInfo->removeEventListener(HX_CSTRING("securityError"),this->errorFn_dyn(),null());
			HX_STACK_LINE(174)
			loader->removeEventListener(::openfl::events::IOErrorEvent_obj::IO_ERROR,this->errorFn_dyn(),null());
			HX_STACK_LINE(175)
			loader->contentLoaderInfo->removeEventListener(::openfl::events::IOErrorEvent_obj::IO_ERROR,this->errorFn_dyn(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIImageLoader_obj,removeListeners,(void))

Void UIImageLoader_obj::destructor( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImageLoader","destructor",0x5b8ef501,"com.danielfreeman.madcomponents.UIImageLoader.destructor","com/danielfreeman/madcomponents/UIImageLoader.hx",180,0xa8eb521b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		this->super::destructor();
		HX_STACK_LINE(182)
		if ((this->_queue)){
			HX_STACK_LINE(183)
			::com::danielfreeman::madcomponents::UIImageLoader_obj::removeFromQueue(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


::String UIImageLoader_obj::LOADED;

::haxe::ds::StringMap UIImageLoader_obj::_imageCache;

::openfl::display::BitmapData UIImageLoader_obj::_placeHolder;

Array< ::Dynamic > UIImageLoader_obj::_loaderQueue;

bool UIImageLoader_obj::_running;

Void UIImageLoader_obj::clearCache( ::String __o_url){
::String url = __o_url.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImageLoader","clearCache",0x5d9bf33d,"com.danielfreeman.madcomponents.UIImageLoader.clearCache","com/danielfreeman/madcomponents/UIImageLoader.hx",40,0xa8eb521b)
	HX_STACK_ARG(url,"url")
{
		HX_STACK_LINE(40)
		if (((url == HX_CSTRING("")))){
			HX_STACK_LINE(41)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(41)
			::com::danielfreeman::madcomponents::UIImageLoader_obj::_imageCache = _g;
		}
		else{
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIImageLoader_obj,clearCache,(void))

Void UIImageLoader_obj::addToQueue( ::com::danielfreeman::madcomponents::UIImageLoader imageLoader){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImageLoader","addToQueue",0xd9761fbd,"com.danielfreeman.madcomponents.UIImageLoader.addToQueue","com/danielfreeman/madcomponents/UIImageLoader.hx",46,0xa8eb521b)
		HX_STACK_ARG(imageLoader,"imageLoader")
		HX_STACK_LINE(47)
		::com::danielfreeman::madcomponents::UIImageLoader_obj::_loaderQueue->push(imageLoader);
		HX_STACK_LINE(48)
		if ((!(::com::danielfreeman::madcomponents::UIImageLoader_obj::_running))){
			HX_STACK_LINE(49)
			::com::danielfreeman::madcomponents::UIImageLoader_obj::_running = true;
			HX_STACK_LINE(50)
			::com::danielfreeman::madcomponents::UIImageLoader_obj::loadNext();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIImageLoader_obj,addToQueue,(void))

Void UIImageLoader_obj::removeFromQueue( ::com::danielfreeman::madcomponents::UIImageLoader imageLoader){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImageLoader","removeFromQueue",0xaa5a841b,"com.danielfreeman.madcomponents.UIImageLoader.removeFromQueue","com/danielfreeman/madcomponents/UIImageLoader.hx",55,0xa8eb521b)
		HX_STACK_ARG(imageLoader,"imageLoader")
		HX_STACK_LINE(56)
		int index = ::Lambda_obj::indexOf(::com::danielfreeman::madcomponents::UIImageLoader_obj::_loaderQueue,imageLoader);		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(57)
		if (((index >= (int)0))){
			HX_STACK_LINE(58)
			::com::danielfreeman::madcomponents::UIImageLoader_obj::_loaderQueue->splice(index,(int)1);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIImageLoader_obj,removeFromQueue,(void))

Void UIImageLoader_obj::loadNext( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UIImageLoader","loadNext",0x27b3ee01,"com.danielfreeman.madcomponents.UIImageLoader.loadNext","com/danielfreeman/madcomponents/UIImageLoader.hx",64,0xa8eb521b)
		HX_STACK_LINE(64)
		if (((::com::danielfreeman::madcomponents::UIImageLoader_obj::_loaderQueue->length > (int)0))){
			HX_STACK_LINE(65)
			::com::danielfreeman::madcomponents::UIImageLoader imageLoader = ::com::danielfreeman::madcomponents::UIImageLoader_obj::_loaderQueue->shift().StaticCast< ::com::danielfreeman::madcomponents::UIImageLoader >();		HX_STACK_VAR(imageLoader,"imageLoader");
			HX_STACK_LINE(66)
			imageLoader->doLoad();
		}
		else{
			HX_STACK_LINE(68)
			::com::danielfreeman::madcomponents::UIImageLoader_obj::_running = false;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(UIImageLoader_obj,loadNext,(void))


UIImageLoader_obj::UIImageLoader_obj()
{
}

void UIImageLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIImageLoader);
	HX_MARK_MEMBER_NAME(_base,"_base");
	HX_MARK_MEMBER_NAME(_error,"_error");
	HX_MARK_MEMBER_NAME(_cache,"_cache");
	HX_MARK_MEMBER_NAME(_queue,"_queue");
	HX_MARK_MEMBER_NAME(_loader,"_loader");
	HX_MARK_MEMBER_NAME(_url,"_url");
	::com::danielfreeman::madcomponents::UIImage_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIImageLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_base,"_base");
	HX_VISIT_MEMBER_NAME(_error,"_error");
	HX_VISIT_MEMBER_NAME(_cache,"_cache");
	HX_VISIT_MEMBER_NAME(_queue,"_queue");
	HX_VISIT_MEMBER_NAME(_loader,"_loader");
	HX_VISIT_MEMBER_NAME(_url,"_url");
	::com::danielfreeman::madcomponents::UIImage_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIImageLoader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_url") ) { return _url; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_base") ) { return _base; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_error") ) { return _error; }
		if (HX_FIELD_EQ(inName,"_cache") ) { return _cache; }
		if (HX_FIELD_EQ(inName,"_queue") ) { return _queue; }
		if (HX_FIELD_EQ(inName,"doLoad") ) { return doLoad_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_loader") ) { return _loader; }
		if (HX_FIELD_EQ(inName,"errorFn") ) { return errorFn_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_running") ) { return _running; }
		if (HX_FIELD_EQ(inName,"loadNext") ) { return loadNext_dyn(); }
		if (HX_FIELD_EQ(inName,"theError") ) { return get_theError(); }
		if (HX_FIELD_EQ(inName,"isLoaded") ) { return isLoaded_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { return clearCache_dyn(); }
		if (HX_FIELD_EQ(inName,"addToQueue") ) { return addToQueue_dyn(); }
		if (HX_FIELD_EQ(inName,"destructor") ) { return destructor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_imageCache") ) { return _imageCache; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_placeHolder") ) { return _placeHolder; }
		if (HX_FIELD_EQ(inName,"_loaderQueue") ) { return _loaderQueue; }
		if (HX_FIELD_EQ(inName,"loadURLImage") ) { return loadURLImage_dyn(); }
		if (HX_FIELD_EQ(inName,"get_theError") ) { return get_theError_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeFromQueue") ) { return removeFromQueue_dyn(); }
		if (HX_FIELD_EQ(inName,"removeListeners") ) { return removeListeners_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIImageLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_url") ) { _url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_base") ) { _base=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_error") ) { _error=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cache") ) { _cache=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_queue") ) { _queue=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_loader") ) { _loader=inValue.Cast< ::openfl::display::Loader >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_running") ) { _running=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_imageCache") ) { _imageCache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_placeHolder") ) { _placeHolder=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_loaderQueue") ) { _loaderQueue=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIImageLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("theError"));
	outFields->push(HX_CSTRING("_base"));
	outFields->push(HX_CSTRING("_error"));
	outFields->push(HX_CSTRING("_cache"));
	outFields->push(HX_CSTRING("_queue"));
	outFields->push(HX_CSTRING("_loader"));
	outFields->push(HX_CSTRING("_url"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LOADED"),
	HX_CSTRING("_imageCache"),
	HX_CSTRING("_placeHolder"),
	HX_CSTRING("_loaderQueue"),
	HX_CSTRING("_running"),
	HX_CSTRING("clearCache"),
	HX_CSTRING("addToQueue"),
	HX_CSTRING("removeFromQueue"),
	HX_CSTRING("loadNext"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(UIImageLoader_obj,_base),HX_CSTRING("_base")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UIImageLoader_obj,_error),HX_CSTRING("_error")},
	{hx::fsBool,(int)offsetof(UIImageLoader_obj,_cache),HX_CSTRING("_cache")},
	{hx::fsBool,(int)offsetof(UIImageLoader_obj,_queue),HX_CSTRING("_queue")},
	{hx::fsObject /*::openfl::display::Loader*/ ,(int)offsetof(UIImageLoader_obj,_loader),HX_CSTRING("_loader")},
	{hx::fsString,(int)offsetof(UIImageLoader_obj,_url),HX_CSTRING("_url")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_base"),
	HX_CSTRING("_error"),
	HX_CSTRING("_cache"),
	HX_CSTRING("_queue"),
	HX_CSTRING("_loader"),
	HX_CSTRING("_url"),
	HX_CSTRING("set_value"),
	HX_CSTRING("loadURLImage"),
	HX_CSTRING("doLoad"),
	HX_CSTRING("errorFn"),
	HX_CSTRING("get_theError"),
	HX_CSTRING("isLoaded"),
	HX_CSTRING("removeListeners"),
	HX_CSTRING("destructor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIImageLoader_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIImageLoader_obj::LOADED,"LOADED");
	HX_MARK_MEMBER_NAME(UIImageLoader_obj::_imageCache,"_imageCache");
	HX_MARK_MEMBER_NAME(UIImageLoader_obj::_placeHolder,"_placeHolder");
	HX_MARK_MEMBER_NAME(UIImageLoader_obj::_loaderQueue,"_loaderQueue");
	HX_MARK_MEMBER_NAME(UIImageLoader_obj::_running,"_running");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIImageLoader_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIImageLoader_obj::LOADED,"LOADED");
	HX_VISIT_MEMBER_NAME(UIImageLoader_obj::_imageCache,"_imageCache");
	HX_VISIT_MEMBER_NAME(UIImageLoader_obj::_placeHolder,"_placeHolder");
	HX_VISIT_MEMBER_NAME(UIImageLoader_obj::_loaderQueue,"_loaderQueue");
	HX_VISIT_MEMBER_NAME(UIImageLoader_obj::_running,"_running");
};

#endif

Class UIImageLoader_obj::__mClass;

void UIImageLoader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UIImageLoader"), hx::TCanCast< UIImageLoader_obj> ,sStaticFields,sMemberFields,
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

void UIImageLoader_obj::__boot()
{
	LOADED= HX_CSTRING("imageLoaded");
	_imageCache= ::haxe::ds::StringMap_obj::__new();
	_placeHolder= ::openfl::display::BitmapData_obj::__new((int)0,(int)0,null(),null(),null());
	_loaderQueue= Array_obj< ::Dynamic >::__new();
	_running= false;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
