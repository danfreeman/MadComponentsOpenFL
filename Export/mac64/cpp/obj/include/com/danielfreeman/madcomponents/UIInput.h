#ifndef INCLUDED_com_danielfreeman_madcomponents_UIInput
#define INCLUDED_com_danielfreeman_madcomponents_UIInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/MadSprite.h>
#include <com/danielfreeman/madcomponents/IComponentUI.h>
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIInput)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,FocusEvent)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UIInput_obj : public ::com::danielfreeman::madcomponents::MadSprite_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::MadSprite_obj super;
		typedef UIInput_obj OBJ_;
		UIInput_obj();
		Void __construct(::openfl::display::Sprite screen,Float xx,Float yy,::String text,Array< int > colours,hx::Null< bool >  __o_alt,::String __o_prompt,hx::Null< int >  __o_promptColour,hx::Null< bool >  __o_style7);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIInput_obj > __new(::openfl::display::Sprite screen,Float xx,Float yy,::String text,Array< int > colours,hx::Null< bool >  __o_alt,::String __o_prompt,hx::Null< int >  __o_promptColour,hx::Null< bool >  __o_style7);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIInput_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::danielfreeman::madcomponents::IComponentUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IComponentUI_delegate_< UIInput_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("UIInput"); }

		::openfl::text::TextFormat FORMAT;
		::openfl::text::TextFormat _format;
		Dynamic _label;
		Array< int > _colours;
		Float _fixwidth;
		bool _alt;
		bool _style7;
		virtual Dynamic set_inputField( Dynamic value);
		Dynamic set_inputField_dyn();

		virtual Dynamic get_inputField( );
		Dynamic get_inputField_dyn();

		virtual Void focusOut( ::openfl::events::FocusEvent event);
		Dynamic focusOut_dyn();

		virtual Void textChanged( ::openfl::events::Event event);
		Dynamic textChanged_dyn();

		virtual Void mouseDown( ::openfl::events::MouseEvent event);
		Dynamic mouseDown_dyn();

		virtual Void mouseUp( ::openfl::events::MouseEvent event);
		Dynamic mouseUp_dyn();

		virtual ::String set_text( ::String value);

		virtual ::String set_htmlText( ::String value);
		Dynamic set_htmlText_dyn();

		virtual ::String get_text( );

		virtual Float set_fixwidth( Float value);
		Dynamic set_fixwidth_dyn();

		virtual Void focus( );
		Dynamic focus_dyn();

		virtual Void drawOutline( hx::Null< bool >  pressed);
		Dynamic drawOutline_dyn();

		virtual ::openfl::geom::Rectangle stageRect( );
		Dynamic stageRect_dyn();

		virtual Void destructor( );

		static Float SHADOW_OFFSET;
		static Float WIDTH;
		static Float CURVE;
		static Float CURVE7;
		static Float SIZE_X;
		static Float SIZE_Y;
		static Float SIZE_ALT;
		static int COLOUR;
		static int SHADOW_COLOUR;
		static int BACKGROUND;
		static int BACKGROUND7;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UIInput */ 
