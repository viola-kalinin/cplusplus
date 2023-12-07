#include "triangle.h"

//use Box default constructor
Triangle::Triangle():Box(){};

//use Box overloaded constructor 
Triangle::Triangle(int w, int h):Box(w,h){}; 

//overload display() function
void Triangle::display(string type){
     cout << width << " " << height << " " << type <<endl; 
}
