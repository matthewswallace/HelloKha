// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Project
#include <Project.h>
#endif
#ifndef INCLUDED_aws_mobile_AWSMobileHub
#include <aws/mobile/AWSMobileHub.h>
#endif
#ifndef INCLUDED_kha_Assets
#include <kha/Assets.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Font
#include <kha/Font.h>
#endif
#ifndef INCLUDED_kha_FontList
#include <kha/FontList.h>
#endif
#ifndef INCLUDED_kha_Framebuffer
#include <kha/Framebuffer.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_System
#include <kha/System.h>
#endif
#ifndef INCLUDED_kha__Color_Color_Impl_
#include <kha/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif


void Project_obj::__construct(){
            	HX_STACK_FRAME("Project","new",0xf2be2c2b,"Project.new","Project.hx",14,0xbb0fc1a5)
            	HX_STACK_THIS(this)
HXLINE(  14)		::kha::Assets_obj::loadEverything(this->loadedEverything_dyn());
            	}

Dynamic Project_obj::__CreateEmpty() { return new Project_obj; }

hx::ObjectPtr< Project_obj > Project_obj::__new()
{
	hx::ObjectPtr< Project_obj > _hx_result = new Project_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Project_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Project_obj > _hx_result = new Project_obj();
	_hx_result->__construct();
	return _hx_result;
}

void Project_obj::loadedEverything(){
            	HX_STACK_FRAME("Project","loadedEverything",0xd0a2102d,"Project.loadedEverything","Project.hx",17,0xbb0fc1a5)
            	HX_STACK_THIS(this)
HXLINE(  18)		this->font1 = ::kha::Assets_obj::fonts->OpenSans_Regular;
HXLINE(  20)		::aws::mobile::AWSMobileHub_obj::helloFromMobileHub();
HXLINE(  22)		::kha::System_obj::notifyOnRender(this->render_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Project_obj,loadedEverything,(void))

void Project_obj::render( ::kha::Framebuffer framebuffer){
            	HX_STACK_FRAME("Project","render",0x9d98406b,"Project.render","Project.hx",26,0xbb0fc1a5)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(framebuffer,"framebuffer")
HXLINE(  27)		HX_VARI(  ::kha::graphics2::Graphics,graphic) = framebuffer->get_g2();
HXLINE(  28)		graphic->begin(null(),null());
HXLINE(  30)		graphic->set_font(this->font1);
HXLINE(  31)		graphic->set_fontSize((int)64);
HXLINE(  32)		graphic->set_color(::kha::_Color::Color_Impl__obj::White);
HXLINE(  33)		graphic->drawString(HX_("Hello from Kha",3c,49,12,a7),(int)10,(int)20);
HXLINE(  35)		graphic->end();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Project_obj,render,(void))


Project_obj::Project_obj()
{
}

void Project_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Project);
	HX_MARK_MEMBER_NAME(font1,"font1");
	HX_MARK_END_CLASS();
}

void Project_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(font1,"font1");
}

hx::Val Project_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"font1") ) { return hx::Val( font1); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadedEverything") ) { return hx::Val( loadedEverything_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Project_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"font1") ) { font1=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Project_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("font1","\x82","\xb7","\x91","\x04"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Project_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::Font*/ ,(int)offsetof(Project_obj,font1),HX_HCSTRING("font1","\x82","\xb7","\x91","\x04")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Project_obj_sStaticStorageInfo = 0;
#endif

static ::String Project_obj_sMemberFields[] = {
	HX_HCSTRING("font1","\x82","\xb7","\x91","\x04"),
	HX_HCSTRING("loadedEverything","\xd8","\x2e","\x38","\x81"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void Project_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Project_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Project_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Project_obj::__mClass,"__mClass");
};

#endif

hx::Class Project_obj::__mClass;

void Project_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Project","\xb9","\x3a","\x3c","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Project_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Project_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Project_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Project_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Project_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Project_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

