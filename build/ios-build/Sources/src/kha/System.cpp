// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Framebuffer
#include <kha/Framebuffer.h>
#endif
#ifndef INCLUDED_kha_ScreenRotation
#include <kha/ScreenRotation.h>
#endif
#ifndef INCLUDED_kha_System
#include <kha/System.h>
#endif
#ifndef INCLUDED_kha_SystemImpl
#include <kha/SystemImpl.h>
#endif
#ifndef INCLUDED_kha_WindowOptions
#include <kha/WindowOptions.h>
#endif

namespace kha{

void System_obj::__construct() { }

Dynamic System_obj::__CreateEmpty() { return new System_obj; }

hx::ObjectPtr< System_obj > System_obj::__new()
{
	hx::ObjectPtr< System_obj > _hx_result = new System_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic System_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< System_obj > _hx_result = new System_obj();
	_hx_result->__construct();
	return _hx_result;
}

::Array< ::Dynamic> System_obj::renderListeners;

::Array< ::Dynamic> System_obj::foregroundListeners;

::Array< ::Dynamic> System_obj::resumeListeners;

::Array< ::Dynamic> System_obj::pauseListeners;

::Array< ::Dynamic> System_obj::backgroundListeners;

::Array< ::Dynamic> System_obj::shutdownListeners;

void System_obj::init( ::Dynamic options, ::Dynamic callback){
            	HX_STACK_FRAME("kha.System","init",0xb1904d85,"kha.System.init","kha/System.hx",21,0xeb7aee24)
            	HX_STACK_ARG(options,"options")
            	HX_STACK_ARG(callback,"callback")
HXLINE(  22)		Bool _hx_tmp = hx::IsNull( ( (::String)(options->__Field(HX_("title",98,15,3b,10),hx::paccDynamic)) ) );
HXDLIN(  22)		if (_hx_tmp) {
HXLINE(  22)			options->__SetField(HX_("title",98,15,3b,10),HX_("Kha",04,44,39,00),hx::paccDynamic);
            		}
HXLINE(  23)		Bool _hx_tmp1 = hx::IsNull( options->__Field(HX_("width",06,b6,62,ca),hx::paccDynamic) );
HXDLIN(  23)		if (_hx_tmp1) {
HXLINE(  23)			options->__SetField(HX_("width",06,b6,62,ca),(int)800,hx::paccDynamic);
            		}
HXLINE(  24)		Bool _hx_tmp2 = hx::IsNull( options->__Field(HX_("height",e7,07,4c,02),hx::paccDynamic) );
HXDLIN(  24)		if (_hx_tmp2) {
HXLINE(  24)			options->__SetField(HX_("height",e7,07,4c,02),(int)600,hx::paccDynamic);
            		}
HXLINE(  25)		Bool _hx_tmp3 = hx::IsNull( options->__Field(HX_("samplesPerPixel",92,52,4f,57),hx::paccDynamic) );
HXDLIN(  25)		if (_hx_tmp3) {
HXLINE(  25)			options->__SetField(HX_("samplesPerPixel",92,52,4f,57),(int)1,hx::paccDynamic);
            		}
HXLINE(  26)		::kha::SystemImpl_obj::init(options,callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,init,(void))

void System_obj::initEx(::String title,::Array< ::Dynamic> options, ::Dynamic windowCallback, ::Dynamic callback){
            	HX_STACK_FRAME("kha.System","initEx",0x7062b558,"kha.System.initEx","kha/System.hx",30,0xeb7aee24)
            	HX_STACK_ARG(title,"title")
            	HX_STACK_ARG(options,"options")
            	HX_STACK_ARG(windowCallback,"windowCallback")
            	HX_STACK_ARG(callback,"callback")
HXLINE(  30)		::kha::SystemImpl_obj::initEx(title,options,windowCallback,callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(System_obj,initEx,(void))

void System_obj::notifyOnRender( ::Dynamic listener,hx::Null< Int >  __o_id){
Int id = __o_id.Default(0);
            	HX_STACK_FRAME("kha.System","notifyOnRender",0x8c7d0073,"kha.System.notifyOnRender","kha/System.hx",33,0xeb7aee24)
            	HX_STACK_ARG(listener,"listener")
            	HX_STACK_ARG(id,"id")
HXLINE(  34)		while((id >= ::kha::System_obj::renderListeners->length)){
HXLINE(  35)			::kha::System_obj::renderListeners->push(::Array_obj< ::Dynamic>::__new());
            		}
HXLINE(  37)		::kha::System_obj::renderListeners->__get(id).StaticCast< ::Array< ::Dynamic> >()->push(listener);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,notifyOnRender,(void))

void System_obj::removeRenderListener( ::Dynamic listener,hx::Null< Int >  __o_id){
Int id = __o_id.Default(0);
            	HX_STACK_FRAME("kha.System","removeRenderListener",0x451f19c3,"kha.System.removeRenderListener","kha/System.hx",41,0xeb7aee24)
            	HX_STACK_ARG(listener,"listener")
            	HX_STACK_ARG(id,"id")
HXLINE(  41)		::kha::System_obj::renderListeners->__get(id).StaticCast< ::Array< ::Dynamic> >()->remove(listener);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,removeRenderListener,(void))

void System_obj::notifyOnApplicationState( ::Dynamic foregroundListener, ::Dynamic resumeListener, ::Dynamic pauseListener, ::Dynamic backgroundListener, ::Dynamic shutdownListener){
            	HX_STACK_FRAME("kha.System","notifyOnApplicationState",0x2a2d33fe,"kha.System.notifyOnApplicationState","kha/System.hx",44,0xeb7aee24)
            	HX_STACK_ARG(foregroundListener,"foregroundListener")
            	HX_STACK_ARG(resumeListener,"resumeListener")
            	HX_STACK_ARG(pauseListener,"pauseListener")
            	HX_STACK_ARG(backgroundListener,"backgroundListener")
            	HX_STACK_ARG(shutdownListener,"shutdownListener")
HXLINE(  45)		Bool _hx_tmp = hx::IsNotNull( foregroundListener );
HXDLIN(  45)		if (_hx_tmp) {
HXLINE(  45)			::kha::System_obj::foregroundListeners->push(foregroundListener);
            		}
HXLINE(  46)		Bool _hx_tmp1 = hx::IsNotNull( resumeListener );
HXDLIN(  46)		if (_hx_tmp1) {
HXLINE(  46)			::kha::System_obj::resumeListeners->push(resumeListener);
            		}
HXLINE(  47)		Bool _hx_tmp2 = hx::IsNotNull( pauseListener );
HXDLIN(  47)		if (_hx_tmp2) {
HXLINE(  47)			::kha::System_obj::pauseListeners->push(pauseListener);
            		}
HXLINE(  48)		Bool _hx_tmp3 = hx::IsNotNull( backgroundListener );
HXDLIN(  48)		if (_hx_tmp3) {
HXLINE(  48)			::kha::System_obj::backgroundListeners->push(backgroundListener);
            		}
HXLINE(  49)		Bool _hx_tmp4 = hx::IsNotNull( shutdownListener );
HXDLIN(  49)		if (_hx_tmp4) {
HXLINE(  49)			::kha::System_obj::shutdownListeners->push(shutdownListener);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(System_obj,notifyOnApplicationState,(void))

void System_obj::render(Int id, ::kha::Framebuffer framebuffer){
            	HX_STACK_FRAME("kha.System","render",0xde3fc50b,"kha.System.render","kha/System.hx",52,0xeb7aee24)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(framebuffer,"framebuffer")
HXLINE(  53)		if ((::kha::System_obj::renderListeners->length == (int)0)) {
HXLINE(  54)			return;
            		}
HXLINE(  57)		{
HXLINE(  57)			HX_VARI( Int,_g) = (int)0;
HXDLIN(  57)			HX_VARI( ::Array< ::Dynamic>,_g1) = ::kha::System_obj::renderListeners->__get(id).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  57)			while((_g < _g1->length)){
HXLINE(  57)				HX_VARI(  ::Dynamic,listener) = _g1->__get(_g);
HXDLIN(  57)				++_g;
HXLINE(  58)				listener(framebuffer);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,render,(void))

void System_obj::foreground(){
            	HX_STACK_FRAME("kha.System","foreground",0x0e2cf0f8,"kha.System.foreground","kha/System.hx",63,0xeb7aee24)
HXLINE(  63)		HX_VARI( Int,_g) = (int)0;
HXDLIN(  63)		HX_VARI( ::Array< ::Dynamic>,_g1) = ::kha::System_obj::foregroundListeners;
HXDLIN(  63)		while((_g < _g1->length)){
HXLINE(  63)			HX_VARI(  ::Dynamic,listener) = _g1->__get(_g);
HXDLIN(  63)			++_g;
HXLINE(  64)			listener();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,foreground,(void))

void System_obj::resume(){
            	HX_STACK_FRAME("kha.System","resume",0xe19ac362,"kha.System.resume","kha/System.hx",69,0xeb7aee24)
HXLINE(  69)		HX_VARI( Int,_g) = (int)0;
HXDLIN(  69)		HX_VARI( ::Array< ::Dynamic>,_g1) = ::kha::System_obj::resumeListeners;
HXDLIN(  69)		while((_g < _g1->length)){
HXLINE(  69)			HX_VARI(  ::Dynamic,listener) = _g1->__get(_g);
HXDLIN(  69)			++_g;
HXLINE(  70)			listener();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,resume,(void))

void System_obj::pause(){
            	HX_STACK_FRAME("kha.System","pause",0xabf2eae1,"kha.System.pause","kha/System.hx",75,0xeb7aee24)
HXLINE(  75)		HX_VARI( Int,_g) = (int)0;
HXDLIN(  75)		HX_VARI( ::Array< ::Dynamic>,_g1) = ::kha::System_obj::pauseListeners;
HXDLIN(  75)		while((_g < _g1->length)){
HXLINE(  75)			HX_VARI(  ::Dynamic,listener) = _g1->__get(_g);
HXDLIN(  75)			++_g;
HXLINE(  76)			listener();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,pause,(void))

void System_obj::background(){
            	HX_STACK_FRAME("kha.System","background",0x235b6c23,"kha.System.background","kha/System.hx",81,0xeb7aee24)
HXLINE(  81)		HX_VARI( Int,_g) = (int)0;
HXDLIN(  81)		HX_VARI( ::Array< ::Dynamic>,_g1) = ::kha::System_obj::backgroundListeners;
HXDLIN(  81)		while((_g < _g1->length)){
HXLINE(  81)			HX_VARI(  ::Dynamic,listener) = _g1->__get(_g);
HXDLIN(  81)			++_g;
HXLINE(  82)			listener();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,background,(void))

void System_obj::shutdown(){
            	HX_STACK_FRAME("kha.System","shutdown",0x79b3ed8b,"kha.System.shutdown","kha/System.hx",87,0xeb7aee24)
HXLINE(  87)		HX_VARI( Int,_g) = (int)0;
HXDLIN(  87)		HX_VARI( ::Array< ::Dynamic>,_g1) = ::kha::System_obj::shutdownListeners;
HXDLIN(  87)		while((_g < _g1->length)){
HXLINE(  87)			HX_VARI(  ::Dynamic,listener) = _g1->__get(_g);
HXDLIN(  87)			++_g;
HXLINE(  88)			listener();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,shutdown,(void))

Float System_obj::time;

Float System_obj::get_time(){
            	HX_STACK_FRAME("kha.System","get_time",0xdb5f788b,"kha.System.get_time","kha/System.hx",95,0xeb7aee24)
HXLINE(  95)		return ::kha::SystemImpl_obj::getTime();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_time,return )

Int System_obj::windowWidth(hx::Null< Int >  __o_windowId){
Int windowId = __o_windowId.Default(0);
            	HX_STACK_FRAME("kha.System","windowWidth",0x5414a221,"kha.System.windowWidth","kha/System.hx",99,0xeb7aee24)
            	HX_STACK_ARG(windowId,"windowId")
HXLINE(  99)		return ::kha::SystemImpl_obj::windowWidth(windowId);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,windowWidth,return )

Int System_obj::windowHeight(hx::Null< Int >  __o_windowId){
Int windowId = __o_windowId.Default(0);
            	HX_STACK_FRAME("kha.System","windowHeight",0xf448b36c,"kha.System.windowHeight","kha/System.hx",103,0xeb7aee24)
            	HX_STACK_ARG(windowId,"windowId")
HXLINE( 103)		return ::kha::SystemImpl_obj::windowHeight(windowId);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,windowHeight,return )

Int System_obj::screenDpi(){
            	HX_STACK_FRAME("kha.System","screenDpi",0xfc3b90bc,"kha.System.screenDpi","kha/System.hx",108,0xeb7aee24)
HXLINE( 108)		return ::kha::SystemImpl_obj::screenDpi();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,screenDpi,return )

::hx::EnumBase System_obj::screenRotation;

::hx::EnumBase System_obj::get_screenRotation(){
            	HX_STACK_FRAME("kha.System","get_screenRotation",0xea0af6c8,"kha.System.get_screenRotation","kha/System.hx",114,0xeb7aee24)
HXLINE( 114)		return ::kha::SystemImpl_obj::getScreenRotation();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_screenRotation,return )

Bool System_obj::vsync;

Bool System_obj::get_vsync(){
            	HX_STACK_FRAME("kha.System","get_vsync",0x459c6f93,"kha.System.get_vsync","kha/System.hx",120,0xeb7aee24)
HXLINE( 120)		return ::kha::SystemImpl_obj::getVsync();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_vsync,return )

Int System_obj::refreshRate;

Int System_obj::get_refreshRate(){
            	HX_STACK_FRAME("kha.System","get_refreshRate",0x2d9ee19d,"kha.System.get_refreshRate","kha/System.hx",126,0xeb7aee24)
HXLINE( 126)		return ::kha::SystemImpl_obj::getRefreshRate();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_refreshRate,return )

::String System_obj::systemId;

::String System_obj::get_systemId(){
            	HX_STACK_FRAME("kha.System","get_systemId",0x418f7428,"kha.System.get_systemId","kha/System.hx",132,0xeb7aee24)
HXLINE( 132)		return ::kha::SystemImpl_obj::getSystemId();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_systemId,return )

void System_obj::requestShutdown(){
            	HX_STACK_FRAME("kha.System","requestShutdown",0x3cb646b0,"kha.System.requestShutdown","kha/System.hx",136,0xeb7aee24)
HXLINE( 136)		::kha::SystemImpl_obj::requestShutdown();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,requestShutdown,(void))

void System_obj::changeResolution(Int width,Int height){
            	HX_STACK_FRAME("kha.System","changeResolution",0xbb1c64b1,"kha.System.changeResolution","kha/System.hx",140,0xeb7aee24)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
HXLINE( 140)		::kha::SystemImpl_obj::changeResolution(width,height);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,changeResolution,(void))

void System_obj::loadUrl(::String url){
            	HX_STACK_FRAME("kha.System","loadUrl",0x235bc994,"kha.System.loadUrl","kha/System.hx",143,0xeb7aee24)
            	HX_STACK_ARG(url,"url")
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,loadUrl,(void))


System_obj::System_obj()
{
}

bool System_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"time") ) { outValue = inCallProp == hx::paccAlways ? get_time() : time; return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { outValue = pause_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"vsync") ) { outValue = inCallProp == hx::paccAlways ? get_vsync() : vsync; return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"initEx") ) { outValue = initEx_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resume") ) { outValue = resume_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"loadUrl") ) { outValue = loadUrl_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shutdown") ) { outValue = shutdown_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_time") ) { outValue = get_time_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"systemId") ) { outValue = inCallProp == hx::paccAlways ? get_systemId() : systemId; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"screenDpi") ) { outValue = screenDpi_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_vsync") ) { outValue = get_vsync_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"foreground") ) { outValue = foreground_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"background") ) { outValue = background_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windowWidth") ) { outValue = windowWidth_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"refreshRate") ) { outValue = inCallProp == hx::paccAlways ? get_refreshRate() : refreshRate; return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowHeight") ) { outValue = windowHeight_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_systemId") ) { outValue = get_systemId_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pauseListeners") ) { outValue = pauseListeners; return true; }
		if (HX_FIELD_EQ(inName,"notifyOnRender") ) { outValue = notifyOnRender_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"screenRotation") ) { outValue = inCallProp == hx::paccAlways ? get_screenRotation() : screenRotation; return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderListeners") ) { outValue = renderListeners; return true; }
		if (HX_FIELD_EQ(inName,"resumeListeners") ) { outValue = resumeListeners; return true; }
		if (HX_FIELD_EQ(inName,"get_refreshRate") ) { outValue = get_refreshRate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"requestShutdown") ) { outValue = requestShutdown_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"changeResolution") ) { outValue = changeResolution_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"shutdownListeners") ) { outValue = shutdownListeners; return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_screenRotation") ) { outValue = get_screenRotation_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"foregroundListeners") ) { outValue = foregroundListeners; return true; }
		if (HX_FIELD_EQ(inName,"backgroundListeners") ) { outValue = backgroundListeners; return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"removeRenderListener") ) { outValue = removeRenderListener_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"notifyOnApplicationState") ) { outValue = notifyOnApplicationState_dyn(); return true; }
	}
	return false;
}

bool System_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=ioValue.Cast< Float >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"vsync") ) { vsync=ioValue.Cast< Bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"systemId") ) { systemId=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"refreshRate") ) { refreshRate=ioValue.Cast< Int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pauseListeners") ) { pauseListeners=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"screenRotation") ) { screenRotation=ioValue.Cast< ::hx::EnumBase >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderListeners") ) { renderListeners=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"resumeListeners") ) { resumeListeners=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"shutdownListeners") ) { shutdownListeners=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"foregroundListeners") ) { foregroundListeners=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"backgroundListeners") ) { backgroundListeners=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *System_obj_sMemberStorageInfo = 0;
static hx::StaticInfo System_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &System_obj::renderListeners,HX_HCSTRING("renderListeners","\x49","\xbf","\x36","\xdc")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &System_obj::foregroundListeners,HX_HCSTRING("foregroundListeners","\x3c","\x7c","\x88","\xe2")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &System_obj::resumeListeners,HX_HCSTRING("resumeListeners","\x12","\xbe","\xda","\xd9")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &System_obj::pauseListeners,HX_HCSTRING("pauseListeners","\xa9","\xdf","\xed","\xfc")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &System_obj::backgroundListeners,HX_HCSTRING("backgroundListeners","\xb1","\xc3","\xb4","\xcb")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &System_obj::shutdownListeners,HX_HCSTRING("shutdownListeners","\x09","\x06","\x98","\xea")},
	{hx::fsFloat,(void *) &System_obj::time,HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsObject /*::kha::ScreenRotation*/ ,(void *) &System_obj::screenRotation,HX_HCSTRING("screenRotation","\xca","\x80","\xa0","\xef")},
	{hx::fsBool,(void *) &System_obj::vsync,HX_HCSTRING("vsync","\xd1","\x2d","\xa8","\x3d")},
	{hx::fsInt,(void *) &System_obj::refreshRate,HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40")},
	{hx::fsString,(void *) &System_obj::systemId,HX_HCSTRING("systemId","\xaa","\xb0","\xe9","\x61")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void System_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(System_obj::renderListeners,"renderListeners");
	HX_MARK_MEMBER_NAME(System_obj::foregroundListeners,"foregroundListeners");
	HX_MARK_MEMBER_NAME(System_obj::resumeListeners,"resumeListeners");
	HX_MARK_MEMBER_NAME(System_obj::pauseListeners,"pauseListeners");
	HX_MARK_MEMBER_NAME(System_obj::backgroundListeners,"backgroundListeners");
	HX_MARK_MEMBER_NAME(System_obj::shutdownListeners,"shutdownListeners");
	HX_MARK_MEMBER_NAME(System_obj::time,"time");
	HX_MARK_MEMBER_NAME(System_obj::screenRotation,"screenRotation");
	HX_MARK_MEMBER_NAME(System_obj::vsync,"vsync");
	HX_MARK_MEMBER_NAME(System_obj::refreshRate,"refreshRate");
	HX_MARK_MEMBER_NAME(System_obj::systemId,"systemId");
};

#ifdef HXCPP_VISIT_ALLOCS
static void System_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(System_obj::renderListeners,"renderListeners");
	HX_VISIT_MEMBER_NAME(System_obj::foregroundListeners,"foregroundListeners");
	HX_VISIT_MEMBER_NAME(System_obj::resumeListeners,"resumeListeners");
	HX_VISIT_MEMBER_NAME(System_obj::pauseListeners,"pauseListeners");
	HX_VISIT_MEMBER_NAME(System_obj::backgroundListeners,"backgroundListeners");
	HX_VISIT_MEMBER_NAME(System_obj::shutdownListeners,"shutdownListeners");
	HX_VISIT_MEMBER_NAME(System_obj::time,"time");
	HX_VISIT_MEMBER_NAME(System_obj::screenRotation,"screenRotation");
	HX_VISIT_MEMBER_NAME(System_obj::vsync,"vsync");
	HX_VISIT_MEMBER_NAME(System_obj::refreshRate,"refreshRate");
	HX_VISIT_MEMBER_NAME(System_obj::systemId,"systemId");
};

#endif

hx::Class System_obj::__mClass;

static ::String System_obj_sStaticFields[] = {
	HX_HCSTRING("renderListeners","\x49","\xbf","\x36","\xdc"),
	HX_HCSTRING("foregroundListeners","\x3c","\x7c","\x88","\xe2"),
	HX_HCSTRING("resumeListeners","\x12","\xbe","\xda","\xd9"),
	HX_HCSTRING("pauseListeners","\xa9","\xdf","\xed","\xfc"),
	HX_HCSTRING("backgroundListeners","\xb1","\xc3","\xb4","\xcb"),
	HX_HCSTRING("shutdownListeners","\x09","\x06","\x98","\xea"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("initEx","\xa3","\x5b","\x4c","\x97"),
	HX_HCSTRING("notifyOnRender","\xbe","\x69","\x36","\x9b"),
	HX_HCSTRING("removeRenderListener","\x4e","\x0d","\x17","\x21"),
	HX_HCSTRING("notifyOnApplicationState","\x09","\x49","\x4d","\x35"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("foreground","\xc3","\x18","\xef","\x10"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("get_time","\x96","\x87","\xb7","\xcc"),
	HX_HCSTRING("windowWidth","\xf6","\x4b","\x35","\xbb"),
	HX_HCSTRING("windowHeight","\xf7","\xa3","\xbc","\xc9"),
	HX_HCSTRING("screenDpi","\x51","\xab","\xf0","\x37"),
	HX_HCSTRING("screenRotation","\xca","\x80","\xa0","\xef"),
	HX_HCSTRING("get_screenRotation","\x93","\x61","\x3a","\x8b"),
	HX_HCSTRING("vsync","\xd1","\x2d","\xa8","\x3d"),
	HX_HCSTRING("get_vsync","\x28","\x8a","\x51","\x81"),
	HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"),
	HX_HCSTRING("get_refreshRate","\xf2","\x99","\x21","\x01"),
	HX_HCSTRING("systemId","\xaa","\xb0","\xe9","\x61"),
	HX_HCSTRING("get_systemId","\xb3","\x64","\x03","\x17"),
	HX_HCSTRING("requestShutdown","\x05","\xff","\x38","\x10"),
	HX_HCSTRING("changeResolution","\xbc","\xf6","\xfa","\xf9"),
	HX_HCSTRING("loadUrl","\xe9","\xa4","\xe3","\x08"),
	::String(null())
};

void System_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.System","\x19","\x62","\xa2","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &System_obj::__GetStatic;
	__mClass->mSetStaticField = &System_obj::__SetStatic;
	__mClass->mMarkFunc = System_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(System_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< System_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = System_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = System_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = System_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void System_obj::__boot()
{
{
            	HX_STACK_FRAME("kha.System","boot",0xacf096a7,"kha.System.boot","kha/System.hx",14,0xeb7aee24)
HXLINE(  14)		renderListeners = ::Array_obj< ::Dynamic>::__new();
            	}
{
            	HX_STACK_FRAME("kha.System","boot",0xacf096a7,"kha.System.boot","kha/System.hx",15,0xeb7aee24)
HXLINE(  15)		foregroundListeners = ::Array_obj< ::Dynamic>::__new();
            	}
{
            	HX_STACK_FRAME("kha.System","boot",0xacf096a7,"kha.System.boot","kha/System.hx",16,0xeb7aee24)
HXLINE(  16)		resumeListeners = ::Array_obj< ::Dynamic>::__new();
            	}
{
            	HX_STACK_FRAME("kha.System","boot",0xacf096a7,"kha.System.boot","kha/System.hx",17,0xeb7aee24)
HXLINE(  17)		pauseListeners = ::Array_obj< ::Dynamic>::__new();
            	}
{
            	HX_STACK_FRAME("kha.System","boot",0xacf096a7,"kha.System.boot","kha/System.hx",18,0xeb7aee24)
HXLINE(  18)		backgroundListeners = ::Array_obj< ::Dynamic>::__new();
            	}
{
            	HX_STACK_FRAME("kha.System","boot",0xacf096a7,"kha.System.boot","kha/System.hx",19,0xeb7aee24)
HXLINE(  19)		shutdownListeners = ::Array_obj< ::Dynamic>::__new();
            	}
}

} // end namespace kha
