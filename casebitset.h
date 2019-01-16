#include <bitset>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

string CaseOfBits(string, string);

string CaseOfBits(string str1, string str2){
    string retString;
    int len = str1.length();
    
    
    switch (len)
    {
        case 40: {
            bitset<40> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            retString = to_string(finale.to_ullong());
        } break;
        case 48: {
            bitset<48> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            retString = to_string(finale.to_ullong());
        } break;
        case 56: {
            bitset<56> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            retString = to_string(finale.to_ullong());
        } break;
        case 64: {
            bitset<64> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            retString = to_string(finale.to_ullong());
        } break;
        case 72: {
            bitset<72> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            retString = to_string(finale.to_ullong());
        } break;
        case 80: {
            bitset<80> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            retString = to_string(finale.to_ullong());
        } break;
        case 88: {
            bitset<88> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            retString = to_string(finale.to_ullong());
        } break;
        case 96: {
            bitset<96> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            retString = to_string(finale.to_ullong());
        } break;
        case 104: {
            bitset<104> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            retString = to_string(finale.to_ullong());
        } break;
        case 112: {
            bitset<112> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            retString = to_string(finale.to_ullong());
        } break;
        case 120: {
            bitset<120> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            retString = to_string(finale.to_ullong());
        } break;
        case 128: {
            bitset<128> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            retString = to_string(finale.to_ullong());
        } break;    
        default: {
            cout<<"Invalid string.length()\n";
        } break;
    }
    return retString;
}