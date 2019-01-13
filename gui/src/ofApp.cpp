#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(214,239,255); //Declaring the set up of the background colour
	//myTitle.load("SergiTete", 30);
	myIcon.load("Bird.png");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	//myTitle.drawString("Tweet Tweet", 10, 10);
	myIcon.draw(10, 20, 220, 150);

}
