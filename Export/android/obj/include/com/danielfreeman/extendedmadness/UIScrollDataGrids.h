#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIScrollDataGrids
#define INCLUDED_com_danielfreeman_extendedmadness_UIScrollDataGrids

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/extendedmadness/UIScrollDataGrid.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UICell)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UIScrollDataGrid)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UIScrollDataGrids)
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
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace com{
namespace danielfreeman{
namespace extendedmadness{


class HXCPP_CLASS_ATTRIBUTES  UIScrollDataGrids_obj : public ::com::danielfreeman::extendedmadness::UIScrollDataGrid_obj{
	public:
		typedef ::com::danielfreeman::extendedmadness::UIScrollDataGrid_obj super;
		typedef UIScrollDataGrids_obj OBJ_;
		UIScrollDataGrids_obj();
		Void __construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIScrollDataGrids_obj > __new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIScrollDataGrids_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIScrollDataGrids"); }

		Array< ::Dynamic > _dataGrids;
		Array< ::Dynamic > _fixedColumnLayers;
		int _currentHeading;
		::openfl::display::Sprite _titleSlider;
		::openfl::display::Sprite _headerTitleSlider;
		bool _alignGridWidths;
		::openfl::text::TextFormat _statusFormat;
		::com::danielfreeman::madcomponents::UILabel _status;
		::openfl::display::Sprite _screen;
		Dynamic _gridColumns;
		bool _headerLines;
		virtual Void gridFixedColumns( hx::Null< int >  gridIndex,hx::Null< int >  row);
		Dynamic gridFixedColumns_dyn();

		virtual ::String set_status( ::String value);
		Dynamic set_status_dyn();

		virtual Void reposition( ::com::danielfreeman::extendedmadness::UICell cell);
		Dynamic reposition_dyn();

		virtual Void initialiseLayers( ::MadXML xml);
		Dynamic initialiseLayers_dyn();

		virtual Void addLayers( );
		Dynamic addLayers_dyn();

		virtual ::MadXML set_xml( ::MadXML value);

		virtual Void sliceTable( ::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid);

		virtual Void sliceTables( ::com::danielfreeman::extendedmadness::UISimpleDataGrid dataGrid,hx::Null< int >  index);
		Dynamic sliceTables_dyn();

		virtual Void sliceAllTables( );
		Dynamic sliceAllTables_dyn();

		virtual ::com::danielfreeman::extendedmadness::UICell copyText( ::openfl::display::Sprite parent,::com::danielfreeman::extendedmadness::UICell source,hx::Null< Float >  yPosition,hx::Null< int >  colour);
		Dynamic copyText_dyn();

		virtual Void copyRow( ::openfl::display::Sprite parent,Array< ::Dynamic > row,int start,int end,Float yPosition,int colour);
		Dynamic copyRow_dyn();

		virtual Void preExtractHeadersCells( );
		Dynamic preExtractHeadersCells_dyn();

		virtual Void swapCellHeaders( );
		Dynamic swapCellHeaders_dyn();

		virtual Float set_sliderX( Float value);

		virtual Float set_sliderY( Float value);

		virtual Void createSlider( ::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

		virtual Void headerFixedColumnLine( int index);
		Dynamic headerFixedColumnLine_dyn();

		virtual int set_selectDataGrid( int value);
		Dynamic set_selectDataGrid_dyn();

		virtual Array< ::Dynamic > get_dataGrids( );
		Dynamic get_dataGrids_dyn();

		virtual Void doAlignGridWidths( );
		Dynamic doAlignGridWidths_dyn();

		virtual Void drawRowColours( );
		Dynamic drawRowColours_dyn();

		virtual Void relayout( hx::Null< bool >  adjust);
		Dynamic relayout_dyn();

		virtual Void autoScrollEnabled( );

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

		virtual Float set_fixheight( Float value);
		Dynamic set_fixheight_dyn();

		virtual bool set_alignGridWidths( bool value);
		Dynamic set_alignGridWidths_dyn();

		virtual Void realignColumnLayers( );
		Dynamic realignColumnLayers_dyn();

		virtual Void adjustVerticalSlide( );

		virtual Void adjustMaximumSlide( );

		virtual Void doLayout( );

		virtual ::openfl::display::DisplayObject findViewById( ::String id,hx::Null< int >  row,hx::Null< int >  group);

		virtual Float set_textSize( Float value);

		virtual Void clear( );

		virtual Void destructor( );

		static Float EXTRA;
		static ::openfl::text::TextFormat STATUS_STYLE;
		static ::String HEADER_NAME;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UIScrollDataGrids */ 
