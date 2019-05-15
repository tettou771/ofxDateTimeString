#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofDrawBitmapStringHighlight(ofxDateTimeString::getDate()
		+ '\n' + ofxDateTimeString::getTime()
		+ '\n' + ofxDateTimeString::getMillis()
		+ '\n' + ofxDateTimeString::getDateTime()
		+ '\n' + ofxDateTimeString::getDateTimeMillis()
		, 10, 10);
}