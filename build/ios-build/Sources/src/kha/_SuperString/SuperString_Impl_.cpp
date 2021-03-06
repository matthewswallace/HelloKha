// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "cpp/Pointer.h"
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_kha__SuperString_SuperString_Impl_
#include <kha/_SuperString/SuperString_Impl_.h>
#endif

namespace kha{
namespace _SuperString{

void SuperString_Impl__obj::__construct() { }

Dynamic SuperString_Impl__obj::__CreateEmpty() { return new SuperString_Impl__obj; }

hx::ObjectPtr< SuperString_Impl__obj > SuperString_Impl__obj::__new()
{
	hx::ObjectPtr< SuperString_Impl__obj > _hx_result = new SuperString_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic SuperString_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SuperString_Impl__obj > _hx_result = new SuperString_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

::String SuperString_Impl__obj::_new(::String value){
            	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","_new",0x933e1b5a,"kha._SuperString.SuperString_Impl_._new","kha/SuperString.hx",12,0x5b8dae7d)
            	HX_STACK_ARG(value,"value")
HXLINE(  12)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SuperString_Impl__obj,_new,return )

Int SuperString_Impl__obj::get_length(::String this1){
            	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","get_length",0xa2a04b68,"kha._SuperString.SuperString_Impl_.get_length","kha/SuperString.hx",19,0x5b8dae7d)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  19)		return ::haxe::Utf8_obj::length(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SuperString_Impl__obj,get_length,return )

::String SuperString_Impl__obj::charAt(::String this1,Int index){
            	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","charAt",0x95dcafa2,"kha._SuperString.SuperString_Impl_.charAt","kha/SuperString.hx",22,0x5b8dae7d)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(index,"index")
HXLINE(  23)		HX_VARI( Int,code) = ::haxe::Utf8_obj::charCodeAt(this1,index);
HXLINE(  24)		return ::String::fromCharCode(code);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SuperString_Impl__obj,charAt,return )

Int SuperString_Impl__obj::charCodeAt(::String this1,Int index){
            	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","charCodeAt",0x48662daf,"kha._SuperString.SuperString_Impl_.charCodeAt","kha/SuperString.hx",28,0x5b8dae7d)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(index,"index")
HXLINE(  28)		return ::haxe::Utf8_obj::charCodeAt(this1,index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SuperString_Impl__obj,charCodeAt,return )

::String SuperString_Impl__obj::toUpperCase(::String this1){
            	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","toUpperCase",0xd509cb5e,"kha._SuperString.SuperString_Impl_.toUpperCase","kha/SuperString.hx",31,0x5b8dae7d)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  32)		HX_VARI(  ::StringBuf,buffer) =  ::StringBuf_obj::__new();
HXLINE(  33)		{
HXLINE(  33)			HX_VARI( ::cpp::Pointer< char >,src) = ::cpp::Pointer_obj::fromPointer(this1.__s);
HXDLIN(  33)			HX_VARI( ::cpp::Pointer< char >,end) = src->add(this1.length);
HXDLIN(  33)			while(true){
HXLINE(  33)				Bool _hx_tmp = !(src->lt(end));
HXDLIN(  33)				if (_hx_tmp) {
HXLINE(  33)					goto _hx_goto_0;
            				}
HXLINE(  34)				HX_VARI( Int,code) = _hx_utf8_decode_advance(src->ptr);
HXDLIN(  34)				Bool _hx_tmp1;
HXDLIN(  34)				 ::Dynamic _hx_tmp2 = HX_("a",61,00,00,00).charCodeAt((int)0);
HXDLIN(  34)				if (hx::IsGreaterEq( code,_hx_tmp2 )) {
HXLINE(  34)					 ::Dynamic _hx_tmp3 = HX_("z",7a,00,00,00).charCodeAt((int)0);
HXDLIN(  34)					_hx_tmp1 = hx::IsLessEq( code,_hx_tmp3 );
            				}
            				else {
HXLINE(  34)					_hx_tmp1 = false;
            				}
HXDLIN(  34)				if (_hx_tmp1) {
HXLINE(  35)					 ::Dynamic _hx_tmp4 = HX_("a",61,00,00,00).charCodeAt((int)0);
HXDLIN(  35)					Int _hx_tmp5 = (code - _hx_tmp4);
HXDLIN(  35)					 ::Dynamic _hx_tmp6 = HX_("A",41,00,00,00).charCodeAt((int)0);
HXDLIN(  35)					Int c = (_hx_tmp5 + _hx_tmp6);
HXDLIN(  35)					Bool _hx_tmp7 = hx::IsNull( buffer->charBuf );
HXDLIN(  35)					if (_hx_tmp7) {
HXLINE(  35)						buffer->charBuf = ::Array_obj< char >::__new();
            					}
HXDLIN(  35)					buffer->charBuf->push(c);
            				}
            				else {
HXLINE(  37)					Int _hx_tmp8 = ::haxe::Utf8_obj::charCodeAt(HX_("\xc3""\xa4""",81,aa,00,00),(int)0);
HXDLIN(  37)					if ((code == _hx_tmp8)) {
HXLINE(  38)						Int c1 = ::haxe::Utf8_obj::charCodeAt(HX_("\xc3""\x84""",61,aa,00,00),(int)0);
HXDLIN(  38)						Bool _hx_tmp9 = hx::IsNull( buffer->charBuf );
HXDLIN(  38)						if (_hx_tmp9) {
HXLINE(  38)							buffer->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN(  38)						buffer->charBuf->push(c1);
            					}
            					else {
HXLINE(  40)						Int _hx_tmp10 = ::haxe::Utf8_obj::charCodeAt(HX_("\xc3""\xb6""",93,aa,00,00),(int)0);
HXDLIN(  40)						if ((code == _hx_tmp10)) {
HXLINE(  41)							Int c2 = ::haxe::Utf8_obj::charCodeAt(HX_("\xc3""\x96""",73,aa,00,00),(int)0);
HXDLIN(  41)							Bool _hx_tmp11 = hx::IsNull( buffer->charBuf );
HXDLIN(  41)							if (_hx_tmp11) {
HXLINE(  41)								buffer->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN(  41)							buffer->charBuf->push(c2);
            						}
            						else {
HXLINE(  43)							Int _hx_tmp12 = ::haxe::Utf8_obj::charCodeAt(HX_("\xc3""\xbc""",99,aa,00,00),(int)0);
HXDLIN(  43)							if ((code == _hx_tmp12)) {
HXLINE(  44)								Int c3 = ::haxe::Utf8_obj::charCodeAt(HX_("\xc3""\x9c""",79,aa,00,00),(int)0);
HXDLIN(  44)								Bool _hx_tmp13 = hx::IsNull( buffer->charBuf );
HXDLIN(  44)								if (_hx_tmp13) {
HXLINE(  44)									buffer->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN(  44)								buffer->charBuf->push(c3);
            							}
            							else {
HXLINE(  47)								Bool _hx_tmp14 = hx::IsNull( buffer->charBuf );
HXDLIN(  47)								if (_hx_tmp14) {
HXLINE(  47)									buffer->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN(  47)								buffer->charBuf->push(code);
            							}
            						}
            					}
            				}
            			}
            			_hx_goto_0:;
            		}
HXLINE(  50)		Bool _hx_tmp15 = hx::IsNotNull( buffer->charBuf );
HXDLIN(  50)		if (_hx_tmp15) {
HXLINE(  50)			buffer->flush();
            		}
HXDLIN(  50)		::String value = buffer->b->join(HX_("",00,00,00,00));
HXDLIN(  50)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SuperString_Impl__obj,toUpperCase,return )

::String SuperString_Impl__obj::toLowerCase(::String this1){
            	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","toLowerCase",0x5470e77d,"kha._SuperString.SuperString_Impl_.toLowerCase","kha/SuperString.hx",53,0x5b8dae7d)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  54)		HX_VARI(  ::StringBuf,buffer) =  ::StringBuf_obj::__new();
HXLINE(  55)		{
HXLINE(  55)			HX_VARI( ::cpp::Pointer< char >,src) = ::cpp::Pointer_obj::fromPointer(this1.__s);
HXDLIN(  55)			HX_VARI( ::cpp::Pointer< char >,end) = src->add(this1.length);
HXDLIN(  55)			while(true){
HXLINE(  55)				Bool _hx_tmp = !(src->lt(end));
HXDLIN(  55)				if (_hx_tmp) {
HXLINE(  55)					goto _hx_goto_1;
            				}
HXLINE(  56)				HX_VARI( Int,code) = _hx_utf8_decode_advance(src->ptr);
HXDLIN(  56)				Bool _hx_tmp1;
HXDLIN(  56)				 ::Dynamic _hx_tmp2 = HX_("A",41,00,00,00).charCodeAt((int)0);
HXDLIN(  56)				if (hx::IsGreaterEq( code,_hx_tmp2 )) {
HXLINE(  56)					 ::Dynamic _hx_tmp3 = HX_("Z",5a,00,00,00).charCodeAt((int)0);
HXDLIN(  56)					_hx_tmp1 = hx::IsLessEq( code,_hx_tmp3 );
            				}
            				else {
HXLINE(  56)					_hx_tmp1 = false;
            				}
HXDLIN(  56)				if (_hx_tmp1) {
HXLINE(  57)					 ::Dynamic _hx_tmp4 = HX_("A",41,00,00,00).charCodeAt((int)0);
HXDLIN(  57)					Int _hx_tmp5 = (code - _hx_tmp4);
HXDLIN(  57)					 ::Dynamic _hx_tmp6 = HX_("a",61,00,00,00).charCodeAt((int)0);
HXDLIN(  57)					Int c = (_hx_tmp5 + _hx_tmp6);
HXDLIN(  57)					Bool _hx_tmp7 = hx::IsNull( buffer->charBuf );
HXDLIN(  57)					if (_hx_tmp7) {
HXLINE(  57)						buffer->charBuf = ::Array_obj< char >::__new();
            					}
HXDLIN(  57)					buffer->charBuf->push(c);
            				}
            				else {
HXLINE(  59)					Int _hx_tmp8 = ::haxe::Utf8_obj::charCodeAt(HX_("\xc3""\x84""",61,aa,00,00),(int)0);
HXDLIN(  59)					if ((code == _hx_tmp8)) {
HXLINE(  60)						Int c1 = ::haxe::Utf8_obj::charCodeAt(HX_("\xc3""\xa4""",81,aa,00,00),(int)0);
HXDLIN(  60)						Bool _hx_tmp9 = hx::IsNull( buffer->charBuf );
HXDLIN(  60)						if (_hx_tmp9) {
HXLINE(  60)							buffer->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN(  60)						buffer->charBuf->push(c1);
            					}
            					else {
HXLINE(  62)						Int _hx_tmp10 = ::haxe::Utf8_obj::charCodeAt(HX_("\xc3""\x96""",73,aa,00,00),(int)0);
HXDLIN(  62)						if ((code == _hx_tmp10)) {
HXLINE(  63)							Int c2 = ::haxe::Utf8_obj::charCodeAt(HX_("\xc3""\xb6""",93,aa,00,00),(int)0);
HXDLIN(  63)							Bool _hx_tmp11 = hx::IsNull( buffer->charBuf );
HXDLIN(  63)							if (_hx_tmp11) {
HXLINE(  63)								buffer->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN(  63)							buffer->charBuf->push(c2);
            						}
            						else {
HXLINE(  65)							Int _hx_tmp12 = ::haxe::Utf8_obj::charCodeAt(HX_("\xc3""\x9c""",79,aa,00,00),(int)0);
HXDLIN(  65)							if ((code == _hx_tmp12)) {
HXLINE(  66)								Int c3 = ::haxe::Utf8_obj::charCodeAt(HX_("\xc3""\xbc""",99,aa,00,00),(int)0);
HXDLIN(  66)								Bool _hx_tmp13 = hx::IsNull( buffer->charBuf );
HXDLIN(  66)								if (_hx_tmp13) {
HXLINE(  66)									buffer->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN(  66)								buffer->charBuf->push(c3);
            							}
            							else {
HXLINE(  69)								Bool _hx_tmp14 = hx::IsNull( buffer->charBuf );
HXDLIN(  69)								if (_hx_tmp14) {
HXLINE(  69)									buffer->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN(  69)								buffer->charBuf->push(code);
            							}
            						}
            					}
            				}
            			}
            			_hx_goto_1:;
            		}
HXLINE(  72)		Bool _hx_tmp15 = hx::IsNotNull( buffer->charBuf );
HXDLIN(  72)		if (_hx_tmp15) {
HXLINE(  72)			buffer->flush();
            		}
HXDLIN(  72)		::String value = buffer->b->join(HX_("",00,00,00,00));
HXDLIN(  72)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SuperString_Impl__obj,toLowerCase,return )

::String SuperString_Impl__obj::trim(::String this1){
            	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","trim",0xa122a2db,"kha._SuperString.SuperString_Impl_.trim","kha/SuperString.hx",76,0x5b8dae7d)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  76)		::String value = ::StringTools_obj::trim(this1);
HXDLIN(  76)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SuperString_Impl__obj,trim,return )

::String SuperString_Impl__obj::substr(::String this1,Int pos, ::Dynamic len){
            	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","substr",0x7872256a,"kha._SuperString.SuperString_Impl_.substr","kha/SuperString.hx",80,0x5b8dae7d)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(pos,"pos")
            	HX_STACK_ARG(len,"len")
HXLINE(  80)		Int _hx_tmp;
HXDLIN(  80)		Bool _hx_tmp1 = hx::IsNull( len );
HXDLIN(  80)		if (_hx_tmp1) {
HXLINE(  80)			Int _hx_tmp2 = ::kha::_SuperString::SuperString_Impl__obj::get_length(this1);
HXDLIN(  80)			_hx_tmp = (_hx_tmp2 - pos);
            		}
            		else {
HXLINE(  80)			_hx_tmp = len;
            		}
HXDLIN(  80)		::String value = ::haxe::Utf8_obj::sub(this1,pos,_hx_tmp);
HXDLIN(  80)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SuperString_Impl__obj,substr,return )

::String SuperString_Impl__obj::substring(::String this1,Int start,Int end){
            	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","substring",0x9613a5b8,"kha._SuperString.SuperString_Impl_.substring","kha/SuperString.hx",84,0x5b8dae7d)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(start,"start")
            	HX_STACK_ARG(end,"end")
HXLINE(  84)		::String value = ::haxe::Utf8_obj::sub(this1,start,(end - start));
HXDLIN(  84)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SuperString_Impl__obj,substring,return )

::Array< ::String > SuperString_Impl__obj::split(::String this1,::String splitter){
            	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","split",0xc8751ec1,"kha._SuperString.SuperString_Impl_.split","kha/SuperString.hx",87,0x5b8dae7d)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(splitter,"splitter")
HXLINE(  88)		HX_VARI( ::Array< ::String >,array) = ::Array_obj< ::String >::__new();
HXLINE(  89)		HX_VARI( ::Array< ::String >,splitted) = this1.split(splitter);
HXLINE(  90)		{
HXLINE(  90)			HX_VARI( Int,_g) = (int)0;
HXDLIN(  90)			while((_g < splitted->length)){
HXLINE(  90)				HX_VARI( ::String,s) = splitted->__get(_g);
HXDLIN(  90)				++_g;
HXLINE(  91)				array->push(s);
            			}
            		}
HXLINE(  93)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SuperString_Impl__obj,split,return )

Int SuperString_Impl__obj::indexOf(::String this1,::String str, ::Dynamic startIndex){
            	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","indexOf",0x9ca78470,"kha._SuperString.SuperString_Impl_.indexOf","kha/SuperString.hx",96,0x5b8dae7d)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(str,"str")
            	HX_STACK_ARG(startIndex,"startIndex")
HXLINE(  97)		HX_VARI( Int,index) = (int)-1;
HXLINE(  98)		HX_VAR( Int,i);
HXDLIN(  98)		Bool _hx_tmp = hx::IsNull( startIndex );
HXDLIN(  98)		if (_hx_tmp) {
HXLINE(  98)			i = (int)0;
            		}
            		else {
HXLINE(  98)			i = startIndex;
            		}
HXLINE(  99)		{
HXLINE(  99)			HX_VARI( ::cpp::Pointer< char >,src) = ::cpp::Pointer_obj::fromPointer(this1.__s);
HXDLIN(  99)			HX_VARI( ::cpp::Pointer< char >,end) = src->add(this1.length);
HXDLIN(  99)			while(true){
HXLINE(  99)				Bool _hx_tmp1 = !(src->lt(end));
HXDLIN(  99)				if (_hx_tmp1) {
HXLINE(  99)					goto _hx_goto_3;
            				}
HXDLIN(  99)				Int _hx_char = _hx_utf8_decode_advance(src->ptr);
HXLINE( 100)				Bool _hx_tmp2;
HXDLIN( 100)				if ((index < (int)0)) {
HXLINE( 100)					 ::Dynamic _hx_tmp3 = str.charCodeAt((int)0);
HXDLIN( 100)					_hx_tmp2 = hx::IsEq( _hx_tmp3,_hx_char );
            				}
            				else {
HXLINE( 100)					_hx_tmp2 = false;
            				}
HXDLIN( 100)				if (_hx_tmp2) {
HXLINE( 101)					index = i;
            				}
HXLINE( 103)				++i;
            			}
            			_hx_goto_3:;
            		}
HXLINE( 105)		return index;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SuperString_Impl__obj,indexOf,return )

::String SuperString_Impl__obj::toString(::String this1){
            	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","toString",0xe7bac725,"kha._SuperString.SuperString_Impl_.toString","kha/SuperString.hx",109,0x5b8dae7d)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 109)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SuperString_Impl__obj,toString,return )


SuperString_Impl__obj::SuperString_Impl__obj()
{
}

bool SuperString_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"trim") ) { outValue = trim_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"split") ) { outValue = split_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"charAt") ) { outValue = charAt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"substr") ) { outValue = substr_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexOf") ) { outValue = indexOf_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"substring") ) { outValue = substring_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"charCodeAt") ) { outValue = charCodeAt_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toUpperCase") ) { outValue = toUpperCase_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toLowerCase") ) { outValue = toLowerCase_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SuperString_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SuperString_Impl__obj_sStaticStorageInfo = 0;
#endif

static void SuperString_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SuperString_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SuperString_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SuperString_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class SuperString_Impl__obj::__mClass;

static ::String SuperString_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("charAt","\x69","\x79","\x75","\xb7"),
	HX_HCSTRING("charCodeAt","\xf6","\xe6","\x54","\x35"),
	HX_HCSTRING("toUpperCase","\x37","\x30","\xfd","\x38"),
	HX_HCSTRING("toLowerCase","\x56","\x4c","\x64","\xb8"),
	HX_HCSTRING("trim","\xe2","\x9c","\x03","\x4d"),
	HX_HCSTRING("substr","\x31","\xef","\x0a","\x9a"),
	HX_HCSTRING("substring","\x51","\xf2","\xe7","\xe2"),
	HX_HCSTRING("split","\xda","\xea","\x6e","\x81"),
	HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void SuperString_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha._SuperString.SuperString_Impl_","\x15","\x1d","\x25","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SuperString_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SuperString_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(SuperString_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SuperString_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SuperString_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SuperString_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SuperString_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace _SuperString
