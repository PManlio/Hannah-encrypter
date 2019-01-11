#include "hannah.h"

void checkLen(string);

void checkLen(string w){ 
    while(w.length()<=4 || w.length()>=16 || w.length()==0){
        cout<<"\nPlease, enter a word between 5 and 16 characters.\n";
        //SetWord();
    }
}