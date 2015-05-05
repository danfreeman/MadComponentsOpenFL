#ifndef INCLUDED_com_danielfreeman_extendedmadness_UIIcons
#define INCLUDED_com_danielfreeman_extendedmadness_UIIcons

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/MadSprite.h>
#include <com/danielfreeman/madcomponents/IComponentUI.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,extendedmadness,UIIcons)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UILabel)
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
HX_DECLARE_CLASS2(openfl,events,TimerEvent)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
HX_DECLARE_CLASS2(openfl,utils,Timer)
namespace com{
namespace danielfreeman{
namespace extendedmadness{


class HXCPP_CLASS_ATTRIBUTES  UIIcons_obj : public ::com::danielfreeman::madcomponents::MadSprite_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::MadSprite_obj super;
		typedef UIIcons_obj OBJ_;
		UIIcons_obj();
		Void __construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIIcons_obj > __new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIIcons_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::danielfreeman::madcomponents::IComponentUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IComponentUI_delegate_< UIIcons_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("UIIcons"); }

		::openfl::text::TextFormat LABEL_FORMAT;
		::openfl::text::TextFormat LABEL_HIGHLIGHT;
		::openfl::text::TextFormat LABEL_DISABLE;
		Array< ::Dynamic > _icons;
		::openfl::utils::Timer _timer;
		int _index;
		int _pressIndex;
		int _iconColour;
		int _activeColour;
		int _highlightColour;
		int _disableColour;
		Float _leftMargin;
		Array< ::String > _data;
		Array< ::Dynamic > _labels;
		::openfl::text::TextFormat _labelFormat;
		::openfl::text::TextFormat _labelHighlight;
		::openfl::text::TextFormat _labelDisable;
		Array< bool > _enabled;
		bool _pixelSnapping;
		Float _scaleHeight;
		::String _text;
		virtual ::MadXML doDeletes( ::MadXML xml);
		Dynamic doDeletes_dyn();

		virtual Void extractData( ::MadXML xml);
		Dynamic extractData_dyn();

		virtual ::String imageAttributeText( ::MadXML item);
		Dynamic imageAttributeText_dyn();

		virtual ::MadXML set_xmlData( ::MadXML value);
		Dynamic set_xmlData_dyn();

		virtual Array< ::Dynamic > get_labels( );
		Dynamic get_labels_dyn();

		virtual Void enable( int index,bool state);
		Dynamic enable_dyn();

		virtual Void mouseDown( ::openfl::events::MouseEvent event);
		Dynamic mouseDown_dyn();

		virtual Void clearHighlight( );
		Dynamic clearHighlight_dyn();

		virtual Void touchCancel( );

		virtual Void labelHighlight( );
		Dynamic labelHighlight_dyn();

		virtual Void mouseUp( ::openfl::events::MouseEvent event);
		Dynamic mouseUp_dyn();

		virtual Void highlight( );
		Dynamic highlight_dyn();

		virtual ::openfl::geom::ColorTransform newColourTransform( int colour);
		Dynamic newColourTransform_dyn();

		virtual Void unHighlight( ::openfl::events::TimerEvent event);
		Dynamic unHighlight_dyn();

		virtual int get_index( );
		Dynamic get_index_dyn();

		virtual int set_index( int value);
		Dynamic set_index_dyn();

		virtual ::String set_text( ::String source);

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Array< ::Dynamic > set_icons( Array< ::Dynamic > value);
		Dynamic set_icons_dyn();

		virtual Array< ::Dynamic > get_icons( );
		Dynamic get_icons_dyn();

		virtual Void destructor( );

		static Float COLOUR_OFFSET;
		static Float COLOUR_FACTOR;
		static int DISABLED_COLOUR;
		static Float CENTRE_OFFSET;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace extendedmadness

#endif /* INCLUDED_com_danielfreeman_extendedmadness_UIIcons */ 
