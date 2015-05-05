#ifndef INCLUDED_com_danielfreeman_madcomponents_UIImageLoader
#define INCLUDED_com_danielfreeman_madcomponents_UIImageLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/UIImage.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIImage)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIImageLoader)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Loader)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UIImageLoader_obj : public ::com::danielfreeman::madcomponents::UIImage_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::UIImage_obj super;
		typedef UIImageLoader_obj OBJ_;
		UIImageLoader_obj();
		Void __construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIImageLoader_obj > __new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIImageLoader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIImageLoader"); }

		::String _base;
		Dynamic _error;
		bool _cache;
		bool _queue;
		::openfl::display::Loader _loader;
		::String _url;
		virtual ::String set_value( ::String value);

		virtual Void loadURLImage( ::String url);
		Dynamic loadURLImage_dyn();

		virtual Void doLoad( );
		Dynamic doLoad_dyn();

		virtual Void errorFn( Dynamic event);
		Dynamic errorFn_dyn();

		virtual Dynamic get_theError( );
		Dynamic get_theError_dyn();

		virtual Void isLoaded( ::openfl::events::Event event);
		Dynamic isLoaded_dyn();

		virtual Void removeListeners( ::openfl::display::Loader loader);
		Dynamic removeListeners_dyn();

		virtual Void destructor( );

		static ::String LOADED;
		static ::haxe::ds::StringMap _imageCache;
		static ::openfl::display::BitmapData _placeHolder;
		static Array< ::Dynamic > _loaderQueue;
		static bool _running;
		static Void clearCache( ::String url);
		static Dynamic clearCache_dyn();

		static Void addToQueue( ::com::danielfreeman::madcomponents::UIImageLoader imageLoader);
		static Dynamic addToQueue_dyn();

		static Void removeFromQueue( ::com::danielfreeman::madcomponents::UIImageLoader imageLoader);
		static Dynamic removeFromQueue_dyn();

		static Void loadNext( );
		static Dynamic loadNext_dyn();

};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UIImageLoader */ 
