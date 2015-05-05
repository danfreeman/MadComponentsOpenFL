#ifndef INCLUDED_MadXML
#define INCLUDED_MadXML

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS0(MadXMLList)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(_MadXML,AttribAccess)
HX_DECLARE_CLASS1(_MadXML,HasAttribAccess)
HX_DECLARE_CLASS1(_MadXML,HasNodeAccess)
HX_DECLARE_CLASS1(_MadXML,NodeAccess)
HX_DECLARE_CLASS1(_MadXML,NodeListAccess)


class HXCPP_CLASS_ATTRIBUTES  MadXML_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MadXML_obj OBJ_;
		MadXML_obj();
		Void __construct(::Xml x);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MadXML_obj > __new(::Xml x);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MadXML_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MadXML"); }

		::Xml x;
		::String name;
		::String innerData;
		::String innerHTML;
		::_MadXML::NodeAccess node;
		::_MadXML::NodeListAccess nodes;
		::_MadXML::AttribAccess att;
		::_MadXML::HasAttribAccess has;
		::_MadXML::HasNodeAccess hasNode;
		Dynamic elements;
		bool hasChildren;
		bool nodeKindIsText;
		virtual Void appendChild( Dynamic a);
		Dynamic appendChild_dyn();

		virtual ::MadXMLList descendants( ::String name);
		Dynamic descendants_dyn();

		virtual ::String getAttribute( ::String name);
		Dynamic getAttribute_dyn();

		virtual ::String get_name( );
		Dynamic get_name_dyn();

		virtual ::String get_innerData( );
		Dynamic get_innerData_dyn();

		virtual ::String get_innerHTML( );
		Dynamic get_innerHTML_dyn();

		virtual Dynamic get_elements( );
		Dynamic get_elements_dyn();

		virtual int length( );
		Dynamic length_dyn();

		virtual Void setAttribute( ::String name,::String value);
		Dynamic setAttribute_dyn();

		virtual bool get_hasChildren( );
		Dynamic get_hasChildren_dyn();

		virtual ::String toXMLString( );
		Dynamic toXMLString_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::MadXMLList children( ::String name);
		Dynamic children_dyn();

		virtual bool hasChild( ::String name);
		Dynamic hasChild_dyn();

		virtual ::MadXML child0( ::String name);
		Dynamic child0_dyn();

		virtual ::MadXML parent( );
		Dynamic parent_dyn();

		virtual bool get_nodeKindIsText( );
		Dynamic get_nodeKindIsText_dyn();

		static ::MadXML parse( ::String s);
		static Dynamic parse_dyn();

		static ::MadXMLList filterNodes( ::MadXMLList a,Dynamic f);
		static Dynamic filterNodes_dyn();

};


#endif /* INCLUDED_MadXML */ 
