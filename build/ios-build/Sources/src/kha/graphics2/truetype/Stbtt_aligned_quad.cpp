// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_aligned_quad
#include <kha/graphics2/truetype/Stbtt_aligned_quad.h>
#endif

namespace kha{
namespace graphics2{
namespace truetype{

void Stbtt_aligned_quad_obj::__construct() { }

Dynamic Stbtt_aligned_quad_obj::__CreateEmpty() { return new Stbtt_aligned_quad_obj; }

hx::ObjectPtr< Stbtt_aligned_quad_obj > Stbtt_aligned_quad_obj::__new()
{
	hx::ObjectPtr< Stbtt_aligned_quad_obj > _hx_result = new Stbtt_aligned_quad_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Stbtt_aligned_quad_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Stbtt_aligned_quad_obj > _hx_result = new Stbtt_aligned_quad_obj();
	_hx_result->__construct();
	return _hx_result;
}


Stbtt_aligned_quad_obj::Stbtt_aligned_quad_obj()
{
}

hx::Val Stbtt_aligned_quad_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { return hx::Val( x0); }
		if (HX_FIELD_EQ(inName,"y0") ) { return hx::Val( y0); }
		if (HX_FIELD_EQ(inName,"s0") ) { return hx::Val( s0); }
		if (HX_FIELD_EQ(inName,"t0") ) { return hx::Val( t0); }
		if (HX_FIELD_EQ(inName,"x1") ) { return hx::Val( x1); }
		if (HX_FIELD_EQ(inName,"y1") ) { return hx::Val( y1); }
		if (HX_FIELD_EQ(inName,"s1") ) { return hx::Val( s1); }
		if (HX_FIELD_EQ(inName,"t1") ) { return hx::Val( t1); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Stbtt_aligned_quad_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { x0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y0") ) { y0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s0") ) { s0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"t0") ) { t0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x1") ) { x1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y1") ) { y1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s1") ) { s1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"t1") ) { t1=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stbtt_aligned_quad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x0","\xb8","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("y0","\x97","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("s0","\x5d","\x64","\x00","\x00"));
	outFields->push(HX_HCSTRING("t0","\x3c","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("x1","\xb9","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("y1","\x98","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("s1","\x5e","\x64","\x00","\x00"));
	outFields->push(HX_HCSTRING("t1","\x3d","\x65","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Stbtt_aligned_quad_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Stbtt_aligned_quad_obj,x0),HX_HCSTRING("x0","\xb8","\x68","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt_aligned_quad_obj,y0),HX_HCSTRING("y0","\x97","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt_aligned_quad_obj,s0),HX_HCSTRING("s0","\x5d","\x64","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt_aligned_quad_obj,t0),HX_HCSTRING("t0","\x3c","\x65","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt_aligned_quad_obj,x1),HX_HCSTRING("x1","\xb9","\x68","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt_aligned_quad_obj,y1),HX_HCSTRING("y1","\x98","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt_aligned_quad_obj,s1),HX_HCSTRING("s1","\x5e","\x64","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt_aligned_quad_obj,t1),HX_HCSTRING("t1","\x3d","\x65","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Stbtt_aligned_quad_obj_sStaticStorageInfo = 0;
#endif

static ::String Stbtt_aligned_quad_obj_sMemberFields[] = {
	HX_HCSTRING("x0","\xb8","\x68","\x00","\x00"),
	HX_HCSTRING("y0","\x97","\x69","\x00","\x00"),
	HX_HCSTRING("s0","\x5d","\x64","\x00","\x00"),
	HX_HCSTRING("t0","\x3c","\x65","\x00","\x00"),
	HX_HCSTRING("x1","\xb9","\x68","\x00","\x00"),
	HX_HCSTRING("y1","\x98","\x69","\x00","\x00"),
	HX_HCSTRING("s1","\x5e","\x64","\x00","\x00"),
	HX_HCSTRING("t1","\x3d","\x65","\x00","\x00"),
	::String(null()) };

static void Stbtt_aligned_quad_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stbtt_aligned_quad_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Stbtt_aligned_quad_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stbtt_aligned_quad_obj::__mClass,"__mClass");
};

#endif

hx::Class Stbtt_aligned_quad_obj::__mClass;

void Stbtt_aligned_quad_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics2.truetype.Stbtt_aligned_quad","\xb5","\xf1","\x0b","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Stbtt_aligned_quad_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Stbtt_aligned_quad_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stbtt_aligned_quad_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Stbtt_aligned_quad_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stbtt_aligned_quad_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stbtt_aligned_quad_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype
