// Generated by Haxe 3.3.0
#ifndef INCLUDED_kha_network_Entity
#define INCLUDED_kha_network_Entity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(kha,network,Entity)

namespace kha{
namespace network{


class HXCPP_CLASS_ATTRIBUTES Entity_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		Int (hx::Object :: *_hx__id)(); 
		static inline Int _id( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::kha::network::Entity_obj *>(_hx_.mPtr->_hx_getInterface(0xe296dd4d)))->_hx__id)();
		}
		Int (hx::Object :: *_hx__size)(); 
		static inline Int _size( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::kha::network::Entity_obj *>(_hx_.mPtr->_hx_getInterface(0xe296dd4d)))->_hx__size)();
		}
		Int (hx::Object :: *_hx__send)(Int offset, ::haxe::io::Bytes bytes); 
		static inline Int _send( ::Dynamic _hx_,Int offset, ::haxe::io::Bytes bytes) {
			return (_hx_.mPtr->*( static_cast< ::kha::network::Entity_obj *>(_hx_.mPtr->_hx_getInterface(0xe296dd4d)))->_hx__send)(offset,bytes);
		}
		Int (hx::Object :: *_hx__receive)(Int offset, ::haxe::io::Bytes bytes); 
		static inline Int _receive( ::Dynamic _hx_,Int offset, ::haxe::io::Bytes bytes) {
			return (_hx_.mPtr->*( static_cast< ::kha::network::Entity_obj *>(_hx_.mPtr->_hx_getInterface(0xe296dd4d)))->_hx__receive)(offset,bytes);
		}
};

} // end namespace kha
} // end namespace network

#endif /* INCLUDED_kha_network_Entity */ 