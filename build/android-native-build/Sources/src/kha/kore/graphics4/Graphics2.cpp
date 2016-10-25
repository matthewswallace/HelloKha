// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Video
#include <kha/Video.h>
#endif
#ifndef INCLUDED_kha__Color_Color_Impl_
#include <kha/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics2
#include <kha/graphics4/Graphics2.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_Graphics2
#include <kha/kore/graphics4/Graphics2.h>
#endif

namespace kha{
namespace kore{
namespace graphics4{

void Graphics2_obj::__construct(::Dynamic canvas){
            	HX_STACK_FRAME("kha.kore.graphics4.Graphics2","new",0xb7f77ea7,"kha.kore.graphics4.Graphics2.new","kha/kore/graphics4/Graphics2.hx",10,0x0241748a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(canvas,"canvas")
HXLINE(  10)		super::__construct(canvas);
            	}

Dynamic Graphics2_obj::__CreateEmpty() { return new Graphics2_obj; }

hx::ObjectPtr< Graphics2_obj > Graphics2_obj::__new(::Dynamic canvas)
{
	hx::ObjectPtr< Graphics2_obj > _hx_result = new Graphics2_obj();
	_hx_result->__construct(canvas);
	return _hx_result;
}

Dynamic Graphics2_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Graphics2_obj > _hx_result = new Graphics2_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void Graphics2_obj::drawVideoInternal( ::kha::Video video,Float x,Float y,Float width,Float height){
            	HX_STACK_FRAME("kha.kore.graphics4.Graphics2","drawVideoInternal",0xe72118bb,"kha.kore.graphics4.Graphics2.drawVideoInternal","kha/kore/graphics4/Graphics2.hx",13,0x0241748a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(video,"video")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
HXLINE(  14)		this->set_color(::kha::_Color::Color_Impl__obj::Blue);
HXLINE(  15)		this->fillRect(x,y,width,height);
HXLINE(  16)		this->set_color(::kha::_Color::Color_Impl__obj::White);
HXLINE(  17)		 ::kha::Image _hx_tmp = ::kha::Image_obj::createFromVideo(video);
HXDLIN(  17)		Int _hx_tmp1 = video->width();
HXDLIN(  17)		Int _hx_tmp2 = video->height();
HXDLIN(  17)		this->drawScaledSubImage(_hx_tmp,(int)0,(int)0,_hx_tmp1,_hx_tmp2,x,y,width,height);
            	}



Graphics2_obj::Graphics2_obj()
{
}

hx::Val Graphics2_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"drawVideoInternal") ) { return hx::Val( drawVideoInternal_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Graphics2_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Graphics2_obj_sStaticStorageInfo = 0;
#endif

static ::String Graphics2_obj_sMemberFields[] = {
	HX_HCSTRING("drawVideoInternal","\x34","\x9c","\xdf","\xdf"),
	::String(null()) };

static void Graphics2_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Graphics2_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics2_obj::__mClass,"__mClass");
};

#endif

hx::Class Graphics2_obj::__mClass;

void Graphics2_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.kore.graphics4.Graphics2","\x35","\x9f","\x43","\x01");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Graphics2_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Graphics2_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Graphics2_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Graphics2_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Graphics2_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Graphics2_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace kore
} // end namespace graphics4
