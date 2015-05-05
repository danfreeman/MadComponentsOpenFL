#ifndef INCLUDED_com_danielfreeman_madcomponents_IContainerUI
#define INCLUDED_com_danielfreeman_madcomponents_IContainerUI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/danielfreeman/madcomponents/IComponentUI.h>
HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IContainerUI)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  IContainerUI_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IContainerUI_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void clear( )=0;
		Dynamic clear_dyn();
virtual ::openfl::display::DisplayObject findViewById( ::String id,hx::Null< int >  row,hx::Null< int >  group)=0;
		Dynamic findViewById_dyn();
virtual Void drawComponent( )=0;
		Dynamic drawComponent_dyn();
};

#define DELEGATE_com_danielfreeman_madcomponents_IContainerUI \
virtual Void clear( ) { return mDelegate->clear();}  \
virtual Dynamic clear_dyn() { return mDelegate->clear_dyn();}  \
virtual ::openfl::display::DisplayObject findViewById( ::String id,hx::Null< int >  row,hx::Null< int >  group) { return mDelegate->findViewById(id,row,group);}  \
virtual Dynamic findViewById_dyn() { return mDelegate->findViewById_dyn();}  \
virtual Void drawComponent( ) { return mDelegate->drawComponent();}  \
virtual Dynamic drawComponent_dyn() { return mDelegate->drawComponent_dyn();}  \


template<typename IMPL>
class IContainerUI_delegate_ : public IContainerUI_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IContainerUI_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_com_danielfreeman_madcomponents_IContainerUI
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_IContainerUI */ 
