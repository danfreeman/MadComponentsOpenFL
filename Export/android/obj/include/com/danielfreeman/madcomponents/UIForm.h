#ifndef INCLUDED_com_danielfreeman_madcomponents_UIForm
#define INCLUDED_com_danielfreeman_madcomponents_UIForm

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/MadMasking.h>
#include <com/danielfreeman/madcomponents/IContainerUI.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS0(MadXMLList)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IContainerUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadMasking)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,MadSprite)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Model)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,UIForm)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,net,URLLoader)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  UIForm_obj : public ::com::danielfreeman::madcomponents::MadMasking_obj{
	public:
		typedef ::com::danielfreeman::madcomponents::MadMasking_obj super;
		typedef UIForm_obj OBJ_;
		UIForm_obj();
		Void __construct(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,hx::Null< bool >  __o_row,hx::Null< bool >  __o_inGroup);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIForm_obj > __new(::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,hx::Null< bool >  __o_row,hx::Null< bool >  __o_inGroup);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIForm_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::danielfreeman::madcomponents::IComponentUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IComponentUI_delegate_< UIForm_obj >(this); }
		inline operator ::com::danielfreeman::madcomponents::IContainerUI_obj *()
			{ return new ::com::danielfreeman::madcomponents::IContainerUI_delegate_< UIForm_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("UIForm"); }

		::String _mode;
		::com::danielfreeman::madcomponents::Model _model;
		Float _height;
		Array< ::Dynamic > _children;
		bool _row;
		Dynamic _widths;
		Dynamic _heights;
		bool _autoLayout;
		Float _pickerHeight;
		Float _cursorHeight;
		Float _extra;
		::openfl::display::Sprite _style;
		Dynamic _groups;
		int _index;
		bool _insideScroller;
		Array< Float > _positions;
		bool _inGroup;
		Dynamic _disable;
		bool _lazyRender;
		bool _recycle;
		::String _localName;
		bool _pickerBackground;
		Float _padding;
		bool _classic;
		bool _listenerAdded;
		virtual Void touchCancel( );

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void disableClickableGroupRows( Dynamic value);
		Dynamic disableClickableGroupRows_dyn();

		virtual Void insideScroller( );
		Dynamic insideScroller_dyn();

		virtual ::MadXML get_xml( );
		Dynamic get_xml_dyn();

		virtual ::MadXML set_xml( ::MadXML value);
		Dynamic set_xml_dyn();

		virtual Void includeComponent( ::String id,bool state);
		Dynamic includeComponent_dyn();

		virtual bool customWidths( );
		Dynamic customWidths_dyn();

		virtual bool customHeights( );
		Dynamic customHeights_dyn();

		virtual Void widthAndHeight( ::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		Dynamic widthAndHeight_dyn();

		virtual bool set_isVisible( bool value);

		virtual Void parseBlock( ::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes,::String mode,bool row);
		Dynamic parseBlock_dyn();

		virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes);

		virtual bool get_hasPickerBackground( );
		Dynamic get_hasPickerBackground_dyn();

		virtual Dynamic get_children( );
		Dynamic get_children_dyn();

		virtual bool included( ::openfl::display::DisplayObject child);
		Dynamic included_dyn();

		virtual Array< Float > get_positions( );
		Dynamic get_positions_dyn();

		virtual Void doLayout( );
		Dynamic doLayout_dyn();

		virtual Void doLayoutHandler( ::openfl::events::Event event);
		Dynamic doLayoutHandler_dyn();

		virtual int numberOfColumns( ::MadXMLList xmlList);
		Dynamic numberOfColumns_dyn();

		virtual Void pickerBackground( ::com::danielfreeman::madcomponents::Attributes attributes);
		Dynamic pickerBackground_dyn();

		virtual Void cutOuts( int partial);
		Dynamic cutOuts_dyn();

		virtual Void groupedBackground( bool begin,bool end,Float top,Float height,int count,hx::Null< bool >  click,::com::danielfreeman::madcomponents::UIForm child,hx::Null< bool >  lines);
		Dynamic groupedBackground_dyn();

		virtual Void drawLines( ::com::danielfreeman::madcomponents::UIForm child,Float top,Float height);
		Dynamic drawLines_dyn();

		virtual Void groupClicked( ::openfl::events::MouseEvent event);
		Dynamic groupClicked_dyn();

		virtual bool groupClickCancel( );
		Dynamic groupClickCancel_dyn();

		virtual Void resetGroupClicked( ::openfl::events::MouseEvent event);
		Dynamic resetGroupClicked_dyn();

		virtual int get_index( );
		Dynamic get_index_dyn();

		virtual Void drawComponent( );
		Dynamic drawComponent_dyn();

		virtual Void drawBackground( Array< int > colours);
		Dynamic drawBackground_dyn();

		virtual ::openfl::display::DisplayObject otherCommands( ::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes);
		Dynamic otherCommands_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual ::openfl::display::DisplayObject findViewById( ::String id,hx::Null< int >  row,hx::Null< int >  group);
		Dynamic findViewById_dyn();

		virtual Float get_theHeight( );

		virtual Float get_theWidth( );

		virtual Dynamic set_data( Dynamic values);
		Dynamic set_data_dyn();

		virtual ::com::danielfreeman::madcomponents::Model get_model( );
		Dynamic get_model_dyn();

		virtual Array< ::Dynamic > get_pages( );
		Dynamic get_pages_dyn();

		virtual Void destructor( );

		static ::String CLICK_START;
		static ::String CLICK_CANCEL;
		static ::String CLICKED;
		static ::String CLICKED_END;
		static ::String LOADED;
		static ::String UNLOADED;
		static Float DEFAULT_INPUT_WIDTH;
		static int LINE_COLOUR;
		static int CELL_COLOUR;
		static Float CURVE;
		static Float GROUP_OFFSET;
		static Float TWEAK;
		static int HIGHLIGHT;
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_UIForm */ 
