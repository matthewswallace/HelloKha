// Generated by Haxe 3.3.0
package kha;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class WindowOptions extends haxe.lang.HxObject
{
	public WindowOptions(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public WindowOptions(int width, int height, kha.Mode mode, java.lang.String title, kha.Position x, kha.Position y, kha.TargetDisplay targetDisplay, kha.RendererOptions rendererOptions, kha.WindowedModeOptions windowedModeOptions)
	{
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		kha.WindowOptions.__hx_ctor_kha_WindowOptions(this, width, height, mode, title, x, y, targetDisplay, rendererOptions, windowedModeOptions);
	}
	
	
	public static void __hx_ctor_kha_WindowOptions(kha.WindowOptions __temp_me95, int width, int height, kha.Mode mode, java.lang.String title, kha.Position x, kha.Position y, kha.TargetDisplay targetDisplay, kha.RendererOptions rendererOptions, kha.WindowedModeOptions windowedModeOptions)
	{
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		__temp_me95.width = width;
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		__temp_me95.height = height;
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		__temp_me95.mode = mode;
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		__temp_me95.title = title;
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		__temp_me95.x = x;
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		__temp_me95.y = y;
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		__temp_me95.targetDisplay = targetDisplay;
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		__temp_me95.rendererOptions = rendererOptions;
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		__temp_me95.windowedModeOptions = windowedModeOptions;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		return new kha.WindowOptions(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		return new kha.WindowOptions(((int) (haxe.lang.Runtime.toInt(arr.__get(0))) ), ((int) (haxe.lang.Runtime.toInt(arr.__get(1))) ), ((kha.Mode) (arr.__get(2)) ), haxe.lang.Runtime.toString(arr.__get(3)), ((kha.Position) (arr.__get(4)) ), ((kha.Position) (arr.__get(5)) ), ((kha.TargetDisplay) (arr.__get(6)) ), ((kha.RendererOptions) (arr.__get(7)) ), ((kha.WindowedModeOptions) (arr.__get(8)) ));
	}
	
	
	public int width;
	
	public int height;
	
	public kha.Mode mode;
	
	public java.lang.String title;
	
	public kha.Position x;
	
	public kha.Position y;
	
	public kha.TargetDisplay targetDisplay;
	
	public kha.RendererOptions rendererOptions;
	
	public kha.WindowedModeOptions windowedModeOptions;
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		{
			//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
			boolean __temp_executeDef1 = true;
			//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
			switch (field.hashCode())
			{
				case -1221029593:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("height")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						this.height = ((int) (value) );
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return value;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("width")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						this.width = ((int) (value) );
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return value;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
			}
			
			//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
			if (__temp_executeDef1) 
			{
				//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		{
			//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
			boolean __temp_executeDef1 = true;
			//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
			switch (field.hashCode())
			{
				case -1018809492:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("windowedModeOptions")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						this.windowedModeOptions = ((kha.WindowedModeOptions) (value) );
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return value;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("width")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						this.width = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return value;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
				case -19198885:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("rendererOptions")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						this.rendererOptions = ((kha.RendererOptions) (value) );
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return value;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
				case -1221029593:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("height")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						this.height = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return value;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
				case -319256079:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("targetDisplay")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						this.targetDisplay = ((kha.TargetDisplay) (value) );
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return value;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
				case 3357091:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("mode")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						this.mode = ((kha.Mode) (value) );
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return value;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
				case 121:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("y")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						this.y = ((kha.Position) (value) );
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return value;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
				case 110371416:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("title")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						this.title = haxe.lang.Runtime.toString(value);
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return value;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
				case 120:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("x")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						this.x = ((kha.Position) (value) );
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return value;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
			}
			
			//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
			if (__temp_executeDef1) 
			{
				//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		{
			//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
			boolean __temp_executeDef1 = true;
			//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
			switch (field.hashCode())
			{
				case -1018809492:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("windowedModeOptions")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return this.windowedModeOptions;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("width")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return this.width;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
				case -19198885:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("rendererOptions")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return this.rendererOptions;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
				case -1221029593:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("height")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return this.height;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
				case -319256079:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("targetDisplay")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return this.targetDisplay;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
				case 3357091:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("mode")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return this.mode;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
				case 121:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("y")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return this.y;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
				case 110371416:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("title")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return this.title;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
				case 120:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("x")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return this.x;
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
			}
			
			//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
			if (__temp_executeDef1) 
			{
				//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		{
			//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
			boolean __temp_executeDef1 = true;
			//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
			switch (field.hashCode())
			{
				case -1221029593:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("height")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return ((double) (this.height) );
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					if (field.equals("width")) 
					{
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						__temp_executeDef1 = false;
						//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
						return ((double) (this.width) );
					}
					
					//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
					break;
				}
				
				
			}
			
			//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
			if (__temp_executeDef1) 
			{
				//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		baseArr.push("windowedModeOptions");
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		baseArr.push("rendererOptions");
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		baseArr.push("targetDisplay");
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		baseArr.push("y");
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		baseArr.push("x");
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		baseArr.push("title");
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		baseArr.push("mode");
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		baseArr.push("height");
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		baseArr.push("width");
		//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
		{
			//line 39 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/WindowOptions.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


