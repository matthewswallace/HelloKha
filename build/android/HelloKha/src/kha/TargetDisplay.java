// Generated by Haxe 3.3.0
package kha;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TargetDisplay extends haxe.lang.ParamEnum
{
	public TargetDisplay(int index, java.lang.Object[] params)
	{
		//line 100 "/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/java/internal/HxObject.hx"
		super(index, params);
	}
	
	
	public static final java.lang.String[] __hx_constructs = new java.lang.String[]{"Primary", "ById"};
	
	public static final kha.TargetDisplay Primary = new kha.TargetDisplay(0, null);
	
	public static kha.TargetDisplay ById(int id)
	{
		//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		return new kha.TargetDisplay(1, new java.lang.Object[]{id});
	}
	
	
	@Override public java.lang.String getTag()
	{
		//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		return kha.TargetDisplay.__hx_constructs[this.index];
	}
	
	
}


