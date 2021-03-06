// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_Buffer
#include <kha/audio2/Buffer.h>
#endif

namespace kha{
namespace audio2{

void Buffer_obj::__construct(Int size,Int channels,Int samplesPerSecond){
            	HX_STACK_FRAME("kha.audio2.Buffer","new",0xffac43da,"kha.audio2.Buffer.new","kha/audio2/Buffer.hx",14,0x623cbeb6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(size,"size")
            	HX_STACK_ARG(channels,"channels")
            	HX_STACK_ARG(samplesPerSecond,"samplesPerSecond")
HXLINE(  15)		this->size = size;
HXLINE(  16)		HX_VARI_NAME( ::Array< Float >,this1,"this") = ::Array_obj< Float >::__new();
HXDLIN(  16)		_hx_array_set_size_exact(this1,size);
HXDLIN(  16)		this->data = this1;
HXLINE(  17)		this->channels = channels;
HXLINE(  18)		this->samplesPerSecond = samplesPerSecond;
HXLINE(  19)		this->readLocation = (int)0;
HXLINE(  20)		this->writeLocation = (int)0;
            	}

Dynamic Buffer_obj::__CreateEmpty() { return new Buffer_obj; }

hx::ObjectPtr< Buffer_obj > Buffer_obj::__new(Int size,Int channels,Int samplesPerSecond)
{
	hx::ObjectPtr< Buffer_obj > _hx_result = new Buffer_obj();
	_hx_result->__construct(size,channels,samplesPerSecond);
	return _hx_result;
}

Dynamic Buffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Buffer_obj > _hx_result = new Buffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}


Buffer_obj::Buffer_obj()
{
}

void Buffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Buffer);
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(samplesPerSecond,"samplesPerSecond");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(readLocation,"readLocation");
	HX_MARK_MEMBER_NAME(writeLocation,"writeLocation");
	HX_MARK_END_CLASS();
}

void Buffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(samplesPerSecond,"samplesPerSecond");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(readLocation,"readLocation");
	HX_VISIT_MEMBER_NAME(writeLocation,"writeLocation");
}

hx::Val Buffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data); }
		if (HX_FIELD_EQ(inName,"size") ) { return hx::Val( size); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return hx::Val( channels); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readLocation") ) { return hx::Val( readLocation); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writeLocation") ) { return hx::Val( writeLocation); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"samplesPerSecond") ) { return hx::Val( samplesPerSecond); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Buffer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< Int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< Int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readLocation") ) { readLocation=inValue.Cast< Int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writeLocation") ) { writeLocation=inValue.Cast< Int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"samplesPerSecond") ) { samplesPerSecond=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Buffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"));
	outFields->push(HX_HCSTRING("samplesPerSecond","\xe8","\xcd","\xb6","\xe5"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("readLocation","\xab","\xbb","\x7b","\x20"));
	outFields->push(HX_HCSTRING("writeLocation","\x34","\x0e","\xe8","\xa8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Buffer_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Buffer_obj,channels),HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a")},
	{hx::fsInt,(int)offsetof(Buffer_obj,samplesPerSecond),HX_HCSTRING("samplesPerSecond","\xe8","\xcd","\xb6","\xe5")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Buffer_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(Buffer_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsInt,(int)offsetof(Buffer_obj,readLocation),HX_HCSTRING("readLocation","\xab","\xbb","\x7b","\x20")},
	{hx::fsInt,(int)offsetof(Buffer_obj,writeLocation),HX_HCSTRING("writeLocation","\x34","\x0e","\xe8","\xa8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Buffer_obj_sStaticStorageInfo = 0;
#endif

static ::String Buffer_obj_sMemberFields[] = {
	HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"),
	HX_HCSTRING("samplesPerSecond","\xe8","\xcd","\xb6","\xe5"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("readLocation","\xab","\xbb","\x7b","\x20"),
	HX_HCSTRING("writeLocation","\x34","\x0e","\xe8","\xa8"),
	::String(null()) };

static void Buffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Buffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Buffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Buffer_obj::__mClass,"__mClass");
};

#endif

hx::Class Buffer_obj::__mClass;

void Buffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.Buffer","\xe8","\x0e","\x5b","\xe6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Buffer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Buffer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Buffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Buffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Buffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Buffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace audio2
