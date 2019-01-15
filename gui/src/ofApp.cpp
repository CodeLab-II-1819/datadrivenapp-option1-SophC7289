#include "ofApp.h"

void ofApp::setup(){
	ofBackground(214,239,255); //Declaring the set up of the background colour
	myTitle.load("titleFont.otf", 90); //Find font file and setting the size
	myIcon.load("Bird.png"); //Find the image file
	myText.load("textFont.otf", 20); //Find font file and setting the size for the text of menu
}

void ofApp::draw(){
	ofSetColor(45, 163, 213); //Changes the colour of the title
	myTitle.drawString("Tweet Tweet", 50, 120); //Positioning of title and text
	ofSetColor(255); //Sets colours back to original to stop any colour tint in the image
	myIcon.draw(680, 40, 100, 90); //Positioning and size of image
	ofSetColor(0, 185, 174); //Outer shape colour to give the menu box a outline
	ofDrawRectRounded(17, 148, 231, 531, 10); //Outer shape rounded rect. to give the menu an outline
	ofSetColor(145, 196, 242); //Sets the menu shape colour (inner shape)
	ofDrawRectRounded(21, 151, 224, 524, 10); //Menu shape size and position (inner shape) (x, y, w, h, rounded)
	ofSetColor(229, 91, 42); //This colour represents what category the user has selected 
	myText.drawString("How many...?", 30, 190); //"How many...?" category in menu
	ofSetColor(45, 163, 213); //Text colour for everything else
	myText.drawString("Money", 30, 250); //"Money" category in menu
	myText.drawString("Politics", 30, 310); //"Politics" category in menu
	myText.drawString("Paris", 30, 370); //"Paris" category in menu
	myText.drawString("Dreamworks", 30, 430); //"Dreamworks" category in menu
	myText.drawString("Youtube", 30, 490); //"Youtube" category in menu
	myText.drawString("Animal", 30, 550); //"Animal" category in menu
	myText.drawString("Music", 30, 610); //"Music" category in menu
	myText.drawString("Llama", 30, 670); //"Llama" category in menu
	ofSetColor(0, 185, 174); //Outer shape colour to give the main box a outline
	ofDrawRectRounded(261, 148, 518, 531, 10); //Main box shape and position (outer)
	ofSetColor(145, 196, 242); //Sets the main box colour (inner shape)
	ofDrawRectRounded(265, 151, 509, 524, 10); //Main box shape and position (inner shape)
	ofSetColor(45, 163, 213); //Text colour
	myText.drawString("We are scanning through a total of...", 320, 220); //Information first line
	ofSetColor(229, 91, 42); //Changes the colour of the amount of tweets lines. To make it stand out 
	myText.drawString("63,693 Tweets", 435, 300); //Second line of information
	ofSetColor(45, 163, 213); //Text colour
	myText.drawString("in this file.", 465, 380); //Third line of information
	myText.drawString("(Yes that is a lot of tweets to look through)", 292, 460); //Final line of information
	myText.drawString("Go Back", 300, 650); //Go back to the main home screen
}
