// Generated by Haxe 3.3.0
package kha.graphics2.truetype;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Stbtt_pack_context extends haxe.lang.HxObject
{
	public Stbtt_pack_context(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Stbtt_pack_context()
	{
		//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		kha.graphics2.truetype.Stbtt_pack_context.__hx_ctor_kha_graphics2_truetype_Stbtt_pack_context(this);
	}
	
	
	public static void __hx_ctor_kha_graphics2_truetype_Stbtt_pack_context(kha.graphics2.truetype.Stbtt_pack_context __temp_me154)
	{
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		return new kha.graphics2.truetype.Stbtt_pack_context(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		return new kha.graphics2.truetype.Stbtt_pack_context();
	}
	
	
	public int width;
	
	public int height;
	
	public int stride_in_bytes;
	
	public int padding;
	
	public int h_oversample;
	
	public int v_oversample;
	
	public kha.internal.BytesBlob pixels;
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		{
			//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			boolean __temp_executeDef1 = true;
			//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			switch (field.hashCode())
			{
				case 1682461415:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("v_oversample")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.v_oversample = ((int) (value) );
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("width")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.width = ((int) (value) );
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -124696651:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("h_oversample")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.h_oversample = ((int) (value) );
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -1221029593:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("height")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.height = ((int) (value) );
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -806339567:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("padding")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.padding = ((int) (value) );
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -1577224329:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("stride_in_bytes")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.stride_in_bytes = ((int) (value) );
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
			}
			
			//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			if (__temp_executeDef1) 
			{
				//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		{
			//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			boolean __temp_executeDef1 = true;
			//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			switch (field.hashCode())
			{
				case -987857235:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("pixels")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.pixels = ((kha.internal.BytesBlob) (value) );
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("width")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.width = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case 1682461415:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("v_oversample")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.v_oversample = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -1221029593:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("height")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.height = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -124696651:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("h_oversample")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.h_oversample = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -1577224329:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("stride_in_bytes")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.stride_in_bytes = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -806339567:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("padding")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.padding = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
			}
			
			//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			if (__temp_executeDef1) 
			{
				//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		{
			//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			boolean __temp_executeDef1 = true;
			//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			switch (field.hashCode())
			{
				case -987857235:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("pixels")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return this.pixels;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("width")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return this.width;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case 1682461415:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("v_oversample")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return this.v_oversample;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -1221029593:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("height")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return this.height;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -124696651:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("h_oversample")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return this.h_oversample;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -1577224329:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("stride_in_bytes")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return this.stride_in_bytes;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -806339567:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("padding")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return this.padding;
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
			}
			
			//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			if (__temp_executeDef1) 
			{
				//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		{
			//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			boolean __temp_executeDef1 = true;
			//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			switch (field.hashCode())
			{
				case 1682461415:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("v_oversample")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return ((double) (this.v_oversample) );
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("width")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return ((double) (this.width) );
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -124696651:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("h_oversample")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return ((double) (this.h_oversample) );
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -1221029593:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("height")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return ((double) (this.height) );
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -806339567:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("padding")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return ((double) (this.padding) );
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -1577224329:
				{
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("stride_in_bytes")) 
					{
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return ((double) (this.stride_in_bytes) );
					}
					
					//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
			}
			
			//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			if (__temp_executeDef1) 
			{
				//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		baseArr.push("pixels");
		//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		baseArr.push("v_oversample");
		//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		baseArr.push("h_oversample");
		//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		baseArr.push("padding");
		//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		baseArr.push("stride_in_bytes");
		//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		baseArr.push("height");
		//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		baseArr.push("width");
		//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		{
			//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}

