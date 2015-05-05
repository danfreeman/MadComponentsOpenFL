#ifndef INCLUDED_com_danielfreeman_madcomponents_Attributes
#define INCLUDED_com_danielfreeman_madcomponents_Attributes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/geom/Rectangle.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  Attributes_obj : public ::openfl::geom::Rectangle_obj{
	public:
		typedef ::openfl::geom::Rectangle_obj super;
		typedef Attributes_obj OBJ_;
		Attributes_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Attributes_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Attributes_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Attributes"); }

		int _scrollBarColour;
		Float _paddingV;
		Float _paddingH;
		int _colour;
		::String _alignV;
		::String _alignH;
		bool _visible;
		::String _id;
		Array< int > _colours;
		Float _width;
		Float _height;
		bool _hasBorder;
		::String _clickable;
		bool _style7;
		virtual Void parse( ::MadXML xml);
		Dynamic parse_dyn();

		virtual ::com::danielfreeman::madcomponents::Attributes copy( ::MadXML xml,hx::Null< bool >  container);
		Dynamic copy_dyn();

		virtual Float get_paddingV( );
		Dynamic get_paddingV_dyn();

		virtual Float get_paddingH( );
		Dynamic get_paddingH_dyn();

		virtual int get_colour( );
		Dynamic get_colour_dyn();

		virtual int set_colour( int value);
		Dynamic set_colour_dyn();

		virtual int get_scrollBarColour( );
		Dynamic get_scrollBarColour_dyn();

		virtual Array< int > get_backgroundColours( );
		Dynamic get_backgroundColours_dyn();

		virtual bool get_fillH( );
		Dynamic get_fillH_dyn();

		virtual bool get_fillV( );
		Dynamic get_fillV_dyn();

		virtual Float get_widthH( );
		Dynamic get_widthH_dyn();

		virtual Float get_heightV( );
		Dynamic get_heightV_dyn();

		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		virtual ::String get_textAlign( );
		Dynamic get_textAlign_dyn();

		virtual bool set_hasBorder( bool value);
		Dynamic set_hasBorder_dyn();

		virtual bool get_hasBorder( );
		Dynamic get_hasBorder_dyn();

		virtual bool get_style7( );
		Dynamic get_style7_dyn();

		virtual bool set_style7( bool value);
		Dynamic set_style7_dyn();

		virtual Void position( ::openfl::display::DisplayObject item,hx::Null< bool >  inhibitV);
		Dynamic position_dyn();

		virtual Void initPosition( ::openfl::display::DisplayObject item);
		Dynamic initPosition_dyn();

		static int TRANSPARENT;
		static ::String FILL;
		static ::String LEFT;
		static ::String RIGHT;
		static ::String CENTRE;
		static ::String TOP;
		static ::String BOTTOM;
		static Float GAP;
		static Float GAP7;
		static int COLOUR;
		static int COLOUR7;
		static int SCROLLBAR_COLOUR;
		static ::String ALIGN_V;
		static ::String ALIGN_H;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_Attributes */ 
