// Generated by Haxe 3.3.0
package kha;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Shaders extends haxe.lang.HxObject
{
	static
	{
		//line 33 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Shaders.hx"
		kha.Shaders.painter_colored_fragData = "s190:I3ZlcnNpb24gMTAwCnByZWNpc2lvbiBtZWRpdW1wIGZsb2F0OwpwcmVjaXNpb24gaGlnaHAgaW50OwoKdmFyeWluZyB2ZWM0IGZyYWdtZW50Q29sb3I7Cgp2b2lkIG1haW4oKQp7CiAgICBnbF9GcmFnRGF0YVswXSA9IGZyYWdtZW50Q29sb3I7Cn0KCg";
		//line 33 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Shaders.hx"
		kha.Shaders.painter_colored_frag = null;
		//line 33 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Shaders.hx"
		kha.Shaders.painter_colored_vertData = "s334:I3ZlcnNpb24gMTAwCgp1bmlmb3JtIG1hdDQgcHJvamVjdGlvbk1hdHJpeDsKCmF0dHJpYnV0ZSB2ZWMzIHZlcnRleFBvc2l0aW9uOwp2YXJ5aW5nIHZlYzQgZnJhZ21lbnRDb2xvcjsKYXR0cmlidXRlIHZlYzQgdmVydGV4Q29sb3I7Cgp2b2lkIG1haW4oKQp7CiAgICBnbF9Qb3NpdGlvbiA9IChwcm9qZWN0aW9uTWF0cml4ICogdmVjNCh2ZXJ0ZXhQb3NpdGlvbiwgMS4wKSk7CiAgICBmcmFnbWVudENvbG9yID0gdmVydGV4Q29sb3I7Cn0KCg";
		//line 33 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Shaders.hx"
		kha.Shaders.painter_colored_vert = null;
		//line 33 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Shaders.hx"
		kha.Shaders.painter_image_fragData = "s444:I3ZlcnNpb24gMTAwCnByZWNpc2lvbiBtZWRpdW1wIGZsb2F0OwpwcmVjaXNpb24gaGlnaHAgaW50OwoKdW5pZm9ybSBtZWRpdW1wIHNhbXBsZXIyRCB0ZXg7Cgp2YXJ5aW5nIHZlYzIgdGV4Q29vcmQ7CnZhcnlpbmcgdmVjNCBjb2xvcjsKCnZvaWQgbWFpbigpCnsKICAgIHZlYzQgdGV4Y29sb3IgPSAodGV4dHVyZTJEKHRleCwgdGV4Q29vcmQpICogY29sb3IpOwogICAgdmVjMyBfMzIgPSB0ZXhjb2xvci54eXogKiBjb2xvci53OwogICAgdGV4Y29sb3IgPSB2ZWM0KF8zMi54LCBfMzIueSwgXzMyLnosIHRleGNvbG9yLncpOwogICAgZ2xfRnJhZ0RhdGFbMF0gPSB0ZXhjb2xvcjsKfQoK";
		//line 33 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Shaders.hx"
		kha.Shaders.painter_image_frag = null;
		//line 33 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Shaders.hx"
		kha.Shaders.painter_image_vertData = "s418:I3ZlcnNpb24gMTAwCgp1bmlmb3JtIG1hdDQgcHJvamVjdGlvbk1hdHJpeDsKCmF0dHJpYnV0ZSB2ZWMzIHZlcnRleFBvc2l0aW9uOwp2YXJ5aW5nIHZlYzIgdGV4Q29vcmQ7CmF0dHJpYnV0ZSB2ZWMyIHRleFBvc2l0aW9uOwp2YXJ5aW5nIHZlYzQgY29sb3I7CmF0dHJpYnV0ZSB2ZWM0IHZlcnRleENvbG9yOwoKdm9pZCBtYWluKCkKewogICAgZ2xfUG9zaXRpb24gPSAocHJvamVjdGlvbk1hdHJpeCAqIHZlYzQodmVydGV4UG9zaXRpb24sIDEuMCkpOwogICAgdGV4Q29vcmQgPSB0ZXhQb3NpdGlvbjsKICAgIGNvbG9yID0gdmVydGV4Q29sb3I7Cn0KCg";
		//line 33 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Shaders.hx"
		kha.Shaders.painter_image_vert = null;
		//line 33 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Shaders.hx"
		kha.Shaders.painter_text_fragData = "s340:I3ZlcnNpb24gMTAwCnByZWNpc2lvbiBtZWRpdW1wIGZsb2F0OwpwcmVjaXNpb24gaGlnaHAgaW50OwoKdW5pZm9ybSBtZWRpdW1wIHNhbXBsZXIyRCB0ZXg7Cgp2YXJ5aW5nIHZlYzQgZnJhZ21lbnRDb2xvcjsKdmFyeWluZyB2ZWMyIHRleENvb3JkOwoKdm9pZCBtYWluKCkKewogICAgZ2xfRnJhZ0RhdGFbMF0gPSB2ZWM0KGZyYWdtZW50Q29sb3IueHl6LCAodGV4dHVyZTJEKHRleCwgdGV4Q29vcmQpLnggKiBmcmFnbWVudENvbG9yLncpKTsKfQoK";
		//line 33 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Shaders.hx"
		kha.Shaders.painter_text_frag = null;
		//line 33 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Shaders.hx"
		kha.Shaders.painter_text_vertData = "s439:I3ZlcnNpb24gMTAwCgp1bmlmb3JtIG1hdDQgcHJvamVjdGlvbk1hdHJpeDsKCmF0dHJpYnV0ZSB2ZWMzIHZlcnRleFBvc2l0aW9uOwp2YXJ5aW5nIHZlYzIgdGV4Q29vcmQ7CmF0dHJpYnV0ZSB2ZWMyIHRleFBvc2l0aW9uOwp2YXJ5aW5nIHZlYzQgZnJhZ21lbnRDb2xvcjsKYXR0cmlidXRlIHZlYzQgdmVydGV4Q29sb3I7Cgp2b2lkIG1haW4oKQp7CiAgICBnbF9Qb3NpdGlvbiA9IChwcm9qZWN0aW9uTWF0cml4ICogdmVjNCh2ZXJ0ZXhQb3NpdGlvbiwgMS4wKSk7CiAgICB0ZXhDb29yZCA9IHRleFBvc2l0aW9uOwogICAgZnJhZ21lbnRDb2xvciA9IHZlcnRleENvbG9yOwp9Cgo";
		//line 33 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Shaders.hx"
		kha.Shaders.painter_text_vert = null;
		//line 33 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Shaders.hx"
		kha.Shaders.painter_video_fragData = "s444:I3ZlcnNpb24gMTAwCnByZWNpc2lvbiBtZWRpdW1wIGZsb2F0OwpwcmVjaXNpb24gaGlnaHAgaW50OwoKdW5pZm9ybSBtZWRpdW1wIHNhbXBsZXIyRCB0ZXg7Cgp2YXJ5aW5nIHZlYzIgdGV4Q29vcmQ7CnZhcnlpbmcgdmVjNCBjb2xvcjsKCnZvaWQgbWFpbigpCnsKICAgIHZlYzQgdGV4Y29sb3IgPSAodGV4dHVyZTJEKHRleCwgdGV4Q29vcmQpICogY29sb3IpOwogICAgdmVjMyBfMzIgPSB0ZXhjb2xvci54eXogKiBjb2xvci53OwogICAgdGV4Y29sb3IgPSB2ZWM0KF8zMi54LCBfMzIueSwgXzMyLnosIHRleGNvbG9yLncpOwogICAgZ2xfRnJhZ0RhdGFbMF0gPSB0ZXhjb2xvcjsKfQoK";
		//line 33 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Shaders.hx"
		kha.Shaders.painter_video_frag = null;
		//line 33 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Shaders.hx"
		kha.Shaders.painter_video_vertData = "s418:I3ZlcnNpb24gMTAwCgp1bmlmb3JtIG1hdDQgcHJvamVjdGlvbk1hdHJpeDsKCmF0dHJpYnV0ZSB2ZWMzIHZlcnRleFBvc2l0aW9uOwp2YXJ5aW5nIHZlYzIgdGV4Q29vcmQ7CmF0dHJpYnV0ZSB2ZWMyIHRleFBvc2l0aW9uOwp2YXJ5aW5nIHZlYzQgY29sb3I7CmF0dHJpYnV0ZSB2ZWM0IHZlcnRleENvbG9yOwoKdm9pZCBtYWluKCkKewogICAgZ2xfUG9zaXRpb24gPSAocHJvamVjdGlvbk1hdHJpeCAqIHZlYzQodmVydGV4UG9zaXRpb24sIDEuMCkpOwogICAgdGV4Q29vcmQgPSB0ZXhQb3NpdGlvbjsKICAgIGNvbG9yID0gdmVydGV4Q29sb3I7Cn0KCg";
		//line 33 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Shaders.hx"
		kha.Shaders.painter_video_vert = null;
	}
	
	public Shaders(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Shaders()
	{
		//line 34 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Shaders.hx"
		kha.Shaders.__hx_ctor_kha_Shaders(this);
	}
	
	
	public static void __hx_ctor_kha_Shaders(kha.Shaders __temp_me80)
	{
	}
	
	
	public static java.lang.String painter_colored_fragData;
	
	public static kha.graphics4.FragmentShader painter_colored_frag;
	
	public static java.lang.String painter_colored_vertData;
	
	public static kha.graphics4.VertexShader painter_colored_vert;
	
	public static java.lang.String painter_image_fragData;
	
	public static kha.graphics4.FragmentShader painter_image_frag;
	
	public static java.lang.String painter_image_vertData;
	
	public static kha.graphics4.VertexShader painter_image_vert;
	
	public static java.lang.String painter_text_fragData;
	
	public static kha.graphics4.FragmentShader painter_text_frag;
	
	public static java.lang.String painter_text_vertData;
	
	public static kha.graphics4.VertexShader painter_text_vert;
	
	public static java.lang.String painter_video_fragData;
	
	public static kha.graphics4.FragmentShader painter_video_frag;
	
	public static java.lang.String painter_video_vertData;
	
	public static kha.graphics4.VertexShader painter_video_vert;
	
	public static void init()
	{
		//line 142 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
		{
			//line 123 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
			{
				//line 142 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
				{
					//line 123 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
					{
						//line 142 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
						{
							//line 123 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
							{
								//line 144 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
								{
									//line 145 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
									java.lang.String data = haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(kha.Shaders.class, "painter_colored_fragData", false));
									//line 146 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
									haxe.io.Bytes bytes = ((haxe.io.Bytes) (haxe.Unserializer.run(data)) );
									//line 147 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
									kha.Shaders.painter_colored_frag = new kha.graphics4.FragmentShader(kha.internal.BytesBlob.fromBytes(bytes), "painter_colored_frag");
								}
								
								//line 125 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
								{
									//line 126 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
									java.lang.String data1 = haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(kha.Shaders.class, "painter_colored_vertData", false));
									//line 127 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
									haxe.io.Bytes bytes1 = ((haxe.io.Bytes) (haxe.Unserializer.run(data1)) );
									//line 128 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
									kha.Shaders.painter_colored_vert = new kha.graphics4.VertexShader(kha.internal.BytesBlob.fromBytes(bytes1), "painter_colored_vert");
								}
								
							}
							
							//line 144 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
							{
								//line 145 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
								java.lang.String data2 = haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(kha.Shaders.class, "painter_image_fragData", false));
								//line 146 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
								haxe.io.Bytes bytes2 = ((haxe.io.Bytes) (haxe.Unserializer.run(data2)) );
								//line 147 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
								kha.Shaders.painter_image_frag = new kha.graphics4.FragmentShader(kha.internal.BytesBlob.fromBytes(bytes2), "painter_image_frag");
							}
							
						}
						
						//line 125 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
						{
							//line 126 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
							java.lang.String data3 = haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(kha.Shaders.class, "painter_image_vertData", false));
							//line 127 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
							haxe.io.Bytes bytes3 = ((haxe.io.Bytes) (haxe.Unserializer.run(data3)) );
							//line 128 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
							kha.Shaders.painter_image_vert = new kha.graphics4.VertexShader(kha.internal.BytesBlob.fromBytes(bytes3), "painter_image_vert");
						}
						
					}
					
					//line 144 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
					{
						//line 145 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
						java.lang.String data4 = haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(kha.Shaders.class, "painter_text_fragData", false));
						//line 146 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
						haxe.io.Bytes bytes4 = ((haxe.io.Bytes) (haxe.Unserializer.run(data4)) );
						//line 147 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
						kha.Shaders.painter_text_frag = new kha.graphics4.FragmentShader(kha.internal.BytesBlob.fromBytes(bytes4), "painter_text_frag");
					}
					
				}
				
				//line 125 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
				{
					//line 126 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
					java.lang.String data5 = haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(kha.Shaders.class, "painter_text_vertData", false));
					//line 127 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
					haxe.io.Bytes bytes5 = ((haxe.io.Bytes) (haxe.Unserializer.run(data5)) );
					//line 128 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
					kha.Shaders.painter_text_vert = new kha.graphics4.VertexShader(kha.internal.BytesBlob.fromBytes(bytes5), "painter_text_vert");
				}
				
			}
			
			//line 144 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
			{
				//line 145 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
				java.lang.String data6 = haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(kha.Shaders.class, "painter_video_fragData", false));
				//line 146 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
				haxe.io.Bytes bytes6 = ((haxe.io.Bytes) (haxe.Unserializer.run(data6)) );
				//line 147 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
				kha.Shaders.painter_video_frag = new kha.graphics4.FragmentShader(kha.internal.BytesBlob.fromBytes(bytes6), "painter_video_frag");
			}
			
		}
		
		//line 125 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
		{
			//line 126 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
			java.lang.String data7 = haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(kha.Shaders.class, "painter_video_vertData", false));
			//line 127 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
			haxe.io.Bytes bytes7 = ((haxe.io.Bytes) (haxe.Unserializer.run(data7)) );
			//line 128 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/internal/ShadersBuilder.hx"
			kha.Shaders.painter_video_vert = new kha.graphics4.VertexShader(kha.internal.BytesBlob.fromBytes(bytes7), "painter_video_vert");
		}
		
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 34 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Shaders.hx"
		return new kha.Shaders(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 34 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Shaders.hx"
		return new kha.Shaders();
	}
	
	
}

