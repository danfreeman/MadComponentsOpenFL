#ifndef INCLUDED_com_danielfreeman__MadXML_NodeAccess
#define INCLUDED_com_danielfreeman__MadXML_NodeAccess

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(com,danielfreeman,MadXML)
HX_DECLARE_CLASS3(com,danielfreeman,_MadXML,NodeAccess)
namespace com{
namespace danielfreeman{
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
		virtual ::com::danielfreeman::MadXML resolve( ::String name);
		Dynamic resolve_dyn();

};

} // end namespace com
} // end namespace danielfreeman
} // end namespace _MadXML

#endif /* INCLUDED_com_danielfreeman__MadXML_NodeAccess */ 
