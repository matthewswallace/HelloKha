// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_graphics4_PipelineStateBase
#define INCLUDED_kha_graphics4_PipelineStateBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,BlendingFactor)
HX_DECLARE_CLASS2(kha,graphics4,BlendingOperation)
HX_DECLARE_CLASS2(kha,graphics4,CompareMode)
HX_DECLARE_CLASS2(kha,graphics4,CullMode)
HX_DECLARE_CLASS2(kha,graphics4,FragmentShader)
HX_DECLARE_CLASS2(kha,graphics4,GeometryShader)
HX_DECLARE_CLASS2(kha,graphics4,PipelineStateBase)
HX_DECLARE_CLASS2(kha,graphics4,StencilAction)
HX_DECLARE_CLASS2(kha,graphics4,TessellationControlShader)
HX_DECLARE_CLASS2(kha,graphics4,TessellationEvaluationShader)
HX_DECLARE_CLASS2(kha,graphics4,VertexShader)
HX_DECLARE_CLASS2(kha,graphics4,VertexStructure)

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES PipelineStateBase_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef PipelineStateBase_obj OBJ_;
		PipelineStateBase_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.PipelineStateBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.graphics4.PipelineStateBase"); }
		static hx::ObjectPtr< PipelineStateBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PipelineStateBase_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PipelineStateBase","\x20","\xd7","\xa1","\x02"); }

		::Array< ::Dynamic> inputLayout;
		 ::kha::graphics4::VertexShader vertexShader;
		 ::kha::graphics4::FragmentShader fragmentShader;
		 ::kha::graphics4::GeometryShader geometryShader;
		 ::kha::graphics4::TessellationControlShader tessellationControlShader;
		 ::kha::graphics4::TessellationEvaluationShader tessellationEvaluationShader;
		::hx::EnumBase cullMode;
		Bool depthWrite;
		::hx::EnumBase depthMode;
		::hx::EnumBase stencilMode;
		::hx::EnumBase stencilBothPass;
		::hx::EnumBase stencilDepthFail;
		::hx::EnumBase stencilFail;
		Int stencilReferenceValue;
		Int stencilReadMask;
		Int stencilWriteMask;
		::hx::EnumBase blendSource;
		::hx::EnumBase blendDestination;
		::hx::EnumBase blendOperation;
		::hx::EnumBase alphaBlendSource;
		::hx::EnumBase alphaBlendDestination;
		::hx::EnumBase alphaBlendOperation;
		Bool colorWriteMaskRed;
		Bool colorWriteMaskGreen;
		Bool colorWriteMaskBlue;
		Bool colorWriteMaskAlpha;
		Bool set_colorWriteMask(Bool value);
		::Dynamic set_colorWriteMask_dyn();

};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_PipelineStateBase */ 