#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabelX
#define INCLUDED_com_danielfreeman_madcomponents_UILabelX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/UILabel.h>
#include <com/danielfreeman/madcomponents/IComponentUI.h>
HX_DECLARE_CLASS2(com,danielfreeman,MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UILabel)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UILabelX)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,TextField)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UILabelX_obj : public ::com::danielfreeman::madcomponents::UILabel_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::UILabel_obj super;
		typedef UILabelX_obj OBJ_;
		UILabelX_obj();
		Void __construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UILabelX_obj > __new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UILabelX_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::danielfreeman::madcomponents::IComponentUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IComponentUI_delegate_< UILabelX_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("UILabelX"); }

		bool _autoSize;
		::com::danielfreeman::madcomponents::Attributes _attributes;
		::com::danielfreeman::MadXML _xml;
		bool _clickable;
		bool _includeInLayout;
		virtual Void assignToLabel( ::com::danielfreeman::MadXML xml);
		Dynamic assignToLabel_dyn();

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);
		Dynamic layout_dyn();

		virtual bool set_clickable( bool value);
		Dynamic set_clickable_dyn();

		virtual bool get_clickable( );
		Dynamic get_clickable_dyn();

		virtual bool set_includeInLayout( bool value);
		Dynamic set_includeInLayout_dyn();

		virtual bool get_includeInLayout( );
		Dynamic get_includeInLayout_dyn();

		virtual Void touchCancel( );
		Dynamic touchCancel_dyn();

		virtual ::com::danielfreeman::madcomponents::Attributes get_attributes( );
		Dynamic get_attributes_dyn();

		virtual Void destructor( );
		Dynamic destructor_dyn();

};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UILabelX */ 
