// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_audio2_ogg_tools_Mdct
#define INCLUDED_kha_audio2_ogg_tools_Mdct

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(kha,audio2,ogg,tools,Mdct)

namespace kha{
namespace audio2{
namespace ogg{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES Mdct_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Mdct_obj OBJ_;
		Mdct_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.audio2.ogg.tools.Mdct")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.audio2.ogg.tools.Mdct"); }
		static hx::ObjectPtr< Mdct_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mdct_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Mdct","\xe8","\xa5","\x31","\x33"); }

		static void inverseTransform(::Array< Float > buffer,Int n,::Array< Float > a,::Array< Float > b,::Array< Float > c,::Array< Int > bitReverse);
		static ::Dynamic inverseTransform_dyn();

		static void step3Iter0Loop(Int n,::Array< Float > e,Int i_off,Int k_off,::Array< Float > a);
		static ::Dynamic step3Iter0Loop_dyn();

		static void step3InnerRLoop(Int lim,::Array< Float > e,Int d0,Int k_off,::Array< Float > a,Int k1);
		static ::Dynamic step3InnerRLoop_dyn();

		static void step3InnerSLoop(Int n,::Array< Float > e,Int i_off,Int k_off,::Array< Float > a,Int aOffset0,Int aOffset1,Int k0);
		static ::Dynamic step3InnerSLoop_dyn();

		static void iter54(::Array< Float > e,Int zOffset);
		static ::Dynamic iter54_dyn();

		static void step3InnerSLoopLd654(Int n,::Array< Float > e,Int i_off,::Array< Float > a,Int baseN);
		static ::Dynamic step3InnerSLoopLd654_dyn();

};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace tools

#endif /* INCLUDED_kha_audio2_ogg_tools_Mdct */ 