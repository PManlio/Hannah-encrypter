#include "hannah.h"

Hannah::Hannah(){
	Init();
}

string Hannah::SetWord() {
	cout << "\n Please set the word you want to encrypt (not a palindrome): " << endl;
	getline(cin, word);
	isPalindrome(word);
	// TODO when switch to terminal, it calls directly SetWord() method
	//		in order to do this, change SetWord() in SetWord(string)
	return word;
}

string Hannah::GetWord() { return word; }

string Hannah::GetEncrypted(){ return encrypted; }

string Hannah::GetInverted(){ return inverted; }

void Hannah::Init(){
	while (ispal == true) {
		SetWord();
	}
	encrypted = ToBit();
	Invert(encrypted);
}

// Here we take the word we just set and convert it into bit sequence
string Hannah::ToBit(){
	string toencrypt = Hannah::GetWord();
	string crypted = "";
	bitset<8> newbits;

	// every letter/number of the string you set is converted in a substring of 8-bit
	for (size_t i = 0; i < toencrypt.size(); ++i) {
		// Here you save the 8-bit value of the current letter of the string
		newbits = bitset<8>(toencrypt.c_str()[i]);
		// Then you use an auxiliar string to stringify the 8-bit value of the letter
		string aux = newbits.to_string<char, std::string::traits_type, std::string::allocator_type>();
		// Here you add every 8-bit-substring to the master string that has to be returned
		crypted.append(aux);
	}
	cout << toencrypt << " in bit: " << crypted << endl << endl;
	return crypted;
}

// Here you invert the order of the master bit-string
string Hannah::Invert(string encrypted){
	inverted = encrypted;
	reverse(inverted.begin(), inverted.end());
	return inverted;
}

// Here the encryption takes place
string Hannah::Encrypt()
{
	string str1 = Hannah::GetEncrypted(); // this string is the one you set converted in bit-sequence
	string str2 = Hannah::GetInverted();  // this string is the reversed one

	// const size_t sizeofstr1 = str1.size();
	// for now, we use 64 bits
	bitset<128> bstr1(str1), bstr2(str2), finale;
	finale = bstr1 | bstr2; // here it is done the bitwise OR
	cout << finale;

	string ret = finale.to_string<char, std::string::traits_type, std::string::allocator_type>();
	return ret;
}

// With this method, you check if the word you set is or isn't a palindrome
// this because a palindrome would cause the output to be = '000000000000000...'
bool Hannah::isPalindrome(string instr){
	string rvstr = instr;
	reverse(rvstr.begin(), rvstr.end());
	if (instr == rvstr) {
		cout << "\nIt has NOT to be a palindrome.\n\n";
		ispal = true;
	} else { ispal = false; }
	return ispal;
}
