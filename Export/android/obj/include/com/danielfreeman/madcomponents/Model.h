#ifndef INCLUDED_com_danielfreeman_madcomponents_Model
#define INCLUDED_com_danielfreeman_madcomponents_Model

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/net/URLLoader.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS0(MadXMLList)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Model)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,URLLoader)
HX_DECLARE_CLASS2(openfl,net,URLRequest)
HX_DECLARE_CLASS2(openfl,net,URLVariables)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  Model_obj : public ::openfl::net::URLLoader_obj{
	public:
		typedef ::openfl::net::URLLoader_obj super;
		typedef Model_obj OBJ_;
		Model_obj();
		Void __construct(::openfl::display::Sprite parent,::MadXML xml,::MadXML sendXml);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Model_obj > __new(::openfl::display::Sprite parent,::MadXML xml,::MadXML sendXml);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Model_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Model"); }

		::MadXML _schema;
		::MadXML _sendSchema;
		::openfl::display::Sprite _parent;
		::String _url;
		::String _sendUrl;
		::openfl::net::URLVariables _dataString;
		::String _sendBy;
		::String _service;
		::String _path;
		Dynamic _amfData;
		::String _action;
		::String _filter;
		::openfl::net::URLRequest _request;
		virtual ::openfl::display::Sprite get_page( );
		Dynamic get_page_dyn();

		virtual Void refresh( );
		Dynamic refresh_dyn();

		virtual Void loadXML( ::String url,::openfl::net::URLRequest request);
		Dynamic loadXML_dyn();

		virtual Void loadJSON( ::String url,::openfl::net::URLRequest request);
		Dynamic loadJSON_dyn();

		virtual Void loadAMFList( Dynamic value);
		Dynamic loadAMFList_dyn();

		virtual Dynamic set_dataAMF( Dynamic value);
		Dynamic set_dataAMF_dyn();

		virtual Dynamic followPath( Dynamic pointer,::String path);
		Dynamic followPath_dyn();

		virtual Dynamic parseAMFlist( Dynamic record,::MadXML schema,Dynamic result,::String path);
		Dynamic parseAMFlist_dyn();

		virtual Void sendURL( ::String url,::String action,::openfl::net::URLRequest request);
		Dynamic sendURL_dyn();

		virtual Void errorFn( Dynamic event);
		Dynamic errorFn_dyn();

		virtual Void isLoaded( ::openfl::events::Event event);
		Dynamic isLoaded_dyn();

		virtual Void jsonIsLoaded( ::openfl::events::Event event);
		Dynamic jsonIsLoaded_dyn();

		virtual ::MadXML set_dataXML( ::MadXML xml);
		Dynamic set_dataXML_dyn();

		virtual Dynamic get_dataAMF( );
		Dynamic get_dataAMF_dyn();

		virtual Dynamic listData( ::MadXML xml,::MadXML schema);
		Dynamic listData_dyn();

		virtual Void attributeValues( ::MadXML item,::MadXML childSchema,Dynamic result);
		Dynamic attributeValues_dyn();

		virtual Dynamic listValues( ::MadXML item,::MadXML childSchema);
		Dynamic listValues_dyn();

		virtual Dynamic listObject( ::MadXML item,::MadXMLList childSchema,Dynamic result);
		Dynamic listObject_dyn();

		virtual Dynamic xmlToObject( ::MadXML xml);
		Dynamic xmlToObject_dyn();

		virtual ::MadXML xmlPath( ::MadXML xml,::String path);
		Dynamic xmlPath_dyn();

		virtual Dynamic sendData( ::String sendBy);
		Dynamic sendData_dyn();

		virtual Void substitute( ::MadXML data);
		Dynamic substitute_dyn();

		static ::String LOADED;
		static ::String ERROR;
		static ::String queryString( ::String value);
		static Dynamic queryString_dyn();

		static ::String htmlDecode( ::String value);
		static Dynamic htmlDecode_dyn();

		static ::String addSlashes( ::String value);
		static Dynamic addSlashes_dyn();

};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_Model */ 
