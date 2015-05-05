#ifndef INCLUDED_com_danielfreeman_madcomponents_UISlider
#define INCLUDED_com_danielfreeman_madcomponents_UISlider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/MadSprite.h>
#include <com/danielfreeman/madcomponents/IComponentUI.h>
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UISlider)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UISlider_obj : public ::com::danielfreeman::madcomponents::MadSprite_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::MadSprite_obj super;
		typedef UISlider_obj OBJ_;
		UISlider_obj();
		Void __construct(::openfl::display::Sprite screen,Float xx,Float yy,Array< int > colours,hx::Null< bool >  __o_alt,hx::Null< bool >  __o_style7);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UISlider_obj > __new(::openfl::display::Sprite screen,Float xx,Float yy,Array< int > colours,hx::Null< bool >  __o_alt,hx::Null< bool >  __o_style7);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UISlider_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::danielfreeman::madcomponents::IComponentUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IComponentUI_delegate_< UISlider_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("UISlider"); }

		::openfl::display::Sprite _knob;
		int _sliderColour;
		int _highlightColour;
		int _knobColour;
		Float _width;
		Float _value;
		Float _radius;
		Float _sliderHeight;
		Float _curve;
		Float _lastPosition;
		bool _style7;
		virtual Void mouseDown( ::openfl::events::MouseEvent event);
		Dynamic mouseDown_dyn();

		virtual Void changePosition( Float value);
		Dynamic changePosition_dyn();

		virtual Void mouseMove( ::openfl::events::MouseEvent event);
		Dynamic mouseMove_dyn();

		virtual Void touchCancel( );

		virtual Void mouseUp( ::openfl::events::MouseEvent event);
		Dynamic mouseUp_dyn();

		virtual Void createKnob( );
		Dynamic createKnob_dyn();

		virtual Void drawIos7Knob( );
		Dynamic drawIos7Knob_dyn();

		virtual Void drawKnob( );
		Dynamic drawKnob_dyn();

		virtual Void drawComponent( );
		Dynamic drawComponent_dyn();

		virtual ::String set_text( ::String txt);

		virtual Float set_value( Float valuu);
		Dynamic set_value_dyn();

		virtual Float get_value( );
		Dynamic get_value_dyn();

		virtual Float set_fixwidth( Float valuu);
		Dynamic set_fixwidth_dyn();

		virtual Float get_theWidth( );

		virtual Void destructor( );

		static Float WIDTH;
		static Float RADIUS;
		static Float RADIUS7;
		static Float ALT_RADIUS;
		static int KNOB_COLOUR;
		static int KNOB_COLOUR7;
		static int HIGHLIGHT_COLOUR;
		static int SLIDER_COLOUR;
		static Float SLIDER_HEIGHT;
		static Float SLIDER_HEIGHT7;
		static Float EXTRA;
		static int SHADOW_COLOUR;
		static Float SHADOW_ALPHA;
		static Float SHADOW_OFFSET;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UISlider */ 
