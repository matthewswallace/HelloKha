// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_aws_mobile_AWSMobileHub
#include <aws/mobile/AWSMobileHub.h>
#endif

namespace aws{
namespace mobile{

void AWSMobileHub_obj::__construct() { }

Dynamic AWSMobileHub_obj::__CreateEmpty() { return new AWSMobileHub_obj; }

hx::ObjectPtr< AWSMobileHub_obj > AWSMobileHub_obj::__new()
{
	hx::ObjectPtr< AWSMobileHub_obj > _hx_result = new AWSMobileHub_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic AWSMobileHub_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AWSMobileHub_obj > _hx_result = new AWSMobileHub_obj();
	_hx_result->__construct();
	return _hx_result;
}

void AWSMobileHub_obj::helloFromMobileHub(){
            	HX_STACK_FRAME("aws.mobile.AWSMobileHub","helloFromMobileHub",0x9b4d5014,"aws.mobile.AWSMobileHub.helloFromMobileHub","aws/mobile/AWSMobileHub.hx",14,0x2b3436cd)
            	AWSMobileHub::helloFromMobileHub;

            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AWSMobileHub_obj,helloFromMobileHub,(void))


AWSMobileHub_obj::AWSMobileHub_obj()
{
}

bool AWSMobileHub_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"helloFromMobileHub") ) { outValue = helloFromMobileHub_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *AWSMobileHub_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *AWSMobileHub_obj_sStaticStorageInfo = 0;
#endif

static void AWSMobileHub_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AWSMobileHub_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AWSMobileHub_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AWSMobileHub_obj::__mClass,"__mClass");
};

#endif

hx::Class AWSMobileHub_obj::__mClass;

static ::String AWSMobileHub_obj_sStaticFields[] = {
	HX_HCSTRING("helloFromMobileHub","\x37","\x1c","\xde","\x20"),
	::String(null())
};

void AWSMobileHub_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("aws.mobile.AWSMobileHub","\x71","\x5a","\x97","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AWSMobileHub_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AWSMobileHub_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(AWSMobileHub_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AWSMobileHub_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AWSMobileHub_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AWSMobileHub_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AWSMobileHub_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace aws
} // end namespace mobile