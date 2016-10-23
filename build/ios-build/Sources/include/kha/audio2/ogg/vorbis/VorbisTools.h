// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisTools
#define INCLUDED_kha_audio2_ogg_vorbis_VorbisTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,VorbisTools)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,IntPoint)

namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{


class HXCPP_CLASS_ATTRIBUTES VorbisTools_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef VorbisTools_obj OBJ_;
		VorbisTools_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.audio2.ogg.vorbis.VorbisTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.audio2.ogg.vorbis.VorbisTools"); }
		static hx::ObjectPtr< VorbisTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VorbisTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("VorbisTools","\xa8","\xa9","\x86","\x30"); }

		static void __boot();
		static Int EOP;
		static ::Array< ::Dynamic> integerDivideTable;
		static Float M__PI;
		static Int DIVTAB_NUMER;
		static Int DIVTAB_DENOM;
		static ::Array< Float > INVERSE_DB_TABLE;
		static void _hx_assert(Bool b, ::Dynamic p);
		static ::Dynamic _hx_assert_dyn();

		static  ::Dynamic neighbors(::Array< Int > x,Int n);
		static ::Dynamic neighbors_dyn();

		static Float floatUnpack(Int x);
		static ::Dynamic floatUnpack_dyn();

		static Int bitReverse(Int n);
		static ::Dynamic bitReverse_dyn();

		static Int pointCompare( ::kha::audio2::ogg::vorbis::data::IntPoint a, ::kha::audio2::ogg::vorbis::data::IntPoint b);
		static ::Dynamic pointCompare_dyn();

		static Int uintAsc(Int a,Int b);
		static ::Dynamic uintAsc_dyn();

		static Int lookup1Values(Int entries,Int dim);
		static ::Dynamic lookup1Values_dyn();

		static void computeWindow(Int n,::Array< Float > window);
		static ::Dynamic computeWindow_dyn();

		static Float square(Float f);
		static ::Dynamic square_dyn();

		static void computeBitReverse(Int n,::Array< Int > rev);
		static ::Dynamic computeBitReverse_dyn();

		static void computeTwiddleFactors(Int n,::Array< Float > af,::Array< Float > bf,::Array< Float > cf);
		static ::Dynamic computeTwiddleFactors_dyn();

		static void drawLine(::Array< Float > output,Int x0,Int y0,Int x1,Int y1,Int n);
		static ::Dynamic drawLine_dyn();

		static Int predictPoint(Int x,Int x0,Int x1,Int y0,Int y1);
		static ::Dynamic predictPoint_dyn();

		static ::Array< Float > emptyFloatVector(Int len);
		static ::Dynamic emptyFloatVector_dyn();

		static ::Array< Float > copyVector(::Array< Float > source);
		static ::Dynamic copyVector_dyn();

};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis

#endif /* INCLUDED_kha_audio2_ogg_vorbis_VorbisTools */ 
