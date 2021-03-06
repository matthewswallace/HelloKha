// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_graphics4_FragmentShader
#include <kha/graphics4/FragmentShader.h>
#endif


#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

namespace kha{
namespace graphics4{

void FragmentShader_obj::__construct( ::kha::Blob source,::String file){
            	HX_STACK_FRAME("kha.graphics4.FragmentShader","new",0x0ee18576,"kha.graphics4.FragmentShader.new","kha/graphics4/FragmentShader.hx",20,0xa52f2538)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(file,"file")
HXLINE(  20)		shader = new Kore::Shader(source->bytes->b->Pointer(), source->get_length(), Kore::FragmentShader);;
            	}

Dynamic FragmentShader_obj::__CreateEmpty() { return new FragmentShader_obj; }

hx::ObjectPtr< FragmentShader_obj > FragmentShader_obj::__new( ::kha::Blob source,::String file)
{
	hx::ObjectPtr< FragmentShader_obj > _hx_result = new FragmentShader_obj();
	_hx_result->__construct(source,file);
	return _hx_result;
}

Dynamic FragmentShader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FragmentShader_obj > _hx_result = new FragmentShader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

void FragmentShader_obj::_hx_delete(){
            	HX_STACK_FRAME("kha.graphics4.FragmentShader","delete",0xe494dcd5,"kha.graphics4.FragmentShader.delete","kha/graphics4/FragmentShader.hx",24,0xa52f2538)
            	HX_STACK_THIS(this)
HXLINE(  24)		delete shader; shader = nullptr;;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FragmentShader_obj,_hx_delete,(void))


FragmentShader_obj::FragmentShader_obj()
{
}

hx::Val FragmentShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"delete") ) { return hx::Val( _hx_delete_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FragmentShader_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FragmentShader_obj_sStaticStorageInfo = 0;
#endif

static ::String FragmentShader_obj_sMemberFields[] = {
	HX_HCSTRING("delete","\x2b","\xc0","\xd8","\x6a"),
	::String(null()) };

static void FragmentShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FragmentShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FragmentShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FragmentShader_obj::__mClass,"__mClass");
};

#endif

hx::Class FragmentShader_obj::__mClass;

void FragmentShader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.FragmentShader","\x84","\x52","\xb0","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FragmentShader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FragmentShader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FragmentShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FragmentShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FragmentShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FragmentShader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics4
