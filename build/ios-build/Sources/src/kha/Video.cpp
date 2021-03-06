// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Video
#include <kha/Video.h>
#endif

namespace kha{

void Video_obj::__construct(){
            	HX_STACK_FRAME("kha.Video","new",0x3a4f1a03,"kha.Video.new","kha/Video.hx",20,0x1dd2bfce)
            	HX_STACK_THIS(this)
            	}

Dynamic Video_obj::__CreateEmpty() { return new Video_obj; }

hx::ObjectPtr< Video_obj > Video_obj::__new()
{
	hx::ObjectPtr< Video_obj > _hx_result = new Video_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Video_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Video_obj > _hx_result = new Video_obj();
	_hx_result->__construct();
	return _hx_result;
}

static ::kha::Resource_obj _hx_kha_Video__hx_kha_Resource= {
	( void (hx::Object::*)())&::kha::Video_obj::unload,
};

void *Video_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xf962acd2: return &_hx_kha_Video__hx_kha_Resource;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Int Video_obj::width(){
            	HX_STACK_FRAME("kha.Video","width",0xf0fdee69,"kha.Video.width","kha/Video.hx",10,0x1dd2bfce)
            	HX_STACK_THIS(this)
HXLINE(  10)		return (int)100;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,width,return )

Int Video_obj::height(){
            	HX_STACK_FRAME("kha.Video","height",0xa3822624,"kha.Video.height","kha/Video.hx",15,0x1dd2bfce)
            	HX_STACK_THIS(this)
HXLINE(  15)		return (int)100;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,height,return )

void Video_obj::play(hx::Null< Bool >  __o_loop){
Bool loop = __o_loop.Default(false);
            	HX_STACK_FRAME("kha.Video","play",0xcc3f52f1,"kha.Video.play","kha/Video.hx",27,0x1dd2bfce)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(loop,"loop")
            	}


HX_DEFINE_DYNAMIC_FUNC1(Video_obj,play,(void))

void Video_obj::pause(){
            	HX_STACK_FRAME("kha.Video","pause",0xe3f30f59,"kha.Video.pause","kha/Video.hx",32,0x1dd2bfce)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,pause,(void))

void Video_obj::stop(){
            	HX_STACK_FRAME("kha.Video","stop",0xce4114ff,"kha.Video.stop","kha/Video.hx",37,0x1dd2bfce)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,stop,(void))

Int Video_obj::getLength(){
            	HX_STACK_FRAME("kha.Video","getLength",0x9ca0c3ff,"kha.Video.getLength","kha/Video.hx",42,0x1dd2bfce)
            	HX_STACK_THIS(this)
HXLINE(  42)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,getLength,return )

Int Video_obj::getCurrentPos(){
            	HX_STACK_FRAME("kha.Video","getCurrentPos",0x3f915274,"kha.Video.getCurrentPos","kha/Video.hx",47,0x1dd2bfce)
            	HX_STACK_THIS(this)
HXLINE(  47)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,getCurrentPos,return )

Float Video_obj::getVolume(){
            	HX_STACK_FRAME("kha.Video","getVolume",0x5cec58f3,"kha.Video.getVolume","kha/Video.hx",52,0x1dd2bfce)
            	HX_STACK_THIS(this)
HXLINE(  52)		return (int)1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,getVolume,return )

void Video_obj::setVolume(Float volume){
            	HX_STACK_FRAME("kha.Video","setVolume",0x403d44ff,"kha.Video.setVolume","kha/Video.hx",59,0x1dd2bfce)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(volume,"volume")
            	}


HX_DEFINE_DYNAMIC_FUNC1(Video_obj,setVolume,(void))

Bool Video_obj::isFinished(){
            	HX_STACK_FRAME("kha.Video","isFinished",0xa8cc2639,"kha.Video.isFinished","kha/Video.hx",65,0x1dd2bfce)
            	HX_STACK_THIS(this)
HXLINE(  65)		Int _hx_tmp = this->getCurrentPos();
HXDLIN(  65)		Int _hx_tmp1 = this->getLength();
HXDLIN(  65)		return (_hx_tmp >= _hx_tmp1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,isFinished,return )

void Video_obj::unload(){
            	HX_STACK_FRAME("kha.Video","unload",0x06c2bf3c,"kha.Video.unload","kha/Video.hx",71,0x1dd2bfce)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,unload,(void))


Video_obj::Video_obj()
{
}

hx::Val Video_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return hx::Val( play_dyn()); }
		if (HX_FIELD_EQ(inName,"stop") ) { return hx::Val( stop_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width_dyn()); }
		if (HX_FIELD_EQ(inName,"pause") ) { return hx::Val( pause_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height_dyn()); }
		if (HX_FIELD_EQ(inName,"unload") ) { return hx::Val( unload_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return hx::Val( getLength_dyn()); }
		if (HX_FIELD_EQ(inName,"getVolume") ) { return hx::Val( getVolume_dyn()); }
		if (HX_FIELD_EQ(inName,"setVolume") ) { return hx::Val( setVolume_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isFinished") ) { return hx::Val( isFinished_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getCurrentPos") ) { return hx::Val( getCurrentPos_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Video_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Video_obj_sStaticStorageInfo = 0;
#endif

static ::String Video_obj_sMemberFields[] = {
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	HX_HCSTRING("getCurrentPos","\x11","\x7f","\xa2","\x23"),
	HX_HCSTRING("getVolume","\x10","\xb3","\xa9","\xdb"),
	HX_HCSTRING("setVolume","\x1c","\x9f","\xfa","\xbe"),
	HX_HCSTRING("isFinished","\x7c","\xa5","\xbd","\x0f"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	::String(null()) };

static void Video_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Video_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Video_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Video_obj::__mClass,"__mClass");
};

#endif

hx::Class Video_obj::__mClass;

void Video_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Video","\x91","\x5c","\x9b","\x57");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Video_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Video_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Video_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Video_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Video_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Video_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
