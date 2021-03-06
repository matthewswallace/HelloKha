// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

namespace haxe{
namespace io{

void Input_obj::__construct() { }

Dynamic Input_obj::__CreateEmpty() { return new Input_obj; }

hx::ObjectPtr< Input_obj > Input_obj::__new()
{
	hx::ObjectPtr< Input_obj > _hx_result = new Input_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Input_obj > _hx_result = new Input_obj();
	_hx_result->__construct();
	return _hx_result;
}

Int Input_obj::readByte(){
            	HX_STACK_FRAME("haxe.io.Input","readByte",0x4de8a3c2,"haxe.io.Input.readByte","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/io/Input.hx",48,0x9270ed32)
            	HX_STACK_THIS(this)
HXLINE(  48)		HX_STACK_DO_THROW(HX_("Not implemented",15,1e,32,34));
HXDLIN(  48)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readByte,return )

Int Input_obj::readBytes( ::haxe::io::Bytes s,Int pos,Int len){
            	HX_STACK_FRAME("haxe.io.Input","readBytes",0xdda6a671,"haxe.io.Input.readBytes","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/io/Input.hx",61,0x9270ed32)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(pos,"pos")
            	HX_STACK_ARG(len,"len")
HXLINE(  62)		HX_VARI( Int,k) = len;
HXLINE(  63)		HX_VARI( ::Array< unsigned char >,b) = s->b;
HXLINE(  64)		Bool _hx_tmp;
HXDLIN(  64)		Bool _hx_tmp1;
HXDLIN(  64)		if ((pos >= (int)0)) {
HXLINE(  64)			_hx_tmp1 = (len < (int)0);
            		}
            		else {
HXLINE(  64)			_hx_tmp1 = true;
            		}
HXDLIN(  64)		if (!(_hx_tmp1)) {
HXLINE(  64)			_hx_tmp = ((pos + len) > s->length);
            		}
            		else {
HXLINE(  64)			_hx_tmp = true;
            		}
HXDLIN(  64)		if (_hx_tmp) {
HXLINE(  65)			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            		}
HXLINE(  66)		try {
            			HX_STACK_CATCHABLE( ::haxe::io::Eof, 0);
HXLINE(  67)			while((k > (int)0)){
HXLINE(  73)				unsigned char _hx_tmp2 = this->readByte();
HXDLIN(  73)				b[pos] = _hx_tmp2;
HXLINE(  77)				++pos;
HXLINE(  78)				--k;
            			}
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::haxe::io::Eof >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::haxe::io::Eof eof = _hx_e;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  81)		return (len - k);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readBytes,return )

void Input_obj::readFullBytes( ::haxe::io::Bytes s,Int pos,Int len){
            	HX_STACK_FRAME("haxe.io.Input","readFullBytes",0x3db9a162,"haxe.io.Input.readFullBytes","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/io/Input.hx",132,0x9270ed32)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(pos,"pos")
            	HX_STACK_ARG(len,"len")
HXLINE( 132)		while((len > (int)0)){
HXLINE( 133)			HX_VARI( Int,k) = this->readBytes(s,pos,len);
HXLINE( 134)			if ((k == (int)0)) {
HXLINE( 135)				HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked_dyn());
            			}
HXLINE( 136)			hx::AddEq(pos,k);
HXLINE( 137)			hx::SubEq(len,k);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readFullBytes,(void))

 ::haxe::io::Bytes Input_obj::read(Int nbytes){
            	HX_STACK_FRAME("haxe.io.Input","read",0x27b9839a,"haxe.io.Input.read","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/io/Input.hx",144,0x9270ed32)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(nbytes,"nbytes")
HXLINE( 145)		HX_VARI(  ::haxe::io::Bytes,s) = ::haxe::io::Bytes_obj::alloc(nbytes);
HXLINE( 146)		HX_VARI( Int,p) = (int)0;
HXLINE( 147)		while((nbytes > (int)0)){
HXLINE( 148)			HX_VARI( Int,k) = this->readBytes(s,p,nbytes);
HXLINE( 149)			if ((k == (int)0)) {
HXLINE( 149)				HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked_dyn());
            			}
HXLINE( 150)			hx::AddEq(p,k);
HXLINE( 151)			hx::SubEq(nbytes,k);
            		}
HXLINE( 153)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,read,return )

Int Input_obj::readInt32(){
            	HX_STACK_FRAME("haxe.io.Input","readInt32",0xde2f3154,"haxe.io.Input.readInt32","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/io/Input.hx",278,0x9270ed32)
            	HX_STACK_THIS(this)
HXLINE( 279)		HX_VARI( Int,ch1) = this->readByte();
HXLINE( 280)		HX_VARI( Int,ch2) = this->readByte();
HXLINE( 281)		HX_VARI( Int,ch3) = this->readByte();
HXLINE( 282)		HX_VARI( Int,ch4) = this->readByte();
HXLINE( 295)		if (this->bigEndian) {
HXLINE( 295)			return ((int)((int)((int)ch4 | (int)((int)ch3 << (int)(int)8)) | (int)((int)ch2 << (int)(int)16)) | (int)((int)ch1 << (int)(int)24));
            		}
            		else {
HXLINE( 295)			return ((int)((int)((int)ch1 | (int)((int)ch2 << (int)(int)8)) | (int)((int)ch3 << (int)(int)16)) | (int)((int)ch4 << (int)(int)24));
            		}
HXDLIN( 295)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readInt32,return )

::String Input_obj::readString(Int len){
            	HX_STACK_FRAME("haxe.io.Input","readString",0xfdebd00b,"haxe.io.Input.readString","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/io/Input.hx",302,0x9270ed32)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(len,"len")
HXLINE( 303)		HX_VARI(  ::haxe::io::Bytes,b) = ::haxe::io::Bytes_obj::alloc(len);
HXLINE( 304)		this->readFullBytes(b,(int)0,len);
HXLINE( 308)		return b->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,readString,return )


Input_obj::Input_obj()
{
}

hx::Val Input_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return hx::Val( read_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return hx::Val( readByte_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return hx::Val( bigEndian); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return hx::Val( readBytes_dyn()); }
		if (HX_FIELD_EQ(inName,"readInt32") ) { return hx::Val( readInt32_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readString") ) { return hx::Val( readString_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readFullBytes") ) { return hx::Val( readFullBytes_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Input_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { bigEndian=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Input_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Input_obj,bigEndian),HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Input_obj_sStaticStorageInfo = 0;
#endif

static ::String Input_obj_sMemberFields[] = {
	HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("readFullBytes","\x26","\x02","\x0b","\xce"),
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	HX_HCSTRING("readInt32","\x18","\xe0","\x07","\x8f"),
	HX_HCSTRING("readString","\xc7","\x0c","\xac","\x0a"),
	::String(null()) };

static void Input_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Input_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Input","\xaa","\x0e","\xf5","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Input_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Input_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Input_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Input_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Input_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
