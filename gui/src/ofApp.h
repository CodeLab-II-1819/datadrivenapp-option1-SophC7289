#pragma once
#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void background(); //Declare background
		//ofTrueTypeFont myTitle; //Declare font object
		ofImage myIcon;
};
