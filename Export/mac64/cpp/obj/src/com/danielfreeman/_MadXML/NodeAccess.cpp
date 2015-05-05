#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_XmlType
#include <XmlType.h>
#endif
#ifndef INCLUDED_com_danielfreeman_MadXML
#include <com/danielfreeman/MadXML.h>
#endif
#ifndef INCLUDED_com_danielfreeman__MadXML_NodeAccess
#include <com/danielfreeman/_MadXML/NodeAccess.h>
#endif
namespace com{
namespace danielfreeman{
namespace _MadXML{

Void NodeAccess_obj::__construct(::Xml x)
{
HX_STACK_FRAME("com.danielfreeman._MadXML.NodeAccess","new",0x87125dcc,"com.danielfreeman._MadXML.NodeAccess.new","com/danielfreeman/MadXML.hx",12,0xb248a369)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
{
	HX_STACK_LINE(12)
	this->__x = x;
}
;
	return null();
}

//NodeAccess_obj::~NodeAccess_obj() { }

Dynamic NodeAccess_obj::__CreateEmpty() { return  new NodeAccess_obj; }
hx::ObjectPtr< NodeAccess_obj > NodeAccess_obj::__new(::Xml x)
{  hx::ObjectPtr< NodeAccess_obj > result = new NodeAccess_obj();
	result->__construct(x);
	return result;}

Dynamic NodeAccess_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NodeAccess_obj > result = new NodeAccess_obj();
	result->__construct(inArgs[0]);
	return result;}

::com::danielfreeman::MadXML NodeAccess_obj::resolve( ::String name){
	HX_STACK_FRAME("com.danielfreeman._MadXML.NodeAccess","resolve",0xd42fc658,"com.danielfreeman._MadXML.NodeAccess.resolve","com/danielfreeman/MadXML.hx",15,0xb248a369)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(16)
	::Xml x = this->__x->elementsNamed(name)->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(17)
	if (((x == null()))){
		HX_STACK_LINE(18)
		::String xname;		HX_STACK_VAR(xname,"xname");
		HX_STACK_LINE(18)
		if (((this->__x->nodeType == ::Xml_obj::Document))){
			HX_STACK_LINE(18)
			xname = HX_CSTRING("Document");
		}
		else{
			HX_STACK_LINE(18)
			xname = this->__x->get_nodeName();
		}
		HX_STACK_LINE(19)
		HX_STACK_DO_THROW(((xname + HX_CSTRING(" is missing element ")) + name));
	}
	HX_STACK_LINE(21)
	return ::com::danielfreeman::MadXML_obj::__new(x);
}


HX_DEFINE_DYNAMIC_FUNC1(NodeAccess_obj,resolve,return )


NodeAccess_obj::NodeAccess_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void NodeAccess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NodeAccess);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__x,"__x");
	HX_MARK_END_CLASS();
}

void NodeAccess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__x,"__x");
}

Dynamic NodeAccess_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic NodeAccess_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { __x=inValue.Cast< ::Xml >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void NodeAccess_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__x"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(NodeAccess_obj,__x),HX_CSTRING("__x")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__x"),
	HX_CSTRING("resolve"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NodeAccess_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NodeAccess_obj::__mClass,"__mClass");
};

#endif

Class NodeAccess_obj::__mClass;

void NodeAccess_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman._MadXML.NodeAccess"), hx::TCanCast< NodeAccess_obj> ,sStaticFields,sMemberFields,
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

void NodeAccess_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace _MadXML
