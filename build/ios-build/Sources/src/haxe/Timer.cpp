// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif

namespace haxe{

void Timer_obj::__construct() { }

Dynamic Timer_obj::__CreateEmpty() { return new Timer_obj; }

hx::ObjectPtr< Timer_obj > Timer_obj::__new()
{
	hx::ObjectPtr< Timer_obj > _hx_result = new Timer_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Timer_obj > _hx_result = new Timer_obj();
	_hx_result->__construct();
	return _hx_result;
}

Float Timer_obj::stamp(){
            	HX_STACK_FRAME("haxe.Timer","stamp",0xebba8a32,"haxe.Timer.stamp","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/Timer.hx",177,0x68193784)
HXLINE( 177)		return ::__time_stamp();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stamp,return )


Timer_obj::Timer_obj()
{
}

bool Timer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stamp") ) { outValue = stamp_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Timer_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Timer_obj_sStaticStorageInfo = 0;
#endif

static void Timer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Timer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#endif

hx::Class Timer_obj::__mClass;

static ::String Timer_obj_sStaticFields[] = {
	HX_HCSTRING("stamp","\x03","\x70","\x0b","\x84"),
	::String(null())
};

void Timer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Timer","\x5d","\x9d","\x24","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Timer_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Timer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Timer_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Timer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Timer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Timer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Timer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
