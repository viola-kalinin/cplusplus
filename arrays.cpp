#include <iostream>
#include <string>

using namespace std;

void multiple(int my_array[5], int len){
    for (int a = 0; a < len; a++){
        my_array[a] = (my_array[a]* 5);
    }
}

int count(string my_array[], int len){
    int uppers = 0; 
    for(int in = 0; in < len; in++){
        for(int inner = 0; inner < my_array[in].size(); inner ++){
            if(isupper(my_array[in][inner])){
                uppers ++; 
            }
        }
        
    }
    return uppers; 
}

int main(){
    //2-D arrays
    string arr[] = {"Hello", "i", "Have", "tWo", "doGs"};
    int length = sizeof(arr)/sizeof(string);
    for (string a: arr){
        cout << a << endl;
    }
    cout << "number of uppercase letters: " << count(arr, length) << endl; 

    //modify array
    int arr2 [] = {1,2,3,4,5};
    int length2 = sizeof(arr)/sizeof(int);
    multiple(arr2, length2);
    for (int a: arr2){
        cout << a << endl;
    } 


    //dynamic arrays
    int size, num; 
    cout << "enter an array size: "; 
    cin >> size; 
    int* dynamic; 
    dynamic = new int[size]; 
    for(int a = 0; a < size; a ++){
        cout << "enter a value: "; 
        cin >> num; 
        dynamic[a]= num; 
    }
    for(int a = 0; a < size; a ++){
        cout << dynamic[a]<<endl; 
    }
}