#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
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
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIForm
#include <com/danielfreeman/madcomponents/UIForm.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIList
#include <com/danielfreeman/madcomponents/UIList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical
#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_net_URLVariables
#include <openfl/net/URLVariables.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void Model_obj::__construct(::openfl::display::Sprite parent,::MadXML xml,::MadXML sendXml)
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","new",0x7e2b60c7,"com.danielfreeman.madcomponents.Model.new","com/danielfreeman/madcomponents/Model.hx",70,0x88e37ecc)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
HX_STACK_ARG(xml,"xml")
HX_STACK_ARG(sendXml,"sendXml")
{
	HX_STACK_LINE(92)
	this->_request = null();
	HX_STACK_LINE(91)
	this->_filter = HX_CSTRING("");
	HX_STACK_LINE(90)
	this->_action = HX_CSTRING("");
	HX_STACK_LINE(89)
	this->_amfData = null();
	HX_STACK_LINE(88)
	this->_path = HX_CSTRING("");
	HX_STACK_LINE(86)
	this->_sendBy = HX_CSTRING("xml");
	HX_STACK_LINE(81)
	this->_sendSchema = null();
	HX_STACK_LINE(80)
	this->_schema = null();
	HX_STACK_LINE(98)
	super::__construct(null());
	HX_STACK_LINE(99)
	this->_parent = parent;
	HX_STACK_LINE(100)
	if (((xml != null()))){
		HX_STACK_LINE(101)
		::MadXMLList children = xml->children(null());		HX_STACK_VAR(children,"children");
		HX_STACK_LINE(102)
		int _g = children->length();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		::MadXML _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(102)
		if (((_g > (int)0))){
			HX_STACK_LINE(102)
			_g1 = children->get((int)0);
		}
		else{
			HX_STACK_LINE(102)
			_g1 = null();
		}
		HX_STACK_LINE(102)
		this->_schema = _g1;
		HX_STACK_LINE(103)
		if ((xml->has->resolve(HX_CSTRING("url")))){
			HX_STACK_LINE(104)
			::String _g2 = xml->att->resolve(HX_CSTRING("url"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(104)
			this->_url = _g2;
		}
		HX_STACK_LINE(106)
		if ((xml->has->resolve(HX_CSTRING("service")))){
			HX_STACK_LINE(107)
			::String _g3 = xml->att->resolve(HX_CSTRING("service"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(107)
			this->_service = _g3;
		}
		HX_STACK_LINE(109)
		if ((xml->has->resolve(HX_CSTRING("path")))){
			HX_STACK_LINE(110)
			::String _g4 = xml->att->resolve(HX_CSTRING("path"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(110)
			this->_path = _g4;
		}
		HX_STACK_LINE(112)
		if ((xml->has->resolve(HX_CSTRING("parse")))){
			HX_STACK_LINE(113)
			::String _g5 = xml->att->resolve(HX_CSTRING("parse"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(113)
			this->_path = _g5;
			HX_STACK_LINE(114)
			if ((::Std_obj::is(this->_parent,hx::ClassOf< ::com::danielfreeman::madcomponents::UIList >()))){
				HX_STACK_LINE(115)
				int pos = this->_path.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(116)
				::String _g6 = this->_path.substring((pos + (int)1),null());		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(116)
				this->_filter = _g6;
				HX_STACK_LINE(117)
				::String _g7 = this->_path.substring((int)0,pos);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(117)
				this->_path = _g7;
			}
		}
		HX_STACK_LINE(120)
		if ((xml->has->resolve(HX_CSTRING("action")))){
			HX_STACK_LINE(121)
			::String _g8 = xml->att->resolve(HX_CSTRING("action"));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(121)
			this->_action = _g8;
			HX_STACK_LINE(122)
			this->refresh();
		}
	}
	HX_STACK_LINE(125)
	if (((sendXml != null()))){
		HX_STACK_LINE(126)
		::MadXMLList sendChildren = sendXml->children(null());		HX_STACK_VAR(sendChildren,"sendChildren");
		HX_STACK_LINE(127)
		::MadXML _g9 = sendChildren->get((int)0);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(127)
		this->_sendSchema = _g9;
		HX_STACK_LINE(128)
		if ((sendXml->has->resolve(HX_CSTRING("url")))){
			HX_STACK_LINE(129)
			::String _g10 = sendXml->att->resolve(HX_CSTRING("url"));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(129)
			this->_sendUrl = _g10;
		}
		HX_STACK_LINE(131)
		if ((sendXml->has->resolve(HX_CSTRING("sendBy")))){
			HX_STACK_LINE(132)
			::String _g11 = sendXml->att->resolve(HX_CSTRING("sendBy"));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(132)
			this->_sendBy = _g11;
		}
		HX_STACK_LINE(134)
		if ((sendXml->has->resolve(HX_CSTRING("action")))){
			HX_STACK_LINE(135)
			::String _g12 = sendXml->att->resolve(HX_CSTRING("action"));		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(135)
			if (((_g12 == HX_CSTRING("send")))){
				HX_STACK_LINE(136)
				this->sendURL(null(),null(),null());
			}
			else{
				HX_STACK_LINE(139)
				::String _g13 = sendXml->att->resolve(HX_CSTRING("action"));		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(139)
				this->sendURL(HX_CSTRING(""),_g13,null());
			}
		}
	}
}
;
	return null();
}

//Model_obj::~Model_obj() { }

Dynamic Model_obj::__CreateEmpty() { return  new Model_obj; }
hx::ObjectPtr< Model_obj > Model_obj::__new(::openfl::display::Sprite parent,::MadXML xml,::MadXML sendXml)
{  hx::ObjectPtr< Model_obj > result = new Model_obj();
	result->__construct(parent,xml,sendXml);
	return result;}

Dynamic Model_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Model_obj > result = new Model_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::openfl::display::Sprite Model_obj::get_page( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","get_page",0x538d3011,"com.danielfreeman.madcomponents.Model.get_page","com/danielfreeman/madcomponents/Model.hx",149,0x88e37ecc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(149)
	return this->_parent;
}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,get_page,return )

Void Model_obj::refresh( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","refresh",0xa44629c2,"com.danielfreeman.madcomponents.Model.refresh","com/danielfreeman/madcomponents/Model.hx",189,0x88e37ecc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(189)
		if (((bool((this->_action == HX_CSTRING("load"))) || bool((this->_action == HX_CSTRING("loadXML")))))){
			HX_STACK_LINE(190)
			this->loadXML(null(),null());
		}
		else{
			HX_STACK_LINE(192)
			if (((this->_action == HX_CSTRING("loadJSON")))){
				HX_STACK_LINE(193)
				this->loadJSON(null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,refresh,(void))

Void Model_obj::loadXML( ::String __o_url,::openfl::net::URLRequest request){
::String url = __o_url.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","loadXML",0xc00b1b38,"com.danielfreeman.madcomponents.Model.loadXML","com/danielfreeman/madcomponents/Model.hx",200,0x88e37ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(url,"url")
	HX_STACK_ARG(request,"request")
{
		HX_STACK_LINE(201)
		if (((url == HX_CSTRING("")))){
			HX_STACK_LINE(202)
			url = this->_url;
		}
		else{
			HX_STACK_LINE(205)
			this->_url = url;
		}
		HX_STACK_LINE(207)
		this->addEventListener(::openfl::events::Event_obj::COMPLETE,this->isLoaded_dyn(),null(),null(),null());
		HX_STACK_LINE(208)
		if (((request == null()))){
			HX_STACK_LINE(209)
			::openfl::net::URLRequest _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(209)
			if (((this->_request != null()))){
				HX_STACK_LINE(209)
				_g = this->_request;
			}
			else{
				HX_STACK_LINE(209)
				_g = ::openfl::net::URLRequest_obj::__new(url);
			}
			HX_STACK_LINE(209)
			request = _g;
		}
		else{
			HX_STACK_LINE(212)
			this->_request = request;
		}
		HX_STACK_LINE(214)
		try
		{
		HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
		{
			HX_STACK_LINE(215)
			this->load(request);
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::openfl::errors::Error >() ){
				HX_STACK_BEGIN_CATCH
				::openfl::errors::Error error = __e;{
					HX_STACK_LINE(218)
					this->errorFn(null());
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
		HX_STACK_LINE(220)
		this->_action = HX_CSTRING("loadXML");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Model_obj,loadXML,(void))

Void Model_obj::loadJSON( ::String __o_url,::openfl::net::URLRequest request){
::String url = __o_url.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","loadJSON",0x40704987,"com.danielfreeman.madcomponents.Model.loadJSON","com/danielfreeman/madcomponents/Model.hx",226,0x88e37ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(url,"url")
	HX_STACK_ARG(request,"request")
{
		HX_STACK_LINE(227)
		if (((url == HX_CSTRING("")))){
			HX_STACK_LINE(228)
			url = this->_url;
		}
		else{
			HX_STACK_LINE(231)
			this->_url = url;
		}
		HX_STACK_LINE(233)
		this->addEventListener(::openfl::events::Event_obj::COMPLETE,this->jsonIsLoaded_dyn(),null(),null(),null());
		HX_STACK_LINE(234)
		if (((request == null()))){
			HX_STACK_LINE(235)
			::openfl::net::URLRequest _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(235)
			if (((this->_request != null()))){
				HX_STACK_LINE(235)
				_g = this->_request;
			}
			else{
				HX_STACK_LINE(235)
				_g = ::openfl::net::URLRequest_obj::__new(url);
			}
			HX_STACK_LINE(235)
			request = _g;
		}
		else{
			HX_STACK_LINE(238)
			this->_request = request;
		}
		HX_STACK_LINE(240)
		try
		{
		HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
		{
			HX_STACK_LINE(241)
			this->load(request);
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::openfl::errors::Error >() ){
				HX_STACK_BEGIN_CATCH
				::openfl::errors::Error error = __e;{
					HX_STACK_LINE(243)
					this->errorFn(null());
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
		HX_STACK_LINE(245)
		this->_action = HX_CSTRING("loadJSON");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Model_obj,loadJSON,(void))

Void Model_obj::loadAMFList( Dynamic value){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","loadAMFList",0x335c3959,"com.danielfreeman.madcomponents.Model.loadAMFList","com/danielfreeman/madcomponents/Model.hx",252,0x88e37ecc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(253)
		this->set_dataAMF(value);
		HX_STACK_LINE(254)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("dataLoaded"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(254)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,loadAMFList,(void))

Dynamic Model_obj::set_dataAMF( Dynamic value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","set_dataAMF",0xf93b2c7a,"com.danielfreeman.madcomponents.Model.set_dataAMF","com/danielfreeman/madcomponents/Model.hx",260,0x88e37ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(261)
	this->_amfData = value;
	HX_STACK_LINE(262)
	if (((bool((this->_path != HX_CSTRING(""))) && bool((value != null()))))){
		HX_STACK_LINE(263)
		Dynamic _g = this->followPath(value,this->_path);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(263)
		value = _g;
	}
	HX_STACK_LINE(265)
	if ((::Std_obj::is(this->_parent,hx::ClassOf< ::com::danielfreeman::madcomponents::UIList >()))){
		HX_STACK_LINE(266)
		if (((this->_schema == null()))){
			HX_STACK_LINE(267)
			Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(267)
			_g1 = hx::TCastToArray(value);
			HX_STACK_LINE(267)
			(hx::TCast< com::danielfreeman::madcomponents::UIList >::cast(this->_parent))->set_data(_g1);
		}
		else{
			HX_STACK_LINE(270)
			Dynamic arrayOfObjects = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(arrayOfObjects,"arrayOfObjects");
			HX_STACK_LINE(271)
			{
				HX_STACK_LINE(271)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(271)
				Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(271)
				_g1 = hx::TCastToArray(value);
				HX_STACK_LINE(271)
				while((true)){
					HX_STACK_LINE(271)
					if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(271)
						break;
					}
					HX_STACK_LINE(271)
					Dynamic record = _g1->__GetItem(_g);		HX_STACK_VAR(record,"record");
					HX_STACK_LINE(271)
					++(_g);
					HX_STACK_LINE(272)
					::MadXML _g2 = this->_schema->parent();		HX_STACK_VAR(_g2,"_g2");
					struct _Function_5_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/Model.hx",272,0x88e37ecc)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(272)
					Dynamic item = this->parseAMFlist(record,_g2,_Function_5_1::Block(),null());		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(273)
					if (((item != null()))){
						HX_STACK_LINE(274)
						arrayOfObjects->__Field(HX_CSTRING("push"),true)(item);
					}
				}
			}
			HX_STACK_LINE(277)
			(hx::TCast< com::danielfreeman::madcomponents::UIList >::cast(this->_parent))->set_data(arrayOfObjects);
		}
	}
	else{
		HX_STACK_LINE(282)
		Dynamic _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(282)
		if (((this->_schema == null()))){
			HX_STACK_LINE(282)
			_g4 = value;
		}
		else{
			HX_STACK_LINE(282)
			::MadXML _g3 = this->_schema->parent();		HX_STACK_VAR(_g3,"_g3");
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/Model.hx",282,0x88e37ecc)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(282)
			_g4 = this->parseAMFlist(value,_g3,_Function_3_1::Block(),null());
		}
		HX_STACK_LINE(282)
		(hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(this->_parent))->set_data(_g4);
	}
	HX_STACK_LINE(284)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,set_dataAMF,return )

Dynamic Model_obj::followPath( Dynamic pointer,::String path){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","followPath",0x3aac0a2f,"com.danielfreeman.madcomponents.Model.followPath","com/danielfreeman/madcomponents/Model.hx",290,0x88e37ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pointer,"pointer")
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(291)
	Array< ::String > items = path.split(HX_CSTRING("."));		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(292)
	{
		HX_STACK_LINE(292)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(292)
		while((true)){
			HX_STACK_LINE(292)
			if ((!(((_g < items->length))))){
				HX_STACK_LINE(292)
				break;
			}
			HX_STACK_LINE(292)
			::String item = items->__get(_g);		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(292)
			++(_g);
			HX_STACK_LINE(293)
			if (((item == HX_CSTRING("")))){
				HX_STACK_LINE(294)
				if ((::Std_obj::is(pointer,hx::ClassOf< Array<int> >()))){
					HX_STACK_LINE(295)
					Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(295)
					_g1 = hx::TCastToArray(pointer);
					HX_STACK_LINE(295)
					Dynamic _g11 = _g1->__GetItem((int)0);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(295)
					pointer = _g11;
				}
				else{
					HX_STACK_LINE(299)
					Array< ::String > _g2 = ::Reflect_obj::fields(pointer);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(299)
					::String _g3 = _g2->__get((int)0);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(299)
					pointer = _g3;
				}
			}
			else{
				HX_STACK_LINE(303)
				Dynamic _g4 = ::Reflect_obj::field(pointer,item);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(303)
				pointer = _g4;
			}
		}
	}
	HX_STACK_LINE(306)
	return pointer;
}


HX_DEFINE_DYNAMIC_FUNC2(Model_obj,followPath,return )

Dynamic Model_obj::parseAMFlist( Dynamic record,::MadXML schema,Dynamic result,::String __o_path){
::String path = __o_path.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","parseAMFlist",0x4b637e1e,"com.danielfreeman.madcomponents.Model.parseAMFlist","com/danielfreeman/madcomponents/Model.hx",312,0x88e37ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(record,"record")
	HX_STACK_ARG(schema,"schema")
	HX_STACK_ARG(result,"result")
	HX_STACK_ARG(path,"path")
{
		HX_STACK_LINE(313)
		::MadXMLList schemaChildren = schema->children(null());		HX_STACK_VAR(schemaChildren,"schemaChildren");
		HX_STACK_LINE(314)
		for(::cpp::FastIterator_obj< ::MadXML > *__it = ::cpp::CreateFastIterator< ::MadXML >(schemaChildren->iterator());  __it->hasNext(); ){
			::MadXML child = __it->next();
			{
				HX_STACK_LINE(315)
				::String field = child->get_name();		HX_STACK_VAR(field,"field");
				HX_STACK_LINE(316)
				::String pathChild = ((path + HX_CSTRING(".")) + field);		HX_STACK_VAR(pathChild,"pathChild");
				HX_STACK_LINE(317)
				if ((!(child->get_hasChildren()))){
					HX_STACK_LINE(318)
					::String _g = child->toString();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(318)
					if (((_g != HX_CSTRING("")))){
						HX_STACK_LINE(319)
						::String _g1 = child->toString();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(319)
						field = _g1;
					}
					HX_STACK_LINE(321)
					::String head = ::Reflect_obj::field(result,field);		HX_STACK_VAR(head,"head");
					HX_STACK_LINE(322)
					{
						HX_STACK_LINE(322)
						::String _g2 = pathChild.substr((int)1,null());		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(322)
						Dynamic _g3 = ::Reflect_obj::field(record,_g2);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(322)
						::String _g4 = ::Std_obj::string(_g3);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(322)
						Dynamic value;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(322)
						value = (((  (((head != null()))) ? ::String((head + HX_CSTRING(" "))) : ::String(HX_CSTRING("")) )) + _g4);
						HX_STACK_LINE(322)
						if (((result != null()))){
							HX_STACK_LINE(322)
							result->__SetField(field,value,false);
						}
					}
				}
				else{
					HX_STACK_LINE(325)
					Dynamic _g5 = this->parseAMFlist(record,child,result,pathChild);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(325)
					result = _g5;
				}
			}
;
		}
		HX_STACK_LINE(328)
		return result;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Model_obj,parseAMFlist,return )

Void Model_obj::sendURL( ::String __o_url,::String __o_action,::openfl::net::URLRequest request){
::String url = __o_url.Default(HX_CSTRING(""));
::String action = __o_action.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","sendURL",0x5fc306ee,"com.danielfreeman.madcomponents.Model.sendURL","com/danielfreeman/madcomponents/Model.hx",334,0x88e37ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(url,"url")
	HX_STACK_ARG(action,"action")
	HX_STACK_ARG(request,"request")
{
		HX_STACK_LINE(335)
		if (((url == HX_CSTRING("")))){
			HX_STACK_LINE(336)
			url = this->_sendUrl;
		}
		else{
			HX_STACK_LINE(339)
			this->_sendUrl = url;
		}
		HX_STACK_LINE(341)
		if (((action == HX_CSTRING("sendAndLoadXML")))){
			HX_STACK_LINE(342)
			this->addEventListener(::openfl::events::Event_obj::COMPLETE,this->isLoaded_dyn(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(344)
			if (((action == HX_CSTRING("sendAndLoadJSON")))){
				HX_STACK_LINE(345)
				this->addEventListener(::openfl::events::Event_obj::COMPLETE,this->jsonIsLoaded_dyn(),null(),null(),null());
			}
		}
		HX_STACK_LINE(347)
		if (((request == null()))){
			HX_STACK_LINE(348)
			::openfl::net::URLRequest _g = ::openfl::net::URLRequest_obj::__new(url);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(348)
			request = _g;
		}
		HX_STACK_LINE(350)
		if ((!(request->data))){
			HX_STACK_LINE(351)
			Dynamic _g1 = this->sendData(null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(351)
			request->data = _g1;
		}
		HX_STACK_LINE(353)
		if (((this->_sendBy == HX_CSTRING("get")))){
			HX_STACK_LINE(353)
			request->method = HX_CSTRING("GET");
		}
		else{
			HX_STACK_LINE(353)
			request->method = HX_CSTRING("POST");
		}
		HX_STACK_LINE(354)
		if (((this->_sendBy == HX_CSTRING("xml")))){
			HX_STACK_LINE(355)
			request->contentType = HX_CSTRING("text/xml");
		}
		HX_STACK_LINE(357)
		try
		{
		HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
		{
			HX_STACK_LINE(358)
			this->load(request);
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::openfl::errors::Error >() ){
				HX_STACK_BEGIN_CATCH
				::openfl::errors::Error error = __e;{
					HX_STACK_LINE(360)
					this->errorFn(null());
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Model_obj,sendURL,(void))

Void Model_obj::errorFn( Dynamic event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","errorFn",0xa12fdb17,"com.danielfreeman.madcomponents.Model.errorFn","com/danielfreeman/madcomponents/Model.hx",368,0x88e37ecc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(368)
		if (((  (((event == null()))) ? bool(::Std_obj::is(event,hx::ClassOf< ::openfl::events::Event >())) : bool(false) ))){
			HX_STACK_LINE(369)
			this->dispatchEvent(event);
		}
		else{
			HX_STACK_LINE(371)
			::openfl::events::Event _g = ::openfl::events::Event_obj::__new(HX_CSTRING("dataError"),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(371)
			this->dispatchEvent(_g);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,errorFn,(void))

Void Model_obj::isLoaded( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","isLoaded",0x3a597dc8,"com.danielfreeman.madcomponents.Model.isLoaded","com/danielfreeman/madcomponents/Model.hx",378,0x88e37ecc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(379)
		::String stringData = this->data;		HX_STACK_VAR(stringData,"stringData");
		HX_STACK_LINE(380)
		::String _g = ::EReg_obj::__new(HX_CSTRING("<\\?[^>]*\\?>"),HX_CSTRING("g"))->replace(stringData,HX_CSTRING(""));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(380)
		stringData = _g;
		HX_STACK_LINE(381)
		::String _g1 = ::EReg_obj::__new(HX_CSTRING("\\x{20}-\\x{7E}|\\n|\\t"),HX_CSTRING("g"))->replace(stringData,HX_CSTRING(""));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(381)
		stringData = _g1;
		HX_STACK_LINE(382)
		::String _g2 = ::com::danielfreeman::madcomponents::Model_obj::htmlDecode(stringData);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(382)
		::MadXML _g3 = ::MadXML_obj::parse(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(382)
		this->set_dataXML(_g3);
		HX_STACK_LINE(383)
		::openfl::events::Event _g4 = ::openfl::events::Event_obj::__new(HX_CSTRING("dataLoaded"),null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(383)
		this->dispatchEvent(_g4);
		HX_STACK_LINE(384)
		this->removeEventListener(::openfl::events::Event_obj::COMPLETE,this->isLoaded_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,isLoaded,(void))

Void Model_obj::jsonIsLoaded( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","jsonIsLoaded",0x7c69f490,"com.danielfreeman.madcomponents.Model.jsonIsLoaded","com/danielfreeman/madcomponents/Model.hx",390,0x88e37ecc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(391)
		Dynamic _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(391)
		{
			HX_STACK_LINE(391)
			::String text = this->data;		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(391)
			_g = ::haxe::format::JsonParser_obj::__new(text)->parseRec();
		}
		HX_STACK_LINE(391)
		this->set_dataAMF(_g);
		HX_STACK_LINE(392)
		::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(HX_CSTRING("dataLoaded"),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(392)
		this->dispatchEvent(_g1);
		HX_STACK_LINE(393)
		this->removeEventListener(::openfl::events::Event_obj::COMPLETE,this->jsonIsLoaded_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,jsonIsLoaded,(void))

::MadXML Model_obj::set_dataXML( ::MadXML xml){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","set_dataXML",0xf94ca057,"com.danielfreeman.madcomponents.Model.set_dataXML","com/danielfreeman/madcomponents/Model.hx",399,0x88e37ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_LINE(400)
	::MadXML schema = this->_schema;		HX_STACK_VAR(schema,"schema");
	HX_STACK_LINE(401)
	::MadXML _g = this->xmlPath(xml,this->_path);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(401)
	xml = _g;
	HX_STACK_LINE(402)
	if (((bool((this->_path != HX_CSTRING(""))) && bool((this->_schema != null()))))){
		HX_STACK_LINE(403)
		::MadXML _g1 = this->_schema->parent();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(403)
		schema = _g1;
	}
	HX_STACK_LINE(405)
	if ((::Std_obj::is(this->_parent,hx::ClassOf< ::com::danielfreeman::madcomponents::UIList >()))){
		HX_STACK_LINE(406)
		Dynamic arrayCollectionList = this->listData(xml,schema);		HX_STACK_VAR(arrayCollectionList,"arrayCollectionList");
		HX_STACK_LINE(407)
		(hx::TCast< com::danielfreeman::madcomponents::UIList >::cast(this->_parent))->set_data(arrayCollectionList);
	}
	else{
		HX_STACK_LINE(410)
		if ((::Std_obj::is(this->_parent,hx::ClassOf< ::com::danielfreeman::madcomponents::UIForm >()))){
			HX_STACK_LINE(411)
			Dynamic valuesObject = this->listValues(xml,schema);		HX_STACK_VAR(valuesObject,"valuesObject");
			HX_STACK_LINE(412)
			(hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(this->_parent))->set_data(valuesObject);
		}
	}
	HX_STACK_LINE(414)
	return xml;
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,set_dataXML,return )

Dynamic Model_obj::get_dataAMF( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","get_dataAMF",0xeece256e,"com.danielfreeman.madcomponents.Model.get_dataAMF","com/danielfreeman/madcomponents/Model.hx",421,0x88e37ecc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(421)
	return this->_amfData;
}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,get_dataAMF,return )

Dynamic Model_obj::listData( ::MadXML xml,::MadXML schema){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","listData",0xabd8bfe1,"com.danielfreeman.madcomponents.Model.listData","com/danielfreeman/madcomponents/Model.hx",427,0x88e37ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_ARG(schema,"schema")
	HX_STACK_LINE(428)
	Dynamic result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(429)
	::MadXMLList items = xml->children(null());		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(430)
	if (((schema == null()))){
		HX_STACK_LINE(431)
		result = Dynamic( Array_obj<Dynamic>::__new());
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::com::danielfreeman::madcomponents::Model_obj > __this,::MadXML &item0){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/Model.hx",433,0x88e37ecc)
				{
					HX_STACK_LINE(433)
					::String _g = item0->get_name();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(433)
					return (_g == __this->_filter);
				}
				return null();
			}
		};
		HX_STACK_LINE(432)
		for(::cpp::FastIterator_obj< ::MadXML > *__it = ::cpp::CreateFastIterator< ::MadXML >(items->iterator());  __it->hasNext(); ){
			::MadXML item0 = __it->next();
			if (((  ((!(((this->_filter == HX_CSTRING("")))))) ? bool(_Function_2_1::Block(this,item0)) : bool(true) ))){
				HX_STACK_LINE(434)
				Dynamic _g1 = this->xmlToObject(item0);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(434)
				result->__Field(HX_CSTRING("push"),true)(_g1);
			}
;
		}
	}
	else{
		HX_STACK_LINE(438)
		::MadXMLList schemaChildren = schema->children(null());		HX_STACK_VAR(schemaChildren,"schemaChildren");
		HX_STACK_LINE(439)
		int _g2 = items->length();		HX_STACK_VAR(_g2,"_g2");
		struct _Function_2_1{
			inline static bool Block( ::MadXMLList &schemaChildren){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/Model.hx",439,0x88e37ecc)
				{
					HX_STACK_LINE(439)
					int _g3 = schemaChildren->length();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(439)
					return (_g3 == (int)1);
				}
				return null();
			}
		};
		HX_STACK_LINE(439)
		if (((  (((  (((_g2 == (int)1))) ? bool(_Function_2_1::Block(schemaChildren)) : bool(false) ))) ? bool(schemaChildren->get((int)0)->get_hasChildren()) : bool(false) ))){
			HX_STACK_LINE(440)
			::MadXML _g4 = items->get((int)0);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(440)
			::MadXML _g5 = schemaChildren->get((int)0);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(440)
			Dynamic _g6 = this->listData(_g4,_g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(440)
			result = _g6;
			HX_STACK_LINE(441)
			if (((result != null()))){
				HX_STACK_LINE(442)
				return result;
			}
		}
		HX_STACK_LINE(445)
		int _g7 = items->length();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(445)
		if (((_g7 > (int)1))){
			HX_STACK_LINE(446)
			result = Dynamic( Array_obj<Dynamic>::__new());
			HX_STACK_LINE(447)
			::MadXMLList schemaGrandChildren = schemaChildren->get((int)0)->children(null());		HX_STACK_VAR(schemaGrandChildren,"schemaGrandChildren");
			HX_STACK_LINE(448)
			for(::cpp::FastIterator_obj< ::MadXML > *__it = ::cpp::CreateFastIterator< ::MadXML >(items->iterator());  __it->hasNext(); ){
				::MadXML item = __it->next();
				{
					HX_STACK_LINE(449)
					::String _g8 = item->get_name();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(449)
					int _g9 = schema->child0(_g8)->length();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(449)
					if (((_g9 > (int)0))){
						HX_STACK_LINE(450)
						Dynamic rowResult = this->listObject(item,schemaGrandChildren,null());		HX_STACK_VAR(rowResult,"rowResult");
						HX_STACK_LINE(451)
						::MadXML _g10 = schemaChildren->get((int)0);		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(451)
						this->attributeValues(item,_g10,rowResult);
						HX_STACK_LINE(452)
						result->__Field(HX_CSTRING("push"),true)(rowResult);
					}
				}
;
			}
		}
	}
	HX_STACK_LINE(457)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(Model_obj,listData,return )

Void Model_obj::attributeValues( ::MadXML item,::MadXML childSchema,Dynamic result){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","attributeValues",0xfeeaf405,"com.danielfreeman.madcomponents.Model.attributeValues","com/danielfreeman/madcomponents/Model.hx",461,0x88e37ecc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_ARG(childSchema,"childSchema")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(462)
		Dynamic schemaAttributes = childSchema->x->attributes();		HX_STACK_VAR(schemaAttributes,"schemaAttributes");
		HX_STACK_LINE(463)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(schemaAttributes);  __it->hasNext(); ){
			::String schemaAttributeKey = __it->next();
			if ((item->x->exists(schemaAttributeKey))){
				HX_STACK_LINE(465)
				::String schemaAttributeValue = childSchema->x->get(schemaAttributeKey);		HX_STACK_VAR(schemaAttributeValue,"schemaAttributeValue");
				HX_STACK_LINE(466)
				{
					HX_STACK_LINE(466)
					Dynamic value = item->x->get(schemaAttributeKey);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(466)
					if (((result != null()))){
						HX_STACK_LINE(466)
						result->__SetField((  (((schemaAttributeValue != HX_CSTRING("")))) ? ::String(schemaAttributeValue) : ::String(schemaAttributeKey) ),value,false);
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Model_obj,attributeValues,(void))

Dynamic Model_obj::listValues( ::MadXML item,::MadXML childSchema){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","listValues",0x10a38959,"com.danielfreeman.madcomponents.Model.listValues","com/danielfreeman/madcomponents/Model.hx",474,0x88e37ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_ARG(childSchema,"childSchema")
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/Model.hx",475,0x88e37ecc)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(475)
	Dynamic result = _Function_1_1::Block();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(476)
	if (((childSchema == null()))){
		HX_STACK_LINE(477)
		return this->xmlToObject(item);
	}
	else{
		HX_STACK_LINE(479)
		if ((!(item->get_hasChildren()))){
			HX_STACK_LINE(480)
			this->attributeValues(item,childSchema,result);
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				::String field = childSchema->get_name();		HX_STACK_VAR(field,"field");
				HX_STACK_LINE(481)
				Dynamic value = item->toString();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(481)
				if (((result != null()))){
					HX_STACK_LINE(481)
					result->__SetField(field,value,false);
				}
			}
			HX_STACK_LINE(482)
			return result;
		}
		else{
			HX_STACK_LINE(485)
			this->attributeValues(item,childSchema,result);
			HX_STACK_LINE(486)
			::MadXMLList _g = childSchema->children(null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(486)
			return this->listObject(item,_g,result);
		}
	}
	HX_STACK_LINE(476)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Model_obj,listValues,return )

Dynamic Model_obj::listObject( ::MadXML item,::MadXMLList childSchema,Dynamic result){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","listObject",0xd62c0436,"com.danielfreeman.madcomponents.Model.listObject","com/danielfreeman/madcomponents/Model.hx",493,0x88e37ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_ARG(childSchema,"childSchema")
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(495)
	if (((result == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/Model.hx",496,0x88e37ecc)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(496)
		result = _Function_2_1::Block();
		struct _Function_2_2{
			inline static bool Block( ::MadXMLList &childSchema){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/Model.hx",497,0x88e37ecc)
				{
					HX_STACK_LINE(497)
					int _g = childSchema->length();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(497)
					return (_g == (int)1);
				}
				return null();
			}
		};
		HX_STACK_LINE(497)
		if (((  (((  ((!(item->get_hasChildren()))) ? bool(_Function_2_2::Block(childSchema)) : bool(false) ))) ? bool(childSchema->get((int)0)->get_nodeKindIsText()) : bool(false) ))){
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::String field = childSchema->toString();		HX_STACK_VAR(field,"field");
				HX_STACK_LINE(498)
				Dynamic value = item->toString();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(498)
				if (((result != null()))){
					HX_STACK_LINE(498)
					result->__SetField(field,value,false);
				}
			}
			HX_STACK_LINE(499)
			return result;
		}
	}
	HX_STACK_LINE(503)
	for(::cpp::FastIterator_obj< ::MadXML > *__it = ::cpp::CreateFastIterator< ::MadXML >(childSchema->iterator());  __it->hasNext(); ){
		::MadXML child = __it->next();
		if ((!(child->get_nodeKindIsText()))){
			HX_STACK_LINE(505)
			::String tagName = child->get_name();		HX_STACK_VAR(tagName,"tagName");
			HX_STACK_LINE(506)
			if ((!(child->get_hasChildren()))){
				HX_STACK_LINE(507)
				::String field = child->toString();		HX_STACK_VAR(field,"field");
				HX_STACK_LINE(508)
				if (((field == HX_CSTRING("")))){
					HX_STACK_LINE(509)
					field = tagName;
				}
				HX_STACK_LINE(511)
				::MadXML _g1 = item->child0(tagName);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(511)
				this->attributeValues(_g1,child,result);
				HX_STACK_LINE(512)
				::String head = ::Reflect_obj::field(result,field);		HX_STACK_VAR(head,"head");
				HX_STACK_LINE(513)
				{
					HX_STACK_LINE(513)
					::String _g2 = item->child0(tagName)->toString();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(513)
					Dynamic value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(513)
					value = (((  (((head != null()))) ? ::String((head + HX_CSTRING(" "))) : ::String(HX_CSTRING("")) )) + _g2);
					HX_STACK_LINE(513)
					if (((result != null()))){
						HX_STACK_LINE(513)
						result->__SetField(field,value,false);
					}
				}
			}
			else{
				HX_STACK_LINE(516)
				::MadXML _g3 = item->child0(tagName);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(516)
				::MadXML _g4 = child->child0(null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(516)
				this->attributeValues(_g3,_g4,result);
				HX_STACK_LINE(517)
				::MadXML _g5 = item->child0(tagName);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(517)
				::MadXMLList _g6 = child->children(null());		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(517)
				Dynamic _g7 = this->listObject(_g5,_g6,result);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(517)
				result = _g7;
			}
		}
;
	}
	HX_STACK_LINE(520)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC3(Model_obj,listObject,return )

Dynamic Model_obj::xmlToObject( ::MadXML xml){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","xmlToObject",0xb3084ef8,"com.danielfreeman.madcomponents.Model.xmlToObject","com/danielfreeman/madcomponents/Model.hx",526,0x88e37ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xml,"xml")
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/Model.hx",527,0x88e37ecc)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(527)
	Dynamic result = _Function_1_1::Block();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(528)
	::MadXMLList children = xml->children(null());		HX_STACK_VAR(children,"children");
	HX_STACK_LINE(529)
	int _g = children->length();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(529)
	if (((  (((_g == (int)1))) ? bool(children->get((int)0)->get_nodeKindIsText()) : bool(false) ))){
		HX_STACK_LINE(530)
		::String field = xml->get_name();		HX_STACK_VAR(field,"field");
		HX_STACK_LINE(530)
		Dynamic value = children->get((int)0)->toString();		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(530)
		if (((result != null()))){
			HX_STACK_LINE(530)
			result->__SetField(field,value,false);
		}
	}
	else{
		HX_STACK_LINE(533)
		for(::cpp::FastIterator_obj< ::MadXML > *__it = ::cpp::CreateFastIterator< ::MadXML >(children->iterator());  __it->hasNext(); ){
			::MadXML child = __it->next();
			if ((!(child->get_nodeKindIsText()))){
				HX_STACK_LINE(534)
				::String field = child->get_name();		HX_STACK_VAR(field,"field");
				HX_STACK_LINE(534)
				Dynamic value;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(534)
				if ((!(child->get_hasChildren()))){
					HX_STACK_LINE(534)
					value = child->toString();
				}
				else{
					HX_STACK_LINE(534)
					value = this->xmlToObject(child);
				}
				HX_STACK_LINE(534)
				if (((result != null()))){
					HX_STACK_LINE(534)
					result->__SetField(field,value,false);
				}
			}
;
		}
	}
	HX_STACK_LINE(537)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,xmlToObject,return )

::MadXML Model_obj::xmlPath( ::MadXML xml,::String path){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","xmlPath",0x2e8d0703,"com.danielfreeman.madcomponents.Model.xmlPath","com/danielfreeman/madcomponents/Model.hx",543,0x88e37ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(544)
	Array< ::String > pathArray = path.split(HX_CSTRING("."));		HX_STACK_VAR(pathArray,"pathArray");
	HX_STACK_LINE(545)
	{
		HX_STACK_LINE(545)
		int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(545)
		int _g = pathArray->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(545)
		while((true)){
			HX_STACK_LINE(545)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(545)
				break;
			}
			HX_STACK_LINE(545)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(546)
			::Xml _g2 = xml->x->elementsNamed(pathArray->__get(i))->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(546)
			::MadXML _g11 = ::MadXML_obj::__new(_g2);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(546)
			xml = _g11;
		}
	}
	HX_STACK_LINE(548)
	return xml;
}


HX_DEFINE_DYNAMIC_FUNC2(Model_obj,xmlPath,return )

Dynamic Model_obj::sendData( ::String __o_sendBy){
::String sendBy = __o_sendBy.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","sendData",0x5fb1edcb,"com.danielfreeman.madcomponents.Model.sendData","com/danielfreeman/madcomponents/Model.hx",554,0x88e37ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sendBy,"sendBy")
{
		HX_STACK_LINE(555)
		if (((sendBy != HX_CSTRING("")))){
			HX_STACK_LINE(556)
			this->_sendBy = sendBy;
		}
		HX_STACK_LINE(558)
		::String _g = this->_sendSchema->get_innerHTML();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(558)
		::MadXML result = ::MadXML_obj::parse(_g);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(559)
		::openfl::net::URLVariables _g1 = ::openfl::net::URLVariables_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(559)
		this->_dataString = _g1;
		HX_STACK_LINE(560)
		this->substitute(result);
		HX_STACK_LINE(561)
		return this->_dataString;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,sendData,return )

Void Model_obj::substitute( ::MadXML data){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","substitute",0xdf41ead3,"com.danielfreeman.madcomponents.Model.substitute","com/danielfreeman/madcomponents/Model.hx",566,0x88e37ecc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(566)
		for(::cpp::FastIterator_obj< ::MadXML > *__it = ::cpp::CreateFastIterator< ::MadXML >(data->children(null())->iterator());  __it->hasNext(); ){
			::MadXML item = __it->next();
			if ((!(item->get_hasChildren()))){
				HX_STACK_LINE(568)
				::String _g = item->get_name();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(568)
				Dynamic obj = (hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(this->_parent))->findViewById(_g,null(),null());		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(569)
				if (((  (((obj != null()))) ? bool(obj->__Field(HX_CSTRING("exists"),true)(HX_CSTRING("text"))) : bool(false) ))){
					HX_STACK_LINE(570)
					Dynamic o = this->_dataString;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(570)
					::String field = item->get_name();		HX_STACK_VAR(field,"field");
					HX_STACK_LINE(570)
					if (((o != null()))){
						HX_STACK_LINE(570)
						o->__SetField(field,obj->__Field(HX_CSTRING("text"),true),false);
					}
				}
			}
			else{
				HX_STACK_LINE(574)
				this->substitute(item);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,substitute,(void))

::String Model_obj::LOADED;

::String Model_obj::ERROR;

::String Model_obj::queryString( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","queryString",0xba5ded60,"com.danielfreeman.madcomponents.Model.queryString","com/danielfreeman/madcomponents/Model.hx",155,0x88e37ecc)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(156)
	::String _g = ::EReg_obj::__new(HX_CSTRING("\\x{20}-\\x{7E}|\\s|\\t|\\n|\\r]"),HX_CSTRING("g"))->replace(value,HX_CSTRING(""));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(156)
	value = _g;
	HX_STACK_LINE(157)
	::String _g1 = ::StringTools_obj::htmlEscape(value,null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(157)
	value = _g1;
	HX_STACK_LINE(158)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Model_obj,queryString,return )

::String Model_obj::htmlDecode( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","htmlDecode",0x91352372,"com.danielfreeman.madcomponents.Model.htmlDecode","com/danielfreeman/madcomponents/Model.hx",164,0x88e37ecc)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(165)
	::String _g = ::EReg_obj::__new(HX_CSTRING("\\\\n"),HX_CSTRING("g"))->replace(value,HX_CSTRING("\n"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(165)
	value = _g;
	HX_STACK_LINE(166)
	::String _g1 = ::EReg_obj::__new(HX_CSTRING("&amp;"),HX_CSTRING("g"))->replace(value,HX_CSTRING("&"));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(166)
	value = _g1;
	HX_STACK_LINE(167)
	::String _g2 = ::EReg_obj::__new(HX_CSTRING("&quot;"),HX_CSTRING("g"))->replace(value,HX_CSTRING("\""));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(167)
	value = _g2;
	HX_STACK_LINE(168)
	::String _g3 = ::EReg_obj::__new(HX_CSTRING("&apos;"),HX_CSTRING("g"))->replace(value,HX_CSTRING("'"));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(168)
	value = _g3;
	HX_STACK_LINE(169)
	::String _g4 = ::EReg_obj::__new(HX_CSTRING("&lt;"),HX_CSTRING("g"))->replace(value,HX_CSTRING("<"));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(169)
	value = _g4;
	HX_STACK_LINE(170)
	::String _g5 = ::EReg_obj::__new(HX_CSTRING("&gt;"),HX_CSTRING("g"))->replace(value,HX_CSTRING(">"));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(170)
	value = _g5;
	HX_STACK_LINE(171)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Model_obj,htmlDecode,return )

::String Model_obj::addSlashes( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Model","addSlashes",0xc8f0e843,"com.danielfreeman.madcomponents.Model.addSlashes","com/danielfreeman/madcomponents/Model.hx",178,0x88e37ecc)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(179)
	::String _g = ::EReg_obj::__new(HX_CSTRING("\\\""),HX_CSTRING("g"))->replace(value,HX_CSTRING("\\\""));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(179)
	value = _g;
	HX_STACK_LINE(180)
	::String _g1 = ::EReg_obj::__new(HX_CSTRING("\\'"),HX_CSTRING("g"))->replace(value,HX_CSTRING("\\'"));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(180)
	value = _g1;
	HX_STACK_LINE(181)
	::String _g2 = ::EReg_obj::__new(HX_CSTRING("[\\x{00}-\\x{0C}\\x{0E}-\\x{1F}\\t]"),HX_CSTRING("g"))->replace(value,HX_CSTRING(" "));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(181)
	value = _g2;
	HX_STACK_LINE(182)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Model_obj,addSlashes,return )


Model_obj::Model_obj()
{
}

void Model_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Model);
	HX_MARK_MEMBER_NAME(_schema,"_schema");
	HX_MARK_MEMBER_NAME(_sendSchema,"_sendSchema");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(_url,"_url");
	HX_MARK_MEMBER_NAME(_sendUrl,"_sendUrl");
	HX_MARK_MEMBER_NAME(_dataString,"_dataString");
	HX_MARK_MEMBER_NAME(_sendBy,"_sendBy");
	HX_MARK_MEMBER_NAME(_service,"_service");
	HX_MARK_MEMBER_NAME(_path,"_path");
	HX_MARK_MEMBER_NAME(_amfData,"_amfData");
	HX_MARK_MEMBER_NAME(_action,"_action");
	HX_MARK_MEMBER_NAME(_filter,"_filter");
	HX_MARK_MEMBER_NAME(_request,"_request");
	::openfl::net::URLLoader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Model_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_schema,"_schema");
	HX_VISIT_MEMBER_NAME(_sendSchema,"_sendSchema");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(_url,"_url");
	HX_VISIT_MEMBER_NAME(_sendUrl,"_sendUrl");
	HX_VISIT_MEMBER_NAME(_dataString,"_dataString");
	HX_VISIT_MEMBER_NAME(_sendBy,"_sendBy");
	HX_VISIT_MEMBER_NAME(_service,"_service");
	HX_VISIT_MEMBER_NAME(_path,"_path");
	HX_VISIT_MEMBER_NAME(_amfData,"_amfData");
	HX_VISIT_MEMBER_NAME(_action,"_action");
	HX_VISIT_MEMBER_NAME(_filter,"_filter");
	HX_VISIT_MEMBER_NAME(_request,"_request");
	::openfl::net::URLLoader_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Model_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"page") ) { return get_page(); }
		if (HX_FIELD_EQ(inName,"_url") ) { return _url; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_path") ) { return _path; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dataAMF") ) { return get_dataAMF(); }
		if (HX_FIELD_EQ(inName,"_schema") ) { return _schema; }
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		if (HX_FIELD_EQ(inName,"_sendBy") ) { return _sendBy; }
		if (HX_FIELD_EQ(inName,"_action") ) { return _action; }
		if (HX_FIELD_EQ(inName,"_filter") ) { return _filter; }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"loadXML") ) { return loadXML_dyn(); }
		if (HX_FIELD_EQ(inName,"sendURL") ) { return sendURL_dyn(); }
		if (HX_FIELD_EQ(inName,"errorFn") ) { return errorFn_dyn(); }
		if (HX_FIELD_EQ(inName,"xmlPath") ) { return xmlPath_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_sendUrl") ) { return _sendUrl; }
		if (HX_FIELD_EQ(inName,"_service") ) { return _service; }
		if (HX_FIELD_EQ(inName,"_amfData") ) { return _amfData; }
		if (HX_FIELD_EQ(inName,"_request") ) { return _request; }
		if (HX_FIELD_EQ(inName,"get_page") ) { return get_page_dyn(); }
		if (HX_FIELD_EQ(inName,"loadJSON") ) { return loadJSON_dyn(); }
		if (HX_FIELD_EQ(inName,"isLoaded") ) { return isLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"listData") ) { return listData_dyn(); }
		if (HX_FIELD_EQ(inName,"sendData") ) { return sendData_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"htmlDecode") ) { return htmlDecode_dyn(); }
		if (HX_FIELD_EQ(inName,"addSlashes") ) { return addSlashes_dyn(); }
		if (HX_FIELD_EQ(inName,"followPath") ) { return followPath_dyn(); }
		if (HX_FIELD_EQ(inName,"listValues") ) { return listValues_dyn(); }
		if (HX_FIELD_EQ(inName,"listObject") ) { return listObject_dyn(); }
		if (HX_FIELD_EQ(inName,"substitute") ) { return substitute_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"queryString") ) { return queryString_dyn(); }
		if (HX_FIELD_EQ(inName,"_sendSchema") ) { return _sendSchema; }
		if (HX_FIELD_EQ(inName,"_dataString") ) { return _dataString; }
		if (HX_FIELD_EQ(inName,"loadAMFList") ) { return loadAMFList_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dataAMF") ) { return set_dataAMF_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dataXML") ) { return set_dataXML_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dataAMF") ) { return get_dataAMF_dyn(); }
		if (HX_FIELD_EQ(inName,"xmlToObject") ) { return xmlToObject_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"parseAMFlist") ) { return parseAMFlist_dyn(); }
		if (HX_FIELD_EQ(inName,"jsonIsLoaded") ) { return jsonIsLoaded_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"attributeValues") ) { return attributeValues_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Model_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_url") ) { _url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_path") ) { _path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dataAMF") ) { return set_dataAMF(inValue); }
		if (HX_FIELD_EQ(inName,"dataXML") ) { return set_dataXML(inValue); }
		if (HX_FIELD_EQ(inName,"_schema") ) { _schema=inValue.Cast< ::MadXML >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sendBy") ) { _sendBy=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_action") ) { _action=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filter") ) { _filter=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_sendUrl") ) { _sendUrl=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_service") ) { _service=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_amfData") ) { _amfData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_request") ) { _request=inValue.Cast< ::openfl::net::URLRequest >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_sendSchema") ) { _sendSchema=inValue.Cast< ::MadXML >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dataString") ) { _dataString=inValue.Cast< ::openfl::net::URLVariables >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Model_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("page"));
	outFields->push(HX_CSTRING("dataAMF"));
	outFields->push(HX_CSTRING("dataXML"));
	outFields->push(HX_CSTRING("_schema"));
	outFields->push(HX_CSTRING("_sendSchema"));
	outFields->push(HX_CSTRING("_parent"));
	outFields->push(HX_CSTRING("_url"));
	outFields->push(HX_CSTRING("_sendUrl"));
	outFields->push(HX_CSTRING("_dataString"));
	outFields->push(HX_CSTRING("_sendBy"));
	outFields->push(HX_CSTRING("_service"));
	outFields->push(HX_CSTRING("_path"));
	outFields->push(HX_CSTRING("_amfData"));
	outFields->push(HX_CSTRING("_action"));
	outFields->push(HX_CSTRING("_filter"));
	outFields->push(HX_CSTRING("_request"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LOADED"),
	HX_CSTRING("ERROR"),
	HX_CSTRING("queryString"),
	HX_CSTRING("htmlDecode"),
	HX_CSTRING("addSlashes"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::MadXML*/ ,(int)offsetof(Model_obj,_schema),HX_CSTRING("_schema")},
	{hx::fsObject /*::MadXML*/ ,(int)offsetof(Model_obj,_sendSchema),HX_CSTRING("_sendSchema")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Model_obj,_parent),HX_CSTRING("_parent")},
	{hx::fsString,(int)offsetof(Model_obj,_url),HX_CSTRING("_url")},
	{hx::fsString,(int)offsetof(Model_obj,_sendUrl),HX_CSTRING("_sendUrl")},
	{hx::fsObject /*::openfl::net::URLVariables*/ ,(int)offsetof(Model_obj,_dataString),HX_CSTRING("_dataString")},
	{hx::fsString,(int)offsetof(Model_obj,_sendBy),HX_CSTRING("_sendBy")},
	{hx::fsString,(int)offsetof(Model_obj,_service),HX_CSTRING("_service")},
	{hx::fsString,(int)offsetof(Model_obj,_path),HX_CSTRING("_path")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Model_obj,_amfData),HX_CSTRING("_amfData")},
	{hx::fsString,(int)offsetof(Model_obj,_action),HX_CSTRING("_action")},
	{hx::fsString,(int)offsetof(Model_obj,_filter),HX_CSTRING("_filter")},
	{hx::fsObject /*::openfl::net::URLRequest*/ ,(int)offsetof(Model_obj,_request),HX_CSTRING("_request")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_schema"),
	HX_CSTRING("_sendSchema"),
	HX_CSTRING("_parent"),
	HX_CSTRING("_url"),
	HX_CSTRING("_sendUrl"),
	HX_CSTRING("_dataString"),
	HX_CSTRING("_sendBy"),
	HX_CSTRING("_service"),
	HX_CSTRING("_path"),
	HX_CSTRING("_amfData"),
	HX_CSTRING("_action"),
	HX_CSTRING("_filter"),
	HX_CSTRING("_request"),
	HX_CSTRING("get_page"),
	HX_CSTRING("refresh"),
	HX_CSTRING("loadXML"),
	HX_CSTRING("loadJSON"),
	HX_CSTRING("loadAMFList"),
	HX_CSTRING("set_dataAMF"),
	HX_CSTRING("followPath"),
	HX_CSTRING("parseAMFlist"),
	HX_CSTRING("sendURL"),
	HX_CSTRING("errorFn"),
	HX_CSTRING("isLoaded"),
	HX_CSTRING("jsonIsLoaded"),
	HX_CSTRING("set_dataXML"),
	HX_CSTRING("get_dataAMF"),
	HX_CSTRING("listData"),
	HX_CSTRING("attributeValues"),
	HX_CSTRING("listValues"),
	HX_CSTRING("listObject"),
	HX_CSTRING("xmlToObject"),
	HX_CSTRING("xmlPath"),
	HX_CSTRING("sendData"),
	HX_CSTRING("substitute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Model_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Model_obj::LOADED,"LOADED");
	HX_MARK_MEMBER_NAME(Model_obj::ERROR,"ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Model_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Model_obj::LOADED,"LOADED");
	HX_VISIT_MEMBER_NAME(Model_obj::ERROR,"ERROR");
};

#endif

Class Model_obj::__mClass;

void Model_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.Model"), hx::TCanCast< Model_obj> ,sStaticFields,sMemberFields,
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

void Model_obj::__boot()
{
	LOADED= HX_CSTRING("dataLoaded");
	ERROR= HX_CSTRING("dataError");
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
