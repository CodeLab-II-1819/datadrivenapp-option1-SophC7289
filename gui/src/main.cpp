#include "ofMain.h"
#include "ofApp.h"
using namespace std;

int main( ){
	//ofSetupOpenGL(1024,768,OF_WINDOW); //Screen size of the console window
	ofGLFWWindowSettings settings;
	settings.resizable = false;
	settings.setSize(800, 700);
	ofCreateWindow(settings);
	return ofRunApp(new ofApp());

}
