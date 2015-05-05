#ifndef INCLUDED_com_danielfreeman_extendedmadness_UISegmentedControl
#define INCLUDED_com_danielfreeman_extendedmadness_UISegmentedControl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/extendedmadness/UICutCopyPaste.h>
#include <com/danielfreeman/madcomponents/IComponentUI.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UICutCopyPaste)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UISegmentedControl)
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


class HXCPP_CLASS_ATTRIBUTES  UISegmentedControl_obj : public ::com::danielfreeman::extendedmadness::UICutCopyPaste_obj{
	public:
		typedef ::com::danielfreeman::extendedmadness::UICutCopyPaste_obj super;
		typedef UISegmentedControl_obj OBJ_;
		UISegmentedControl_obj();
		Void __construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UISegmentedControl_obj > __new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UISegmentedControl_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::danielfreeman::madcomponents::IComponentUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IComponentUI_delegate_< UISegmentedControl_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("UISegmentedControl"); }

		::MadXML _xml;
		int _textColour;
		virtual Float set_fixwidth( Float value);
		Dynamic set_fixwidth_dyn();

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

		virtual Void initialise( Array< ::String > words);

		virtual Array< ::String > set_vectorData( Array< ::String > value);
		Dynamic set_vectorData_dyn();

		virtual Dynamic set_data( Dynamic value);
		Dynamic set_data_dyn();

		virtual ::MadXML set_xmlData( ::MadXML value);
		Dynamic set_xmlData_dyn();

		virtual Array< ::String > extractData( ::MadXML xml);
		Dynamic extractData_dyn();

		virtual Void mouseUp( ::openfl::events::MouseEvent event);

		virtual int set_index( int value);

		virtual Void colourButtons( );

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void clearPressed( );
		Dynamic clearPressed_dyn();

		virtual Void destructor( );

		static int BUTTON_COLOUR;
		static int BUTTON_COLOUR7;
		static int TEXT_COLOUR;
		static int TEXT_COLOUR7;
		static Float CONTROL_CURVE;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UISegmentedControl */ 
