#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char * argv[]){
    ifstream fin;
    ofstream fout;
    try {
        fin.open("test.txt"); 
        if(!fin) {
            throw string("file does not exist");
        }
    }
    catch(string err){
        cout<<err; 
    }
    fout.open(argv[1]); 
    string line;
    while(getline(fin,line)){
        for (char a: line){
            if (isupper(a)){
                fout << char(tolower(a)); 
            }
            else if(islower(a)){ 
                fout << char(toupper(a));
            }
            else{
                fout << a;
            }
        }
        fout << endl;
    }
    fin.close();
    fout.close();
}