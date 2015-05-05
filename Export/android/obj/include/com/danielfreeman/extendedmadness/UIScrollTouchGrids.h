#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIScrollTouchGrids
#define INCLUDED_com_danielfreeman_extendedmadness_UIScrollTouchGrids

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/extendedmadness/UIScrollDataGrids.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UIScrollDataGrid)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UIScrollDataGrids)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UIScrollTouchGrids)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UIScrollXY)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UISimpleDataGrid)
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
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,events,TimerEvent)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,utils,Timer)
namespace com{
namespace danielfreeman{
namespace extendedmadness{


class HXCPP_CLASS_ATTRIBUTES  UIScrollTouchGrids_obj : public ::com::danielfreeman::extendedmadness::UIScrollDataGrids_obj{
	public:
		typedef ::com::danielfreeman::extendedmadness::UIScrollDataGrids_obj super;
		typedef UIScrollTouchGrids_obj OBJ_;
		UIScrollTouchGrids_obj();
		Void __construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIScrollTouchGrids_obj > __new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIScrollTouchGrids_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIScrollTouchGrids"); }

		::openfl::utils::Timer _clickDelay;
		::openfl::utils::Timer _slideTimer;
		int _rowSelectColour;
		int _highlightedRowIndex;
		::com::danielfreeman::extendedmadness::UISimpleDataGrid _highlightedDataGrid;
		bool _originalNoScroll;
		int _clickedRowIndex;
		::openfl::geom::Point _lastMousePoint;
		Float _mouseDistance;
		Float _mouseDistanceX;
		Float _mouseDistanceY;
		bool _rowSelect;
		bool _showPressed;
		::openfl::display::Shape _temporaryRowHighlight;
		::openfl::display::Sprite _editButton;
		int _editButtonColour;
		Float _deltaEditButtonX;
		bool _editButtonMouseDown;
		bool _alt;
		bool _editButtonMoved;
		::openfl::display::Sprite _editButtonLayer;
		bool _headerClicked;
		::openfl::utils::Timer _timer;
		bool _longClickDispatched;
		::openfl::display::Sprite _upButton;
		::openfl::display::Sprite _downButton;
		::openfl::display::Sprite _upButtonArrow;
		::openfl::display::Sprite _downButtonArrow;
		Dynamic _pageButtonTarget;
		virtual bool set_showPressed( bool value);
		Dynamic set_showPressed_dyn();

		virtual bool set_pageUpVisible( bool value);
		Dynamic set_pageUpVisible_dyn();

		virtual bool set_pageDownVisible( bool value);
		Dynamic set_pageDownVisible_dyn();

		virtual ::openfl::display::Sprite pageButton( ::openfl::display::Sprite result,bool up,hx::Null< bool >  justArrow,hx::Null< bool >  highlight);
		Dynamic pageButton_dyn();

		virtual Void resetPageButtons( );
		Dynamic resetPageButtons_dyn();

		virtual Void createEditButton( );
		Dynamic createEditButton_dyn();

		virtual bool set_editButton( bool value);
		Dynamic set_editButton_dyn();

		virtual Void longClick( ::openfl::events::Event event);
		Dynamic longClick_dyn();

		virtual Void editButtonMouseDown( ::openfl::events::Event event);
		Dynamic editButtonMouseDown_dyn();

		virtual Void editButtonMouseMove( ::openfl::events::Event event);
		Dynamic editButtonMouseMove_dyn();

		virtual Void editButtonMouseUp( ::openfl::events::Event event);
		Dynamic editButtonMouseUp_dyn();

		virtual Void slideEditButton( hx::Null< bool >  direction);
		Dynamic slideEditButton_dyn();

		virtual Void slideMovement( ::openfl::events::Event event);
		Dynamic slideMovement_dyn();

		virtual int set_rowSelectColour( int value);
		Dynamic set_rowSelectColour_dyn();

		virtual bool set_scrollEnabled( bool value);

		virtual ::com::danielfreeman::extendedmadness::UISimpleDataGrid yToDataGrid( Float y);
		Dynamic yToDataGrid_dyn();

		virtual Void temporaryRowHighlightDraw( ::com::danielfreeman::extendedmadness::UISimpleDataGrid highlightedDataGrid,int highlightedRowIndex,hx::Null< int >  colour);
		Dynamic temporaryRowHighlightDraw_dyn();

		virtual Void temporaryRowHighlight( );
		Dynamic temporaryRowHighlight_dyn();

		virtual Float set_sliderX( Float value);

		virtual Float set_sliderY( Float value);

		virtual Void temporaryRowClear( );
		Dynamic temporaryRowClear_dyn();

		virtual Void buttonShape( Float x,Float y,Float buttonWidth,Float height);
		Dynamic buttonShape_dyn();

		virtual Void makeEditButton( );
		Dynamic makeEditButton_dyn();

		virtual Void clearHighlightRow( );
		Dynamic clearHighlightRow_dyn();

		virtual Void setHighlightRow( hx::Null< bool >  slidein);
		Dynamic setHighlightRow_dyn();

		virtual Void abortRowSelection( );
		Dynamic abortRowSelection_dyn();

		virtual Void mouseMove( ::openfl::events::TimerEvent event);

		virtual Void abortClick( );
		Dynamic abortClick_dyn();

		virtual Void confirmClick( );
		Dynamic confirmClick_dyn();

		virtual bool rowSelectHandler( );
		Dynamic rowSelectHandler_dyn();

		virtual Void mouseDown( ::openfl::events::MouseEvent event);

		virtual Void dispatchRowSelected( );
		Dynamic dispatchRowSelected_dyn();

		virtual Void mouseUp( ::openfl::events::MouseEvent event);

		virtual int get_index( );
		Dynamic get_index_dyn();

		virtual int get_selectIndex( );
		Dynamic get_selectIndex_dyn();

		virtual int set_selectIndex( int value);
		Dynamic set_selectIndex_dyn();

		virtual int get_selectDataGrid( );
		Dynamic get_selectDataGrid_dyn();

		virtual Void timerComplete( ::openfl::events::TimerEvent event);
		Dynamic timerComplete_dyn();

		virtual Void positionPageButtons( );
		Dynamic positionPageButtons_dyn();

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

		virtual Void refreshHighlight( );
		Dynamic refreshHighlight_dyn();

		virtual Float set_textSize( Float value);

		virtual Void destructor( );

		static ::String EDIT_BUTTON_MOUSE_DOWN;
		static ::String EDIT_BUTTON_MOUSE_UP;
		static ::String EDIT_BUTTON_LONG_CLICK;
		static ::String EDIT_BUTTON_LONG_CLICK_END;
		static ::String ROW_CLICKED;
		static ::String ROW_SELECTED;
		static ::String LONG_ROW_SELECTED;
		static ::String HEADER_DOWN;
		static ::String HEADER_CLICKED;
		static ::String PAGE_UP;
		static ::String PAGE_DOWN;
		static int ROW_SELECT_COLOUR;
		static int EDIT_BUTTON_COLOUR;
		static Float ROW_SELECT_LIMIT;
		static Float BUTTON_WIDTH;
		static Float BUTTON_HEIGHT;
		static Float SENSOR;
		static Float ARROW;
		static Float CURVE;
		static Float RADIUS;
		static Float ALPHA;
		static Float ROW_BORDER;
		static Float DELTAY_THRESHOLD;
		static Float SMALL_Y_THRESHOLD;
		static Float BUTTON_MOVE_THRESHOLD;
		static int ARROW_COLOUR;
		static int ARROW_HIGHLIGHT_COLOUR;
		static Float PAGE_BUTTON_ALPHA;
		static Float ARROW_SIZE;
		static int BUTTON_COLOUR;
		static Float PAGE_BUTTON_SENSOR_RADIUS;
		static Float PAGE_BUTTON_RADIUS;
		static int LONG_ROW_THRESHOLD;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UIScrollTouchGrids */ 
