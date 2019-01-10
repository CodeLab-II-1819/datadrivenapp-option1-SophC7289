#include "ofMain.h"
#include "ofApp.h"
using namespace std;

int main( ){
	ofGLFWWindowSettings settings;
	settings.resizable = false; //The user cannot resize the window
	settings.setSize(800, 700); //Console window size
	ofCreateWindow(settings);
	return ofRunApp(new ofApp());

}
