// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_kha_input_SensorType
#include <kha/input/SensorType.h>
#endif
namespace kha{
namespace input{

::kha::input::SensorType SensorType_obj::Accelerometer;

::kha::input::SensorType SensorType_obj::Gyroscope;

bool SensorType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Accelerometer",af,6e,ff,50)) { outValue = SensorType_obj::Accelerometer; return true; }
	if (inName==HX_("Gyroscope",a5,70,d1,e8)) { outValue = SensorType_obj::Gyroscope; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(SensorType_obj)

int SensorType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Accelerometer",af,6e,ff,50)) return 0;
	if (inName==HX_("Gyroscope",a5,70,d1,e8)) return 1;
	return super::__FindIndex(inName);
}

int SensorType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Accelerometer",af,6e,ff,50)) return 0;
	if (inName==HX_("Gyroscope",a5,70,d1,e8)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val SensorType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Accelerometer",af,6e,ff,50)) return Accelerometer;
	if (inName==HX_("Gyroscope",a5,70,d1,e8)) return Gyroscope;
	return super::__Field(inName,inCallProp);
}

static ::String SensorType_obj_sStaticFields[] = {
	HX_("Accelerometer",af,6e,ff,50),
	HX_("Gyroscope",a5,70,d1,e8),
	::String(null())
};

static void SensorType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SensorType_obj::Accelerometer,"Accelerometer");
	HX_MARK_MEMBER_NAME(SensorType_obj::Gyroscope,"Gyroscope");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SensorType_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SensorType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SensorType_obj::Accelerometer,"Accelerometer");
	HX_VISIT_MEMBER_NAME(SensorType_obj::Gyroscope,"Gyroscope");
};
#endif

hx::Class SensorType_obj::__mClass;

Dynamic __Create_SensorType_obj() { return new SensorType_obj; }

void SensorType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("kha.input.SensorType","\xa2","\x8b","\xd2","\x1f"), hx::TCanCast< SensorType_obj >,SensorType_obj_sStaticFields,0,
	&__Create_SensorType_obj, &__Create,
	&super::__SGetClass(), &CreateSensorType_obj, SensorType_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , SensorType_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &SensorType_obj::__GetStatic;
}

void SensorType_obj::__boot()
{
Accelerometer = hx::CreateEnum< SensorType_obj >(HX_HCSTRING("Accelerometer","\xaf","\x6e","\xff","\x50"),0,0);
Gyroscope = hx::CreateEnum< SensorType_obj >(HX_HCSTRING("Gyroscope","\xa5","\x70","\xd1","\xe8"),1,0);
}


} // end namespace kha
} // end namespace input
