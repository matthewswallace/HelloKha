// Generated by Haxe 3.3.0
package kha;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Assets_loadBlob_177__Fun extends haxe.lang.Function
{
	public Assets_loadBlob_177__Fun(java.lang.String name, haxe.lang.Function done)
	{
		//line 177 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		super(1, 0);
		//line 177 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		this.name = name;
		//line 177 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		this.done = done;
	}
	
	
	@Override public java.lang.Object __hx_invoke1_o(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		//line 177 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		kha.internal.BytesBlob blob = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((kha.internal.BytesBlob) (((java.lang.Object) (__fn_float1) )) )) : (((kha.internal.BytesBlob) (__fn_dyn1) )) );
		//line 178 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		haxe.root.Reflect.setField(kha.Assets.blobs, this.name, blob);
		//line 179 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		this.done.__hx_invoke1_o(0.0, blob);
		//line 177 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Assets.hx"
		return null;
	}
	
	
	public java.lang.String name;
	
	public haxe.lang.Function done;
	
}

