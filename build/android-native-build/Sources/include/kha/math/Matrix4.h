// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_math_Matrix4
#define INCLUDED_kha_math_Matrix4

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,math,Matrix4)
HX_DECLARE_CLASS2(kha,math,Vector3)

namespace kha{
namespace math{


class HXCPP_CLASS_ATTRIBUTES Matrix4_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Matrix4_obj OBJ_;
		Matrix4_obj();

	public:
		void __construct(Float _00,Float _10,Float _20,Float _30,Float _01,Float _11,Float _21,Float _31,Float _02,Float _12,Float _22,Float _32,Float _03,Float _13,Float _23,Float _33);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.math.Matrix4")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.math.Matrix4"); }
		static hx::ObjectPtr< Matrix4_obj > __new(Float _00,Float _10,Float _20,Float _30,Float _01,Float _11,Float _21,Float _31,Float _02,Float _12,Float _22,Float _32,Float _03,Float _13,Float _23,Float _33);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Matrix4_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Matrix4","\xb3","\x6a","\xb8","\x60"); }

		static void __boot();
		static Int width;
		static Int height;
		static  ::kha::math::Matrix4 orthogonalProjection(Float left,Float right,Float bottom,Float top,Float zn,Float zf);
		static ::Dynamic orthogonalProjection_dyn();

		static  ::kha::math::Matrix4 perspectiveProjection(Float fovY,Float aspect,Float zn,Float zf);
		static ::Dynamic perspectiveProjection_dyn();

		static  ::kha::math::Matrix4 lookAt( ::kha::math::Vector3 eye, ::kha::math::Vector3 at, ::kha::math::Vector3 up);
		static ::Dynamic lookAt_dyn();

		Float _00;
		Float _10;
		Float _20;
		Float _30;
		Float _01;
		Float _11;
		Float _21;
		Float _31;
		Float _02;
		Float _12;
		Float _22;
		Float _32;
		Float _03;
		Float _13;
		Float _23;
		Float _33;
};

} // end namespace kha
} // end namespace math

#endif /* INCLUDED_kha_math_Matrix4 */ 
