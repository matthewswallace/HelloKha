// Generated by Haxe 3.3.0
package kha;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TimeTask extends haxe.lang.HxObject
{
	public TimeTask(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public TimeTask()
	{
		//line 16 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
		kha.TimeTask.__hx_ctor_kha_TimeTask(this);
	}
	
	
	public static void __hx_ctor_kha_TimeTask(kha.TimeTask __temp_me68)
	{
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
		return new kha.TimeTask(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
		return new kha.TimeTask();
	}
	
	
	public haxe.lang.Function task;
	
	public double start;
	
	public double period;
	
	public double duration;
	
	public double next;
	
	public int id;
	
	public int groupId;
	
	public boolean active;
	
	public boolean paused;
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
		{
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
			boolean __temp_executeDef1 = true;
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
			switch (field.hashCode())
			{
				case 293428218:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("groupId")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						this.groupId = ((int) (value) );
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return value;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case 109757538:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("start")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						this.start = ((double) (value) );
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return value;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case 3355:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("id")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						this.id = ((int) (value) );
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return value;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case -991726143:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("period")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						this.period = ((double) (value) );
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return value;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case 3377907:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("next")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						this.next = ((double) (value) );
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return value;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case -1992012396:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("duration")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						this.duration = ((double) (value) );
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return value;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
			}
			
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
			if (__temp_executeDef1) 
			{
				//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
		{
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
			boolean __temp_executeDef1 = true;
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
			switch (field.hashCode())
			{
				case -995321554:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("paused")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						this.paused = haxe.lang.Runtime.toBool(value);
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return value;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case 3552645:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("task")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						this.task = ((haxe.lang.Function) (value) );
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return value;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case -1422950650:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("active")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						this.active = haxe.lang.Runtime.toBool(value);
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return value;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case 109757538:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("start")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						this.start = ((double) (haxe.lang.Runtime.toDouble(value)) );
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return value;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case 293428218:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("groupId")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						this.groupId = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return value;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case -991726143:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("period")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						this.period = ((double) (haxe.lang.Runtime.toDouble(value)) );
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return value;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case 3355:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("id")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						this.id = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return value;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case -1992012396:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("duration")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						this.duration = ((double) (haxe.lang.Runtime.toDouble(value)) );
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return value;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case 3377907:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("next")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						this.next = ((double) (haxe.lang.Runtime.toDouble(value)) );
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return value;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
			}
			
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
			if (__temp_executeDef1) 
			{
				//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
		{
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
			boolean __temp_executeDef1 = true;
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
			switch (field.hashCode())
			{
				case -995321554:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("paused")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return this.paused;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case 3552645:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("task")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return this.task;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case -1422950650:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("active")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return this.active;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case 109757538:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("start")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return this.start;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case 293428218:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("groupId")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return this.groupId;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case -991726143:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("period")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return this.period;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case 3355:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("id")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return this.id;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case -1992012396:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("duration")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return this.duration;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case 3377907:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("next")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return this.next;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
			}
			
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
			if (__temp_executeDef1) 
			{
				//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
		{
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
			boolean __temp_executeDef1 = true;
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
			switch (field.hashCode())
			{
				case 293428218:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("groupId")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return ((double) (this.groupId) );
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case 109757538:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("start")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return this.start;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case 3355:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("id")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return ((double) (this.id) );
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case -991726143:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("period")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return this.period;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case 3377907:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("next")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return this.next;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
				case -1992012396:
				{
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					if (field.equals("duration")) 
					{
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
						return this.duration;
					}
					
					//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
					break;
				}
				
				
			}
			
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
			if (__temp_executeDef1) 
			{
				//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
		baseArr.push("paused");
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
		baseArr.push("active");
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
		baseArr.push("groupId");
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
		baseArr.push("id");
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
		baseArr.push("next");
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
		baseArr.push("duration");
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
		baseArr.push("period");
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
		baseArr.push("start");
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
		baseArr.push("task");
		//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
		{
			//line 3 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/Scheduler.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


