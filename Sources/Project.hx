package;

import kha.Framebuffer;
import kha.Color;
import kha.System;
import kha.Assets;
import kha.Font;
import aws.mobile.AWSMobileHubHx;

class Project {
	public var font1:Font;

	public function new() {
		Assets.loadEverything(loadedEverything);
	}

	public function loadedEverything() {
		font1 = Assets.fonts.OpenSans_Regular;
		#if (sys_ios || sys_android_native)
		AWSMobileHubHx.helloFromMobileHub();
		#end
		System.notifyOnRender(render);
	}


	function render(framebuffer: Framebuffer): Void {	
		var graphic = framebuffer.g2;
		graphic.begin();

		graphic.font = font1;
		graphic.fontSize = 64;
		graphic.color = Color.White;
		graphic.drawString('Hello from Kha', 10, 20);

		graphic.end();

	}
}
