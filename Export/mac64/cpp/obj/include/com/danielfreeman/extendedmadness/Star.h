#ifndef INCLUDED_com_danielfreeman_extendedmadness_Star
#define INCLUDED_com_danielfreeman_extendedmadness_Star

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,Star)
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


class HXCPP_CLASS_ATTRIBUTES  Star_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Star_obj OBJ_;
		Star_obj();
		Void __construct(::openfl::display::Sprite screen,Float xx,Float yy,hx::Null< Float >  __o_size,hx::Null< int >  __o_frontColour,hx::Null< int >  __o_backColour);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Star_obj > __new(::openfl::display::Sprite screen,Float xx,Float yy,hx::Null< Float >  __o_size,hx::Null< int >  __o_frontColour,hx::Null< int >  __o_backColour);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Star_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Star"); }

		Float _amount;
		Float _radius;
		int _backColour;
		int _frontColour;
		int _lineColour;
		virtual Void redraw( );
		Dynamic redraw_dyn();

		virtual Float set_amount( Float value);
		Dynamic set_amount_dyn();

		static int BACK_COLOUR;
		static int FRONT_COLOUR;
		static Float GAP;
		static int UNDEFINED_COLOUR;
		static Float SIZE;
		static Float RADIUS;
		static Float INNER_RADIUS;
		static int SIDES;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_Star */ 
