// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_Assets
#define INCLUDED_kha_Assets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Assets)
HX_DECLARE_CLASS1(kha,Blob)
HX_DECLARE_CLASS1(kha,BlobList)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Font)
HX_DECLARE_CLASS1(kha,FontList)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,ImageList)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Sound)
HX_DECLARE_CLASS1(kha,SoundList)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS1(kha,VideoList)

namespace kha{


class HXCPP_CLASS_ATTRIBUTES Assets_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Assets_obj OBJ_;
		Assets_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.Assets")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.Assets"); }
		static hx::ObjectPtr< Assets_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Assets_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Assets","\xa3","\xbc","\x97","\x80"); }

		static void __boot();
		static  ::kha::ImageList images;
		static  ::kha::SoundList sounds;
		static  ::kha::BlobList blobs;
		static  ::kha::FontList fonts;
		static  ::kha::VideoList videos;
		static Float progress;
		static void loadEverything( ::Dynamic callback);
		static ::Dynamic loadEverything_dyn();

		static void loadImage(::String name, ::Dynamic done);
		static ::Dynamic loadImage_dyn();

		static void loadImageFromPath(::String path,Bool readable, ::Dynamic done);
		static ::Dynamic loadImageFromPath_dyn();

		static ::Array< ::String > imageFormats;
		static ::Array< ::String > get_imageFormats();
		static ::Dynamic get_imageFormats_dyn();

		static void loadBlob(::String name, ::Dynamic done);
		static ::Dynamic loadBlob_dyn();

		static void loadBlobFromPath(::String path, ::Dynamic done);
		static ::Dynamic loadBlobFromPath_dyn();

		static void loadSound(::String name, ::Dynamic done);
		static ::Dynamic loadSound_dyn();

		static void loadSoundFromPath(::String path, ::Dynamic done);
		static ::Dynamic loadSoundFromPath_dyn();

		static ::Array< ::String > soundFormats;
		static ::Array< ::String > get_soundFormats();
		static ::Dynamic get_soundFormats_dyn();

		static void loadFont(::String name, ::Dynamic done);
		static ::Dynamic loadFont_dyn();

		static void loadFontFromPath(::String path, ::Dynamic done);
		static ::Dynamic loadFontFromPath_dyn();

		static ::Array< ::String > fontFormats;
		static ::Array< ::String > get_fontFormats();
		static ::Dynamic get_fontFormats_dyn();

		static void loadVideo(::String name, ::Dynamic done);
		static ::Dynamic loadVideo_dyn();

		static void loadVideoFromPath(::String path, ::Dynamic done);
		static ::Dynamic loadVideoFromPath_dyn();

		static ::Array< ::String > videoFormats;
		static ::Array< ::String > get_videoFormats();
		static ::Dynamic get_videoFormats_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Assets */ 
