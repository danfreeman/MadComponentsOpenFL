#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#define INCLUDED_com_danielfreeman_madcomponents_UILabel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/text/TextField.h>
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UILabel)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UILabel_obj : public ::openfl::text::TextField_obj{
	public:
		typedef ::openfl::text::TextField_obj super;
		typedef UILabel_obj OBJ_;
		UILabel_obj();
		Void __construct(::openfl::display::Sprite screen,Float xx,Float yy,::String __o_txt,::openfl::text::TextFormat format);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UILabel_obj > __new(::openfl::display::Sprite screen,Float xx,Float yy,::String __o_txt,::openfl::text::TextFormat format);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UILabel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("UILabel"); }

		virtual Float set_fixwidth( Float value);
		Dynamic set_fixwidth_dyn();

		virtual ::String set_xmlText( ::String value);
		Dynamic set_xmlText_dyn();

		virtual Float set_fixheight( Float value);
		Dynamic set_fixheight_dyn();

		static ::openfl::text::TextFormat FORMAT;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UILabel */ 
