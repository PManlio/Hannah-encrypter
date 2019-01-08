#include "hannah.h"

Hannah::Hannah(){
	Init();
}

string Hannah::SetWord() {
	//string pword = "";
	cout << "\t\tSet the word you want to encrypt: " << endl;
	getline(cin, word);
	// TODO when switch to terminal, it calls directly SetWord() method
	//		in order to do this, change SetWord() in SetWord(string)
	return word;
}

string Hannah::GetEncrypted(){ return encrypted; }

string Hannah::GetInverted(){ return inverted; }

string Hannah::GetWord(){ return word; }

void Hannah::Init(){
	SetWord();
	encrypted = ToBit();
	Invert(encrypted);
}

string Hannah::ToBit(){
	string toencrypt = Hannah::GetWord();
	string crypted = "";
	bitset<8> newbits;
	for (size_t i = 0; i < toencrypt.size(); ++i) {
		// cout << bitset<8>(toencrypt.c_str()[i]) << endl;

		// Here you save the 8-bit value of the current letter of the string
		newbits = bitset<8>(toencrypt.c_str()[i]);

		// Then you use an auxiliar string to stringify the 8-bit value of the letter
		string aux = newbits.to_string<char, std::string::traits_type, std::string::allocator_type>();
		crypted.append(aux);
	}
	cout << "in bit: " << crypted << endl << endl;
	return crypted;
}

string Hannah::Invert(string encrypted){
	inverted = encrypted;
	reverse(inverted.begin(), inverted.end());
	return inverted;
}

string Hannah::Encrypt()
{
	string str1 = Hannah::GetEncrypted();
	string str2 = Hannah::GetInverted();

	// const size_t sizeofstr1 = str1.size();
	// for now, we use 64 bits
	bitset<128> bstr1(str1), bstr2(str2), finale;
	finale = bstr1 | bstr2;
	cout << finale;

	string ret = finale.to_string<char, std::string::traits_type, std::string::allocator_type>();
	return ret;
}
