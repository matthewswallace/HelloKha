// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_VertexData
#include <kha/graphics4/VertexData.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::VertexData VertexData_obj::Float1;

::kha::graphics4::VertexData VertexData_obj::Float2;

::kha::graphics4::VertexData VertexData_obj::Float3;

::kha::graphics4::VertexData VertexData_obj::Float4;

::kha::graphics4::VertexData VertexData_obj::Float4x4;

bool VertexData_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Float1",35,97,ea,75)) { outValue = VertexData_obj::Float1; return true; }
	if (inName==HX_("Float2",36,97,ea,75)) { outValue = VertexData_obj::Float2; return true; }
	if (inName==HX_("Float3",37,97,ea,75)) { outValue = VertexData_obj::Float3; return true; }
	if (inName==HX_("Float4",38,97,ea,75)) { outValue = VertexData_obj::Float4; return true; }
	if (inName==HX_("Float4x4",f4,3d,29,b7)) { outValue = VertexData_obj::Float4x4; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(VertexData_obj)

int VertexData_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Float1",35,97,ea,75)) return 0;
	if (inName==HX_("Float2",36,97,ea,75)) return 1;
	if (inName==HX_("Float3",37,97,ea,75)) return 2;
	if (inName==HX_("Float4",38,97,ea,75)) return 3;
	if (inName==HX_("Float4x4",f4,3d,29,b7)) return 4;
	return super::__FindIndex(inName);
}

int VertexData_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Float1",35,97,ea,75)) return 0;
	if (inName==HX_("Float2",36,97,ea,75)) return 0;
	if (inName==HX_("Float3",37,97,ea,75)) return 0;
	if (inName==HX_("Float4",38,97,ea,75)) return 0;
	if (inName==HX_("Float4x4",f4,3d,29,b7)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val VertexData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Float1",35,97,ea,75)) return Float1;
	if (inName==HX_("Float2",36,97,ea,75)) return Float2;
	if (inName==HX_("Float3",37,97,ea,75)) return Float3;
	if (inName==HX_("Float4",38,97,ea,75)) return Float4;
	if (inName==HX_("Float4x4",f4,3d,29,b7)) return Float4x4;
	return super::__Field(inName,inCallProp);
}

static ::String VertexData_obj_sStaticFields[] = {
	HX_("Float1",35,97,ea,75),
	HX_("Float2",36,97,ea,75),
	HX_("Float3",37,97,ea,75),
	HX_("Float4",38,97,ea,75),
	HX_("Float4x4",f4,3d,29,b7),
	::String(null())
};

static void VertexData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexData_obj::Float1,"Float1");
	HX_MARK_MEMBER_NAME(VertexData_obj::Float2,"Float2");
	HX_MARK_MEMBER_NAME(VertexData_obj::Float3,"Float3");
	HX_MARK_MEMBER_NAME(VertexData_obj::Float4,"Float4");
	HX_MARK_MEMBER_NAME(VertexData_obj::Float4x4,"Float4x4");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VertexData_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VertexData_obj::Float1,"Float1");
	HX_VISIT_MEMBER_NAME(VertexData_obj::Float2,"Float2");
	HX_VISIT_MEMBER_NAME(VertexData_obj::Float3,"Float3");
	HX_VISIT_MEMBER_NAME(VertexData_obj::Float4,"Float4");
	HX_VISIT_MEMBER_NAME(VertexData_obj::Float4x4,"Float4x4");
};
#endif

hx::Class VertexData_obj::__mClass;

Dynamic __Create_VertexData_obj() { return new VertexData_obj; }

void VertexData_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("kha.graphics4.VertexData","\x9d","\xbf","\x53","\x87"), hx::TCanCast< VertexData_obj >,VertexData_obj_sStaticFields,0,
	&__Create_VertexData_obj, &__Create,
	&super::__SGetClass(), &CreateVertexData_obj, VertexData_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , VertexData_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &VertexData_obj::__GetStatic;
}

void VertexData_obj::__boot()
{
Float1 = hx::CreateEnum< VertexData_obj >(HX_HCSTRING("Float1","\x35","\x97","\xea","\x75"),0,0);
Float2 = hx::CreateEnum< VertexData_obj >(HX_HCSTRING("Float2","\x36","\x97","\xea","\x75"),1,0);
Float3 = hx::CreateEnum< VertexData_obj >(HX_HCSTRING("Float3","\x37","\x97","\xea","\x75"),2,0);
Float4 = hx::CreateEnum< VertexData_obj >(HX_HCSTRING("Float4","\x38","\x97","\xea","\x75"),3,0);
Float4x4 = hx::CreateEnum< VertexData_obj >(HX_HCSTRING("Float4x4","\xf4","\x3d","\x29","\xb7"),4,0);
}


} // end namespace kha
} // end namespace graphics4
