#ifndef INCLUDED_com_danielfreeman_madcomponents_UI
#define INCLUDED_com_danielfreeman_madcomponents_UI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,danielfreeman,MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIActivity)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIWindow)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UI_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef UI_obj OBJ_;
		UI_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UI_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UI_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("UI"); }

		static ::String RESIZED;
		static Float PADDING;
		static bool SIMULATION_RESIZE;
		static int DPI;
		static Float DIM_ALPHA;
		static Float WIDTH;
		static Float HEIGHT;
		static int COLOUR;
		static Array< ::String > TOKENS;
		static Array< ::Dynamic > CLASSES;
		static Float DEBUG_SCALE;
		static Array< ::String > _tokens;
		static Array< ::Dynamic > _classes;
		static ::openfl::display::Sprite _screen;
		static ::openfl::display::Sprite _root;
		static ::openfl::display::Sprite _windowLayer;
		static ::com::danielfreeman::MadXML _xml;
		static bool _autoScale;
		static bool _autoResize;
		static Float _scale;
		static int _popUps;
		static ::com::danielfreeman::madcomponents::Attributes _attributes;
		static bool _simulated;
		static ::com::danielfreeman::madcomponents::UIActivity _activityIndicator;
		static bool _maskIt;
		static Array< int > _stageColours;
		static int _dpi;
		static Float _width;
		static Float _height;
		static ::openfl::display::Sprite create( ::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,hx::Null< Float >  width,hx::Null< Float >  height);
		static Dynamic create_dyn();

		static Void extend( Array< ::String > tokens,Array< ::Dynamic > classes);
		static Dynamic extend_dyn();

		static int toColourValue( ::String value);
		static Dynamic toColourValue_dyn();

		static Array< int > toColourVector( ::String value);
		static Dynamic toColourVector_dyn();

		static Void drawBackgroundColour( Array< int > colours,Float width,Float height,::openfl::display::Sprite screen,hx::Null< Float >  padding);
		static Dynamic drawBackgroundColour_dyn();

		static Float get_scale( );
		static Dynamic get_scale_dyn();

		static ::openfl::display::DisplayObject containers( ::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic containers_dyn();

		static bool isContainer( ::String name);
		static Dynamic isContainer_dyn();

		static bool isForm( ::String name);
		static Dynamic isForm_dyn();

		static ::openfl::display::Sprite redraw( );
		static Dynamic redraw_dyn();

		static ::com::danielfreeman::madcomponents::Attributes get_attributes( );
		static Dynamic get_attributes_dyn();

		static Void resize( ::openfl::events::Event event);
		static Dynamic resize_dyn();

		static Void layout( hx::Null< Float >  width,hx::Null< Float >  height);
		static Dynamic layout_dyn();

		static Void drawStageBackground( );
		static Dynamic drawStageBackground_dyn();

		static ::com::danielfreeman::madcomponents::Attributes newAttributes( Float width,Float height);
		static Dynamic newAttributes_dyn();

		static ::openfl::display::DisplayObject findViewById( ::String id,hx::Null< int >  row,hx::Null< int >  group);
		static Dynamic findViewById_dyn();

		static ::com::danielfreeman::madcomponents::UIWindow createPopUp( ::com::danielfreeman::MadXML xml,hx::Null< Float >  width,hx::Null< Float >  height,hx::Null< Float >  curve,hx::Null< bool >  centre);
		static Dynamic createPopUp_dyn();

		static Void removePopUp( ::com::danielfreeman::madcomponents::UIWindow window);
		static Dynamic removePopUp_dyn();

		static Void showPopUp( ::com::danielfreeman::madcomponents::UIWindow window);
		static Dynamic showPopUp_dyn();

		static Void hidePopUp( ::com::danielfreeman::madcomponents::UIWindow window);
		static Dynamic hidePopUp_dyn();

		static Void showActivityIndicator( );
		static Dynamic showActivityIndicator_dyn();

		static Void hideActivityIndicator( );
		static Dynamic hideActivityIndicator_dyn();

		static ::openfl::display::Sprite get_windowLayer( );
		static Dynamic get_windowLayer_dyn();

		static ::openfl::display::Sprite get_uiLayer( );
		static Dynamic get_uiLayer_dyn();

		static Void centrePopUps( );
		static Dynamic centrePopUps_dyn();

		static Void dimUI( );
		static Dynamic dimUI_dyn();

		static Void unDimUI( );
		static Dynamic unDimUI_dyn();

		static Void clear( ::openfl::display::Sprite item);
		static Dynamic clear_dyn();

};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UI */ 
