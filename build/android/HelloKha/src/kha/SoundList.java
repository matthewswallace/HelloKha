// Generated by Haxe 3.3.0
package kha;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class SoundList extends haxe.lang.HxObject
{
	public SoundList(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public SoundList()
	{
		//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		kha.SoundList.__hx_ctor_kha_SoundList(this);
	}
	
	
	public static void __hx_ctor_kha_SoundList(kha.SoundList __temp_me50)
	{
		//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		__temp_me50.names = new haxe.root.Array<java.lang.String>(new java.lang.String[]{});
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		return new kha.SoundList(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		return new kha.SoundList();
	}
	
	
	public haxe.root.Array<java.lang.String> names;
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		{
			//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
			switch (field.hashCode())
			{
				case 104585032:
				{
					//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
					if (field.equals("names")) 
					{
						//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
						__temp_executeDef1 = false;
						//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
						this.names = ((haxe.root.Array<java.lang.String>) (value) );
						//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
						return value;
					}
					
					//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
					break;
				}
				
				
			}
			
			//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		{
			//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
			switch (field.hashCode())
			{
				case 104585032:
				{
					//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
					if (field.equals("names")) 
					{
						//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
						__temp_executeDef1 = false;
						//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
						return this.names;
					}
					
					//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
					break;
				}
				
				
			}
			
			//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		baseArr.push("names");
		//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		{
			//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


