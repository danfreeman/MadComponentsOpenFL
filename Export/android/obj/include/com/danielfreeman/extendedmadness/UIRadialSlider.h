#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIRadialSlider
#define INCLUDED_com_danielfreeman_extendedmadness_UIRadialSlider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/MadSprite.h>
#include <com/danielfreeman/madcomponents/IComponentUI.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UIRadialSlider)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
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
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace com{
namespace danielfreeman{
namespace extendedmadness{


class HXCPP_CLASS_ATTRIBUTES  UIRadialSlider_obj : public ::com::danielfreeman::madcomponents::MadSprite_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::MadSprite_obj super;
		typedef UIRadialSlider_obj OBJ_;
		UIRadialSlider_obj();
		Void __construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIRadialSlider_obj > __new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIRadialSlider_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::danielfreeman::madcomponents::IComponentUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IComponentUI_delegate_< UIRadialSlider_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("UIRadialSlider"); }

		Float _maximumRadius;
		int _numberOfSliders;
		bool _alt;
		Dynamic _values;
		Float _minimum;
		Float _maximum;
		bool _rounded;
		Float _offset;
		Array< int > _colours;
		Array< int > _buttonColours;
		Array< int > _outlineColours;
		Float _sliderThickness;
		Float _spacing;
		Float _margin;
		int _index;
		Float _saveValue;
		::com::danielfreeman::madcomponents::UILabel _label;
		virtual int toIndex( Float x,Float y);
		Dynamic toIndex_dyn();

		virtual Void mouseDown( ::openfl::events::MouseEvent event);
		Dynamic mouseDown_dyn();

		virtual Void mouseMove( ::openfl::events::MouseEvent event);
		Dynamic mouseMove_dyn();

		virtual Void mouseUp( ::openfl::events::MouseEvent event);
		Dynamic mouseUp_dyn();

		virtual Void extractParameters( ::MadXML xml);
		Dynamic extractParameters_dyn();

		virtual Void drawBackground( );
		Dynamic drawBackground_dyn();

		virtual Void drawRadial( int index);
		Dynamic drawRadial_dyn();

		virtual Void makeRadials( );
		Dynamic makeRadials_dyn();

		virtual Void touchCancel( );

		virtual ::String set_text( ::String value);

		virtual int set_index( int value);
		Dynamic set_index_dyn();

		virtual int get_index( );
		Dynamic get_index_dyn();

		virtual Float set_value( Float valuu);
		Dynamic set_value_dyn();

		virtual Float get_value( );
		Dynamic get_value_dyn();

		virtual Dynamic set_values( Dynamic valuu);
		Dynamic set_values_dyn();

		virtual Dynamic get_values( );
		Dynamic get_values_dyn();

		virtual Float get_theWidth( );

		virtual Float get_theHeight( );

		virtual Void drawRoundedArc( ::openfl::display::Sprite sprite,Float angle,Float radius,Float width,int colour);
		Dynamic drawRoundedArc_dyn();

		virtual Void drawArc( ::openfl::display::Sprite sprite,Float angle,Float radius,Float width,int colour);
		Dynamic drawArc_dyn();

		virtual Void drawButton( ::openfl::display::Sprite sprite,Float angle,Float radius,Float width,int colour);
		Dynamic drawButton_dyn();

		virtual Void drawStart( ::openfl::display::Sprite sprite,Float radius,Float width);
		Dynamic drawStart_dyn();

		virtual Void drawEnd( ::openfl::display::Sprite sprite,Float angle,Float radius,Float width);
		Dynamic drawEnd_dyn();

		virtual Void drawRoundStart( ::openfl::display::Sprite sprite,Float radius,Float width);
		Dynamic drawRoundStart_dyn();

		virtual Void drawRoundEnd( ::openfl::display::Sprite sprite,Float angle,Float radius,Float width);
		Dynamic drawRoundEnd_dyn();

		virtual Void drawArcOut( ::openfl::display::Sprite sprite,Float angle,Float radius);
		Dynamic drawArcOut_dyn();

		virtual Void drawArcBack( ::openfl::display::Sprite sprite,Float angle,Float radius);
		Dynamic drawArcBack_dyn();

		virtual Void drawSquareButton( ::openfl::display::Sprite sprite,Float angle,Float radius,Float width,int colour);
		Dynamic drawSquareButton_dyn();

		virtual Void destructor( );

		static ::String CHANGE;
		static ::String SELECT;
		static Float RADIUS;
		static Float INNER;
		static Float WIDTH;
		static Float GAP;
		static Float MARGIN;
		static Float DEFAULT_VALUE;
		static Float THRESHOLD;
		static ::openfl::text::TextFormat FORMAT;
		static Float RCOS_HALF;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UIRadialSlider */ 
