#ifndef INCLUDED_com_danielfreeman_madcomponents_UIWindow
#define INCLUDED_com_danielfreeman_madcomponents_UIWindow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/MadSprite.h>
HX_DECLARE_CLASS2(com,danielfreeman,MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIBackButton)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIWindow)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UIWindow_obj : public ::com::danielfreeman::madcomponents::MadSprite_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::MadSprite_obj super;
		typedef UIWindow_obj OBJ_;
		UIWindow_obj();
		Void __construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,hx::Null< Float >  __o_curve,hx::Null< bool >  __o_centre);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIWindow_obj > __new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,hx::Null< Float >  __o_curve,hx::Null< bool >  __o_centre);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIWindow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIWindow"); }

		Float _curve;
		bool _centred;
		::openfl::display::Shape _iMask;
		int _colour;
		::com::danielfreeman::madcomponents::UIBackButton _leftButton;
		::com::danielfreeman::madcomponents::UIBackButton _rightButton;
		int _lineColour;
		::com::danielfreeman::MadXML _xml;
		virtual Void drawBackground( Array< int > colours);
		Dynamic drawBackground_dyn();

		virtual Float get_curve( );
		Dynamic get_curve_dyn();

		virtual bool get_centred( );
		Dynamic get_centred_dyn();

		virtual ::com::danielfreeman::madcomponents::UIBackButton get_leftButton( );
		Dynamic get_leftButton_dyn();

		virtual ::com::danielfreeman::madcomponents::UIBackButton get_rightButton( );
		Dynamic get_rightButton_dyn();

		virtual ::String set_rightButtonText( ::String value);
		Dynamic set_rightButtonText_dyn();

		virtual ::String get_rightButtonText( );
		Dynamic get_rightButtonText_dyn();

		virtual ::String set_leftButtonText( ::String value);
		Dynamic set_leftButtonText_dyn();

		virtual ::String get_leftButtonText( );
		Dynamic get_leftButtonText_dyn();

		virtual Void resize( Float width,Float height);
		Dynamic resize_dyn();

		static Float CURVE;
		static Float OUTLINE;
		static int LINE_COLOUR;
		static int FILL_COLOUR;
		static int FILL_COLOUR7;
		static Float SHADOW_OFFSET;
		static int SHADOW_COLOUR;
		static Float SHADOW_ALPHA;
		static Float OVERLAP;
		static Float BUTTON_BAR_HEIGHT;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UIWindow */ 
