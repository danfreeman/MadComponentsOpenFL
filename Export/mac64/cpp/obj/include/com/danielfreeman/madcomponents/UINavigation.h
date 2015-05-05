#ifndef INCLUDED_com_danielfreeman_madcomponents_UINavigation
#define INCLUDED_com_danielfreeman_madcomponents_UINavigation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/UIPages.h>
HX_DECLARE_CLASS2(com,danielfreeman,MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IContainerUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadMasking)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UINavigation)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UINavigationBar)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIPages)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UINavigation_obj : public ::com::danielfreeman::madcomponents::UIPages_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::UIPages_obj super;
		typedef UINavigation_obj OBJ_;
		UINavigation_obj();
		Void __construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,hx::Null< bool >  __o_hasNavBar);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UINavigation_obj > __new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,hx::Null< bool >  __o_hasNavBar);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UINavigation_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UINavigation"); }

		::com::danielfreeman::madcomponents::UINavigationBar _navigationBar;
		int _pressedCell;
		bool _autoForward;
		bool _autoBack;
		::String _autoTitle;
		bool _autoFill;
		Dynamic _row;
		Dynamic _titles;
		bool _backToExit;
		bool _alt;
		bool _backKey;
		::com::danielfreeman::madcomponents::Attributes _fullPageAttributes;
		bool _hasNavBar;
		Dynamic _fullPage;
		virtual ::com::danielfreeman::madcomponents::Attributes childAttributes( int index);

		virtual bool get_fullPage( );
		Dynamic get_fullPage_dyn();

		virtual bool set_fullPage( bool value);
		Dynamic set_fullPage_dyn();

		virtual ::com::danielfreeman::madcomponents::Attributes get_attributes( );

		virtual bool set_isVisible( bool value);

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

		virtual ::String set_title( ::String value);
		Dynamic set_title_dyn();

		virtual bool set_autoForward( bool value);
		Dynamic set_autoForward_dyn();

		virtual bool set_autoBack( bool value);
		Dynamic set_autoBack_dyn();

		virtual ::com::danielfreeman::madcomponents::UINavigationBar get_navigationBar( );
		Dynamic get_navigationBar_dyn();

		virtual Void goForward( ::openfl::events::Event event);
		Dynamic goForward_dyn();

		virtual Void goBack( ::openfl::events::MouseEvent event);
		Dynamic goBack_dyn();

		virtual Void updateTitle( );
		Dynamic updateTitle_dyn();

		virtual Void doTransition( ::String transition);

		virtual int get_index( );
		Dynamic get_index_dyn();

		virtual Dynamic get_row( );
		Dynamic get_row_dyn();

		virtual ::String get_label( );
		Dynamic get_label_dyn();

		virtual Void goToPage( int value,::String transition);

		virtual Void nextPage( ::String transition);

		virtual Void previousPage( ::String transition);

		virtual Void updateNavigationBar( );
		Dynamic updateNavigationBar_dyn();

		virtual Void keyHandler( ::openfl::events::KeyboardEvent event);
		Dynamic keyHandler_dyn();

		virtual Void destructor( );

		static int BACK;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UINavigation */ 
