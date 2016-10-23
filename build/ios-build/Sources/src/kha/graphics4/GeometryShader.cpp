// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_graphics4_GeometryShader
#include <kha/graphics4/GeometryShader.h>
#endif


#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

namespace kha{
namespace graphics4{

void GeometryShader_obj::__construct( ::kha::Blob source,::String file){
            	HX_STACK_FRAME("kha.graphics4.GeometryShader","new",0x699e56d8,"kha.graphics4.GeometryShader.new","kha/graphics4/GeometryShader.hx",20,0x31a51616)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(file,"file")
HXLINE(  20)		shader = new Kore::Shader(source->bytes->b->Pointer(), source->get_length(), Kore::GeometryShader);;
            	}

Dynamic GeometryShader_obj::__CreateEmpty() { return new GeometryShader_obj; }

hx::ObjectPtr< GeometryShader_obj > GeometryShader_obj::__new( ::kha::Blob source,::String file)
{
	hx::ObjectPtr< GeometryShader_obj > _hx_result = new GeometryShader_obj();
	_hx_result->__construct(source,file);
	return _hx_result;
}

Dynamic GeometryShader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GeometryShader_obj > _hx_result = new GeometryShader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

void GeometryShader_obj::_hx_delete(){
            	HX_STACK_FRAME("kha.graphics4.GeometryShader","delete",0x4db794b3,"kha.graphics4.GeometryShader.delete","kha/graphics4/GeometryShader.hx",24,0x31a51616)
            	HX_STACK_THIS(this)
HXLINE(  24)		delete shader; shader = nullptr;;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GeometryShader_obj,_hx_delete,(void))


GeometryShader_obj::GeometryShader_obj()
{
}

hx::Val GeometryShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"delete") ) { return hx::Val( _hx_delete_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GeometryShader_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GeometryShader_obj_sStaticStorageInfo = 0;
#endif

static ::String GeometryShader_obj_sMemberFields[] = {
	HX_HCSTRING("delete","\x2b","\xc0","\xd8","\x6a"),
	::String(null()) };

static void GeometryShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeometryShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GeometryShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeometryShader_obj::__mClass,"__mClass");
};

#endif

hx::Class GeometryShader_obj::__mClass;

void GeometryShader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.GeometryShader","\xe6","\x4a","\xcc","\x5f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GeometryShader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GeometryShader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GeometryShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GeometryShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GeometryShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GeometryShader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics4