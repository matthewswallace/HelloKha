// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_temp_region
#define INCLUDED_kha_graphics2_truetype_Stbtt_temp_region

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_temp_region)

namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES Stbtt_temp_region_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Stbtt_temp_region_obj OBJ_;
		Stbtt_temp_region_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.graphics2.truetype.Stbtt_temp_region")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.graphics2.truetype.Stbtt_temp_region"); }
		static hx::ObjectPtr< Stbtt_temp_region_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt_temp_region_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Stbtt_temp_region","\xc1","\x8d","\x08","\x7f"); }

		Int width;
		Int height;
		Int xoff;
		Int yoff;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt_temp_region */ 