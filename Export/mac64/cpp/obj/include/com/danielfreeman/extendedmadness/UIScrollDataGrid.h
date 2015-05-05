#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIScrollDataGrid
#define INCLUDED_com_danielfreeman_extendedmadness_UIScrollDataGrid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/extendedmadness/UIScrollXY.h>
HX_DECLARE_CLASS2(com,danielfreeman,AnimationTimer)
HX_DECLARE_CLASS2(com,danielfreeman,MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UICell)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UIScrollDataGrid)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UIScrollXY)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UISimpleDataGrid)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IContainerUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadMasking)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UILabel)
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
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,TextField)
namespace com{
namespace danielfreeman{
namespace extendedmadness{


class HXCPP_CLASS_ATTRIBUTES  UIScrollDataGrid_obj : public ::com::danielfreeman::extendedmadness::UIScrollXY_obj{
	public:
		typedef ::com::danielfreeman::extendedmadness::UIScrollXY_obj super;
		typedef UIScrollDataGrid_obj OBJ_;
		UIScrollDataGrid_obj();
		Void __construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIScrollDataGrid_obj > __new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIScrollDataGrid_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIScrollDataGrid"); }

		::openfl::display::Sprite _headerSlider;
		::openfl::display::Sprite _fixedColumnSlider;
		::openfl::display::Sprite _headerFixedColumnSlider;
		::com::danielfreeman::MadXML _dataGridXML;
		int _fixedColumns;
		Array< int > _fixedColumnColours;
		::com::danielfreeman::extendedmadness::UISimpleDataGrid _dataGrid;
		Float _fixedColumnPosition;
		::com::danielfreeman::AnimationTimer _columnSlideTimer;
		bool _slideFixedColumns;
		Float _fixedColumnDelta;
		bool _trigger0;
		bool _trigger1;
		bool _fastLayout;
		bool _autoScrollEnabledX;
		virtual Void slideFixedColumnsIn( );
		Dynamic slideFixedColumnsIn_dyn();

		virtual Void slideFixedColumnsOut( );
		Dynamic slideFixedColumnsOut_dyn();

		virtual Void columnSlideMovement( ::openfl::events::Event event);
		Dynamic columnSlideMovement_dyn();

		virtual ::com::danielfreeman::MadXML noChildren( ::com::danielfreeman::MadXML xml);
		Dynamic noChildren_dyn();

		virtual Void colourFixedColumns( ::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid,hx::Null< bool >  flag);
		Dynamic colourFixedColumns_dyn();

		virtual Void sliceTable( ::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid);
		Dynamic sliceTable_dyn();

		virtual Void createSlider( ::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

		virtual Float set_sliderX( Float value);

		virtual Void mouseMove( ::openfl::events::TimerEvent event);

		virtual ::openfl::display::DisplayObject pressButton( hx::Null< bool >  show);

		virtual Void doSearchHit( );

		virtual Void mouseDrag( ::openfl::events::TimerEvent event);

		virtual Void mouseDown( ::openfl::events::MouseEvent event);

		virtual Float getSliderWidth( );

		virtual Float getSliderHeight( );

		virtual Float set_sliderY( Float value);

		virtual Dynamic set_gridData( Dynamic value);
		Dynamic set_gridData_dyn();

		virtual Dynamic set_headerAndData( Dynamic value);
		Dynamic set_headerAndData_dyn();

		virtual Void clear( );

		virtual int set_fixedColumns( int value);
		Dynamic set_fixedColumns_dyn();

		virtual Void compact( hx::Null< bool >  padding);
		Dynamic compact_dyn();

		virtual Array< ::Dynamic > get_tableCells( );
		Dynamic get_tableCells_dyn();

		virtual bool get_hasHeader( );
		Dynamic get_hasHeader_dyn();

		virtual ::com::danielfreeman::MadXML get_xml( );

		virtual Float set_textSize( Float value);
		Dynamic set_textSize_dyn();

		virtual Void fixedHeaderLine( ::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid);
		Dynamic fixedHeaderLine_dyn();

		virtual Void autoScrollEnabled( );
		Dynamic autoScrollEnabled_dyn();

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

		virtual ::openfl::display::DisplayObject findViewById( ::String id,hx::Null< int >  row,hx::Null< int >  group);

		virtual Void showScrollBar( );

		virtual Void hideScrollBar( );

		virtual Void adjustMaximumSlide( );

		virtual bool set_slideFixedColumns( bool value);
		Dynamic set_slideFixedColumns_dyn();

		virtual ::String set_title( ::String value);
		Dynamic set_title_dyn();

		virtual Array< int > set_colours( Array< int > value);
		Dynamic set_colours_dyn();

		virtual Array< int > get_colours( );
		Dynamic get_colours_dyn();

		virtual ::com::danielfreeman::extendedmadness::UISimpleDataGrid get_dataGrid( );
		Dynamic get_dataGrid_dyn();

		virtual Float set_scrollPositionY( Float value);

		virtual Float set_scrollPositionX( Float value);

		virtual Void destructor( );

		static ::String SWIPE_RIGHT;
		static int STEPS;
		static Float SWIPE_THRESHOLD;
		static int DARKEN;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UIScrollDataGrid */ 
