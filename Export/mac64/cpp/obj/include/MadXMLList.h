#ifndef INCLUDED_MadXMLList
#define INCLUDED_MadXMLList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(MadXML)
HX_DECLARE_CLASS0(MadXMLList)


class HXCPP_CLASS_ATTRIBUTES  MadXMLList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MadXMLList_obj OBJ_;
		MadXMLList_obj();
		Void __construct(Array< ::Dynamic > a);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MadXMLList_obj > __new(Array< ::Dynamic > a);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MadXMLList_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MadXMLList"); }

		Array< ::Dynamic > l;
		virtual ::MadXMLList copy( );
		Dynamic copy_dyn();

		virtual ::MadXMLList descendants( ::String name);
		Dynamic descendants_dyn();

		virtual ::MadXML get( int i);
		Dynamic get_dyn();

		virtual Array< ::Dynamic > getArray( );
		Dynamic getArray_dyn();

		virtual Dynamic iterator( );
		Dynamic iterator_dyn();

		virtual int length( );
		Dynamic length_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};


#endif /* INCLUDED_MadXMLList */ 
