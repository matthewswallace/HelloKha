// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_Image
#define INCLUDED_kha_Image

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS2(kha,graphics1,Graphics)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,TextureFormat)
HX_DECLARE_CLASS2(kha,graphics4,Usage)
HX_DECLARE_CLASS2(kha,kore,Video)


#include <Kore/pch.h>
#include <Kore/Graphics/Graphics.h>

namespace kha{


class HXCPP_CLASS_ATTRIBUTES Image_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Image_obj OBJ_;
		Image_obj();

	public:
		void __construct(Bool readable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.Image")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.Image"); }
		static hx::ObjectPtr< Image_obj > __new(Bool readable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Image_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("Image","\x3b","\x8f","\x96","\x50"); }

		static  ::kha::Image createFromVideo( ::kha::Video video);
		static ::Dynamic createFromVideo_dyn();

		static  ::kha::Image create(Int width,Int height,::hx::EnumBase format,::hx::EnumBase usage);
		static ::Dynamic create_dyn();

		static  ::kha::Image create3D(Int width,Int height,Int depth,::hx::EnumBase format,::hx::EnumBase usage);
		static ::Dynamic create3D_dyn();

		static  ::kha::Image createRenderTarget(Int width,Int height,::hx::EnumBase format,hx::Null< Int >  depthStencil,hx::Null< Int >  antiAliasingSamples,hx::Null< Int >  contextId);
		static ::Dynamic createRenderTarget_dyn();

		static  ::kha::Image fromBytes( ::haxe::io::Bytes bytes,Int width,Int height,::hx::EnumBase format,::hx::EnumBase usage);
		static ::Dynamic fromBytes_dyn();

		static Int getRenderTargetFormat(::hx::EnumBase format);
		static ::Dynamic getRenderTargetFormat_dyn();

		static Int getDepthBufferBits(Int depthAndStencil);
		static ::Dynamic getDepthBufferBits_dyn();

		static Int getStencilBufferBits(Int depthAndStencil);
		static ::Dynamic getStencilBufferBits_dyn();

		static Int getTextureFormat(::hx::EnumBase format);
		static ::Dynamic getTextureFormat_dyn();

		static  ::kha::Image create2(Int width,Int height,::hx::EnumBase format,Bool readable,Bool renderTarget,Int depthStencil,Int contextId);
		static ::Dynamic create2_dyn();

		static  ::kha::Image create3(Int width,Int height,Int depth,::hx::EnumBase format,Bool readable,Int contextId);
		static ::Dynamic create3_dyn();

		static  ::kha::Image fromFile(::String filename,Bool readable);
		static ::Dynamic fromFile_dyn();

		static Int maxSize;
		static Int get_maxSize();
		static ::Dynamic get_maxSize_dyn();

		static Bool nonPow2Supported;
		static Bool get_nonPow2Supported();
		static ::Dynamic get_nonPow2Supported_dyn();

		::hx::EnumBase format;
		Bool readable;
		::Dynamic graphics1;
		 ::kha::graphics2::Graphics graphics2;
		::Dynamic graphics4;
		void initRenderTarget(Int width,Int height,Int depthBufferBits,Int format,Int stencilBufferBits,Int contextId);
		::Dynamic initRenderTarget_dyn();

		void init(Int width,Int height,Int format);
		::Dynamic init_dyn();

		void init3D(Int width,Int height,Int depth,Int format);
		::Dynamic init3D_dyn();

		void initVideo( ::kha::kore::Video video);
		::Dynamic initVideo_dyn();

		void initFromFile(::String filename);
		::Dynamic initFromFile_dyn();

		::Dynamic g1;
		::Dynamic get_g1();
		::Dynamic get_g1_dyn();

		 ::kha::graphics2::Graphics g2;
		 ::kha::graphics2::Graphics get_g2();
		::Dynamic get_g2_dyn();

		::Dynamic g4;
		::Dynamic get_g4();
		::Dynamic get_g4_dyn();

		Int width;
		Int height;
		Int depth;
		Int get_width();
		::Dynamic get_width_dyn();

		Int get_height();
		::Dynamic get_height_dyn();

		Int get_depth();
		::Dynamic get_depth_dyn();

		Int realWidth;
		Int realHeight;
		Int get_realWidth();
		::Dynamic get_realWidth_dyn();

		Int get_realHeight();
		::Dynamic get_realHeight_dyn();

		Bool isOpaque(Int x,Int y);
		::Dynamic isOpaque_dyn();

		Int atInternal(Int x,Int y);
		::Dynamic atInternal_dyn();

		Int at(Int x,Int y);
		::Dynamic at_dyn();

		void unload();
		::Dynamic unload_dyn();

		 ::haxe::io::Bytes bytes;
		 ::haxe::io::Bytes lock(hx::Null< Int >  level);
		::Dynamic lock_dyn();

		void unlock();
		::Dynamic unlock_dyn();

		void generateMipmaps(Int levels);
		::Dynamic generateMipmaps_dyn();

		void setMipmaps(::Array< ::Dynamic> mipmaps);
		::Dynamic setMipmaps_dyn();

		void setDepthStencilFrom( ::kha::Image image);
		::Dynamic setDepthStencilFrom_dyn();

Kore::Texture* texture; Kore::RenderTarget* renderTarget;
};

} // end namespace kha

#endif /* INCLUDED_kha_Image */ 
