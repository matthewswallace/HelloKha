// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_WindowedModeOptions
#define INCLUDED_kha_WindowedModeOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,WindowedModeOptions)

namespace kha{


class HXCPP_CLASS_ATTRIBUTES WindowedModeOptions_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef WindowedModeOptions_obj OBJ_;
		WindowedModeOptions_obj();

	public:
		void __construct( ::Dynamic minimizable, ::Dynamic maximizable, ::Dynamic resizable);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.WindowedModeOptions")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.WindowedModeOptions"); }
		static hx::ObjectPtr< WindowedModeOptions_obj > __new( ::Dynamic minimizable, ::Dynamic maximizable, ::Dynamic resizable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WindowedModeOptions_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WindowedModeOptions","\x0c","\x26","\x1b","\x69"); }

		Bool minimizable;
		Bool maximizable;
		Bool resizable;
};

} // end namespace kha

#endif /* INCLUDED_kha_WindowedModeOptions */ 