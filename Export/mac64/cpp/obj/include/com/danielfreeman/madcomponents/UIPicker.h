#ifndef INCLUDED_com_danielfreeman_madcomponents_UIPicker
#define INCLUDED_com_danielfreeman_madcomponents_UIPicker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/UIList.h>
HX_DECLARE_CLASS2(com,danielfreeman,MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IContainerUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadMasking)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIList)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIPicker)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIScrollVertical)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UIPicker_obj : public ::com::danielfreeman::madcomponents::UIList_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::UIList_obj super;
		typedef UIPicker_obj OBJ_;
		UIPicker_obj();
		Void __construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,hx::Null< bool >  __o_left,hx::Null< bool >  __o_right,hx::Null< Float >  __o_pickerHeight,hx::Null< Float >  __o_cursorHeight);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIPicker_obj > __new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,hx::Null< bool >  __o_left,hx::Null< bool >  __o_right,hx::Null< Float >  __o_pickerHeight,hx::Null< Float >  __o_cursorHeight);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIPicker_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIPicker"); }

		::openfl::display::Shape _spinner;
		int _spinnerColour;
		bool _left;
		bool _right;
		Float _pickerHeight;
		Float _cursorHeight;
		::openfl::text::TextFormat _defaultStyle;
		bool _jogable;
		virtual Float deltaToDecay( Float delta);

		virtual Void drawSpinner( );
		Dynamic drawSpinner_dyn();

		virtual Void drawShape( ::openfl::display::Graphics graphics,hx::Null< Float >  x,hx::Null< Float >  y,hx::Null< int >  partial);
		Dynamic drawShape_dyn();

		virtual bool set_scrollEnabled( bool value);

		virtual Float get_height( );

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

		virtual Void calculateMaximumSlide( );

		virtual bool startMovement0( );

		virtual Dynamic get_row( );

		virtual Void illuminate( hx::Null< int >  pressedCell,hx::Null< bool >  dispatch,hx::Null< bool >  show);

		virtual Void jogPicker( );
		Dynamic jogPicker_dyn();

		virtual Void mouseUp( ::openfl::events::MouseEvent event);

		virtual ::openfl::display::DisplayObject pressButton( hx::Null< bool >  show);

		virtual Void drawScrollBar( );

		virtual bool get_snapToCellCondition( );
		Dynamic get_snapToCellCondition_dyn();

		virtual Float get_snapToCellPosition( );
		Dynamic get_snapToCellPosition_dyn();

		virtual Void stopMovement( );

		virtual Void stopMovement0( );
		Dynamic stopMovement0_dyn();

		virtual Void drawComponent( );

		virtual Dynamic set_data( Dynamic _tmp_value);

		static Float HEIGHT;
		static Float SPINNER_ALPHA;
		static Float SPINNER_SHADE;
		static Float SPINNER_CURSOR_HEIGHT;
		static int SPINNER_CURSOR_COLOUR;
		static int SPINNER_CURSOR_COLOUR_DARK;
		static int SPINNER_CURSOR_COLOUR_HIGHLIGHT;
		static Float SPINNER_CURSOR_ALPHA;
		static Float CURVE;
		static Float WARP;
		static Float SHADOW;
		static int GREYED_OUT_LIGHT;
		static int GREYED_OUT_DARK;
		static Float PICKER_DECAY;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UIPicker */ 
