// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_SoundList
#define INCLUDED_kha_SoundList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,SoundList)

namespace kha{


class HXCPP_CLASS_ATTRIBUTES SoundList_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SoundList_obj OBJ_;
		SoundList_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.SoundList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.SoundList"); }
		static hx::ObjectPtr< SoundList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundList_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SoundList","\xad","\xc8","\x53","\xf4"); }

		::Array< ::String > names;
};

} // end namespace kha

#endif /* INCLUDED_kha_SoundList */ 