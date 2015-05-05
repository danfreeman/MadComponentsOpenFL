#ifndef INCLUDED_com_danielfreeman_extendedmadness_UISwitchX
#define INCLUDED_com_danielfreeman_extendedmadness_UISwitchX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/MadSprite.h>
#include <com/danielfreeman/madcomponents/IComponentUI.h>
HX_DECLARE_CLASS2(com,danielfreeman,MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UISwitchX)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UILabel)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,events,TimerEvent)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
HX_DECLARE_CLASS2(openfl,utils,Timer)
namespace com{
namespace danielfreeman{
namespace extendedmadness{


class HXCPP_CLASS_ATTRIBUTES  UISwitchX_obj : public ::com::danielfreeman::madcomponents::MadSprite_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::MadSprite_obj super;
		typedef UISwitchX_obj OBJ_;
		UISwitchX_obj();
		Void __construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UISwitchX_obj > __new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UISwitchX_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::danielfreeman::madcomponents::IComponentUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IComponentUI_delegate_< UISwitchX_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("UISwitchX"); }

		::openfl::display::Sprite _layer;
		::openfl::display::Sprite _button;
		::openfl::display::Shape _over;
		int _colour;
		::com::danielfreeman::madcomponents::UILabel _onLabel;
		::com::danielfreeman::madcomponents::UILabel _offLabel;
		Float _start;
		Float _move;
		Float _delta;
		::openfl::utils::Timer _timer;
		bool _state;
		::openfl::text::TextFormat _formatOn;
		::openfl::text::TextFormat _formatOff;
		int _offColour;
		int _buttonColour;
		int _outlineColour;
		Float _curve;
		Float _extra;
		Float _lastPosition;
		Dynamic _labels;
		virtual bool set_state( bool value);
		Dynamic set_state_dyn();

		virtual ::String set_text( ::String value);

		virtual ::String get_text( );

		virtual bool get_state( );
		Dynamic get_state_dyn();

		virtual Void initialiseButton( ::String onText,::String offText);
		Dynamic initialiseButton_dyn();

		virtual Void drawButton( hx::Null< bool >  state);
		Dynamic drawButton_dyn();

		virtual Void mouseDown( ::openfl::events::MouseEvent event);
		Dynamic mouseDown_dyn();

		virtual Void touchCancel( );

		virtual Void mouseMove( ::openfl::events::MouseEvent event);
		Dynamic mouseMove_dyn();

		virtual Void mouseUp( ::openfl::events::MouseEvent event);
		Dynamic mouseUp_dyn();

		virtual Void slide( ::openfl::events::TimerEvent event);
		Dynamic slide_dyn();

		virtual Float get_theWidth( );

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void destructor( );

		static int DELTA;
		static Float MOVE_X;
		static Float WIDTH;
		static Float HEIGHT;
		static Float BUTTON_WIDTH;
		static int BUTTON_COLOUR;
		static int OUTLINE;
		static int OFF_COLOUR;
		static Float CURVE;
		static Float ALT_CURVE;
		static Float THRESHOLD;
		static Float EXTRA;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UISwitchX */ 
