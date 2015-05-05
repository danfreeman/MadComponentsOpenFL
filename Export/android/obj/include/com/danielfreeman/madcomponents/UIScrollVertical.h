#ifndef INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical
#define INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/MadMasking.h>
#include <com/danielfreeman/madcomponents/IContainerUI.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IContainerUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadMasking)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Model)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIScrollVertical)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,events,TimerEvent)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,net,URLLoader)
HX_DECLARE_CLASS2(openfl,utils,Timer)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UIScrollVertical_obj : public ::com::danielfreeman::madcomponents::MadMasking_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::MadMasking_obj super;
		typedef UIScrollVertical_obj OBJ_;
		UIScrollVertical_obj();
		Void __construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIScrollVertical_obj > __new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIScrollVertical_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::danielfreeman::madcomponents::IComponentUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IComponentUI_delegate_< UIScrollVertical_obj >(this); }
		inline operator ::com::danielfreeman::madcomponents::IContainerUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IContainerUI_delegate_< UIScrollVertical_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("UIScrollVertical"); }

		Float _maximumSlide;
		Float _delta;
		::openfl::geom::Point _startMouse;
		::openfl::geom::Point _lastMouse;
		::openfl::geom::Point _startSlider;
		Float _endSlider;
		::openfl::display::Sprite _slider;
		Float _sliderPosition;
		::openfl::utils::Timer _touchTimer;
		::openfl::utils::Timer _moveTimer;
		::openfl::utils::Timer _dragTimer;
		::openfl::utils::Timer _clickTimer;
		Float _distance;
		::openfl::display::DisplayObject _pressButton;
		::openfl::display::DisplayObject _searchHitChild;
		::openfl::display::Shape _scrollBarLayer;
		Float _width;
		Float _height;
		int _colour;
		int _scrollBarColour;
		bool _noScroll;
		Float _deltaThreshold;
		bool _listClickable;
		bool _autoLayout;
		Float _offset;
		bool _scrollBarVisible;
		Float _scrollerWidth;
		Float _scrollerHeight;
		::String _border;
		Float _scale;
		Float _dampen;
		bool _classic;
		bool _autoScrollEnabled;
		bool _alwaysScrollBar;
		int _noSwipeCount;
		int _profile;
		Float _actualDeltaY;
		virtual Float set_dampen( Float value);
		Dynamic set_dampen_dyn();

		virtual Void addListeners( );
		Dynamic addListeners_dyn();

		virtual Void removeListeners( );
		Dynamic removeListeners_dyn();

		virtual Float deltaToDecay( Float delta);
		Dynamic deltaToDecay_dyn();

		virtual bool set_scrollEnabled( bool value);
		Dynamic set_scrollEnabled_dyn();

		virtual bool get_scrollEnabled( );
		Dynamic get_scrollEnabled_dyn();

		virtual Void drawComponent( );
		Dynamic drawComponent_dyn();

		virtual Array< ::Dynamic > get_pages( );
		Dynamic get_pages_dyn();

		virtual ::MadXML get_xml( );
		Dynamic get_xml_dyn();

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

		virtual ::openfl::geom::Rectangle rowRectangle( Float y);
		Dynamic rowRectangle_dyn();

		virtual Void adjustVerticalSlide( );
		Dynamic adjustVerticalSlide_dyn();

		virtual Void adjustMaximumSlide( );
		Dynamic adjustMaximumSlide_dyn();

		virtual Void doLayoutHandler( ::openfl::events::Event event);
		Dynamic doLayoutHandler_dyn();

		virtual Float get_maximumSlide( );
		Dynamic get_maximumSlide_dyn();

		virtual Void doLayout( );
		Dynamic doLayout_dyn();

		virtual ::MadXML set_xml( ::MadXML value);
		Dynamic set_xml_dyn();

		virtual Void createSlider( ::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		Dynamic createSlider_dyn();

		virtual ::com::danielfreeman::madcomponents::Attributes sliderAttributes( ::com::danielfreeman::madcomponents::Attributes attributes);
		Dynamic sliderAttributes_dyn();

		virtual Void androidMouseDisable( ::openfl::display::Sprite item);
		Dynamic androidMouseDisable_dyn();

		virtual Void mouseDown( ::openfl::events::MouseEvent event);
		Dynamic mouseDown_dyn();

		virtual Void touchCancel( );

		virtual Void stopScrolling( );
		Dynamic stopScrolling_dyn();

		virtual Void handleFlick( );
		Dynamic handleFlick_dyn();

		virtual Void mouseUp( ::openfl::events::MouseEvent event);
		Dynamic mouseUp_dyn();

		virtual Void mouseMove( ::openfl::events::TimerEvent event);
		Dynamic mouseMove_dyn();

		virtual Void mouseDrag( ::openfl::events::TimerEvent event);
		Dynamic mouseDrag_dyn();

		virtual Void startMovement( );
		Dynamic startMovement_dyn();

		virtual bool startMovement0( );
		Dynamic startMovement0_dyn();

		virtual Void movement( ::openfl::events::TimerEvent event);
		Dynamic movement_dyn();

		virtual Void stopMovement( );
		Dynamic stopMovement_dyn();

		virtual Void showScrollBar( );
		Dynamic showScrollBar_dyn();

		virtual Float getSliderHeight( );
		Dynamic getSliderHeight_dyn();

		virtual Void drawScrollBar( );
		Dynamic drawScrollBar_dyn();

		virtual Void hideScrollBar( );
		Dynamic hideScrollBar_dyn();

		virtual Void doSearchHit( );
		Dynamic doSearchHit_dyn();

		virtual ::openfl::display::DisplayObject pressButton( hx::Null< bool >  show);
		Dynamic pressButton_dyn();

		virtual Void clickUp( ::openfl::events::TimerEvent event);
		Dynamic clickUp_dyn();

		virtual ::openfl::display::DisplayObject searchHit( ::openfl::display::Sprite container);
		Dynamic searchHit_dyn();

		virtual ::openfl::display::DisplayObject searchHitChild( ::openfl::display::DisplayObject item);
		Dynamic searchHitChild_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual ::openfl::display::DisplayObject findViewById( ::String id,hx::Null< int >  row,hx::Null< int >  group);
		Dynamic findViewById_dyn();

		virtual bool get_outsideSlideRange( );
		Dynamic get_outsideSlideRange_dyn();

		virtual Float set_sliderY( Float value);
		Dynamic set_sliderY_dyn();

		virtual Float get_sliderY( );
		Dynamic get_sliderY_dyn();

		virtual bool set_sliderVisible( bool value);
		Dynamic set_sliderVisible_dyn();

		virtual bool get_sliderVisible( );
		Dynamic get_sliderVisible_dyn();

		virtual Float set_scrollPositionY( Float value);
		Dynamic set_scrollPositionY_dyn();

		virtual Void sliderMoved( );
		Dynamic sliderMoved_dyn();

		virtual Float get_scrollPositionY( );
		Dynamic get_scrollPositionY_dyn();

		virtual Dynamic set_data( Dynamic values);
		Dynamic set_data_dyn();

		virtual ::com::danielfreeman::madcomponents::Model get_model( );
		Dynamic get_model_dyn();

		virtual Void destructor( );

		static ::String STARTED;
		static ::String STOPPED;
		static Float DELTA_THRESHOLD;
		static Float THRESHOLD;
		static Float ABORT_THRESHOLD;
		static Float PADDING;
		static Float SCROLLBAR_POSITION;
		static Float SCROLLBAR_WIDTH;
		static Float MAXIMUM_DY;
		static Float FINISHED;
		static Float SMOOTH;
		static Float MARGIN;
		static int DELTA;
		static int DELTA_TOUCH;
		static Float BOUNCE;
		static int CLICK_DURATION;
		static Array< Float > SLOW_DECAY;
		static Array< Float > FAST_DECAY;
		static Array< Float > SLOW_DECAY_DELTA;
		static Array< Float > FAST_DECAY_DELTA;
		static int SPEED;
		static Float FLICK_THRESHOLD;
		static Float FLICK_FACTOR;
		static int MAXIMUM_TICKS;
		static Float DAMPEN;
		static int NO_SWIPE_THRESHOLD;
		static int TOUCH_DELAY;
		static bool inBounds( ::openfl::display::DisplayObject item,Float x,Float y);
		static Dynamic inBounds_dyn();

		static bool inBoundsChild( ::openfl::display::DisplayObject item,Float x,Float y);
		static Dynamic inBoundsChild_dyn();

};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical */ 
