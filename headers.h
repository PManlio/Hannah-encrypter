#pragma once
#include <iostream>
#include <string>
#include <bitset>

// NOT necessary if running on Windows via Visual Studio 2017
#if defined(__unix__)
    #include <algorithm>
#endif
// Necessary, instead, if running on Ubuntu or other Unix-like systems

// I'll use only std methods, so it is safe to use namespace std
using namespace std;