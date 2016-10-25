// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt__bitmap
#define INCLUDED_kha_graphics2_truetype_Stbtt__bitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Blob)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt__bitmap)

namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES Stbtt__bitmap_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Stbtt__bitmap_obj OBJ_;
		Stbtt__bitmap_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics2.truetype.Stbtt__bitmap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.graphics2.truetype.Stbtt__bitmap"); }
		static hx::ObjectPtr< Stbtt__bitmap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt__bitmap_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Stbtt__bitmap","\x50","\xcc","\xa8","\x0d"); }

		Int w;
		Int h;
		Int stride;
		 ::kha::Blob pixels;
		Int pixels_offset;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt__bitmap */ 