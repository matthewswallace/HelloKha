// Generated by Haxe 3.3.0
package kha;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class BlobList extends haxe.lang.HxObject
{
	public BlobList(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public BlobList()
	{
		//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		kha.BlobList.__hx_ctor_kha_BlobList(this);
	}
	
	
	public static void __hx_ctor_kha_BlobList(kha.BlobList __temp_me51)
	{
		//line 25 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		__temp_me51.names = new haxe.root.Array<java.lang.String>(new java.lang.String[]{});
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		return new kha.BlobList(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		return new kha.BlobList();
	}
	
	
	public haxe.root.Array<java.lang.String> names;
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		{
			//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
			boolean __temp_executeDef1 = true;
			//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
			switch (field.hashCode())
			{
				case 104585032:
				{
					//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
					if (field.equals("names")) 
					{
						//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
						this.names = ((haxe.root.Array<java.lang.String>) (value) );
						//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
						return value;
					}
					
					//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
					break;
				}
				
				
			}
			
			//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
			if (__temp_executeDef1) 
			{
				//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		{
			//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
			boolean __temp_executeDef1 = true;
			//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
			switch (field.hashCode())
			{
				case 104585032:
				{
					//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
					if (field.equals("names")) 
					{
						//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
						__temp_executeDef1 = false;
						//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
						return this.names;
					}
					
					//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
					break;
				}
				
				
			}
			
			//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
			if (__temp_executeDef1) 
			{
				//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		baseArr.push("names");
		//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		{
			//line 26 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


