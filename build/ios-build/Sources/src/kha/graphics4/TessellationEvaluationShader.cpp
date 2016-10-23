// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_graphics4_TessellationEvaluationShader
#include <kha/graphics4/TessellationEvaluationShader.h>
#endif


#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

namespace kha{
namespace graphics4{

void TessellationEvaluationShader_obj::__construct( ::kha::Blob source,::String file){
            	HX_STACK_FRAME("kha.graphics4.TessellationEvaluationShader","new",0x79e3da03,"kha.graphics4.TessellationEvaluationShader.new","kha/graphics4/TessellationEvaluationShader.hx",20,0x6f0781cb)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(file,"file")
HXLINE(  20)		shader = new Kore::Shader(source->bytes->b->Pointer(), source->get_length(), Kore::TessellationEvaluationShader);;
            	}

Dynamic TessellationEvaluationShader_obj::__CreateEmpty() { return new TessellationEvaluationShader_obj; }

hx::ObjectPtr< TessellationEvaluationShader_obj > TessellationEvaluationShader_obj::__new( ::kha::Blob source,::String file)
{
	hx::ObjectPtr< TessellationEvaluationShader_obj > _hx_result = new TessellationEvaluationShader_obj();
	_hx_result->__construct(source,file);
	return _hx_result;
}

Dynamic TessellationEvaluationShader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TessellationEvaluationShader_obj > _hx_result = new TessellationEvaluationShader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

void TessellationEvaluationShader_obj::_hx_delete(){
            	HX_STACK_FRAME("kha.graphics4.TessellationEvaluationShader","delete",0xa9f21e68,"kha.graphics4.TessellationEvaluationShader.delete","kha/graphics4/TessellationEvaluationShader.hx",24,0x6f0781cb)
            	HX_STACK_THIS(this)
HXLINE(  24)		delete shader; shader = nullptr;;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TessellationEvaluationShader_obj,_hx_delete,(void))


TessellationEvaluationShader_obj::TessellationEvaluationShader_obj()
{
}

hx::Val TessellationEvaluationShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"delete") ) { return hx::Val( _hx_delete_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TessellationEvaluationShader_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *TessellationEvaluationShader_obj_sStaticStorageInfo = 0;
#endif

static ::String TessellationEvaluationShader_obj_sMemberFields[] = {
	HX_HCSTRING("delete","\x2b","\xc0","\xd8","\x6a"),
	::String(null()) };

static void TessellationEvaluationShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TessellationEvaluationShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TessellationEvaluationShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TessellationEvaluationShader_obj::__mClass,"__mClass");
};

#endif

hx::Class TessellationEvaluationShader_obj::__mClass;

void TessellationEvaluationShader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.TessellationEvaluationShader","\x91","\x1c","\xd0","\x7d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TessellationEvaluationShader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TessellationEvaluationShader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TessellationEvaluationShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TessellationEvaluationShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TessellationEvaluationShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TessellationEvaluationShader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics4