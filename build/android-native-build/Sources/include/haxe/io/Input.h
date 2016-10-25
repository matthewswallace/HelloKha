// Generated by Haxe 3.3.0
#ifndef INCLUDED_haxe_io_Input
#define INCLUDED_haxe_io_Input

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)

namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES Input_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Input_obj OBJ_;
		Input_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.io.Input")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.io.Input"); }
		static hx::ObjectPtr< Input_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Input_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Input","\xea","\x33","\x4b","\x51"); }

		Bool bigEndian;
		virtual Int readByte();
		::Dynamic readByte_dyn();

		virtual Int readBytes( ::haxe::io::Bytes s,Int pos,Int len);
		::Dynamic readBytes_dyn();

		void readFullBytes( ::haxe::io::Bytes s,Int pos,Int len);
		::Dynamic readFullBytes_dyn();

		 ::haxe::io::Bytes read(Int nbytes);
		::Dynamic read_dyn();

		Int readInt32();
		::Dynamic readInt32_dyn();

		::String readString(Int len);
		::Dynamic readString_dyn();

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_Input */ 
