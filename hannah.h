#pragma once
#include "headers.h"

class Hannah {
public:
	Hannah();

	string GetWord();
	string SetWord();
	string GetEncrypted();
	string GetInverted();
	//void checkLen(string);

	void Init();
	string ToBit();

	string Invert(string);
	string Encrypt();
	
	bool ispal = true;
	bool isPalindrome(string);

private:
	string word;
	string encrypted;
	string inverted;
};