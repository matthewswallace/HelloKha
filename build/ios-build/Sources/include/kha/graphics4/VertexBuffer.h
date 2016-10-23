// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_graphics4_VertexBuffer
#define INCLUDED_kha_graphics4_VertexBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,arrays,Float32Array)
HX_DECLARE_CLASS2(kha,graphics4,Usage)
HX_DECLARE_CLASS2(kha,graphics4,VertexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,VertexStructure)


#include <Kore/pch.h>
#include <Kore/Graphics/Graphics.h>

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES VertexBuffer_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef VertexBuffer_obj OBJ_;
		VertexBuffer_obj();

	public:
		void __construct(Int vertexCount, ::kha::graphics4::VertexStructure structure,::hx::EnumBase usage,hx::Null< Int >  __o_instanceDataStepRate,hx::Null< Bool >  __o_canRead);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.VertexBuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.graphics4.VertexBuffer"); }
		static hx::ObjectPtr< VertexBuffer_obj > __new(Int vertexCount, ::kha::graphics4::VertexStructure structure,::hx::EnumBase usage,hx::Null< Int >  __o_instanceDataStepRate,hx::Null< Bool >  __o_canRead);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexBuffer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("VertexBuffer","\xa4","\xfb","\xbb","\x38"); }

		 ::kha::arrays::Float32Array data;
		void _hx_delete();
		::Dynamic _hx_delete_dyn();

		void init(Int vertexCount, ::kha::graphics4::VertexStructure structure,Int instanceDataStepRate);
		::Dynamic init_dyn();

		 ::kha::arrays::Float32Array lock( ::Dynamic start, ::Dynamic count);
		::Dynamic lock_dyn();

		void unlock();
		::Dynamic unlock_dyn();

		Int stride();
		::Dynamic stride_dyn();

		Int count();
		::Dynamic count_dyn();

Kore::VertexBuffer* buffer;
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_VertexBuffer */ 
