// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_network_Client
#include <kha/network/Client.h>
#endif
#ifndef INCLUDED_kha_network_Controller
#include <kha/network/Controller.h>
#endif
#ifndef INCLUDED_kha_network_LocalClient
#include <kha/network/LocalClient.h>
#endif

namespace kha{
namespace network{

void LocalClient_obj::__construct(Int id){
            	HX_STACK_FRAME("kha.network.LocalClient","new",0xda8ed7de,"kha.network.LocalClient.new","kha/network/LocalClient.hx",9,0x60c7b5d4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(   9)		this->myId = id;
            	}

Dynamic LocalClient_obj::__CreateEmpty() { return new LocalClient_obj; }

hx::ObjectPtr< LocalClient_obj > LocalClient_obj::__new(Int id)
{
	hx::ObjectPtr< LocalClient_obj > _hx_result = new LocalClient_obj();
	_hx_result->__construct(id);
	return _hx_result;
}

Dynamic LocalClient_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LocalClient_obj > _hx_result = new LocalClient_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

static ::kha::network::Client_obj _hx_kha_network_LocalClient__hx_kha_network_Client= {
	( Int (hx::Object::*)())&::kha::network::LocalClient_obj::get_id,
	( void (hx::Object::*)( ::haxe::io::Bytes,Bool))&::kha::network::LocalClient_obj::send,
	( void (hx::Object::*)( ::Dynamic))&::kha::network::LocalClient_obj::receive,
	( void (hx::Object::*)( ::Dynamic))&::kha::network::LocalClient_obj::onClose,
};

void *LocalClient_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xe7ca9475: return &_hx_kha_network_LocalClient__hx_kha_network_Client;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void LocalClient_obj::send( ::haxe::io::Bytes bytes,Bool mandatory){
            	HX_STACK_FRAME("kha.network.LocalClient","send",0x65bc140a,"kha.network.LocalClient.send","kha/network/LocalClient.hx",12,0x60c7b5d4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(bytes,"bytes")
            	HX_STACK_ARG(mandatory,"mandatory")
            	}


HX_DEFINE_DYNAMIC_FUNC2(LocalClient_obj,send,(void))

void LocalClient_obj::receive( ::Dynamic receiver){
            	HX_STACK_FRAME("kha.network.LocalClient","receive",0x98a00061,"kha.network.LocalClient.receive","kha/network/LocalClient.hx",16,0x60c7b5d4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(receiver,"receiver")
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocalClient_obj,receive,(void))

void LocalClient_obj::onClose( ::Dynamic close){
            	HX_STACK_FRAME("kha.network.LocalClient","onClose",0x4ce85497,"kha.network.LocalClient.onClose","kha/network/LocalClient.hx",20,0x60c7b5d4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(close,"close")
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocalClient_obj,onClose,(void))

::Array< ::Dynamic> LocalClient_obj::get_controllers(){
            	HX_STACK_FRAME("kha.network.LocalClient","get_controllers",0x41cff46c,"kha.network.LocalClient.get_controllers","kha/network/LocalClient.hx",27,0x60c7b5d4)
            	HX_STACK_THIS(this)
HXLINE(  27)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LocalClient_obj,get_controllers,return )

Int LocalClient_obj::get_id(){
            	HX_STACK_FRAME("kha.network.LocalClient","get_id",0x939c2e66,"kha.network.LocalClient.get_id","kha/network/LocalClient.hx",33,0x60c7b5d4)
            	HX_STACK_THIS(this)
HXLINE(  33)		return this->myId;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LocalClient_obj,get_id,return )


LocalClient_obj::LocalClient_obj()
{
}

void LocalClient_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LocalClient);
	HX_MARK_MEMBER_NAME(myId,"myId");
	HX_MARK_MEMBER_NAME(controllers,"controllers");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void LocalClient_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(myId,"myId");
	HX_VISIT_MEMBER_NAME(controllers,"controllers");
	HX_VISIT_MEMBER_NAME(id,"id");
}

hx::Val LocalClient_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( inCallProp == hx::paccAlways ? get_id() : id); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"myId") ) { return hx::Val( myId); }
		if (HX_FIELD_EQ(inName,"send") ) { return hx::Val( send_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return hx::Val( get_id_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"receive") ) { return hx::Val( receive_dyn()); }
		if (HX_FIELD_EQ(inName,"onClose") ) { return hx::Val( onClose_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"controllers") ) { return hx::Val( inCallProp == hx::paccAlways ? get_controllers() : controllers); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_controllers") ) { return hx::Val( get_controllers_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val LocalClient_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< Int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"myId") ) { myId=inValue.Cast< Int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"controllers") ) { controllers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LocalClient_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("myId","\x67","\x52","\x68","\x48"));
	outFields->push(HX_HCSTRING("controllers","\x57","\xf0","\x06","\x22"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo LocalClient_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(LocalClient_obj,myId),HX_HCSTRING("myId","\x67","\x52","\x68","\x48")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(LocalClient_obj,controllers),HX_HCSTRING("controllers","\x57","\xf0","\x06","\x22")},
	{hx::fsInt,(int)offsetof(LocalClient_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *LocalClient_obj_sStaticStorageInfo = 0;
#endif

static ::String LocalClient_obj_sMemberFields[] = {
	HX_HCSTRING("myId","\x67","\x52","\x68","\x48"),
	HX_HCSTRING("send","\x48","\x8d","\x50","\x4c"),
	HX_HCSTRING("receive","\xe3","\x61","\x58","\x2a"),
	HX_HCSTRING("onClose","\x19","\xb6","\xa0","\xde"),
	HX_HCSTRING("controllers","\x57","\xf0","\x06","\x22"),
	HX_HCSTRING("get_controllers","\xee","\xa7","\xe8","\xe2"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("get_id","\x24","\xf3","\x2f","\xa3"),
	::String(null()) };

static void LocalClient_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LocalClient_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LocalClient_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LocalClient_obj::__mClass,"__mClass");
};

#endif

hx::Class LocalClient_obj::__mClass;

void LocalClient_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.network.LocalClient","\xec","\x50","\xda","\xd5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LocalClient_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(LocalClient_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LocalClient_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LocalClient_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LocalClient_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LocalClient_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace network
