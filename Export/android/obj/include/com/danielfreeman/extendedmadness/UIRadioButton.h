#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIRadioButton
#define INCLUDED_com_danielfreeman_extendedmadness_UIRadioButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/extendedmadness/UICheckBox.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UICheckBox)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UIRadioButton)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
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
namespace extendedmadness{


class HXCPP_CLASS_ATTRIBUTES  UIRadioButton_obj : public ::com::danielfreeman::extendedmadness::UICheckBox_obj{
	public:
		typedef ::com::danielfreeman::extendedmadness::UICheckBox_obj super;
		typedef UIRadioButton_obj OBJ_;
		UIRadioButton_obj();
		Void __construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIRadioButton_obj > __new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIRadioButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIRadioButton"); }

		::openfl::events::EventDispatcher _group;
		virtual Void toggle( ::openfl::events::Event event);
		Dynamic toggle_dyn();

		virtual Void makeTick( );

		virtual Void buttonChrome( );

		virtual Void clearState( );
		Dynamic clearState_dyn();

		virtual Void redraw( );

		virtual Void destructor( );

		static ::String TOGGLE;
		static ::haxe::ds::StringMap _GROUPS;
		static ::com::danielfreeman::extendedmadness::UIRadioButton _FROM;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UIRadioButton */ 
