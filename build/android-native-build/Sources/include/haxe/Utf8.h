// Generated by Haxe 3.3.0
#ifndef INCLUDED_haxe_Utf8
#define INCLUDED_haxe_Utf8

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Utf8)

namespace haxe{


class HXCPP_CLASS_ATTRIBUTES Utf8_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Utf8_obj OBJ_;
		Utf8_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.Utf8")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.Utf8"); }
		static hx::ObjectPtr< Utf8_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Utf8_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Utf8","\x51","\x81","\x87","\x38"); }

		static Int charCodeAt(::String s,Int index);
		static ::Dynamic charCodeAt_dyn();

		static Int length(::String s);
		static ::Dynamic length_dyn();

		static ::String sub(::String s,Int pos,Int len);
		static ::Dynamic sub_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Utf8 */ 
