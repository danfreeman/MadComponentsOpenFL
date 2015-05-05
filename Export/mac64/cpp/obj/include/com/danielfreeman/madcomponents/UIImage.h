#ifndef INCLUDED_com_danielfreeman_madcomponents_UIImage
#define INCLUDED_com_danielfreeman_madcomponents_UIImage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/MadSprite.h>
#include <com/danielfreeman/madcomponents/IComponentUI.h>
HX_DECLARE_CLASS2(com,danielfreeman,MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIImage)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
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


class HXCPP_CLASS_ATTRIBUTES  UIImage_obj : public ::com::danielfreeman::madcomponents::MadSprite_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::MadSprite_obj super;
		typedef UIImage_obj OBJ_;
		UIImage_obj();
		Void __construct(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIImage_obj > __new(::openfl::display::Sprite screen,::com::danielfreeman::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIImage_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::danielfreeman::madcomponents::IComponentUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IComponentUI_delegate_< UIImage_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("UIImage"); }

		Float _width;
		Float _height;
		Float _attributesWidth;
		Float _attributesHeight;
		::openfl::display::DisplayObject _image;
		bool _scale;
		bool _stretch;
		Float _alpha;
		int _colour;
		::String _border;
		virtual ::String set_text( ::String _tmp_source);

		virtual ::String set_value( ::String value);
		Dynamic set_value_dyn();

		virtual Dynamic set_image( Dynamic value);
		Dynamic set_image_dyn();

		virtual ::openfl::display::Bitmap set_pixelSnappedImageBitmap( ::openfl::display::Bitmap value);
		Dynamic set_pixelSnappedImageBitmap_dyn();

		virtual ::String set_pixelSnappedImageBitmapName( ::String value);
		Dynamic set_pixelSnappedImageBitmapName_dyn();

		virtual ::Class set_pixelSnappedImageClass( ::Class Value);
		Dynamic set_pixelSnappedImageClass_dyn();

		virtual ::String set_pixelSnappedImageName( ::String value);
		Dynamic set_pixelSnappedImageName_dyn();

		virtual ::com::danielfreeman::MadXML set_data( ::com::danielfreeman::MadXML value);
		Dynamic set_data_dyn();

		virtual Void scaleImage( );
		Dynamic scaleImage_dyn();

		virtual Float set_attributesWidth( Float value);
		Dynamic set_attributesWidth_dyn();

		virtual Float set_attributesHeight( Float value);
		Dynamic set_attributesHeight_dyn();

		virtual ::openfl::geom::Rectangle stageRect( hx::Null< Float >  aspectRatio);
		Dynamic stageRect_dyn();

		virtual ::String set_imageClassName( ::String value);
		Dynamic set_imageClassName_dyn();

		virtual ::String set_imageBitmapName( ::String value);
		Dynamic set_imageBitmapName_dyn();

		virtual ::Class set_imageClass( ::Class value);
		Dynamic set_imageClass_dyn();

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UIImage */ 
