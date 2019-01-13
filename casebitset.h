#include <bitset>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

string CaseOfBits(string, string);

string CaseOfBits(string str1, string str2){
    int len = str1.length();
    string retString;
    
    switch (len)
    {
        case 5: {
            bitset<40> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            cout << finale;
            retString = finale.to_string<char, std::string::traits_type, std::string::allocator_type>();
        } break;
        case 6: {
            bitset<48> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            cout << finale;
            retString = finale.to_string<char, std::string::traits_type, std::string::allocator_type>();
        } break;
        case 7: {
            bitset<56> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            cout << finale;
            retString = finale.to_string<char, std::string::traits_type, std::string::allocator_type>();
        } break;
        case 8: {
            bitset<64> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            cout << finale;
            retString = finale.to_string<char, std::string::traits_type, std::string::allocator_type>();
        } break;
        case 9: {
            bitset<72> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            cout << finale;
            retString = finale.to_string<char, std::string::traits_type, std::string::allocator_type>();
        } break;
        case 10: {
            bitset<80> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            cout << finale;
            retString = finale.to_string<char, std::string::traits_type, std::string::allocator_type>();
        } break;
        case 11: {
            bitset<88> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            cout << finale;
            retString = finale.to_string<char, std::string::traits_type, std::string::allocator_type>();
        } break;
        case 12: {
            bitset<96> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            cout << finale;
            retString = finale.to_string<char, std::string::traits_type, std::string::allocator_type>();
        } break;
        case 13: {
            bitset<104> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            cout << finale;
            retString = finale.to_string<char, std::string::traits_type, std::string::allocator_type>();
        } break;
        case 14: {
            bitset<112> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            cout << finale;
            retString = finale.to_string<char, std::string::traits_type, std::string::allocator_type>();
        } break;
        case 15: {
            bitset<120> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            cout << finale;
            retString = finale.to_string<char, std::string::traits_type, std::string::allocator_type>();
        } break;
        case 16: {
            bitset<128> bstr1(str1), bstr2(str2), finale;
	        finale = bstr1 | bstr2; // here it is done the bitwise OR
            cout << finale;
            retString = finale.to_string<char, std::string::traits_type, std::string::allocator_type>();
        } break;    
        default:
            break;
    }
    return retString;
}