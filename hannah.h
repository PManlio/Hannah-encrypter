#pragma once
#include "headers.h"

class Hannah {
public:
	Hannah();
	string GetWord();
	string SetWord(string);
	void Init();
	
private:

	// TODO change this to an array of chars [max length == 21]
	string word;
};