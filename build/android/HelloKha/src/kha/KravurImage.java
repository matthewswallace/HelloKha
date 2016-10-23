// Generated by Haxe 3.3.0
package kha;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class KravurImage extends haxe.lang.HxObject
{
	public KravurImage(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public KravurImage(int size, int ascent, int descent, int lineGap, int width, int height, kha.graphics2.truetype.Stbtt_bakedchar[] chars, kha.internal.BytesBlob pixels)
	{
		//line 36 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		kha.KravurImage.__hx_ctor_kha_KravurImage(this, size, ascent, descent, lineGap, width, height, chars, pixels);
	}
	
	
	public static void __hx_ctor_kha_KravurImage(kha.KravurImage __temp_me65, int size, int ascent, int descent, int lineGap, int width, int height, kha.graphics2.truetype.Stbtt_bakedchar[] chars, kha.internal.BytesBlob pixels)
	{
		//line 37 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		__temp_me65.mySize = ((double) (size) );
		//line 38 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		__temp_me65.width = width;
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		__temp_me65.height = height;
		//line 40 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		__temp_me65.chars = chars;
		//line 41 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		__temp_me65.baseline = ((double) (ascent) );
		//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		{
			//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			int _g = 0;
			//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			while (( _g < ((kha.graphics2.truetype.Stbtt_bakedchar[]) (chars) ).length ))
			{
				//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
				kha.graphics2.truetype.Stbtt_bakedchar _char = ((kha.graphics2.truetype.Stbtt_bakedchar) (((kha.graphics2.truetype.Stbtt_bakedchar[]) (chars) )[_g]) );
				//line 42 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
				 ++ _g;
				//line 43 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
				_char.yoff += __temp_me65.baseline;
			}
			
		}
		
		//line 45 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		__temp_me65.texture = kha.Image.create(width, height, kha.graphics4.TextureFormat.L8, null);
		//line 46 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		haxe.io.Bytes bytes = __temp_me65.texture.lock(null);
		//line 47 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		int pos = 0;
		//line 48 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		{
			//line 48 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			int _g1 = 0;
			//line 48 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			while (( _g1 < height ))
			{
				//line 48 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
				 ++ _g1;
				//line 48 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
				{
					//line 48 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					int _g3 = 0;
					//line 48 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					while (( _g3 < width ))
					{
						//line 48 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						 ++ _g3;
						//line 49 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						bytes.b[pos] = ((byte) (pixels.readU8(pos)) );
						//line 50 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						 ++ pos;
					}
					
				}
				
			}
			
		}
		
		//line 52 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		__temp_me65.texture.unlock();
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		return new kha.KravurImage(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		return new kha.KravurImage(((int) (haxe.lang.Runtime.toInt(arr.__get(0))) ), ((int) (haxe.lang.Runtime.toInt(arr.__get(1))) ), ((int) (haxe.lang.Runtime.toInt(arr.__get(2))) ), ((int) (haxe.lang.Runtime.toInt(arr.__get(3))) ), ((int) (haxe.lang.Runtime.toInt(arr.__get(4))) ), ((int) (haxe.lang.Runtime.toInt(arr.__get(5))) ), ((kha.graphics2.truetype.Stbtt_bakedchar[]) (arr.__get(6)) ), ((kha.internal.BytesBlob) (arr.__get(7)) ));
	}
	
	
	public double mySize;
	
	public kha.graphics2.truetype.Stbtt_bakedchar[] chars;
	
	public kha.Image texture;
	
	public int width;
	
	public int height;
	
	public double baseline;
	
	public kha.Image getTexture()
	{
		//line 56 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		return this.texture;
	}
	
	
	public kha.AlignedQuad getBakedQuad(int char_index, double xpos, double ypos)
	{
		//line 60 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		if (( char_index >= ((kha.graphics2.truetype.Stbtt_bakedchar[]) (this.chars) ).length )) 
		{
			//line 60 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			return null;
		}
		
		//line 61 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		double ipw = ( 1.0 / this.width );
		//line 62 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		double iph = ( 1.0 / this.height );
		//line 63 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		kha.graphics2.truetype.Stbtt_bakedchar b = ((kha.graphics2.truetype.Stbtt_bakedchar) (((kha.graphics2.truetype.Stbtt_bakedchar[]) (this.chars) )[char_index]) );
		//line 64 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		boolean tmp = ( b == null );
		//line 64 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		if (tmp) 
		{
			//line 64 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			return null;
		}
		
		//line 65 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		int round_x = ((int) (java.lang.Math.round(( xpos + b.xoff ))) );
		//line 66 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		int round_y = ((int) (java.lang.Math.round(( ypos + b.yoff ))) );
		//line 68 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		kha.AlignedQuad q = new kha.AlignedQuad();
		//line 69 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		q.x0 = ((double) (round_x) );
		//line 70 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		q.y0 = ((double) (round_y) );
		//line 71 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		q.x1 = ((double) (( ( round_x + b.x1 ) - b.x0 )) );
		//line 72 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		q.y1 = ((double) (( ( round_y + b.y1 ) - b.y0 )) );
		//line 74 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		q.s0 = ( b.x0 * ipw );
		//line 75 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		q.t0 = ( b.y0 * iph );
		//line 76 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		q.s1 = ( b.x1 * ipw );
		//line 77 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		q.t1 = ( b.y1 * iph );
		//line 79 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		q.xadvance = b.xadvance;
		//line 81 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		return q;
	}
	
	
	public double getCharWidth(int charIndex)
	{
		//line 85 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		if (( charIndex < 32 )) 
		{
			//line 85 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			return ((double) (0) );
		}
		
		//line 86 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		if (( ( charIndex - 32 ) >= ((kha.graphics2.truetype.Stbtt_bakedchar[]) (this.chars) ).length )) 
		{
			//line 86 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			return ((double) (0) );
		}
		
		//line 87 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		return ((kha.graphics2.truetype.Stbtt_bakedchar) (((kha.graphics2.truetype.Stbtt_bakedchar[]) (this.chars) )[( charIndex - 32 )]) ).xadvance;
	}
	
	
	public double getHeight()
	{
		//line 91 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		return this.mySize;
	}
	
	
	public double stringWidth(java.lang.String string)
	{
		//line 95 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		java.lang.String str = new java.lang.String(string);
		//line 96 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		double width = ((double) (0) );
		//line 97 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		{
			//line 97 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			int _g1 = 0;
			//line 97 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			int _g = str.length();
			//line 97 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			while (( _g1 < _g ))
			{
				//line 97 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
				int c = _g1++;
				//line 98 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
				width += this.getCharWidth(((int) (haxe.lang.Runtime.toInt(haxe.lang.StringExt.charCodeAt(str, c))) ));
			}
			
		}
		
		//line 100 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		return width;
	}
	
	
	public double getBaselinePosition()
	{
		//line 104 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		return this.baseline;
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		{
			//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			switch (field.hashCode())
			{
				case -1720785339:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("baseline")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						this.baseline = ((double) (value) );
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return value;
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case -1060066355:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("mySize")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						this.mySize = ((double) (value) );
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return value;
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case -1221029593:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("height")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						this.height = ((int) (value) );
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return value;
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("width")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						this.width = ((int) (value) );
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return value;
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
			}
			
			//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		{
			//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			switch (field.hashCode())
			{
				case -1720785339:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("baseline")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						this.baseline = ((double) (haxe.lang.Runtime.toDouble(value)) );
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return value;
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case -1060066355:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("mySize")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						this.mySize = ((double) (haxe.lang.Runtime.toDouble(value)) );
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return value;
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case -1221029593:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("height")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						this.height = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return value;
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case 94623709:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("chars")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						this.chars = ((kha.graphics2.truetype.Stbtt_bakedchar[]) (value) );
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return value;
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("width")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						this.width = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return value;
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case -1417816805:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("texture")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						this.texture = ((kha.Image) (value) );
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return value;
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
			}
			
			//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		{
			//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			switch (field.hashCode())
			{
				case -1780468220:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("getBaselinePosition")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getBaselinePosition")) );
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case -1060066355:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("mySize")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return this.mySize;
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case -1518059467:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("stringWidth")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "stringWidth")) );
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case 94623709:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("chars")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return this.chars;
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case 474985501:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("getHeight")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getHeight")) );
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case -1417816805:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("texture")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return this.texture;
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case 1545519450:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("getCharWidth")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getCharWidth")) );
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("width")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return this.width;
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case -332534052:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("getBakedQuad")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getBakedQuad")) );
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case -1221029593:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("height")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return this.height;
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case -380956443:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("getTexture")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getTexture")) );
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case -1720785339:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("baseline")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return this.baseline;
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
			}
			
			//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		{
			//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			switch (field.hashCode())
			{
				case -1720785339:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("baseline")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return this.baseline;
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case -1060066355:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("mySize")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return this.mySize;
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case -1221029593:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("height")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return ((double) (this.height) );
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("width")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return ((double) (this.width) );
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
			}
			
			//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		{
			//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			switch (field.hashCode())
			{
				case -1780468220:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("getBaselinePosition")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return this.getBaselinePosition();
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case -380956443:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("getTexture")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return this.getTexture();
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case -1518059467:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("stringWidth")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return this.stringWidth(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case -332534052:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("getBakedQuad")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return this.getBakedQuad(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(1))) ), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(2))) ));
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case 474985501:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("getHeight")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return this.getHeight();
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
				case 1545519450:
				{
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					if (field.equals("getCharWidth")) 
					{
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						__temp_executeDef1 = false;
						//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
						return this.getCharWidth(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ));
					}
					
					//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
					break;
				}
				
				
			}
			
			//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		baseArr.push("baseline");
		//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		baseArr.push("height");
		//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		baseArr.push("width");
		//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		baseArr.push("texture");
		//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		baseArr.push("chars");
		//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		baseArr.push("mySize");
		//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
		{
			//line 27 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Kravur.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}

