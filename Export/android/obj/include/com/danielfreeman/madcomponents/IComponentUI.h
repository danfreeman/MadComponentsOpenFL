#ifndef INCLUDED_com_danielfreeman_madcomponents_IComponentUI
#define INCLUDED_com_danielfreeman_madcomponents_IComponentUI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Attributes)
HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,IComponentUI)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  IComponentUI_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IComponentUI_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes)=0;
		Dynamic layout_dyn();
virtual Void destructor( )=0;
		Dynamic destructor_dyn();
};

#define DELEGATE_com_danielfreeman_madcomponents_IComponentUI \
virtual Void layout( ::com::danielfreeman::madcomponents::Attributes attributes) { return mDelegate->layout(attributes);}  \
virtual Dynamic layout_dyn() { return mDelegate->layout_dyn();}  \
virtual Void destructor( ) { return mDelegate->destructor();}  \
virtual Dynamic destructor_dyn() { return mDelegate->destructor_dyn();}  \


template<typename IMPL>
class IComponentUI_delegate_ : public IComponentUI_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IComponentUI_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_com_danielfreeman_madcomponents_IComponentUI
};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_IComponentUI */ 
