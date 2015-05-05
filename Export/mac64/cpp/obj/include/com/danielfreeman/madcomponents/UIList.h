#ifndef INCLUDED_com_danielfreeman_madcomponents_UIList
#define INCLUDED_com_danielfreeman_madcomponents_UIList

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
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Model)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIInput)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UILabel)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIList)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIRefresh)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIScrollVertical)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UISearch)
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
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,net,URLLoader)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
HX_DECLARE_CLASS2(openfl,utils,Timer)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UIList_obj : public ::com::danielfreeman::madcomponents::UIScrollVertical_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::UIScrollVertical_obj super;
		typedef UIList_obj OBJ_;
		UIList_obj();
		Void __construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIList_obj > __new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIList_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIList"); }

		::openfl::text::TextFormat FORMAT;
		::com::danielfreeman::MadXML _renderer;
		bool _simple;
		int _count;
		int _cellHeight;
		int _pressedCell;
		::openfl::display::Shape _highlight;
		bool _clickRow;
		int _cellTop;
		Float _cellRendererLeft;
		Array< int > _colours;
		::String _suffix;
		::String _font;
		::com::danielfreeman::madcomponents::Model _model;
		::com::danielfreeman::madcomponents::UISearch _search;
		int _top;
		::com::danielfreeman::madcomponents::Attributes _rendererAttributes;
		::String _field;
		bool _begins;
		Dynamic _data;
		Dynamic _filteredData;
		::String _sortBy;
		::String _sortMode;
		::openfl::display::DisplayObject _row;
		bool _lines;
		Dynamic _cell;
		::com::danielfreeman::madcomponents::UIRefresh _refresh;
		bool _refreshState;
		bool _showPressed;
		::String _textAlign;
		bool _highlightPressed;
		bool _rowClick;
		int _highlightColour;
		::String _labelField;
		bool _highlightIsOn;
		int _saveIndex;
		int _header;
		bool _arrows;
		Float _lineGap;
		Float _lastPosition;
		::openfl::utils::Timer _highlightTimer;
		virtual Void addASearch( ::com::danielfreeman::MadXML xml);
		Dynamic addASearch_dyn();

		virtual ::com::danielfreeman::MadXML set_rendererXML( ::com::danielfreeman::MadXML value);
		Dynamic set_rendererXML_dyn();

		virtual bool set_arrows( bool value);
		Dynamic set_arrows_dyn();

		virtual int set_header( int value);
		Dynamic set_header_dyn();

		virtual int get_header( );
		Dynamic get_header_dyn();

		virtual ::String set_labelField( ::String value);
		Dynamic set_labelField_dyn();

		virtual Array< int > set_colours( Array< int > value);
		Dynamic set_colours_dyn();

		virtual Void initialiseRenderAttributes( ::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		Dynamic initialiseRenderAttributes_dyn();

		virtual Float indexToScrollPosition( int value);
		Dynamic indexToScrollPosition_dyn();

		virtual Void setIndex( int value,hx::Null< bool >  animate,hx::Null< bool >  move,hx::Null< bool >  highlight,hx::Null< Float >  offset);
		Dynamic setIndex_dyn();

		virtual int set_index( int value);
		Dynamic set_index_dyn();

		virtual ::com::danielfreeman::MadXML get_rendererXML( );
		Dynamic get_rendererXML_dyn();

		virtual Void doLayoutHandler( ::openfl::events::Event event);

		virtual ::com::danielfreeman::MadXML extractRenderer( ::com::danielfreeman::MadXML xml);
		Dynamic extractRenderer_dyn();

		virtual bool set_highlightPressed( bool value);
		Dynamic set_highlightPressed_dyn();

		virtual bool set_showPressed( bool value);
		Dynamic set_showPressed_dyn();

		virtual bool get_showPressed( );
		Dynamic get_showPressed_dyn();

		virtual Void clearPressed( );
		Dynamic clearPressed_dyn();

		virtual Void clearHighlight( ::openfl::events::Event event);
		Dynamic clearHighlight_dyn();

		virtual Void dispatchClickedEnd( );
		Dynamic dispatchClickedEnd_dyn();

		virtual Void endPressed( hx::Null< bool >  delay);
		Dynamic endPressed_dyn();

		virtual ::com::danielfreeman::MadXML set_xmlData( ::com::danielfreeman::MadXML value);
		Dynamic set_xmlData_dyn();

		virtual Dynamic attributesToObject( ::com::danielfreeman::MadXML child);
		Dynamic attributesToObject_dyn();

		virtual Void drawComponent( );

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

		virtual Void autoLayout( );
		Dynamic autoLayout_dyn();

		virtual Void doLayout( );

		virtual Void redrawCells( );
		Dynamic redrawCells_dyn();

		virtual Void createSlider( ::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

		virtual Dynamic sortParameter( ::String value);
		Dynamic sortParameter_dyn();

		virtual Dynamic set_data( Dynamic value);

		virtual bool setData( Dynamic value,hx::Null< int >  index);
		Dynamic setData_dyn();

		virtual Dynamic set_filteredData( Dynamic value);
		Dynamic set_filteredData_dyn();

		virtual Dynamic set_data0( Dynamic value);
		Dynamic set_data0_dyn();

		virtual Void calculateMaximumSlide( );
		Dynamic calculateMaximumSlide_dyn();

		virtual Void adjustMaximumSlide( );

		virtual Dynamic get_data( );
		Dynamic get_data_dyn();

		virtual Dynamic get_filteredData( );
		Dynamic get_filteredData_dyn();

		virtual Dynamic filterArray( Dynamic data,::String searchFor,::String field,bool caseSensitive,bool begins);
		Dynamic filterArray_dyn();

		virtual Void filter( ::String searchFor,::String field,hx::Null< bool >  caseSensitive,hx::Null< bool >  begins);
		Dynamic filter_dyn();

		virtual Void simpleRenderers( Dynamic value,hx::Null< Float >  position);
		Dynamic simpleRenderers_dyn();

		virtual ::com::danielfreeman::madcomponents::UILabel labelCell( Dynamic record,Float position);
		Dynamic labelCell_dyn();

		virtual Void initDraw( );
		Dynamic initDraw_dyn();

		virtual Void resizeRefresh( );
		Dynamic resizeRefresh_dyn();

		virtual Void clearCells( );
		Dynamic clearCells_dyn();

		virtual bool hasLines( Dynamic record);
		Dynamic hasLines_dyn();

		virtual Void drawCell( Float position,int count,Dynamic record);
		Dynamic drawCell_dyn();

		virtual Void drawArrow( Float x,Float y);
		Dynamic drawArrow_dyn();

		virtual Void drawSimpleCell( Float position,int count,hx::Null< int >  colour);
		Dynamic drawSimpleCell_dyn();

		virtual Void dealWithArrows( int count,Float position);
		Dynamic dealWithArrows_dyn();

		virtual Void drawLines( Float position);
		Dynamic drawLines_dyn();

		virtual ::openfl::display::DisplayObject pressButton( hx::Null< bool >  show);

		virtual bool doClickRow( hx::Null< bool >  dispatch);
		Dynamic doClickRow_dyn();

		virtual Void pressedCellLimits( Dynamic groupDetail);
		Dynamic pressedCellLimits_dyn();

		virtual bool highlightForIndex( int rowIndex);
		Dynamic highlightForIndex_dyn();

		virtual Void illuminate( hx::Null< int >  pressedCell,hx::Null< bool >  dispatch,hx::Null< bool >  show);
		Dynamic illuminate_dyn();

		virtual int autoLayoutPressedCell( Float y);
		Dynamic autoLayoutPressedCell_dyn();

		virtual Void activate( hx::Null< bool >  dispatch);
		Dynamic activate_dyn();

		virtual Void mouseDown( ::openfl::events::MouseEvent event);

		virtual Void mouseUp( ::openfl::events::MouseEvent event);

		virtual Void doCancel( );
		Dynamic doCancel_dyn();

		virtual Void touchCancel( );

		virtual int get_index( );
		Dynamic get_index_dyn();

		virtual Dynamic get_row( );
		Dynamic get_row_dyn();

		virtual Void clickUp( ::openfl::events::TimerEvent event);

		virtual Void customRenderers( Dynamic value,hx::Null< Float >  position);
		Dynamic customRenderers_dyn();

		virtual ::openfl::display::DisplayObject newRow( ::com::danielfreeman::MadXML rendererXML);
		Dynamic newRow_dyn();

		virtual ::com::danielfreeman::madcomponents::UILabel newLabel( );
		Dynamic newLabel_dyn();

		virtual Void customCell( Dynamic record,Float position);
		Dynamic customCell_dyn();

		virtual Void fillInValues( ::openfl::display::DisplayObject cell,Dynamic record);
		Dynamic fillInValues_dyn();

		virtual bool set_clickRow( bool value);
		Dynamic set_clickRow_dyn();

		virtual ::com::danielfreeman::madcomponents::Model get_model( );

		virtual Void searchHandler( ::openfl::events::Event event);
		Dynamic searchHandler_dyn();

		virtual Void doSearchHit( );

		virtual ::openfl::display::DisplayObject findViewById( ::String id,hx::Null< int >  row,hx::Null< int >  group);

		virtual ::com::danielfreeman::madcomponents::IContainerUI get_rowContainer( );
		Dynamic get_rowContainer_dyn();

		virtual Void mouseMove( ::openfl::events::TimerEvent event);

		virtual Void stopMovement( );

		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual ::openfl::geom::Rectangle rowRectangle( Float y);

		virtual bool set_searchVisible( bool value);
		Dynamic set_searchVisible_dyn();

		virtual Void clear( );

		virtual Void destructor( );

		static ::String CLICK_START;
		static ::String CLICKED;
		static ::String CLICKED_END;
		static ::String CLICK_CANCEL;
		static ::String LONG_CLICK;
		static ::String REFRESH;
		static Float ARROW;
		static Float TOP;
		static Float PULL_THRESHOLD;
		static int LONG_CLICK_THRESHOLD;
		static int HIGHLIGHT;
		static ::String PULL_DOWN_TEXT;
		static ::String REFRESH_TEXT;
		static int TOUCH_THRESHOLD;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UIList */ 
