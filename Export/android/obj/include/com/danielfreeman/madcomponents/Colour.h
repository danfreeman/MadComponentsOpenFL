#ifndef INCLUDED_com_danielfreeman_madcomponents_Colour
#define INCLUDED_com_danielfreeman_madcomponents_Colour

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,danielfreeman,madcomponents,Colour)
namespace com{
namespace danielfreeman{
namespace madcomponents{


class HXCPP_CLASS_ATTRIBUTES  Colour_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Colour_obj OBJ_;
		Colour_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Colour_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Colour_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Colour"); }

		static int limit( int n,int hi,int lo);
		static Dynamic limit_dyn();

		static int darken( int n,hx::Null< int >  amount);
		static Dynamic darken_dyn();

		static int lighten( int n,hx::Null< int >  amount);
		static Dynamic lighten_dyn();

		static Float power( int value);
		static Dynamic power_dyn();

};

} // end namespace com
} // end namespace danielfreeman
} // end namespace madcomponents

#endif /* INCLUDED_com_danielfreeman_madcomponents_Colour */ 
