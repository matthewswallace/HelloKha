// Generated by Haxe 3.3.0
package kha.audio2.ogg.vorbis;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Reader_openFromFile_98__Fun extends haxe.lang.Function
{
	public Reader_openFromFile_98__Fun(haxe.lang.Function f)
	{
		//line 98 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/Reader.hx"
		super(1, 0);
		//line 98 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/Reader.hx"
		this.f = f;
	}
	
	
	@Override public java.lang.Object __hx_invoke1_o(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		//line 98 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/Reader.hx"
		int p = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((int) (__fn_float1) )) : (((int) (haxe.lang.Runtime.toInt(__fn_dyn1)) )) );
		//line 98 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/Reader.hx"
		this.f.__hx_invoke2_o(((double) (p) ), haxe.lang.Runtime.undefined, 0.0, sys.io.FileSeek.SeekBegin);
		//line 98 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/Reader.hx"
		return null;
	}
	
	
	public haxe.lang.Function f;
	
}

