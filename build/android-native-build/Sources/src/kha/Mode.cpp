// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_kha_Mode
#include <kha/Mode.h>
#endif
namespace kha{

::kha::Mode Mode_obj::BorderlessWindow;

::kha::Mode Mode_obj::Fullscreen;

::kha::Mode Mode_obj::Window;

bool Mode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BorderlessWindow",35,ac,0e,77)) { outValue = Mode_obj::BorderlessWindow; return true; }
	if (inName==HX_("Fullscreen",5b,3e,65,f0)) { outValue = Mode_obj::Fullscreen; return true; }
	if (inName==HX_("Window",10,08,21,87)) { outValue = Mode_obj::Window; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Mode_obj)

int Mode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BorderlessWindow",35,ac,0e,77)) return 1;
	if (inName==HX_("Fullscreen",5b,3e,65,f0)) return 2;
	if (inName==HX_("Window",10,08,21,87)) return 0;
	return super::__FindIndex(inName);
}

int Mode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BorderlessWindow",35,ac,0e,77)) return 0;
	if (inName==HX_("Fullscreen",5b,3e,65,f0)) return 0;
	if (inName==HX_("Window",10,08,21,87)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val Mode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BorderlessWindow",35,ac,0e,77)) return BorderlessWindow;
	if (inName==HX_("Fullscreen",5b,3e,65,f0)) return Fullscreen;
	if (inName==HX_("Window",10,08,21,87)) return Window;
	return super::__Field(inName,inCallProp);
}

static ::String Mode_obj_sStaticFields[] = {
	HX_("Window",10,08,21,87),
	HX_("BorderlessWindow",35,ac,0e,77),
	HX_("Fullscreen",5b,3e,65,f0),
	::String(null())
};

static void Mode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mode_obj::BorderlessWindow,"BorderlessWindow");
	HX_MARK_MEMBER_NAME(Mode_obj::Fullscreen,"Fullscreen");
	HX_MARK_MEMBER_NAME(Mode_obj::Window,"Window");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Mode_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Mode_obj::BorderlessWindow,"BorderlessWindow");
	HX_VISIT_MEMBER_NAME(Mode_obj::Fullscreen,"Fullscreen");
	HX_VISIT_MEMBER_NAME(Mode_obj::Window,"Window");
};
#endif

hx::Class Mode_obj::__mClass;

Dynamic __Create_Mode_obj() { return new Mode_obj; }

void Mode_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("kha.Mode","\x0d","\xa0","\x14","\x45"), hx::TCanCast< Mode_obj >,Mode_obj_sStaticFields,0,
	&__Create_Mode_obj, &__Create,
	&super::__SGetClass(), &CreateMode_obj, Mode_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , Mode_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Mode_obj::__GetStatic;
}

void Mode_obj::__boot()
{
BorderlessWindow = hx::CreateEnum< Mode_obj >(HX_HCSTRING("BorderlessWindow","\x35","\xac","\x0e","\x77"),1,0);
Fullscreen = hx::CreateEnum< Mode_obj >(HX_HCSTRING("Fullscreen","\x5b","\x3e","\x65","\xf0"),2,0);
Window = hx::CreateEnum< Mode_obj >(HX_HCSTRING("Window","\x10","\x08","\x21","\x87"),0,0);
}


} // end namespace kha
