// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_MappingChannel
#include <kha/audio2/ogg/vorbis/data/MappingChannel.h>
#endif

namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

void MappingChannel_obj::__construct(){
            	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.MappingChannel","new",0x33acd197,"kha.audio2.ogg.vorbis.data.MappingChannel.new","kha/audio2/ogg/vorbis/data/Mapping.hx",125,0x30bf6281)
            	HX_STACK_THIS(this)
            	}

Dynamic MappingChannel_obj::__CreateEmpty() { return new MappingChannel_obj; }

hx::ObjectPtr< MappingChannel_obj > MappingChannel_obj::__new()
{
	hx::ObjectPtr< MappingChannel_obj > _hx_result = new MappingChannel_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic MappingChannel_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MappingChannel_obj > _hx_result = new MappingChannel_obj();
	_hx_result->__construct();
	return _hx_result;
}


MappingChannel_obj::MappingChannel_obj()
{
}

hx::Val MappingChannel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mux") ) { return hx::Val( mux); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return hx::Val( angle); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magnitude") ) { return hx::Val( magnitude); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MappingChannel_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mux") ) { mux=inValue.Cast< Int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magnitude") ) { magnitude=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MappingChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("magnitude","\xd0","\x33","\x64","\xf5"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("mux","\x10","\x1c","\x53","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MappingChannel_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MappingChannel_obj,magnitude),HX_HCSTRING("magnitude","\xd0","\x33","\x64","\xf5")},
	{hx::fsInt,(int)offsetof(MappingChannel_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsInt,(int)offsetof(MappingChannel_obj,mux),HX_HCSTRING("mux","\x10","\x1c","\x53","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MappingChannel_obj_sStaticStorageInfo = 0;
#endif

static ::String MappingChannel_obj_sMemberFields[] = {
	HX_HCSTRING("magnitude","\xd0","\x33","\x64","\xf5"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("mux","\x10","\x1c","\x53","\x00"),
	::String(null()) };

static void MappingChannel_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MappingChannel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MappingChannel_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MappingChannel_obj::__mClass,"__mClass");
};

#endif

hx::Class MappingChannel_obj::__mClass;

void MappingChannel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.data.MappingChannel","\x25","\xba","\x38","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MappingChannel_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MappingChannel_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MappingChannel_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MappingChannel_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MappingChannel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MappingChannel_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data
