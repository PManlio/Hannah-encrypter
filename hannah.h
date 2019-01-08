#pragma once
#include "headers.h"

class Hannah {
public:
	Hannah();

	string GetWord();
	string SetWord();
	string GetEncrypted();
	string GetInverted();

	void Init();
	string ToBit();

	string Invert(string);
	string Encrypt();
	
private:
	string word;
	string encrypted;
	string inverted;
};