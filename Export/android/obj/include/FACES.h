#ifndef INCLUDED_FACES
#define INCLUDED_FACES

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/BitmapData.h>
HX_DECLARE_CLASS0(FACES)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)


class HXCPP_CLASS_ATTRIBUTES  FACES_obj : public ::openfl::display::BitmapData_obj{
	public:
		typedef ::openfl::display::BitmapData_obj super;
		typedef FACES_obj OBJ_;
		FACES_obj();
		Void __construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FACES_obj > __new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FACES_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FACES"); }

		static ::String resourceName;
};


#endif /* INCLUDED_FACES */ 
