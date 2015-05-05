#include <hxcpp.h>

#ifndef INCLUDED_SYNC_LD
#include <SYNC_LD.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArray
#include <openfl/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif

Void SYNC_LD_obj::__construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA)
{
HX_STACK_FRAME("SYNC_LD","new",0xf753e00e,"SYNC_LD.new","openfl/Assets.hx",1527,0x989d477c)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_transparent,"transparent")
HX_STACK_ARG(__o_fillRGBA,"fillRGBA")
Dynamic transparent = __o_transparent.Default(true);
Dynamic fillRGBA = __o_fillRGBA.Default(-1);
{
	HX_STACK_LINE(1593)
	super::__construct(width,height,transparent,fillRGBA,null());
	HX_STACK_LINE(1595)
	::haxe::io::Bytes _g = ::haxe::Resource_obj::getBytes(::SYNC_LD_obj::resourceName);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1595)
	::openfl::utils::ByteArray byteArray = ::openfl::utils::ByteArray_obj::fromBytes(_g);		HX_STACK_VAR(byteArray,"byteArray");
	HX_STACK_LINE(1596)
	{
		HX_STACK_LINE(1596)
		Dynamic _g1 = ::openfl::display::BitmapData_obj::lime_bitmap_data_from_bytes(byteArray,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1596)
		this->__handle = _g1;
	}
}
;
	return null();
}

//SYNC_LD_obj::~SYNC_LD_obj() { }

Dynamic SYNC_LD_obj::__CreateEmpty() { return  new SYNC_LD_obj; }
hx::ObjectPtr< SYNC_LD_obj > SYNC_LD_obj::__new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA)
{  hx::ObjectPtr< SYNC_LD_obj > result = new SYNC_LD_obj();
	result->__construct(width,height,__o_transparent,__o_fillRGBA);
	return result;}

Dynamic SYNC_LD_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SYNC_LD_obj > result = new SYNC_LD_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::String SYNC_LD_obj::resourceName;


SYNC_LD_obj::SYNC_LD_obj()
{
}

Dynamic SYNC_LD_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { return resourceName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SYNC_LD_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SYNC_LD_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("resourceName"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SYNC_LD_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SYNC_LD_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SYNC_LD_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SYNC_LD_obj::resourceName,"resourceName");
};

#endif

Class SYNC_LD_obj::__mClass;

void SYNC_LD_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("SYNC_LD"), hx::TCanCast< SYNC_LD_obj> ,sStaticFields,sMemberFields,
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

void SYNC_LD_obj::__boot()
{
	resourceName= HX_CSTRING("__ASSET__:bitmap_SYNC_LD");
}
