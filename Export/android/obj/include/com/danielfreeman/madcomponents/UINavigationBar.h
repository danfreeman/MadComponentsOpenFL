#ifndef INCLUDED_com_danielfreeman_madcomponents_UINavigationBar
#define INCLUDED_com_danielfreeman_madcomponents_UINavigationBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIBackButton)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIButton)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UILabel)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UINavigationBar)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UINavigationBar_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef UINavigationBar_obj OBJ_;
		UINavigationBar_obj();
		Void __construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UINavigationBar_obj > __new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UINavigationBar_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UINavigationBar"); }

		::openfl::text::TextFormat FORMAT;
		::openfl::text::TextFormat FORMAT7;
		::openfl::text::TextFormat DARK_FORMAT;
		::openfl::text::TextFormat DARK_FORMAT7;
		::com::danielfreeman::madcomponents::UILabel _label;
		::com::danielfreeman::madcomponents::UILabel _shadowLabel;
		::com::danielfreeman::madcomponents::UIButton _leftButton;
		::com::danielfreeman::madcomponents::UIBackButton _backButton;
		::com::danielfreeman::madcomponents::Attributes _attributes;
		::com::danielfreeman::madcomponents::UIButton _rightButton;
		::com::danielfreeman::madcomponents::UIBackButton _rightArrow;
		int _colour;
		::openfl::display::Sprite _centrePanel;
		::openfl::display::Sprite _centreItem;
		::MadXML _xml;
		virtual Void initialiseClassicButtons( );
		Dynamic initialiseClassicButtons_dyn();

		virtual Void adjustButtons( );
		Dynamic adjustButtons_dyn();

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

		virtual ::com::danielfreeman::madcomponents::UIButton get_leftButton( );
		Dynamic get_leftButton_dyn();

		virtual ::String set_leftButtonText( ::String value);
		Dynamic set_leftButtonText_dyn();

		virtual ::String set_rightButtonText( ::String value);
		Dynamic set_rightButtonText_dyn();

		virtual ::com::danielfreeman::madcomponents::UIBackButton get_backButton( );
		Dynamic get_backButton_dyn();

		virtual ::com::danielfreeman::madcomponents::UIButton get_rightButton( );
		Dynamic get_rightButton_dyn();

		virtual ::com::danielfreeman::madcomponents::UIBackButton get_rightArrow( );
		Dynamic get_rightArrow_dyn();

		virtual int set_colour( int value);
		Dynamic set_colour_dyn();

		virtual int get_colour( );
		Dynamic get_colour_dyn();

		virtual Float set_fixwidth( Float value);
		Dynamic set_fixwidth_dyn();

		virtual ::openfl::display::Sprite get_centrePanel( );
		Dynamic get_centrePanel_dyn();

		virtual ::openfl::display::Sprite set_centrePanel( ::openfl::display::Sprite value);
		Dynamic set_centrePanel_dyn();

		virtual Void drawBar( );
		Dynamic drawBar_dyn();

		virtual Float get_height( );

		virtual Void destructor( );
		Dynamic destructor_dyn();

		static Float HEIGHT;
		static int COLOUR;
		static int COLOUR7;
		static int LEFTCOLOUR;
		static int DONECOLOUR;
		static Float SIDES;
		static Float Y;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UINavigationBar */ 
