// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_kha_audio1_AudioChannel
#include <kha/audio1/AudioChannel.h>
#endif

namespace kha{
namespace audio1{


static ::String AudioChannel_obj_sMemberFields[] = {
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("get_volume","\xa3","\x99","\xda","\x4f"),
	HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"),
	HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"),
	HX_HCSTRING("get_finished","\x7b","\x47","\x28","\x4a"),
	::String(null()) };

static void AudioChannel_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioChannel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AudioChannel_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioChannel_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioChannel_obj::__mClass;

void AudioChannel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio1.AudioChannel","\x16","\x73","\xec","\xbd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = AudioChannel_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(AudioChannel_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x78040b2c >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AudioChannel_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace audio1
