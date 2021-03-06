// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe__Unserializer_DefaultResolver
#include <haxe/_Unserializer/DefaultResolver.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

namespace haxe{

void Unserializer_obj::__construct(::String buf){
            	HX_STACK_FRAME("haxe.Unserializer","new",0xa8f5e205,"haxe.Unserializer.new","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/Unserializer.hx",102,0x3d700168)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buf,"buf")
HXLINE( 103)		this->buf = buf;
HXLINE( 104)		this->length = buf.length;
HXLINE( 105)		this->pos = (int)0;
HXLINE( 109)		this->scache = ::Array_obj< ::String >::__new();
HXLINE( 110)		this->cache = ::cpp::VirtualArray_obj::__new();
HXLINE( 111)		HX_VARI(  ::Dynamic,r) = ::haxe::Unserializer_obj::DEFAULT_RESOLVER;
HXLINE( 112)		Bool _hx_tmp = hx::IsNull( r );
HXDLIN( 112)		if (_hx_tmp) {
HXLINE( 113)			r =  ::haxe::_Unserializer::DefaultResolver_obj::__new();
HXLINE( 114)			::haxe::Unserializer_obj::DEFAULT_RESOLVER = r;
            		}
HXLINE( 116)		this->resolver = r;
            	}

Dynamic Unserializer_obj::__CreateEmpty() { return new Unserializer_obj; }

hx::ObjectPtr< Unserializer_obj > Unserializer_obj::__new(::String buf)
{
	hx::ObjectPtr< Unserializer_obj > _hx_result = new Unserializer_obj();
	_hx_result->__construct(buf);
	return _hx_result;
}

Dynamic Unserializer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Unserializer_obj > _hx_result = new Unserializer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

Int Unserializer_obj::readDigits(){
            	HX_STACK_FRAME("haxe.Unserializer","readDigits",0x75598b17,"haxe.Unserializer.readDigits","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/Unserializer.hx",147,0x3d700168)
            	HX_STACK_THIS(this)
HXLINE( 148)		HX_VARI( Int,k) = (int)0;
HXLINE( 149)		HX_VARI( Bool,s) = false;
HXLINE( 150)		HX_VARI( Int,fpos) = this->pos;
HXLINE( 151)		while(true){
HXLINE( 152)			Int p = this->pos;
HXDLIN( 152)			HX_VARI( Int,c) = this->buf.cca(p);
HXLINE( 153)			if ((c == (int)0)) {
HXLINE( 154)				goto _hx_goto_0;
            			}
HXLINE( 155)			if ((c == (int)45)) {
HXLINE( 156)				if ((this->pos != fpos)) {
HXLINE( 157)					goto _hx_goto_0;
            				}
HXLINE( 158)				s = true;
HXLINE( 159)				this->pos++;
HXLINE( 160)				continue;
            			}
HXLINE( 162)			Bool _hx_tmp;
HXDLIN( 162)			if ((c >= (int)48)) {
HXLINE( 162)				_hx_tmp = (c > (int)57);
            			}
            			else {
HXLINE( 162)				_hx_tmp = true;
            			}
HXDLIN( 162)			if (_hx_tmp) {
HXLINE( 163)				goto _hx_goto_0;
            			}
HXLINE( 164)			Int _hx_tmp1 = (k * (int)10);
HXDLIN( 164)			k = (_hx_tmp1 + (c - (int)48));
HXLINE( 165)			this->pos++;
            		}
            		_hx_goto_0:;
HXLINE( 167)		if (s) {
HXLINE( 168)			hx::MultEq(k,(int)-1);
            		}
HXLINE( 169)		return k;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Unserializer_obj,readDigits,return )

Float Unserializer_obj::readFloat(){
            	HX_STACK_FRAME("haxe.Unserializer","readFloat",0x5bd86dcb,"haxe.Unserializer.readFloat","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/Unserializer.hx",172,0x3d700168)
            	HX_STACK_THIS(this)
HXLINE( 173)		HX_VARI( Int,p1) = this->pos;
HXLINE( 174)		while(true){
HXLINE( 175)			Int p = this->pos;
HXDLIN( 175)			HX_VARI( Int,c) = this->buf.cca(p);
HXLINE( 176)			if ((c == (int)0)) {
HXLINE( 176)				goto _hx_goto_1;
            			}
HXLINE( 178)			Bool _hx_tmp;
HXDLIN( 178)			Bool _hx_tmp1;
HXDLIN( 178)			Bool _hx_tmp2;
HXDLIN( 178)			if ((c >= (int)43)) {
HXLINE( 178)				_hx_tmp2 = (c < (int)58);
            			}
            			else {
HXLINE( 178)				_hx_tmp2 = false;
            			}
HXDLIN( 178)			if (!(_hx_tmp2)) {
HXLINE( 178)				_hx_tmp1 = (c == (int)101);
            			}
            			else {
HXLINE( 178)				_hx_tmp1 = true;
            			}
HXDLIN( 178)			if (!(_hx_tmp1)) {
HXLINE( 178)				_hx_tmp = (c == (int)69);
            			}
            			else {
HXLINE( 178)				_hx_tmp = true;
            			}
HXDLIN( 178)			if (_hx_tmp) {
HXLINE( 179)				this->pos++;
            			}
            			else {
HXLINE( 181)				goto _hx_goto_1;
            			}
            		}
            		_hx_goto_1:;
HXLINE( 183)		Int _hx_tmp3 = (this->pos - p1);
HXDLIN( 183)		::String _hx_tmp4 = this->buf.substr(p1,_hx_tmp3);
HXDLIN( 183)		return ::Std_obj::parseFloat(_hx_tmp4);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Unserializer_obj,readFloat,return )

void Unserializer_obj::unserializeObject( ::Dynamic o){
            	HX_STACK_FRAME("haxe.Unserializer","unserializeObject",0x1b3e66eb,"haxe.Unserializer.unserializeObject","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/Unserializer.hx",186,0x3d700168)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(o,"o")
HXLINE( 187)		while(true){
HXLINE( 188)			if ((this->pos >= this->length)) {
HXLINE( 189)				HX_STACK_DO_THROW(HX_("Invalid object",e8,6c,b7,e2));
            			}
HXLINE( 190)			Int p = this->pos;
HXDLIN( 190)			Int _hx_tmp = this->buf.cca(p);
HXDLIN( 190)			if ((_hx_tmp == (int)103)) {
HXLINE( 191)				goto _hx_goto_2;
            			}
HXLINE( 192)			HX_VARI( ::String,k) = ( (::String)(this->unserialize()) );
HXLINE( 193)			Bool _hx_tmp1 = !(::Std_obj::is(k,hx::ClassOf< ::String >()));
HXDLIN( 193)			if (_hx_tmp1) {
HXLINE( 194)				HX_STACK_DO_THROW(HX_("Invalid object key",67,5e,4c,fb));
            			}
HXLINE( 195)			HX_VARI(  ::Dynamic,v) = this->unserialize();
HXLINE( 196)			::Reflect_obj::setField(o,k,v);
            		}
            		_hx_goto_2:;
HXLINE( 198)		this->pos++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Unserializer_obj,unserializeObject,(void))

 ::Dynamic Unserializer_obj::unserializeEnum(hx::Class edecl,::String tag){
            	HX_STACK_FRAME("haxe.Unserializer","unserializeEnum",0x5018b02d,"haxe.Unserializer.unserializeEnum","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/Unserializer.hx",201,0x3d700168)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(edecl,"edecl")
            	HX_STACK_ARG(tag,"tag")
HXLINE( 202)		Int p = this->pos++;
HXDLIN( 202)		Int _hx_tmp = this->buf.cca(p);
HXDLIN( 202)		if ((_hx_tmp != (int)58)) {
HXLINE( 203)			HX_STACK_DO_THROW(HX_("Invalid enum format",ad,eb,77,c2));
            		}
HXLINE( 204)		HX_VARI( Int,nargs) = this->readDigits();
HXLINE( 205)		if ((nargs == (int)0)) {
HXLINE( 206)			return ::Type_obj::createEnum(edecl,tag,null());
            		}
HXLINE( 207)		HX_VARI( ::cpp::VirtualArray,args) = ::cpp::VirtualArray_obj::__new();
HXLINE( 208)		while(true){
HXLINE( 208)			Int _hx_tmp1 = nargs--;
HXDLIN( 208)			if (!((_hx_tmp1 > (int)0))) {
HXLINE( 208)				goto _hx_goto_3;
            			}
HXLINE( 209)			 ::Dynamic _hx_tmp2 = this->unserialize();
HXDLIN( 209)			args->push(_hx_tmp2);
            		}
            		_hx_goto_3:;
HXLINE( 210)		return ::Type_obj::createEnum(edecl,tag,args);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Unserializer_obj,unserializeEnum,return )

 ::Dynamic Unserializer_obj::unserialize(){
            	HX_STACK_FRAME("haxe.Unserializer","unserialize",0x92cca30c,"haxe.Unserializer.unserialize","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/Unserializer.hx",233,0x3d700168)
            	HX_STACK_THIS(this)
HXLINE( 234)		{
HXLINE( 234)			Int p = this->pos++;
HXDLIN( 234)			HX_VARI( Int,_g) = this->buf.cca(p);
HXDLIN( 234)			switch((int)(_g)){
            				case (int)65: {
HXLINE( 436)					HX_VARI( ::String,name) = ( (::String)(this->unserialize()) );
HXLINE( 437)					HX_VARI( hx::Class,cl) =  ::Dynamic(this->resolver->__Field(HX_("resolveClass",ac,bd,dd,80),hx::paccDynamic))(name);
HXLINE( 438)					Bool _hx_tmp = hx::IsNull( cl );
HXDLIN( 438)					if (_hx_tmp) {
HXLINE( 439)						HX_STACK_DO_THROW((HX_("Class not found ",13,56,74,ed) + name));
            					}
HXLINE( 440)					return cl;
            				}
            				break;
            				case (int)66: {
HXLINE( 442)					HX_VARI_NAME( ::String,name1,"name") = ( (::String)(this->unserialize()) );
HXLINE( 443)					HX_VARI( hx::Class,e) =  ::Dynamic(this->resolver->__Field(HX_("resolveEnum",0d,90,51,de),hx::paccDynamic))(name1);
HXLINE( 444)					Bool _hx_tmp1 = hx::IsNull( e );
HXDLIN( 444)					if (_hx_tmp1) {
HXLINE( 445)						HX_STACK_DO_THROW((HX_("Enum not found ",aa,e1,55,fd) + name1));
            					}
HXLINE( 446)					return e;
            				}
            				break;
            				case (int)67: {
HXLINE( 425)					HX_VARI_NAME( ::String,name2,"name") = ( (::String)(this->unserialize()) );
HXLINE( 426)					HX_VARI_NAME( hx::Class,cl1,"cl") =  ::Dynamic(this->resolver->__Field(HX_("resolveClass",ac,bd,dd,80),hx::paccDynamic))(name2);
HXLINE( 427)					Bool _hx_tmp2 = hx::IsNull( cl1 );
HXDLIN( 427)					if (_hx_tmp2) {
HXLINE( 428)						HX_STACK_DO_THROW((HX_("Class not found ",13,56,74,ed) + name2));
            					}
HXLINE( 429)					HX_VARI(  ::Dynamic,o) = ::Type_obj::createEmptyInstance(cl1);
HXLINE( 430)					this->cache->push(o);
HXLINE( 431)					 ::Dynamic(o->__Field(HX_("hxUnserialize",37,db,b9,86),hx::paccDynamic))(hx::ObjectPtr<OBJ_>(this));
HXLINE( 432)					Int p1 = this->pos++;
HXDLIN( 432)					Int _hx_tmp3 = this->buf.cca(p1);
HXDLIN( 432)					if ((_hx_tmp3 != (int)103)) {
HXLINE( 433)						HX_STACK_DO_THROW(HX_("Invalid custom data",30,fa,ef,08));
            					}
HXLINE( 434)					return o;
            				}
            				break;
            				case (int)77: {
HXLINE( 359)					HX_VARI(  ::haxe::ds::ObjectMap,h) =  ::haxe::ds::ObjectMap_obj::__new();
HXLINE( 360)					this->cache->push(h);
HXLINE( 362)					while(true){
HXLINE( 362)						Int p2 = this->pos;
HXDLIN( 362)						Int _hx_tmp4 = this->buf.cca(p2);
HXDLIN( 362)						if (!((_hx_tmp4 != (int)104))) {
HXLINE( 362)							goto _hx_goto_4;
            						}
HXLINE( 363)						HX_VARI(  ::Dynamic,s) = this->unserialize();
HXLINE( 364)						 ::Dynamic _hx_tmp5 = this->unserialize();
HXDLIN( 364)						h->set(s,_hx_tmp5);
            					}
            					_hx_goto_4:;
HXLINE( 366)					this->pos++;
HXLINE( 367)					return h;
            				}
            				break;
            				case (int)82: {
HXLINE( 291)					HX_VARI( Int,n) = this->readDigits();
HXLINE( 292)					Bool _hx_tmp6;
HXDLIN( 292)					if ((n >= (int)0)) {
HXLINE( 292)						_hx_tmp6 = (n >= this->scache->length);
            					}
            					else {
HXLINE( 292)						_hx_tmp6 = true;
            					}
HXDLIN( 292)					if (_hx_tmp6) {
HXLINE( 293)						HX_STACK_DO_THROW(HX_("Invalid string reference",25,57,28,1b));
            					}
HXLINE( 294)					return this->scache->__get(n);
            				}
            				break;
            				case (int)97: {
HXLINE( 264)					HX_VARI( ::cpp::VirtualArray,a) = ::cpp::VirtualArray_obj::__new();
HXLINE( 265)					this->cache->push(a);
HXLINE( 266)					while(true){
HXLINE( 267)						Int p3 = this->pos;
HXDLIN( 267)						HX_VARI( Int,c) = this->buf.cca(p3);
HXLINE( 268)						if ((c == (int)104)) {
HXLINE( 269)							this->pos++;
HXLINE( 270)							goto _hx_goto_5;
            						}
HXLINE( 272)						if ((c == (int)117)) {
HXLINE( 273)							this->pos++;
HXLINE( 274)							HX_VARI_NAME( Int,n1,"n") = this->readDigits();
HXLINE( 275)							Int _hx_tmp7 = ((a->get_length() + n1) - (int)1);
HXDLIN( 275)							a->set(_hx_tmp7,null());
            						}
            						else {
HXLINE( 277)							 ::Dynamic _hx_tmp8 = this->unserialize();
HXDLIN( 277)							a->push(_hx_tmp8);
            						}
            					}
            					_hx_goto_5:;
HXLINE( 279)					return a;
            				}
            				break;
            				case (int)98: {
HXLINE( 336)					HX_VARI_NAME(  ::haxe::ds::StringMap,h1,"h") =  ::haxe::ds::StringMap_obj::__new();
HXLINE( 337)					this->cache->push(h1);
HXLINE( 339)					while(true){
HXLINE( 339)						Int p4 = this->pos;
HXDLIN( 339)						Int _hx_tmp9 = this->buf.cca(p4);
HXDLIN( 339)						if (!((_hx_tmp9 != (int)104))) {
HXLINE( 339)							goto _hx_goto_6;
            						}
HXLINE( 340)						HX_VARI_NAME( ::String,s1,"s") = ( (::String)(this->unserialize()) );
HXLINE( 341)						 ::Dynamic _hx_tmp10 = this->unserialize();
HXDLIN( 341)						h1->set(s1,_hx_tmp10);
            					}
            					_hx_goto_6:;
HXLINE( 343)					this->pos++;
HXLINE( 344)					return h1;
            				}
            				break;
            				case (int)99: {
HXLINE( 298)					HX_VARI_NAME( ::String,name3,"name") = ( (::String)(this->unserialize()) );
HXLINE( 299)					HX_VARI_NAME( hx::Class,cl2,"cl") =  ::Dynamic(this->resolver->__Field(HX_("resolveClass",ac,bd,dd,80),hx::paccDynamic))(name3);
HXLINE( 300)					Bool _hx_tmp11 = hx::IsNull( cl2 );
HXDLIN( 300)					if (_hx_tmp11) {
HXLINE( 301)						HX_STACK_DO_THROW((HX_("Class not found ",13,56,74,ed) + name3));
            					}
HXLINE( 302)					HX_VARI_NAME(  ::Dynamic,o1,"o") = ::Type_obj::createEmptyInstance(cl2);
HXLINE( 303)					this->cache->push(o1);
HXLINE( 304)					this->unserializeObject(o1);
HXLINE( 305)					return o1;
            				}
            				break;
            				case (int)100: {
HXLINE( 246)					return this->readFloat();
            				}
            				break;
            				case (int)102: {
HXLINE( 240)					return false;
            				}
            				break;
            				case (int)105: {
HXLINE( 244)					return this->readDigits();
            				}
            				break;
            				case (int)106: {
HXLINE( 315)					HX_VARI_NAME( ::String,name4,"name") = ( (::String)(this->unserialize()) );
HXLINE( 316)					HX_VARI( hx::Class,edecl) =  ::Dynamic(this->resolver->__Field(HX_("resolveEnum",0d,90,51,de),hx::paccDynamic))(name4);
HXLINE( 317)					Bool _hx_tmp12 = hx::IsNull( edecl );
HXDLIN( 317)					if (_hx_tmp12) {
HXLINE( 318)						HX_STACK_DO_THROW((HX_("Enum not found ",aa,e1,55,fd) + name4));
            					}
HXLINE( 319)					this->pos++;
HXLINE( 320)					HX_VARI( Int,index) = this->readDigits();
HXLINE( 321)					::Array< ::String > _hx_tmp13 = ::Type_obj::getEnumConstructs(edecl);
HXDLIN( 321)					HX_VARI( ::String,tag) = _hx_tmp13->__get(index);
HXLINE( 322)					Bool _hx_tmp14 = hx::IsNull( tag );
HXDLIN( 322)					if (_hx_tmp14) {
HXLINE( 323)						HX_STACK_DO_THROW((((HX_("Unknown enum index ",57,ca,63,30) + name4) + HX_("@",40,00,00,00)) + index));
            					}
HXLINE( 324)					HX_VARI_NAME(  ::Dynamic,e1,"e") = this->unserializeEnum(edecl,tag);
HXLINE( 325)					this->cache->push(e1);
HXLINE( 326)					return e1;
            				}
            				break;
            				case (int)107: {
HXLINE( 257)					return ::Math_obj::NaN;
            				}
            				break;
            				case (int)108: {
HXLINE( 328)					HX_VARI(  ::List,l) =  ::List_obj::__new();
HXLINE( 329)					this->cache->push(l);
HXLINE( 331)					while(true){
HXLINE( 331)						Int p5 = this->pos;
HXDLIN( 331)						Int _hx_tmp15 = this->buf.cca(p5);
HXDLIN( 331)						if (!((_hx_tmp15 != (int)104))) {
HXLINE( 331)							goto _hx_goto_7;
            						}
HXLINE( 332)						 ::Dynamic _hx_tmp16 = this->unserialize();
HXDLIN( 332)						l->add(_hx_tmp16);
            					}
            					_hx_goto_7:;
HXLINE( 333)					this->pos++;
HXLINE( 334)					return l;
            				}
            				break;
            				case (int)109: {
HXLINE( 259)					return ::Math_obj::NEGATIVE_INFINITY;
            				}
            				break;
            				case (int)110: {
HXLINE( 236)					return null();
            				}
            				break;
            				case (int)111: {
HXLINE( 281)					HX_VARI_NAME(  ::Dynamic,o2,"o") =  ::Dynamic(hx::Anon_obj::Create(0));
HXLINE( 282)					this->cache->push(o2);
HXLINE( 283)					this->unserializeObject(o2);
HXLINE( 284)					return o2;
            				}
            				break;
            				case (int)112: {
HXLINE( 261)					return ::Math_obj::POSITIVE_INFINITY;
            				}
            				break;
            				case (int)113: {
HXLINE( 346)					HX_VARI_NAME(  ::haxe::ds::IntMap,h2,"h") =  ::haxe::ds::IntMap_obj::__new();
HXLINE( 347)					this->cache->push(h2);
HXLINE( 349)					Int p6 = this->pos++;
HXDLIN( 349)					HX_VARI_NAME( Int,c1,"c") = this->buf.cca(p6);
HXLINE( 350)					while((c1 == (int)58)){
HXLINE( 351)						HX_VARI( Int,i) = this->readDigits();
HXLINE( 352)						 ::Dynamic _hx_tmp17 = this->unserialize();
HXDLIN( 352)						h2->set(i,_hx_tmp17);
HXLINE( 353)						Int p7 = this->pos++;
HXDLIN( 353)						c1 = this->buf.cca(p7);
            					}
HXLINE( 355)					if ((c1 != (int)104)) {
HXLINE( 356)						HX_STACK_DO_THROW(HX_("Invalid IntMap format",e1,c2,b1,71));
            					}
HXLINE( 357)					return h2;
            				}
            				break;
            				case (int)114: {
HXLINE( 286)					HX_VARI_NAME( Int,n2,"n") = this->readDigits();
HXLINE( 287)					Bool _hx_tmp18;
HXDLIN( 287)					if ((n2 >= (int)0)) {
HXLINE( 287)						_hx_tmp18 = (n2 >= this->cache->get_length());
            					}
            					else {
HXLINE( 287)						_hx_tmp18 = true;
            					}
HXDLIN( 287)					if (_hx_tmp18) {
HXLINE( 288)						HX_STACK_DO_THROW(HX_("Invalid reference",42,99,8f,7d));
            					}
HXLINE( 289)					return this->cache->__get(n2);
            				}
            				break;
            				case (int)115: {
HXLINE( 384)					HX_VARI( Int,len) = this->readDigits();
HXLINE( 385)					HX_VARI( ::String,buf) = this->buf;
HXLINE( 386)					Bool _hx_tmp19;
HXDLIN( 386)					Int p8 = this->pos++;
HXDLIN( 386)					Int _hx_tmp20 = this->buf.cca(p8);
HXDLIN( 386)					if ((_hx_tmp20 == (int)58)) {
HXLINE( 386)						_hx_tmp19 = ((this->length - this->pos) < len);
            					}
            					else {
HXLINE( 386)						_hx_tmp19 = true;
            					}
HXDLIN( 386)					if (_hx_tmp19) {
HXLINE( 387)						HX_STACK_DO_THROW(HX_("Invalid bytes length",e4,8a,d3,50));
            					}
HXLINE( 391)					HX_VARI( ::Array< Int >,codes) = ::haxe::Unserializer_obj::CODES;
HXLINE( 392)					Bool _hx_tmp21 = hx::IsNull( codes );
HXDLIN( 392)					if (_hx_tmp21) {
HXLINE( 393)						codes = ::haxe::Unserializer_obj::initCodes();
HXLINE( 394)						::haxe::Unserializer_obj::CODES = codes;
            					}
HXLINE( 396)					HX_VARI_NAME( Int,i1,"i") = this->pos;
HXLINE( 397)					HX_VARI( Int,rest) = ((int)len & (int)(int)3);
HXLINE( 398)					Int _hx_tmp22 = (((int)len >> (int)(int)2) * (int)3);
HXDLIN( 398)					Int _hx_tmp23;
HXDLIN( 398)					if ((rest >= (int)2)) {
HXLINE( 398)						_hx_tmp23 = (rest - (int)1);
            					}
            					else {
HXLINE( 398)						_hx_tmp23 = (int)0;
            					}
HXDLIN( 398)					HX_VARI( Int,size) = (_hx_tmp22 + _hx_tmp23);
HXLINE( 399)					HX_VARI( Int,max) = (i1 + (len - rest));
HXLINE( 400)					HX_VARI(  ::haxe::io::Bytes,bytes) = ::haxe::io::Bytes_obj::alloc(size);
HXLINE( 401)					HX_VARI( Int,bpos) = (int)0;
HXLINE( 402)					while((i1 < max)){
HXLINE( 403)						Int index1 = i1++;
HXDLIN( 403)						Int _hx_tmp24 = buf.cca(index1);
HXDLIN( 403)						HX_VARI_NAME( Int,c11,"c1") = codes->__get(_hx_tmp24);
HXLINE( 404)						Int index2 = i1++;
HXDLIN( 404)						Int _hx_tmp25 = buf.cca(index2);
HXDLIN( 404)						HX_VARI( Int,c2) = codes->__get(_hx_tmp25);
HXLINE( 405)						{
HXLINE( 405)							Int pos = bpos++;
HXDLIN( 405)							bytes->b[pos] = ((int)((int)c11 << (int)(int)2) | (int)((int)c2 >> (int)(int)4));
            						}
HXLINE( 406)						Int index3 = i1++;
HXDLIN( 406)						Int _hx_tmp26 = buf.cca(index3);
HXDLIN( 406)						HX_VARI( Int,c3) = codes->__get(_hx_tmp26);
HXLINE( 407)						{
HXLINE( 407)							Int pos1 = bpos++;
HXDLIN( 407)							bytes->b[pos1] = ((int)((int)c2 << (int)(int)4) | (int)((int)c3 >> (int)(int)2));
            						}
HXLINE( 408)						Int index4 = i1++;
HXDLIN( 408)						Int _hx_tmp27 = buf.cca(index4);
HXDLIN( 408)						HX_VARI( Int,c4) = codes->__get(_hx_tmp27);
HXLINE( 409)						{
HXLINE( 409)							Int pos2 = bpos++;
HXDLIN( 409)							bytes->b[pos2] = ((int)((int)c3 << (int)(int)6) | (int)c4);
            						}
            					}
HXLINE( 411)					if ((rest >= (int)2)) {
HXLINE( 412)						Int index5 = i1++;
HXDLIN( 412)						Int _hx_tmp28 = buf.cca(index5);
HXDLIN( 412)						HX_VARI_NAME( Int,c12,"c1") = codes->__get(_hx_tmp28);
HXLINE( 413)						Int index6 = i1++;
HXDLIN( 413)						Int _hx_tmp29 = buf.cca(index6);
HXDLIN( 413)						HX_VARI_NAME( Int,c21,"c2") = codes->__get(_hx_tmp29);
HXLINE( 414)						{
HXLINE( 414)							Int pos3 = bpos++;
HXDLIN( 414)							bytes->b[pos3] = ((int)((int)c12 << (int)(int)2) | (int)((int)c21 >> (int)(int)4));
            						}
HXLINE( 415)						if ((rest == (int)3)) {
HXLINE( 416)							Int index7 = i1++;
HXDLIN( 416)							Int _hx_tmp30 = buf.cca(index7);
HXDLIN( 416)							HX_VARI_NAME( Int,c31,"c3") = codes->__get(_hx_tmp30);
HXLINE( 417)							{
HXLINE( 417)								Int pos4 = bpos++;
HXDLIN( 417)								bytes->b[pos4] = ((int)((int)c21 << (int)(int)4) | (int)((int)c31 >> (int)(int)2));
            							}
            						}
            					}
HXLINE( 421)					hx::AddEq(this->pos,len);
HXLINE( 422)					this->cache->push(bytes);
HXLINE( 423)					return bytes;
            				}
            				break;
            				case (int)116: {
HXLINE( 238)					return true;
            				}
            				break;
            				case (int)118: {
HXLINE( 369)					HX_VAR(  ::Date,d);
HXLINE( 370)					Bool _hx_tmp31;
HXDLIN( 370)					Bool _hx_tmp32;
HXDLIN( 370)					Bool _hx_tmp33;
HXDLIN( 370)					Bool _hx_tmp34;
HXDLIN( 370)					Bool _hx_tmp35;
HXDLIN( 370)					Bool _hx_tmp36;
HXDLIN( 370)					Bool _hx_tmp37;
HXDLIN( 370)					Bool _hx_tmp38;
HXDLIN( 370)					Int p9 = this->pos;
HXDLIN( 370)					Int _hx_tmp39 = this->buf.cca(p9);
HXDLIN( 370)					if ((_hx_tmp39 >= (int)48)) {
HXLINE( 370)						Int p10 = this->pos;
HXDLIN( 370)						Int _hx_tmp40 = this->buf.cca(p10);
HXDLIN( 370)						_hx_tmp38 = (_hx_tmp40 <= (int)57);
            					}
            					else {
HXLINE( 370)						_hx_tmp38 = false;
            					}
HXDLIN( 370)					if (_hx_tmp38) {
HXLINE( 371)						Int p11 = (this->pos + (int)1);
HXDLIN( 371)						Int _hx_tmp41 = this->buf.cca(p11);
HXLINE( 370)						_hx_tmp37 = (_hx_tmp41 >= (int)48);
            					}
            					else {
HXLINE( 370)						_hx_tmp37 = false;
            					}
HXDLIN( 370)					if (_hx_tmp37) {
HXLINE( 371)						Int p12 = (this->pos + (int)1);
HXDLIN( 371)						Int _hx_tmp42 = this->buf.cca(p12);
HXLINE( 370)						_hx_tmp36 = (_hx_tmp42 <= (int)57);
            					}
            					else {
HXLINE( 370)						_hx_tmp36 = false;
            					}
HXDLIN( 370)					if (_hx_tmp36) {
HXLINE( 372)						Int p13 = (this->pos + (int)2);
HXDLIN( 372)						Int _hx_tmp43 = this->buf.cca(p13);
HXLINE( 370)						_hx_tmp35 = (_hx_tmp43 >= (int)48);
            					}
            					else {
HXLINE( 370)						_hx_tmp35 = false;
            					}
HXDLIN( 370)					if (_hx_tmp35) {
HXLINE( 372)						Int p14 = (this->pos + (int)2);
HXDLIN( 372)						Int _hx_tmp44 = this->buf.cca(p14);
HXLINE( 370)						_hx_tmp34 = (_hx_tmp44 <= (int)57);
            					}
            					else {
HXLINE( 370)						_hx_tmp34 = false;
            					}
HXDLIN( 370)					if (_hx_tmp34) {
HXLINE( 373)						Int p15 = (this->pos + (int)3);
HXDLIN( 373)						Int _hx_tmp45 = this->buf.cca(p15);
HXLINE( 370)						_hx_tmp33 = (_hx_tmp45 >= (int)48);
            					}
            					else {
HXLINE( 370)						_hx_tmp33 = false;
            					}
HXDLIN( 370)					if (_hx_tmp33) {
HXLINE( 373)						Int p16 = (this->pos + (int)3);
HXDLIN( 373)						Int _hx_tmp46 = this->buf.cca(p16);
HXLINE( 370)						_hx_tmp32 = (_hx_tmp46 <= (int)57);
            					}
            					else {
HXLINE( 370)						_hx_tmp32 = false;
            					}
HXDLIN( 370)					if (_hx_tmp32) {
HXLINE( 374)						Int p17 = (this->pos + (int)4);
HXDLIN( 374)						Int _hx_tmp47 = this->buf.cca(p17);
HXLINE( 370)						_hx_tmp31 = (_hx_tmp47 == (int)45);
            					}
            					else {
HXLINE( 370)						_hx_tmp31 = false;
            					}
HXDLIN( 370)					if (_hx_tmp31) {
HXLINE( 377)						::String _hx_tmp48 = this->buf.substr(this->pos,(int)19);
HXDLIN( 377)						d = ::Date_obj::fromString(_hx_tmp48);
HXLINE( 378)						hx::AddEq(this->pos,(int)19);
            					}
            					else {
HXLINE( 380)						Float _hx_tmp49 = this->readFloat();
HXDLIN( 380)						d = ::Date_obj::fromTime(_hx_tmp49);
            					}
HXLINE( 381)					this->cache->push(d);
HXLINE( 382)					return d;
            				}
            				break;
            				case (int)119: {
HXLINE( 307)					HX_VARI_NAME( ::String,name5,"name") = ( (::String)(this->unserialize()) );
HXLINE( 308)					HX_VARI_NAME( hx::Class,edecl1,"edecl") =  ::Dynamic(this->resolver->__Field(HX_("resolveEnum",0d,90,51,de),hx::paccDynamic))(name5);
HXLINE( 309)					Bool _hx_tmp50 = hx::IsNull( edecl1 );
HXDLIN( 309)					if (_hx_tmp50) {
HXLINE( 310)						HX_STACK_DO_THROW((HX_("Enum not found ",aa,e1,55,fd) + name5));
            					}
HXLINE( 311)					 ::Dynamic _hx_tmp51 = this->unserialize();
HXDLIN( 311)					HX_VARI_NAME(  ::Dynamic,e2,"e") = this->unserializeEnum(edecl1,_hx_tmp51);
HXLINE( 312)					this->cache->push(e2);
HXLINE( 313)					return e2;
            				}
            				break;
            				case (int)120: {
HXLINE( 296)					HX_STACK_DO_THROW(this->unserialize());
            				}
            				break;
            				case (int)121: {
HXLINE( 248)					HX_VARI_NAME( Int,len1,"len") = this->readDigits();
HXLINE( 249)					Bool _hx_tmp52;
HXDLIN( 249)					Int p18 = this->pos++;
HXDLIN( 249)					Int _hx_tmp53 = this->buf.cca(p18);
HXDLIN( 249)					if ((_hx_tmp53 == (int)58)) {
HXLINE( 249)						_hx_tmp52 = ((this->length - this->pos) < len1);
            					}
            					else {
HXLINE( 249)						_hx_tmp52 = true;
            					}
HXDLIN( 249)					if (_hx_tmp52) {
HXLINE( 250)						HX_STACK_DO_THROW(HX_("Invalid string length",4c,89,20,c9));
            					}
HXLINE( 251)					HX_VARI_NAME( ::String,s2,"s") = this->buf.substr(this->pos,len1);
HXLINE( 252)					hx::AddEq(this->pos,len1);
HXLINE( 253)					s2 = ::StringTools_obj::urlDecode(s2);
HXLINE( 254)					this->scache->push(s2);
HXLINE( 255)					return s2;
            				}
            				break;
            				case (int)122: {
HXLINE( 242)					return (int)0;
            				}
            				break;
            				default:{
            				}
            			}
            		}
HXLINE( 449)		this->pos--;
HXLINE( 450)		::String _hx_tmp54 = this->buf.charAt(this->pos);
HXDLIN( 450)		HX_STACK_DO_THROW((((HX_("Invalid char ",81,66,ec,29) + _hx_tmp54) + HX_(" at position ",0a,c2,01,e0)) + this->pos));
HXDLIN( 450)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Unserializer_obj,unserialize,return )

 ::Dynamic Unserializer_obj::DEFAULT_RESOLVER;

::String Unserializer_obj::BASE64;

::Array< Int > Unserializer_obj::CODES;

::Array< Int > Unserializer_obj::initCodes(){
            	HX_STACK_FRAME("haxe.Unserializer","initCodes",0xee42ccdb,"haxe.Unserializer.initCodes","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/Unserializer.hx",70,0x3d700168)
HXLINE(  71)		HX_VARI( ::Array< Int >,codes) = ::Array_obj< Int >::__new();
HXLINE(  77)		{
HXLINE(  77)			HX_VARI( Int,_g1) = (int)0;
HXDLIN(  77)			HX_VARI( Int,_g) = ::haxe::Unserializer_obj::BASE64.length;
HXDLIN(  77)			while((_g1 < _g)){
HXLINE(  77)				HX_VARI( Int,i) = _g1++;
HXLINE(  78)				Int _hx_tmp = ::haxe::Unserializer_obj::BASE64.cca(i);
HXDLIN(  78)				codes[_hx_tmp] = i;
            			}
            		}
HXLINE(  79)		return codes;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Unserializer_obj,initCodes,return )

 ::Dynamic Unserializer_obj::run(::String v){
            	HX_STACK_FRAME("haxe.Unserializer","run",0xa8f8f8f0,"haxe.Unserializer.run","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/Unserializer.hx",461,0x3d700168)
            	HX_STACK_ARG(v,"v")
HXLINE( 461)		return  ::haxe::Unserializer_obj::__new(v)->unserialize();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unserializer_obj,run,return )


Unserializer_obj::Unserializer_obj()
{
}

void Unserializer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Unserializer);
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_MEMBER_NAME(scache,"scache");
	HX_MARK_MEMBER_NAME(resolver,"resolver");
	HX_MARK_END_CLASS();
}

void Unserializer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buf,"buf");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(cache,"cache");
	HX_VISIT_MEMBER_NAME(scache,"scache");
	HX_VISIT_MEMBER_NAME(resolver,"resolver");
}

hx::Val Unserializer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { return hx::Val( buf); }
		if (HX_FIELD_EQ(inName,"pos") ) { return hx::Val( pos); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return hx::Val( cache); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return hx::Val( length); }
		if (HX_FIELD_EQ(inName,"scache") ) { return hx::Val( scache); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"resolver") ) { return hx::Val( resolver); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readFloat") ) { return hx::Val( readFloat_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readDigits") ) { return hx::Val( readDigits_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"unserialize") ) { return hx::Val( unserialize_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unserializeEnum") ) { return hx::Val( unserializeEnum_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unserializeObject") ) { return hx::Val( unserializeObject_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool Unserializer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CODES") ) { outValue = CODES; return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BASE64") ) { outValue = BASE64; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initCodes") ) { outValue = initCodes_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEFAULT_RESOLVER") ) { outValue = DEFAULT_RESOLVER; return true; }
	}
	return false;
}

hx::Val Unserializer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< Int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scache") ) { scache=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"resolver") ) { resolver=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Unserializer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CODES") ) { CODES=ioValue.Cast< ::Array< Int > >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BASE64") ) { BASE64=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEFAULT_RESOLVER") ) { DEFAULT_RESOLVER=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void Unserializer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"));
	outFields->push(HX_HCSTRING("scache","\xef","\x18","\x1f","\x3c"));
	outFields->push(HX_HCSTRING("resolver","\x06","\x7c","\xb0","\x0c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Unserializer_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Unserializer_obj,buf),HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00")},
	{hx::fsInt,(int)offsetof(Unserializer_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsInt,(int)offsetof(Unserializer_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Unserializer_obj,cache),HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Unserializer_obj,scache),HX_HCSTRING("scache","\xef","\x18","\x1f","\x3c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Unserializer_obj,resolver),HX_HCSTRING("resolver","\x06","\x7c","\xb0","\x0c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Unserializer_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Unserializer_obj::DEFAULT_RESOLVER,HX_HCSTRING("DEFAULT_RESOLVER","\xa4","\x3a","\xb4","\xde")},
	{hx::fsString,(void *) &Unserializer_obj::BASE64,HX_HCSTRING("BASE64","\x8f","\xc5","\xaa","\x07")},
	{hx::fsObject /*Array< int >*/ ,(void *) &Unserializer_obj::CODES,HX_HCSTRING("CODES","\x86","\x8e","\x44","\xc8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Unserializer_obj_sMemberFields[] = {
	HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("scache","\xef","\x18","\x1f","\x3c"),
	HX_HCSTRING("resolver","\x06","\x7c","\xb0","\x0c"),
	HX_HCSTRING("readDigits","\x1c","\xee","\xa3","\xae"),
	HX_HCSTRING("readFloat","\x66","\x12","\x7e","\xd3"),
	HX_HCSTRING("unserializeObject","\x86","\x9e","\x52","\x9f"),
	HX_HCSTRING("unserializeEnum","\x08","\x3b","\x10","\x7f"),
	HX_HCSTRING("unserialize","\x67","\xe4","\x98","\x7a"),
	::String(null()) };

static void Unserializer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Unserializer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Unserializer_obj::DEFAULT_RESOLVER,"DEFAULT_RESOLVER");
	HX_MARK_MEMBER_NAME(Unserializer_obj::BASE64,"BASE64");
	HX_MARK_MEMBER_NAME(Unserializer_obj::CODES,"CODES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Unserializer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Unserializer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Unserializer_obj::DEFAULT_RESOLVER,"DEFAULT_RESOLVER");
	HX_VISIT_MEMBER_NAME(Unserializer_obj::BASE64,"BASE64");
	HX_VISIT_MEMBER_NAME(Unserializer_obj::CODES,"CODES");
};

#endif

hx::Class Unserializer_obj::__mClass;

static ::String Unserializer_obj_sStaticFields[] = {
	HX_HCSTRING("DEFAULT_RESOLVER","\xa4","\x3a","\xb4","\xde"),
	HX_HCSTRING("BASE64","\x8f","\xc5","\xaa","\x07"),
	HX_HCSTRING("CODES","\x86","\x8e","\x44","\xc8"),
	HX_HCSTRING("initCodes","\x76","\x71","\xe8","\x65"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null())
};

void Unserializer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Unserializer","\x93","\x7b","\x79","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Unserializer_obj::__GetStatic;
	__mClass->mSetStaticField = &Unserializer_obj::__SetStatic;
	__mClass->mMarkFunc = Unserializer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Unserializer_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Unserializer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Unserializer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Unserializer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Unserializer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Unserializer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Unserializer_obj::__boot()
{
{
            	HX_STACK_FRAME("haxe.Unserializer","boot",0x2648e2ed,"haxe.Unserializer.boot","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/Unserializer.hx",63,0x3d700168)
HXLINE(  63)		DEFAULT_RESOLVER =  ::haxe::_Unserializer::DefaultResolver_obj::__new();
            	}
{
            	HX_STACK_FRAME("haxe.Unserializer","boot",0x2648e2ed,"haxe.Unserializer.boot","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/Unserializer.hx",65,0x3d700168)
HXLINE(  65)		BASE64 = HX_("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789%:",d4,3b,03,7f);
            	}
{
            	HX_STACK_FRAME("haxe.Unserializer","boot",0x2648e2ed,"haxe.Unserializer.boot","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/haxe/Unserializer.hx",68,0x3d700168)
HXLINE(  68)		CODES = null();
            	}
}

} // end namespace haxe
