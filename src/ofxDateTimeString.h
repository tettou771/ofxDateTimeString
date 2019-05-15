#pragma once
#include "ofMain.h"

class ofxDateTimeString {
public:
	ofxDateTimeString();
	~ofxDateTimeString();

	static string getDateTime(string delimiter = "-");
	static string getDateTimeMillis(string delimiter = "-");

	static string getDate(string delimiter = "_");
	static string getTime(string delimiter = "_");
	static string getMillis();
};

