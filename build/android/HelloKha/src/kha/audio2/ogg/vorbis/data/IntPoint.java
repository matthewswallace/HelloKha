// Generated by Haxe 3.3.0
package kha.audio2.ogg.vorbis.data;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class IntPoint extends haxe.lang.HxObject
{
	public IntPoint(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public IntPoint()
	{
		//line 12 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
		kha.audio2.ogg.vorbis.data.IntPoint.__hx_ctor_kha_audio2_ogg_vorbis_data_IntPoint(this);
	}
	
	
	public static void __hx_ctor_kha_audio2_ogg_vorbis_data_IntPoint(kha.audio2.ogg.vorbis.data.IntPoint __temp_me130)
	{
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
		return new kha.audio2.ogg.vorbis.data.IntPoint(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
		return new kha.audio2.ogg.vorbis.data.IntPoint();
	}
	
	
	public int x;
	
	public int y;
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
		{
			//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
			boolean __temp_executeDef1 = true;
			//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
			switch (field.hashCode())
			{
				case 121:
				{
					//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
					if (field.equals("y")) 
					{
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						__temp_executeDef1 = false;
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						this.y = ((int) (value) );
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						return value;
					}
					
					//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
					break;
				}
				
				
				case 120:
				{
					//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
					if (field.equals("x")) 
					{
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						__temp_executeDef1 = false;
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						this.x = ((int) (value) );
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						return value;
					}
					
					//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
					break;
				}
				
				
			}
			
			//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
			if (__temp_executeDef1) 
			{
				//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
		{
			//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
			boolean __temp_executeDef1 = true;
			//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
			switch (field.hashCode())
			{
				case 121:
				{
					//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
					if (field.equals("y")) 
					{
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						__temp_executeDef1 = false;
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						this.y = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						return value;
					}
					
					//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
					break;
				}
				
				
				case 120:
				{
					//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
					if (field.equals("x")) 
					{
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						__temp_executeDef1 = false;
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						this.x = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						return value;
					}
					
					//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
					break;
				}
				
				
			}
			
			//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
			if (__temp_executeDef1) 
			{
				//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
		{
			//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
			boolean __temp_executeDef1 = true;
			//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
			switch (field.hashCode())
			{
				case 121:
				{
					//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
					if (field.equals("y")) 
					{
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						__temp_executeDef1 = false;
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						return this.y;
					}
					
					//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
					break;
				}
				
				
				case 120:
				{
					//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
					if (field.equals("x")) 
					{
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						__temp_executeDef1 = false;
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						return this.x;
					}
					
					//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
					break;
				}
				
				
			}
			
			//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
			if (__temp_executeDef1) 
			{
				//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
		{
			//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
			boolean __temp_executeDef1 = true;
			//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
			switch (field.hashCode())
			{
				case 121:
				{
					//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
					if (field.equals("y")) 
					{
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						__temp_executeDef1 = false;
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						return ((double) (this.y) );
					}
					
					//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
					break;
				}
				
				
				case 120:
				{
					//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
					if (field.equals("x")) 
					{
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						__temp_executeDef1 = false;
						//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
						return ((double) (this.x) );
					}
					
					//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
					break;
				}
				
				
			}
			
			//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
			if (__temp_executeDef1) 
			{
				//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
		baseArr.push("y");
		//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
		baseArr.push("x");
		//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
		{
			//line 7 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/IntPoint.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}

