// Generated by Haxe 3.3.0
package kha.audio1;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public interface AudioChannel extends haxe.lang.IHxObject
{
	void play();
	
	void pause();
	
	void stop();
	
	double get_length();
	
	double get_position();
	
	double get_volume();
	
	double set_volume(double value);
	
	boolean get_finished();
	
}


