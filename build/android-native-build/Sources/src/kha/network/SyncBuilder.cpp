// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_kha_network_SyncBuilder
#include <kha/network/SyncBuilder.h>
#endif

namespace kha{
namespace network{

void SyncBuilder_obj::__construct() { }

Dynamic SyncBuilder_obj::__CreateEmpty() { return new SyncBuilder_obj; }

hx::ObjectPtr< SyncBuilder_obj > SyncBuilder_obj::__new()
{
	hx::ObjectPtr< SyncBuilder_obj > _hx_result = new SyncBuilder_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic SyncBuilder_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SyncBuilder_obj > _hx_result = new SyncBuilder_obj();
	_hx_result->__construct();
	return _hx_result;
}

Int SyncBuilder_obj::nextId;

::cpp::VirtualArray SyncBuilder_obj::objects;


SyncBuilder_obj::SyncBuilder_obj()
{
}

bool SyncBuilder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"nextId") ) { outValue = nextId; return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { outValue = objects; return true; }
	}
	return false;
}

bool SyncBuilder_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"nextId") ) { nextId=ioValue.Cast< Int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { objects=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SyncBuilder_obj_sMemberStorageInfo = 0;
static hx::StaticInfo SyncBuilder_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &SyncBuilder_obj::nextId,HX_HCSTRING("nextId","\xae","\x27","\x64","\x72")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &SyncBuilder_obj::objects,HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void SyncBuilder_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SyncBuilder_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SyncBuilder_obj::nextId,"nextId");
	HX_MARK_MEMBER_NAME(SyncBuilder_obj::objects,"objects");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SyncBuilder_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SyncBuilder_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SyncBuilder_obj::nextId,"nextId");
	HX_VISIT_MEMBER_NAME(SyncBuilder_obj::objects,"objects");
};

#endif

hx::Class SyncBuilder_obj::__mClass;

static ::String SyncBuilder_obj_sStaticFields[] = {
	HX_HCSTRING("nextId","\xae","\x27","\x64","\x72"),
	HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"),
	::String(null())
};

void SyncBuilder_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.network.SyncBuilder","\xd6","\x00","\xb6","\xd4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SyncBuilder_obj::__GetStatic;
	__mClass->mSetStaticField = &SyncBuilder_obj::__SetStatic;
	__mClass->mMarkFunc = SyncBuilder_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(SyncBuilder_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SyncBuilder_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SyncBuilder_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SyncBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SyncBuilder_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SyncBuilder_obj::__boot()
{
{
            	HX_STACK_FRAME("kha.network.SyncBuilder","boot",0xa5736aca,"kha.network.SyncBuilder.boot","kha/network/SyncBuilder.hx",8,0x23cf542a)
HXLINE(   8)		nextId = (int)0;
            	}
{
            	HX_STACK_FRAME("kha.network.SyncBuilder","boot",0xa5736aca,"kha.network.SyncBuilder.boot","kha/network/SyncBuilder.hx",9,0x23cf542a)
HXLINE(   9)		objects = ::cpp::VirtualArray_obj::__new();
            	}
}

} // end namespace kha
} // end namespace network