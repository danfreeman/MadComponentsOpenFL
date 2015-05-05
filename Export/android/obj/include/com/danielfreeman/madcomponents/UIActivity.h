#ifndef INCLUDED_com_danielfreeman_madcomponents_UIActivity
#define INCLUDED_com_danielfreeman_madcomponents_UIActivity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIActivity)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,TimerEvent)
HX_DECLARE_CLASS2(openfl,utils,Timer)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UIActivity_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef UIActivity_obj OBJ_;
		UIActivity_obj();
		Void __construct(::openfl::display::Sprite screen,Float xx,Float yy,hx::Null< bool >  __o_visible,hx::Null< int >  __o_colour);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIActivity_obj > __new(::openfl::display::Sprite screen,Float xx,Float yy,hx::Null< bool >  __o_visible,hx::Null< int >  __o_colour);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIActivity_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIActivity"); }

		::openfl::utils::Timer timer;
		virtual Void rotateHandler( ::openfl::events::TimerEvent event);
		Dynamic rotateHandler_dyn();

		virtual Void drawActivityIndicator( int colour);
		Dynamic drawActivityIndicator_dyn();

		virtual bool set_rotate( bool value);
		Dynamic set_rotate_dyn();

		virtual bool set_isVisible( bool value);
		Dynamic set_isVisible_dyn();

		virtual Void destructor( );
		Dynamic destructor_dyn();

		static int SPOKES;
		static int INTERVAL;
		static Float INNER;
		static Float OUTER;
		static Float THICKNESS;
		static int INCREMENT;
		static Float DEGTORAD;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UIActivity */ 
