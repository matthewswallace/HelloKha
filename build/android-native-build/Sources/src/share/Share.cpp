// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_share_Share
#include <share/Share.h>
#endif

namespace share{

void Share_obj::__construct() { }

Dynamic Share_obj::__CreateEmpty() { return new Share_obj; }

hx::ObjectPtr< Share_obj > Share_obj::__new()
{
	hx::ObjectPtr< Share_obj > _hx_result = new Share_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Share_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Share_obj > _hx_result = new Share_obj();
	_hx_result->__construct();
	return _hx_result;
}

void Share_obj::share(::String subject,::String body,::String url,Bool attachScreenshot){
            	HX_STACK_FRAME("share.Share","share",0xcdc255e1,"share.Share.share","Sources/share/Share.hx",14,0x23ce5626)
            	HX_STACK_ARG(subject,"subject")
            	HX_STACK_ARG(body,"body")
            	HX_STACK_ARG(url,"url")
            	HX_STACK_ARG(attachScreenshot,"attachScreenshot")
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Share_obj,share,(void))


Share_obj::Share_obj()
{
}

bool Share_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"share") ) { outValue = share_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Share_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Share_obj_sStaticStorageInfo = 0;
#endif

static void Share_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Share_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Share_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Share_obj::__mClass,"__mClass");
};

#endif

hx::Class Share_obj::__mClass;

static ::String Share_obj_sStaticFields[] = {
	HX_HCSTRING("share","\xdf","\xe4","\x1c","\x7c"),
	::String(null())
};

void Share_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("share.Share","\xf0","\x43","\xc7","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Share_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Share_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Share_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Share_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Share_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Share_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Share_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace share
