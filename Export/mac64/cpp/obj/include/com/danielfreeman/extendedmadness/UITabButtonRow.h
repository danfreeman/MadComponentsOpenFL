#ifndef INCLUDED_com_danielfreeman_extendedmadness_UITabButtonRow
#define INCLUDED_com_danielfreeman_extendedmadness_UITabButtonRow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/MadSprite.h>
#include <com/danielfreeman/madcomponents/IComponentUI.h>
HX_DECLARE_CLASS2(com,danielfreeman,MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UITabButtonRow)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
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
namespace com{
namespace danielfreeman{
namespace extendedmadness{


class HXCPP_CLASS_ATTRIBUTES  UITabButtonRow_obj : public ::com::danielfreeman::madcomponents::MadSprite_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::MadSprite_obj super;
		typedef UITabButtonRow_obj OBJ_;
		UITabButtonRow_obj();
		Void __construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UITabButtonRow_obj > __new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UITabButtonRow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::danielfreeman::madcomponents::IComponentUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IComponentUI_delegate_< UITabButtonRow_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("UITabButtonRow"); }

		int _index;
		int _pressedIndex;
		Float _width;
		Float _height;
		int _numButtons;
		Float _buttonWidth;
		::openfl::display::Sprite _pressed;
		::openfl::display::Sprite _highlight;
		int _offColour;
		int _onColour;
		int _backgroundColour;
		virtual int get_onColour( );
		Dynamic get_onColour_dyn();

		virtual int get_offColour( );
		Dynamic get_offColour_dyn();

		virtual int get_backgroundColour( );
		Dynamic get_backgroundColour_dyn();

		virtual int set_onColour( int value);
		Dynamic set_onColour_dyn();

		virtual int set_offColour( int value);
		Dynamic set_offColour_dyn();

		virtual int set_backgroundColour( int value);
		Dynamic set_backgroundColour_dyn();

		virtual int get_index( );
		Dynamic get_index_dyn();

		virtual int set_index( int value);
		Dynamic set_index_dyn();

		virtual Void refresh( );
		Dynamic refresh_dyn();

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

		virtual Void drawTabButtons( int n);
		Dynamic drawTabButtons_dyn();

		virtual Void drawAButton( ::openfl::display::Sprite layer,int i,int colour);
		Dynamic drawAButton_dyn();

		virtual Void mouseDown( );
		Dynamic mouseDown_dyn();

		virtual Void clearPressed( ::openfl::events::MouseEvent event);
		Dynamic clearPressed_dyn();

		virtual int mouseUp( );
		Dynamic mouseUp_dyn();

		static int OFF_COLOUR;
		static int ON_COLOUR;
		static int BACKGROUND_COLOUR;
		static Float HEIGHT;
		static Float GAP;
		static Float CURVE;
		static Float CURVE2;
		static Float BAR_HEIGHT;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UITabButtonRow */ 
