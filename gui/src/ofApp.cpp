#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(214,239,255); //Declaring the set up of the background colour
	myTitle.load("titleFont.otf", 90); //Find font file and setting the size
	myIcon.load("Bird.png"); //Find the image file
	myText.load("textFont.otf", 20); //Find font file and sets sixe for text 
	
}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(214, 190, 255); //Changes the colour of the title !!CHANGE COLOUR!!
	myTitle.drawString("Tweet Tweet", 50, 120); //Positioning of title
	ofSetColor(255); //Sets colours back to original
	myIcon.draw(680, 40, 100, 90); //Positioning and size of image
	ofSetColor(255, 165, 0);//Outer shape colour to give the menu box a outline !!CHANGE COLOUR!!
	ofDrawRectRounded(17, 148, 231, 531, 10); //Outer shape rounded rect. to give the menu an outline
	ofSetColor(0, 0, 0); //Sets the menu shape to black !!CHANGE COLOUR!!
	ofDrawRectRounded(21, 151, 224, 524, 10); //Menu shape rounded edged rectangle (x, y, w, h, rounded)
	ofSetColor(255); //Sets colours back to original

}
