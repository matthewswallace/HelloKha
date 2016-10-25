// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_pack_range
#define INCLUDED_kha_graphics2_truetype_Stbtt_pack_range

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_pack_range)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_packedchar)

namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES Stbtt_pack_range_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Stbtt_pack_range_obj OBJ_;
		Stbtt_pack_range_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics2.truetype.Stbtt_pack_range")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.graphics2.truetype.Stbtt_pack_range"); }
		static hx::ObjectPtr< Stbtt_pack_range_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt_pack_range_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Stbtt_pack_range","\x15","\xe7","\x8a","\x43"); }

		Float font_size;
		Int first_unicode_codepoint_in_range;
		::Array< Int > array_of_unicode_codepoints;
		Int num_chars;
		 ::kha::graphics2::truetype::Stbtt_packedchar chardata_for_range;
		Int h_oversample;
		Int v_oversample;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt_pack_range */ 