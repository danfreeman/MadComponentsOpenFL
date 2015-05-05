#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#define INCLUDED_com_danielfreeman_madcomponents_MadSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
#include <com/danielfreeman/madcomponents/IComponentUI.h>
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  MadSprite_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef MadSprite_obj OBJ_;
		MadSprite_obj();
		Void __construct(::openfl::display::Sprite screen,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MadSprite_obj > __new(::openfl::display::Sprite screen,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MadSprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::danielfreeman::madcomponents::IComponentUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IComponentUI_delegate_< MadSprite_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("MadSprite"); }

		bool _clickable;
		bool _includeInLayout;
		::com::danielfreeman::madcomponents::Attributes _attributes;
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

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);
		Dynamic layout_dyn();

		virtual Float get_theWidth( );
		Dynamic get_theWidth_dyn();

		virtual Float get_theHeight( );
		Dynamic get_theHeight_dyn();

		virtual bool set_isVisible( bool value);
		Dynamic set_isVisible_dyn();

		virtual bool get_isVisible( );
		Dynamic get_isVisible_dyn();

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::openfl::geom::Point toPixelBoundary( ::openfl::display::DisplayObject target,Float x,Float y);
		Dynamic toPixelBoundary_dyn();

		virtual ::openfl::geom::Point toPixelBoundaryDouble( ::openfl::display::DisplayObject target,Float x,Float y);
		Dynamic toPixelBoundaryDouble_dyn();

		virtual Void destructor( );
		Dynamic destructor_dyn();

};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_MadSprite */ 
