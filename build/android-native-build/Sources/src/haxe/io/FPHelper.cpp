// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_FPHelper
#include <haxe/io/FPHelper.h>
#endif

namespace haxe{
namespace io{

void FPHelper_obj::__construct() { }

Dynamic FPHelper_obj::__CreateEmpty() { return new FPHelper_obj; }

hx::ObjectPtr< FPHelper_obj > FPHelper_obj::__new()
{
	hx::ObjectPtr< FPHelper_obj > _hx_result = new FPHelper_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic FPHelper_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FPHelper_obj > _hx_result = new FPHelper_obj();
	_hx_result->__construct();
	return _hx_result;
}

Int FPHelper_obj::floatToI32(Float f){
            	HX_STACK_FRAME("haxe.io.FPHelper","floatToI32",0xff5a7c67,"haxe.io.FPHelper.floatToI32","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/io/FPHelper.hx",118,0x20d35e08)
            	HX_STACK_ARG(f,"f")
HXLINE( 118)		return ::__hxcpp_reinterpret_float32_as_le_int32(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FPHelper_obj,floatToI32,return )


FPHelper_obj::FPHelper_obj()
{
}

bool FPHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"floatToI32") ) { outValue = floatToI32_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FPHelper_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FPHelper_obj_sStaticStorageInfo = 0;
#endif

static void FPHelper_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FPHelper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FPHelper_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FPHelper_obj::__mClass,"__mClass");
};

#endif

hx::Class FPHelper_obj::__mClass;

static ::String FPHelper_obj_sStaticFields[] = {
	HX_HCSTRING("floatToI32","\x51","\x5f","\xaa","\x32"),
	::String(null())
};

void FPHelper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.FPHelper","\x98","\x9f","\xc6","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FPHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FPHelper_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FPHelper_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FPHelper_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FPHelper_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FPHelper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FPHelper_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
