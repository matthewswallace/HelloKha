// Generated by Haxe 3.3.0
package kha.android.graphics4;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TextureUnit extends haxe.lang.HxObject implements kha.graphics4.TextureUnit
{
	public TextureUnit(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public TextureUnit(int value)
	{
		//line 6 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
		kha.android.graphics4.TextureUnit.__hx_ctor_kha_android_graphics4_TextureUnit(this, value);
	}
	
	
	public static void __hx_ctor_kha_android_graphics4_TextureUnit(kha.android.graphics4.TextureUnit __temp_me114, int value)
	{
		//line 7 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
		__temp_me114.value = value;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
		return new kha.android.graphics4.TextureUnit(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
		return new kha.android.graphics4.TextureUnit(((int) (haxe.lang.Runtime.toInt(arr.__get(0))) ));
	}
	
	
	public int value;
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
		{
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
			boolean __temp_executeDef1 = true;
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
			switch (field.hashCode())
			{
				case 111972721:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
					if (field.equals("value")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
						this.value = ((int) (value) );
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
						return value;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
					break;
				}
				
				
			}
			
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
			if (__temp_executeDef1) 
			{
				//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
		{
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
			boolean __temp_executeDef1 = true;
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
			switch (field.hashCode())
			{
				case 111972721:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
					if (field.equals("value")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
						this.value = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
						return value;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
					break;
				}
				
				
			}
			
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
			if (__temp_executeDef1) 
			{
				//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
		{
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
			boolean __temp_executeDef1 = true;
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
			switch (field.hashCode())
			{
				case 111972721:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
					if (field.equals("value")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
						return this.value;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
					break;
				}
				
				
			}
			
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
			if (__temp_executeDef1) 
			{
				//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
		{
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
			boolean __temp_executeDef1 = true;
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
			switch (field.hashCode())
			{
				case 111972721:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
					if (field.equals("value")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
						return ((double) (this.value) );
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
					break;
				}
				
				
			}
			
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
			if (__temp_executeDef1) 
			{
				//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
		baseArr.push("value");
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
		{
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/kha/android/graphics4/TextureUnit.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}

