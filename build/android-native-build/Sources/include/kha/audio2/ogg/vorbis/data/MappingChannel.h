// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_MappingChannel
#define INCLUDED_kha_audio2_ogg_vorbis_data_MappingChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,MappingChannel)

namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES MappingChannel_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef MappingChannel_obj OBJ_;
		MappingChannel_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.audio2.ogg.vorbis.data.MappingChannel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.audio2.ogg.vorbis.data.MappingChannel"); }
		static hx::ObjectPtr< MappingChannel_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MappingChannel_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MappingChannel","\x75","\xdf","\xd5","\x40"); }

		Int magnitude;
		Int angle;
		Int mux;
};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_MappingChannel */ 
