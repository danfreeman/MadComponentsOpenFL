#ifndef INCLUDED_com_danielfreeman_madcomponents_UITabButton
#define INCLUDED_com_danielfreeman_madcomponents_UITabButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/UIButton.h>
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIButton)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UITabButton)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UITabButton_obj : public ::com::danielfreeman::madcomponents::UIButton_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::UIButton_obj super;
		typedef UITabButton_obj OBJ_;
		UITabButton_obj();
		Void __construct(::openfl::display::Sprite screen,Float xx,Float yy,::String text,int colour,hx::Null< bool >  __o_tiny,hx::Null< bool >  __o_style7);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UITabButton_obj > __new(::openfl::display::Sprite screen,Float xx,Float yy,::String text,int colour,hx::Null< bool >  __o_tiny,hx::Null< bool >  __o_style7);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UITabButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UITabButton"); }

		bool _state;
		::openfl::display::Sprite _screen;
		::openfl::display::Sprite _icon;
		bool _tiny;
		::openfl::display::Bitmap _iconBitmap;
		::openfl::text::TextFormat SMALL_FORMAT;
		virtual Void init( );

		virtual Void clearState( ::openfl::events::Event event);
		Dynamic clearState_dyn();

		virtual bool set_state( bool value);
		Dynamic set_state_dyn();

		virtual ::String set_text( ::String value);

		virtual Void drawButton( hx::Null< bool >  pressed);

		virtual ::String set_image( ::String value);
		Dynamic set_image_dyn();

		virtual ::Class set_imageClass( ::Class value);
		Dynamic set_imageClass_dyn();

		virtual ::Class set_imageBitmapDataClass( ::Class value);
		Dynamic set_imageBitmapDataClass_dyn();

		virtual Void pixelSnapImage( Float offset);
		Dynamic pixelSnapImage_dyn();

		virtual Float sizeY( );

		virtual Float set_fixwidth( Float value);

		virtual Void mouseUp( ::openfl::events::MouseEvent event);

		virtual Void destructor( );

		static ::String CLEAR;
		static Float TAB_HEIGHT;
		static Float ICON_Y;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UITabButton */ 
