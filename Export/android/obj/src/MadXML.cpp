#include <hxcpp.h>

#ifndef INCLUDED_MadXML
#include <MadXML.h>
#endif
#ifndef INCLUDED_MadXMLList
#include <MadXMLList.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_XmlType
#include <XmlType.h>
#endif
#ifndef INCLUDED__MadXML_AttribAccess
#include <_MadXML/AttribAccess.h>
#endif
#ifndef INCLUDED__MadXML_HasAttribAccess
#include <_MadXML/HasAttribAccess.h>
#endif
#ifndef INCLUDED__MadXML_HasNodeAccess
#include <_MadXML/HasNodeAccess.h>
#endif
#ifndef INCLUDED__MadXML_NodeAccess
#include <_MadXML/NodeAccess.h>
#endif
#ifndef INCLUDED__MadXML_NodeListAccess
#include <_MadXML/NodeListAccess.h>
#endif

Void MadXML_obj::__construct(::Xml x)
{
HX_STACK_FRAME("MadXML","new",0x119ebdb9,"MadXML.new","MadXML.hx",107,0x14be1bd7)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
{
	HX_STACK_LINE(108)
	if (((bool((x->nodeType != ::Xml_obj::Document)) && bool((x->nodeType != ::Xml_obj::Element))))){
		HX_STACK_LINE(109)
		::String _g = ::Std_obj::string(x->nodeType);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(109)
		HX_STACK_DO_THROW((HX_CSTRING("Invalid nodeType ") + _g));
	}
	HX_STACK_LINE(111)
	this->x = x;
	HX_STACK_LINE(112)
	::_MadXML::NodeAccess _g1 = ::_MadXML::NodeAccess_obj::__new(x);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(112)
	this->node = _g1;
	HX_STACK_LINE(113)
	::_MadXML::NodeListAccess _g2 = ::_MadXML::NodeListAccess_obj::__new(x);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(113)
	this->nodes = _g2;
	HX_STACK_LINE(114)
	::_MadXML::AttribAccess _g3 = ::_MadXML::AttribAccess_obj::__new(x);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(114)
	this->att = _g3;
	HX_STACK_LINE(115)
	::_MadXML::HasAttribAccess _g4 = ::_MadXML::HasAttribAccess_obj::__new(x);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(115)
	this->has = _g4;
	HX_STACK_LINE(116)
	::_MadXML::HasNodeAccess _g5 = ::_MadXML::HasNodeAccess_obj::__new(x);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(116)
	this->hasNode = _g5;
}
;
	return null();
}

//MadXML_obj::~MadXML_obj() { }

Dynamic MadXML_obj::__CreateEmpty() { return  new MadXML_obj; }
hx::ObjectPtr< MadXML_obj > MadXML_obj::__new(::Xml x)
{  hx::ObjectPtr< MadXML_obj > result = new MadXML_obj();
	result->__construct(x);
	return result;}

Dynamic MadXML_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MadXML_obj > result = new MadXML_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MadXML_obj::appendChild( Dynamic a){
{
		HX_STACK_FRAME("MadXML","appendChild",0xc19dafbb,"MadXML.appendChild","MadXML.hx",120,0x14be1bd7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(120)
		if ((::Std_obj::is(a,hx::ClassOf< ::Xml >()))){
			HX_STACK_LINE(121)
			this->x->addChild(a);
		}
		else{
			HX_STACK_LINE(123)
			::Xml _g = ::Xml_obj::parse(a);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(123)
			this->x->addChild(_g);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MadXML_obj,appendChild,(void))

::MadXMLList MadXML_obj::descendants( ::String __o_name){
::String name = __o_name.Default(HX_CSTRING("*"));
	HX_STACK_FRAME("MadXML","descendants",0x8c62092f,"MadXML.descendants","MadXML.hx",126,0x14be1bd7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
{
		HX_STACK_LINE(127)
		Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(128)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(this->x->elements());  __it->hasNext(); ){
			::Xml e = __it->next();
			{
				HX_STACK_LINE(129)
				::String _g = e->get_nodeName();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(129)
				if (((  ((!(((_g == name))))) ? bool((name == HX_CSTRING("*"))) : bool(true) ))){
					HX_STACK_LINE(130)
					::MadXML _g1 = ::MadXML_obj::__new(e);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(130)
					a->push(_g1);
				}
				else{
					HX_STACK_LINE(132)
					::MadXML fx = ::MadXML_obj::__new(e);		HX_STACK_VAR(fx,"fx");
					HX_STACK_LINE(133)
					Array< ::Dynamic > _g2 = fx->descendants(name)->getArray();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(133)
					Array< ::Dynamic > _g3 = a->concat(_g2);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(133)
					a = _g3;
				}
			}
;
		}
		HX_STACK_LINE(136)
		return ::MadXMLList_obj::__new(a);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(MadXML_obj,descendants,return )

::String MadXML_obj::getAttribute( ::String name){
	HX_STACK_FRAME("MadXML","getAttribute",0x4a9a2c2d,"MadXML.getAttribute","MadXML.hx",143,0x14be1bd7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(144)
	if (((this->x->nodeType == ::Xml_obj::Document))){
		HX_STACK_LINE(145)
		HX_STACK_DO_THROW((HX_CSTRING("Cannot access document attribute ") + name));
	}
	HX_STACK_LINE(146)
	::String v = this->x->get(name);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(147)
	return v;
}


HX_DEFINE_DYNAMIC_FUNC1(MadXML_obj,getAttribute,return )

::String MadXML_obj::get_name( ){
	HX_STACK_FRAME("MadXML","get_name",0xf5773ddb,"MadXML.get_name","MadXML.hx",151,0x14be1bd7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(151)
	if (((this->x->nodeType == ::Xml_obj::Document))){
		HX_STACK_LINE(151)
		return HX_CSTRING("Document");
	}
	else{
		HX_STACK_LINE(151)
		return this->x->get_nodeName();
	}
	HX_STACK_LINE(151)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MadXML_obj,get_name,return )

::String MadXML_obj::get_innerData( ){
	HX_STACK_FRAME("MadXML","get_innerData",0xf3ac8150,"MadXML.get_innerData","MadXML.hx",154,0x14be1bd7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(155)
	Dynamic it = this->x->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(156)
	if ((!(it->__Field(HX_CSTRING("hasNext"),true)()))){
		HX_STACK_LINE(157)
		::String _g = this->get_name();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(157)
		HX_STACK_DO_THROW((_g + HX_CSTRING(" does not have data")));
	}
	HX_STACK_LINE(158)
	::Xml v = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(159)
	::Xml n = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(160)
	if (((n != null()))){
		struct _Function_2_1{
			inline static bool Block( ::Xml &v){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MadXML.hx",162,0x14be1bd7)
				{
					HX_STACK_LINE(162)
					::String _g1 = v->get_nodeValue();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(162)
					::String _g2 = ::StringTools_obj::trim(_g1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(162)
					return (_g2 == HX_CSTRING(""));
				}
				return null();
			}
		};
		HX_STACK_LINE(162)
		if (((  (((bool((v->nodeType == ::Xml_obj::PCData)) && bool((n->nodeType == ::Xml_obj::CData))))) ? bool(_Function_2_1::Block(v)) : bool(false) ))){
			HX_STACK_LINE(163)
			::Xml n2 = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(n2,"n2");
			struct _Function_3_1{
				inline static bool Block( Dynamic &it,::Xml &n2){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MadXML.hx",164,0x14be1bd7)
					{
						struct _Function_4_1{
							inline static bool Block( ::Xml &n2){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MadXML.hx",164,0x14be1bd7)
								{
									HX_STACK_LINE(164)
									::String _g3 = n2->get_nodeValue();		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(164)
									::String _g4 = ::StringTools_obj::trim(_g3);		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(164)
									return (_g4 == HX_CSTRING(""));
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static bool Block( Dynamic &it){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MadXML.hx",164,0x14be1bd7)
								{
									HX_STACK_LINE(164)
									::Xml _g5 = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(_g5,"_g5");
									HX_STACK_LINE(164)
									return (_g5 == null());
								}
								return null();
							}
						};
						HX_STACK_LINE(164)
						return (  (((  (((n2->nodeType == ::Xml_obj::PCData))) ? bool(_Function_4_1::Block(n2)) : bool(false) ))) ? bool(_Function_4_2::Block(it)) : bool(false) );
					}
					return null();
				}
			};
			HX_STACK_LINE(164)
			if (((  ((!(((n2 == null()))))) ? bool(_Function_3_1::Block(it,n2)) : bool(true) ))){
				HX_STACK_LINE(165)
				return n->get_nodeValue();
			}
		}
		HX_STACK_LINE(167)
		::String _g6 = this->get_name();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(167)
		HX_STACK_DO_THROW((_g6 + HX_CSTRING(" does not only have data")));
	}
	HX_STACK_LINE(169)
	if (((bool((v->nodeType != ::Xml_obj::PCData)) && bool((v->nodeType != ::Xml_obj::CData))))){
		HX_STACK_LINE(170)
		::String _g7 = this->get_name();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(170)
		HX_STACK_DO_THROW((_g7 + HX_CSTRING(" does not have data")));
	}
	HX_STACK_LINE(171)
	return v->get_nodeValue();
}


HX_DEFINE_DYNAMIC_FUNC0(MadXML_obj,get_innerData,return )

::String MadXML_obj::get_innerHTML( ){
	HX_STACK_FRAME("MadXML","get_innerHTML",0xf6475c71,"MadXML.get_innerHTML","MadXML.hx",174,0x14be1bd7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(175)
	::StringBuf s = ::StringBuf_obj::__new();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(176)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(this->x->iterator());  __it->hasNext(); ){
		::Xml x = __it->next();
		{
			HX_STACK_LINE(177)
			::String _g = x->toString();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(177)
			s->add(_g);
		}
;
	}
	HX_STACK_LINE(178)
	return s->b->join(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC0(MadXML_obj,get_innerHTML,return )

Dynamic MadXML_obj::get_elements( ){
	HX_STACK_FRAME("MadXML","get_elements",0x793109c7,"MadXML.get_elements","MadXML.hx",181,0x14be1bd7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(182)
	Dynamic it = Dynamic( Array_obj<Dynamic>::__new().Add(this->x->elements()));		HX_STACK_VAR(it,"it");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &it){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MadXML.hx",183,0x14be1bd7)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("hasNext") , it->__GetItem((int)0)->__Field(HX_CSTRING("hasNext"),true),false);

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,it)
				::MadXML run(){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","MadXML.hx",185,0x14be1bd7)
					{
						HX_STACK_LINE(186)
						::Xml x = it->__GetItem((int)0)->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(187)
						if (((x == null()))){
							HX_STACK_LINE(188)
							return null();
						}
						HX_STACK_LINE(189)
						return ::MadXML_obj::__new(x);
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				__result->Add(HX_CSTRING("next") ,  Dynamic(new _Function_2_1(it)),true);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(183)
	return _Function_1_1::Block(it);
}


HX_DEFINE_DYNAMIC_FUNC0(MadXML_obj,get_elements,return )

int MadXML_obj::length( ){
	HX_STACK_FRAME("MadXML","length",0xda62c52d,"MadXML.length","MadXML.hx",195,0x14be1bd7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(195)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC0(MadXML_obj,length,return )

Void MadXML_obj::setAttribute( ::String name,::String value){
{
		HX_STACK_FRAME("MadXML","setAttribute",0x5f934fa1,"MadXML.setAttribute","MadXML.hx",198,0x14be1bd7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(199)
		if (((this->x->nodeType == ::Xml_obj::Document))){
			HX_STACK_LINE(200)
			HX_STACK_DO_THROW((HX_CSTRING("Cannot access document attribute ") + name));
		}
		HX_STACK_LINE(201)
		this->x->set(name,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MadXML_obj,setAttribute,(void))

bool MadXML_obj::get_hasChildren( ){
	HX_STACK_FRAME("MadXML","get_hasChildren",0x5068c529,"MadXML.get_hasChildren","MadXML.hx",223,0x14be1bd7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(224)
	int _g = this->children(null())->length();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(224)
	return (_g > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(MadXML_obj,get_hasChildren,return )

::String MadXML_obj::toXMLString( ){
	HX_STACK_FRAME("MadXML","toXMLString",0x59cc4b66,"MadXML.toXMLString","MadXML.hx",229,0x14be1bd7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(229)
	return this->x->toString();
}


HX_DEFINE_DYNAMIC_FUNC0(MadXML_obj,toXMLString,return )

::String MadXML_obj::toString( ){
	HX_STACK_FRAME("MadXML","toString",0x652be0b3,"MadXML.toString","MadXML.hx",234,0x14be1bd7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(234)
	if ((this->get_hasChildren())){
		HX_STACK_LINE(234)
		return this->toXMLString();
	}
	else{
		HX_STACK_LINE(234)
		return this->get_innerHTML();
	}
	HX_STACK_LINE(234)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MadXML_obj,toString,return )

::MadXMLList MadXML_obj::children( ::String __o_name){
::String name = __o_name.Default(HX_CSTRING("*"));
	HX_STACK_FRAME("MadXML","children",0x9d272946,"MadXML.children","MadXML.hx",238,0x14be1bd7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
{
		HX_STACK_LINE(239)
		Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(240)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(this->x->elements());  __it->hasNext(); ){
			::Xml e = __it->next();
			{
				HX_STACK_LINE(241)
				::String _g = e->get_nodeName();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(241)
				if (((  ((!(((_g == name))))) ? bool((name == HX_CSTRING("*"))) : bool(true) ))){
					HX_STACK_LINE(242)
					::MadXML _g1 = ::MadXML_obj::__new(e);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(242)
					a->push(_g1);
				}
			}
;
		}
		HX_STACK_LINE(245)
		return ::MadXMLList_obj::__new(a);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(MadXML_obj,children,return )

bool MadXML_obj::hasChild( ::String __o_name){
::String name = __o_name.Default(HX_CSTRING("*"));
	HX_STACK_FRAME("MadXML","hasChild",0xfecf03e9,"MadXML.hasChild","MadXML.hx",250,0x14be1bd7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
{
		HX_STACK_LINE(250)
		return this->x->elementsNamed(name)->__Field(HX_CSTRING("hasNext"),true)();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(MadXML_obj,hasChild,return )

::MadXML MadXML_obj::child0( ::String __o_name){
::String name = __o_name.Default(HX_CSTRING("*"));
	HX_STACK_FRAME("MadXML","child0",0xf815ef5b,"MadXML.child0","MadXML.hx",254,0x14be1bd7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
{
		HX_STACK_LINE(255)
		::Xml _g = this->x->elementsNamed(name)->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(255)
		return ::MadXML_obj::__new(_g);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(MadXML_obj,child0,return )

::MadXML MadXML_obj::parent( ){
	HX_STACK_FRAME("MadXML","parent",0x28d93571,"MadXML.parent","MadXML.hx",259,0x14be1bd7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(260)
	::Xml _g = this->x->get_parent();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(260)
	return ::MadXML_obj::__new(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(MadXML_obj,parent,return )

bool MadXML_obj::get_nodeKindIsText( ){
	HX_STACK_FRAME("MadXML","get_nodeKindIsText",0x1ab0e25d,"MadXML.get_nodeKindIsText","MadXML.hx",265,0x14be1bd7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(265)
	return (this->x->nodeType == ::Xml_obj::PCData);
}


HX_DEFINE_DYNAMIC_FUNC0(MadXML_obj,get_nodeKindIsText,return )

::MadXML MadXML_obj::parse( ::String s){
	HX_STACK_FRAME("MadXML","parse",0xe93945cc,"MadXML.parse","MadXML.hx",206,0x14be1bd7)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(207)
	::Xml x = ::Xml_obj::parse(s);		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(208)
	::Xml _g = x->firstChild();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(208)
	return ::MadXML_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MadXML_obj,parse,return )

::MadXMLList MadXML_obj::filterNodes( ::MadXMLList a,Dynamic f){
	HX_STACK_FRAME("MadXML","filterNodes",0x8ede7bb2,"MadXML.filterNodes","MadXML.hx",211,0x14be1bd7)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(212)
	Array< ::Dynamic > rv = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(rv,"rv");
	HX_STACK_LINE(213)
	for(::cpp::FastIterator_obj< ::MadXML > *__it = ::cpp::CreateFastIterator< ::MadXML >(a->iterator());  __it->hasNext(); ){
		::MadXML i = __it->next();
		if ((f(i).Cast< bool >())){
			HX_STACK_LINE(215)
			rv->push(i);
		}
;
	}
	HX_STACK_LINE(216)
	return ::MadXMLList_obj::__new(rv);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MadXML_obj,filterNodes,return )


MadXML_obj::MadXML_obj()
{
}

void MadXML_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MadXML);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(innerData,"innerData");
	HX_MARK_MEMBER_NAME(innerHTML,"innerHTML");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(nodes,"nodes");
	HX_MARK_MEMBER_NAME(att,"att");
	HX_MARK_MEMBER_NAME(has,"has");
	HX_MARK_MEMBER_NAME(hasNode,"hasNode");
	HX_MARK_MEMBER_NAME(elements,"elements");
	HX_MARK_MEMBER_NAME(hasChildren,"hasChildren");
	HX_MARK_MEMBER_NAME(nodeKindIsText,"nodeKindIsText");
	HX_MARK_END_CLASS();
}

void MadXML_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(innerData,"innerData");
	HX_VISIT_MEMBER_NAME(innerHTML,"innerHTML");
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(nodes,"nodes");
	HX_VISIT_MEMBER_NAME(att,"att");
	HX_VISIT_MEMBER_NAME(has,"has");
	HX_VISIT_MEMBER_NAME(hasNode,"hasNode");
	HX_VISIT_MEMBER_NAME(elements,"elements");
	HX_VISIT_MEMBER_NAME(hasChildren,"hasChildren");
	HX_VISIT_MEMBER_NAME(nodeKindIsText,"nodeKindIsText");
}

Dynamic MadXML_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"att") ) { return att; }
		if (HX_FIELD_EQ(inName,"has") ) { return has; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return inCallProp ? get_name() : name; }
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		if (HX_FIELD_EQ(inName,"nodes") ) { return nodes; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length_dyn(); }
		if (HX_FIELD_EQ(inName,"child0") ) { return child0_dyn(); }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNode") ) { return hasNode; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"elements") ) { return inCallProp ? get_elements() : elements; }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"children") ) { return children_dyn(); }
		if (HX_FIELD_EQ(inName,"hasChild") ) { return hasChild_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"innerData") ) { return inCallProp ? get_innerData() : innerData; }
		if (HX_FIELD_EQ(inName,"innerHTML") ) { return inCallProp ? get_innerHTML() : innerHTML; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterNodes") ) { return filterNodes_dyn(); }
		if (HX_FIELD_EQ(inName,"hasChildren") ) { return inCallProp ? get_hasChildren() : hasChildren; }
		if (HX_FIELD_EQ(inName,"appendChild") ) { return appendChild_dyn(); }
		if (HX_FIELD_EQ(inName,"descendants") ) { return descendants_dyn(); }
		if (HX_FIELD_EQ(inName,"toXMLString") ) { return toXMLString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getAttribute") ) { return getAttribute_dyn(); }
		if (HX_FIELD_EQ(inName,"get_elements") ) { return get_elements_dyn(); }
		if (HX_FIELD_EQ(inName,"setAttribute") ) { return setAttribute_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_innerData") ) { return get_innerData_dyn(); }
		if (HX_FIELD_EQ(inName,"get_innerHTML") ) { return get_innerHTML_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nodeKindIsText") ) { return inCallProp ? get_nodeKindIsText() : nodeKindIsText; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_hasChildren") ) { return get_hasChildren_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_nodeKindIsText") ) { return get_nodeKindIsText_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MadXML_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"att") ) { att=inValue.Cast< ::_MadXML::AttribAccess >(); return inValue; }
		if (HX_FIELD_EQ(inName,"has") ) { has=inValue.Cast< ::_MadXML::HasAttribAccess >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::_MadXML::NodeAccess >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { nodes=inValue.Cast< ::_MadXML::NodeListAccess >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNode") ) { hasNode=inValue.Cast< ::_MadXML::HasNodeAccess >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"elements") ) { elements=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"innerData") ) { innerData=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"innerHTML") ) { innerHTML=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasChildren") ) { hasChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nodeKindIsText") ) { nodeKindIsText=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MadXML_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("innerData"));
	outFields->push(HX_CSTRING("innerHTML"));
	outFields->push(HX_CSTRING("node"));
	outFields->push(HX_CSTRING("nodes"));
	outFields->push(HX_CSTRING("att"));
	outFields->push(HX_CSTRING("has"));
	outFields->push(HX_CSTRING("hasNode"));
	outFields->push(HX_CSTRING("elements"));
	outFields->push(HX_CSTRING("hasChildren"));
	outFields->push(HX_CSTRING("nodeKindIsText"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("parse"),
	HX_CSTRING("filterNodes"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(MadXML_obj,x),HX_CSTRING("x")},
	{hx::fsString,(int)offsetof(MadXML_obj,name),HX_CSTRING("name")},
	{hx::fsString,(int)offsetof(MadXML_obj,innerData),HX_CSTRING("innerData")},
	{hx::fsString,(int)offsetof(MadXML_obj,innerHTML),HX_CSTRING("innerHTML")},
	{hx::fsObject /*::_MadXML::NodeAccess*/ ,(int)offsetof(MadXML_obj,node),HX_CSTRING("node")},
	{hx::fsObject /*::_MadXML::NodeListAccess*/ ,(int)offsetof(MadXML_obj,nodes),HX_CSTRING("nodes")},
	{hx::fsObject /*::_MadXML::AttribAccess*/ ,(int)offsetof(MadXML_obj,att),HX_CSTRING("att")},
	{hx::fsObject /*::_MadXML::HasAttribAccess*/ ,(int)offsetof(MadXML_obj,has),HX_CSTRING("has")},
	{hx::fsObject /*::_MadXML::HasNodeAccess*/ ,(int)offsetof(MadXML_obj,hasNode),HX_CSTRING("hasNode")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MadXML_obj,elements),HX_CSTRING("elements")},
	{hx::fsBool,(int)offsetof(MadXML_obj,hasChildren),HX_CSTRING("hasChildren")},
	{hx::fsBool,(int)offsetof(MadXML_obj,nodeKindIsText),HX_CSTRING("nodeKindIsText")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("name"),
	HX_CSTRING("innerData"),
	HX_CSTRING("innerHTML"),
	HX_CSTRING("node"),
	HX_CSTRING("nodes"),
	HX_CSTRING("att"),
	HX_CSTRING("has"),
	HX_CSTRING("hasNode"),
	HX_CSTRING("elements"),
	HX_CSTRING("hasChildren"),
	HX_CSTRING("nodeKindIsText"),
	HX_CSTRING("appendChild"),
	HX_CSTRING("descendants"),
	HX_CSTRING("getAttribute"),
	HX_CSTRING("get_name"),
	HX_CSTRING("get_innerData"),
	HX_CSTRING("get_innerHTML"),
	HX_CSTRING("get_elements"),
	HX_CSTRING("length"),
	HX_CSTRING("setAttribute"),
	HX_CSTRING("get_hasChildren"),
	HX_CSTRING("toXMLString"),
	HX_CSTRING("toString"),
	HX_CSTRING("children"),
	HX_CSTRING("hasChild"),
	HX_CSTRING("child0"),
	HX_CSTRING("parent"),
	HX_CSTRING("get_nodeKindIsText"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MadXML_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MadXML_obj::__mClass,"__mClass");
};

#endif

Class MadXML_obj::__mClass;

void MadXML_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MadXML"), hx::TCanCast< MadXML_obj> ,sStaticFields,sMemberFields,
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

void MadXML_obj::__boot()
{
}

