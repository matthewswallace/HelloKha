// Generated by Haxe 3.3.0
package kha.graphics2.truetype;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Stbtt_temp_region extends haxe.lang.HxObject
{
	public Stbtt_temp_region(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Stbtt_temp_region()
	{
		//line 43 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		kha.graphics2.truetype.Stbtt_temp_region.__hx_ctor_kha_graphics2_truetype_Stbtt_temp_region(this);
	}
	
	
	public static void __hx_ctor_kha_graphics2_truetype_Stbtt_temp_region(kha.graphics2.truetype.Stbtt_temp_region __temp_me149)
	{
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		return new kha.graphics2.truetype.Stbtt_temp_region(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		return new kha.graphics2.truetype.Stbtt_temp_region();
	}
	
	
	public int width;
	
	public int height;
	
	public int xoff;
	
	public int yoff;
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		{
			//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			boolean __temp_executeDef1 = true;
			//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			switch (field.hashCode())
			{
				case 3714646:
				{
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("yoff")) 
					{
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.yoff = ((int) (value) );
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("width")) 
					{
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.width = ((int) (value) );
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case 3684855:
				{
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("xoff")) 
					{
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.xoff = ((int) (value) );
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -1221029593:
				{
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("height")) 
					{
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.height = ((int) (value) );
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
			}
			
			//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			if (__temp_executeDef1) 
			{
				//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		{
			//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			boolean __temp_executeDef1 = true;
			//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			switch (field.hashCode())
			{
				case 3714646:
				{
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("yoff")) 
					{
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.yoff = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("width")) 
					{
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.width = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case 3684855:
				{
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("xoff")) 
					{
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.xoff = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -1221029593:
				{
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("height")) 
					{
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						this.height = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return value;
					}
					
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
			}
			
			//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			if (__temp_executeDef1) 
			{
				//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		{
			//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			boolean __temp_executeDef1 = true;
			//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			switch (field.hashCode())
			{
				case 3714646:
				{
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("yoff")) 
					{
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return this.yoff;
					}
					
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("width")) 
					{
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return this.width;
					}
					
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case 3684855:
				{
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("xoff")) 
					{
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return this.xoff;
					}
					
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -1221029593:
				{
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("height")) 
					{
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return this.height;
					}
					
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
			}
			
			//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			if (__temp_executeDef1) 
			{
				//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		{
			//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			boolean __temp_executeDef1 = true;
			//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			switch (field.hashCode())
			{
				case 3714646:
				{
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("yoff")) 
					{
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return ((double) (this.yoff) );
					}
					
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("width")) 
					{
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return ((double) (this.width) );
					}
					
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case 3684855:
				{
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("xoff")) 
					{
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return ((double) (this.xoff) );
					}
					
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
				case -1221029593:
				{
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					if (field.equals("height")) 
					{
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						__temp_executeDef1 = false;
						//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
						return ((double) (this.height) );
					}
					
					//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
					break;
				}
				
				
			}
			
			//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			if (__temp_executeDef1) 
			{
				//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		baseArr.push("yoff");
		//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		baseArr.push("xoff");
		//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		baseArr.push("height");
		//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		baseArr.push("width");
		//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
		{
			//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/graphics2/truetype/StbTruetype.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


