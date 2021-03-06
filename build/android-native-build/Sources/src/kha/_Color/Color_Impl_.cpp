// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_kha__Color_Color_Impl_
#include <kha/_Color/Color_Impl_.h>
#endif

namespace kha{
namespace _Color{

void Color_Impl__obj::__construct() { }

Dynamic Color_Impl__obj::__CreateEmpty() { return new Color_Impl__obj; }

hx::ObjectPtr< Color_Impl__obj > Color_Impl__obj::__new()
{
	hx::ObjectPtr< Color_Impl__obj > _hx_result = new Color_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Color_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Color_Impl__obj > _hx_result = new Color_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Int Color_Impl__obj::Black;

Int Color_Impl__obj::White;

Int Color_Impl__obj::Red;

Int Color_Impl__obj::Blue;

Int Color_Impl__obj::Green;

Int Color_Impl__obj::Magenta;

Int Color_Impl__obj::Yellow;

Int Color_Impl__obj::Cyan;

Int Color_Impl__obj::Purple;

Int Color_Impl__obj::Pink;

Int Color_Impl__obj::Orange;

float Color_Impl__obj::invMaxChannelValue;

Int Color_Impl__obj::fromValue(Int value){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","fromValue",0xdaee86bc,"kha._Color.Color_Impl_.fromValue","kha/Color.hx",31,0xcf6d63e6)
            	HX_STACK_ARG(value,"value")
HXLINE(  31)		return ::kha::_Color::Color_Impl__obj::_new(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,fromValue,return )

Int Color_Impl__obj::fromBytes(Int r,Int g,Int b,hx::Null< Int >  __o_a){
Int a = __o_a.Default(255);
            	HX_STACK_FRAME("kha._Color.Color_Impl_","fromBytes",0x66ce0fb6,"kha._Color.Color_Impl_.fromBytes","kha/Color.hx",38,0xcf6d63e6)
            	HX_STACK_ARG(r,"r")
            	HX_STACK_ARG(g,"g")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(a,"a")
HXLINE(  38)		return ::kha::_Color::Color_Impl__obj::_new(((int)((int)((int)((int)a << (int)(int)24) | (int)((int)r << (int)(int)16)) | (int)((int)g << (int)(int)8)) | (int)b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Color_Impl__obj,fromBytes,return )

Int Color_Impl__obj::fromFloats(float r,float g,float b,hx::Null< float >  __o_a){
float a = __o_a.Default(1);
            	HX_STACK_FRAME("kha._Color.Color_Impl_","fromFloats",0xa7667dac,"kha._Color.Color_Impl_.fromFloats","kha/Color.hx",45,0xcf6d63e6)
            	HX_STACK_ARG(r,"r")
            	HX_STACK_ARG(g,"g")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(a,"a")
HXLINE(  45)		Int _hx_tmp = ::Std_obj::_hx_int((a * (int)255));
HXDLIN(  45)		Int _hx_tmp1 = ((int)_hx_tmp << (int)(int)24);
HXDLIN(  45)		Int _hx_tmp2 = ::Std_obj::_hx_int((r * (int)255));
HXDLIN(  45)		Int _hx_tmp3 = ((int)_hx_tmp1 | (int)((int)_hx_tmp2 << (int)(int)16));
HXDLIN(  45)		Int _hx_tmp4 = ::Std_obj::_hx_int((g * (int)255));
HXDLIN(  45)		Int _hx_tmp5 = ((int)_hx_tmp3 | (int)((int)_hx_tmp4 << (int)(int)8));
HXDLIN(  45)		Int _hx_tmp6 = ::Std_obj::_hx_int((b * (int)255));
HXDLIN(  45)		return ::kha::_Color::Color_Impl__obj::_new(((int)_hx_tmp5 | (int)_hx_tmp6));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Color_Impl__obj,fromFloats,return )

Int Color_Impl__obj::fromString(::String value){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","fromString",0x77408326,"kha._Color.Color_Impl_.fromString","kha/Color.hx",52,0xcf6d63e6)
            	HX_STACK_ARG(value,"value")
HXLINE(  52)		Bool _hx_tmp;
HXDLIN(  52)		Bool _hx_tmp1;
HXDLIN(  52)		if ((value.length != (int)7)) {
HXLINE(  52)			_hx_tmp1 = (value.length == (int)9);
            		}
            		else {
HXLINE(  52)			_hx_tmp1 = true;
            		}
HXDLIN(  52)		if (_hx_tmp1) {
HXLINE(  52)			Int _hx_tmp2 = value.cca((int)0);
HXDLIN(  52)			_hx_tmp = (_hx_tmp2 == (int)35);
            		}
            		else {
HXLINE(  52)			_hx_tmp = false;
            		}
HXDLIN(  52)		if (_hx_tmp) {
HXLINE(  53)			::String _hx_tmp3 = value.substr((int)1,null());
HXDLIN(  53)			HX_VARI(  ::Dynamic,colorValue) = ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + _hx_tmp3));
HXLINE(  54)			if ((value.length == (int)7)) {
HXLINE(  55)				hx::AddEq(colorValue,(int)-16777216);
            			}
HXLINE(  57)			return ::kha::_Color::Color_Impl__obj::_new(colorValue);
            		}
            		else {
HXLINE(  60)			HX_STACK_DO_THROW(((HX_("Invalid Color string: '",2a,42,44,dd) + value) + HX_("'",27,00,00,00)));
            		}
HXLINE(  52)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,fromString,return )

Int Color_Impl__obj::_new(Int value){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","_new",0x1251106c,"kha._Color.Color_Impl_._new","kha/Color.hx",97,0xcf6d63e6)
            	HX_STACK_ARG(value,"value")
HXLINE(  97)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,_new,return )

Int Color_Impl__obj::get_value(Int this1){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","get_value",0x6a0ef8dd,"kha._Color.Color_Impl_.get_value","kha/Color.hx",107,0xcf6d63e6)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 107)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_value,return )

Int Color_Impl__obj::set_value(Int this1,Int value){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","set_value",0x4d5fe4e9,"kha._Color.Color_Impl_.set_value","kha/Color.hx",110,0xcf6d63e6)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(value,"value")
HXLINE( 111)		this1 = value;
HXLINE( 112)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_value,return )

Int Color_Impl__obj::get_Rb(Int this1){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","get_Rb",0x231ef2e4,"kha._Color.Color_Impl_.get_Rb","kha/Color.hx",116,0xcf6d63e6)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 116)		return hx::UShr(((int)this1 & (int)(int)16711680),(int)16);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_Rb,return )

Int Color_Impl__obj::get_Gb(Int this1){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","get_Gb",0x231ee94f,"kha._Color.Color_Impl_.get_Gb","kha/Color.hx",120,0xcf6d63e6)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 120)		return hx::UShr(((int)this1 & (int)(int)65280),(int)8);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_Gb,return )

Int Color_Impl__obj::get_Bb(Int this1){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","get_Bb",0x231ee4f4,"kha._Color.Color_Impl_.get_Bb","kha/Color.hx",124,0xcf6d63e6)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 124)		return ((int)this1 & (int)(int)255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_Bb,return )

Int Color_Impl__obj::get_Ab(Int this1){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","get_Ab",0x231ee415,"kha._Color.Color_Impl_.get_Ab","kha/Color.hx",128,0xcf6d63e6)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 128)		return hx::UShr(this1,(int)24);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_Ab,return )

Int Color_Impl__obj::set_Rb(Int this1,Int i){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","set_Rb",0xef674758,"kha._Color.Color_Impl_.set_Rb","kha/Color.hx",131,0xcf6d63e6)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(i,"i")
HXLINE( 132)		Int _hx_tmp = ((int)((int)((int)hx::UShr(this1,(int)24) << (int)(int)24) | (int)((int)i << (int)(int)16)) | (int)((int)hx::UShr(((int)this1 & (int)(int)65280),(int)8) << (int)(int)8));
HXDLIN( 132)		Int _hx_tmp1 = ((int)this1 & (int)(int)255);
HXDLIN( 132)		this1 = ((int)_hx_tmp | (int)_hx_tmp1);
HXLINE( 133)		return i;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_Rb,return )

Int Color_Impl__obj::set_Gb(Int this1,Int i){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","set_Gb",0xef673dc3,"kha._Color.Color_Impl_.set_Gb","kha/Color.hx",136,0xcf6d63e6)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(i,"i")
HXLINE( 137)		Int _hx_tmp = ((int)((int)((int)hx::UShr(this1,(int)24) << (int)(int)24) | (int)((int)hx::UShr(((int)this1 & (int)(int)16711680),(int)16) << (int)(int)16)) | (int)((int)i << (int)(int)8));
HXDLIN( 137)		Int _hx_tmp1 = ((int)this1 & (int)(int)255);
HXDLIN( 137)		this1 = ((int)_hx_tmp | (int)_hx_tmp1);
HXLINE( 138)		return i;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_Gb,return )

Int Color_Impl__obj::set_Bb(Int this1,Int i){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","set_Bb",0xef673968,"kha._Color.Color_Impl_.set_Bb","kha/Color.hx",141,0xcf6d63e6)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(i,"i")
HXLINE( 142)		Int _hx_tmp = ((int)((int)((int)hx::UShr(this1,(int)24) << (int)(int)24) | (int)((int)hx::UShr(((int)this1 & (int)(int)16711680),(int)16) << (int)(int)16)) | (int)((int)hx::UShr(((int)this1 & (int)(int)65280),(int)8) << (int)(int)8));
HXDLIN( 142)		this1 = ((int)_hx_tmp | (int)i);
HXLINE( 143)		return i;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_Bb,return )

Int Color_Impl__obj::set_Ab(Int this1,Int i){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","set_Ab",0xef673889,"kha._Color.Color_Impl_.set_Ab","kha/Color.hx",146,0xcf6d63e6)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(i,"i")
HXLINE( 147)		Int _hx_tmp = ((int)((int)((int)i << (int)(int)24) | (int)((int)hx::UShr(((int)this1 & (int)(int)16711680),(int)16) << (int)(int)16)) | (int)((int)hx::UShr(((int)this1 & (int)(int)65280),(int)8) << (int)(int)8));
HXDLIN( 147)		Int _hx_tmp1 = ((int)this1 & (int)(int)255);
HXDLIN( 147)		this1 = ((int)_hx_tmp | (int)_hx_tmp1);
HXLINE( 148)		return i;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_Ab,return )

float Color_Impl__obj::get_R(Int this1){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","get_R",0x89ea53be,"kha._Color.Color_Impl_.get_R","kha/Color.hx",152,0xcf6d63e6)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 152)		return (hx::UShr(((int)this1 & (int)(int)16711680),(int)16) * ((Float)0.00392156862745098));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_R,return )

float Color_Impl__obj::get_G(Int this1){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","get_G",0x89ea53b3,"kha._Color.Color_Impl_.get_G","kha/Color.hx",156,0xcf6d63e6)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 156)		return (hx::UShr(((int)this1 & (int)(int)65280),(int)8) * ((Float)0.00392156862745098));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_G,return )

float Color_Impl__obj::get_B(Int this1){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","get_B",0x89ea53ae,"kha._Color.Color_Impl_.get_B","kha/Color.hx",160,0xcf6d63e6)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 160)		return (((int)this1 & (int)(int)255) * ((Float)0.00392156862745098));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_B,return )

float Color_Impl__obj::get_A(Int this1){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","get_A",0x89ea53ad,"kha._Color.Color_Impl_.get_A","kha/Color.hx",164,0xcf6d63e6)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 164)		return (hx::UShr(this1,(int)24) * ((Float)0.00392156862745098));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_A,return )

float Color_Impl__obj::set_R(Int this1,float f){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","set_R",0x72b949ca,"kha._Color.Color_Impl_.set_R","kha/Color.hx",167,0xcf6d63e6)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(f,"f")
HXLINE( 168)		Int _hx_tmp = ::Std_obj::_hx_int(((hx::UShr(this1,(int)24) * ((Float)0.00392156862745098)) * (int)255));
HXDLIN( 168)		Int _hx_tmp1 = ((int)_hx_tmp << (int)(int)24);
HXDLIN( 168)		Int _hx_tmp2 = ::Std_obj::_hx_int((f * (int)255));
HXDLIN( 168)		Int _hx_tmp3 = ((int)_hx_tmp1 | (int)((int)_hx_tmp2 << (int)(int)16));
HXDLIN( 168)		Int _hx_tmp4 = ::Std_obj::_hx_int(((hx::UShr(((int)this1 & (int)(int)65280),(int)8) * ((Float)0.00392156862745098)) * (int)255));
HXDLIN( 168)		Int _hx_tmp5 = ((int)_hx_tmp3 | (int)((int)_hx_tmp4 << (int)(int)8));
HXDLIN( 168)		Int _hx_tmp6 = ::Std_obj::_hx_int(((((int)this1 & (int)(int)255) * ((Float)0.00392156862745098)) * (int)255));
HXDLIN( 168)		this1 = ((int)_hx_tmp5 | (int)_hx_tmp6);
HXLINE( 169)		return f;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_R,return )

float Color_Impl__obj::set_G(Int this1,float f){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","set_G",0x72b949bf,"kha._Color.Color_Impl_.set_G","kha/Color.hx",172,0xcf6d63e6)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(f,"f")
HXLINE( 173)		Int _hx_tmp = ::Std_obj::_hx_int(((hx::UShr(this1,(int)24) * ((Float)0.00392156862745098)) * (int)255));
HXDLIN( 173)		Int _hx_tmp1 = ((int)_hx_tmp << (int)(int)24);
HXDLIN( 173)		Int _hx_tmp2 = ::Std_obj::_hx_int(((hx::UShr(((int)this1 & (int)(int)16711680),(int)16) * ((Float)0.00392156862745098)) * (int)255));
HXDLIN( 173)		Int _hx_tmp3 = ((int)_hx_tmp1 | (int)((int)_hx_tmp2 << (int)(int)16));
HXDLIN( 173)		Int _hx_tmp4 = ::Std_obj::_hx_int((f * (int)255));
HXDLIN( 173)		Int _hx_tmp5 = ((int)_hx_tmp3 | (int)((int)_hx_tmp4 << (int)(int)8));
HXDLIN( 173)		Int _hx_tmp6 = ::Std_obj::_hx_int(((((int)this1 & (int)(int)255) * ((Float)0.00392156862745098)) * (int)255));
HXDLIN( 173)		this1 = ((int)_hx_tmp5 | (int)_hx_tmp6);
HXLINE( 174)		return f;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_G,return )

float Color_Impl__obj::set_B(Int this1,float f){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","set_B",0x72b949ba,"kha._Color.Color_Impl_.set_B","kha/Color.hx",177,0xcf6d63e6)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(f,"f")
HXLINE( 178)		Int _hx_tmp = ::Std_obj::_hx_int(((hx::UShr(this1,(int)24) * ((Float)0.00392156862745098)) * (int)255));
HXDLIN( 178)		Int _hx_tmp1 = ((int)_hx_tmp << (int)(int)24);
HXDLIN( 178)		Int _hx_tmp2 = ::Std_obj::_hx_int(((hx::UShr(((int)this1 & (int)(int)16711680),(int)16) * ((Float)0.00392156862745098)) * (int)255));
HXDLIN( 178)		Int _hx_tmp3 = ((int)_hx_tmp1 | (int)((int)_hx_tmp2 << (int)(int)16));
HXDLIN( 178)		Int _hx_tmp4 = ::Std_obj::_hx_int(((hx::UShr(((int)this1 & (int)(int)65280),(int)8) * ((Float)0.00392156862745098)) * (int)255));
HXDLIN( 178)		Int _hx_tmp5 = ((int)_hx_tmp3 | (int)((int)_hx_tmp4 << (int)(int)8));
HXDLIN( 178)		Int _hx_tmp6 = ::Std_obj::_hx_int((f * (int)255));
HXDLIN( 178)		this1 = ((int)_hx_tmp5 | (int)_hx_tmp6);
HXLINE( 179)		return f;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_B,return )

float Color_Impl__obj::set_A(Int this1,float f){
            	HX_STACK_FRAME("kha._Color.Color_Impl_","set_A",0x72b949b9,"kha._Color.Color_Impl_.set_A","kha/Color.hx",182,0xcf6d63e6)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(f,"f")
HXLINE( 183)		Int _hx_tmp = ::Std_obj::_hx_int((f * (int)255));
HXDLIN( 183)		Int _hx_tmp1 = ((int)_hx_tmp << (int)(int)24);
HXDLIN( 183)		Int _hx_tmp2 = ::Std_obj::_hx_int(((hx::UShr(((int)this1 & (int)(int)16711680),(int)16) * ((Float)0.00392156862745098)) * (int)255));
HXDLIN( 183)		Int _hx_tmp3 = ((int)_hx_tmp1 | (int)((int)_hx_tmp2 << (int)(int)16));
HXDLIN( 183)		Int _hx_tmp4 = ::Std_obj::_hx_int(((hx::UShr(((int)this1 & (int)(int)65280),(int)8) * ((Float)0.00392156862745098)) * (int)255));
HXDLIN( 183)		Int _hx_tmp5 = ((int)_hx_tmp3 | (int)((int)_hx_tmp4 << (int)(int)8));
HXDLIN( 183)		Int _hx_tmp6 = ::Std_obj::_hx_int(((((int)this1 & (int)(int)255) * ((Float)0.00392156862745098)) * (int)255));
HXDLIN( 183)		this1 = ((int)_hx_tmp5 | (int)_hx_tmp6);
HXLINE( 184)		return f;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_A,return )


Color_Impl__obj::Color_Impl__obj()
{
}

bool Color_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_R") ) { outValue = get_R_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_G") ) { outValue = get_G_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_B") ) { outValue = get_B_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_A") ) { outValue = get_A_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_R") ) { outValue = set_R_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_G") ) { outValue = set_G_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_B") ) { outValue = set_B_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_A") ) { outValue = set_A_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_Rb") ) { outValue = get_Rb_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_Gb") ) { outValue = get_Gb_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_Bb") ) { outValue = get_Bb_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_Ab") ) { outValue = get_Ab_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_Rb") ) { outValue = set_Rb_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_Gb") ) { outValue = set_Gb_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_Bb") ) { outValue = set_Bb_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_Ab") ) { outValue = set_Ab_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromValue") ) { outValue = fromValue_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_value") ) { outValue = get_value_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_value") ) { outValue = set_value_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromFloats") ) { outValue = fromFloats_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Color_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo Color_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Color_Impl__obj::Black,HX_HCSTRING("Black","\x9f","\x45","\x1f","\x48")},
	{hx::fsInt,(void *) &Color_Impl__obj::White,HX_HCSTRING("White","\x89","\xba","\xea","\x5c")},
	{hx::fsInt,(void *) &Color_Impl__obj::Red,HX_HCSTRING("Red","\x31","\x91","\x3e","\x00")},
	{hx::fsInt,(void *) &Color_Impl__obj::Blue,HX_HCSTRING("Blue","\xba","\x6e","\xf2","\x2b")},
	{hx::fsInt,(void *) &Color_Impl__obj::Green,HX_HCSTRING("Green","\xa3","\x7e","\x1a","\x2d")},
	{hx::fsInt,(void *) &Color_Impl__obj::Magenta,HX_HCSTRING("Magenta","\x09","\xe2","\xee","\xdb")},
	{hx::fsInt,(void *) &Color_Impl__obj::Yellow,HX_HCSTRING("Yellow","\x94","\x13","\xf1","\x04")},
	{hx::fsInt,(void *) &Color_Impl__obj::Cyan,HX_HCSTRING("Cyan","\x43","\x71","\xa5","\x2c")},
	{hx::fsInt,(void *) &Color_Impl__obj::Purple,HX_HCSTRING("Purple","\x5c","\x6a","\x1e","\xa6")},
	{hx::fsInt,(void *) &Color_Impl__obj::Pink,HX_HCSTRING("Pink","\x96","\x1e","\x31","\x35")},
	{hx::fsInt,(void *) &Color_Impl__obj::Orange,HX_HCSTRING("Orange","\x0e","\x27","\x51","\x7a")},
	{hx::fsObject /*::cpp::Float32*/ ,(void *) &Color_Impl__obj::invMaxChannelValue,HX_HCSTRING("invMaxChannelValue","\x81","\x3a","\x08","\xe4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Color_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Color_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Black,"Black");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::White,"White");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Red,"Red");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Blue,"Blue");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Green,"Green");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Magenta,"Magenta");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Yellow,"Yellow");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Cyan,"Cyan");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Purple,"Purple");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Pink,"Pink");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Orange,"Orange");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::invMaxChannelValue,"invMaxChannelValue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Color_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Black,"Black");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::White,"White");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Red,"Red");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Blue,"Blue");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Green,"Green");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Magenta,"Magenta");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Yellow,"Yellow");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Cyan,"Cyan");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Purple,"Purple");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Pink,"Pink");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Orange,"Orange");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::invMaxChannelValue,"invMaxChannelValue");
};

#endif

hx::Class Color_Impl__obj::__mClass;

static ::String Color_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("Black","\x9f","\x45","\x1f","\x48"),
	HX_HCSTRING("White","\x89","\xba","\xea","\x5c"),
	HX_HCSTRING("Red","\x31","\x91","\x3e","\x00"),
	HX_HCSTRING("Blue","\xba","\x6e","\xf2","\x2b"),
	HX_HCSTRING("Green","\xa3","\x7e","\x1a","\x2d"),
	HX_HCSTRING("Magenta","\x09","\xe2","\xee","\xdb"),
	HX_HCSTRING("Yellow","\x94","\x13","\xf1","\x04"),
	HX_HCSTRING("Cyan","\x43","\x71","\xa5","\x2c"),
	HX_HCSTRING("Purple","\x5c","\x6a","\x1e","\xa6"),
	HX_HCSTRING("Pink","\x96","\x1e","\x31","\x35"),
	HX_HCSTRING("Orange","\x0e","\x27","\x51","\x7a"),
	HX_HCSTRING("invMaxChannelValue","\x81","\x3a","\x08","\xe4"),
	HX_HCSTRING("fromValue","\xa7","\x69","\x41","\xe6"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFloats","\x61","\x28","\x9a","\x84"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("get_Rb","\x19","\xdf","\x2f","\xa3"),
	HX_HCSTRING("get_Gb","\x84","\xd5","\x2f","\xa3"),
	HX_HCSTRING("get_Bb","\x29","\xd1","\x2f","\xa3"),
	HX_HCSTRING("get_Ab","\x4a","\xd0","\x2f","\xa3"),
	HX_HCSTRING("set_Rb","\x8d","\x33","\x78","\x6f"),
	HX_HCSTRING("set_Gb","\xf8","\x29","\x78","\x6f"),
	HX_HCSTRING("set_Bb","\x9d","\x25","\x78","\x6f"),
	HX_HCSTRING("set_Ab","\xbe","\x24","\x78","\x6f"),
	HX_HCSTRING("get_R","\x29","\xa5","\x60","\x91"),
	HX_HCSTRING("get_G","\x1e","\xa5","\x60","\x91"),
	HX_HCSTRING("get_B","\x19","\xa5","\x60","\x91"),
	HX_HCSTRING("get_A","\x18","\xa5","\x60","\x91"),
	HX_HCSTRING("set_R","\x35","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_G","\x2a","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_B","\x25","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_A","\x24","\x9b","\x2f","\x7a"),
	::String(null())
};

void Color_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha._Color.Color_Impl_","\x43","\x41","\x5a","\xbf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Color_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Color_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Color_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Color_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Color_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Color_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Color_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Color_Impl__obj::__boot()
{
{
            	HX_STACK_FRAME("kha._Color.Color_Impl_","boot",0x144d7f3d,"kha._Color.Color_Impl_.boot","kha/Color.hx",13,0xcf6d63e6)
HXLINE(  13)		Black = ::kha::_Color::Color_Impl__obj::_new((int)-16777216);
            	}
{
            	HX_STACK_FRAME("kha._Color.Color_Impl_","boot",0x144d7f3d,"kha._Color.Color_Impl_.boot","kha/Color.hx",14,0xcf6d63e6)
HXLINE(  14)		White = ::kha::_Color::Color_Impl__obj::_new((int)-1);
            	}
{
            	HX_STACK_FRAME("kha._Color.Color_Impl_","boot",0x144d7f3d,"kha._Color.Color_Impl_.boot","kha/Color.hx",15,0xcf6d63e6)
HXLINE(  15)		Red = ::kha::_Color::Color_Impl__obj::_new((int)-65536);
            	}
{
            	HX_STACK_FRAME("kha._Color.Color_Impl_","boot",0x144d7f3d,"kha._Color.Color_Impl_.boot","kha/Color.hx",16,0xcf6d63e6)
HXLINE(  16)		Blue = ::kha::_Color::Color_Impl__obj::_new((int)-16776961);
            	}
{
            	HX_STACK_FRAME("kha._Color.Color_Impl_","boot",0x144d7f3d,"kha._Color.Color_Impl_.boot","kha/Color.hx",17,0xcf6d63e6)
HXLINE(  17)		Green = ::kha::_Color::Color_Impl__obj::_new((int)-16711936);
            	}
{
            	HX_STACK_FRAME("kha._Color.Color_Impl_","boot",0x144d7f3d,"kha._Color.Color_Impl_.boot","kha/Color.hx",18,0xcf6d63e6)
HXLINE(  18)		Magenta = ::kha::_Color::Color_Impl__obj::_new((int)-65281);
            	}
{
            	HX_STACK_FRAME("kha._Color.Color_Impl_","boot",0x144d7f3d,"kha._Color.Color_Impl_.boot","kha/Color.hx",19,0xcf6d63e6)
HXLINE(  19)		Yellow = ::kha::_Color::Color_Impl__obj::_new((int)-256);
            	}
{
            	HX_STACK_FRAME("kha._Color.Color_Impl_","boot",0x144d7f3d,"kha._Color.Color_Impl_.boot","kha/Color.hx",20,0xcf6d63e6)
HXLINE(  20)		Cyan = ::kha::_Color::Color_Impl__obj::_new((int)-16711681);
            	}
{
            	HX_STACK_FRAME("kha._Color.Color_Impl_","boot",0x144d7f3d,"kha._Color.Color_Impl_.boot","kha/Color.hx",21,0xcf6d63e6)
HXLINE(  21)		Purple = ::kha::_Color::Color_Impl__obj::_new((int)-8388480);
            	}
{
            	HX_STACK_FRAME("kha._Color.Color_Impl_","boot",0x144d7f3d,"kha._Color.Color_Impl_.boot","kha/Color.hx",22,0xcf6d63e6)
HXLINE(  22)		Pink = ::kha::_Color::Color_Impl__obj::_new((int)-16181);
            	}
{
            	HX_STACK_FRAME("kha._Color.Color_Impl_","boot",0x144d7f3d,"kha._Color.Color_Impl_.boot","kha/Color.hx",23,0xcf6d63e6)
HXLINE(  23)		Orange = ::kha::_Color::Color_Impl__obj::_new((int)-23296);
            	}
{
            	HX_STACK_FRAME("kha._Color.Color_Impl_","boot",0x144d7f3d,"kha._Color.Color_Impl_.boot","kha/Color.hx",25,0xcf6d63e6)
HXLINE(  25)		invMaxChannelValue = ((Float)0.00392156862745098);
            	}
}

} // end namespace kha
} // end namespace _Color
