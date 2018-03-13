#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
    ofGLWindowSettings settings;
    settings.setGLVersion(3, 2);    // <--- ofxShadertoy NEEDS the GL Programmable Renderer
    settings.width = 1024;
    settings.height = 768;
    ofCreateWindow(settings);       // <-------- setup the GL context

	// this kicks off the running of my app
	ofRunApp(new ofApp());

}
