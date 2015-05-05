#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIe
#define INCLUDED_com_danielfreeman_extendedmadness_UIe

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/UI.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UIe)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UI)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
HX_DECLARE_CLASS2(openfl,utils,Timer)
namespace com{
namespace danielfreeman{
namespace extendedmadness{


class HXCPP_CLASS_ATTRIBUTES  UIe_obj : public ::com::danielfreeman::madcomponents::UI_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::UI_obj super;
		typedef UIe_obj OBJ_;
		UIe_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIe_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIe_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("UIe"); }

		static Array< ::String > DESKTOP_TOKENS;
		static Array< ::Dynamic > DESKTOP_CLASSES;
		static int COLOUR;
		static bool _cursor;
		static ::openfl::utils::Timer _clickTimer;
		static Void activate( ::openfl::display::Sprite screen);
		static Dynamic activate_dyn();

		static ::openfl::display::Sprite createInWindow( ::openfl::display::Sprite screen,::MadXML xml);
		static Dynamic createInWindow_dyn();

		static ::openfl::display::Sprite create( ::openfl::display::Sprite screen,::MadXML xml,hx::Null< Float >  width,hx::Null< Float >  height);
		static Dynamic create_dyn();

		static ::openfl::text::TextFormat toTextFormat( ::MadXML formatXML,::openfl::text::TextFormat format);
		static Dynamic toTextFormat_dyn();

};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UIe */ 
