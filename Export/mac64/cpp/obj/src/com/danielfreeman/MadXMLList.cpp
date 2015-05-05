#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_danielfreeman_MadXML
#include <com/danielfreeman/MadXML.h>
#endif
#ifndef INCLUDED_com_danielfreeman_MadXMLList
#include <com/danielfreeman/MadXMLList.h>
#endif
namespace com{
namespace danielfreeman{

Void MadXMLList_obj::__construct(Array< ::Dynamic > a)
{
HX_STACK_FRAME("com.danielfreeman.MadXMLList","new",0x91cb64a3,"com.danielfreeman.MadXMLList.new","com/danielfreeman/MadXMLList.hx",7,0xed976f2b)
HX_STACK_THIS(this)
HX_STACK_ARG(a,"a")
{
	HX_STACK_LINE(8)
	Array< ::Dynamic > _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(8)
	if (((a != null()))){
		HX_STACK_LINE(8)
		_g = a;
	}
	else{
		HX_STACK_LINE(8)
		_g = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(8)
	this->l = _g;
}
;
	return null();
}

//MadXMLList_obj::~MadXMLList_obj() { }

Dynamic MadXMLList_obj::__CreateEmpty() { return  new MadXMLList_obj; }
hx::ObjectPtr< MadXMLList_obj > MadXMLList_obj::__new(Array< ::Dynamic > a)
{  hx::ObjectPtr< MadXMLList_obj > result = new MadXMLList_obj();
	result->__construct(a);
	return result;}

Dynamic MadXMLList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MadXMLList_obj > result = new MadXMLList_obj();
	result->__construct(inArgs[0]);
	return result;}

::com::danielfreeman::MadXMLList MadXMLList_obj::copy( ){
	HX_STACK_FRAME("com.danielfreeman.MadXMLList","copy",0xf8eee212,"com.danielfreeman.MadXMLList.copy","com/danielfreeman/MadXMLList.hx",14,0xed976f2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(15)
	Array< ::Dynamic > _g = this->l->slice((int)0,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(15)
	return ::com::danielfreeman::MadXMLList_obj::__new(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(MadXMLList_obj,copy,return )

::com::danielfreeman::MadXMLList MadXMLList_obj::descendants( ::String __o_name){
::String name = __o_name.Default(HX_CSTRING("*"));
	HX_STACK_FRAME("com.danielfreeman.MadXMLList","descendants",0x734eaa19,"com.danielfreeman.MadXMLList.descendants","com/danielfreeman/MadXMLList.hx",18,0xed976f2b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
{
		HX_STACK_LINE(19)
		Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(20)
		{
			HX_STACK_LINE(20)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(20)
			Array< ::Dynamic > _g1 = this->l;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(20)
			while((true)){
				HX_STACK_LINE(20)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(20)
					break;
				}
				HX_STACK_LINE(20)
				::com::danielfreeman::MadXML fx = _g1->__get(_g).StaticCast< ::com::danielfreeman::MadXML >();		HX_STACK_VAR(fx,"fx");
				HX_STACK_LINE(20)
				++(_g);
				HX_STACK_LINE(21)
				for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(fx->x->elements());  __it->hasNext(); ){
					::Xml e = __it->next();
					{
						HX_STACK_LINE(22)
						::String _g2 = e->get_nodeName();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(22)
						if (((  ((!(((_g2 == name))))) ? bool((name == HX_CSTRING("*"))) : bool(true) ))){
							HX_STACK_LINE(23)
							::com::danielfreeman::MadXML _g11 = ::com::danielfreeman::MadXML_obj::__new(e);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(23)
							a->push(_g11);
						}
						else{
							HX_STACK_LINE(25)
							::com::danielfreeman::MadXML fx2 = ::com::danielfreeman::MadXML_obj::__new(e);		HX_STACK_VAR(fx2,"fx2");
							HX_STACK_LINE(26)
							Array< ::Dynamic > _g21 = fx2->descendants(name)->getArray();		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(26)
							Array< ::Dynamic > _g3 = a->concat(_g21);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(26)
							a = _g3;
						}
					}
;
				}
			}
		}
		HX_STACK_LINE(30)
		return ::com::danielfreeman::MadXMLList_obj::__new(a);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(MadXMLList_obj,descendants,return )

::com::danielfreeman::MadXML MadXMLList_obj::get( int i){
	HX_STACK_FRAME("com.danielfreeman.MadXMLList","get",0x91c614d9,"com.danielfreeman.MadXMLList.get","com/danielfreeman/MadXMLList.hx",34,0xed976f2b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(34)
	return this->l->__get(i).StaticCast< ::com::danielfreeman::MadXML >();
}


HX_DEFINE_DYNAMIC_FUNC1(MadXMLList_obj,get,return )

Array< ::Dynamic > MadXMLList_obj::getArray( ){
	HX_STACK_FRAME("com.danielfreeman.MadXMLList","getArray",0xdfdf9600,"com.danielfreeman.MadXMLList.getArray","com/danielfreeman/MadXMLList.hx",38,0xed976f2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	return this->l;
}


HX_DEFINE_DYNAMIC_FUNC0(MadXMLList_obj,getArray,return )

Dynamic MadXMLList_obj::iterator( ){
	HX_STACK_FRAME("com.danielfreeman.MadXMLList","iterator",0xee1362cb,"com.danielfreeman.MadXMLList.iterator","com/danielfreeman/MadXMLList.hx",42,0xed976f2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	return this->l->iteratorFast< ::com::danielfreeman::MadXML >();
}


HX_DEFINE_DYNAMIC_FUNC0(MadXMLList_obj,iterator,return )

int MadXMLList_obj::length( ){
	HX_STACK_FRAME("com.danielfreeman.MadXMLList","length",0x11cdcc83,"com.danielfreeman.MadXMLList.length","com/danielfreeman/MadXMLList.hx",46,0xed976f2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	return this->l->length;
}


HX_DEFINE_DYNAMIC_FUNC0(MadXMLList_obj,length,return )

::String MadXMLList_obj::toString( ){
	HX_STACK_FRAME("com.danielfreeman.MadXMLList","toString",0x92e7e989,"com.danielfreeman.MadXMLList.toString","com/danielfreeman/MadXMLList.hx",57,0xed976f2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(59)
	bool first = true;		HX_STACK_VAR(first,"first");
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		Array< ::Dynamic > _g1 = this->l;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(60)
			::com::danielfreeman::MadXML i = _g1->__get(_g).StaticCast< ::com::danielfreeman::MadXML >();		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(60)
			++(_g);
			HX_STACK_LINE(61)
			if ((!(first))){
				HX_STACK_LINE(62)
				hx::AddEq(s,HX_CSTRING("\r\n"));
			}
			HX_STACK_LINE(63)
			first = false;
			HX_STACK_LINE(64)
			::String _g2 = i->toString();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(64)
			::String _g11 = (s + _g2);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(64)
			s = _g11;
		}
	}
	HX_STACK_LINE(66)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(MadXMLList_obj,toString,return )


MadXMLList_obj::MadXMLList_obj()
{
}

void MadXMLList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MadXMLList);
	HX_MARK_MEMBER_NAME(l,"l");
	HX_MARK_END_CLASS();
}

void MadXMLList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(l,"l");
}

Dynamic MadXMLList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"l") ) { return l; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getArray") ) { return getArray_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"descendants") ) { return descendants_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MadXMLList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"l") ) { l=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MadXMLList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("l"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MadXMLList_obj,l),HX_CSTRING("l")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("l"),
	HX_CSTRING("copy"),
	HX_CSTRING("descendants"),
	HX_CSTRING("get"),
	HX_CSTRING("getArray"),
	HX_CSTRING("iterator"),
	HX_CSTRING("length"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MadXMLList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MadXMLList_obj::__mClass,"__mClass");
};

#endif

Class MadXMLList_obj::__mClass;

void MadXMLList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman.MadXMLList"), hx::TCanCast< MadXMLList_obj> ,sStaticFields,sMemberFields,
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

void MadXMLList_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
