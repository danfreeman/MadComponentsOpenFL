#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_XmlType
#include <XmlType.h>
#endif
#ifndef INCLUDED_com_danielfreeman__MadXML_HasAttribAccess
#include <com/danielfreeman/_MadXML/HasAttribAccess.h>
#endif
namespace com{
namespace danielfreeman{
namespace _MadXML{

Void HasAttribAccess_obj::__construct(::Xml x)
{
HX_STACK_FRAME("com.danielfreeman._MadXML.HasAttribAccess","new",0x7192bae6,"com.danielfreeman._MadXML.HasAttribAccess.new","com/danielfreeman/MadXML.hx",50,0xb248a369)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
{
	HX_STACK_LINE(50)
	this->__x = x;
}
;
	return null();
}

//HasAttribAccess_obj::~HasAttribAccess_obj() { }

Dynamic HasAttribAccess_obj::__CreateEmpty() { return  new HasAttribAccess_obj; }
hx::ObjectPtr< HasAttribAccess_obj > HasAttribAccess_obj::__new(::Xml x)
{  hx::ObjectPtr< HasAttribAccess_obj > result = new HasAttribAccess_obj();
	result->__construct(x);
	return result;}

Dynamic HasAttribAccess_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HasAttribAccess_obj > result = new HasAttribAccess_obj();
	result->__construct(inArgs[0]);
	return result;}

bool HasAttribAccess_obj::resolve( ::String name){
	HX_STACK_FRAME("com.danielfreeman._MadXML.HasAttribAccess","resolve",0x3b0db872,"com.danielfreeman._MadXML.HasAttribAccess.resolve","com/danielfreeman/MadXML.hx",53,0xb248a369)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(54)
	if (((this->__x->nodeType == ::Xml_obj::Document))){
		HX_STACK_LINE(55)
		HX_STACK_DO_THROW((HX_CSTRING("Cannot access document attribute ") + name));
	}
	HX_STACK_LINE(56)
	return this->__x->exists(name);
}


HX_DEFINE_DYNAMIC_FUNC1(HasAttribAccess_obj,resolve,return )


HasAttribAccess_obj::HasAttribAccess_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void HasAttribAccess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HasAttribAccess);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__x,"__x");
	HX_MARK_END_CLASS();
}

void HasAttribAccess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__x,"__x");
}

Dynamic HasAttribAccess_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { return __x; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

Dynamic HasAttribAccess_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { __x=inValue.Cast< ::Xml >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void HasAttribAccess_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__x"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(HasAttribAccess_obj,__x),HX_CSTRING("__x")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__x"),
	HX_CSTRING("resolve"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HasAttribAccess_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HasAttribAccess_obj::__mClass,"__mClass");
};

#endif

Class HasAttribAccess_obj::__mClass;

void HasAttribAccess_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman._MadXML.HasAttribAccess"), hx::TCanCast< HasAttribAccess_obj> ,sStaticFields,sMemberFields,
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

void HasAttribAccess_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace _MadXML
