// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_Sound
#define INCLUDED_kha_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Sound)

namespace kha{


class HXCPP_CLASS_ATTRIBUTES Sound_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Sound_obj OBJ_;
		Sound_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.Sound")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.Sound"); }
		static hx::ObjectPtr< Sound_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sound_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("Sound","\xaf","\xfc","\xf9","\x13"); }

		 ::haxe::io::Bytes compressedData;
		::Array< Float > uncompressedData;
		virtual void uncompress( ::Dynamic done);
		::Dynamic uncompress_dyn();

		virtual void unload();
		::Dynamic unload_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Sound */ 