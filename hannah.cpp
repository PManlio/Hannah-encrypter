#include "hannah.h"

Hannah::Hannah(){
	Init();
}

string Hannah::SetWord(string w) {
	word = w;
	return word;
}

string Hannah::GetWord(){ return word; }

void Hannah::Init(){
	string pword = "";
	cout << "\t\tSet the word you want to encrypt: " << endl;
	getline(cin, pword);
	SetWord(pword);
}
