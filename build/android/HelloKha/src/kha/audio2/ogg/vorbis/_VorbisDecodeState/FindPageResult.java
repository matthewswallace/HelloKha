// Generated by Haxe 3.3.0
package kha.audio2.ogg.vorbis._VorbisDecodeState;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class FindPageResult extends haxe.lang.ParamEnum
{
	public FindPageResult(int index, java.lang.Object[] params)
	{
		//line 100 "/usr/local/lib/haxe/lib/kha/git/Tools/haxe/std/java/internal/HxObject.hx"
		super(index, params);
	}
	
	
	public static final java.lang.String[] __hx_constructs = new java.lang.String[]{"Found", "NotFound"};
	
	public static kha.audio2.ogg.vorbis._VorbisDecodeState.FindPageResult Found(int end, boolean last)
	{
		//line 854 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisDecodeState.hx"
		return new kha.audio2.ogg.vorbis._VorbisDecodeState.FindPageResult(0, new java.lang.Object[]{end, last});
	}
	
	
	public static final kha.audio2.ogg.vorbis._VorbisDecodeState.FindPageResult NotFound = new kha.audio2.ogg.vorbis._VorbisDecodeState.FindPageResult(1, null);
	
	@Override public java.lang.String getTag()
	{
		//line 853 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisDecodeState.hx"
		return kha.audio2.ogg.vorbis._VorbisDecodeState.FindPageResult.__hx_constructs[this.index];
	}
	
	
}


