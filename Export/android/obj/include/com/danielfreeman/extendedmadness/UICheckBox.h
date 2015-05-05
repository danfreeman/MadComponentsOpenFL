#ifndef INCLUDED_com_danielfreeman_extendedmadness_UICheckBox
#define INCLUDED_com_danielfreeman_extendedmadness_UICheckBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/MadSprite.h>
#include <com/danielfreeman/madcomponents/IComponentUI.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UICheckBox)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UITick)
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
namespace com{
namespace danielfreeman{
namespace extendedmadness{


class HXCPP_CLASS_ATTRIBUTES  UICheckBox_obj : public ::com::danielfreeman::madcomponents::MadSprite_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::MadSprite_obj super;
		typedef UICheckBox_obj OBJ_;
		UICheckBox_obj();
		Void __construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UICheckBox_obj > __new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UICheckBox_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::danielfreeman::madcomponents::IComponentUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IComponentUI_delegate_< UICheckBox_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("UICheckBox"); }

		int _colour;
		::com::danielfreeman::extendedmadness::UITick _tick;
		bool _state;
		int _onColour;
		int _offColour;
		bool _alt;
		::com::danielfreeman::madcomponents::UILabel _label;
		bool _ready;
		virtual Void assignToLabel( ::MadXML xml,::com::danielfreeman::madcomponents::UILabel label);
		Dynamic assignToLabel_dyn();

		virtual ::com::danielfreeman::madcomponents::UILabel get_label( );
		Dynamic get_label_dyn();

		virtual ::String set_text( ::String value);

		virtual ::String set_htmlText( ::String value);
		Dynamic set_htmlText_dyn();

		virtual Void makeTick( );
		Dynamic makeTick_dyn();

		virtual Void buttonChrome( );
		Dynamic buttonChrome_dyn();

		virtual Void redraw( );
		Dynamic redraw_dyn();

		virtual Void mouseDown( ::openfl::events::MouseEvent event);
		Dynamic mouseDown_dyn();

		virtual Void touchCancel( );

		virtual Void mouseUp( ::openfl::events::MouseEvent event);
		Dynamic mouseUp_dyn();

		virtual bool set_state( bool value);
		Dynamic set_state_dyn();

		virtual bool get_state( );
		Dynamic get_state_dyn();

		virtual Void destructor( );

		static Float SIZE;
		static Float ALT_SIZE;
		static Float CURVE;
		static Float ON;
		static int ON_COLOUR;
		static int COLOUR;
		static Float GAP;
		static Float SMALL_GAP;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UICheckBox */ 
