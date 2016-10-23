// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "float32array.h"
#include "hxMath.h"
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Framebuffer
#include <kha/Framebuffer.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Key
#include <kha/Key.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Shaders
#include <kha/Shaders.h>
#endif
#ifndef INCLUDED_kha_System
#include <kha/System.h>
#endif
#ifndef INCLUDED_kha_arrays_Float32Array
#include <kha/arrays/Float32Array.h>
#endif
#ifndef INCLUDED_kha_graphics4_ConstantLocation
#include <kha/graphics4/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_graphics4_FragmentShader
#include <kha/graphics4/FragmentShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics
#include <kha/graphics4/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_IndexBuffer
#include <kha/graphics4/IndexBuffer.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineState
#include <kha/graphics4/PipelineState.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineStateBase
#include <kha/graphics4/PipelineStateBase.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureUnit
#include <kha/graphics4/TextureUnit.h>
#endif
#ifndef INCLUDED_kha_graphics4_Usage
#include <kha/graphics4/Usage.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexBuffer
#include <kha/graphics4/VertexBuffer.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexData
#include <kha/graphics4/VertexData.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexShader
#include <kha/graphics4/VertexShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexStructure
#include <kha/graphics4/VertexStructure.h>
#endif
#ifndef INCLUDED_kha_input_Gamepad
#include <kha/input/Gamepad.h>
#endif
#ifndef INCLUDED_kha_input_Keyboard
#include <kha/input/Keyboard.h>
#endif
#ifndef INCLUDED_kha_input_Mouse
#include <kha/input/Mouse.h>
#endif
#ifndef INCLUDED_kha_math_FastMatrix4
#include <kha/math/FastMatrix4.h>
#endif
#ifndef INCLUDED_kha_math_Quaternion
#include <kha/math/Quaternion.h>
#endif
#ifndef INCLUDED_kha_math_Vector2
#include <kha/math/Vector2.h>
#endif
#ifndef INCLUDED_kha_math_Vector3
#include <kha/math/Vector3.h>
#endif
#ifndef INCLUDED_kha_math_Vector4
#include <kha/math/Vector4.h>
#endif
#ifndef INCLUDED_kha_network_Controller
#include <kha/network/Controller.h>
#endif
#ifndef INCLUDED_kha_vr_Pose
#include <kha/vr/Pose.h>
#endif
#ifndef INCLUDED_kha_vr_PoseState
#include <kha/vr/PoseState.h>
#endif
#ifndef INCLUDED_kha_vr_SensorState
#include <kha/vr/SensorState.h>
#endif
#ifndef INCLUDED_kha_vr_TimeWarpImage
#include <kha/vr/TimeWarpImage.h>
#endif
#ifndef INCLUDED_kha_vr_TimeWarpParms
#include <kha/vr/TimeWarpParms.h>
#endif
#ifndef INCLUDED_kha_vr_VrInterface
#include <kha/vr/VrInterface.h>
#endif
#ifndef INCLUDED_kha_vr_VrInterfaceEmulated
#include <kha/vr/VrInterfaceEmulated.h>
#endif

namespace kha{
namespace vr{

void VrInterfaceEmulated_obj::__construct(){
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","new",0xc6e9e8f8,"kha.vr.VrInterfaceEmulated.new","kha/vr/VrInterfaceEmulated.hx",32,0x856b8c18)
            	HX_STACK_THIS(this)
HXLINE( 147)		this->mouseButtonDown = false;
HXLINE( 127)		this->oldMouseY = (int)0;
HXLINE( 126)		this->oldMouseX = (int)0;
HXLINE(  43)		this->yawDelta = ((Float)0.0);
HXLINE(  42)		this->pitchDelta = ((Float)0.0);
HXLINE(  40)		this->yawDegrees = ((Float)0.0);
HXLINE(  39)		this->pitchDegrees = ((Float)0.0);
HXLINE( 265)		super::__construct();
HXLINE( 267)		::kha::input::Gamepad_obj::get((int)0)->notify(this->axisEvent_dyn(),this->buttonEvent_dyn());
HXLINE( 268)		::kha::input::Keyboard_obj::get((int)0)->notify(this->keyDownEvent_dyn(),this->keyUpEvent_dyn());
HXLINE( 269)		::kha::input::Mouse_obj::get((int)0)->notify(this->mouseButtonDownEvent_dyn(),this->mouseButtonUpEvent_dyn(),this->mouseMoveEvent_dyn(),null());
HXLINE( 272)		HX_VARI(  ::kha::graphics4::VertexStructure,structure) =  ::kha::graphics4::VertexStructure_obj::__new();
HXLINE( 274)		this->orientation =  ::kha::math::Quaternion_obj::__new(null(),null(),null(),null());
HXLINE( 275)		this->updateOrientation();
HXLINE( 279)		structure->add(HX_("vertexPosition",2d,3c,14,50),::kha::graphics4::VertexData_obj::Float3_dyn());
HXLINE( 280)		structure->add(HX_("texPosition",b0,79,ff,c7),::kha::graphics4::VertexData_obj::Float2_dyn());
HXLINE( 281)		structure->add(HX_("vertexColor",5f,3b,98,5e),::kha::graphics4::VertexData_obj::Float4_dyn());
HXLINE( 283)		this->vb =  ::kha::graphics4::VertexBuffer_obj::__new((int)4,structure,::kha::graphics4::Usage_obj::StaticUsage_dyn(),null(),null());
HXLINE( 284)		HX_VARI(  ::kha::arrays::Float32Array,verts) = this->vb->lock(null(),null());
HXLINE( 286)		 ::kha::math::Vector3 _hx_tmp =  ::kha::math::Vector3_obj::__new((int)-1,(int)-1,(int)0);
HXDLIN( 286)		 ::kha::math::Vector2 _hx_tmp1 =  ::kha::math::Vector2_obj::__new((int)0,(int)0);
HXDLIN( 286)		this->setVertex(verts,(int)0,_hx_tmp,_hx_tmp1, ::kha::math::Vector4_obj::__new((int)1,(int)1,(int)1,(int)1));
HXLINE( 287)		 ::kha::math::Vector3 _hx_tmp2 =  ::kha::math::Vector3_obj::__new((int)-1,(int)1,(int)0);
HXDLIN( 287)		 ::kha::math::Vector2 _hx_tmp3 =  ::kha::math::Vector2_obj::__new((int)0,(int)1);
HXDLIN( 287)		this->setVertex(verts,(int)1,_hx_tmp2,_hx_tmp3, ::kha::math::Vector4_obj::__new((int)1,(int)1,(int)1,(int)1));
HXLINE( 288)		 ::kha::math::Vector3 _hx_tmp4 =  ::kha::math::Vector3_obj::__new((int)1,(int)-1,(int)0);
HXDLIN( 288)		 ::kha::math::Vector2 _hx_tmp5 =  ::kha::math::Vector2_obj::__new((int)1,(int)0);
HXDLIN( 288)		this->setVertex(verts,(int)2,_hx_tmp4,_hx_tmp5, ::kha::math::Vector4_obj::__new((int)1,(int)1,(int)1,(int)1));
HXLINE( 289)		 ::kha::math::Vector3 _hx_tmp6 =  ::kha::math::Vector3_obj::__new((int)1,(int)1,(int)0);
HXDLIN( 289)		 ::kha::math::Vector2 _hx_tmp7 =  ::kha::math::Vector2_obj::__new((int)1,(int)1);
HXDLIN( 289)		this->setVertex(verts,(int)3,_hx_tmp6,_hx_tmp7, ::kha::math::Vector4_obj::__new((int)1,(int)1,(int)1,(int)1));
HXLINE( 291)		this->vb->unlock();
HXLINE( 293)		this->ib =  ::kha::graphics4::IndexBuffer_obj::__new((int)6,::kha::graphics4::Usage_obj::StaticUsage_dyn(),null());
HXLINE( 294)		HX_VARI( ::Array< Int >,indices) = this->ib->lock();
HXLINE( 296)		indices[(int)0] = (int)0;
HXLINE( 297)		indices[(int)1] = (int)1;
HXLINE( 298)		indices[(int)2] = (int)2;
HXLINE( 299)		indices[(int)3] = (int)1;
HXLINE( 300)		indices[(int)4] = (int)3;
HXLINE( 301)		indices[(int)5] = (int)2;
HXLINE( 304)		this->ib->unlock();
HXLINE( 306)		this->pipeline =  ::kha::graphics4::PipelineState_obj::__new();
HXLINE( 308)		this->pipeline->vertexShader = ::kha::Shaders_obj::painter_image_vert;
HXLINE( 309)		this->pipeline->fragmentShader = ::kha::Shaders_obj::painter_image_frag;
HXLINE( 310)		this->pipeline->inputLayout = ::Array_obj< ::Dynamic>::__new(1)->init(0,structure);
HXLINE( 311)		this->pipeline->compile();
            	}

Dynamic VrInterfaceEmulated_obj::__CreateEmpty() { return new VrInterfaceEmulated_obj; }

hx::ObjectPtr< VrInterfaceEmulated_obj > VrInterfaceEmulated_obj::__new()
{
	hx::ObjectPtr< VrInterfaceEmulated_obj > _hx_result = new VrInterfaceEmulated_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic VrInterfaceEmulated_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VrInterfaceEmulated_obj > _hx_result = new VrInterfaceEmulated_obj();
	_hx_result->__construct();
	return _hx_result;
}

Float VrInterfaceEmulated_obj::degreesToRadians(Float degrees){
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","degreesToRadians",0x4600b5f8,"kha.vr.VrInterfaceEmulated.degreesToRadians","kha/vr/VrInterfaceEmulated.hx",53,0x856b8c18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(degrees,"degrees")
HXLINE(  53)		return ((Float)(degrees * ::Math_obj::PI) / (Float)((Float)180.0));
            	}


HX_DEFINE_DYNAMIC_FUNC1(VrInterfaceEmulated_obj,degreesToRadians,return )

void VrInterfaceEmulated_obj::updateOrientation(){
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","updateOrientation",0x4fdf8ddf,"kha.vr.VrInterfaceEmulated.updateOrientation","kha/vr/VrInterfaceEmulated.hx",57,0x856b8c18)
            	HX_STACK_THIS(this)
HXLINE(  59)		hx::AddEq(this->yawDegrees,this->yawDelta);
HXLINE(  60)		hx::AddEq(this->pitchDegrees,this->pitchDelta);
HXLINE(  62)		Bool _hx_tmp = (this->pitchDegrees < ((Float)-80));
HXDLIN(  62)		if (_hx_tmp) {
HXLINE(  63)			this->pitchDegrees = ((Float)-80);
            		}
HXLINE(  64)		Bool _hx_tmp1 = (this->pitchDegrees > ((Float)80));
HXDLIN(  64)		if (_hx_tmp1) {
HXLINE(  65)			this->pitchDegrees = ((Float)80);
            		}
HXLINE(  70)		 ::kha::math::Vector3 _hx_tmp2 =  ::kha::math::Vector3_obj::__new((int)1,(int)0,(int)0);
HXDLIN(  70)		Float _hx_tmp3 = this->degreesToRadians(this->pitchDegrees);
HXDLIN(  70)		HX_VARI(  ::kha::math::Quaternion,pitchQuat) = ::kha::math::Quaternion_obj::fromAxisAngle(_hx_tmp2,_hx_tmp3);
HXLINE(  72)		 ::kha::math::Vector3 _hx_tmp4 =  ::kha::math::Vector3_obj::__new((int)0,(int)1,(int)0);
HXDLIN(  72)		Float _hx_tmp5 = this->degreesToRadians(this->yawDegrees);
HXDLIN(  72)		HX_VARI(  ::kha::math::Quaternion,yawQuat) = ::kha::math::Quaternion_obj::fromAxisAngle(_hx_tmp4,_hx_tmp5);
HXLINE(  73)		this->orientation = yawQuat->mult(pitchQuat);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VrInterfaceEmulated_obj,updateOrientation,(void))

void VrInterfaceEmulated_obj::buttonEvent(Int button,Float value){
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","buttonEvent",0xf133f960,"kha.vr.VrInterfaceEmulated.buttonEvent","kha/vr/VrInterfaceEmulated.hx",77,0x856b8c18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(button,"button")
            	HX_STACK_ARG(value,"value")
            	}


HX_DEFINE_DYNAMIC_FUNC2(VrInterfaceEmulated_obj,buttonEvent,(void))

void VrInterfaceEmulated_obj::axisEvent(Int axis,Float value){
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","axisEvent",0x5e5f4e51,"kha.vr.VrInterfaceEmulated.axisEvent","kha/vr/VrInterfaceEmulated.hx",81,0x856b8c18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(axis,"axis")
            	HX_STACK_ARG(value,"value")
            	}


HX_DEFINE_DYNAMIC_FUNC2(VrInterfaceEmulated_obj,axisEvent,(void))

void VrInterfaceEmulated_obj::keyDownEvent(::hx::EnumBase key,::String _hx_char){
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","keyDownEvent",0x41c15b21,"kha.vr.VrInterfaceEmulated.keyDownEvent","kha/vr/VrInterfaceEmulated.hx",86,0x856b8c18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(key,"key")
            	HX_STACK_ARG(_hx_char,"char")
HXLINE(  86)		Int _hx_tmp = ( ( ::hx::EnumBase)(key) )->_hx_getIndex();
HXDLIN(  86)		switch((int)(_hx_tmp)){
            			case (int)9: {
HXLINE(  94)				this->pitchDelta = ((Float)2.0);
            			}
            			break;
            			case (int)10: {
HXLINE(  97)				this->pitchDelta = ((Float)-2.);
            			}
            			break;
            			case (int)11: {
HXLINE(  88)				this->yawDelta = ((Float)2.0);
            			}
            			break;
            			case (int)12: {
HXLINE(  91)				this->yawDelta = ((Float)-2.);
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(VrInterfaceEmulated_obj,keyDownEvent,(void))

void VrInterfaceEmulated_obj::keyUpEvent(::hx::EnumBase key,::String _hx_char){
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","keyUpEvent",0xc9923248,"kha.vr.VrInterfaceEmulated.keyUpEvent","kha/vr/VrInterfaceEmulated.hx",107,0x856b8c18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(key,"key")
            	HX_STACK_ARG(_hx_char,"char")
HXLINE( 107)		Int _hx_tmp = ( ( ::hx::EnumBase)(key) )->_hx_getIndex();
HXDLIN( 107)		switch((int)(_hx_tmp)){
            			case (int)9: {
HXLINE( 115)				this->pitchDelta = ((Float)0.0);
            			}
            			break;
            			case (int)10: {
HXLINE( 118)				this->pitchDelta = ((Float)0.0);
            			}
            			break;
            			case (int)11: {
HXLINE( 109)				this->yawDelta = ((Float)0.0);
            			}
            			break;
            			case (int)12: {
HXLINE( 112)				this->yawDelta = ((Float)0.0);
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(VrInterfaceEmulated_obj,keyUpEvent,(void))

void VrInterfaceEmulated_obj::mouseMoveEvent(Int x,Int y,Int movementX,Int movementY){
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","mouseMoveEvent",0xf683f2cc,"kha.vr.VrInterfaceEmulated.mouseMoveEvent","kha/vr/VrInterfaceEmulated.hx",129,0x856b8c18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(movementX,"movementX")
            	HX_STACK_ARG(movementY,"movementY")
HXLINE( 130)		if (!(this->mouseButtonDown)) {
HXLINE( 130)			return;
            		}
HXLINE( 132)		HX_VARI( Int,mouseDeltaX) = (x - this->oldMouseX);
HXLINE( 133)		HX_VARI( Int,mouseDeltaY) = (y - this->oldMouseY);
HXLINE( 134)		this->oldMouseX = x;
HXLINE( 135)		this->oldMouseY = y;
HXLINE( 138)		hx::AddEq(this->yawDegrees,(mouseDeltaX * ((Float)0.1)));
HXLINE( 139)		hx::AddEq(this->pitchDegrees,(mouseDeltaY * ((Float)0.1)));
HXLINE( 141)		Bool _hx_tmp = (this->pitchDegrees < ((Float)-80));
HXDLIN( 141)		if (_hx_tmp) {
HXLINE( 142)			this->pitchDegrees = ((Float)-80);
            		}
HXLINE( 143)		Bool _hx_tmp1 = (this->pitchDegrees > ((Float)80));
HXDLIN( 143)		if (_hx_tmp1) {
HXLINE( 144)			this->pitchDegrees = ((Float)80);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(VrInterfaceEmulated_obj,mouseMoveEvent,(void))

void VrInterfaceEmulated_obj::mouseButtonDownEvent(Int button,Int x,Int y){
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","mouseButtonDownEvent",0xcb48abc9,"kha.vr.VrInterfaceEmulated.mouseButtonDownEvent","kha/vr/VrInterfaceEmulated.hx",150,0x856b8c18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(button,"button")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE( 150)		if ((button == (int)0)) {
HXLINE( 151)			this->mouseButtonDown = true;
HXLINE( 152)			this->oldMouseX = x;
HXLINE( 153)			this->oldMouseY = y;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(VrInterfaceEmulated_obj,mouseButtonDownEvent,(void))

void VrInterfaceEmulated_obj::mouseButtonUpEvent(Int button,Int x,Int y){
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","mouseButtonUpEvent",0x73d888f0,"kha.vr.VrInterfaceEmulated.mouseButtonUpEvent","kha/vr/VrInterfaceEmulated.hx",158,0x856b8c18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(button,"button")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE( 158)		if ((button == (int)0)) {
HXLINE( 159)			this->mouseButtonDown = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(VrInterfaceEmulated_obj,mouseButtonUpEvent,(void))

 ::kha::vr::SensorState VrInterfaceEmulated_obj::GetSensorState(){
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","GetSensorState",0x2d744709,"kha.vr.VrInterfaceEmulated.GetSensorState","kha/vr/VrInterfaceEmulated.hx",168,0x856b8c18)
            	HX_STACK_THIS(this)
HXLINE( 168)		return this->GetPredictedSensorState(((Float)0.0));
            	}


 ::kha::vr::SensorState VrInterfaceEmulated_obj::GetPredictedSensorState(Float time){
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","GetPredictedSensorState",0x7876e4cd,"kha.vr.VrInterfaceEmulated.GetPredictedSensorState","kha/vr/VrInterfaceEmulated.hx",173,0x856b8c18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(time,"time")
HXLINE( 175)		this->updateOrientation();
HXLINE( 177)		HX_VARI(  ::kha::vr::SensorState,result) =  ::kha::vr::SensorState_obj::__new();
HXLINE( 179)		result->Status = (int)0;
HXLINE( 180)		result->Temperature = (int)75;
HXLINE( 181)		result->Predicted =  ::kha::vr::PoseState_obj::__new();
HXLINE( 182)		result->Recorded = result->Predicted;
HXLINE( 184)		result->Predicted->AngularAcceleration =  ::kha::math::Vector3_obj::__new(null(),null(),null());
HXLINE( 185)		result->Predicted->AngularVelocity =  ::kha::math::Vector3_obj::__new(null(),null(),null());
HXLINE( 186)		result->Predicted->LinearAcceleration =  ::kha::math::Vector3_obj::__new(null(),null(),null());
HXLINE( 187)		result->Predicted->LinearVelocity =  ::kha::math::Vector3_obj::__new(null(),null(),null());
HXLINE( 188)		result->Predicted->TimeInSeconds = time;
HXLINE( 189)		result->Predicted->Pose =  ::kha::vr::Pose_obj::__new();
HXLINE( 190)		result->Predicted->Pose->Orientation = this->orientation;
HXLINE( 191)		result->Predicted->Pose->Position =  ::kha::math::Vector3_obj::__new(null(),null(),null());
HXLINE( 195)		return result;
            	}


void VrInterfaceEmulated_obj::WarpSwapBlack(){
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","WarpSwapBlack",0x6a38f13c,"kha.vr.VrInterfaceEmulated.WarpSwapBlack","kha/vr/VrInterfaceEmulated.hx",200,0x856b8c18)
            	HX_STACK_THIS(this)
            	}


void VrInterfaceEmulated_obj::WarpSwapLoadingIcon(){
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","WarpSwapLoadingIcon",0x01b62752,"kha.vr.VrInterfaceEmulated.WarpSwapLoadingIcon","kha/vr/VrInterfaceEmulated.hx",206,0x856b8c18)
            	HX_STACK_THIS(this)
            	}


void VrInterfaceEmulated_obj::WarpSwap( ::kha::vr::TimeWarpParms parms){
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","WarpSwap",0x6b1ff983,"kha.vr.VrInterfaceEmulated.WarpSwap","kha/vr/VrInterfaceEmulated.hx",211,0x856b8c18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(parms,"parms")
HXLINE( 213)		HX_VARI( ::Dynamic,g) = this->framebuffer->get_g4();
HXLINE( 214)		::kha::graphics4::Graphics_obj::begin(g,null());
HXLINE( 215)		::kha::graphics4::Graphics_obj::setPipeline(g,this->pipeline);
HXLINE( 216)		::kha::graphics4::Graphics_obj::setVertexBuffer(g,this->vb);
HXLINE( 217)		::kha::graphics4::Graphics_obj::setIndexBuffer(g,this->ib);
HXLINE( 218)		HX_VARI( ::Dynamic,matrixLocation) = this->pipeline->getConstantLocation(HX_("projectionMatrix",30,88,bb,d0));
HXLINE( 220)		::kha::graphics4::Graphics_obj::setMatrix(g,matrixLocation, ::kha::math::FastMatrix4_obj::__new((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1));
HXLINE( 221)		HX_VARI( ::Dynamic,texture) = this->pipeline->getTextureUnit(HX_("tex",e7,5d,58,00));
HXLINE( 223)		::kha::graphics4::Graphics_obj::setTexture(g,texture,parms->RightImage->Image);
HXLINE( 224)		::kha::graphics4::Graphics_obj::drawIndexedVertices(g,null(),null());
HXLINE( 232)		::kha::graphics4::Graphics_obj::end(g);
            	}


Float VrInterfaceEmulated_obj::GetTimeInSeconds(){
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","GetTimeInSeconds",0xdfb4915f,"kha.vr.VrInterfaceEmulated.GetTimeInSeconds","kha/vr/VrInterfaceEmulated.hx",240,0x856b8c18)
            	HX_STACK_THIS(this)
HXLINE( 240)		return ::kha::System_obj::get_time();
            	}


void VrInterfaceEmulated_obj::setVertex( ::kha::arrays::Float32Array a,Int index, ::kha::math::Vector3 pos, ::kha::math::Vector2 uv, ::kha::math::Vector4 color){
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","setVertex",0x8fe5eb3e,"kha.vr.VrInterfaceEmulated.setVertex","kha/vr/VrInterfaceEmulated.hx",249,0x856b8c18)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(index,"index")
            	HX_STACK_ARG(pos,"pos")
            	HX_STACK_ARG(uv,"uv")
            	HX_STACK_ARG(color,"color")
HXLINE( 250)		HX_VARI( Int,base) = (index * (int)9);
HXLINE( 251)		{
HXLINE( 251)			float value = pos->x;
HXDLIN( 251)			a->data.set(base,value);
            		}
HXLINE( 252)		{
HXLINE( 252)			float value1 = pos->y;
HXDLIN( 252)			a->data.set((base + (int)1),value1);
            		}
HXLINE( 253)		{
HXLINE( 253)			float value2 = pos->z;
HXDLIN( 253)			a->data.set((base + (int)2),value2);
            		}
HXLINE( 254)		hx::AddEq(base,(int)3);
HXLINE( 255)		{
HXLINE( 255)			float value3 = uv->x;
HXDLIN( 255)			a->data.set(base,value3);
            		}
HXLINE( 256)		{
HXLINE( 256)			float value4 = uv->y;
HXDLIN( 256)			a->data.set((base + (int)1),value4);
            		}
HXLINE( 257)		hx::AddEq(base,(int)2);
HXLINE( 258)		{
HXLINE( 258)			float value5 = color->x;
HXDLIN( 258)			a->data.set(base,value5);
            		}
HXLINE( 259)		{
HXLINE( 259)			float value6 = color->y;
HXDLIN( 259)			a->data.set((base + (int)1),value6);
            		}
HXLINE( 260)		{
HXLINE( 260)			float value7 = color->z;
HXDLIN( 260)			a->data.set((base + (int)2),value7);
            		}
HXLINE( 261)		{
HXLINE( 261)			float value8 = color->w;
HXDLIN( 261)			a->data.set((base + (int)3),value8);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(VrInterfaceEmulated_obj,setVertex,(void))

Float VrInterfaceEmulated_obj::keyboardSpeed;

Float VrInterfaceEmulated_obj::mouseSpeed;

Float VrInterfaceEmulated_obj::minPitchDegrees;

Float VrInterfaceEmulated_obj::maxPitchDegrees;


VrInterfaceEmulated_obj::VrInterfaceEmulated_obj()
{
}

void VrInterfaceEmulated_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VrInterfaceEmulated);
	HX_MARK_MEMBER_NAME(framebuffer,"framebuffer");
	HX_MARK_MEMBER_NAME(orientation,"orientation");
	HX_MARK_MEMBER_NAME(pitchDegrees,"pitchDegrees");
	HX_MARK_MEMBER_NAME(yawDegrees,"yawDegrees");
	HX_MARK_MEMBER_NAME(pitchDelta,"pitchDelta");
	HX_MARK_MEMBER_NAME(yawDelta,"yawDelta");
	HX_MARK_MEMBER_NAME(oldMouseX,"oldMouseX");
	HX_MARK_MEMBER_NAME(oldMouseY,"oldMouseY");
	HX_MARK_MEMBER_NAME(mouseButtonDown,"mouseButtonDown");
	HX_MARK_MEMBER_NAME(vb,"vb");
	HX_MARK_MEMBER_NAME(ib,"ib");
	HX_MARK_MEMBER_NAME(pipeline,"pipeline");
	HX_MARK_END_CLASS();
}

void VrInterfaceEmulated_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(framebuffer,"framebuffer");
	HX_VISIT_MEMBER_NAME(orientation,"orientation");
	HX_VISIT_MEMBER_NAME(pitchDegrees,"pitchDegrees");
	HX_VISIT_MEMBER_NAME(yawDegrees,"yawDegrees");
	HX_VISIT_MEMBER_NAME(pitchDelta,"pitchDelta");
	HX_VISIT_MEMBER_NAME(yawDelta,"yawDelta");
	HX_VISIT_MEMBER_NAME(oldMouseX,"oldMouseX");
	HX_VISIT_MEMBER_NAME(oldMouseY,"oldMouseY");
	HX_VISIT_MEMBER_NAME(mouseButtonDown,"mouseButtonDown");
	HX_VISIT_MEMBER_NAME(vb,"vb");
	HX_VISIT_MEMBER_NAME(ib,"ib");
	HX_VISIT_MEMBER_NAME(pipeline,"pipeline");
}

hx::Val VrInterfaceEmulated_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"vb") ) { return hx::Val( vb); }
		if (HX_FIELD_EQ(inName,"ib") ) { return hx::Val( ib); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"yawDelta") ) { return hx::Val( yawDelta); }
		if (HX_FIELD_EQ(inName,"WarpSwap") ) { return hx::Val( WarpSwap_dyn()); }
		if (HX_FIELD_EQ(inName,"pipeline") ) { return hx::Val( pipeline); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"axisEvent") ) { return hx::Val( axisEvent_dyn()); }
		if (HX_FIELD_EQ(inName,"oldMouseX") ) { return hx::Val( oldMouseX); }
		if (HX_FIELD_EQ(inName,"oldMouseY") ) { return hx::Val( oldMouseY); }
		if (HX_FIELD_EQ(inName,"setVertex") ) { return hx::Val( setVertex_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"yawDegrees") ) { return hx::Val( yawDegrees); }
		if (HX_FIELD_EQ(inName,"pitchDelta") ) { return hx::Val( pitchDelta); }
		if (HX_FIELD_EQ(inName,"keyUpEvent") ) { return hx::Val( keyUpEvent_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { return hx::Val( framebuffer); }
		if (HX_FIELD_EQ(inName,"orientation") ) { return hx::Val( orientation); }
		if (HX_FIELD_EQ(inName,"buttonEvent") ) { return hx::Val( buttonEvent_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pitchDegrees") ) { return hx::Val( pitchDegrees); }
		if (HX_FIELD_EQ(inName,"keyDownEvent") ) { return hx::Val( keyDownEvent_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"WarpSwapBlack") ) { return hx::Val( WarpSwapBlack_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouseMoveEvent") ) { return hx::Val( mouseMoveEvent_dyn()); }
		if (HX_FIELD_EQ(inName,"GetSensorState") ) { return hx::Val( GetSensorState_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mouseButtonDown") ) { return hx::Val( mouseButtonDown); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"degreesToRadians") ) { return hx::Val( degreesToRadians_dyn()); }
		if (HX_FIELD_EQ(inName,"GetTimeInSeconds") ) { return hx::Val( GetTimeInSeconds_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateOrientation") ) { return hx::Val( updateOrientation_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"mouseButtonUpEvent") ) { return hx::Val( mouseButtonUpEvent_dyn()); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"WarpSwapLoadingIcon") ) { return hx::Val( WarpSwapLoadingIcon_dyn()); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"mouseButtonDownEvent") ) { return hx::Val( mouseButtonDownEvent_dyn()); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"GetPredictedSensorState") ) { return hx::Val( GetPredictedSensorState_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val VrInterfaceEmulated_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"vb") ) { vb=inValue.Cast<  ::kha::graphics4::VertexBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ib") ) { ib=inValue.Cast<  ::kha::graphics4::IndexBuffer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"yawDelta") ) { yawDelta=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pipeline") ) { pipeline=inValue.Cast<  ::kha::graphics4::PipelineState >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"oldMouseX") ) { oldMouseX=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oldMouseY") ) { oldMouseY=inValue.Cast< Int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"yawDegrees") ) { yawDegrees=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pitchDelta") ) { pitchDelta=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { framebuffer=inValue.Cast<  ::kha::Framebuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"orientation") ) { orientation=inValue.Cast<  ::kha::math::Quaternion >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pitchDegrees") ) { pitchDegrees=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mouseButtonDown") ) { mouseButtonDown=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VrInterfaceEmulated_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"));
	outFields->push(HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"));
	outFields->push(HX_HCSTRING("pitchDegrees","\xc7","\x47","\x3e","\x98"));
	outFields->push(HX_HCSTRING("yawDegrees","\xb8","\x89","\xca","\x6e"));
	outFields->push(HX_HCSTRING("pitchDelta","\x18","\x04","\xb3","\xa4"));
	outFields->push(HX_HCSTRING("yawDelta","\xc9","\x37","\x46","\xc9"));
	outFields->push(HX_HCSTRING("oldMouseX","\x9a","\xce","\xf9","\xd6"));
	outFields->push(HX_HCSTRING("oldMouseY","\x9b","\xce","\xf9","\xd6"));
	outFields->push(HX_HCSTRING("mouseButtonDown","\xf9","\x81","\x17","\xbd"));
	outFields->push(HX_HCSTRING("vb","\x2c","\x67","\x00","\x00"));
	outFields->push(HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("pipeline","\x22","\xbb","\x83","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo VrInterfaceEmulated_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::Framebuffer*/ ,(int)offsetof(VrInterfaceEmulated_obj,framebuffer),HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a")},
	{hx::fsObject /*::kha::math::Quaternion*/ ,(int)offsetof(VrInterfaceEmulated_obj,orientation),HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd")},
	{hx::fsFloat,(int)offsetof(VrInterfaceEmulated_obj,pitchDegrees),HX_HCSTRING("pitchDegrees","\xc7","\x47","\x3e","\x98")},
	{hx::fsFloat,(int)offsetof(VrInterfaceEmulated_obj,yawDegrees),HX_HCSTRING("yawDegrees","\xb8","\x89","\xca","\x6e")},
	{hx::fsFloat,(int)offsetof(VrInterfaceEmulated_obj,pitchDelta),HX_HCSTRING("pitchDelta","\x18","\x04","\xb3","\xa4")},
	{hx::fsFloat,(int)offsetof(VrInterfaceEmulated_obj,yawDelta),HX_HCSTRING("yawDelta","\xc9","\x37","\x46","\xc9")},
	{hx::fsInt,(int)offsetof(VrInterfaceEmulated_obj,oldMouseX),HX_HCSTRING("oldMouseX","\x9a","\xce","\xf9","\xd6")},
	{hx::fsInt,(int)offsetof(VrInterfaceEmulated_obj,oldMouseY),HX_HCSTRING("oldMouseY","\x9b","\xce","\xf9","\xd6")},
	{hx::fsBool,(int)offsetof(VrInterfaceEmulated_obj,mouseButtonDown),HX_HCSTRING("mouseButtonDown","\xf9","\x81","\x17","\xbd")},
	{hx::fsObject /*::kha::graphics4::VertexBuffer*/ ,(int)offsetof(VrInterfaceEmulated_obj,vb),HX_HCSTRING("vb","\x2c","\x67","\x00","\x00")},
	{hx::fsObject /*::kha::graphics4::IndexBuffer*/ ,(int)offsetof(VrInterfaceEmulated_obj,ib),HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00")},
	{hx::fsObject /*::kha::graphics4::PipelineState*/ ,(int)offsetof(VrInterfaceEmulated_obj,pipeline),HX_HCSTRING("pipeline","\x22","\xbb","\x83","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo VrInterfaceEmulated_obj_sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &VrInterfaceEmulated_obj::keyboardSpeed,HX_HCSTRING("keyboardSpeed","\x60","\x0d","\x3d","\x55")},
	{hx::fsFloat,(void *) &VrInterfaceEmulated_obj::mouseSpeed,HX_HCSTRING("mouseSpeed","\x22","\x8b","\x36","\x9f")},
	{hx::fsFloat,(void *) &VrInterfaceEmulated_obj::minPitchDegrees,HX_HCSTRING("minPitchDegrees","\x79","\xb8","\x40","\xa1")},
	{hx::fsFloat,(void *) &VrInterfaceEmulated_obj::maxPitchDegrees,HX_HCSTRING("maxPitchDegrees","\x8b","\x04","\x5b","\x45")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String VrInterfaceEmulated_obj_sMemberFields[] = {
	HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"),
	HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"),
	HX_HCSTRING("pitchDegrees","\xc7","\x47","\x3e","\x98"),
	HX_HCSTRING("yawDegrees","\xb8","\x89","\xca","\x6e"),
	HX_HCSTRING("pitchDelta","\x18","\x04","\xb3","\xa4"),
	HX_HCSTRING("yawDelta","\xc9","\x37","\x46","\xc9"),
	HX_HCSTRING("degreesToRadians","\x90","\x4d","\x9c","\x1b"),
	HX_HCSTRING("updateOrientation","\x47","\x9b","\x68","\x62"),
	HX_HCSTRING("buttonEvent","\xc8","\x88","\x6f","\xc3"),
	HX_HCSTRING("axisEvent","\xb9","\xb3","\x68","\xcf"),
	HX_HCSTRING("keyDownEvent","\xb9","\x46","\xa3","\x63"),
	HX_HCSTRING("keyUpEvent","\xe0","\x87","\xc1","\x40"),
	HX_HCSTRING("oldMouseX","\x9a","\xce","\xf9","\xd6"),
	HX_HCSTRING("oldMouseY","\x9b","\xce","\xf9","\xd6"),
	HX_HCSTRING("mouseMoveEvent","\x64","\xf4","\x69","\xc5"),
	HX_HCSTRING("mouseButtonDown","\xf9","\x81","\x17","\xbd"),
	HX_HCSTRING("mouseButtonDownEvent","\x61","\xef","\xe3","\x10"),
	HX_HCSTRING("mouseButtonUpEvent","\x88","\x36","\x3b","\x99"),
	HX_HCSTRING("GetSensorState","\xa1","\x48","\x5a","\xfc"),
	HX_HCSTRING("GetPredictedSensorState","\x35","\xf0","\x7f","\x13"),
	HX_HCSTRING("WarpSwapBlack","\xa4","\x2a","\x05","\xee"),
	HX_HCSTRING("WarpSwapLoadingIcon","\xba","\x5e","\xab","\x92"),
	HX_HCSTRING("WarpSwap","\x1b","\x39","\x8e","\x7a"),
	HX_HCSTRING("GetTimeInSeconds","\xf7","\x28","\x50","\xb5"),
	HX_HCSTRING("vb","\x2c","\x67","\x00","\x00"),
	HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00"),
	HX_HCSTRING("pipeline","\x22","\xbb","\x83","\x4b"),
	HX_HCSTRING("setVertex","\xa6","\x50","\xef","\x00"),
	::String(null()) };

static void VrInterfaceEmulated_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VrInterfaceEmulated_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(VrInterfaceEmulated_obj::keyboardSpeed,"keyboardSpeed");
	HX_MARK_MEMBER_NAME(VrInterfaceEmulated_obj::mouseSpeed,"mouseSpeed");
	HX_MARK_MEMBER_NAME(VrInterfaceEmulated_obj::minPitchDegrees,"minPitchDegrees");
	HX_MARK_MEMBER_NAME(VrInterfaceEmulated_obj::maxPitchDegrees,"maxPitchDegrees");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VrInterfaceEmulated_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VrInterfaceEmulated_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VrInterfaceEmulated_obj::keyboardSpeed,"keyboardSpeed");
	HX_VISIT_MEMBER_NAME(VrInterfaceEmulated_obj::mouseSpeed,"mouseSpeed");
	HX_VISIT_MEMBER_NAME(VrInterfaceEmulated_obj::minPitchDegrees,"minPitchDegrees");
	HX_VISIT_MEMBER_NAME(VrInterfaceEmulated_obj::maxPitchDegrees,"maxPitchDegrees");
};

#endif

hx::Class VrInterfaceEmulated_obj::__mClass;

static ::String VrInterfaceEmulated_obj_sStaticFields[] = {
	HX_HCSTRING("keyboardSpeed","\x60","\x0d","\x3d","\x55"),
	HX_HCSTRING("mouseSpeed","\x22","\x8b","\x36","\x9f"),
	HX_HCSTRING("minPitchDegrees","\x79","\xb8","\x40","\xa1"),
	HX_HCSTRING("maxPitchDegrees","\x8b","\x04","\x5b","\x45"),
	::String(null())
};

void VrInterfaceEmulated_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.vr.VrInterfaceEmulated","\x06","\x4d","\x1c","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VrInterfaceEmulated_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(VrInterfaceEmulated_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VrInterfaceEmulated_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VrInterfaceEmulated_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VrInterfaceEmulated_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VrInterfaceEmulated_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VrInterfaceEmulated_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void VrInterfaceEmulated_obj::__boot()
{
{
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","boot",0x3ddaf09a,"kha.vr.VrInterfaceEmulated.boot","kha/vr/VrInterfaceEmulated.hx",45,0x856b8c18)
HXLINE(  45)		keyboardSpeed = ((Float)2.0);
            	}
{
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","boot",0x3ddaf09a,"kha.vr.VrInterfaceEmulated.boot","kha/vr/VrInterfaceEmulated.hx",47,0x856b8c18)
HXLINE(  47)		mouseSpeed = ((Float)0.1);
            	}
{
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","boot",0x3ddaf09a,"kha.vr.VrInterfaceEmulated.boot","kha/vr/VrInterfaceEmulated.hx",49,0x856b8c18)
HXLINE(  49)		minPitchDegrees = ((Float)-80);
            	}
{
            	HX_STACK_FRAME("kha.vr.VrInterfaceEmulated","boot",0x3ddaf09a,"kha.vr.VrInterfaceEmulated.boot","kha/vr/VrInterfaceEmulated.hx",50,0x856b8c18)
HXLINE(  50)		maxPitchDegrees = ((Float)80);
            	}
}

} // end namespace kha
} // end namespace vr