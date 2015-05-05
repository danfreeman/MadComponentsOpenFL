#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_MadXML
#include <MadXML.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED__MadXML_AttribAccess
#include <_MadXML/AttribAccess.h>
#endif
#ifndef INCLUDED__MadXML_HasAttribAccess
#include <_MadXML/HasAttribAccess.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_Attributes
#include <com/danielfreeman/madcomponents/Attributes.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IComponentUI
#include <com/danielfreeman/madcomponents/IComponentUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_IContainerUI
#include <com/danielfreeman/madcomponents/IContainerUI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadMasking
#include <com/danielfreeman/madcomponents/MadMasking.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_MadSprite
#include <com/danielfreeman/madcomponents/MadSprite.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UI
#include <com/danielfreeman/madcomponents/UI.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIActivity
#include <com/danielfreeman/madcomponents/UIActivity.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIButton
#include <com/danielfreeman/madcomponents/UIButton.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIButtonX
#include <com/danielfreeman/madcomponents/UIButtonX.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UICircular
#include <com/danielfreeman/madcomponents/UICircular.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIContainerBaseClass
#include <com/danielfreeman/madcomponents/UIContainerBaseClass.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIDividedList
#include <com/danielfreeman/madcomponents/UIDividedList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIForm
#include <com/danielfreeman/madcomponents/UIForm.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIGroupedList
#include <com/danielfreeman/madcomponents/UIGroupedList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIImage
#include <com/danielfreeman/madcomponents/UIImage.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIImageLoader
#include <com/danielfreeman/madcomponents/UIImageLoader.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIInput
#include <com/danielfreeman/madcomponents/UIInput.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIInputX
#include <com/danielfreeman/madcomponents/UIInputX.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabel
#include <com/danielfreeman/madcomponents/UILabel.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UILabelX
#include <com/danielfreeman/madcomponents/UILabelX.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIList
#include <com/danielfreeman/madcomponents/UIList.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UINavigation
#include <com/danielfreeman/madcomponents/UINavigation.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UINavigationPages
#include <com/danielfreeman/madcomponents/UINavigationPages.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIPages
#include <com/danielfreeman/madcomponents/UIPages.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIRenderer
#include <com/danielfreeman/madcomponents/UIRenderer.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIScrollVertical
#include <com/danielfreeman/madcomponents/UIScrollVertical.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UISearch
#include <com/danielfreeman/madcomponents/UISearch.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UISlider
#include <com/danielfreeman/madcomponents/UISlider.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UISliderX
#include <com/danielfreeman/madcomponents/UISliderX.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UISpacer
#include <com/danielfreeman/madcomponents/UISpacer.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UISwitch
#include <com/danielfreeman/madcomponents/UISwitch.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UITabPages
#include <com/danielfreeman/madcomponents/UITabPages.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIViewFlipper
#include <com/danielfreeman/madcomponents/UIViewFlipper.h>
#endif
#ifndef INCLUDED_com_danielfreeman_madcomponents_UIWindow
#include <com/danielfreeman/madcomponents/UIWindow.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_GradientType
#include <openfl/display/GradientType.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_InterpolationMethod
#include <openfl/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_system_Capabilities
#include <openfl/system/Capabilities.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void UI_obj::__construct()
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","new",0x085559fa,"com.danielfreeman.madcomponents.UI.new","com/danielfreeman/madcomponents/UI.hx",512,0xadc56093)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//UI_obj::~UI_obj() { }

Dynamic UI_obj::__CreateEmpty() { return  new UI_obj; }
hx::ObjectPtr< UI_obj > UI_obj::__new()
{  hx::ObjectPtr< UI_obj > result = new UI_obj();
	result->__construct();
	return result;}

Dynamic UI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UI_obj > result = new UI_obj();
	result->__construct();
	return result;}

::String UI_obj::RESIZED;

Float UI_obj::PADDING;

bool UI_obj::SIMULATION_RESIZE;

int UI_obj::DPI;

Float UI_obj::DIM_ALPHA;

Float UI_obj::WIDTH;

Float UI_obj::HEIGHT;

int UI_obj::COLOUR;

Array< ::String > UI_obj::TOKENS;

Array< ::Dynamic > UI_obj::CLASSES;

Float UI_obj::DEBUG_SCALE;

Array< ::String > UI_obj::_tokens;

Array< ::Dynamic > UI_obj::_classes;

::openfl::display::Sprite UI_obj::_screen;

::openfl::display::Sprite UI_obj::_root;

::openfl::display::Sprite UI_obj::_windowLayer;

::MadXML UI_obj::_xml;

bool UI_obj::_autoScale;

bool UI_obj::_autoResize;

Float UI_obj::_scale;

int UI_obj::_popUps;

::com::danielfreeman::madcomponents::Attributes UI_obj::_attributes;

bool UI_obj::_simulated;

::com::danielfreeman::madcomponents::UIActivity UI_obj::_activityIndicator;

bool UI_obj::_maskIt;

Array< int > UI_obj::_stageColours;

int UI_obj::_dpi;

Float UI_obj::_width;

Float UI_obj::_height;

::openfl::display::Sprite UI_obj::create( ::openfl::display::Sprite screen,::MadXML xml,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height){
Float width = __o_width.Default(-1);
Float height = __o_height.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","create",0x9eb459a2,"com.danielfreeman.madcomponents.UI.create","com/danielfreeman/madcomponents/UI.hx",102,0xadc56093)
	HX_STACK_ARG(screen,"screen")
	HX_STACK_ARG(xml,"xml")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
{
		HX_STACK_LINE(103)
		if (((::com::danielfreeman::madcomponents::UI_obj::_root != null()))){
			HX_STACK_LINE(104)
			::com::danielfreeman::madcomponents::UI_obj::clear(null());
		}
		HX_STACK_LINE(107)
		screen->get_stage()->set_stageFocusRect(false);
		HX_STACK_LINE(108)
		::com::danielfreeman::madcomponents::UI_obj::_simulated = (width < (int)0);
		HX_STACK_LINE(112)
		if ((xml->has->resolve(HX_CSTRING("dpi")))){
			HX_STACK_LINE(113)
			::String _g = xml->att->resolve(HX_CSTRING("dpi"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(113)
			Dynamic _g1 = ::Std_obj::parseInt(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(113)
			::com::danielfreeman::madcomponents::UI_obj::_dpi = _g1;
		}
		struct _Function_1_1{
			inline static bool Block( ::MadXML &xml){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UI.hx",115,0xadc56093)
				{
					HX_STACK_LINE(115)
					::String _g2 = xml->att->resolve(HX_CSTRING("autoScale"));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(115)
					return (_g2 == HX_CSTRING("false"));
				}
				return null();
			}
		};
		HX_STACK_LINE(115)
		if (((  ((xml->has->resolve(HX_CSTRING("autoScale")))) ? bool(_Function_1_1::Block(xml)) : bool(false) ))){
			HX_STACK_LINE(116)
			::com::danielfreeman::madcomponents::UI_obj::_autoScale = false;
		}
		HX_STACK_LINE(118)
		if (((width > (int)0))){
			HX_STACK_LINE(119)
			::com::danielfreeman::madcomponents::Attributes _g3 = ::com::danielfreeman::madcomponents::UI_obj::newAttributes(width,height);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(119)
			::com::danielfreeman::madcomponents::UI_obj::_attributes = _g3;
			HX_STACK_LINE(120)
			::com::danielfreeman::madcomponents::UI_obj::_maskIt = false;
		}
		else{
			HX_STACK_LINE(122)
			if ((::com::danielfreeman::madcomponents::UI_obj::_simulated)){
				HX_STACK_LINE(123)
				Float _g4 = width = (int)300;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(123)
				Float _g5 = height = (int)454;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(123)
				::com::danielfreeman::madcomponents::Attributes _g6 = ::com::danielfreeman::madcomponents::UI_obj::newAttributes(_g4,_g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(123)
				::com::danielfreeman::madcomponents::UI_obj::_attributes = _g6;
			}
			else{
				HX_STACK_LINE(126)
				Float _g7 = ::openfl::system::Capabilities_obj::get_screenResolutionX();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(126)
				Float _g8 = width = _g7;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(126)
				Float _g9 = ::openfl::system::Capabilities_obj::get_screenResolutionY();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(126)
				Float _g10 = height = _g9;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(126)
				::com::danielfreeman::madcomponents::Attributes _g11 = ::com::danielfreeman::madcomponents::UI_obj::newAttributes(_g8,_g10);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(126)
				::com::danielfreeman::madcomponents::UI_obj::_attributes = _g11;
			}
		}
		HX_STACK_LINE(130)
		::com::danielfreeman::madcomponents::UI_obj::_xml = xml;
		HX_STACK_LINE(131)
		::com::danielfreeman::madcomponents::UI_obj::_screen = screen;
		struct _Function_1_2{
			inline static bool Block( ::MadXML &xml){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UI.hx",133,0xadc56093)
				{
					struct _Function_2_1{
						inline static bool Block( ::MadXML &xml){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UI.hx",133,0xadc56093)
							{
								HX_STACK_LINE(133)
								::String _g12 = xml->att->resolve(HX_CSTRING("autoResize"));		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(133)
								return (_g12 != HX_CSTRING("false"));
							}
							return null();
						}
					};
					HX_STACK_LINE(133)
					return (  (((  ((xml->has->resolve(HX_CSTRING("autoResize")))) ? bool(_Function_2_1::Block(xml)) : bool(false) ))) ? bool(!(::com::danielfreeman::madcomponents::UI_obj::_simulated)) : bool(false) );
				}
				return null();
			}
		};
		HX_STACK_LINE(133)
		if (((  ((!(::com::danielfreeman::madcomponents::UI_obj::SIMULATION_RESIZE))) ? bool(_Function_1_2::Block(xml)) : bool(true) ))){
			HX_STACK_LINE(134)
			screen->get_stage()->addEventListener(::openfl::events::Event_obj::RESIZE,::com::danielfreeman::madcomponents::UI_obj::resize_dyn(),false,(int)0,true);
		}
		HX_STACK_LINE(137)
		::openfl::display::Sprite _g13;		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(137)
		_g13 = hx::TCast< openfl::display::Sprite >::cast(::com::danielfreeman::madcomponents::UI_obj::containers(screen,xml,::com::danielfreeman::madcomponents::UI_obj::_attributes));
		HX_STACK_LINE(137)
		::com::danielfreeman::madcomponents::UI_obj::_root = _g13;
		struct _Function_1_3{
			inline static bool Block( ::MadXML &xml){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UI.hx",138,0xadc56093)
				{
					struct _Function_2_1{
						inline static bool Block( ::MadXML &xml){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UI.hx",138,0xadc56093)
							{
								HX_STACK_LINE(138)
								::String _g14 = xml->att->resolve(HX_CSTRING("border"));		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(138)
								return (_g14 == HX_CSTRING("true"));
							}
							return null();
						}
					};
					HX_STACK_LINE(138)
					return (  ((!((!(xml->has->resolve(HX_CSTRING("border"))))))) ? bool(_Function_2_1::Block(xml)) : bool(true) );
				}
				return null();
			}
		};
		HX_STACK_LINE(138)
		if (((  (((::com::danielfreeman::madcomponents::UI_obj::_root == null()))) ? bool(_Function_1_3::Block(xml)) : bool(false) ))){
			HX_STACK_LINE(139)
			::com::danielfreeman::madcomponents::UI_obj::_attributes->x = ::com::danielfreeman::madcomponents::UI_obj::PADDING;
			HX_STACK_LINE(140)
			::com::danielfreeman::madcomponents::UI_obj::_attributes->y = ::com::danielfreeman::madcomponents::UI_obj::PADDING;
			HX_STACK_LINE(141)
			hx::SubEq(::com::danielfreeman::madcomponents::UI_obj::_attributes->width,((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING));
			HX_STACK_LINE(142)
			hx::SubEq(::com::danielfreeman::madcomponents::UI_obj::_attributes->height,((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING));
			HX_STACK_LINE(143)
			::com::danielfreeman::madcomponents::UI_obj::_attributes->set_hasBorder(true);
		}
		HX_STACK_LINE(145)
		if (((::com::danielfreeman::madcomponents::UI_obj::_root == null()))){
			HX_STACK_LINE(146)
			::String _g15 = xml->toXMLString();		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(146)
			::String _g16 = (HX_CSTRING("<vertical>") + _g15);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(146)
			::String _g17 = (_g16 + HX_CSTRING("</vertical>"));		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(146)
			::MadXML _g18 = ::MadXML_obj::parse(_g17);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(146)
			Dynamic _g19 = Dynamic( Array_obj<Dynamic>::__new().Add(screen).Add(_g18).Add(::com::danielfreeman::madcomponents::UI_obj::_attributes));		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(146)
			::com::danielfreeman::madcomponents::UIForm _g20 = ::Type_obj::createInstance(hx::ClassOf< ::com::danielfreeman::madcomponents::UIForm >(),_g19);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(146)
			::com::danielfreeman::madcomponents::UI_obj::_root = _g20;
			HX_STACK_LINE(147)
			::com::danielfreeman::madcomponents::UI_obj::_root->set_name(HX_CSTRING("+"));
		}
		HX_STACK_LINE(149)
		Float _g21 = ::com::danielfreeman::madcomponents::UI_obj::_root->set_scaleY(::com::danielfreeman::madcomponents::UI_obj::_scale);		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(149)
		::com::danielfreeman::madcomponents::UI_obj::_root->set_scaleX(_g21);
		HX_STACK_LINE(152)
		if ((xml->has->resolve(HX_CSTRING("stageColour")))){
			HX_STACK_LINE(153)
			::String colours = xml->att->resolve(HX_CSTRING("stageColour"));		HX_STACK_VAR(colours,"colours");
			HX_STACK_LINE(154)
			Array< int > _g22 = ::com::danielfreeman::madcomponents::UI_obj::toColourVector(colours);		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(154)
			::com::danielfreeman::madcomponents::UI_obj::_stageColours = _g22;
			HX_STACK_LINE(155)
			::com::danielfreeman::madcomponents::UI_obj::drawBackgroundColour(::com::danielfreeman::madcomponents::UI_obj::_stageColours,width,height,null(),null());
		}
		HX_STACK_LINE(158)
		if (((bool((bool(!(::com::danielfreeman::madcomponents::UI_obj::SIMULATION_RESIZE)) && bool(::com::danielfreeman::madcomponents::UI_obj::_maskIt))) && bool(::com::danielfreeman::madcomponents::UI_obj::_simulated)))){
			HX_STACK_LINE(159)
			::openfl::display::Sprite mask = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(mask,"mask");
			HX_STACK_LINE(160)
			mask->get_graphics()->beginFill((int)0,null());
			HX_STACK_LINE(161)
			mask->get_graphics()->drawRect((int)0,(int)0,(int)300,(int)454);
			HX_STACK_LINE(162)
			::com::danielfreeman::madcomponents::UI_obj::_root->set_mask(mask);
			HX_STACK_LINE(163)
			::com::danielfreeman::madcomponents::UI_obj::_root->addChild(mask);
		}
		HX_STACK_LINE(166)
		::openfl::display::Sprite _g23 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(166)
		::openfl::display::Sprite _g24 = ::com::danielfreeman::madcomponents::UI_obj::_windowLayer = _g23;		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(166)
		screen->addChild(_g24);
		HX_STACK_LINE(167)
		Float _g25 = ::com::danielfreeman::madcomponents::UI_obj::_windowLayer->set_scaleY(::com::danielfreeman::madcomponents::UI_obj::_scale);		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(167)
		::com::danielfreeman::madcomponents::UI_obj::_windowLayer->set_scaleX(_g25);
		HX_STACK_LINE(169)
		int _g27;		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(169)
		if ((xml->has->resolve(HX_CSTRING("activityIndicatorColour")))){
			HX_STACK_LINE(169)
			::String _g26 = xml->att->resolve(HX_CSTRING("activityIndicatorColour"));		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(169)
			_g27 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(_g26);
		}
		else{
			HX_STACK_LINE(169)
			_g27 = (int)16777215;
		}
		HX_STACK_LINE(169)
		::com::danielfreeman::madcomponents::UIActivity _g28 = ::com::danielfreeman::madcomponents::UIActivity_obj::__new(screen,(Float(width) / Float((int)2)),(Float(height) / Float((int)2)),false,_g27);		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(169)
		::com::danielfreeman::madcomponents::UI_obj::_activityIndicator = _g28;
		HX_STACK_LINE(170)
		Float _g29 = ::com::danielfreeman::madcomponents::UI_obj::get_scale();		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(170)
		Float _g30 = (Float(_g29) / Float((int)2));		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(170)
		Float _g31 = ::com::danielfreeman::madcomponents::UI_obj::_activityIndicator->set_scaleY(_g30);		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(170)
		::com::danielfreeman::madcomponents::UI_obj::_activityIndicator->set_scaleX(_g31);
		HX_STACK_LINE(171)
		if ((::com::danielfreeman::madcomponents::UI_obj::_simulated)){
			HX_STACK_LINE(172)
			::openfl::events::Event _g32 = ::openfl::events::Event_obj::__new(HX_CSTRING("dummy"),null(),null());		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(172)
			::com::danielfreeman::madcomponents::UI_obj::resize(_g32);
		}
		HX_STACK_LINE(175)
		return ::com::danielfreeman::madcomponents::UI_obj::_root;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(UI_obj,create,return )

Void UI_obj::extend( Array< ::String > tokens,Array< ::Dynamic > classes){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","extend",0xe9bfc480,"com.danielfreeman.madcomponents.UI.extend","com/danielfreeman/madcomponents/UI.hx",182,0xadc56093)
		HX_STACK_ARG(tokens,"tokens")
		HX_STACK_ARG(classes,"classes")
		HX_STACK_LINE(183)
		Array< ::String > _g = ::com::danielfreeman::madcomponents::UI_obj::_tokens->concat(tokens);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(183)
		::com::danielfreeman::madcomponents::UI_obj::_tokens = _g;
		HX_STACK_LINE(184)
		Array< ::Dynamic > _g1 = ::com::danielfreeman::madcomponents::UI_obj::_classes->concat(classes);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(184)
		::com::danielfreeman::madcomponents::UI_obj::_classes = _g1;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UI_obj,extend,(void))

int UI_obj::toColourValue( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","toColourValue",0x5dc8dfe4,"com.danielfreeman.madcomponents.UI.toColourValue","com/danielfreeman/madcomponents/UI.hx",190,0xadc56093)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(191)
	::EReg regularExpression = ::EReg_obj::__new(HX_CSTRING("\\s"),HX_CSTRING("gi"));		HX_STACK_VAR(regularExpression,"regularExpression");
	HX_STACK_LINE(192)
	regularExpression->replace(value,HX_CSTRING(""));
	HX_STACK_LINE(194)
	::String _g = value.substr((int)0,(int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(194)
	if (((_g == HX_CSTRING("#")))){
		HX_STACK_LINE(195)
		::String _g1 = value.substr((int)1,(int)6);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(195)
		::String _g2 = (HX_CSTRING("0x") + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(195)
		return ::Std_obj::parseInt(_g2);
	}
	else{
		HX_STACK_LINE(197)
		::String _g3 = value.substr((int)0,(int)1);		HX_STACK_VAR(_g3,"_g3");
		struct _Function_2_1{
			inline static bool Block( ::String &value){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UI.hx",197,0xadc56093)
				{
					HX_STACK_LINE(197)
					::String _g4 = value.substr((int)0,(int)1);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(197)
					return (_g4 <= HX_CSTRING("9"));
				}
				return null();
			}
		};
		HX_STACK_LINE(197)
		if (((  (((_g3 >= HX_CSTRING("0")))) ? bool(_Function_2_1::Block(value)) : bool(false) ))){
			HX_STACK_LINE(198)
			return ::Std_obj::parseInt(value);
		}
		else{
			HX_STACK_LINE(201)
			return (int)10066346;
		}
	}
	HX_STACK_LINE(194)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UI_obj,toColourValue,return )

Array< int > UI_obj::toColourVector( ::String value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","toColourVector",0xf9a1b4f0,"com.danielfreeman.madcomponents.UI.toColourVector","com/danielfreeman/madcomponents/UI.hx",208,0xadc56093)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(209)
	::EReg regularExpression = ::EReg_obj::__new(HX_CSTRING("\\s"),HX_CSTRING("gi"));		HX_STACK_VAR(regularExpression,"regularExpression");
	HX_STACK_LINE(210)
	regularExpression->replace(value,HX_CSTRING(""));
	HX_STACK_LINE(212)
	Array< ::String > splitValues = value.split(HX_CSTRING(","));		HX_STACK_VAR(splitValues,"splitValues");
	HX_STACK_LINE(213)
	Array< int > result = Array_obj< int >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(214)
	{
		HX_STACK_LINE(214)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(214)
		while((true)){
			HX_STACK_LINE(214)
			if ((!(((_g < splitValues->length))))){
				HX_STACK_LINE(214)
				break;
			}
			HX_STACK_LINE(214)
			::String colour = splitValues->__get(_g);		HX_STACK_VAR(colour,"colour");
			HX_STACK_LINE(214)
			++(_g);
			HX_STACK_LINE(215)
			int _g1 = ::com::danielfreeman::madcomponents::UI_obj::toColourValue(colour);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(215)
			result->push(_g1);
		}
	}
	HX_STACK_LINE(217)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UI_obj,toColourVector,return )

Void UI_obj::drawBackgroundColour( Array< int > colours,Float width,Float height,::openfl::display::Sprite screen,hx::Null< Float >  __o_padding){
Float padding = __o_padding.Default(0);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","drawBackgroundColour",0x3341d024,"com.danielfreeman.madcomponents.UI.drawBackgroundColour","com/danielfreeman/madcomponents/UI.hx",223,0xadc56093)
	HX_STACK_ARG(colours,"colours")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(screen,"screen")
	HX_STACK_ARG(padding,"padding")
{
		HX_STACK_LINE(224)
		if (((screen == null()))){
			HX_STACK_LINE(225)
			screen = ::com::danielfreeman::madcomponents::UI_obj::_root;
		}
		HX_STACK_LINE(227)
		if (((bool((bool((screen == ::com::danielfreeman::madcomponents::UI_obj::_root)) && bool((::com::danielfreeman::madcomponents::UI_obj::_stageColours != null())))) && bool((::com::danielfreeman::madcomponents::UI_obj::_stageColours->length > (int)0))))){
			HX_STACK_LINE(228)
			colours = ::com::danielfreeman::madcomponents::UI_obj::_stageColours;
		}
		HX_STACK_LINE(230)
		screen->get_graphics()->clear();
		HX_STACK_LINE(231)
		if (((colours->length == (int)1))){
			HX_STACK_LINE(232)
			screen->get_graphics()->beginFill(colours->__get((int)0),null());
		}
		else{
			HX_STACK_LINE(234)
			if (((colours->length > (int)1))){
				HX_STACK_LINE(235)
				::openfl::geom::Matrix matr = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
				struct _Function_3_1{
					inline static Float Block( Array< int > &colours){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UI.hx",236,0xadc56093)
						{
							HX_STACK_LINE(236)
							int _int = colours->__get((int)2);		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(236)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static Float Block( Array< int > &colours){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UI.hx",236,0xadc56093)
						{
							HX_STACK_LINE(236)
							int _int = colours->__get((int)2);		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(236)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static Float Block( Array< int > &colours){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UI.hx",236,0xadc56093)
						{
							HX_STACK_LINE(236)
							int _int = colours->__get((int)3);		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(236)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(236)
				matr->createGradientBox((  (((colours->length > (int)2))) ? Float(_Function_3_1::Block(colours)) : Float(width) ),(  (((colours->length > (int)2))) ? Float(_Function_3_2::Block(colours)) : Float((height + ((int)2 * padding))) ),(  (((colours->length > (int)3))) ? Float((Float((_Function_3_3::Block(colours) * ::Math_obj::PI)) / Float((int)180))) : Float((Float(::Math_obj::PI) / Float((int)2))) ),(int)0,-(padding));
				HX_STACK_LINE(237)
				screen->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,Dynamic( Array_obj<Dynamic>::__new().Add(colours->__get((int)0)).Add(colours->__get((int)1))),Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(1.0)),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)255)),matr,::openfl::display::SpreadMethod_obj::REPEAT,null(),null());
			}
			else{
				HX_STACK_LINE(240)
				screen->get_graphics()->beginFill((int)0,(int)0);
			}
		}
		HX_STACK_LINE(242)
		screen->get_graphics()->drawRect(-(padding),-(padding),(width + ((int)2 * padding)),(height + ((int)2 * padding)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(UI_obj,drawBackgroundColour,(void))

Float UI_obj::get_scale( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","get_scale",0x3bafe3fb,"com.danielfreeman.madcomponents.UI.get_scale","com/danielfreeman/madcomponents/UI.hx",248,0xadc56093)
	HX_STACK_LINE(248)
	return ::com::danielfreeman::madcomponents::UI_obj::_scale;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(UI_obj,get_scale,return )

::openfl::display::DisplayObject UI_obj::containers( ::openfl::display::Sprite screen,::MadXML xml,::com::danielfreeman::madcomponents::Attributes attributes){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","containers",0x971d61b8,"com.danielfreeman.madcomponents.UI.containers","com/danielfreeman/madcomponents/UI.hx",255,0xadc56093)
	HX_STACK_ARG(screen,"screen")
	HX_STACK_ARG(xml,"xml")
	HX_STACK_ARG(attributes,"attributes")
	HX_STACK_LINE(256)
	::String _g = xml->get_name();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(256)
	int idx = ::Lambda_obj::indexOf(::com::danielfreeman::madcomponents::UI_obj::_tokens,_g);		HX_STACK_VAR(idx,"idx");
	HX_STACK_LINE(257)
	if (((idx >= (int)0))){
		HX_STACK_LINE(258)
		attributes->parse(xml);
		HX_STACK_LINE(259)
		::openfl::display::DisplayObject result = ::Type_obj::createInstance(::com::danielfreeman::madcomponents::UI_obj::_classes->__get(idx).StaticCast< ::Class >(),Dynamic( Array_obj<Dynamic>::__new().Add(screen).Add(xml).Add(attributes)));		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(260)
		result->set_x(attributes->x);
		HX_STACK_LINE(261)
		result->set_y(attributes->y);
		HX_STACK_LINE(262)
		if ((xml->has->resolve(HX_CSTRING("id")))){
			HX_STACK_LINE(263)
			::String _g1 = xml->att->resolve(HX_CSTRING("id"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(263)
			result->set_name(_g1);
		}
		HX_STACK_LINE(265)
		return result;
	}
	else{
		HX_STACK_LINE(268)
		return null();
	}
	HX_STACK_LINE(257)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(UI_obj,containers,return )

bool UI_obj::isContainer( ::String name){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","isContainer",0x255fdf91,"com.danielfreeman.madcomponents.UI.isContainer","com/danielfreeman/madcomponents/UI.hx",275,0xadc56093)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(276)
	int _g = ::Lambda_obj::indexOf(::com::danielfreeman::madcomponents::UI_obj::_tokens,name);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(276)
	return (_g >= (int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UI_obj,isContainer,return )

bool UI_obj::isForm( ::String name){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","isForm",0x83cc18f4,"com.danielfreeman.madcomponents.UI.isForm","com/danielfreeman/madcomponents/UI.hx",283,0xadc56093)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(283)
	return (bool((bool((bool((bool((bool((bool((bool((name == HX_CSTRING("frame"))) || bool((name == HX_CSTRING("horizontal"))))) || bool((name == HX_CSTRING("vertical"))))) || bool((name == HX_CSTRING("columns"))))) || bool((name == HX_CSTRING("rows"))))) || bool((name == HX_CSTRING("group"))))) || bool((name == HX_CSTRING("clickableGroup"))))) || bool((name == HX_CSTRING("table"))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UI_obj,isForm,return )

::openfl::display::Sprite UI_obj::redraw( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","redraw",0x213cd7dd,"com.danielfreeman.madcomponents.UI.redraw","com/danielfreeman/madcomponents/UI.hx",289,0xadc56093)
	HX_STACK_LINE(290)
	::MadXML _g = (hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(::com::danielfreeman::madcomponents::UI_obj::_root))->get_xml();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(290)
	return ::com::danielfreeman::madcomponents::UI_obj::create(::com::danielfreeman::madcomponents::UI_obj::_screen,_g,null(),null());
	HX_STACK_LINE(291)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(UI_obj,redraw,return )

::com::danielfreeman::madcomponents::Attributes UI_obj::get_attributes( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","get_attributes",0x71d839c6,"com.danielfreeman.madcomponents.UI.get_attributes","com/danielfreeman/madcomponents/UI.hx",296,0xadc56093)
	HX_STACK_LINE(296)
	return ::com::danielfreeman::madcomponents::UI_obj::_attributes;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(UI_obj,get_attributes,return )

Void UI_obj::resize( ::openfl::events::Event event){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","resize",0x2b204c9a,"com.danielfreeman.madcomponents.UI.resize","com/danielfreeman/madcomponents/UI.hx",302,0xadc56093)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(303)
		int _g = ::com::danielfreeman::madcomponents::UI_obj::_screen->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(303)
		int _g1 = ::com::danielfreeman::madcomponents::UI_obj::_screen->get_stage()->get_stageHeight();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(303)
		::com::danielfreeman::madcomponents::UI_obj::layout(_g,_g1);
		HX_STACK_LINE(304)
		::openfl::events::Event _g2 = ::openfl::events::Event_obj::__new(HX_CSTRING("resized"),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(304)
		::com::danielfreeman::madcomponents::UI_obj::_screen->dispatchEvent(_g2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UI_obj,resize,(void))

Void UI_obj::layout( hx::Null< Float >  __o_width,hx::Null< Float >  __o_height){
Float width = __o_width.Default(-1);
Float height = __o_height.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","layout",0x7b5da150,"com.danielfreeman.madcomponents.UI.layout","com/danielfreeman/madcomponents/UI.hx",310,0xadc56093)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
{
		HX_STACK_LINE(312)
		if (((width < (int)0))){
			HX_STACK_LINE(313)
			int _g = ::com::danielfreeman::madcomponents::UI_obj::_screen->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(313)
			width = _g;
			HX_STACK_LINE(314)
			int _g1 = ::com::danielfreeman::madcomponents::UI_obj::_screen->get_stage()->get_stageHeight();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(314)
			height = _g1;
		}
		HX_STACK_LINE(316)
		::com::danielfreeman::madcomponents::UI_obj::_width = width;
		HX_STACK_LINE(316)
		::com::danielfreeman::madcomponents::UI_obj::_height = height;
		HX_STACK_LINE(317)
		::com::danielfreeman::madcomponents::Attributes _g2 = ::com::danielfreeman::madcomponents::UI_obj::newAttributes(width,height);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(317)
		::com::danielfreeman::madcomponents::UI_obj::_attributes = _g2;
		HX_STACK_LINE(318)
		::com::danielfreeman::madcomponents::UI_obj::_attributes->parse(::com::danielfreeman::madcomponents::UI_obj::_xml);
		HX_STACK_LINE(319)
		::String _g3 = ::com::danielfreeman::madcomponents::UI_obj::_xml->get_name();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(319)
		bool container = ::com::danielfreeman::madcomponents::UI_obj::isContainer(_g3);		HX_STACK_VAR(container,"container");
		HX_STACK_LINE(320)
		if (((bool((::com::danielfreeman::madcomponents::UI_obj::_root != null())) && bool(container)))){
			HX_STACK_LINE(321)
			(hx::TCast< com::danielfreeman::madcomponents::IComponentUI >::cast(::com::danielfreeman::madcomponents::UI_obj::_root))->layout(::com::danielfreeman::madcomponents::UI_obj::_attributes);
		}
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UI.hx",323,0xadc56093)
				{
					struct _Function_2_1{
						inline static bool Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UI.hx",323,0xadc56093)
							{
								HX_STACK_LINE(323)
								::String _g4 = ::com::danielfreeman::madcomponents::UI_obj::_xml->att->resolve(HX_CSTRING("border"));		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(323)
								return (_g4 == HX_CSTRING("true"));
							}
							return null();
						}
					};
					HX_STACK_LINE(323)
					return (  ((!((!(::com::danielfreeman::madcomponents::UI_obj::_xml->has->resolve(HX_CSTRING("border"))))))) ? bool(_Function_2_1::Block()) : bool(true) );
				}
				return null();
			}
		};
		HX_STACK_LINE(323)
		if (((  ((!(container))) ? bool(_Function_1_1::Block()) : bool(false) ))){
			HX_STACK_LINE(324)
			::com::danielfreeman::madcomponents::UI_obj::_attributes->x = ::com::danielfreeman::madcomponents::UI_obj::PADDING;
			HX_STACK_LINE(325)
			::com::danielfreeman::madcomponents::UI_obj::_attributes->y = ::com::danielfreeman::madcomponents::UI_obj::PADDING;
			HX_STACK_LINE(326)
			hx::SubEq(::com::danielfreeman::madcomponents::UI_obj::_attributes->width,((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING));
			HX_STACK_LINE(327)
			hx::SubEq(::com::danielfreeman::madcomponents::UI_obj::_attributes->height,((int)2 * ::com::danielfreeman::madcomponents::UI_obj::PADDING));
			HX_STACK_LINE(328)
			::com::danielfreeman::madcomponents::UI_obj::_attributes->set_hasBorder(true);
		}
		HX_STACK_LINE(330)
		if (((bool(!(container)) && bool((::com::danielfreeman::madcomponents::UI_obj::_root != null()))))){
			HX_STACK_LINE(331)
			(hx::TCast< com::danielfreeman::madcomponents::UIForm >::cast(::com::danielfreeman::madcomponents::UI_obj::_root))->layout(::com::danielfreeman::madcomponents::UI_obj::_attributes);
		}
		HX_STACK_LINE(333)
		if (((  (((::com::danielfreeman::madcomponents::UI_obj::_root != null()))) ? bool(!(::com::danielfreeman::madcomponents::UI_obj::_root->get_mouseEnabled())) : bool(false) ))){
			HX_STACK_LINE(334)
			::com::danielfreeman::madcomponents::UI_obj::dimUI();
		}
		HX_STACK_LINE(336)
		::com::danielfreeman::madcomponents::UI_obj::drawStageBackground();
		HX_STACK_LINE(337)
		::com::danielfreeman::madcomponents::UI_obj::centrePopUps();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UI_obj,layout,(void))

Void UI_obj::drawStageBackground( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","drawStageBackground",0xd613fa42,"com.danielfreeman.madcomponents.UI.drawStageBackground","com/danielfreeman/madcomponents/UI.hx",341,0xadc56093)
		HX_STACK_LINE(342)
		::String _g = ::com::danielfreeman::madcomponents::UI_obj::_xml->get_name();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(342)
		if ((!(::com::danielfreeman::madcomponents::UI_obj::isForm(_g)))){
			HX_STACK_LINE(343)
			Array< int > _g1 = ::com::danielfreeman::madcomponents::UI_obj::_attributes->get_backgroundColours();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(343)
			::com::danielfreeman::madcomponents::UI_obj::drawBackgroundColour(_g1,::com::danielfreeman::madcomponents::UI_obj::_width,::com::danielfreeman::madcomponents::UI_obj::_height,null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(UI_obj,drawStageBackground,(void))

::com::danielfreeman::madcomponents::Attributes UI_obj::newAttributes( Float width,Float height){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","newAttributes",0x5f360371,"com.danielfreeman.madcomponents.UI.newAttributes","com/danielfreeman/madcomponents/UI.hx",348,0xadc56093)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(349)
	if (((::com::danielfreeman::madcomponents::UI_obj::DEBUG_SCALE > 1.0))){
		HX_STACK_LINE(350)
		::com::danielfreeman::madcomponents::UI_obj::_scale = ::com::danielfreeman::madcomponents::UI_obj::DEBUG_SCALE;
		HX_STACK_LINE(351)
		hx::DivEq(width,::com::danielfreeman::madcomponents::UI_obj::_scale);
		HX_STACK_LINE(352)
		hx::DivEq(height,::com::danielfreeman::madcomponents::UI_obj::_scale);
	}
	else{
		struct _Function_2_1{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/danielfreeman/madcomponents/UI.hx",354,0xadc56093)
				{
					HX_STACK_LINE(354)
					Float _g = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(354)
					return (_g > ::com::danielfreeman::madcomponents::UI_obj::_dpi);
				}
				return null();
			}
		};
		HX_STACK_LINE(354)
		if (((  ((::com::danielfreeman::madcomponents::UI_obj::_autoScale)) ? bool(_Function_2_1::Block()) : bool(false) ))){
			HX_STACK_LINE(355)
			Float _g1 = ::openfl::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(355)
			Float _g2 = ((int)4 * _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(355)
			Float _g3 = (Float(_g2) / Float(::com::danielfreeman::madcomponents::UI_obj::_dpi));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(355)
			int _g4 = ::Math_obj::round(_g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(355)
			Float _g5 = (Float(_g4) / Float((int)4));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(355)
			::com::danielfreeman::madcomponents::UI_obj::_scale = _g5;
			HX_STACK_LINE(356)
			hx::DivEq(width,::com::danielfreeman::madcomponents::UI_obj::_scale);
			HX_STACK_LINE(357)
			hx::DivEq(height,::com::danielfreeman::madcomponents::UI_obj::_scale);
		}
	}
	HX_STACK_LINE(359)
	return ::com::danielfreeman::madcomponents::Attributes_obj::__new((int)0,(int)0,width,height);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UI_obj,newAttributes,return )

::openfl::display::DisplayObject UI_obj::findViewById( ::String id,hx::Null< int >  __o_row,hx::Null< int >  __o_group){
int row = __o_row.Default(-1);
int group = __o_group.Default(-1);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","findViewById",0x62944f16,"com.danielfreeman.madcomponents.UI.findViewById","com/danielfreeman/madcomponents/UI.hx",366,0xadc56093)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(group,"group")
{
		HX_STACK_LINE(367)
		::String _g = ::com::danielfreeman::madcomponents::UI_obj::_root->get_name();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(367)
		if (((id == _g))){
			HX_STACK_LINE(368)
			return ::com::danielfreeman::madcomponents::UI_obj::_root;
		}
		else{
			HX_STACK_LINE(370)
			return (hx::TCast< com::danielfreeman::madcomponents::IContainerUI >::cast(::com::danielfreeman::madcomponents::UI_obj::_root))->findViewById(id,row,group);
		}
		HX_STACK_LINE(367)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(UI_obj,findViewById,return )

::com::danielfreeman::madcomponents::UIWindow UI_obj::createPopUp( ::MadXML xml,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,hx::Null< Float >  __o_curve,hx::Null< bool >  __o_centre){
Float width = __o_width.Default(-1);
Float height = __o_height.Default(-1);
Float curve = __o_curve.Default(10.0);
bool centre = __o_centre.Default(true);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","createPopUp",0x777bd94a,"com.danielfreeman.madcomponents.UI.createPopUp","com/danielfreeman/madcomponents/UI.hx",376,0xadc56093)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(curve,"curve")
	HX_STACK_ARG(centre,"centre")
{
		HX_STACK_LINE(377)
		if (((width < (int)0))){
			HX_STACK_LINE(378)
			width = (0.8 * ::com::danielfreeman::madcomponents::UI_obj::_attributes->width);
		}
		HX_STACK_LINE(380)
		if (((height < (int)0))){
			HX_STACK_LINE(381)
			height = (0.8 * ::com::danielfreeman::madcomponents::UI_obj::_attributes->height);
		}
		HX_STACK_LINE(383)
		::com::danielfreeman::madcomponents::Attributes attributes = ::com::danielfreeman::madcomponents::Attributes_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(attributes,"attributes");
		HX_STACK_LINE(384)
		attributes->parse(xml);
		HX_STACK_LINE(385)
		::com::danielfreeman::madcomponents::UIWindow window = ::com::danielfreeman::madcomponents::UIWindow_obj::__new(::com::danielfreeman::madcomponents::UI_obj::_windowLayer,xml,attributes,curve,centre);		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(386)
		Float _g = ::com::danielfreeman::madcomponents::UI_obj::_root->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(386)
		Float _g1 = (_g + ::com::danielfreeman::madcomponents::UI_obj::_attributes->x);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(386)
		Float _g2 = (_g1 + (Float(((::com::danielfreeman::madcomponents::UI_obj::_attributes->width - width))) / Float((int)2)));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(386)
		window->set_x(_g2);
		HX_STACK_LINE(387)
		Float _g3 = ::com::danielfreeman::madcomponents::UI_obj::_root->get_y();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(387)
		Float _g4 = (_g3 + ::com::danielfreeman::madcomponents::UI_obj::_attributes->y);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(387)
		Float _g5 = (_g4 + (Float(((::com::danielfreeman::madcomponents::UI_obj::_attributes->height - height))) / Float((int)2)));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(387)
		window->set_y(_g5);
		HX_STACK_LINE(388)
		(::com::danielfreeman::madcomponents::UI_obj::_popUps)++;
		HX_STACK_LINE(389)
		::com::danielfreeman::madcomponents::UI_obj::dimUI();
		HX_STACK_LINE(390)
		return window;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(UI_obj,createPopUp,return )

Void UI_obj::removePopUp( ::com::danielfreeman::madcomponents::UIWindow window){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","removePopUp",0x4c347f02,"com.danielfreeman.madcomponents.UI.removePopUp","com/danielfreeman/madcomponents/UI.hx",397,0xadc56093)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(397)
		if ((::com::danielfreeman::madcomponents::UI_obj::_windowLayer->contains(window))){
			HX_STACK_LINE(398)
			::com::danielfreeman::madcomponents::UI_obj::hidePopUp(window);
			HX_STACK_LINE(399)
			window->destructor();
			HX_STACK_LINE(400)
			::com::danielfreeman::madcomponents::UI_obj::_windowLayer->removeChild(window);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UI_obj,removePopUp,(void))

Void UI_obj::showPopUp( ::com::danielfreeman::madcomponents::UIWindow window){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","showPopUp",0x74310d29,"com.danielfreeman.madcomponents.UI.showPopUp","com/danielfreeman/madcomponents/UI.hx",407,0xadc56093)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(408)
		if ((window->get_isVisible())){
			HX_STACK_LINE(408)
			return null();
		}
		HX_STACK_LINE(409)
		window->set_isVisible(true);
		HX_STACK_LINE(410)
		(::com::danielfreeman::madcomponents::UI_obj::_popUps)++;
		HX_STACK_LINE(411)
		::com::danielfreeman::madcomponents::UI_obj::dimUI();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UI_obj,showPopUp,(void))

Void UI_obj::hidePopUp( ::com::danielfreeman::madcomponents::UIWindow window){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","hidePopUp",0xa12b6344,"com.danielfreeman.madcomponents.UI.hidePopUp","com/danielfreeman/madcomponents/UI.hx",417,0xadc56093)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(418)
		if ((!(window->get_isVisible()))){
			HX_STACK_LINE(419)
			return null();
		}
		HX_STACK_LINE(421)
		window->set_isVisible(false);
		HX_STACK_LINE(422)
		(::com::danielfreeman::madcomponents::UI_obj::_popUps)--;
		HX_STACK_LINE(423)
		if (((::com::danielfreeman::madcomponents::UI_obj::_popUps <= (int)0))){
			HX_STACK_LINE(424)
			::com::danielfreeman::madcomponents::UI_obj::unDimUI();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UI_obj,hidePopUp,(void))

Void UI_obj::showActivityIndicator( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","showActivityIndicator",0x0a555e5d,"com.danielfreeman.madcomponents.UI.showActivityIndicator","com/danielfreeman/madcomponents/UI.hx",432,0xadc56093)
		HX_STACK_LINE(432)
		::com::danielfreeman::madcomponents::UI_obj::_activityIndicator->set_isVisible(true);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(UI_obj,showActivityIndicator,(void))

Void UI_obj::hideActivityIndicator( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","hideActivityIndicator",0xcbc5f0f8,"com.danielfreeman.madcomponents.UI.hideActivityIndicator","com/danielfreeman/madcomponents/UI.hx",439,0xadc56093)
		HX_STACK_LINE(439)
		::com::danielfreeman::madcomponents::UI_obj::_activityIndicator->set_isVisible(false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(UI_obj,hideActivityIndicator,(void))

::openfl::display::Sprite UI_obj::get_windowLayer( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","get_windowLayer",0x9feb57f2,"com.danielfreeman.madcomponents.UI.get_windowLayer","com/danielfreeman/madcomponents/UI.hx",446,0xadc56093)
	HX_STACK_LINE(446)
	return ::com::danielfreeman::madcomponents::UI_obj::_windowLayer;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(UI_obj,get_windowLayer,return )

::openfl::display::Sprite UI_obj::get_uiLayer( ){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","get_uiLayer",0x0d1c2e8e,"com.danielfreeman.madcomponents.UI.get_uiLayer","com/danielfreeman/madcomponents/UI.hx",453,0xadc56093)
	HX_STACK_LINE(453)
	return ::com::danielfreeman::madcomponents::UI_obj::_root;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(UI_obj,get_uiLayer,return )

Void UI_obj::centrePopUps( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","centrePopUps",0x81baf348,"com.danielfreeman.madcomponents.UI.centrePopUps","com/danielfreeman/madcomponents/UI.hx",459,0xadc56093)
		HX_STACK_LINE(460)
		{
			HX_STACK_LINE(460)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(460)
			int _g = ::com::danielfreeman::madcomponents::UI_obj::_windowLayer->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(460)
			while((true)){
				HX_STACK_LINE(460)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(460)
					break;
				}
				HX_STACK_LINE(460)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(461)
				::openfl::display::DisplayObject window = ::com::danielfreeman::madcomponents::UI_obj::_windowLayer->getChildAt(i);		HX_STACK_VAR(window,"window");
				HX_STACK_LINE(462)
				if (((  ((::Std_obj::is(window,hx::ClassOf< ::com::danielfreeman::madcomponents::UIWindow >()))) ? bool((hx::TCast< com::danielfreeman::madcomponents::UIWindow >::cast(window))->get_centred()) : bool(false) ))){
					HX_STACK_LINE(463)
					window->set_x((::com::danielfreeman::madcomponents::UI_obj::_attributes->x + (Float(((::com::danielfreeman::madcomponents::UI_obj::_attributes->width - (hx::TCast< com::danielfreeman::madcomponents::UIWindow >::cast(window))->get_attributes()->width))) / Float((int)2))));
					HX_STACK_LINE(464)
					window->set_y((::com::danielfreeman::madcomponents::UI_obj::_attributes->y + (Float(((::com::danielfreeman::madcomponents::UI_obj::_attributes->height - (hx::TCast< com::danielfreeman::madcomponents::UIWindow >::cast(window))->get_attributes()->height))) / Float((int)2))));
				}
			}
		}
		HX_STACK_LINE(467)
		::com::danielfreeman::madcomponents::UI_obj::_activityIndicator->set_x((::com::danielfreeman::madcomponents::UI_obj::_scale * ((::com::danielfreeman::madcomponents::UI_obj::_attributes->x + (Float(::com::danielfreeman::madcomponents::UI_obj::_attributes->width) / Float((int)2))))));
		HX_STACK_LINE(468)
		::com::danielfreeman::madcomponents::UI_obj::_activityIndicator->set_y((::com::danielfreeman::madcomponents::UI_obj::_scale * ((::com::danielfreeman::madcomponents::UI_obj::_attributes->y + (Float(::com::danielfreeman::madcomponents::UI_obj::_attributes->height) / Float((int)2))))));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(UI_obj,centrePopUps,(void))

Void UI_obj::dimUI( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","dimUI",0x0c770db6,"com.danielfreeman.madcomponents.UI.dimUI","com/danielfreeman/madcomponents/UI.hx",474,0xadc56093)
		HX_STACK_LINE(475)
		bool _g = ::com::danielfreeman::madcomponents::UI_obj::_root->set_mouseChildren(false);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(475)
		::com::danielfreeman::madcomponents::UI_obj::_root->set_mouseEnabled(_g);
		HX_STACK_LINE(476)
		::com::danielfreeman::madcomponents::UI_obj::_windowLayer->get_graphics()->clear();
		HX_STACK_LINE(477)
		::com::danielfreeman::madcomponents::UI_obj::_windowLayer->get_graphics()->beginFill((int)0,0.4);
		HX_STACK_LINE(478)
		int _g1 = ::com::danielfreeman::madcomponents::UI_obj::_screen->get_stage()->get_stageWidth();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(478)
		int _g2 = ::com::danielfreeman::madcomponents::UI_obj::_screen->get_stage()->get_stageHeight();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(478)
		::com::danielfreeman::madcomponents::UI_obj::_windowLayer->get_graphics()->drawRect((int)0,(int)0,_g1,_g2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(UI_obj,dimUI,(void))

Void UI_obj::unDimUI( ){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","unDimUI",0x973a2f1d,"com.danielfreeman.madcomponents.UI.unDimUI","com/danielfreeman/madcomponents/UI.hx",484,0xadc56093)
		HX_STACK_LINE(485)
		bool _g = ::com::danielfreeman::madcomponents::UI_obj::_root->set_mouseChildren(true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(485)
		::com::danielfreeman::madcomponents::UI_obj::_root->set_mouseEnabled(_g);
		HX_STACK_LINE(486)
		::com::danielfreeman::madcomponents::UI_obj::_windowLayer->get_graphics()->clear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(UI_obj,unDimUI,(void))

Void UI_obj::clear( ::openfl::display::Sprite item){
{
		HX_STACK_FRAME("com.danielfreeman.madcomponents.UI","clear",0x7b0615a7,"com.danielfreeman.madcomponents.UI.clear","com/danielfreeman/madcomponents/UI.hx",492,0xadc56093)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(493)
		if (((item == null()))){
			HX_STACK_LINE(494)
			item = ::com::danielfreeman::madcomponents::UI_obj::_root;
		}
		HX_STACK_LINE(496)
		int _g = item->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(496)
		int i = (_g - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(497)
		while((true)){
			HX_STACK_LINE(497)
			if ((!(((i >= (int)0))))){
				HX_STACK_LINE(497)
				break;
			}
			HX_STACK_LINE(498)
			::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(498)
			child = hx::TCast< openfl::display::DisplayObject >::cast(item->getChildAt(i));
			HX_STACK_LINE(499)
			if ((::Std_obj::is(child,hx::ClassOf< ::com::danielfreeman::madcomponents::IComponentUI >()))){
				HX_STACK_LINE(500)
				(hx::TCast< com::danielfreeman::madcomponents::IComponentUI >::cast(child))->destructor();
			}
			HX_STACK_LINE(502)
			item->removeChildAt(i);
			HX_STACK_LINE(503)
			(i)--;
		}
		HX_STACK_LINE(505)
		if (((bool((item == ::com::danielfreeman::madcomponents::UI_obj::_root)) && bool((::com::danielfreeman::madcomponents::UI_obj::_root != null()))))){
			HX_STACK_LINE(506)
			::com::danielfreeman::madcomponents::UI_obj::_screen->removeChild(::com::danielfreeman::madcomponents::UI_obj::_root);
			HX_STACK_LINE(507)
			::com::danielfreeman::madcomponents::UI_obj::_root = null();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UI_obj,clear,(void))


UI_obj::UI_obj()
{
}

Dynamic UI_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_xml") ) { return _xml; }
		if (HX_FIELD_EQ(inName,"_dpi") ) { return _dpi; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return get_scale(); }
		if (HX_FIELD_EQ(inName,"_root") ) { return _root; }
		if (HX_FIELD_EQ(inName,"dimUI") ) { return dimUI_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"TOKENS") ) { return TOKENS; }
		if (HX_FIELD_EQ(inName,"_scale") ) { return _scale; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"extend") ) { return extend_dyn(); }
		if (HX_FIELD_EQ(inName,"isForm") ) { return isForm_dyn(); }
		if (HX_FIELD_EQ(inName,"redraw") ) { return redraw_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"layout") ) { return layout_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uiLayer") ) { return get_uiLayer(); }
		if (HX_FIELD_EQ(inName,"PADDING") ) { return PADDING; }
		if (HX_FIELD_EQ(inName,"CLASSES") ) { return CLASSES; }
		if (HX_FIELD_EQ(inName,"_tokens") ) { return _tokens; }
		if (HX_FIELD_EQ(inName,"_screen") ) { return _screen; }
		if (HX_FIELD_EQ(inName,"_popUps") ) { return _popUps; }
		if (HX_FIELD_EQ(inName,"_maskIt") ) { return _maskIt; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"unDimUI") ) { return unDimUI_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_classes") ) { return _classes; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"showPopUp") ) { return showPopUp_dyn(); }
		if (HX_FIELD_EQ(inName,"hidePopUp") ) { return hidePopUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attributes") ) { return get_attributes(); }
		if (HX_FIELD_EQ(inName,"_autoScale") ) { return _autoScale; }
		if (HX_FIELD_EQ(inName,"_simulated") ) { return _simulated; }
		if (HX_FIELD_EQ(inName,"containers") ) { return containers_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windowLayer") ) { return get_windowLayer(); }
		if (HX_FIELD_EQ(inName,"DEBUG_SCALE") ) { return DEBUG_SCALE; }
		if (HX_FIELD_EQ(inName,"_autoResize") ) { return _autoResize; }
		if (HX_FIELD_EQ(inName,"_attributes") ) { return _attributes; }
		if (HX_FIELD_EQ(inName,"isContainer") ) { return isContainer_dyn(); }
		if (HX_FIELD_EQ(inName,"createPopUp") ) { return createPopUp_dyn(); }
		if (HX_FIELD_EQ(inName,"removePopUp") ) { return removePopUp_dyn(); }
		if (HX_FIELD_EQ(inName,"get_uiLayer") ) { return get_uiLayer_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_windowLayer") ) { return _windowLayer; }
		if (HX_FIELD_EQ(inName,"findViewById") ) { return findViewById_dyn(); }
		if (HX_FIELD_EQ(inName,"centrePopUps") ) { return centrePopUps_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stageColours") ) { return _stageColours; }
		if (HX_FIELD_EQ(inName,"toColourValue") ) { return toColourValue_dyn(); }
		if (HX_FIELD_EQ(inName,"newAttributes") ) { return newAttributes_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"toColourVector") ) { return toColourVector_dyn(); }
		if (HX_FIELD_EQ(inName,"get_attributes") ) { return get_attributes_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_windowLayer") ) { return get_windowLayer_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SIMULATION_RESIZE") ) { return SIMULATION_RESIZE; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_activityIndicator") ) { return _activityIndicator; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"drawStageBackground") ) { return drawStageBackground_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"drawBackgroundColour") ) { return drawBackgroundColour_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"showActivityIndicator") ) { return showActivityIndicator_dyn(); }
		if (HX_FIELD_EQ(inName,"hideActivityIndicator") ) { return hideActivityIndicator_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UI_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_xml") ) { _xml=inValue.Cast< ::MadXML >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dpi") ) { _dpi=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_root") ) { _root=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"TOKENS") ) { TOKENS=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scale") ) { _scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"PADDING") ) { PADDING=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CLASSES") ) { CLASSES=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tokens") ) { _tokens=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_screen") ) { _screen=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_popUps") ) { _popUps=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maskIt") ) { _maskIt=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_classes") ) { _classes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_autoScale") ) { _autoScale=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_simulated") ) { _simulated=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"DEBUG_SCALE") ) { DEBUG_SCALE=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_autoResize") ) { _autoResize=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_attributes") ) { _attributes=inValue.Cast< ::com::danielfreeman::madcomponents::Attributes >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_windowLayer") ) { _windowLayer=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stageColours") ) { _stageColours=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SIMULATION_RESIZE") ) { SIMULATION_RESIZE=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_activityIndicator") ) { _activityIndicator=inValue.Cast< ::com::danielfreeman::madcomponents::UIActivity >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UI_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("RESIZED"),
	HX_CSTRING("PADDING"),
	HX_CSTRING("SIMULATION_RESIZE"),
	HX_CSTRING("DPI"),
	HX_CSTRING("DIM_ALPHA"),
	HX_CSTRING("WIDTH"),
	HX_CSTRING("HEIGHT"),
	HX_CSTRING("COLOUR"),
	HX_CSTRING("TOKENS"),
	HX_CSTRING("CLASSES"),
	HX_CSTRING("DEBUG_SCALE"),
	HX_CSTRING("_tokens"),
	HX_CSTRING("_classes"),
	HX_CSTRING("_screen"),
	HX_CSTRING("_root"),
	HX_CSTRING("_windowLayer"),
	HX_CSTRING("_xml"),
	HX_CSTRING("_autoScale"),
	HX_CSTRING("_autoResize"),
	HX_CSTRING("_scale"),
	HX_CSTRING("_popUps"),
	HX_CSTRING("_attributes"),
	HX_CSTRING("_simulated"),
	HX_CSTRING("_activityIndicator"),
	HX_CSTRING("_maskIt"),
	HX_CSTRING("_stageColours"),
	HX_CSTRING("_dpi"),
	HX_CSTRING("_width"),
	HX_CSTRING("_height"),
	HX_CSTRING("create"),
	HX_CSTRING("extend"),
	HX_CSTRING("toColourValue"),
	HX_CSTRING("toColourVector"),
	HX_CSTRING("drawBackgroundColour"),
	HX_CSTRING("get_scale"),
	HX_CSTRING("containers"),
	HX_CSTRING("isContainer"),
	HX_CSTRING("isForm"),
	HX_CSTRING("redraw"),
	HX_CSTRING("get_attributes"),
	HX_CSTRING("resize"),
	HX_CSTRING("layout"),
	HX_CSTRING("drawStageBackground"),
	HX_CSTRING("newAttributes"),
	HX_CSTRING("findViewById"),
	HX_CSTRING("createPopUp"),
	HX_CSTRING("removePopUp"),
	HX_CSTRING("showPopUp"),
	HX_CSTRING("hidePopUp"),
	HX_CSTRING("showActivityIndicator"),
	HX_CSTRING("hideActivityIndicator"),
	HX_CSTRING("get_windowLayer"),
	HX_CSTRING("get_uiLayer"),
	HX_CSTRING("centrePopUps"),
	HX_CSTRING("dimUI"),
	HX_CSTRING("unDimUI"),
	HX_CSTRING("clear"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UI_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UI_obj::RESIZED,"RESIZED");
	HX_MARK_MEMBER_NAME(UI_obj::PADDING,"PADDING");
	HX_MARK_MEMBER_NAME(UI_obj::SIMULATION_RESIZE,"SIMULATION_RESIZE");
	HX_MARK_MEMBER_NAME(UI_obj::DPI,"DPI");
	HX_MARK_MEMBER_NAME(UI_obj::DIM_ALPHA,"DIM_ALPHA");
	HX_MARK_MEMBER_NAME(UI_obj::WIDTH,"WIDTH");
	HX_MARK_MEMBER_NAME(UI_obj::HEIGHT,"HEIGHT");
	HX_MARK_MEMBER_NAME(UI_obj::COLOUR,"COLOUR");
	HX_MARK_MEMBER_NAME(UI_obj::TOKENS,"TOKENS");
	HX_MARK_MEMBER_NAME(UI_obj::CLASSES,"CLASSES");
	HX_MARK_MEMBER_NAME(UI_obj::DEBUG_SCALE,"DEBUG_SCALE");
	HX_MARK_MEMBER_NAME(UI_obj::_tokens,"_tokens");
	HX_MARK_MEMBER_NAME(UI_obj::_classes,"_classes");
	HX_MARK_MEMBER_NAME(UI_obj::_screen,"_screen");
	HX_MARK_MEMBER_NAME(UI_obj::_root,"_root");
	HX_MARK_MEMBER_NAME(UI_obj::_windowLayer,"_windowLayer");
	HX_MARK_MEMBER_NAME(UI_obj::_xml,"_xml");
	HX_MARK_MEMBER_NAME(UI_obj::_autoScale,"_autoScale");
	HX_MARK_MEMBER_NAME(UI_obj::_autoResize,"_autoResize");
	HX_MARK_MEMBER_NAME(UI_obj::_scale,"_scale");
	HX_MARK_MEMBER_NAME(UI_obj::_popUps,"_popUps");
	HX_MARK_MEMBER_NAME(UI_obj::_attributes,"_attributes");
	HX_MARK_MEMBER_NAME(UI_obj::_simulated,"_simulated");
	HX_MARK_MEMBER_NAME(UI_obj::_activityIndicator,"_activityIndicator");
	HX_MARK_MEMBER_NAME(UI_obj::_maskIt,"_maskIt");
	HX_MARK_MEMBER_NAME(UI_obj::_stageColours,"_stageColours");
	HX_MARK_MEMBER_NAME(UI_obj::_dpi,"_dpi");
	HX_MARK_MEMBER_NAME(UI_obj::_width,"_width");
	HX_MARK_MEMBER_NAME(UI_obj::_height,"_height");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UI_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UI_obj::RESIZED,"RESIZED");
	HX_VISIT_MEMBER_NAME(UI_obj::PADDING,"PADDING");
	HX_VISIT_MEMBER_NAME(UI_obj::SIMULATION_RESIZE,"SIMULATION_RESIZE");
	HX_VISIT_MEMBER_NAME(UI_obj::DPI,"DPI");
	HX_VISIT_MEMBER_NAME(UI_obj::DIM_ALPHA,"DIM_ALPHA");
	HX_VISIT_MEMBER_NAME(UI_obj::WIDTH,"WIDTH");
	HX_VISIT_MEMBER_NAME(UI_obj::HEIGHT,"HEIGHT");
	HX_VISIT_MEMBER_NAME(UI_obj::COLOUR,"COLOUR");
	HX_VISIT_MEMBER_NAME(UI_obj::TOKENS,"TOKENS");
	HX_VISIT_MEMBER_NAME(UI_obj::CLASSES,"CLASSES");
	HX_VISIT_MEMBER_NAME(UI_obj::DEBUG_SCALE,"DEBUG_SCALE");
	HX_VISIT_MEMBER_NAME(UI_obj::_tokens,"_tokens");
	HX_VISIT_MEMBER_NAME(UI_obj::_classes,"_classes");
	HX_VISIT_MEMBER_NAME(UI_obj::_screen,"_screen");
	HX_VISIT_MEMBER_NAME(UI_obj::_root,"_root");
	HX_VISIT_MEMBER_NAME(UI_obj::_windowLayer,"_windowLayer");
	HX_VISIT_MEMBER_NAME(UI_obj::_xml,"_xml");
	HX_VISIT_MEMBER_NAME(UI_obj::_autoScale,"_autoScale");
	HX_VISIT_MEMBER_NAME(UI_obj::_autoResize,"_autoResize");
	HX_VISIT_MEMBER_NAME(UI_obj::_scale,"_scale");
	HX_VISIT_MEMBER_NAME(UI_obj::_popUps,"_popUps");
	HX_VISIT_MEMBER_NAME(UI_obj::_attributes,"_attributes");
	HX_VISIT_MEMBER_NAME(UI_obj::_simulated,"_simulated");
	HX_VISIT_MEMBER_NAME(UI_obj::_activityIndicator,"_activityIndicator");
	HX_VISIT_MEMBER_NAME(UI_obj::_maskIt,"_maskIt");
	HX_VISIT_MEMBER_NAME(UI_obj::_stageColours,"_stageColours");
	HX_VISIT_MEMBER_NAME(UI_obj::_dpi,"_dpi");
	HX_VISIT_MEMBER_NAME(UI_obj::_width,"_width");
	HX_VISIT_MEMBER_NAME(UI_obj::_height,"_height");
};

#endif

Class UI_obj::__mClass;

void UI_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.UI"), hx::TCanCast< UI_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void UI_obj::__boot()
{
	RESIZED= HX_CSTRING("resized");
	PADDING= 10.0;
	SIMULATION_RESIZE= true;
	DPI= (int)160;
	DIM_ALPHA= 0.4;
	WIDTH= (int)300;
	HEIGHT= (int)454;
	COLOUR= (int)10066346;
	TOKENS= Array_obj< ::String >::__new().Add(HX_CSTRING("scrollVertical")).Add(HX_CSTRING("list")).Add(HX_CSTRING("groupedList")).Add(HX_CSTRING("dividedList")).Add(HX_CSTRING("pages")).Add(HX_CSTRING("tabPages")).Add(HX_CSTRING("navigation")).Add(HX_CSTRING("image")).Add(HX_CSTRING("switch")).Add(HX_CSTRING("search")).Add(HX_CSTRING("button")).Add(HX_CSTRING("label")).Add(HX_CSTRING("slider")).Add(HX_CSTRING("input")).Add(HX_CSTRING("circular")).Add(HX_CSTRING("gap")).Add(HX_CSTRING("viewFlipper")).Add(HX_CSTRING("renderer")).Add(HX_CSTRING("navigationPages")).Add(HX_CSTRING("imageLoader"));
	CLASSES= Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UIScrollVertical >()).Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UIList >()).Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UIGroupedList >()).Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UIDividedList >()).Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UIPages >()).Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UITabPages >()).Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UINavigation >()).Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UIImage >()).Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UISwitch >()).Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UISearch >()).Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UIButtonX >()).Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UILabelX >()).Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UISliderX >()).Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UIInputX >()).Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UICircular >()).Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UISpacer >()).Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UIViewFlipper >()).Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UIRenderer >()).Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UINavigationPages >()).Add(hx::ClassOf< ::com::danielfreeman::madcomponents::UIImageLoader >());
	DEBUG_SCALE= -1.0;
	_tokens= ::com::danielfreeman::madcomponents::UI_obj::TOKENS;
	_classes= ::com::danielfreeman::madcomponents::UI_obj::CLASSES;
	_autoScale= true;
	_autoResize= true;
	_scale= 1.0;
	_popUps= (int)0;
	_simulated= true;
	_maskIt= true;
	_stageColours= null();
	_dpi= (int)160;
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
