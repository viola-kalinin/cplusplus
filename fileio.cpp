#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char * argv[]){
  ofstream fout;
  fout.open("test.txt"); //output to this file
  //fout.open("test.txt", ios::app) //append to this file
  fout << "hello world!" << endl; //change cout to fout
  fout.close(); //very important

  fstream fin;
  string line;
  try{
    fin.open(argv[1]);
    if(!fin){
      throw string ("file does not exist\n"); 
    }

  }
  catch(string err){
    cout <<err; 
  }
  
  while(getline(fin, line)){ //change cin to fin
    cout << line << endl;
  }
  fin.close();
  return 0;
}
