//counting vowels and consonants from command line 
// must run using ./filename argument1

#include <iostream>
#include <string>
using namespace std;
int main(int argc, char * argv []) {
    string in = argv[1];
    int vcount =0;
    int ccount = 0;
        for (char a : in){
            if(a == 'a'||a == 'e'||a == 'i'||a == 'o'||a == 'u' ){
            vcount++;
        }
        else if(!isalpha(a)){
            cout << "bad" << endl;
            //break; will only break out of loop, not program
            return 1;
        }
        else{
            ccount++;
        }
    }
    cout << "vowel: " << vcount << endl;
    cout << "consonant: " << ccount << endl;
    return 0;
}