#ifndef INCLUDED__MadXML_AttribAccess
#define INCLUDED__MadXML_AttribAccess

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(_MadXML,AttribAccess)
namespace _MadXML{


class HXCPP_CLASS_ATTRIBUTES  AttribAccess_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AttribAccess_obj OBJ_;
		AttribAccess_obj();
		Void __construct(::Xml x);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AttribAccess_obj > __new(::Xml x);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AttribAccess_obj();

		HX_DO_RTTI;
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AttribAccess"); }

		::Xml __x;
		virtual ::String resolve( ::String name);
		Dynamic resolve_dyn();

};

} // end namespace _MadXML

#endif /* INCLUDED__MadXML_AttribAccess */ 
