#ifndef INCLUDED_com_danielfreeman_extendedmadness_UISpecialDataGrid
#define INCLUDED_com_danielfreeman_extendedmadness_UISpecialDataGrid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/extendedmadness/UIFastDataGrid.h>
HX_DECLARE_CLASS2(com,danielfreeman,MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UIFastDataGrid)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UISimpleDataGrid)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UISpecialDataGrid)
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
namespace com{
namespace danielfreeman{
namespace extendedmadness{


class HXCPP_CLASS_ATTRIBUTES  UISpecialDataGrid_obj : public ::com::danielfreeman::extendedmadness::UIFastDataGrid_obj{
	public:
		typedef ::com::danielfreeman::extendedmadness::UIFastDataGrid_obj super;
		typedef UISpecialDataGrid_obj OBJ_;
		UISpecialDataGrid_obj();
		Void __construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UISpecialDataGrid_obj > __new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UISpecialDataGrid_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UISpecialDataGrid"); }

		Dynamic _dataAndExtras;
		Float _imageMarginH;
		Float _imageMarginV;
		virtual Float initialHeight( int rowIndex);

		virtual Void rejig( );

		virtual Dynamic extractSpecialRow( Dynamic row);
		Dynamic extractSpecialRow_dyn();

		virtual Dynamic extractSpecialData( Dynamic value);
		Dynamic extractSpecialData_dyn();

		virtual Dynamic set_data( Dynamic value);

		virtual Dynamic set_headerAndData( Dynamic value);

		virtual Void clearExtrasRow( Dynamic row);
		Dynamic clearExtrasRow_dyn();

		virtual Void clearExtras( );
		Dynamic clearExtras_dyn();

		virtual Void clear( );

		virtual Void copyColumns( ::openfl::display::Sprite destination,int n);
		Dynamic copyColumns_dyn();

		virtual Void swapRows( int rowIndexA,int rowIndexB);

		virtual Void shiftRows( int index,Float deltaHeight);

		virtual Void insertRow( int rowIndex,Dynamic rowData);

		virtual Void deleteRow( int rowIndex);

};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UISpecialDataGrid */ 
