#ifndef INCLUDED_com_danielfreeman_madcomponents_UIButton
#define INCLUDED_com_danielfreeman_madcomponents_UIButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/MadSprite.h>
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIButton)
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


class HXCPP_CLASS_ATTRIBUTES  UIButton_obj : public ::com::danielfreeman::madcomponents::MadSprite_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::MadSprite_obj super;
		typedef UIButton_obj OBJ_;
		UIButton_obj();
		Void __construct(::openfl::display::Sprite screen,Float xx,Float yy,::String text,hx::Null< int >  __o_colour,Array< int > colours,hx::Null< bool >  __o_tiny,hx::Null< bool >  __o_style7);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIButton_obj > __new(::openfl::display::Sprite screen,Float xx,Float yy,::String text,hx::Null< int >  __o_colour,Array< int > colours,hx::Null< bool >  __o_tiny,hx::Null< bool >  __o_style7);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIButton"); }

		::openfl::text::TextFormat FORMAT;
		::openfl::text::TextFormat FORMAT7;
		::openfl::text::TextFormat _format;
		::openfl::text::TextFormat _darkFormat;
		::com::danielfreeman::madcomponents::UILabel _label;
		::com::danielfreeman::madcomponents::UILabel _shadowLabel;
		int _colour;
		Float _fixwidth;
		Float _alpha;
		Array< int > _colours;
		Float _gap;
		bool _enabled;
		Float _sizeY;
		Float _curve;
		Float _border;
		Float _skinHeight;
		Float _defaultWidth;
		bool _alt;
		::String _goTo;
		::String _transition;
		bool _style7;
		int _textColour;
		virtual ::com::danielfreeman::madcomponents::UILabel get_label( );
		Dynamic get_label_dyn();

		virtual ::com::danielfreeman::madcomponents::UILabel get_shadowLabel( );
		Dynamic get_shadowLabel_dyn();

		virtual bool set_alt( bool value);
		Dynamic set_alt_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void mouseDown( ::openfl::events::MouseEvent event);
		Dynamic mouseDown_dyn();

		virtual Void mouseUp( ::openfl::events::MouseEvent event);
		Dynamic mouseUp_dyn();

		virtual Void changePage( );
		Dynamic changePage_dyn();

		virtual Void touchCancel( );

		virtual ::String set_text( ::String value);

		virtual Float set_fixwidth( Float value);
		Dynamic set_fixwidth_dyn();

		virtual int set_colour( int value);
		Dynamic set_colour_dyn();

		virtual Float set_curve( Float value);
		Dynamic set_curve_dyn();

		virtual Void setGoTo( ::String goTo,::String transition);
		Dynamic setGoTo_dyn();

		virtual Float sizeY( );
		Dynamic sizeY_dyn();

		virtual Void drawButton( hx::Null< bool >  pressed);
		Dynamic drawButton_dyn();

		virtual Float set_skinHeight( Float value);
		Dynamic set_skinHeight_dyn();

		virtual Void destructor( );

		static ::String CLICKED;
		static int HIGHLIGHT;
		static Float SHADOW_OFFSET;
		static Float CURVE;
		static Float SIZE_X;
		static Float SIZE_Y;
		static Float TINY_SIZE_Y;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UIButton */ 
