let project = new Project('HelloKha');
project.addAssets('Assets/**');
project.addSources('Sources');
//project.addLibrary('AWSMobileHubHx');
project.addLibrary('share_kha_master');

resolve(project);
