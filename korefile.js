let fs = require('fs');
let path = require('path');
let project = new Project('HelloKha', __dirname);
project.targetOptions = {"html5":{},"flash":{},"android":{},"ios":{}};
project.setDebugDir('build/ios');
Promise.all([Project.createProject('build/ios-build', __dirname), Project.createProject('/usr/local/lib/haxe/lib/kha/git', __dirname), Project.createProject('/usr/local/lib/haxe/lib/kha/git/Kore', __dirname)]).then((projects) => {
	for (let p of projects) project.addSubProject(p);
	let libs = [];
	if (fs.existsSync(path.join('/usr/local/lib/haxe/lib/awsmobilehubhx', 'korefile.js'))) {
		libs.push(Project.createProject('/usr/local/lib/haxe/lib/awsmobilehubhx', __dirname));
	}
	Promise.all(libs).then((libprojects) => {
		for (let p of libprojects) project.addSubProject(p);
		resolve(project);
	});
});
