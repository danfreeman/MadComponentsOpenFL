#ifndef INCLUDED_com_danielfreeman_madcomponents_UIBlueText
#define INCLUDED_com_danielfreeman_madcomponents_UIBlueText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/UILabel.h>
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIBlueText)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UILabel)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,FocusEvent)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UIBlueText_obj : public ::com::danielfreeman::madcomponents::UILabel_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::UILabel_obj super;
		typedef UIBlueText_obj OBJ_;
		UIBlueText_obj();
		Void __construct(::openfl::display::Sprite screen,Float xx,Float yy,::String __o_txt,hx::Null< int >  __o_wdth,::openfl::text::TextFormat format,hx::Null< bool >  __o_ivmode,hx::Null< int >  __o_promptColour);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIBlueText_obj > __new(::openfl::display::Sprite screen,Float xx,Float yy,::String __o_txt,hx::Null< int >  __o_wdth,::openfl::text::TextFormat format,hx::Null< bool >  __o_ivmode,hx::Null< int >  __o_promptColour);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIBlueText_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIBlueText"); }

		bool ivmode;
		bool initial;
		::String initialtext;
		Float maxwdth;
		bool focussed;
		Float savewdth;
		int _defaultColour;
		int _highlightColour;
		int _initialTextColour;
		int _saveTextColour;
		bool _password;
		::openfl::display::Sprite _screen;
		virtual bool set_password( bool value);
		Dynamic set_password_dyn();

		virtual bool get_password( );
		Dynamic get_password_dyn();

		virtual Void keyup( ::openfl::events::KeyboardEvent ev);
		Dynamic keyup_dyn();

		virtual ::String set_defaultext( ::String value);
		Dynamic set_defaultext_dyn();

		virtual Void setInitialText( );
		Dynamic setInitialText_dyn();

		virtual Void setTextColour( int value);
		Dynamic setTextColour_dyn();

		virtual int set_defaultColour( int value);
		Dynamic set_defaultColour_dyn();

		virtual int get_defaultColour( );
		Dynamic get_defaultColour_dyn();

		virtual ::String get_text( );

		virtual ::String set_text( ::String value);

		virtual Float set_fixwidth( Float value);

		virtual Void txtchange( ::openfl::events::TextEvent ev);
		Dynamic txtchange_dyn();

		virtual Void clear( ::String text);
		Dynamic clear_dyn();

		virtual Void txtchange0( ::openfl::events::Event ev);
		Dynamic txtchange0_dyn();

		virtual Void focusin( ::openfl::events::FocusEvent ev);
		Dynamic focusin_dyn();

		virtual Void focusout( ::openfl::events::FocusEvent ev);
		Dynamic focusout_dyn();

		virtual int set_highlightColour( int value);
		Dynamic set_highlightColour_dyn();

		virtual Void focus( );
		Dynamic focus_dyn();

		virtual Void destructor( );
		Dynamic destructor_dyn();

		static ::String ENTER;
		static int BLUE;
		static int GREY;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UIBlueText */ 
