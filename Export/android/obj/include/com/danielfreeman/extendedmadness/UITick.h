#ifndef INCLUDED_com_danielfreeman_extendedmadness_UITick
#define INCLUDED_com_danielfreeman_extendedmadness_UITick

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UITick)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace com{
namespace danielfreeman{
namespace extendedmadness{


class HXCPP_CLASS_ATTRIBUTES  UITick_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef UITick_obj OBJ_;
		UITick_obj();
		Void __construct(::openfl::display::Sprite screen,Float xx,Float yy,int colour,hx::Null< bool >  __o_alt);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UITick_obj > __new(::openfl::display::Sprite screen,Float xx,Float yy,int colour,hx::Null< bool >  __o_alt);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UITick_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("UITick"); }

		Float _width;
		virtual int set_colour( int value);
		Dynamic set_colour_dyn();

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

		static Float SIZE;
		static Float HEAD;
		static Float HEIGHT;
		static Float WIDTH;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UITick */ 
