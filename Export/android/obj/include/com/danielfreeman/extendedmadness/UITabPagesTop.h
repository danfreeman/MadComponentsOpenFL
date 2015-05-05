#ifndef INCLUDED_com_danielfreeman_extendedmadness_UITabPagesTop
#define INCLUDED_com_danielfreeman_extendedmadness_UITabPagesTop

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/UITabPages.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UITabPagesTop)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IContainerUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadMasking)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UILabel)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIPages)
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
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace com{
namespace danielfreeman{
namespace extendedmadness{


class HXCPP_CLASS_ATTRIBUTES  UITabPagesTop_obj : public ::com::danielfreeman::madcomponents::UITabPages_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::UITabPages_obj super;
		typedef UITabPagesTop_obj OBJ_;
		UITabPagesTop_obj();
		Void __construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UITabPagesTop_obj > __new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UITabPagesTop_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UITabPagesTop"); }

		::openfl::text::TextFormat _onFormat;
		::openfl::text::TextFormat _offFormat;
		Array< ::Dynamic > _labels;
		Array< ::Dynamic > _icons;
		virtual Void initialiseButtonBar( ::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

		virtual Void mouseDown( ::openfl::events::MouseEvent event);

		virtual Void mouseUp( ::openfl::events::MouseEvent event);

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

		virtual int set_pageNumber( int value);

		virtual Void setTab( int index,::String label,::Class imageClass);

		virtual Void spacing( );
		Dynamic spacing_dyn();

		virtual Void changeColours( int oldIndex,int newIndex);
		Dynamic changeColours_dyn();

		static Float LABEL_Y;
		static Float ICON_Y;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UITabPagesTop */ 
