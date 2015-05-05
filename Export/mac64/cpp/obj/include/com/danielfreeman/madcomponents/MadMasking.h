#ifndef INCLUDED_com_danielfreeman_madcomponents_MadMasking
#define INCLUDED_com_danielfreeman_madcomponents_MadMasking

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/MadSprite.h>
HX_DECLARE_CLASS2(com,danielfreeman,MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadMasking)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  MadMasking_obj : public ::com::danielfreeman::madcomponents::MadSprite_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::MadSprite_obj super;
		typedef MadMasking_obj OBJ_;
		MadMasking_obj();
		Void __construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MadMasking_obj > __new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MadMasking_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MadMasking"); }

		bool _masking;
		::openfl::display::Shape _mask;
		::com::danielfreeman::MadXML _xml;
		::openfl::geom::Point _maskSize;
		virtual bool set_masking( bool value);
		Dynamic set_masking_dyn();

		virtual Void startMasking( );
		Dynamic startMasking_dyn();

		virtual Void refreshMasking( ::com::danielfreeman::madcomponents::Attributes attributes);
		Dynamic refreshMasking_dyn();

		virtual Void setMaskSize( ::com::danielfreeman::madcomponents::Attributes attributes);
		Dynamic setMaskSize_dyn();

		virtual Void doMasking( ::com::danielfreeman::madcomponents::Attributes attributes);
		Dynamic doMasking_dyn();

		virtual Void cutout( ::openfl::geom::Rectangle rectangle);
		Dynamic cutout_dyn();

};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_MadMasking */ 
