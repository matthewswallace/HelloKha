// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_Video
#define INCLUDED_kha_Video

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Video)

namespace kha{


class HXCPP_CLASS_ATTRIBUTES Video_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Video_obj OBJ_;
		Video_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.Video")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.Video"); }
		static hx::ObjectPtr< Video_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Video_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("Video","\x5b","\x84","\x29","\xca"); }

		virtual Int width();
		::Dynamic width_dyn();

		virtual Int height();
		::Dynamic height_dyn();

		virtual void play(hx::Null< Bool >  loop);
		::Dynamic play_dyn();

		virtual void pause();
		::Dynamic pause_dyn();

		virtual void stop();
		::Dynamic stop_dyn();

		virtual Int getLength();
		::Dynamic getLength_dyn();

		virtual Int getCurrentPos();
		::Dynamic getCurrentPos_dyn();

		Float getVolume();
		::Dynamic getVolume_dyn();

		void setVolume(Float volume);
		::Dynamic setVolume_dyn();

		virtual Bool isFinished();
		::Dynamic isFinished_dyn();

		virtual void unload();
		::Dynamic unload_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Video */ 
