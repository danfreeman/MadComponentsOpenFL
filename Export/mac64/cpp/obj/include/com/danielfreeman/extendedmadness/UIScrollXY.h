#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIScrollXY
#define INCLUDED_com_danielfreeman_extendedmadness_UIScrollXY

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
HX_DECLARE_CLASS2(com,danielfreeman,AnimationTimer)
HX_DECLARE_CLASS2(com,danielfreeman,MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UIScrollXY)
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
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,events,TimerEvent)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace com{
namespace danielfreeman{
namespace extendedmadness{


class HXCPP_CLASS_ATTRIBUTES  UIScrollXY_obj : public ::com::danielfreeman::madcomponents::UIScrollVertical_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::UIScrollVertical_obj super;
		typedef UIScrollXY_obj OBJ_;
		UIScrollXY_obj();
		Void __construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIScrollXY_obj > __new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIScrollXY_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIScrollXY"); }

		Float _maximumSlideX;
		Float _deltaX;
		Float _endSliderX;
		Float _offsetX;
		bool _stopY;
		Float _tapToScale;
		::com::danielfreeman::AnimationTimer _scaleTimer;
		::openfl::geom::Point _thisPoint;
		::openfl::geom::Point _sliderPoint;
		Float _oldScale;
		Float _newScale;
		bool _auto;
		Float _scrollBarThreshold;
		bool _lockSides;
		bool _lockTopBottom;
		int _noSwipeCountX;
		bool _scrollEnabledX;
		bool _manhattan;
		virtual Void doubleClick( ::openfl::events::MouseEvent event);
		Dynamic doubleClick_dyn();

		virtual Void scaleAnimated( Float value,Float x,Float y);
		Dynamic scaleAnimated_dyn();

		virtual Void scaleAtXY( Float value,Float x,Float y);
		Dynamic scaleAtXY_dyn();

		virtual bool set_scrollEnabledX( bool value);
		Dynamic set_scrollEnabledX_dyn();

		virtual Void doScaleAtXY( Float value,::openfl::geom::Point thisPoint,::openfl::geom::Point sliderPoint);
		Dynamic doScaleAtXY_dyn();

		virtual Void scaleTimerHandler( ::openfl::events::TimerEvent event);
		Dynamic scaleTimerHandler_dyn();

		virtual Void adjustHorizontalSlide( Float sliderWidth);
		Dynamic adjustHorizontalSlide_dyn();

		virtual Void adjustMaximumSlide( );

		virtual Void handleFlick( );

		virtual Void mouseMove( ::openfl::events::TimerEvent event);

		virtual Void justMoveVerticallyOrHorizontally( );
		Dynamic justMoveVerticallyOrHorizontally_dyn();

		virtual bool get_outsideSlideRangeX( );
		Dynamic get_outsideSlideRangeX_dyn();

		virtual Void startMovement( );

		virtual bool startMovement0( );

		virtual Void stopMovement( );

		virtual Void movement( ::openfl::events::TimerEvent event);

		virtual Float getSliderWidth( );
		Dynamic getSliderWidth_dyn();

		virtual Void showScrollBar( );

		virtual Float set_sliderX( Float value);
		Dynamic set_sliderX_dyn();

		virtual Float get_sliderX( );
		Dynamic get_sliderX_dyn();

		virtual Float set_scrollPositionX( Float value);
		Dynamic set_scrollPositionX_dyn();

		virtual Float get_scrollPositionX( );
		Dynamic get_scrollPositionX_dyn();

		virtual Float set_scale( Float value);
		Dynamic set_scale_dyn();

		virtual Float get_scale( );
		Dynamic get_scale_dyn();

		virtual Void destructor( );

		static int STEPS;
		static Float ALT_FACTOR;
		static Float ALT_THRESHOLD;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UIScrollXY */ 
