// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_kha_ImageList
#include <kha/ImageList.h>
#endif

namespace kha{

void ImageList_obj::__construct(){
            	HX_STACK_FRAME("kha.ImageList","new",0x515fc0e1,"kha.ImageList.new","kha/internal/AssetsBuilder.hx",203,0x6901246d)
            	HX_STACK_THIS(this)
HXLINE( 203)		this->names = ::Array_obj< ::String >::__new(0);
            	}

Dynamic ImageList_obj::__CreateEmpty() { return new ImageList_obj; }

hx::ObjectPtr< ImageList_obj > ImageList_obj::__new()
{
	hx::ObjectPtr< ImageList_obj > _hx_result = new ImageList_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic ImageList_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ImageList_obj > _hx_result = new ImageList_obj();
	_hx_result->__construct();
	return _hx_result;
}


ImageList_obj::ImageList_obj()
{
}

void ImageList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageList);
	HX_MARK_MEMBER_NAME(names,"names");
	HX_MARK_END_CLASS();
}

void ImageList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(names,"names");
}

hx::Val ImageList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"names") ) { return hx::Val( names); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ImageList_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"names") ) { names=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("names","\xc8","\x8f","\x84","\x96"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ImageList_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ImageList_obj,names),HX_HCSTRING("names","\xc8","\x8f","\x84","\x96")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ImageList_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageList_obj_sMemberFields[] = {
	HX_HCSTRING("names","\xc8","\x8f","\x84","\x96"),
	::String(null()) };

static void ImageList_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ImageList_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageList_obj::__mClass,"__mClass");
};

#endif

hx::Class ImageList_obj::__mClass;

void ImageList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.ImageList","\x6f","\xbc","\x9b","\x0a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ImageList_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ImageList_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ImageList_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ImageList_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageList_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
