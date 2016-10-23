// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_input_Sensor
#define INCLUDED_kha_input_Sensor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,input,Sensor)
HX_DECLARE_CLASS2(kha,input,SensorType)

namespace kha{
namespace input{


class HXCPP_CLASS_ATTRIBUTES Sensor_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Sensor_obj OBJ_;
		Sensor_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.input.Sensor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.input.Sensor"); }
		static hx::ObjectPtr< Sensor_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sensor_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Sensor","\x5a","\xa6","\x24","\xa0"); }

		static void __boot();
		static  ::kha::input::Sensor accelerometer;
		static  ::kha::input::Sensor gyroscope;
		static  ::kha::input::Sensor get(::hx::EnumBase type);
		static ::Dynamic get_dyn();

		static void _changed(Int type,Float x,Float y,Float z);
		static ::Dynamic _changed_dyn();

		::Array< ::Dynamic> listeners;
		void notify( ::Dynamic listener);
		::Dynamic notify_dyn();

};

} // end namespace kha
} // end namespace input

#endif /* INCLUDED_kha_input_Sensor */ 
