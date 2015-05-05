#ifndef INCLUDED__MadXML_NodeAccess
#define INCLUDED__MadXML_NodeAccess

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(_MadXML,NodeAccess)
namespace _MadXML{


class HXCPP_CLASS_ATTRIBUTES  NodeAccess_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NodeAccess_obj OBJ_;
		NodeAccess_obj();
		Void __construct(::Xml x);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< NodeAccess_obj > __new(::Xml x);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NodeAccess_obj();

		HX_DO_RTTI;
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("NodeAccess"); }

		::Xml __x;
		virtual ::MadXML resolve( ::String name);
		Dynamic resolve_dyn();

};

} // end namespace _MadXML

#endif /* INCLUDED__MadXML_NodeAccess */ 
