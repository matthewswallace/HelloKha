// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_network_Client
#include <kha/network/Client.h>
#endif

namespace kha{
namespace network{


static ::String Client_obj_sMemberFields[] = {
	HX_HCSTRING("get_id","\x24","\xf3","\x2f","\xa3"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("send","\x48","\x8d","\x50","\x4c"),
	HX_HCSTRING("receive","\xe3","\x61","\x58","\x2a"),
	HX_HCSTRING("onClose","\x19","\xb6","\xa0","\xde"),
	::String(null()) };

static void Client_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Client_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Client_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Client_obj::__mClass,"__mClass");
};

#endif

hx::Class Client_obj::__mClass;

void Client_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.network.Client","\x35","\x53","\x75","\xee");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = Client_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(Client_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0xe7ca9475 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Client_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace network
