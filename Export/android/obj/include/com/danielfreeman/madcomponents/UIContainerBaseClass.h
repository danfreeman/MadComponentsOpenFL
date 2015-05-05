#ifndef INCLUDED_com_danielfreeman_madcomponents_UIContainerBaseClass
#define INCLUDED_com_danielfreeman_madcomponents_UIContainerBaseClass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/MadSprite.h>
#include <com/danielfreeman/madcomponents/IContainerUI.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IContainerUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
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


class HXCPP_CLASS_ATTRIBUTES  UIContainerBaseClass_obj : public ::com::danielfreeman::madcomponents::MadSprite_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::MadSprite_obj super;
		typedef UIContainerBaseClass_obj OBJ_;
		UIContainerBaseClass_obj();
		Void __construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIContainerBaseClass_obj > __new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIContainerBaseClass_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::danielfreeman::madcomponents::IComponentUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IComponentUI_delegate_< UIContainerBaseClass_obj >(this); }
		inline operator ::com::danielfreeman::madcomponents::IContainerUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IContainerUI_delegate_< UIContainerBaseClass_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("UIContainerBaseClass"); }

		::MadXML _xml;
		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

		virtual Void initialise( ::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		Dynamic initialise_dyn();

		virtual Void drawComponent( );
		Dynamic drawComponent_dyn();

		virtual ::MadXML get_xml( );
		Dynamic get_xml_dyn();

		virtual ::openfl::display::DisplayObject findViewById( ::String id,hx::Null< int >  row,hx::Null< int >  group);
		Dynamic findViewById_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Array< ::Dynamic > get_pages( );
		Dynamic get_pages_dyn();

};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UIContainerBaseClass */ 
