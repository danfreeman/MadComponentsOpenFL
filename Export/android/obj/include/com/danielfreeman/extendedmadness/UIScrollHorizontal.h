#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIScrollHorizontal
#define INCLUDED_com_danielfreeman_extendedmadness_UIScrollHorizontal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UIScrollHorizontal)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IContainerUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadMasking)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIScrollVertical)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,TimerEvent)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace com{
namespace danielfreeman{
namespace extendedmadness{


class HXCPP_CLASS_ATTRIBUTES  UIScrollHorizontal_obj : public ::com::danielfreeman::madcomponents::UIScrollVertical_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::UIScrollVertical_obj super;
		typedef UIScrollHorizontal_obj OBJ_;
		UIScrollHorizontal_obj();
		Void __construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIScrollHorizontal_obj > __new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIScrollHorizontal_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("UIScrollHorizontal"); }

		virtual Void adjustMaximumSlide( );

		virtual Void mouseMove( ::openfl::events::TimerEvent event);

		virtual bool get_outsideSlideRangeX( );
		Dynamic get_outsideSlideRangeX_dyn();

		virtual bool startMovement0( );

		virtual Void movement( ::openfl::events::TimerEvent event);

		virtual Void drawScrollBar( );

		virtual Float set_sliderX( Float value);
		Dynamic set_sliderX_dyn();

		virtual Float get_sliderX( );
		Dynamic get_sliderX_dyn();

		virtual Float set_scrollPositionX( Float value);
		Dynamic set_scrollPositionX_dyn();

		virtual Float get_scrollPositionX( );
		Dynamic get_scrollPositionX_dyn();

};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UIScrollHorizontal */ 
