#ifndef INCLUDED_com_danielfreeman_madcomponents_UISwitch
#define INCLUDED_com_danielfreeman_madcomponents_UISwitch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/MadSprite.h>
#include <com/danielfreeman/madcomponents/IComponentUI.h>
HX_DECLARE_CLASS2(com,danielfreeman,AnimationTimer)
HX_DECLARE_CLASS2(com,danielfreeman,MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UISwitch)
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
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UISwitch_obj : public ::com::danielfreeman::madcomponents::MadSprite_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::MadSprite_obj super;
		typedef UISwitch_obj OBJ_;
		UISwitch_obj();
		Void __construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UISwitch_obj > __new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UISwitch_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::danielfreeman::madcomponents::IComponentUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IComponentUI_delegate_< UISwitch_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("UISwitch"); }

		int _onColour;
		int _offColour;
		int _outlineColour;
		int _shadowColour;
		int _sliderColour;
		bool _state;
		Float _position;
		::com::danielfreeman::AnimationTimer _timer;
		Float _deltaPosition;
		bool _ready;
		virtual Void animate( ::openfl::events::TimerEvent event);
		Dynamic animate_dyn();

		virtual Void mouseDown( ::openfl::events::MouseEvent event);
		Dynamic mouseDown_dyn();

		virtual Void mouseUp( ::openfl::events::MouseEvent event);
		Dynamic mouseUp_dyn();

		virtual Void mouseMove( ::openfl::events::MouseEvent event);
		Dynamic mouseMove_dyn();

		virtual int interpolate( int colourA,int colourB,Float factor);
		Dynamic interpolate_dyn();

		virtual Void drawSwitch( Float position);
		Dynamic drawSwitch_dyn();

		virtual bool get_state( );
		Dynamic get_state_dyn();

		virtual bool set_state( bool value);
		Dynamic set_state_dyn();

		virtual ::String set_text( ::String value);

		virtual ::String get_text( );

		virtual Void drawComponent( );
		Dynamic drawComponent_dyn();

		virtual Void destructor( );

		static int ON_COLOUR;
		static int OFF_COLOUR;
		static int OUTLINE_COLOUR;
		static int SHADOW_COLOUR;
		static Float SHADOW_ALPHA;
		static Float SHADOW_OFFSET;
		static Float WIDTH;
		static Float HEIGHT;
		static Float RADIUS;
		static int STEPS;
		static Float DELTA;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UISwitch */ 
