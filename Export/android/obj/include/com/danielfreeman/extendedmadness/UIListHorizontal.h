#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIListHorizontal
#define INCLUDED_com_danielfreeman_extendedmadness_UIListHorizontal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/UIList.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UIListHorizontal)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IContainerUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadMasking)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UILabel)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIList)
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
HX_DECLARE_CLASS2(openfl,text,TextField)
namespace com{
namespace danielfreeman{
namespace extendedmadness{


class HXCPP_CLASS_ATTRIBUTES  UIListHorizontal_obj : public ::com::danielfreeman::madcomponents::UIList_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::UIList_obj super;
		typedef UIListHorizontal_obj OBJ_;
		UIListHorizontal_obj();
		Void __construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIListHorizontal_obj > __new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIListHorizontal_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("UIListHorizontal"); }

		int _rowWidth;
		virtual int set_index( int value);

		virtual Void initDraw( );

		virtual Void autoLayout( );

		virtual Void redrawCells( );

		virtual Dynamic set_data0( Dynamic value);

		virtual Void calculateMaximumSlide( );

		virtual Void simpleRenderers( Dynamic value,hx::Null< Float >  position);

		virtual ::com::danielfreeman::madcomponents::UILabel labelCell( Dynamic record,Float position);

		virtual Void drawSimpleCell( Float position,int count,hx::Null< int >  colour);

		virtual ::openfl::display::DisplayObject pressButton( hx::Null< bool >  show);

		virtual Void illuminate( hx::Null< int >  pressedCell,hx::Null< bool >  dispatch,hx::Null< bool >  show);

		virtual int autoLayoutPressedCell( Float x);

		virtual Void customRenderers( Dynamic value,hx::Null< Float >  position);

		virtual Void customCell( Dynamic record,Float position);

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

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

		static Float MINIMUM_BAR_WIDTH;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UIListHorizontal */ 
