#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char * argv[]){
    ifstream fin;
    ofstream out_file;
    try {
        fin.open("test.txt"); 
        if(!fin) {
            throw string("file does not exist");
        }
    }
    catch(string err){
        cout<<err; 
    }
    out_file.open(argv[1]); 
    string line;
    while(getline(fin,line)){
        for (char a: line){
            if (isupper(a)){
                out_file << char(tolower(a)); 
            }
            else if(islower(a)){ 
                out_file << char(toupper(a));
            }
            else{
                out_file << a;
            }
        }
        out_file << endl;
    }
    fin.close();
    out_file.close();
}