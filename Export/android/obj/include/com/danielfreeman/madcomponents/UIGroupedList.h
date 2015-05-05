#ifndef INCLUDED_com_danielfreeman_madcomponents_UIGroupedList
#define INCLUDED_com_danielfreeman_madcomponents_UIGroupedList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/UIList.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IContainerUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadMasking)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIGroupedList)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIList)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIScrollVertical)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UIGroupedList_obj : public ::com::danielfreeman::madcomponents::UIList_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::UIList_obj super;
		typedef UIGroupedList_obj OBJ_;
		UIGroupedList_obj();
		Void __construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIGroupedList_obj > __new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIGroupedList_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIGroupedList"); }

		Float _cellWidth;
		int _length;
		Dynamic _groupPositions;
		int _group;
		Dynamic _heading;
		bool _hasHeadings;
		Dynamic _groupDetails;
		::openfl::text::TextFormat _headingFormat;
		::openfl::text::TextFormat _shadowFormat;
		bool _autoLayoutGroup;
		Float _gapBetweenGroups;
		bool _alwaysAutoLayout;
		Float _cellLeft;
		int _saveGroup;
		bool _headingClicked;
		Float _topGroupSpacing;
		Float _groupSpacing;
		virtual Float get_defaultGroupSpacing( );
		Dynamic get_defaultGroupSpacing_dyn();

		virtual ::MadXML set_rendererXML( ::MadXML value);

		virtual Void mouseUp( ::openfl::events::MouseEvent event);

		virtual Void mouseDown( ::openfl::events::MouseEvent event);

		virtual Void doCancel( );

		virtual Void touchCancel( );

		virtual Void drawComponent( );

		virtual Void setCellSize( );
		Dynamic setCellSize_dyn();

		virtual Void setGroupedData( Dynamic value);
		Dynamic setGroupedData_dyn();

		virtual Dynamic set_data( Dynamic value);

		virtual Void refresh( );
		Dynamic refresh_dyn();

		virtual bool doClickRow( hx::Null< bool >  dispatch);

		virtual Dynamic noHeadings( Dynamic value);
		Dynamic noHeadings_dyn();

		virtual Dynamic get_row( );

		virtual Void simpleAutoLayoutFix( Dynamic oldGroupDetails);
		Dynamic simpleAutoLayoutFix_dyn();

		virtual Void dealWithArrows( int count,Float position);

		virtual Void redrawCells( );

		virtual Void headingChrome( );
		Dynamic headingChrome_dyn();

		virtual Void clear( );

		virtual Void calculateMaximumSlide( );

		virtual Void superCalculateMaximumSlide( );
		Dynamic superCalculateMaximumSlide_dyn();

		virtual Void positionHeading( Float top,::openfl::display::DisplayObject heading);
		Dynamic positionHeading_dyn();

		virtual Void initDraw( );

		virtual Void clearCells( );

		virtual Void clearCellGroups( );
		Dynamic clearCellGroups_dyn();

		virtual Void initDrawGroups( );
		Dynamic initDrawGroups_dyn();

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

		virtual Void setColour( int colour,Float top,Float width,Float height);
		Dynamic setColour_dyn();

		virtual Void drawCell( Float position,int count,Dynamic record);

		virtual Void pressedCellLimits( Dynamic groupDetail);

		virtual bool isPressButton( );
		Dynamic isPressButton_dyn();

		virtual int get_group( );
		Dynamic get_group_dyn();

		virtual int set_headingTextColour( int value);
		Dynamic set_headingTextColour_dyn();

		virtual int set_headingShadowColour( int value);
		Dynamic set_headingShadowColour_dyn();

		virtual Float indexToScrollPosition( int value);

		virtual Void illuminate( hx::Null< int >  pressedCell,hx::Null< bool >  dispatch,hx::Null< bool >  show);

		virtual int set_group( int value);
		Dynamic set_group_dyn();

		virtual Void headingClicked( );
		Dynamic headingClicked_dyn();

		virtual ::openfl::display::DisplayObject pressButton( hx::Null< bool >  show);

		virtual ::openfl::display::DisplayObject byGroupAndRow( int group,int row);
		Dynamic byGroupAndRow_dyn();

		virtual ::openfl::display::DisplayObject findViewById( ::String id,hx::Null< int >  row,hx::Null< int >  group);

		virtual ::MadXML set_xmlData( ::MadXML value);

		virtual bool setData( Dynamic value,hx::Null< int >  index);

		virtual bool highlightForIndex( int rowIndex);

		virtual Void drawHighlight( );
		Dynamic drawHighlight_dyn();

		virtual Dynamic set_filteredData( Dynamic value);

		virtual Void filter( ::String searchFor,::String field,hx::Null< bool >  caseSensitive,hx::Null< bool >  begins);

		static ::String HEADING_CLICKED;
		static Float STRIPE_WIDTH;
		static Float PADDING;
		static int CELL_COLOUR;
		static Float CURVE;
		static Float CURVE7;
		static Float GROUP_SPACING;
		static ::Class HEADING;
		static Void curvedTop( ::openfl::display::Graphics shape,Float left,Float top,Float right,Float bottom,hx::Null< bool >  style7);
		static Dynamic curvedTop_dyn();

		static Void curvedBottom( ::openfl::display::Graphics shape,Float left,Float top,Float right,Float bottom,hx::Null< bool >  style7);
		static Dynamic curvedBottom_dyn();

};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UIGroupedList */ 
