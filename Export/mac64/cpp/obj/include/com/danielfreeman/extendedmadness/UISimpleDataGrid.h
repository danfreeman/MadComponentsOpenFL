#ifndef INCLUDED_com_danielfreeman_extendedmadness_UISimpleDataGrid
#define INCLUDED_com_danielfreeman_extendedmadness_UISimpleDataGrid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/MadSprite.h>
#include <com/danielfreeman/madcomponents/IComponentUI.h>
HX_DECLARE_CLASS2(com,danielfreeman,MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UICell)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UISimpleDataGrid)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UILabel)
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


class HXCPP_CLASS_ATTRIBUTES  UISimpleDataGrid_obj : public ::com::danielfreeman::madcomponents::MadSprite_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::MadSprite_obj super;
		typedef UISimpleDataGrid_obj OBJ_;
		UISimpleDataGrid_obj();
		Void __construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UISimpleDataGrid_obj > __new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UISimpleDataGrid_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::danielfreeman::madcomponents::IComponentUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IComponentUI_delegate_< UISimpleDataGrid_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("UISimpleDataGrid"); }

		Array< ::Dynamic > _table;
		Float _last;
		Float _lastWidth;
		Dynamic _cellWidths;
		Dynamic _theWidths;
		Float _leftMargin;
		Float _tableWidth;
		Dynamic _data;
		int _borderColour;
		Array< int > _colours;
		bool _compactTable;
		Array< Float > _columnWidths;
		bool _multiLine;
		bool _wordWrap;
		bool _hasHeader;
		::openfl::text::TextFormat _dataStyle;
		::openfl::text::TextFormat _headerStyle;
		::openfl::text::TextFormat _titleStyle;
		int _titleBarColour;
		::com::danielfreeman::extendedmadness::UICell _title;
		Dynamic _headerText;
		int _headerColour;
		Array< ::Dynamic > _recycle;
		bool _fastLayout;
		bool _border;
		bool _fits;
		bool _newData;
		Array< Float > _rowPositions;
		bool _headerLines;
		virtual Dynamic set_newData( Dynamic value);
		Dynamic set_newData_dyn();

		virtual bool get_fits( );
		Dynamic get_fits_dyn();

		virtual ::String set_widths( ::String value);
		Dynamic set_widths_dyn();

		virtual Array< int > set_colours( Array< int > value);
		Dynamic set_colours_dyn();

		virtual Array< int > get_colours( );
		Dynamic get_colours_dyn();

		virtual ::String set_title( ::String value);
		Dynamic set_title_dyn();

		virtual ::com::danielfreeman::extendedmadness::UICell get_titleCell( );
		Dynamic get_titleCell_dyn();

		virtual Float set_fixwidth( Float value);
		Dynamic set_fixwidth_dyn();

		virtual int set_headerColour( int value);
		Dynamic set_headerColour_dyn();

		virtual int get_headerColour( );
		Dynamic get_headerColour_dyn();

		virtual Void calculateCustomWidths( );
		Dynamic calculateCustomWidths_dyn();

		virtual Void customWidths( );
		Dynamic customWidths_dyn();

		virtual Void verticalGridLines( );
		Dynamic verticalGridLines_dyn();

		virtual Void horizontalGridLines( );
		Dynamic horizontalGridLines_dyn();

		virtual Void drawBackground( );
		Dynamic drawBackground_dyn();

		virtual Void makeTable( Dynamic data,::openfl::text::TextFormat format);
		Dynamic makeTable_dyn();

		virtual Array< ::Dynamic > get_pages( );
		Dynamic get_pages_dyn();

		virtual Void extractData( ::com::danielfreeman::MadXML xml);
		Dynamic extractData_dyn();

		virtual Float initialHeight( int rowIndex);
		Dynamic initialHeight_dyn();

		virtual Void rejig( );
		Dynamic rejig_dyn();

		virtual Void doLayout( );
		Dynamic doLayout_dyn();

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

		virtual Void drawComponent( );
		Dynamic drawComponent_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual ::openfl::display::DisplayObject findViewById( ::String id,hx::Null< int >  row,hx::Null< int >  group);
		Dynamic findViewById_dyn();

		virtual Array< ::String > extractHeader( ::com::danielfreeman::MadXML xml);
		Dynamic extractHeader_dyn();

		virtual int get_numberOfRows( );
		Dynamic get_numberOfRows_dyn();

		virtual int yToRow( Float y);
		Dynamic yToRow_dyn();

		virtual Void reformatTopRow( ::openfl::text::TextFormat format);
		Dynamic reformatTopRow_dyn();

		virtual Void addHeaderToTable( );
		Dynamic addHeaderToTable_dyn();

		virtual Void removeHeaderFromTable( );
		Dynamic removeHeaderFromTable_dyn();

		virtual Void setData( Dynamic value,hx::Null< bool >  includeHeader);
		Dynamic setData_dyn();

		virtual Dynamic set_data( Dynamic value);
		Dynamic set_data_dyn();

		virtual Dynamic get_data( );
		Dynamic get_data_dyn();

		virtual Dynamic set_headerAndData( Dynamic value);
		Dynamic set_headerAndData_dyn();

		virtual Array< ::Dynamic > get_tableCells( );
		Dynamic get_tableCells_dyn();

		virtual Float rowPosition( int value);
		Dynamic rowPosition_dyn();

		virtual Float rowHeight( int value);
		Dynamic rowHeight_dyn();

		virtual bool set_hasHeader( bool value);
		Dynamic set_hasHeader_dyn();

		virtual bool get_hasHeader( );
		Dynamic get_hasHeader_dyn();

		virtual Float estimateWidth( Float size,::String text);
		Dynamic estimateWidth_dyn();

		virtual Void initialiseColumnWidths( );
		Dynamic initialiseColumnWidths_dyn();

		virtual Void compact( hx::Null< bool >  padding);
		Dynamic compact_dyn();

		virtual Void removeCell( ::com::danielfreeman::extendedmadness::UICell cell);
		Dynamic removeCell_dyn();

		virtual ::com::danielfreeman::extendedmadness::UICell newCell( ::openfl::text::TextFormat format);
		Dynamic newCell_dyn();

		virtual Float get_theHeight( );

		static int DEFAULT_HEADER_COLOUR;
		static Array< int > DEFAULT_COLOURS;
		static Float TABLE_WIDTH;
		static Float TEXT_SIZE;
		static Float THRESHOLD;
		static Float LINE_THICKNESS;
		static Array< ::Dynamic > _sharedRecycle;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UISimpleDataGrid */ 
