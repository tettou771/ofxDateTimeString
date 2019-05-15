#include "ofxDateTimeString.h"



ofxDateTimeString::ofxDateTimeString() {
}


ofxDateTimeString::~ofxDateTimeString() {
}

string ofxDateTimeString::getDateTime(string delimiter) {
	return getDate() + delimiter + getTime();
}

string ofxDateTimeString::getDateTimeMillis(string delimiter) {
	return getDate() + delimiter + getTime() + delimiter + getMillis();
}

string ofxDateTimeString::getDate(string delimiter) {
	return ofToString(ofGetYear(), 4, '0')
		+ delimiter
		+ ofToString(ofGetMonth(), 2, '0')
		+ delimiter
		+ ofToString(ofGetDay(), 2, '0');
}

string ofxDateTimeString::getTime(string delimiter) {
	return ofToString(ofGetHours(), 2, '0')
		+ delimiter
		+ ofToString(ofGetMinutes(), 2, '0')
		+ delimiter
		+ ofToString(ofGetSeconds(), 2, '0');
}

string ofxDateTimeString::getMillis() {
	return ofToString(ofGetSystemTimeMillis() % 1000, 3, '0');
}
