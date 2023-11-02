#include <iostream>
using namespace std;

int main(){
    int x = 10; 
    cout << x << endl; //10
    cout << &x << endl; // address of x
    //pointers
    int* p = &x; //pointer to variable
    x = 20; 
    cout << p << endl; //address of x
    cout << *p << endl; // value of x, now 20
    cout << &p << endl; //address of pointer, different from address of x
    
    int ** q = &p; //pointer to pointer
    cout << &q <<endl; //address of pointer, different from address of p
    cout << **q << endl; // value of x
    cout << *q << endl; //address of p
    
    //references
    int &r = x; //makes "alias" for x
    cout << r << endl;  //value of x
    cout << &r << endl; //address of x, because reference shares address

    //arrays
    int arr[5] = {5,6,7,8,9}; 
    int *ptr = &arr[0]; //point to beginning of array
    for(int i = 0; i < 5; i++){
        cout << *ptr << endl; //print element
        cout << ptr << endl; //print address of element
        ptr++; 
    }
}