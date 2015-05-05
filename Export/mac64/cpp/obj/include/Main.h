#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct(::openfl::display::Sprite screen);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Main_obj > __new(::openfl::display::Sprite screen);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Main"); }

		static ::String TEST_STRING;
		static ::String DATA;
		static ::String DATA_PLUS;
		static ::String GROUPED_DATA;
		static ::String SCROLL;
		static ::String LIST;
		static ::String LIST_RENDERER;
		static ::String LISTR;
		static ::String GROUPED_LIST;
		static ::String DIVIDED_LIST;
		static ::String PAGE;
		static ::String NAVIGATION;
		static ::String TAB_DATA;
		static ::String TAB_PAGES;
		static ::String TAB_PAGES_TOP;
		static ::String ICONS;
		static ::String GRID_DATA;
		static ::String DATAGRID;
		static ::String SCROLLGRID;
		static ::String SCROLLING_DATAGRIDS;
		static ::String GRID_LAYOUT0;
		static ::String GRID_DATA0;
		static ::String GRID_DATA1;
		static ::String DATAGRID0;
		static ::String DATAGRID1;
		static ::String DATAGRID2;
		static ::String GRID_LAYOUT1;
		static ::String RENDERER;
		static ::String TABLE;
		static ::String TOUCH;
		static ::String LIST_MODEL0;
		static ::String LIST_MODEL1;
		static ::String LIST_MODEL2;
		static ::String XML_MODEL;
		static ::String PAGE0;
		static ::String PAGE1;
		static ::String PAGE2;
		static ::String PAGE3;
		static ::String PAGE4;
		static ::String MENU0;
		static ::String MENU1;
		static ::String NESTED_NAVIGATION_PAGES;
};


#endif /* INCLUDED_Main */ 
