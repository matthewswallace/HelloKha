// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_Canvas
#define INCLUDED_kha_Canvas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS2(kha,graphics1,Graphics)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)

namespace kha{


class HXCPP_CLASS_ATTRIBUTES Canvas_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		Int (hx::Object :: *_hx_get_width)(); 
		static inline Int get_width( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::kha::Canvas_obj *>(_hx_.mPtr->_hx_getInterface(0x36d1dbdc)))->_hx_get_width)();
		}
		Int (hx::Object :: *_hx_get_height)(); 
		static inline Int get_height( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::kha::Canvas_obj *>(_hx_.mPtr->_hx_getInterface(0x36d1dbdc)))->_hx_get_height)();
		}
		::Dynamic (hx::Object :: *_hx_get_g1)(); 
		static inline ::Dynamic get_g1( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::kha::Canvas_obj *>(_hx_.mPtr->_hx_getInterface(0x36d1dbdc)))->_hx_get_g1)();
		}
		 ::kha::graphics2::Graphics (hx::Object :: *_hx_get_g2)(); 
		static inline  ::kha::graphics2::Graphics get_g2( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::kha::Canvas_obj *>(_hx_.mPtr->_hx_getInterface(0x36d1dbdc)))->_hx_get_g2)();
		}
		::Dynamic (hx::Object :: *_hx_get_g4)(); 
		static inline ::Dynamic get_g4( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::kha::Canvas_obj *>(_hx_.mPtr->_hx_getInterface(0x36d1dbdc)))->_hx_get_g4)();
		}
};

} // end namespace kha

#endif /* INCLUDED_kha_Canvas */ 
