#include <iostream>
#include <string>
#include <sstream>
using namespace std;
//simple io program for sum
int main(){
  int a = 24;
  int b;
  string s;
  getline(cin,s);
  stringstream my_stream(s);
  my_stream >> b;
  cout << a+b << endl;
  cout << my_stream.fail() << endl;
  return 0;
}








