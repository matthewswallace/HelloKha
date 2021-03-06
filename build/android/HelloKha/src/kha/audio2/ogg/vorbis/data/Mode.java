// Generated by Haxe 3.3.0
package kha.audio2.ogg.vorbis.data;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Mode extends haxe.lang.HxObject
{
	public Mode(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Mode()
	{
		//line 12 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		kha.audio2.ogg.vorbis.data.Mode.__hx_ctor_kha_audio2_ogg_vorbis_data_Mode(this);
	}
	
	
	public static void __hx_ctor_kha_audio2_ogg_vorbis_data_Mode(kha.audio2.ogg.vorbis.data.Mode __temp_me133)
	{
	}
	
	
	public static kha.audio2.ogg.vorbis.data.Mode read(kha.audio2.ogg.vorbis.VorbisDecodeState decodeState)
	{
		//line 16 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		kha.audio2.ogg.vorbis.data.Mode m = new kha.audio2.ogg.vorbis.data.Mode();
		//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		int tmp = 0;
		//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		if (( decodeState.validBits < 0 )) 
		{
			//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			tmp = 0;
		}
		else
		{
			//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			if (( decodeState.validBits < 1 )) 
			{
				//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				if (( decodeState.validBits == 0 )) 
				{
					//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					decodeState.acc = 0;
				}
				
				//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				while (true)
				{
					//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if (( ( decodeState.bytesInSeg == 0 ) && (( decodeState.lastSeg || ( decodeState.next() == 0 ) )) )) 
					{
						//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.validBits = -1;
						//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						break;
					}
					else
					{
						//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.bytesInSeg--;
						//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						int a = decodeState.acc;
						//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.inputPosition += 1;
						//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.acc = ( ((int) (a) ) + (((int) (( decodeState.input.readByte() << decodeState.validBits )) )) );
						//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.validBits += 8;
					}
					
					//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if ( ! ((( decodeState.validBits < 1 ))) ) 
					{
						//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						break;
					}
					
				}
				
				//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				if (( decodeState.validBits < 0 )) 
				{
					//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					tmp = 0;
				}
				else
				{
					//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					int z = ( ((int) (decodeState.acc) ) & ((int) (1) ) );
					//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					decodeState.acc = ( ((int) (decodeState.acc) ) >>> 1 );
					//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					decodeState.validBits -= 1;
					//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					tmp = z;
				}
				
			}
			else
			{
				//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				int z1 = ( ((int) (decodeState.acc) ) & ((int) (1) ) );
				//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				decodeState.acc = ( ((int) (decodeState.acc) ) >>> 1 );
				//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				decodeState.validBits -= 1;
				//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				tmp = z1;
			}
			
		}
		
		//line 17 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		m.blockflag = ( tmp != 0 );
		//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		int tmp1 = 0;
		//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		if (( decodeState.validBits < 0 )) 
		{
			//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			tmp1 = 0;
		}
		else
		{
			//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			if (( decodeState.validBits < 16 )) 
			{
				//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				if (( decodeState.validBits == 0 )) 
				{
					//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					decodeState.acc = 0;
				}
				
				//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				while (true)
				{
					//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if (( ( decodeState.bytesInSeg == 0 ) && (( decodeState.lastSeg || ( decodeState.next() == 0 ) )) )) 
					{
						//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.validBits = -1;
						//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						break;
					}
					else
					{
						//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.bytesInSeg--;
						//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						int a1 = decodeState.acc;
						//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.inputPosition += 1;
						//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.acc = ( ((int) (a1) ) + (((int) (( decodeState.input.readByte() << decodeState.validBits )) )) );
						//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.validBits += 8;
					}
					
					//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if ( ! ((( decodeState.validBits < 16 ))) ) 
					{
						//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						break;
					}
					
				}
				
				//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				if (( decodeState.validBits < 0 )) 
				{
					//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					tmp1 = 0;
				}
				else
				{
					//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					int z2 = ( ((int) (decodeState.acc) ) & ((int) (65535) ) );
					//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					decodeState.acc = ( ((int) (decodeState.acc) ) >>> 16 );
					//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					decodeState.validBits -= 16;
					//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					tmp1 = z2;
				}
				
			}
			else
			{
				//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				int z3 = ( ((int) (decodeState.acc) ) & ((int) (65535) ) );
				//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				decodeState.acc = ( ((int) (decodeState.acc) ) >>> 16 );
				//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				decodeState.validBits -= 16;
				//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				tmp1 = z3;
			}
			
		}
		
		//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		m.windowtype = tmp1;
		//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		int tmp2 = 0;
		//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		if (( decodeState.validBits < 0 )) 
		{
			//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			tmp2 = 0;
		}
		else
		{
			//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			if (( decodeState.validBits < 16 )) 
			{
				//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				if (( decodeState.validBits == 0 )) 
				{
					//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					decodeState.acc = 0;
				}
				
				//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				while (true)
				{
					//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if (( ( decodeState.bytesInSeg == 0 ) && (( decodeState.lastSeg || ( decodeState.next() == 0 ) )) )) 
					{
						//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.validBits = -1;
						//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						break;
					}
					else
					{
						//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.bytesInSeg--;
						//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						int a2 = decodeState.acc;
						//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.inputPosition += 1;
						//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.acc = ( ((int) (a2) ) + (((int) (( decodeState.input.readByte() << decodeState.validBits )) )) );
						//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.validBits += 8;
					}
					
					//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if ( ! ((( decodeState.validBits < 16 ))) ) 
					{
						//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						break;
					}
					
				}
				
				//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				if (( decodeState.validBits < 0 )) 
				{
					//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					tmp2 = 0;
				}
				else
				{
					//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					int z4 = ( ((int) (decodeState.acc) ) & ((int) (65535) ) );
					//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					decodeState.acc = ( ((int) (decodeState.acc) ) >>> 16 );
					//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					decodeState.validBits -= 16;
					//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					tmp2 = z4;
				}
				
			}
			else
			{
				//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				int z5 = ( ((int) (decodeState.acc) ) & ((int) (65535) ) );
				//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				decodeState.acc = ( ((int) (decodeState.acc) ) >>> 16 );
				//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				decodeState.validBits -= 16;
				//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				tmp2 = z5;
			}
			
		}
		
		//line 19 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		m.transformtype = tmp2;
		//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		int tmp3 = 0;
		//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		if (( decodeState.validBits < 0 )) 
		{
			//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			tmp3 = 0;
		}
		else
		{
			//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			if (( decodeState.validBits < 8 )) 
			{
				//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				if (( decodeState.validBits == 0 )) 
				{
					//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					decodeState.acc = 0;
				}
				
				//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				while (true)
				{
					//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if (( ( decodeState.bytesInSeg == 0 ) && (( decodeState.lastSeg || ( decodeState.next() == 0 ) )) )) 
					{
						//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.validBits = -1;
						//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						break;
					}
					else
					{
						//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.bytesInSeg--;
						//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						int a3 = decodeState.acc;
						//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.inputPosition += 1;
						//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.acc = ( ((int) (a3) ) + (((int) (( decodeState.input.readByte() << decodeState.validBits )) )) );
						//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						decodeState.validBits += 8;
					}
					
					//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if ( ! ((( decodeState.validBits < 8 ))) ) 
					{
						//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						break;
					}
					
				}
				
				//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				if (( decodeState.validBits < 0 )) 
				{
					//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					tmp3 = 0;
				}
				else
				{
					//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					int z6 = ( ((int) (decodeState.acc) ) & ((int) (255) ) );
					//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					decodeState.acc = ( ((int) (decodeState.acc) ) >>> 8 );
					//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					decodeState.validBits -= 8;
					//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					tmp3 = z6;
				}
				
			}
			else
			{
				//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				int z7 = ( ((int) (decodeState.acc) ) & ((int) (255) ) );
				//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				decodeState.acc = ( ((int) (decodeState.acc) ) >>> 8 );
				//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				decodeState.validBits -= 8;
				//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				tmp3 = z7;
			}
			
		}
		
		//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		m.mapping = tmp3;
		//line 21 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		if (( m.windowtype != 0 )) 
		{
			//line 22 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			throw haxe.lang.HaxeException.wrap(new kha.audio2.ogg.vorbis.data.ReaderError(kha.audio2.ogg.vorbis.data.ReaderErrorType.INVALID_SETUP, null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"kha.audio2.ogg.vorbis.data.Mode", "Mode.hx", "read"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (22) )) )})));
		}
		
		//line 24 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		if (( m.transformtype != 0 )) 
		{
			//line 25 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			throw haxe.lang.HaxeException.wrap(new kha.audio2.ogg.vorbis.data.ReaderError(kha.audio2.ogg.vorbis.data.ReaderErrorType.INVALID_SETUP, null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"kha.audio2.ogg.vorbis.data.Mode", "Mode.hx", "read"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (25) )) )})));
		}
		
		//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		return m;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		return new kha.audio2.ogg.vorbis.data.Mode(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		return new kha.audio2.ogg.vorbis.data.Mode();
	}
	
	
	public boolean blockflag;
	
	public int mapping;
	
	public int windowtype;
	
	public int transformtype;
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		{
			//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			boolean __temp_executeDef1 = true;
			//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			switch (field.hashCode())
			{
				case -1715903322:
				{
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if (field.equals("transformtype")) 
					{
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						__temp_executeDef1 = false;
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						this.transformtype = ((int) (value) );
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						return value;
					}
					
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					break;
				}
				
				
				case 837556430:
				{
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if (field.equals("mapping")) 
					{
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						__temp_executeDef1 = false;
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						this.mapping = ((int) (value) );
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						return value;
					}
					
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					break;
				}
				
				
				case 1863512874:
				{
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if (field.equals("windowtype")) 
					{
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						__temp_executeDef1 = false;
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						this.windowtype = ((int) (value) );
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						return value;
					}
					
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					break;
				}
				
				
			}
			
			//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			if (__temp_executeDef1) 
			{
				//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		{
			//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			boolean __temp_executeDef1 = true;
			//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			switch (field.hashCode())
			{
				case -1715903322:
				{
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if (field.equals("transformtype")) 
					{
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						__temp_executeDef1 = false;
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						this.transformtype = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						return value;
					}
					
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					break;
				}
				
				
				case 872985977:
				{
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if (field.equals("blockflag")) 
					{
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						__temp_executeDef1 = false;
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						this.blockflag = haxe.lang.Runtime.toBool(value);
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						return value;
					}
					
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					break;
				}
				
				
				case 1863512874:
				{
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if (field.equals("windowtype")) 
					{
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						__temp_executeDef1 = false;
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						this.windowtype = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						return value;
					}
					
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					break;
				}
				
				
				case 837556430:
				{
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if (field.equals("mapping")) 
					{
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						__temp_executeDef1 = false;
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						this.mapping = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						return value;
					}
					
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					break;
				}
				
				
			}
			
			//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			if (__temp_executeDef1) 
			{
				//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		{
			//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			boolean __temp_executeDef1 = true;
			//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			switch (field.hashCode())
			{
				case -1715903322:
				{
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if (field.equals("transformtype")) 
					{
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						__temp_executeDef1 = false;
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						return this.transformtype;
					}
					
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					break;
				}
				
				
				case 872985977:
				{
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if (field.equals("blockflag")) 
					{
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						__temp_executeDef1 = false;
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						return this.blockflag;
					}
					
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					break;
				}
				
				
				case 1863512874:
				{
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if (field.equals("windowtype")) 
					{
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						__temp_executeDef1 = false;
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						return this.windowtype;
					}
					
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					break;
				}
				
				
				case 837556430:
				{
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if (field.equals("mapping")) 
					{
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						__temp_executeDef1 = false;
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						return this.mapping;
					}
					
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					break;
				}
				
				
			}
			
			//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			if (__temp_executeDef1) 
			{
				//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		{
			//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			boolean __temp_executeDef1 = true;
			//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			switch (field.hashCode())
			{
				case -1715903322:
				{
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if (field.equals("transformtype")) 
					{
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						__temp_executeDef1 = false;
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						return ((double) (this.transformtype) );
					}
					
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					break;
				}
				
				
				case 837556430:
				{
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if (field.equals("mapping")) 
					{
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						__temp_executeDef1 = false;
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						return ((double) (this.mapping) );
					}
					
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					break;
				}
				
				
				case 1863512874:
				{
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					if (field.equals("windowtype")) 
					{
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						__temp_executeDef1 = false;
						//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
						return ((double) (this.windowtype) );
					}
					
					//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
					break;
				}
				
				
			}
			
			//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			if (__temp_executeDef1) 
			{
				//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		baseArr.push("transformtype");
		//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		baseArr.push("windowtype");
		//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		baseArr.push("mapping");
		//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		baseArr.push("blockflag");
		//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
		{
			//line 5 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/data/Mode.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


