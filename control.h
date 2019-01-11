#include <hanna.h>

string checkLen(string);

string checkLen(string w){
    while(w.lenght()<=4 || w.lenght()>=16){
        Hannah::SetWord();
    }
}