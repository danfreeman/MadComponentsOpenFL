#ifndef INCLUDED_com_danielfreeman_madcomponents_UIPages
#define INCLUDED_com_danielfreeman_madcomponents_UIPages

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/MadMasking.h>
#include <com/danielfreeman/madcomponents/IContainerUI.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IContainerUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadMasking)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIForm)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIPages)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,TimerEvent)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,utils,Timer)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UIPages_obj : public ::com::danielfreeman::madcomponents::MadMasking_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::MadMasking_obj super;
		typedef UIPages_obj OBJ_;
		UIPages_obj();
		Void __construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIPages_obj > __new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIPages_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::danielfreeman::madcomponents::IComponentUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IComponentUI_delegate_< UIPages_obj >(this); }
		inline operator ::com::danielfreeman::madcomponents::IContainerUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IContainerUI_delegate_< UIPages_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("UIPages"); }

		Array< ::Dynamic > _pages;
		int _page;
		::openfl::display::DisplayObject _thisPage;
		::openfl::display::DisplayObject _lastPage;
		Float _slideX;
		Float _slideY;
		::openfl::utils::Timer _slideTimer;
		::com::danielfreeman::madcomponents::UIForm _drawer;
		::String _transition;
		int _lastPageIndex;
		bool _border;
		::com::danielfreeman::madcomponents::Attributes _layoutAfterSlide;
		bool _easing;
		Float _easeIn;
		Float _easeOut;
		::openfl::display::Shape _shade;
		int _savePageIndex;
		Float _drawerHeight;
		bool _over;
		bool _slideOver;
		virtual ::com::danielfreeman::madcomponents::Attributes childAttributes( int index);
		Dynamic childAttributes_dyn();

		virtual Void setVisible( ::openfl::display::DisplayObject page,bool value);
		Dynamic setVisible_dyn();

		virtual Float set_drawerHeight( Float value);
		Dynamic set_drawerHeight_dyn();

		virtual Void setInitialPage( );
		Dynamic setInitialPage_dyn();

		virtual Array< ::Dynamic > get_pages( );
		Dynamic get_pages_dyn();

		virtual ::MadXML get_xml( );
		Dynamic get_xml_dyn();

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

		virtual Void addPadding( ::String localName,::com::danielfreeman::madcomponents::Attributes newAttributes);
		Dynamic addPadding_dyn();

		virtual Void nextPage( ::String transition);
		Dynamic nextPage_dyn();

		virtual Void previousPage( ::String transition);
		Dynamic previousPage_dyn();

		virtual Void attachPages( Array< ::Dynamic > pages,hx::Null< bool >  alt);
		Dynamic attachPages_dyn();

		virtual Void doTransition( ::String transition);
		Dynamic doTransition_dyn();

		virtual Void drawShade( );
		Dynamic drawShade_dyn();

		virtual Void startSlide( hx::Null< Float >  slideY);
		Dynamic startSlide_dyn();

		virtual bool isSimpleTransition( ::String transition);
		Dynamic isSimpleTransition_dyn();

		virtual bool upTransition( ::String transition);
		Dynamic upTransition_dyn();

		virtual bool downTransition( ::String transition);
		Dynamic downTransition_dyn();

		virtual Float bezier( Float p0,Float p1,Float p2,Float t);
		Dynamic bezier_dyn();

		virtual Float easing( Float t);
		Dynamic easing_dyn();

		virtual Float delta( Float t,Float increment);
		Dynamic delta_dyn();

		virtual Void slideComplete( );
		Dynamic slideComplete_dyn();

		virtual Void slide( ::openfl::events::TimerEvent event);
		Dynamic slide_dyn();

		virtual Void doLayout( );
		Dynamic doLayout_dyn();

		virtual Void removeLastPage( );
		Dynamic removeLastPage_dyn();

		virtual Void goToPage( int page,::String transition);
		Dynamic goToPage_dyn();

		virtual bool goToPageId( ::String id,::String transition);
		Dynamic goToPageId_dyn();

		virtual ::openfl::display::DisplayObject pageId( ::String id);
		Dynamic pageId_dyn();

		virtual int get_pageNumber( );
		Dynamic get_pageNumber_dyn();

		virtual int set_pageNumber( int value);
		Dynamic set_pageNumber_dyn();

		virtual int get_pageUnder( );
		Dynamic get_pageUnder_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual ::openfl::display::DisplayObject findViewById( ::String id,hx::Null< int >  row,hx::Null< int >  group);
		Dynamic findViewById_dyn();

		virtual Void drawComponent( );
		Dynamic drawComponent_dyn();

		virtual Void destructor( );

		static ::String STARTING;
		static ::String COMPLETE;
		static ::String SLIDE_LEFT;
		static ::String SLIDE_RIGHT;
		static ::String SLIDE_UP;
		static ::String SLIDE_DOWN;
		static ::String DRAWER_UP;
		static ::String DRAWER_DOWN;
		static ::String SLIDE_LEFT_OVER;
		static ::String SLIDE_RIGHT_OVER;
		static Float DRAWER_HEIGHT;
		static int SLIDE_INTERVAL;
		static int STEPS;
		static Float PADDING;
		static Float DIM_ALPHA;
		static Float UNDER;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UIPages */ 
