#include <iostream>
#include <string>
#include "box.h"
using namespace std;
void Box :: set (int x, int h){
    width = x; 
    height = h;
}
void Box :: display (){
    cout << width << " " << height <<endl;
}
int Box:: get_area(){
    return width*height;
}
int Box:: get_height(){
    return height;
}
int Box::get_width(){
    return width;
}
//default constructor
Box :: Box (){
    width = 10; 
    height = 10; 
    sides = new int[4] {10,10,10,10};
    count ++;
}
//overloaded constructor
Box:: Box (int w, int h){
    sides = new int[4] {w,w,h,h};
    width = w; 
    height = h;
    count ++;
}
//destructor
Box :: ~Box(){
    delete sides; 
}
//used to access static variable
int Box:: count; 
