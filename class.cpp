#include <iostream>
#include <string>
#include "class.h"
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


//inheritance example
class Triangle: public Box{
    public:
        int get_area(){return width* height * 0.5;}
        Triangle();
        Triangle(int w, int h); 
        using Box::display;
        void display(string type); 
};
//use Box default constructor
Triangle::Triangle():Box(){};

//use Box overloaded constructor 
Triangle::Triangle(int w, int h):Box(w,h){}; 

//overload display() function
void Triangle::display(string type){
     cout << width << " " << height << " " << type <<endl; 
}

//main "driver"
int main(){
    Box a;
    a.display();
    Box b (2,2);
    b.display(); 
    cout << "Default box area: " << a.get_area() << endl;
    cout << "2x2 box area: " << b.get_area() << endl;
    //displays static variable (how many boxes were created)
    cout << "Number of Boxes: " << Box::count << endl; 
    Triangle c (4,5); 
    cout << "4*5 Triangle area: " << c.get_area() << endl; // will override 
    //will print out 3 because Triangle is technically also a box
    cout << "Number of Boxes: " << Box::count << endl;
    // overloaded display function
    c.display("isosceles");
    //inherited display
    c.display(); 

    //box pointer to triangle object
    Box* x = &c; 

    cout << "box pointer to triangle object " <<x->get_area() << endl; 
    //cout << "New Triangle area: " << c.get_area() << endl; 
}