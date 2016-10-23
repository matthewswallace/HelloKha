// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics2_truetype_Stbtt__edge
#include <kha/graphics2/truetype/Stbtt__edge.h>
#endif

namespace kha{
namespace graphics2{
namespace truetype{

void Stbtt__edge_obj::__construct(){
            	HX_STACK_FRAME("kha.graphics2.truetype.Stbtt__edge","new",0x264beb3b,"kha.graphics2.truetype.Stbtt__edge.new","kha/graphics2/truetype/StbTruetype.hx",156,0x5d9e0de9)
            	HX_STACK_THIS(this)
            	}

Dynamic Stbtt__edge_obj::__CreateEmpty() { return new Stbtt__edge_obj; }

hx::ObjectPtr< Stbtt__edge_obj > Stbtt__edge_obj::__new()
{
	hx::ObjectPtr< Stbtt__edge_obj > _hx_result = new Stbtt__edge_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Stbtt__edge_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Stbtt__edge_obj > _hx_result = new Stbtt__edge_obj();
	_hx_result->__construct();
	return _hx_result;
}


Stbtt__edge_obj::Stbtt__edge_obj()
{
}

hx::Val Stbtt__edge_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { return hx::Val( x0); }
		if (HX_FIELD_EQ(inName,"y0") ) { return hx::Val( y0); }
		if (HX_FIELD_EQ(inName,"x1") ) { return hx::Val( x1); }
		if (HX_FIELD_EQ(inName,"y1") ) { return hx::Val( y1); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invert") ) { return hx::Val( invert); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Stbtt__edge_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { x0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y0") ) { y0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x1") ) { x1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y1") ) { y1=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invert") ) { invert=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stbtt__edge_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x0","\xb8","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("y0","\x97","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("x1","\xb9","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("y1","\x98","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Stbtt__edge_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Stbtt__edge_obj,x0),HX_HCSTRING("x0","\xb8","\x68","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt__edge_obj,y0),HX_HCSTRING("y0","\x97","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt__edge_obj,x1),HX_HCSTRING("x1","\xb9","\x68","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt__edge_obj,y1),HX_HCSTRING("y1","\x98","\x69","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Stbtt__edge_obj,invert),HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Stbtt__edge_obj_sStaticStorageInfo = 0;
#endif

static ::String Stbtt__edge_obj_sMemberFields[] = {
	HX_HCSTRING("x0","\xb8","\x68","\x00","\x00"),
	HX_HCSTRING("y0","\x97","\x69","\x00","\x00"),
	HX_HCSTRING("x1","\xb9","\x68","\x00","\x00"),
	HX_HCSTRING("y1","\x98","\x69","\x00","\x00"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	::String(null()) };

static void Stbtt__edge_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stbtt__edge_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Stbtt__edge_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stbtt__edge_obj::__mClass,"__mClass");
};

#endif

hx::Class Stbtt__edge_obj::__mClass;

void Stbtt__edge_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics2.truetype.Stbtt__edge","\xc9","\x31","\x19","\xa9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Stbtt__edge_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Stbtt__edge_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stbtt__edge_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Stbtt__edge_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stbtt__edge_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stbtt__edge_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype
