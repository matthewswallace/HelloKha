// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_network_Controller
#include <kha/network/Controller.h>
#endif
#ifndef INCLUDED_kha_network_ControllerBuilder
#include <kha/network/ControllerBuilder.h>
#endif

namespace kha{
namespace network{

void Controller_obj::__construct(){
            	HX_STACK_FRAME("kha.network.Controller","new",0x36c03a78,"kha.network.Controller.new","kha/network/Controller.hx",11,0x1be459b6)
            	HX_STACK_THIS(this)
HXLINE(  12)		this->_hx___id = ::kha::network::ControllerBuilder_obj::nextId++;
HXLINE(  13)		this->_inputBuffer = ::haxe::io::Bytes_obj::alloc((int)1);
            	}

Dynamic Controller_obj::__CreateEmpty() { return new Controller_obj; }

hx::ObjectPtr< Controller_obj > Controller_obj::__new()
{
	hx::ObjectPtr< Controller_obj > _hx_result = new Controller_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Controller_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Controller_obj > _hx_result = new Controller_obj();
	_hx_result->__construct();
	return _hx_result;
}

Int Controller_obj::_id(){
            	HX_STACK_FRAME("kha.network.Controller","_id",0x36b4dc12,"kha.network.Controller._id","kha/network/Controller.hx",17,0x1be459b6)
            	HX_STACK_THIS(this)
HXLINE(  17)		return this->_hx___id;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,_id,return )

void Controller_obj::_receive( ::haxe::io::Bytes bytes){
            	HX_STACK_FRAME("kha.network.Controller","_receive",0xd2f4ba4c,"kha.network.Controller._receive","kha/network/Controller.hx",21,0x1be459b6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(bytes,"bytes")
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,_receive,(void))


Controller_obj::Controller_obj()
{
}

void Controller_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Controller);
	HX_MARK_MEMBER_NAME(_hx___id,"__id");
	HX_MARK_MEMBER_NAME(_inputBufferIndex,"_inputBufferIndex");
	HX_MARK_MEMBER_NAME(_inputBuffer,"_inputBuffer");
	HX_MARK_END_CLASS();
}

void Controller_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___id,"__id");
	HX_VISIT_MEMBER_NAME(_inputBufferIndex,"_inputBufferIndex");
	HX_VISIT_MEMBER_NAME(_inputBuffer,"_inputBuffer");
}

hx::Val Controller_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { return hx::Val( _id_dyn()); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { return hx::Val( _hx___id); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_receive") ) { return hx::Val( _receive_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_inputBuffer") ) { return hx::Val( _inputBuffer); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_inputBufferIndex") ) { return hx::Val( _inputBufferIndex); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Controller_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { _hx___id=inValue.Cast< Int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_inputBuffer") ) { _inputBuffer=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_inputBufferIndex") ) { _inputBufferIndex=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Controller_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f"));
	outFields->push(HX_HCSTRING("_inputBufferIndex","\x67","\xb8","\x78","\x66"));
	outFields->push(HX_HCSTRING("_inputBuffer","\xab","\x46","\xd2","\x2b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Controller_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Controller_obj,_hx___id),HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f")},
	{hx::fsInt,(int)offsetof(Controller_obj,_inputBufferIndex),HX_HCSTRING("_inputBufferIndex","\x67","\xb8","\x78","\x66")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(Controller_obj,_inputBuffer),HX_HCSTRING("_inputBuffer","\xab","\x46","\xd2","\x2b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Controller_obj_sStaticStorageInfo = 0;
#endif

static ::String Controller_obj_sMemberFields[] = {
	HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f"),
	HX_HCSTRING("_inputBufferIndex","\x67","\xb8","\x78","\x66"),
	HX_HCSTRING("_inputBuffer","\xab","\x46","\xd2","\x2b"),
	HX_HCSTRING("_id","\xfa","\x71","\x48","\x00"),
	HX_HCSTRING("_receive","\x64","\xbb","\x10","\x64"),
	::String(null()) };

static void Controller_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Controller_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Controller_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Controller_obj::__mClass,"__mClass");
};

#endif

hx::Class Controller_obj::__mClass;

void Controller_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.network.Controller","\x86","\xde","\x0b","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Controller_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Controller_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Controller_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Controller_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Controller_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Controller_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace network
