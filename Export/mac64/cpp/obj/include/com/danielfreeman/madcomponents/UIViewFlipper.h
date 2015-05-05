#ifndef INCLUDED_com_danielfreeman_madcomponents_UIViewFlipper
#define INCLUDED_com_danielfreeman_madcomponents_UIViewFlipper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
HX_DECLARE_CLASS2(com,danielfreeman,MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IContainerUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadMasking)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIScrollVertical)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIViewFlipper)
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
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UIViewFlipper_obj : public ::com::danielfreeman::madcomponents::UIScrollVertical_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::UIScrollVertical_obj super;
		typedef UIViewFlipper_obj OBJ_;
		UIViewFlipper_obj();
		Void __construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIViewFlipper_obj > __new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIViewFlipper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIViewFlipper"); }

		Dynamic _pages;
		int _page;
		int _lastPage;
		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes0);

		virtual Void addPadding( ::String localName,::com::danielfreeman::madcomponents::Attributes newAttributes);
		Dynamic addPadding_dyn();

		virtual Void createSlider( ::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

		virtual Void attachPages( Dynamic pages);
		Dynamic attachPages_dyn();

		virtual Void drawScrollBar( );

		virtual Void mouseMove( ::openfl::events::TimerEvent event);

		virtual bool slideCondition( );
		Dynamic slideCondition_dyn();

		virtual bool startMovement0( );

		virtual ::openfl::display::DisplayObject findViewById( ::String id,hx::Null< int >  row,hx::Null< int >  group);

		virtual Float set_sliderX( Float value);
		Dynamic set_sliderX_dyn();

		virtual Void movement( ::openfl::events::TimerEvent event);

		virtual int set_pageNumber( int value);
		Dynamic set_pageNumber_dyn();

		virtual int get_pageNumber( );
		Dynamic get_pageNumber_dyn();

		virtual Void hideScrollBar( );

		static Float RADIUS;
		static Float SPACING;
		static Float SCROLLBAR_GAP;
		static Float DISTANCE_PER_TICK;
		static int TICKS_THRESHOLD;
		static int MAXIMUM_TICKS;
		static Float PADDING;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UIViewFlipper */ 
