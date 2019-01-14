#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(214,239,255); //Declaring the set up of the background colour
	myTitle.load("titleFont.otf", 90); //Find font file and setting the size
	myIcon.load("Bird.png"); //Find the image file
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	myTitle.drawString("Tweet Tweet", 50, 120); //Positioning of title
	myIcon.draw(680, 40, 100, 90); //Positioning and size of image

}
