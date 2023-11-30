#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main(){
    //array
    array<int, 3> my_array; 
    my_array[0] = 1; 

    //accessing elements
    cout << my_array[0] <<endl;
    cout << get<0>(my_array) <<endl; 
    cout << my_array[1] <<endl;
    
    //returns number of elements instead of number of total bytes
    cout << my_array.size() <<endl; 

    //reassign(copy) arrays
    array<int, 3> second_array = my_array; 
    auto third_array = my_array; //auto specifier recognizes that my_array is 3 ints 

    cout << second_array[0] <<endl; 
    cout << third_array[0] <<endl;  


    //vectors 
    vector <int> vec {5,5,5}; //need to use g++ -std=c++11

    //add elements to back of vector 
    vec.push_back(1); 
    vec.push_back(2);  
    vec.push_back(3); 
    vec.push_back(4); 
    cout << vec.size() << endl;; //grows with each push

    //insert at front 
    vec.insert(vec.begin(), 0); 
    //insert at second index by incrementing begin() pointer
    vec.insert(vec.begin()+2, 2);
    //delete element
    vec.erase(vec.begin() + 3); 
    cout << vec.size() <<endl; //shrinks with each erase

    for(int i: vec){
        cout << i << " "; 
    }
    cout <<endl; 

    //accessing elements 
    cout << vec.at(0) << endl; 
    cout << vec[1] << endl; 

}