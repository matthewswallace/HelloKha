// Generated by Haxe 3.3.0
package com.ktxsoftware.kha;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class KeyboardHideRunner extends haxe.lang.HxObject implements java.lang.Runnable
{
	public KeyboardHideRunner(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public KeyboardHideRunner(com.ktxsoftware.kha.KhaView view)
	{
		//line 29 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
		com.ktxsoftware.kha.KeyboardHideRunner.__hx_ctor_com_ktxsoftware_kha_KeyboardHideRunner(this, view);
	}
	
	
	public static void __hx_ctor_com_ktxsoftware_kha_KeyboardHideRunner(com.ktxsoftware.kha.KeyboardHideRunner __temp_me24, com.ktxsoftware.kha.KhaView view)
	{
		//line 30 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
		__temp_me24.view = view;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
		return new com.ktxsoftware.kha.KeyboardHideRunner(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
		return new com.ktxsoftware.kha.KeyboardHideRunner(((com.ktxsoftware.kha.KhaView) (arr.__get(0)) ));
	}
	
	
	public com.ktxsoftware.kha.KhaView view;
	
	public void run()
	{
		//line 34 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
		this.view.hideKeyboard();
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
		{
			//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
			boolean __temp_executeDef1 = true;
			//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
			switch (field.hashCode())
			{
				case 3619493:
				{
					//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
					if (field.equals("view")) 
					{
						//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
						this.view = ((com.ktxsoftware.kha.KhaView) (value) );
						//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
						return value;
					}
					
					//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
					break;
				}
				
				
			}
			
			//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
			if (__temp_executeDef1) 
			{
				//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
		{
			//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
			boolean __temp_executeDef1 = true;
			//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
			switch (field.hashCode())
			{
				case 113291:
				{
					//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
					if (field.equals("run")) 
					{
						//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "run")) );
					}
					
					//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
					break;
				}
				
				
				case 3619493:
				{
					//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
					if (field.equals("view")) 
					{
						//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
						return this.view;
					}
					
					//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
					break;
				}
				
				
			}
			
			//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
			if (__temp_executeDef1) 
			{
				//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
		{
			//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
			boolean __temp_executeDef1 = true;
			//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
			switch (field.hashCode())
			{
				case 113291:
				{
					//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
					if (field.equals("run")) 
					{
						//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
						this.run();
					}
					
					//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
					break;
				}
				
				
			}
			
			//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
			if (__temp_executeDef1) 
			{
				//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
		baseArr.push("view");
		//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
		{
			//line 26 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaRenderer.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


