#ifndef INCLUDED_com_danielfreeman_madcomponents_UIBackButton
#define INCLUDED_com_danielfreeman_madcomponents_UIBackButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIBackButton)
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
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UIBackButton_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef UIBackButton_obj OBJ_;
		UIBackButton_obj();
		Void __construct(::openfl::display::Sprite screen,Float xx,Float yy,::String text,int colour,hx::Null< bool >  __o_forward,hx::Null< bool >  __o_classic,hx::Null< bool >  __o_arrow);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIBackButton_obj > __new(::openfl::display::Sprite screen,Float xx,Float yy,::String text,int colour,hx::Null< bool >  __o_forward,hx::Null< bool >  __o_classic,hx::Null< bool >  __o_arrow);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIBackButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIBackButton"); }

		::com::danielfreeman::madcomponents::UILabel _label;
		int _colour;
		bool _forward;
		Float _width;
		Float _height;
		bool _classic;
		bool _arrow;
		virtual bool set_arrow( bool value);
		Dynamic set_arrow_dyn();

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::openfl::text::TextFormat set_textFormat( ::openfl::text::TextFormat value);
		Dynamic set_textFormat_dyn();

		virtual int set_colour( int value);
		Dynamic set_colour_dyn();

		virtual Float set_fixwidth( Float value);
		Dynamic set_fixwidth_dyn();

		virtual Void mouseDown( ::openfl::events::MouseEvent event);
		Dynamic mouseDown_dyn();

		virtual Void mouseUp( ::openfl::events::MouseEvent event);
		Dynamic mouseUp_dyn();

		virtual Void makeIos7Button( int colour);
		Dynamic makeIos7Button_dyn();

		virtual Void synthButton( int colour,Float width);
		Dynamic synthButton_dyn();

		virtual Void buttonShape( Float x,Float y,Float buttonWidth,Float height);
		Dynamic buttonShape_dyn();

		virtual Void destructor( );
		Dynamic destructor_dyn();

		static ::openfl::text::TextFormat FORMAT;
		static Float SENSOR_HEIGHT;
		static Float HEIGHT;
		static Float ARROW;
		static Float CURVE;
		static Float X;
		static Float Y;
		static Float ADJUSTMENT;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UIBackButton */ 
