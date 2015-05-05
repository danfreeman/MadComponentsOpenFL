#include <hxcpp.h>

#ifndef INCLUDED_com_danielfreeman_madcomponents_Colour
#include <com/danielfreeman/madcomponents/Colour.h>
#endif
namespace com{
namespace danielfreeman{
namespace madcomponents{

Void Colour_obj::__construct()
{
HX_STACK_FRAME("com.danielfreeman.madcomponents.Colour","new",0x6479a212,"com.danielfreeman.madcomponents.Colour.new","com/danielfreeman/madcomponents/Colour.hx",34,0xa85c55fb)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Colour_obj::~Colour_obj() { }

Dynamic Colour_obj::__CreateEmpty() { return  new Colour_obj; }
hx::ObjectPtr< Colour_obj > Colour_obj::__new()
{  hx::ObjectPtr< Colour_obj > result = new Colour_obj();
	result->__construct();
	return result;}

Dynamic Colour_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Colour_obj > result = new Colour_obj();
	result->__construct();
	return result;}

int Colour_obj::limit( int n,int hi,int lo){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Colour","limit",0x8b84416d,"com.danielfreeman.madcomponents.Colour.limit","com/danielfreeman/madcomponents/Colour.hx",8,0xa85c55fb)
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(hi,"hi")
	HX_STACK_ARG(lo,"lo")
	HX_STACK_LINE(8)
	if (((n < lo))){
		HX_STACK_LINE(8)
		return lo;
	}
	else{
		HX_STACK_LINE(8)
		if (((n > hi))){
			HX_STACK_LINE(8)
			return hi;
		}
		else{
			HX_STACK_LINE(8)
			return n;
		}
	}
	HX_STACK_LINE(8)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Colour_obj,limit,return )

int Colour_obj::darken( int n,hx::Null< int >  __o_amount){
int amount = __o_amount.Default(-64);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Colour","darken",0xbd74ffed,"com.danielfreeman.madcomponents.Colour.darken","com/danielfreeman/madcomponents/Colour.hx",12,0xa85c55fb)
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(amount,"amount")
{
		HX_STACK_LINE(13)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(14)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(15)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(16)
		int tot;		HX_STACK_VAR(tot,"tot");
		HX_STACK_LINE(17)
		r = (int((int(n) >> int((int)16))) & int((int)255));
		HX_STACK_LINE(18)
		g = (int((int(n) >> int((int)8))) & int((int)255));
		HX_STACK_LINE(19)
		b = (int(n) & int((int)255));
		HX_STACK_LINE(20)
		int _g = ::com::danielfreeman::madcomponents::Colour_obj::limit((r + amount),(int)255,(int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(20)
		int _g1 = (int(_g) << int((int)16));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(20)
		int _g2 = ::com::danielfreeman::madcomponents::Colour_obj::limit((g + amount),(int)255,(int)0);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(20)
		int _g3 = (int(_g2) << int((int)8));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(20)
		int _g4 = (_g1 + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(20)
		int _g5 = ::com::danielfreeman::madcomponents::Colour_obj::limit((b + amount),(int)255,(int)0);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(20)
		return (_g4 + _g5);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Colour_obj,darken,return )

int Colour_obj::lighten( int n,hx::Null< int >  __o_amount){
int amount = __o_amount.Default(16);
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Colour","lighten",0x3118dd71,"com.danielfreeman.madcomponents.Colour.lighten","com/danielfreeman/madcomponents/Colour.hx",25,0xa85c55fb)
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(amount,"amount")
{
		HX_STACK_LINE(25)
		return ::com::danielfreeman::madcomponents::Colour_obj::darken(n,amount);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Colour_obj,lighten,return )

Float Colour_obj::power( int value){
	HX_STACK_FRAME("com.danielfreeman.madcomponents.Colour","power",0xdd1d6e37,"com.danielfreeman.madcomponents.Colour.power","com/danielfreeman/madcomponents/Colour.hx",30,0xa85c55fb)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(30)
	return (Float((((((int((int(value) >> int((int)16))) & int((int)255))) + ((int((int(value) >> int((int)8))) & int((int)255)))) + ((int(value) & int((int)255)))))) / Float(765.0));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Colour_obj,power,return )


Colour_obj::Colour_obj()
{
}

Dynamic Colour_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"limit") ) { return limit_dyn(); }
		if (HX_FIELD_EQ(inName,"power") ) { return power_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"darken") ) { return darken_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lighten") ) { return lighten_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Colour_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Colour_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("limit"),
	HX_CSTRING("darken"),
	HX_CSTRING("lighten"),
	HX_CSTRING("power"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Colour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Colour_obj::__mClass,"__mClass");
};

#endif

Class Colour_obj::__mClass;

void Colour_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.madcomponents.Colour"), hx::TCanCast< Colour_obj> ,sStaticFields,sMemberFields,
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

void Colour_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents
