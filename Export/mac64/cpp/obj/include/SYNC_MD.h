#ifndef INCLUDED_SYNC_MD
#define INCLUDED_SYNC_MD

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/BitmapData.h>
HX_DECLARE_CLASS0(SYNC_MD)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)


class HXCPP_CLASS_ATTRIBUTES  SYNC_MD_obj : public ::openfl::display::BitmapData_obj{
	public:
		typedef ::openfl::display::BitmapData_obj super;
		typedef SYNC_MD_obj OBJ_;
		SYNC_MD_obj();
		Void __construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SYNC_MD_obj > __new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SYNC_MD_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SYNC_MD"); }

		static ::String resourceName;
};


#endif /* INCLUDED_SYNC_MD */ 
