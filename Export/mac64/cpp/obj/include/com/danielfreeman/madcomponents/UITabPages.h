#ifndef INCLUDED_com_danielfreeman_madcomponents_UITabPages
#define INCLUDED_com_danielfreeman_madcomponents_UITabPages

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
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIButton)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIPages)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UITabButton)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UITabPages)
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
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UITabPages_obj : public ::com::danielfreeman::madcomponents::UIPages_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::UIPages_obj super;
		typedef UITabPages_obj OBJ_;
		UITabPages_obj();
		Void __construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UITabPages_obj > __new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UITabPages_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UITabPages"); }

		::openfl::display::Sprite _buttonBar;
		Array< ::Dynamic > _buttons;
		::com::danielfreeman::madcomponents::UITabButton _mouseDownTarget;
		int _colour;
		bool _alt;
		::com::danielfreeman::madcomponents::Attributes _fullPageAttributes;
		::com::danielfreeman::madcomponents::Attributes _pagesAttributes;
		bool _pixelSnapping;
		Float _iconOffset;
		Array< bool > _fullPage;
		virtual bool get_fullPage( );
		Dynamic get_fullPage_dyn();

		virtual bool set_fullPage( bool value);
		Dynamic set_fullPage_dyn();

		virtual ::openfl::display::Sprite get_buttonBar( );
		Dynamic get_buttonBar_dyn();

		virtual Void extractData( ::com::danielfreeman::MadXML xml);
		Dynamic extractData_dyn();

		virtual ::Class imageAttributeBitmapData( Dynamic item);
		Dynamic imageAttributeBitmapData_dyn();

		virtual Dynamic set_data( Dynamic value);
		Dynamic set_data_dyn();

		virtual ::com::danielfreeman::MadXML set_xmlData( ::com::danielfreeman::MadXML value);
		Dynamic set_xmlData_dyn();

		virtual Dynamic attributesToObject( ::com::danielfreeman::MadXML child);
		Dynamic attributesToObject_dyn();

		virtual Void initialiseButtonBar( ::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		Dynamic initialiseButtonBar_dyn();

		virtual Void mouseDown( ::openfl::events::MouseEvent event);
		Dynamic mouseDown_dyn();

		virtual Void goToPage( int page,::String transition);

		virtual Void mouseUp( ::openfl::events::MouseEvent event);
		Dynamic mouseUp_dyn();

		virtual Void setTab( int index,::String label,::Class imageBitmapDataClass);
		Dynamic setTab_dyn();

		virtual Void superLayout( ::com::danielfreeman::madcomponents::Attributes attributes);
		Dynamic superLayout_dyn();

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

		virtual Void attachPages( Array< ::Dynamic > pages,hx::Null< bool >  alt);

		virtual int set_pageNumber( int value);

		virtual ::com::danielfreeman::madcomponents::Attributes get_attributes( );

		virtual ::com::danielfreeman::madcomponents::Attributes childAttributes( int index);

		virtual Void makeTabButtons( ::com::danielfreeman::madcomponents::Attributes attributes,int numberOfPages,bool alt);
		Dynamic makeTabButtons_dyn();

		virtual int set_colour( int value);
		Dynamic set_colour_dyn();

		virtual Void drawTabButtonBackground( );
		Dynamic drawTabButtonBackground_dyn();

		virtual ::com::danielfreeman::madcomponents::UITabButton button( int index);
		Dynamic button_dyn();

		virtual Void destructor( );

		static Float PADDING;
		static Float TWEAK;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UITabPages */ 
