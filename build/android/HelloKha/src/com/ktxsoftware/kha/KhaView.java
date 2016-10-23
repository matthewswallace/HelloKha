// Generated by Haxe 3.3.0
package com.ktxsoftware.kha;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class KhaView extends android.opengl.GLSurfaceView implements haxe.lang.IHxObject, android.view.View.OnTouchListener
{
	public KhaView(haxe.lang.EmptyObject empty)
	{
		//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		super(null);
	}
	
	
	public KhaView(com.ktxsoftware.kha.KhaActivity activity)
	{
		//line 67 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		super(activity);
		//line 68 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		this.setFocusable(true);
		//line 69 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		this.setFocusableInTouchMode(true);
		//line 70 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		this.setPreserveEGLContextOnPause(true);
		//line 71 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		this.setEGLContextClientVersion(2);
		//line 72 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		this.setEGLConfigChooser(8, 8, 8, 8, 16, 8);
		//line 73 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		this.setRenderer(this.renderer = new com.ktxsoftware.kha.KhaRenderer(activity.getApplicationContext(), this));
		//line 74 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		this.setOnTouchListener(this);
		//line 75 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		this.initInputManager(activity);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		return new com.ktxsoftware.kha.KhaView(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		return new com.ktxsoftware.kha.KhaView(((com.ktxsoftware.kha.KhaActivity) (arr.__get(0)) ));
	}
	
	
	public com.ktxsoftware.kha.KhaRenderer renderer;
	
	public android.view.inputmethod.InputMethodManager inputManager;
	
	public void initInputManager(com.ktxsoftware.kha.KhaActivity activity)
	{
		inputManager = (android.view.inputmethod.InputMethodManager)activity.getSystemService(android.content.Context.INPUT_METHOD_SERVICE);
	}
	
	
	public void showKeyboard()
	{
		//line 89 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		this.inputManager.toggleSoftInputFromWindow(this.getApplicationWindowToken(), android.view.inputmethod.InputMethodManager.SHOW_IMPLICIT, 0);
	}
	
	
	public void hideKeyboard()
	{
		//line 93 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		this.inputManager.hideSoftInputFromWindow(this.getApplicationWindowToken(), android.view.inputmethod.InputMethodManager.HIDE_NOT_ALWAYS);
	}
	
	
	public boolean onTouch(android.view.View view, android.view.MotionEvent event)
	{
		//line 97 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		int index = event.getActionIndex();
		//line 98 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		int maskedAction = event.getActionMasked();
		//line 102 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		int action = -1;
		//line 103 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		if (( ( maskedAction == android.view.MotionEvent.ACTION_DOWN ) || ( maskedAction == android.view.MotionEvent.ACTION_POINTER_DOWN ) )) 
		{
			//line 103 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			action = 0;
		}
		else
		{
			//line 103 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			action = -1;
		}
		
		//line 104 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		if (( ( action == -1 ) && ( maskedAction == android.view.MotionEvent.ACTION_MOVE ) )) 
		{
			//line 104 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			action = 1;
		}
		else
		{
			//line 104 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			action = action;
		}
		
		//line 105 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		if (( ( action == -1 ) && (( ( ( maskedAction == android.view.MotionEvent.ACTION_UP ) || ( maskedAction == android.view.MotionEvent.ACTION_POINTER_UP ) ) || ( maskedAction == android.view.MotionEvent.ACTION_CANCEL ) )) )) 
		{
			//line 106 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			action = 2;
		}
		else
		{
			//line 106 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			action = action;
		}
		
		//line 108 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		switch (action)
		{
			case 1:
			{
				//line 110 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
				int pointerCount = event.getPointerCount();
				//line 111 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
				{
					//line 111 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					int _g1 = 0;
					//line 111 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					while (( _g1 < pointerCount ))
					{
						//line 111 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						int i = _g1++;
						//line 112 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						this.queueEvent(new com.ktxsoftware.kha.OnTouchRunner(this.renderer, event.getPointerId(i), event.getX(i), event.getY(i), action));
					}
					
				}
				
				//line 109 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
				break;
			}
			
			
			default:
			{
				//line 116 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
				this.queueEvent(new com.ktxsoftware.kha.OnTouchRunner(this.renderer, event.getPointerId(index), event.getX(index), event.getY(index), action));
				//line 116 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
				break;
			}
			
		}
		
		//line 118 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		return true;
	}
	
	
	public boolean onKeyDown(int keyCode, android.view.KeyEvent event)
	{
		//line 122 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		if (( ( ( event.getKeyCode() == android.view.KeyEvent.KEYCODE_VOLUME_DOWN ) || ( event.getKeyCode() == android.view.KeyEvent.KEYCODE_VOLUME_MUTE ) ) || ( event.getKeyCode() == android.view.KeyEvent.KEYCODE_VOLUME_UP ) )) 
		{
			//line 125 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			return false;
		}
		
		//line 132 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		this.queueEvent(new com.ktxsoftware.kha.OnKeyDownRunner(this.renderer, keyCode));
		//line 133 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		return true;
	}
	
	
	public boolean onKeyUp(int keyCode, android.view.KeyEvent event)
	{
		//line 137 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		if (( ( ( event.getKeyCode() == android.view.KeyEvent.KEYCODE_VOLUME_DOWN ) || ( event.getKeyCode() == android.view.KeyEvent.KEYCODE_VOLUME_MUTE ) ) || ( event.getKeyCode() == android.view.KeyEvent.KEYCODE_VOLUME_UP ) )) 
		{
			//line 140 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			return false;
		}
		
		//line 142 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		this.queueEvent(new com.ktxsoftware.kha.OnKeyUpRunner(this.renderer, keyCode));
		//line 143 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		return true;
	}
	
	
	public boolean __hx_deleteField(java.lang.String field)
	{
		//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		return false;
	}
	
	
	public java.lang.Object __hx_lookupField(java.lang.String field, boolean throwErrors, boolean isCheck)
	{
		//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		if (isCheck) 
		{
			//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			return haxe.lang.Runtime.undefined;
		}
		else
		{
			//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			if (throwErrors) 
			{
				//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
				throw haxe.lang.HaxeException.wrap("Field not found.");
			}
			else
			{
				//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
				return null;
			}
			
		}
		
	}
	
	
	public double __hx_lookupField_f(java.lang.String field, boolean throwErrors)
	{
		//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		if (throwErrors) 
		{
			//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			throw haxe.lang.HaxeException.wrap("Field not found or incompatible field type.");
		}
		else
		{
			//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			return 0.0;
		}
		
	}
	
	
	public java.lang.Object __hx_lookupSetField(java.lang.String field, java.lang.Object value)
	{
		//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		throw haxe.lang.HaxeException.wrap("Cannot access field for writing.");
	}
	
	
	public double __hx_lookupSetField_f(java.lang.String field, double value)
	{
		//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		throw haxe.lang.HaxeException.wrap("Cannot access field for writing or incompatible type.");
	}
	
	
	public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		{
			//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			{
				//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
				return this.__hx_lookupSetField_f(field, value);
			}
			
		}
		
	}
	
	
	public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		{
			//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			boolean __temp_executeDef1 = true;
			//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			switch (field.hashCode())
			{
				case 1821628547:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("inputManager")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						this.inputManager = ((android.view.inputmethod.InputMethodManager) (value) );
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return value;
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case -494845757:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("renderer")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						this.renderer = ((com.ktxsoftware.kha.KhaRenderer) (value) );
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return value;
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
			}
			
			//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			if (__temp_executeDef1) 
			{
				//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
				return this.__hx_lookupSetField(field, value);
			}
			else
			{
				//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
				throw null;
			}
			
		}
		
	}
	
	
	public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		{
			//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			boolean __temp_executeDef1 = true;
			//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			switch (field.hashCode())
			{
				case 861309807:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("getApplicationWindowToken")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getApplicationWindowToken")) );
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case -494845757:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("renderer")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return this.renderer;
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case -864180046:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("setOnTouchListener")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setOnTouchListener")) );
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case 1821628547:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("inputManager")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return this.inputManager;
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case -78036019:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("setFocusableInTouchMode")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setFocusableInTouchMode")) );
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case 1322351027:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("initInputManager")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "initInputManager")) );
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case -1126567952:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("setFocusable")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setFocusable")) );
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case -348232188:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("showKeyboard")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "showKeyboard")) );
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case 1494474565:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("setRenderer")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setRenderer")) );
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case 1065964361:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("hideKeyboard")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "hideKeyboard")) );
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case -2120115151:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("setEGLConfigChooser")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setEGLConfigChooser")) );
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case -1336101728:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("onTouch")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "onTouch")) );
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case -609517178:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("setEGLContextClientVersion")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setEGLContextClientVersion")) );
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case 520351938:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("onKeyDown")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "onKeyDown")) );
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case -1544926684:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("setPreserveEGLContextOnPause")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setPreserveEGLContextOnPause")) );
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case -1344707909:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("onKeyUp")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "onKeyUp")) );
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case 1463983852:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("onResume")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "onResume")) );
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case 1897819145:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("queueEvent")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "queueEvent")) );
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case -1340212393:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("onPause")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "onPause")) );
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
			}
			
			//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			if (__temp_executeDef1) 
			{
				//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
				return this.__hx_lookupField(field, throwErrors, isCheck);
			}
			else
			{
				//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
				throw null;
			}
			
		}
		
	}
	
	
	public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		{
			//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			{
				//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
				return this.__hx_lookupField_f(field, throwErrors);
			}
			
		}
		
	}
	
	
	public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		{
			//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			int __temp_hash2 = field.hashCode();
			//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			boolean __temp_executeDef1 = true;
			//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			switch (__temp_hash2)
			{
				case 861309807:
				case -864180046:
				case -78036019:
				case -1126567952:
				case 1494474565:
				case -2120115151:
				case -609517178:
				case -1544926684:
				case 1463983852:
				case -1340212393:
				case 1897819145:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (( (( ( __temp_hash2 == 861309807 ) && field.equals("getApplicationWindowToken") )) || ( (( ( __temp_hash2 == -864180046 ) && field.equals("setOnTouchListener") )) || ( (( ( __temp_hash2 == -78036019 ) && field.equals("setFocusableInTouchMode") )) || ( (( ( __temp_hash2 == -1126567952 ) && field.equals("setFocusable") )) || ( (( ( __temp_hash2 == 1494474565 ) && field.equals("setRenderer") )) || ( (( ( __temp_hash2 == -2120115151 ) && field.equals("setEGLConfigChooser") )) || ( (( ( __temp_hash2 == -609517178 ) && field.equals("setEGLContextClientVersion") )) || ( (( ( __temp_hash2 == -1544926684 ) && field.equals("setPreserveEGLContextOnPause") )) || ( (( ( __temp_hash2 == 1463983852 ) && field.equals("onResume") )) || ( (( ( __temp_hash2 == -1340212393 ) && field.equals("onPause") )) || field.equals("queueEvent") ) ) ) ) ) ) ) ) ) )) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case 1322351027:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("initInputManager")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						this.initInputManager(((com.ktxsoftware.kha.KhaActivity) (dynargs.__get(0)) ));
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case -1344707909:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("onKeyUp")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return this.onKeyUp(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ), ((android.view.KeyEvent) (dynargs.__get(1)) ));
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case -348232188:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("showKeyboard")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						this.showKeyboard();
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case 520351938:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("onKeyDown")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return this.onKeyDown(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ), ((android.view.KeyEvent) (dynargs.__get(1)) ));
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case 1065964361:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("hideKeyboard")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						this.hideKeyboard();
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
				case -1336101728:
				{
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					if (field.equals("onTouch")) 
					{
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						__temp_executeDef1 = false;
						//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
						return this.onTouch(((android.view.View) (dynargs.__get(0)) ), ((android.view.MotionEvent) (dynargs.__get(1)) ));
					}
					
					//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
					break;
				}
				
				
			}
			
			//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
			if (__temp_executeDef1) 
			{
				//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
				return ((haxe.lang.Function) (this.__hx_getField(field, true, false, false)) ).__hx_invokeDynamic(dynargs);
			}
			
		}
		
		//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		return null;
	}
	
	
	public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		baseArr.push("inputManager");
		//line 62 "/usr/local/lib/haxe/lib/kha/git/Backends/Android/com/ktxsoftware/kha/KhaView.hx"
		baseArr.push("renderer");
	}
	
	
}

