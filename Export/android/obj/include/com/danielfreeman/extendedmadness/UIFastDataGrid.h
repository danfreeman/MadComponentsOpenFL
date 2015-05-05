#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIFastDataGrid
#define INCLUDED_com_danielfreeman_extendedmadness_UIFastDataGrid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/extendedmadness/UISimpleDataGrid.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UIFastDataGrid)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UISimpleDataGrid)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace com{
namespace danielfreeman{
namespace extendedmadness{


class HXCPP_CLASS_ATTRIBUTES  UIFastDataGrid_obj : public ::com::danielfreeman::extendedmadness::UISimpleDataGrid_obj{
	public:
		typedef ::com::danielfreeman::extendedmadness::UISimpleDataGrid_obj super;
		typedef UIFastDataGrid_obj OBJ_;
		UIFastDataGrid_obj();
		Void __construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIFastDataGrid_obj > __new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIFastDataGrid_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIFastDataGrid"); }

		bool _colSpan;
		bool _colSpanWrap;
		Array< Float > _colSpanWidths;
		virtual Void calculateCustomWidths( );

		virtual Void drawBackground( );

		virtual Void makeTable( Dynamic data,::openfl::text::TextFormat format);

		virtual Void swapRows( int rowIndexA,int rowIndexB);
		Dynamic swapRows_dyn();

		virtual Void shiftRows( int index,Float deltaHeight);
		Dynamic shiftRows_dyn();

		virtual Void insertRow( int rowIndex,Dynamic rowData);
		Dynamic insertRow_dyn();

		virtual Void deleteRow( int rowIndex);
		Dynamic deleteRow_dyn();

		virtual Float get_calculateWidth( );
		Dynamic get_calculateWidth_dyn();

		virtual Void rejig( );

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

		virtual int get_numberOfRows( );

		virtual int yToRow( Float y);

		virtual Float set_textSize( Float value);
		Dynamic set_textSize_dyn();

		virtual Void setData( Dynamic value,hx::Null< bool >  includeHeader);

		virtual Dynamic set_dataProvider( Dynamic value);
		Dynamic set_dataProvider_dyn();

		virtual Void invalidate( hx::Null< bool >  readGrid,hx::Null< bool >  includeHeader);
		Dynamic invalidate_dyn();

		virtual Void addColSpanPadding( );
		Dynamic addColSpanPadding_dyn();

		virtual Void initialiseColumnWidths( );

		virtual Void compact( hx::Null< bool >  padding);

		virtual Float rowPosition( int value);

		virtual Float rowHeight( int value);

		virtual Void newDimensions( int rows,int columns);
		Dynamic newDimensions_dyn();

};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UIFastDataGrid */ 
