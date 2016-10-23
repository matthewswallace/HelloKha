// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_kore_graphics4_Graphics
#define INCLUDED_kha_kore_graphics4_Graphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_graphics4_Graphics
#include <kha/graphics4/Graphics.h>
#endif
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS2(kha,graphics4,BlendingFactor)
HX_DECLARE_CLASS2(kha,graphics4,CompareMode)
HX_DECLARE_CLASS2(kha,graphics4,ConstantLocation)
HX_DECLARE_CLASS2(kha,graphics4,CubeMap)
HX_DECLARE_CLASS2(kha,graphics4,CullMode)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,IndexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,MipMapFilter)
HX_DECLARE_CLASS2(kha,graphics4,PipelineState)
HX_DECLARE_CLASS2(kha,graphics4,PipelineStateBase)
HX_DECLARE_CLASS2(kha,graphics4,StencilAction)
HX_DECLARE_CLASS2(kha,graphics4,TextureAddressing)
HX_DECLARE_CLASS2(kha,graphics4,TextureFilter)
HX_DECLARE_CLASS2(kha,graphics4,TextureFormat)
HX_DECLARE_CLASS2(kha,graphics4,TextureUnit)
HX_DECLARE_CLASS2(kha,graphics4,Usage)
HX_DECLARE_CLASS2(kha,graphics4,VertexBuffer)
HX_DECLARE_CLASS3(kha,kore,graphics4,ConstantLocation)
HX_DECLARE_CLASS3(kha,kore,graphics4,Graphics)
HX_DECLARE_CLASS3(kha,kore,graphics4,TextureUnit)
HX_DECLARE_CLASS2(kha,math,FastMatrix4)
HX_DECLARE_CLASS2(kha,math,FastVector2)
HX_DECLARE_CLASS2(kha,math,FastVector3)
HX_DECLARE_CLASS2(kha,math,FastVector4)


#include <Kore/pch.h>
#include <Kore/Graphics/Graphics.h>

namespace kha{
namespace kore{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES Graphics_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Graphics_obj OBJ_;
		Graphics_obj();

	public:
		void __construct( ::kha::Image target);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.kore.graphics4.Graphics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.kore.graphics4.Graphics"); }
		static hx::ObjectPtr< Graphics_obj > __new( ::kha::Image target);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Graphics_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("Graphics","\xeb","\xb4","\x19","\xec"); }

		 ::kha::Image target;
		Bool vsynced();
		::Dynamic vsynced_dyn();

		Int refreshRate();
		::Dynamic refreshRate_dyn();

		void clear( ::Dynamic color, ::Dynamic z, ::Dynamic stencil);
		::Dynamic clear_dyn();

		void viewport(Int x,Int y,Int width,Int height);
		::Dynamic viewport_dyn();

		void setDepthMode2(Bool write,Int mode);
		::Dynamic setDepthMode2_dyn();

		void setDepthMode(Bool write,::hx::EnumBase mode);
		::Dynamic setDepthMode_dyn();

		Int getBlendingMode(::hx::EnumBase op);
		::Dynamic getBlendingMode_dyn();

		void setBlendingModeNative(Int source,Int destination);
		::Dynamic setBlendingModeNative_dyn();

		void setBlendingMode(::hx::EnumBase source,::hx::EnumBase destination);
		::Dynamic setBlendingMode_dyn();

		void clear2(Int flags,Int color,Float z,Int stencil);
		::Dynamic clear2_dyn();

		void setVertexBuffer( ::kha::graphics4::VertexBuffer vertexBuffer);
		::Dynamic setVertexBuffer_dyn();

		void setVertexBuffersInternal( ::kha::graphics4::VertexBuffer vb0, ::kha::graphics4::VertexBuffer vb1, ::kha::graphics4::VertexBuffer vb2, ::kha::graphics4::VertexBuffer vb3,Int count);
		::Dynamic setVertexBuffersInternal_dyn();

		void setVertexBuffers(::Array< ::Dynamic> vertexBuffers);
		::Dynamic setVertexBuffers_dyn();

		void setIndexBuffer( ::kha::graphics4::IndexBuffer indexBuffer);
		::Dynamic setIndexBuffer_dyn();

		Int maxTextureSize();
		::Dynamic maxTextureSize_dyn();

		Bool supportsNonPow2Textures();
		::Dynamic supportsNonPow2Textures_dyn();

		::Dynamic createCubeMap(Int size,::hx::EnumBase format,::hx::EnumBase usage,hx::Null< Bool >  canRead);
		::Dynamic createCubeMap_dyn();

		void setStencilParameters2(Int compareMode,Int bothPass,Int depthFail,Int stencilFail,Int referenceValue,Int readMask,Int writeMask);
		::Dynamic setStencilParameters2_dyn();

		void setStencilParameters(::hx::EnumBase compareMode,::hx::EnumBase bothPass,::hx::EnumBase depthFail,::hx::EnumBase stencilFail,Int referenceValue,hx::Null< Int >  readMask,hx::Null< Int >  writeMask);
		::Dynamic setStencilParameters_dyn();

		void scissor(Int x,Int y,Int width,Int height);
		::Dynamic scissor_dyn();

		void disableScissor();
		::Dynamic disableScissor_dyn();

		Bool renderTargetsInvertedY();
		::Dynamic renderTargetsInvertedY_dyn();

		Bool instancedRenderingAvailable();
		::Dynamic instancedRenderingAvailable_dyn();

		void setTextureWrapNative( ::kha::kore::graphics4::TextureUnit unit,Int uWrap,Int vWrap);
		::Dynamic setTextureWrapNative_dyn();

		void setTextureFiltersNative( ::kha::kore::graphics4::TextureUnit unit,Int minificationFilter,Int magnificationFilter,Int mipMapFilter);
		::Dynamic setTextureFiltersNative_dyn();

		Int getTextureAddressing(::hx::EnumBase addressing);
		::Dynamic getTextureAddressing_dyn();

		Int getTextureFilter(::hx::EnumBase filter);
		::Dynamic getTextureFilter_dyn();

		Int getTextureMipMapFilter(::hx::EnumBase filter);
		::Dynamic getTextureMipMapFilter_dyn();

		void setTextureParameters(::Dynamic texunit,::hx::EnumBase uAddressing,::hx::EnumBase vAddressing,::hx::EnumBase minificationFilter,::hx::EnumBase magnificationFilter,::hx::EnumBase mipmapFilter);
		::Dynamic setTextureParameters_dyn();

		void setCullModeNative(Int value);
		::Dynamic setCullModeNative_dyn();

		void setCullMode(::hx::EnumBase mode);
		::Dynamic setCullMode_dyn();

		void setTextureInternal( ::kha::kore::graphics4::TextureUnit unit, ::kha::Image texture);
		::Dynamic setTextureInternal_dyn();

		void setTexture(::Dynamic unit, ::kha::Image texture);
		::Dynamic setTexture_dyn();

		void setTextureDepth(::Dynamic unit, ::kha::Image texture);
		::Dynamic setTextureDepth_dyn();

		void setVideoTexture(::Dynamic unit, ::kha::Video texture);
		::Dynamic setVideoTexture_dyn();

		void setPipeline( ::kha::graphics4::PipelineState pipe);
		::Dynamic setPipeline_dyn();

		void setColorMask(Bool red,Bool green,Bool blue,Bool alpha);
		::Dynamic setColorMask_dyn();

		void setBool(::Dynamic location,Bool value);
		::Dynamic setBool_dyn();

		void setBoolPrivate( ::kha::kore::graphics4::ConstantLocation location,Bool value);
		::Dynamic setBoolPrivate_dyn();

		void setInt(::Dynamic location,Int value);
		::Dynamic setInt_dyn();

		void setIntPrivate( ::kha::kore::graphics4::ConstantLocation location,Int value);
		::Dynamic setIntPrivate_dyn();

		void setFloat(::Dynamic location,float value);
		::Dynamic setFloat_dyn();

		void setFloatPrivate( ::kha::kore::graphics4::ConstantLocation location,float value);
		::Dynamic setFloatPrivate_dyn();

		void setFloat2(::Dynamic location,float value1,float value2);
		::Dynamic setFloat2_dyn();

		void setFloat2Private( ::kha::kore::graphics4::ConstantLocation location,float value1,float value2);
		::Dynamic setFloat2Private_dyn();

		void setFloat3(::Dynamic location,float value1,float value2,float value3);
		::Dynamic setFloat3_dyn();

		void setFloat3Private( ::kha::kore::graphics4::ConstantLocation location,float value1,float value2,float value3);
		::Dynamic setFloat3Private_dyn();

		void setFloat4(::Dynamic location,float value1,float value2,float value3,float value4);
		::Dynamic setFloat4_dyn();

		void setFloat4Private( ::kha::kore::graphics4::ConstantLocation location,float value1,float value2,float value3,float value4);
		::Dynamic setFloat4Private_dyn();

		void setVector2(::Dynamic location, ::kha::math::FastVector2 value);
		::Dynamic setVector2_dyn();

		void setVector2Private( ::kha::kore::graphics4::ConstantLocation location,float x,float y);
		::Dynamic setVector2Private_dyn();

		void setVector3(::Dynamic location, ::kha::math::FastVector3 value);
		::Dynamic setVector3_dyn();

		void setVector3Private( ::kha::kore::graphics4::ConstantLocation location,float x,float y,float z);
		::Dynamic setVector3Private_dyn();

		void setVector4(::Dynamic location, ::kha::math::FastVector4 value);
		::Dynamic setVector4_dyn();

		void setVector4Private( ::kha::kore::graphics4::ConstantLocation location,float x,float y,float z,float w);
		::Dynamic setVector4Private_dyn();

		void setFloats(::Dynamic location,::Array< float > values);
		::Dynamic setFloats_dyn();

		void setFloatsPrivate( ::kha::kore::graphics4::ConstantLocation location,::Array< float > values);
		::Dynamic setFloatsPrivate_dyn();

		void setMatrix(::Dynamic location, ::kha::math::FastMatrix4 matrix);
		::Dynamic setMatrix_dyn();

		void drawIndexedVertices(hx::Null< Int >  start,hx::Null< Int >  count);
		::Dynamic drawIndexedVertices_dyn();

		void drawAllIndexedVertices();
		::Dynamic drawAllIndexedVertices_dyn();

		void drawSomeIndexedVertices(Int start,Int count);
		::Dynamic drawSomeIndexedVertices_dyn();

		void drawIndexedVerticesInstanced(Int instanceCount,hx::Null< Int >  start,hx::Null< Int >  count);
		::Dynamic drawIndexedVerticesInstanced_dyn();

		void drawAllIndexedVerticesInstanced(Int instanceCount);
		::Dynamic drawAllIndexedVerticesInstanced_dyn();

		void drawSomeIndexedVerticesInstanced(Int instanceCount,Int start,Int count);
		::Dynamic drawSomeIndexedVerticesInstanced_dyn();

		void renderToTexture(::Array< ::Dynamic> additionalRenderTargets);
		::Dynamic renderToTexture_dyn();

		void renderToBackbuffer();
		::Dynamic renderToBackbuffer_dyn();

		void begin(::Array< ::Dynamic> additionalRenderTargets);
		::Dynamic begin_dyn();

		void end();
		::Dynamic end_dyn();

		void flush();
		::Dynamic flush_dyn();

};

} // end namespace kha
} // end namespace kore
} // end namespace graphics4

#endif /* INCLUDED_kha_kore_graphics4_Graphics */ 