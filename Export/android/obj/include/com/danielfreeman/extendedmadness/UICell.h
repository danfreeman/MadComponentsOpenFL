#ifndef INCLUDED_com_danielfreeman_extendedmadness_UICell
#define INCLUDED_com_danielfreeman_extendedmadness_UICell

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/UILabel.h>
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UICell)
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
namespace extendedmadness{


class HXCPP_CLASS_ATTRIBUTES  UICell_obj : public ::com::danielfreeman::madcomponents::UILabel_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::UILabel_obj super;
		typedef UICell_obj OBJ_;
		UICell_obj();
		Void __construct(::openfl::display::Sprite screen,int xx,int yy,::String __o_txt,hx::Null< Float >  __o_wdth,::openfl::text::TextFormat format,hx::Null< bool >  __o_multiLine,hx::Null< bool >  __o_wordWrap,hx::Null< int >  __o_borderColour,hx::Null< bool >  __o_border);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UICell_obj > __new(::openfl::display::Sprite screen,int xx,int yy,::String __o_txt,hx::Null< Float >  __o_wdth,::openfl::text::TextFormat format,hx::Null< bool >  __o_multiLine,hx::Null< bool >  __o_wordWrap,hx::Null< int >  __o_borderColour,hx::Null< bool >  __o_border);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UICell_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UICell"); }

		::openfl::text::TextFormat FORMAT;
		virtual Float set_fixwidth( Float value);

		virtual int set_defaultColour( int value);
		Dynamic set_defaultColour_dyn();

};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UICell */ 
