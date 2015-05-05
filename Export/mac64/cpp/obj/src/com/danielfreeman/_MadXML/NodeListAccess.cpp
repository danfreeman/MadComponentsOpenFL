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
#ifndef INCLUDED_com_danielfreeman__MadXML_NodeListAccess
#include <com/danielfreeman/_MadXML/NodeListAccess.h>
#endif
namespace com{
namespace danielfreeman{
namespace _MadXML{

Void NodeListAccess_obj::__construct(::Xml x)
{
HX_STACK_FRAME("com.danielfreeman._MadXML.NodeListAccess","new",0xe866b2ca,"com.danielfreeman._MadXML.NodeListAccess.new","com/danielfreeman/MadXML.hx",80,0xb248a369)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
{
	HX_STACK_LINE(80)
	this->__x = x;
}
;
	return null();
}

//NodeListAccess_obj::~NodeListAccess_obj() { }

Dynamic NodeListAccess_obj::__CreateEmpty() { return  new NodeListAccess_obj; }
hx::ObjectPtr< NodeListAccess_obj > NodeListAccess_obj::__new(::Xml x)
{  hx::ObjectPtr< NodeListAccess_obj > result = new NodeListAccess_obj();
	result->__construct(x);
	return result;}

Dynamic NodeListAccess_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NodeListAccess_obj > result = new NodeListAccess_obj();
	result->__construct(inArgs[0]);
	return result;}

::com::danielfreeman::MadXMLList NodeListAccess_obj::resolve( ::String name){
	HX_STACK_FRAME("com.danielfreeman._MadXML.NodeListAccess","resolve",0x58057256,"com.danielfreeman._MadXML.NodeListAccess.resolve","com/danielfreeman/MadXML.hx",83,0xb248a369)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(84)
	Array< ::Dynamic > l = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(85)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(this->__x->elementsNamed(name));  __it->hasNext(); ){
		::Xml x = __it->next();
		{
			HX_STACK_LINE(86)
			::com::danielfreeman::MadXML _g = ::com::danielfreeman::MadXML_obj::__new(x);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(86)
			l->push(_g);
		}
;
	}
	HX_STACK_LINE(87)
	return ::com::danielfreeman::MadXMLList_obj::__new(l);
}


HX_DEFINE_DYNAMIC_FUNC1(NodeListAccess_obj,resolve,return )


NodeListAccess_obj::NodeListAccess_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void NodeListAccess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NodeListAccess);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__x,"__x");
	HX_MARK_END_CLASS();
}

void NodeListAccess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__x,"__x");
}

Dynamic NodeListAccess_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic NodeListAccess_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { __x=inValue.Cast< ::Xml >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void NodeListAccess_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__x"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(NodeListAccess_obj,__x),HX_CSTRING("__x")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__x"),
	HX_CSTRING("resolve"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NodeListAccess_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NodeListAccess_obj::__mClass,"__mClass");
};

#endif

Class NodeListAccess_obj::__mClass;

void NodeListAccess_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.danielfreeman._MadXML.NodeListAccess"), hx::TCanCast< NodeListAccess_obj> ,sStaticFields,sMemberFields,
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

void NodeListAccess_obj::__boot()
{
}

} // end namespace com
} // end namespace danielfreeman
} // end namespace _MadXML
