// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED__List_ListNode
#include <_List/ListNode.h>
#endif


void List_obj::__construct(){
            	HX_STACK_FRAME("List","new",0xed890070,"List.new","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/List.hx",44,0x8d2a8082)
            	HX_STACK_THIS(this)
HXLINE(  44)		this->length = (int)0;
            	}

Dynamic List_obj::__CreateEmpty() { return new List_obj; }

hx::ObjectPtr< List_obj > List_obj::__new()
{
	hx::ObjectPtr< List_obj > _hx_result = new List_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic List_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< List_obj > _hx_result = new List_obj();
	_hx_result->__construct();
	return _hx_result;
}

void List_obj::add( ::Dynamic item){
            	HX_STACK_FRAME("List","add",0xed7f2231,"List.add","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/List.hx",52,0x8d2a8082)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(item,"item")
HXLINE(  53)		HX_VARI(  ::_List::ListNode,x) =  ::_List::ListNode_obj::__new(item,null());
HXLINE(  54)		Bool _hx_tmp = hx::IsNull( this->h );
HXDLIN(  54)		if (_hx_tmp) {
HXLINE(  55)			this->h = x;
            		}
            		else {
HXLINE(  57)			this->q->next = x;
            		}
HXLINE(  58)		this->q = x;
HXLINE(  59)		this->length++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,add,(void))

 ::_List::ListIterator List_obj::iterator(){
            	HX_STACK_FRAME("List","iterator",0x2d4cdfde,"List.iterator","/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/List.hx",161,0x8d2a8082)
            	HX_STACK_THIS(this)
HXLINE( 161)		return  ::_List::ListIterator_obj::__new(this->h);
            	}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,iterator,return )


List_obj::List_obj()
{
}

void List_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(List);
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(q,"q");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void List_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(q,"q");
	HX_VISIT_MEMBER_NAME(length,"length");
}

hx::Val List_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return hx::Val( h); }
		if (HX_FIELD_EQ(inName,"q") ) { return hx::Val( q); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return hx::Val( length); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return hx::Val( iterator_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val List_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast<  ::_List::ListNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"q") ) { q=inValue.Cast<  ::_List::ListNode >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void List_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("q","\x71","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo List_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::_List::ListNode*/ ,(int)offsetof(List_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{hx::fsObject /*::_List::ListNode*/ ,(int)offsetof(List_obj,q),HX_HCSTRING("q","\x71","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(List_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *List_obj_sStaticStorageInfo = 0;
#endif

static ::String List_obj_sMemberFields[] = {
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("q","\x71","\x00","\x00","\x00"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	::String(null()) };

static void List_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(List_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void List_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(List_obj::__mClass,"__mClass");
};

#endif

hx::Class List_obj::__mClass;

void List_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("List","\x7e","\x48","\x8c","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = List_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(List_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< List_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = List_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = List_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = List_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

