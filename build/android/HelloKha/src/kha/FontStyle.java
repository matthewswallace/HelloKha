// Generated by Haxe 3.3.0
package kha;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class FontStyle extends haxe.lang.HxObject
{
	static
	{
		//line 10 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
		kha.FontStyle.Default = new kha.FontStyle(false, false, false);
	}
	
	public FontStyle(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public FontStyle(boolean bold, boolean italic, boolean underlined)
	{
		//line 31 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
		kha.FontStyle.__hx_ctor_kha_FontStyle(this, bold, italic, underlined);
	}
	
	
	public static void __hx_ctor_kha_FontStyle(kha.FontStyle __temp_me57, boolean bold, boolean italic, boolean underlined)
	{
		//line 32 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
		__temp_me57.bold = bold;
		//line 33 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
		__temp_me57.italic = italic;
		//line 34 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
		__temp_me57.underlined = underlined;
	}
	
	
	public static kha.FontStyle Default;
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
		return new kha.FontStyle(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
		return new kha.FontStyle(haxe.lang.Runtime.toBool(arr.__get(0)), haxe.lang.Runtime.toBool(arr.__get(1)), haxe.lang.Runtime.toBool(arr.__get(2)));
	}
	
	
	public boolean bold;
	
	public boolean italic;
	
	public boolean underlined;
	
	public boolean getBold()
	{
		//line 41 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
		return this.bold;
	}
	
	
	public boolean getItalic()
	{
		//line 48 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
		return this.italic;
	}
	
	
	public boolean getUnderlined()
	{
		//line 55 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
		return this.underlined;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
		{
			//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
			boolean __temp_executeDef1 = true;
			//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
			switch (field.hashCode())
			{
				case -1771105512:
				{
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					if (field.equals("underlined")) 
					{
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						__temp_executeDef1 = false;
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						this.underlined = haxe.lang.Runtime.toBool(value);
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						return value;
					}
					
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					break;
				}
				
				
				case 3029637:
				{
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					if (field.equals("bold")) 
					{
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						__temp_executeDef1 = false;
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						this.bold = haxe.lang.Runtime.toBool(value);
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						return value;
					}
					
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					break;
				}
				
				
				case -1178781136:
				{
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					if (field.equals("italic")) 
					{
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						__temp_executeDef1 = false;
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						this.italic = haxe.lang.Runtime.toBool(value);
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						return value;
					}
					
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					break;
				}
				
				
			}
			
			//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
			if (__temp_executeDef1) 
			{
				//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
		{
			//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
			boolean __temp_executeDef1 = true;
			//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
			switch (field.hashCode())
			{
				case -2068854002:
				{
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					if (field.equals("getUnderlined")) 
					{
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						__temp_executeDef1 = false;
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getUnderlined")) );
					}
					
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					break;
				}
				
				
				case 3029637:
				{
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					if (field.equals("bold")) 
					{
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						__temp_executeDef1 = false;
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						return this.bold;
					}
					
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					break;
				}
				
				
				case 517233958:
				{
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					if (field.equals("getItalic")) 
					{
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						__temp_executeDef1 = false;
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getItalic")) );
					}
					
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					break;
				}
				
				
				case -1178781136:
				{
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					if (field.equals("italic")) 
					{
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						__temp_executeDef1 = false;
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						return this.italic;
					}
					
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					break;
				}
				
				
				case -75652357:
				{
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					if (field.equals("getBold")) 
					{
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						__temp_executeDef1 = false;
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getBold")) );
					}
					
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					break;
				}
				
				
				case -1771105512:
				{
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					if (field.equals("underlined")) 
					{
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						__temp_executeDef1 = false;
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						return this.underlined;
					}
					
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					break;
				}
				
				
			}
			
			//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
			if (__temp_executeDef1) 
			{
				//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
		{
			//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
			boolean __temp_executeDef1 = true;
			//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
			switch (field.hashCode())
			{
				case -2068854002:
				{
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					if (field.equals("getUnderlined")) 
					{
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						__temp_executeDef1 = false;
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						return this.getUnderlined();
					}
					
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					break;
				}
				
				
				case -75652357:
				{
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					if (field.equals("getBold")) 
					{
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						__temp_executeDef1 = false;
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						return this.getBold();
					}
					
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					break;
				}
				
				
				case 517233958:
				{
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					if (field.equals("getItalic")) 
					{
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						__temp_executeDef1 = false;
						//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
						return this.getItalic();
					}
					
					//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
					break;
				}
				
				
			}
			
			//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
			if (__temp_executeDef1) 
			{
				//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
		baseArr.push("underlined");
		//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
		baseArr.push("italic");
		//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
		baseArr.push("bold");
		//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
		{
			//line 6 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/FontStyle.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


