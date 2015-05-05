#ifndef INCLUDED_com_danielfreeman_madcomponents_UICircular
#define INCLUDED_com_danielfreeman_madcomponents_UICircular

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/UIContainerBaseClass.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IContainerUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UICircular)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIContainerBaseClass)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UICircular_obj : public ::com::danielfreeman::madcomponents::UIContainerBaseClass_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::UIContainerBaseClass_obj super;
		typedef UICircular_obj OBJ_;
		UICircular_obj();
		Void __construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UICircular_obj > __new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UICircular_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("UICircular"); }

		int _radius;
		Float _maximumWidth;
		Float _maximumHeight;
		Float _startAngle;
		Float _finishAngle;
		virtual Void initialise( ::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

		virtual Void drawComponent( );

};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UICircular */ 
