// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_kha_ScreenRotation
#include <kha/ScreenRotation.h>
#endif
namespace kha{

::kha::ScreenRotation ScreenRotation_obj::Rotation180;

::kha::ScreenRotation ScreenRotation_obj::Rotation270;

::kha::ScreenRotation ScreenRotation_obj::Rotation90;

::kha::ScreenRotation ScreenRotation_obj::RotationNone;

bool ScreenRotation_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Rotation180",cb,14,91,ee)) { outValue = ScreenRotation_obj::Rotation180; return true; }
	if (inName==HX_("Rotation270",2d,d6,91,ee)) { outValue = ScreenRotation_obj::Rotation270; return true; }
	if (inName==HX_("Rotation90",b5,be,2f,db)) { outValue = ScreenRotation_obj::Rotation90; return true; }
	if (inName==HX_("RotationNone",36,3f,b6,e3)) { outValue = ScreenRotation_obj::RotationNone; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ScreenRotation_obj)

int ScreenRotation_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Rotation180",cb,14,91,ee)) return 2;
	if (inName==HX_("Rotation270",2d,d6,91,ee)) return 3;
	if (inName==HX_("Rotation90",b5,be,2f,db)) return 1;
	if (inName==HX_("RotationNone",36,3f,b6,e3)) return 0;
	return super::__FindIndex(inName);
}

int ScreenRotation_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Rotation180",cb,14,91,ee)) return 0;
	if (inName==HX_("Rotation270",2d,d6,91,ee)) return 0;
	if (inName==HX_("Rotation90",b5,be,2f,db)) return 0;
	if (inName==HX_("RotationNone",36,3f,b6,e3)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val ScreenRotation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Rotation180",cb,14,91,ee)) return Rotation180;
	if (inName==HX_("Rotation270",2d,d6,91,ee)) return Rotation270;
	if (inName==HX_("Rotation90",b5,be,2f,db)) return Rotation90;
	if (inName==HX_("RotationNone",36,3f,b6,e3)) return RotationNone;
	return super::__Field(inName,inCallProp);
}

static ::String ScreenRotation_obj_sStaticFields[] = {
	HX_("RotationNone",36,3f,b6,e3),
	HX_("Rotation90",b5,be,2f,db),
	HX_("Rotation180",cb,14,91,ee),
	HX_("Rotation270",2d,d6,91,ee),
	::String(null())
};

static void ScreenRotation_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScreenRotation_obj::Rotation180,"Rotation180");
	HX_MARK_MEMBER_NAME(ScreenRotation_obj::Rotation270,"Rotation270");
	HX_MARK_MEMBER_NAME(ScreenRotation_obj::Rotation90,"Rotation90");
	HX_MARK_MEMBER_NAME(ScreenRotation_obj::RotationNone,"RotationNone");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ScreenRotation_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScreenRotation_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ScreenRotation_obj::Rotation180,"Rotation180");
	HX_VISIT_MEMBER_NAME(ScreenRotation_obj::Rotation270,"Rotation270");
	HX_VISIT_MEMBER_NAME(ScreenRotation_obj::Rotation90,"Rotation90");
	HX_VISIT_MEMBER_NAME(ScreenRotation_obj::RotationNone,"RotationNone");
};
#endif

hx::Class ScreenRotation_obj::__mClass;

Dynamic __Create_ScreenRotation_obj() { return new ScreenRotation_obj; }

void ScreenRotation_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("kha.ScreenRotation","\xf4","\x85","\x3e","\xbb"), hx::TCanCast< ScreenRotation_obj >,ScreenRotation_obj_sStaticFields,0,
	&__Create_ScreenRotation_obj, &__Create,
	&super::__SGetClass(), &CreateScreenRotation_obj, ScreenRotation_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , ScreenRotation_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ScreenRotation_obj::__GetStatic;
}

void ScreenRotation_obj::__boot()
{
Rotation180 = hx::CreateEnum< ScreenRotation_obj >(HX_HCSTRING("Rotation180","\xcb","\x14","\x91","\xee"),2,0);
Rotation270 = hx::CreateEnum< ScreenRotation_obj >(HX_HCSTRING("Rotation270","\x2d","\xd6","\x91","\xee"),3,0);
Rotation90 = hx::CreateEnum< ScreenRotation_obj >(HX_HCSTRING("Rotation90","\xb5","\xbe","\x2f","\xdb"),1,0);
RotationNone = hx::CreateEnum< ScreenRotation_obj >(HX_HCSTRING("RotationNone","\x36","\x3f","\xb6","\xe3"),0,0);
}


} // end namespace kha
