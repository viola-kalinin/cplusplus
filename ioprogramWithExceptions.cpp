#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept> 
using namespace std;
int main(){
  const int NUM = 68;  
  int b;  
  string s;
  cout << "Enter an integer" << endl;
  getline(cin, s);
  stringstream my_stream(s);
  my_stream >> b;
  cout << "The sum is: "<< NUM+b << endl;
  cout << "The difference is: "<< NUM-b << endl;
  cout << "The product is: "<< NUM*b << endl;
  try{
    if(b==0){
        //throw(b);
        throw runtime_error("Math bad\n");
    }
    else{
        cout << "The quotient is: "<< NUM/b << endl;
    }
  }
//   catch(int denom){
//     cout<<"tried to divide by " << denom <<endl;
//   }
catch(...){
    cout << "bad" <<endl; 

}
  cout <<  "Error Code: " << my_stream.fail() << endl;
  return 0;
}
