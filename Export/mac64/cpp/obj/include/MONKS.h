#ifndef INCLUDED_MONKS
#define INCLUDED_MONKS

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/BitmapData.h>
HX_DECLARE_CLASS0(MONKS)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)


class HXCPP_CLASS_ATTRIBUTES  MONKS_obj : public ::openfl::display::BitmapData_obj{
	public:
		typedef ::openfl::display::BitmapData_obj super;
		typedef MONKS_obj OBJ_;
		MONKS_obj();
		Void __construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MONKS_obj > __new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MONKS_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("MONKS"); }

		static ::String resourceName;
};


#endif /* INCLUDED_MONKS */ 
