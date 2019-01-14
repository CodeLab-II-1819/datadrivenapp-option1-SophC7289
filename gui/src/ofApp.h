#pragma once
#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void background(); //Declare background
		ofTrueTypeFont myTitle; //Declare title object
		ofImage myIcon; //Declare image object
		ofTrueTypeFont myText; //Declare text object
};
