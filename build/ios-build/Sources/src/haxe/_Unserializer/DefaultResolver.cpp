// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe__Unserializer_DefaultResolver
#include <haxe/_Unserializer/DefaultResolver.h>
#endif

namespace haxe{
namespace _Unserializer{

void DefaultResolver_obj::__construct(){
            	HX_STACK_FRAME("haxe._Unserializer.DefaultResolver","new",0xe2809ead,"haxe._Unserializer.DefaultResolver.new","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/Unserializer.hx",471,0x3d700168)
            	HX_STACK_THIS(this)
            	}

Dynamic DefaultResolver_obj::__CreateEmpty() { return new DefaultResolver_obj; }

hx::ObjectPtr< DefaultResolver_obj > DefaultResolver_obj::__new()
{
	hx::ObjectPtr< DefaultResolver_obj > _hx_result = new DefaultResolver_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic DefaultResolver_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DefaultResolver_obj > _hx_result = new DefaultResolver_obj();
	_hx_result->__construct();
	return _hx_result;
}

hx::Class DefaultResolver_obj::resolveClass(::String name){
            	HX_STACK_FRAME("haxe._Unserializer.DefaultResolver","resolveClass",0xbc0d3dbf,"haxe._Unserializer.DefaultResolver.resolveClass","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/Unserializer.hx",472,0x3d700168)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(name,"name")
HXLINE( 472)		return ::Type_obj::resolveClass(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultResolver_obj,resolveClass,return )

hx::Class DefaultResolver_obj::resolveEnum(::String name){
            	HX_STACK_FRAME("haxe._Unserializer.DefaultResolver","resolveEnum",0x8198f35a,"haxe._Unserializer.DefaultResolver.resolveEnum","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/Unserializer.hx",473,0x3d700168)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(name,"name")
HXLINE( 473)		return ::Type_obj::resolveEnum(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultResolver_obj,resolveEnum,return )


DefaultResolver_obj::DefaultResolver_obj()
{
}

hx::Val DefaultResolver_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { return hx::Val( resolveEnum_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveClass") ) { return hx::Val( resolveClass_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DefaultResolver_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DefaultResolver_obj_sStaticStorageInfo = 0;
#endif

static ::String DefaultResolver_obj_sMemberFields[] = {
	HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80"),
	HX_HCSTRING("resolveEnum","\x0d","\x90","\x51","\xde"),
	::String(null()) };

static void DefaultResolver_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultResolver_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DefaultResolver_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultResolver_obj::__mClass,"__mClass");
};

#endif

hx::Class DefaultResolver_obj::__mClass;

void DefaultResolver_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe._Unserializer.DefaultResolver","\x3b","\xc4","\x6e","\x72");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DefaultResolver_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DefaultResolver_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefaultResolver_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DefaultResolver_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultResolver_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultResolver_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace _Unserializer
