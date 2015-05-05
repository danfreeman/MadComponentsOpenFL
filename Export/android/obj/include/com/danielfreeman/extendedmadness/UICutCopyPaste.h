#ifndef INCLUDED_com_danielfreeman_extendedmadness_UICutCopyPaste
#define INCLUDED_com_danielfreeman_extendedmadness_UICutCopyPaste

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/MadSprite.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UICutCopyPaste)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UILabel)
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
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
HX_DECLARE_CLASS2(openfl,utils,Timer)
namespace com{
namespace danielfreeman{
namespace extendedmadness{


class HXCPP_CLASS_ATTRIBUTES  UICutCopyPaste_obj : public ::com::danielfreeman::madcomponents::MadSprite_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::MadSprite_obj super;
		typedef UICutCopyPaste_obj OBJ_;
		UICutCopyPaste_obj();
		Void __construct(::openfl::display::Sprite screen,Float xx,Float yy,hx::Null< Float >  __o_arrowPosition,hx::Null< int >  __o_colour,hx::Null< bool >  __o_alt,Array< ::String > words,hx::Null< bool >  __o_style7);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UICutCopyPaste_obj > __new(::openfl::display::Sprite screen,Float xx,Float yy,hx::Null< Float >  __o_arrowPosition,hx::Null< int >  __o_colour,hx::Null< bool >  __o_alt,Array< ::String > words,hx::Null< bool >  __o_style7);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UICutCopyPaste_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UICutCopyPaste"); }

		::openfl::text::TextFormat FORMAT;
		Array< ::Dynamic > _labels;
		Float _arrowPosition;
		int _index;
		int _colour;
		Float _gap;
		Float _curve;
		Float _height;
		bool _alt;
		::MadXML _font;
		::openfl::display::Sprite _pressedLayer;
		int _pressedColour;
		::openfl::utils::Timer _timer;
		bool _ready;
		bool _style7;
		int _lineColour;
		virtual ::MadXML set_font( ::MadXML value);
		Dynamic set_font_dyn();

		virtual Void initialise( Array< ::String > words);
		Dynamic initialise_dyn();

		virtual Void mouseDown( ::openfl::events::MouseEvent event);
		Dynamic mouseDown_dyn();

		virtual Void mouseUp( ::openfl::events::MouseEvent event);
		Dynamic mouseUp_dyn();

		virtual Void touchCancel( );

		virtual Void updateIndex( );
		Dynamic updateIndex_dyn();

		virtual int get_index( );
		Dynamic get_index_dyn();

		virtual ::String get_value( );
		Dynamic get_value_dyn();

		virtual int set_index( int value);
		Dynamic set_index_dyn();

		virtual Void drawButtons( Array< ::String > labels,hx::Null< Float >  arrowPosition);
		Dynamic drawButtons_dyn();

		virtual Void drawComponent( );
		Dynamic drawComponent_dyn();

		virtual Void buttonChrome( Float left,hx::Null< Float >  arrowPosition);
		Dynamic buttonChrome_dyn();

		virtual Void showPressed( );
		Dynamic showPressed_dyn();

		virtual Void colourButtons( );
		Dynamic colourButtons_dyn();

		virtual Void resetHighlight( ::openfl::events::TimerEvent event);
		Dynamic resetHighlight_dyn();

		virtual Void destructor( );

		static ::String CLICKED;
		static Float ARROW;
		static Float HEIGHT;
		static Float ALT_HEIGHT;
		static Float GAP;
		static Float CURVE;
		static Float CURVE7;
		static int COLOUR;
		static int PRESSED_COLOUR;
		static int PRESSED_TEXT_COLOUR;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UICutCopyPaste */ 
