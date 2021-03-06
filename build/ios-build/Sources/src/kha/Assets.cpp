// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_kha_Assets
#include <kha/Assets.h>
#endif
#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_BlobList
#include <kha/BlobList.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Font
#include <kha/Font.h>
#endif
#ifndef INCLUDED_kha_FontList
#include <kha/FontList.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_ImageList
#include <kha/ImageList.h>
#endif
#ifndef INCLUDED_kha_LoaderImpl
#include <kha/LoaderImpl.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Sound
#include <kha/Sound.h>
#endif
#ifndef INCLUDED_kha_SoundList
#include <kha/SoundList.h>
#endif
#ifndef INCLUDED_kha_Video
#include <kha/Video.h>
#endif
#ifndef INCLUDED_kha_VideoList
#include <kha/VideoList.h>
#endif

static const ::String _hx_array_data_10[] = {
	HX_("ttf",e6,6a,58,00),
};
namespace kha{

void Assets_obj::__construct() { }

Dynamic Assets_obj::__CreateEmpty() { return new Assets_obj; }

hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{
	hx::ObjectPtr< Assets_obj > _hx_result = new Assets_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Assets_obj > _hx_result = new Assets_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::kha::ImageList Assets_obj::images;

 ::kha::SoundList Assets_obj::sounds;

 ::kha::BlobList Assets_obj::blobs;

 ::kha::FontList Assets_obj::fonts;

 ::kha::VideoList Assets_obj::videos;

Float Assets_obj::progress;

void Assets_obj::loadEverything( ::Dynamic callback){
            	HX_STACK_FRAME("kha.Assets","loadEverything",0x85f39fda,"kha.Assets.loadEverything","kha/Assets.hx",58,0x66f27110)
            	HX_STACK_ARG(callback,"callback")
HXLINE(  59)		HX_VARI( Int,fileCount) = (int)0;
HXLINE(  60)		{
HXLINE(  60)			HX_VARI( Int,_g) = (int)0;
HXDLIN(  60)			HX_VARI( ::Array< ::String >,_g1) = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::BlobList >());
HXDLIN(  60)			while((_g < _g1->length)){
HXLINE(  60)				HX_VARI( ::String,blob) = _g1->__get(_g);
HXDLIN(  60)				++_g;
HXLINE(  61)				Bool _hx_tmp = ::StringTools_obj::endsWith(blob,HX_("Load",46,c6,90,32));
HXDLIN(  61)				if (_hx_tmp) {
HXLINE(  62)					++fileCount;
            				}
            			}
            		}
HXLINE(  65)		{
HXLINE(  65)			HX_VARI_NAME( Int,_g2,"_g") = (int)0;
HXDLIN(  65)			HX_VARI_NAME( ::Array< ::String >,_g11,"_g1") = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::ImageList >());
HXDLIN(  65)			while((_g2 < _g11->length)){
HXLINE(  65)				HX_VARI( ::String,image) = _g11->__get(_g2);
HXDLIN(  65)				++_g2;
HXLINE(  66)				Bool _hx_tmp1 = ::StringTools_obj::endsWith(image,HX_("Load",46,c6,90,32));
HXDLIN(  66)				if (_hx_tmp1) {
HXLINE(  67)					++fileCount;
            				}
            			}
            		}
HXLINE(  70)		{
HXLINE(  70)			HX_VARI_NAME( Int,_g3,"_g") = (int)0;
HXDLIN(  70)			HX_VARI_NAME( ::Array< ::String >,_g12,"_g1") = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::SoundList >());
HXDLIN(  70)			while((_g3 < _g12->length)){
HXLINE(  70)				HX_VARI( ::String,sound) = _g12->__get(_g3);
HXDLIN(  70)				++_g3;
HXLINE(  71)				Bool _hx_tmp2 = ::StringTools_obj::endsWith(sound,HX_("Load",46,c6,90,32));
HXDLIN(  71)				if (_hx_tmp2) {
HXLINE(  72)					++fileCount;
            				}
            			}
            		}
HXLINE(  75)		{
HXLINE(  75)			HX_VARI_NAME( Int,_g4,"_g") = (int)0;
HXDLIN(  75)			HX_VARI_NAME( ::Array< ::String >,_g13,"_g1") = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::FontList >());
HXDLIN(  75)			while((_g4 < _g13->length)){
HXLINE(  75)				HX_VARI( ::String,font) = _g13->__get(_g4);
HXDLIN(  75)				++_g4;
HXLINE(  76)				Bool _hx_tmp3 = ::StringTools_obj::endsWith(font,HX_("Load",46,c6,90,32));
HXDLIN(  76)				if (_hx_tmp3) {
HXLINE(  77)					++fileCount;
            				}
            			}
            		}
HXLINE(  80)		{
HXLINE(  80)			HX_VARI_NAME( Int,_g5,"_g") = (int)0;
HXDLIN(  80)			HX_VARI_NAME( ::Array< ::String >,_g14,"_g1") = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::VideoList >());
HXDLIN(  80)			while((_g5 < _g14->length)){
HXLINE(  80)				HX_VARI( ::String,video) = _g14->__get(_g5);
HXDLIN(  80)				++_g5;
HXLINE(  81)				Bool _hx_tmp4 = ::StringTools_obj::endsWith(video,HX_("Load",46,c6,90,32));
HXDLIN(  81)				if (_hx_tmp4) {
HXLINE(  82)					++fileCount;
            				}
            			}
            		}
HXLINE(  86)		if ((fileCount == (int)0)) {
HXLINE(  87)			callback();
HXLINE(  88)			return;
            		}
HXLINE(  91)		HX_VARI( ::Array< Int >,filesLeft) = ::Array_obj< Int >::__new(1)->init(0,fileCount);
HXLINE(  93)		{
HXLINE(  93)			HX_VARI_NAME( Int,_g6,"_g") = (int)0;
HXDLIN(  93)			HX_VARI_NAME( ::Array< ::String >,_g15,"_g1") = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::BlobList >());
HXDLIN(  93)			while((_g6 < _g15->length)){
HXLINE(  93)				HX_VARI_NAME( ::String,blob1,"blob") = _g15->__get(_g6);
HXDLIN(  93)				++_g6;
HXLINE(  94)				Bool _hx_tmp5 = ::StringTools_obj::endsWith(blob1,HX_("Load",46,c6,90,32));
HXDLIN(  94)				if (_hx_tmp5) {
            					HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_0,Int,fileCount,::Array< Int >,filesLeft, ::Dynamic,callback) HXARGC(0)
            					void _hx_run(){
            						HX_STACK_FRAME("kha.Assets","loadEverything",0x85f39fda,"kha.Assets.loadEverything","kha/Assets.hx",95,0x66f27110)
HXLINE(  96)						--filesLeft[(int)0];
HXLINE(  97)						Float _hx_tmp7 = ((Float)filesLeft->__get((int)0) / (Float)fileCount);
HXDLIN(  97)						::kha::Assets_obj::progress = ((int)1 - _hx_tmp7);
HXLINE(  98)						Bool _hx_tmp8 = (filesLeft->__get((int)0) == (int)0);
HXDLIN(  98)						if (_hx_tmp8) {
HXLINE(  98)							callback();
            						}
            					}
            					HX_END_LOCAL_FUNC0((void))

HXLINE(  95)					 ::Dynamic _hx_tmp6 = ::Reflect_obj::field(::kha::Assets_obj::blobs,blob1);
HXDLIN(  95)					_hx_tmp6( ::Dynamic(new _hx_Closure_0(fileCount,filesLeft,callback)));
            				}
            			}
            		}
HXLINE( 102)		{
HXLINE( 102)			HX_VARI_NAME( Int,_g7,"_g") = (int)0;
HXDLIN( 102)			HX_VARI_NAME( ::Array< ::String >,_g16,"_g1") = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::ImageList >());
HXDLIN( 102)			while((_g7 < _g16->length)){
HXLINE( 102)				HX_VARI_NAME( ::String,image1,"image") = _g16->__get(_g7);
HXDLIN( 102)				++_g7;
HXLINE( 103)				Bool _hx_tmp9 = ::StringTools_obj::endsWith(image1,HX_("Load",46,c6,90,32));
HXDLIN( 103)				if (_hx_tmp9) {
            					HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_1,Int,fileCount,::Array< Int >,filesLeft, ::Dynamic,callback) HXARGC(0)
            					void _hx_run(){
            						HX_STACK_FRAME("kha.Assets","loadEverything",0x85f39fda,"kha.Assets.loadEverything","kha/Assets.hx",104,0x66f27110)
HXLINE( 105)						--filesLeft[(int)0];
HXLINE( 106)						Float _hx_tmp11 = ((Float)filesLeft->__get((int)0) / (Float)fileCount);
HXDLIN( 106)						::kha::Assets_obj::progress = ((int)1 - _hx_tmp11);
HXLINE( 107)						Bool _hx_tmp12 = (filesLeft->__get((int)0) == (int)0);
HXDLIN( 107)						if (_hx_tmp12) {
HXLINE( 107)							callback();
            						}
            					}
            					HX_END_LOCAL_FUNC0((void))

HXLINE( 104)					 ::Dynamic _hx_tmp10 = ::Reflect_obj::field(::kha::Assets_obj::images,image1);
HXDLIN( 104)					_hx_tmp10( ::Dynamic(new _hx_Closure_1(fileCount,filesLeft,callback)));
            				}
            			}
            		}
HXLINE( 111)		{
HXLINE( 111)			HX_VARI_NAME( Int,_g8,"_g") = (int)0;
HXDLIN( 111)			HX_VARI_NAME( ::Array< ::String >,_g17,"_g1") = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::SoundList >());
HXDLIN( 111)			while((_g8 < _g17->length)){
HXLINE( 111)				HX_VARI_NAME( ::String,sound1,"sound") = _g17->__get(_g8);
HXDLIN( 111)				++_g8;
HXLINE( 112)				Bool _hx_tmp13 = ::StringTools_obj::endsWith(sound1,HX_("Load",46,c6,90,32));
HXDLIN( 112)				if (_hx_tmp13) {
            					HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_hx_Closure_3,Int,fileCount,::String,sound1,::Array< Int >,filesLeft, ::Dynamic,callback) HXARGC(0)
            					void _hx_run(){
            						HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_2,Int,fileCount,::Array< Int >,filesLeft, ::Dynamic,callback) HXARGC(0)
            						void _hx_run(){
            							HX_STACK_FRAME("kha.Assets","loadEverything",0x85f39fda,"kha.Assets.loadEverything","kha/Assets.hx",115,0x66f27110)
HXLINE( 116)							--filesLeft[(int)0];
HXLINE( 117)							Float _hx_tmp17 = ((Float)filesLeft->__get((int)0) / (Float)fileCount);
HXDLIN( 117)							::kha::Assets_obj::progress = ((int)1 - _hx_tmp17);
HXLINE( 118)							Bool _hx_tmp18 = (filesLeft->__get((int)0) == (int)0);
HXDLIN( 118)							if (_hx_tmp18) {
HXLINE( 118)								callback();
            							}
            						}
            						HX_END_LOCAL_FUNC0((void))

            						HX_STACK_FRAME("kha.Assets","loadEverything",0x85f39fda,"kha.Assets.loadEverything","kha/Assets.hx",113,0x66f27110)
HXLINE( 114)						Int _hx_tmp15 = (sound1.length - (int)4);
HXDLIN( 114)						::String _hx_tmp16 = sound1.substring((int)0,_hx_tmp15);
HXDLIN( 114)						HX_VARI_NAME(  ::kha::Sound,sound2,"sound") = ( ( ::kha::Sound)(::Reflect_obj::field(::kha::Assets_obj::sounds,_hx_tmp16)) );
HXLINE( 115)						sound2->uncompress( ::Dynamic(new _hx_Closure_2(fileCount,filesLeft,callback)));
            					}
            					HX_END_LOCAL_FUNC0((void))

HXLINE( 113)					 ::Dynamic _hx_tmp14 = ::Reflect_obj::field(::kha::Assets_obj::sounds,sound1);
HXDLIN( 113)					_hx_tmp14( ::Dynamic(new _hx_Closure_3(fileCount,sound1,filesLeft,callback)));
            				}
            			}
            		}
HXLINE( 123)		{
HXLINE( 123)			HX_VARI_NAME( Int,_g9,"_g") = (int)0;
HXDLIN( 123)			HX_VARI_NAME( ::Array< ::String >,_g18,"_g1") = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::FontList >());
HXDLIN( 123)			while((_g9 < _g18->length)){
HXLINE( 123)				HX_VARI_NAME( ::String,font1,"font") = _g18->__get(_g9);
HXDLIN( 123)				++_g9;
HXLINE( 124)				Bool _hx_tmp19 = ::StringTools_obj::endsWith(font1,HX_("Load",46,c6,90,32));
HXDLIN( 124)				if (_hx_tmp19) {
            					HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_4,Int,fileCount,::Array< Int >,filesLeft, ::Dynamic,callback) HXARGC(0)
            					void _hx_run(){
            						HX_STACK_FRAME("kha.Assets","loadEverything",0x85f39fda,"kha.Assets.loadEverything","kha/Assets.hx",125,0x66f27110)
HXLINE( 126)						--filesLeft[(int)0];
HXLINE( 127)						Float _hx_tmp21 = ((Float)filesLeft->__get((int)0) / (Float)fileCount);
HXDLIN( 127)						::kha::Assets_obj::progress = ((int)1 - _hx_tmp21);
HXLINE( 128)						Bool _hx_tmp22 = (filesLeft->__get((int)0) == (int)0);
HXDLIN( 128)						if (_hx_tmp22) {
HXLINE( 128)							callback();
            						}
            					}
            					HX_END_LOCAL_FUNC0((void))

HXLINE( 125)					 ::Dynamic _hx_tmp20 = ::Reflect_obj::field(::kha::Assets_obj::fonts,font1);
HXDLIN( 125)					_hx_tmp20( ::Dynamic(new _hx_Closure_4(fileCount,filesLeft,callback)));
            				}
            			}
            		}
HXLINE( 132)		{
HXLINE( 132)			HX_VARI_NAME( Int,_g10,"_g") = (int)0;
HXDLIN( 132)			HX_VARI_NAME( ::Array< ::String >,_g19,"_g1") = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::VideoList >());
HXDLIN( 132)			while((_g10 < _g19->length)){
HXLINE( 132)				HX_VARI_NAME( ::String,video1,"video") = _g19->__get(_g10);
HXDLIN( 132)				++_g10;
HXLINE( 133)				Bool _hx_tmp23 = ::StringTools_obj::endsWith(video1,HX_("Load",46,c6,90,32));
HXDLIN( 133)				if (_hx_tmp23) {
            					HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_5,Int,fileCount,::Array< Int >,filesLeft, ::Dynamic,callback) HXARGC(0)
            					void _hx_run(){
            						HX_STACK_FRAME("kha.Assets","loadEverything",0x85f39fda,"kha.Assets.loadEverything","kha/Assets.hx",134,0x66f27110)
HXLINE( 135)						--filesLeft[(int)0];
HXLINE( 136)						Float _hx_tmp25 = ((Float)filesLeft->__get((int)0) / (Float)fileCount);
HXDLIN( 136)						::kha::Assets_obj::progress = ((int)1 - _hx_tmp25);
HXLINE( 137)						Bool _hx_tmp26 = (filesLeft->__get((int)0) == (int)0);
HXDLIN( 137)						if (_hx_tmp26) {
HXLINE( 137)							callback();
            						}
            					}
            					HX_END_LOCAL_FUNC0((void))

HXLINE( 134)					 ::Dynamic _hx_tmp24 = ::Reflect_obj::field(::kha::Assets_obj::videos,video1);
HXDLIN( 134)					_hx_tmp24( ::Dynamic(new _hx_Closure_5(fileCount,filesLeft,callback)));
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadEverything,(void))

void Assets_obj::loadImage(::String name, ::Dynamic done){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0,::String,name, ::Dynamic,done) HXARGC(1)
            		void _hx_run( ::kha::Image image){
            			HX_STACK_FRAME("kha.Assets","loadImage",0xe6c94354,"kha.Assets.loadImage","kha/Assets.hx",151,0x66f27110)
            			HX_STACK_ARG(image,"image")
HXLINE( 152)			::Reflect_obj::setField(::kha::Assets_obj::images,name,image);
HXLINE( 153)			done(image);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACK_FRAME("kha.Assets","loadImage",0xe6c94354,"kha.Assets.loadImage","kha/Assets.hx",149,0x66f27110)
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(done,"done")
HXLINE( 150)		HX_VARI(  ::Dynamic,description) = ::Reflect_obj::field(::kha::Assets_obj::images,(name + HX_("Description",dc,a0,4f,43)));
HXLINE( 151)		::kha::LoaderImpl_obj::loadImageFromDescription(description, ::Dynamic(new _hx_Closure_0(name,done)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadImage,(void))

void Assets_obj::loadImageFromPath(::String path,Bool readable, ::Dynamic done){
            	HX_STACK_FRAME("kha.Assets","loadImageFromPath",0x3f4a27a3,"kha.Assets.loadImageFromPath","kha/Assets.hx",166,0x66f27110)
            	HX_STACK_ARG(path,"path")
            	HX_STACK_ARG(readable,"readable")
            	HX_STACK_ARG(done,"done")
HXLINE( 166)		::kha::LoaderImpl_obj::loadImageFromDescription( ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("files",77,de,98,00),::Array_obj< ::String >::__new(1)->init(0,path))
            			->setFixed(1,HX_("readable",f0,1b,87,7d),readable)),done);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadImageFromPath,(void))

::Array< ::String > Assets_obj::imageFormats;

::Array< ::String > Assets_obj::get_imageFormats(){
            	HX_STACK_FRAME("kha.Assets","get_imageFormats",0xb185ddab,"kha.Assets.get_imageFormats","kha/Assets.hx",172,0x66f27110)
HXLINE( 172)		return ::kha::LoaderImpl_obj::getImageFormats();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_imageFormats,return )

void Assets_obj::loadBlob(::String name, ::Dynamic done){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0,::String,name, ::Dynamic,done) HXARGC(1)
            		void _hx_run( ::kha::Blob blob){
            			HX_STACK_FRAME("kha.Assets","loadBlob",0xeb2f7b84,"kha.Assets.loadBlob","kha/Assets.hx",177,0x66f27110)
            			HX_STACK_ARG(blob,"blob")
HXLINE( 178)			::Reflect_obj::setField(::kha::Assets_obj::blobs,name,blob);
HXLINE( 179)			done(blob);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACK_FRAME("kha.Assets","loadBlob",0xeb2f7b84,"kha.Assets.loadBlob","kha/Assets.hx",175,0x66f27110)
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(done,"done")
HXLINE( 176)		HX_VARI(  ::Dynamic,description) = ::Reflect_obj::field(::kha::Assets_obj::blobs,(name + HX_("Description",dc,a0,4f,43)));
HXLINE( 177)		::kha::LoaderImpl_obj::loadBlobFromDescription(description, ::Dynamic(new _hx_Closure_0(name,done)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadBlob,(void))

void Assets_obj::loadBlobFromPath(::String path, ::Dynamic done){
            	HX_STACK_FRAME("kha.Assets","loadBlobFromPath",0x75ec0fd3,"kha.Assets.loadBlobFromPath","kha/Assets.hx",185,0x66f27110)
            	HX_STACK_ARG(path,"path")
            	HX_STACK_ARG(done,"done")
HXLINE( 185)		::kha::LoaderImpl_obj::loadBlobFromDescription( ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("files",77,de,98,00),::Array_obj< ::String >::__new(1)->init(0,path))),done);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadBlobFromPath,(void))

void Assets_obj::loadSound(::String name, ::Dynamic done){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0,::String,name, ::Dynamic,done) HXARGC(1)
            		void _hx_run( ::kha::Sound sound){
            			HX_STACK_FRAME("kha.Assets","loadSound",0xaa2cb0c8,"kha.Assets.loadSound","kha/Assets.hx",190,0x66f27110)
            			HX_STACK_ARG(sound,"sound")
HXLINE( 191)			::Reflect_obj::setField(::kha::Assets_obj::sounds,name,sound);
HXLINE( 192)			done(sound);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACK_FRAME("kha.Assets","loadSound",0xaa2cb0c8,"kha.Assets.loadSound","kha/Assets.hx",188,0x66f27110)
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(done,"done")
HXLINE( 189)		HX_VARI(  ::Dynamic,description) = ::Reflect_obj::field(::kha::Assets_obj::sounds,(name + HX_("Description",dc,a0,4f,43)));
HXLINE( 190)		::kha::LoaderImpl_obj::loadSoundFromDescription(description, ::Dynamic(new _hx_Closure_0(name,done)));
HXDLIN( 190)		return;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadSound,(void))

void Assets_obj::loadSoundFromPath(::String path, ::Dynamic done){
            	HX_STACK_FRAME("kha.Assets","loadSoundFromPath",0xfcc62917,"kha.Assets.loadSoundFromPath","kha/Assets.hx",196,0x66f27110)
            	HX_STACK_ARG(path,"path")
            	HX_STACK_ARG(done,"done")
HXLINE( 198)		::kha::LoaderImpl_obj::loadSoundFromDescription( ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("files",77,de,98,00),::Array_obj< ::String >::__new(1)->init(0,path))),done);
HXDLIN( 198)		return;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadSoundFromPath,(void))

::Array< ::String > Assets_obj::soundFormats;

::Array< ::String > Assets_obj::get_soundFormats(){
            	HX_STACK_FRAME("kha.Assets","get_soundFormats",0xd5f5c6b7,"kha.Assets.get_soundFormats","kha/Assets.hx",204,0x66f27110)
HXLINE( 204)		return ::kha::LoaderImpl_obj::getSoundFormats();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_soundFormats,return )

void Assets_obj::loadFont(::String name, ::Dynamic done){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0,::String,name, ::Dynamic,done) HXARGC(1)
            		void _hx_run(::Dynamic font){
            			HX_STACK_FRAME("kha.Assets","loadFont",0xedd69bf6,"kha.Assets.loadFont","kha/Assets.hx",209,0x66f27110)
            			HX_STACK_ARG(font,"font")
HXLINE( 210)			::Reflect_obj::setField(::kha::Assets_obj::fonts,name,font);
HXLINE( 211)			done(font);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACK_FRAME("kha.Assets","loadFont",0xedd69bf6,"kha.Assets.loadFont","kha/Assets.hx",207,0x66f27110)
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(done,"done")
HXLINE( 208)		HX_VARI(  ::Dynamic,description) = ::Reflect_obj::field(::kha::Assets_obj::fonts,(name + HX_("Description",dc,a0,4f,43)));
HXLINE( 209)		::kha::LoaderImpl_obj::loadFontFromDescription(description, ::Dynamic(new _hx_Closure_0(name,done)));
HXDLIN( 209)		return;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadFont,(void))

void Assets_obj::loadFontFromPath(::String path, ::Dynamic done){
            	HX_STACK_FRAME("kha.Assets","loadFontFromPath",0x1433f245,"kha.Assets.loadFontFromPath","kha/Assets.hx",215,0x66f27110)
            	HX_STACK_ARG(path,"path")
            	HX_STACK_ARG(done,"done")
HXLINE( 217)		::kha::LoaderImpl_obj::loadFontFromDescription( ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("files",77,de,98,00),::Array_obj< ::String >::__new(1)->init(0,path))),done);
HXDLIN( 217)		return;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadFontFromPath,(void))

::Array< ::String > Assets_obj::fontFormats;

::Array< ::String > Assets_obj::get_fontFormats(){
            	HX_STACK_FRAME("kha.Assets","get_fontFormats",0xc3a68c23,"kha.Assets.get_fontFormats","kha/Assets.hx",223,0x66f27110)
HXLINE( 223)		return ::Array_obj< ::String >::fromData( _hx_array_data_10,1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_fontFormats,return )

void Assets_obj::loadVideo(::String name, ::Dynamic done){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0,::String,name, ::Dynamic,done) HXARGC(1)
            		void _hx_run( ::kha::Video video){
            			HX_STACK_FRAME("kha.Assets","loadVideo",0x605c3874,"kha.Assets.loadVideo","kha/Assets.hx",228,0x66f27110)
            			HX_STACK_ARG(video,"video")
HXLINE( 229)			::Reflect_obj::setField(::kha::Assets_obj::videos,name,video);
HXLINE( 230)			done(video);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACK_FRAME("kha.Assets","loadVideo",0x605c3874,"kha.Assets.loadVideo","kha/Assets.hx",226,0x66f27110)
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(done,"done")
HXLINE( 227)		HX_VARI(  ::Dynamic,description) = ::Reflect_obj::field(::kha::Assets_obj::videos,(name + HX_("Description",dc,a0,4f,43)));
HXLINE( 228)		::kha::LoaderImpl_obj::loadVideoFromDescription(description, ::Dynamic(new _hx_Closure_0(name,done)));
HXDLIN( 228)		return;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadVideo,(void))

void Assets_obj::loadVideoFromPath(::String path, ::Dynamic done){
            	HX_STACK_FRAME("kha.Assets","loadVideoFromPath",0x02873cc3,"kha.Assets.loadVideoFromPath","kha/Assets.hx",234,0x66f27110)
            	HX_STACK_ARG(path,"path")
            	HX_STACK_ARG(done,"done")
HXLINE( 236)		::kha::LoaderImpl_obj::loadVideoFromDescription( ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("files",77,de,98,00),::Array_obj< ::String >::__new(1)->init(0,path))),done);
HXDLIN( 236)		return;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadVideoFromPath,(void))

::Array< ::String > Assets_obj::videoFormats;

::Array< ::String > Assets_obj::get_videoFormats(){
            	HX_STACK_FRAME("kha.Assets","get_videoFormats",0xdbb9cc8b,"kha.Assets.get_videoFormats","kha/Assets.hx",242,0x66f27110)
HXLINE( 242)		return ::kha::LoaderImpl_obj::getVideoFormats();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_videoFormats,return )


Assets_obj::Assets_obj()
{
}

bool Assets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"blobs") ) { outValue = blobs; return true; }
		if (HX_FIELD_EQ(inName,"fonts") ) { outValue = fonts; return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"images") ) { outValue = images; return true; }
		if (HX_FIELD_EQ(inName,"sounds") ) { outValue = sounds; return true; }
		if (HX_FIELD_EQ(inName,"videos") ) { outValue = videos; return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { outValue = progress; return true; }
		if (HX_FIELD_EQ(inName,"loadBlob") ) { outValue = loadBlob_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadFont") ) { outValue = loadFont_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadImage") ) { outValue = loadImage_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadSound") ) { outValue = loadSound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadVideo") ) { outValue = loadVideo_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fontFormats") ) { outValue = inCallProp == hx::paccAlways ? get_fontFormats() : fontFormats; return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"imageFormats") ) { outValue = inCallProp == hx::paccAlways ? get_imageFormats() : imageFormats; return true; }
		if (HX_FIELD_EQ(inName,"soundFormats") ) { outValue = inCallProp == hx::paccAlways ? get_soundFormats() : soundFormats; return true; }
		if (HX_FIELD_EQ(inName,"videoFormats") ) { outValue = inCallProp == hx::paccAlways ? get_videoFormats() : videoFormats; return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadEverything") ) { outValue = loadEverything_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_fontFormats") ) { outValue = get_fontFormats_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_imageFormats") ) { outValue = get_imageFormats_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadBlobFromPath") ) { outValue = loadBlobFromPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_soundFormats") ) { outValue = get_soundFormats_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadFontFromPath") ) { outValue = loadFontFromPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_videoFormats") ) { outValue = get_videoFormats_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"loadImageFromPath") ) { outValue = loadImageFromPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadSoundFromPath") ) { outValue = loadSoundFromPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadVideoFromPath") ) { outValue = loadVideoFromPath_dyn(); return true; }
	}
	return false;
}

bool Assets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"blobs") ) { blobs=ioValue.Cast<  ::kha::BlobList >(); return true; }
		if (HX_FIELD_EQ(inName,"fonts") ) { fonts=ioValue.Cast<  ::kha::FontList >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"images") ) { images=ioValue.Cast<  ::kha::ImageList >(); return true; }
		if (HX_FIELD_EQ(inName,"sounds") ) { sounds=ioValue.Cast<  ::kha::SoundList >(); return true; }
		if (HX_FIELD_EQ(inName,"videos") ) { videos=ioValue.Cast<  ::kha::VideoList >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { progress=ioValue.Cast< Float >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fontFormats") ) { fontFormats=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"imageFormats") ) { imageFormats=ioValue.Cast< ::Array< ::String > >(); return true; }
		if (HX_FIELD_EQ(inName,"soundFormats") ) { soundFormats=ioValue.Cast< ::Array< ::String > >(); return true; }
		if (HX_FIELD_EQ(inName,"videoFormats") ) { videoFormats=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Assets_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Assets_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::ImageList*/ ,(void *) &Assets_obj::images,HX_HCSTRING("images","\xb8","\x50","\x92","\xfe")},
	{hx::fsObject /*::kha::SoundList*/ ,(void *) &Assets_obj::sounds,HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32")},
	{hx::fsObject /*::kha::BlobList*/ ,(void *) &Assets_obj::blobs,HX_HCSTRING("blobs","\x76","\x74","\xfc","\xb4")},
	{hx::fsObject /*::kha::FontList*/ ,(void *) &Assets_obj::fonts,HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04")},
	{hx::fsObject /*::kha::VideoList*/ ,(void *) &Assets_obj::videos,HX_HCSTRING("videos","\x98","\xd7","\x95","\xe5")},
	{hx::fsFloat,(void *) &Assets_obj::progress,HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Assets_obj::imageFormats,HX_HCSTRING("imageFormats","\x41","\x3b","\xf7","\xce")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Assets_obj::soundFormats,HX_HCSTRING("soundFormats","\x4d","\x24","\x67","\xf3")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Assets_obj::fontFormats,HX_HCSTRING("fontFormats","\x4d","\x73","\xff","\xf3")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Assets_obj::videoFormats,HX_HCSTRING("videoFormats","\x21","\x2a","\x2b","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Assets_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::images,"images");
	HX_MARK_MEMBER_NAME(Assets_obj::sounds,"sounds");
	HX_MARK_MEMBER_NAME(Assets_obj::blobs,"blobs");
	HX_MARK_MEMBER_NAME(Assets_obj::fonts,"fonts");
	HX_MARK_MEMBER_NAME(Assets_obj::videos,"videos");
	HX_MARK_MEMBER_NAME(Assets_obj::progress,"progress");
	HX_MARK_MEMBER_NAME(Assets_obj::imageFormats,"imageFormats");
	HX_MARK_MEMBER_NAME(Assets_obj::soundFormats,"soundFormats");
	HX_MARK_MEMBER_NAME(Assets_obj::fontFormats,"fontFormats");
	HX_MARK_MEMBER_NAME(Assets_obj::videoFormats,"videoFormats");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Assets_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::images,"images");
	HX_VISIT_MEMBER_NAME(Assets_obj::sounds,"sounds");
	HX_VISIT_MEMBER_NAME(Assets_obj::blobs,"blobs");
	HX_VISIT_MEMBER_NAME(Assets_obj::fonts,"fonts");
	HX_VISIT_MEMBER_NAME(Assets_obj::videos,"videos");
	HX_VISIT_MEMBER_NAME(Assets_obj::progress,"progress");
	HX_VISIT_MEMBER_NAME(Assets_obj::imageFormats,"imageFormats");
	HX_VISIT_MEMBER_NAME(Assets_obj::soundFormats,"soundFormats");
	HX_VISIT_MEMBER_NAME(Assets_obj::fontFormats,"fontFormats");
	HX_VISIT_MEMBER_NAME(Assets_obj::videoFormats,"videoFormats");
};

#endif

hx::Class Assets_obj::__mClass;

static ::String Assets_obj_sStaticFields[] = {
	HX_HCSTRING("images","\xb8","\x50","\x92","\xfe"),
	HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"),
	HX_HCSTRING("blobs","\x76","\x74","\xfc","\xb4"),
	HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"),
	HX_HCSTRING("videos","\x98","\xd7","\x95","\xe5"),
	HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),
	HX_HCSTRING("loadEverything","\x39","\xd4","\x86","\x35"),
	HX_HCSTRING("loadImage","\x55","\x6b","\xa0","\xd8"),
	HX_HCSTRING("loadImageFromPath","\xa4","\xb8","\x7a","\xeb"),
	HX_HCSTRING("imageFormats","\x41","\x3b","\xf7","\xce"),
	HX_HCSTRING("get_imageFormats","\xca","\x27","\x96","\xd3"),
	HX_HCSTRING("loadBlob","\xa3","\x0e","\xb9","\xb1"),
	HX_HCSTRING("loadBlobFromPath","\xf2","\x59","\xfc","\x97"),
	HX_HCSTRING("loadSound","\xc9","\xd8","\x03","\x9c"),
	HX_HCSTRING("loadSoundFromPath","\x18","\xba","\xf6","\xa8"),
	HX_HCSTRING("soundFormats","\x4d","\x24","\x67","\xf3"),
	HX_HCSTRING("get_soundFormats","\xd6","\x10","\x06","\xf8"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadFontFromPath","\x64","\x3c","\x44","\x36"),
	HX_HCSTRING("fontFormats","\x4d","\x73","\xff","\xf3"),
	HX_HCSTRING("get_fontFormats","\xe4","\x2a","\xe1","\xb4"),
	HX_HCSTRING("loadVideo","\x75","\x60","\x33","\x52"),
	HX_HCSTRING("loadVideoFromPath","\xc4","\xcd","\xb7","\xae"),
	HX_HCSTRING("videoFormats","\x21","\x2a","\x2b","\xf9"),
	HX_HCSTRING("get_videoFormats","\xaa","\x16","\xca","\xfd"),
	::String(null())
};

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Assets","\xad","\x13","\xc3","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assets_obj::__GetStatic;
	__mClass->mSetStaticField = &Assets_obj::__SetStatic;
	__mClass->mMarkFunc = Assets_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Assets_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Assets_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Assets_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Assets_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Assets_obj::__boot()
{
{
            	HX_STACK_FRAME("kha.Assets","boot",0x977fac93,"kha.Assets.boot","kha/Assets.hx",50,0x66f27110)
HXLINE(  50)		images =  ::kha::ImageList_obj::__new();
            	}
{
            	HX_STACK_FRAME("kha.Assets","boot",0x977fac93,"kha.Assets.boot","kha/Assets.hx",51,0x66f27110)
HXLINE(  51)		sounds =  ::kha::SoundList_obj::__new();
            	}
{
            	HX_STACK_FRAME("kha.Assets","boot",0x977fac93,"kha.Assets.boot","kha/Assets.hx",52,0x66f27110)
HXLINE(  52)		blobs =  ::kha::BlobList_obj::__new();
            	}
{
            	HX_STACK_FRAME("kha.Assets","boot",0x977fac93,"kha.Assets.boot","kha/Assets.hx",53,0x66f27110)
HXLINE(  53)		fonts =  ::kha::FontList_obj::__new();
            	}
{
            	HX_STACK_FRAME("kha.Assets","boot",0x977fac93,"kha.Assets.boot","kha/Assets.hx",54,0x66f27110)
HXLINE(  54)		videos =  ::kha::VideoList_obj::__new();
            	}
}

} // end namespace kha
