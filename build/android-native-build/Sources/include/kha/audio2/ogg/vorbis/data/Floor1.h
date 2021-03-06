// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Floor1
#define INCLUDED_kha_audio2_ogg_vorbis_data_Floor1

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Floor1)

namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES Floor1_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Floor1_obj OBJ_;
		Floor1_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.data.Floor1")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.audio2.ogg.vorbis.data.Floor1"); }
		static hx::ObjectPtr< Floor1_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Floor1_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Floor1","\x05","\x35","\xf5","\x75"); }

		Int partitions;
		::Array< Int > partitionClassList;
		::Array< Int > classDimensions;
		::Array< Int > classSubclasses;
		::Array< Int > classMasterbooks;
		::Array< ::Dynamic> subclassBooks;
		::Array< Int > xlist;
		::Array< Int > sortedOrder;
		::Array< ::Dynamic> neighbors;
		Int floor1Multiplier;
		Int rangebits;
		Int values;
};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_Floor1 */ 
