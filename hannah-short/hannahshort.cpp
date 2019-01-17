#include "headers.h"
#include "casebitset.h"
// safe to use namespace std; we're using only this namespace
using namespace std;

bool ispal;

bool isPalindrome(string);
string toBit(string);
string encrypt(string);

int main(int argc, char** argv){
    // argv[0] == ./exe
    // argv[1] == word to encrypt
    if(argc != 2){
        cout << "\nYou have to pass the encrypter only a word.\n";
        exit(0); 
    }
    string word = argv[1];
    if(word.length()<5 || word.length()>8){
        cout<< "\nWord length must be between 5 and 8 chars.\n";
        exit(0);
    }

    isPalindrome(word);
    if(ispal==true){
        cout<< "\nWord must not be a palindrome.\n";
        exit(0);
    }
    string input = toBit(word);
    string output = encrypt(input);
}

bool isPalindrome(string instr){
    string rvstr = instr;
	reverse(rvstr.begin(), rvstr.end());
	if (instr == rvstr) {
		cout << "\nIt has NOT to be a palindrome.\n\n";
		ispal = true;
	} else { ispal = false; }
	return ispal;
}

string toBit(string w){
    string crypted = "";
	bitset<8> newbits;
	for (size_t i = 0; i < w.size(); ++i) {
		newbits = bitset<8>(w.c_str()[i]);
		string aux = newbits.to_string<char, std::string::traits_type, std::string::allocator_type>();
		crypted.append(aux);
	}
	cout << w << " in bit: " << crypted << endl << endl;
	return crypted;
}

string encrypt(string w){
    string reversed = w;
    reverse(reversed.begin(), reversed.end());
    string ret = CaseOfBits(w, reversed);
    cout<<endl<<ret<<endl;
    return ret;
}