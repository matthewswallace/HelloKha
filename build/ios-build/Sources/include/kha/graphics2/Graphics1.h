// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_graphics2_Graphics1
#define INCLUDED_kha_graphics2_Graphics1

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_graphics1_Graphics
#include <kha/graphics1/Graphics.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,graphics1,Graphics)
HX_DECLARE_CLASS2(kha,graphics2,Graphics1)

namespace kha{
namespace graphics2{


class HXCPP_CLASS_ATTRIBUTES Graphics1_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Graphics1_obj OBJ_;
		Graphics1_obj();

	public:
		void __construct(::Dynamic canvas);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics2.Graphics1")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.graphics2.Graphics1"); }
		static hx::ObjectPtr< Graphics1_obj > __new(::Dynamic canvas);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Graphics1_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("Graphics1","\xe6","\x98","\x64","\xaa"); }

		::Dynamic canvas;
		 ::kha::Image texture;
		 ::haxe::io::Bytes pixels;
		void begin();
		::Dynamic begin_dyn();

		void end();
		::Dynamic end_dyn();

		void setPixel(Int x,Int y,Int color);
		::Dynamic setPixel_dyn();

};

} // end namespace kha
} // end namespace graphics2

#endif /* INCLUDED_kha_graphics2_Graphics1 */ 