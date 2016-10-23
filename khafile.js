let project = new Project('HelloKha');
project.addAssets('Assets/**');
project.addSources('Sources');
project.addLibrary('AWSMobileHubHx');
resolve(project);
