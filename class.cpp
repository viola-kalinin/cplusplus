#include <iostream>
using namespace std;
//base class
class Box {
    private:
        int *sides; 
    protected: //so can be accessed by "child" classes
        int width, height; 
    public:
        static int count; //one value accross instances
        int get_width();
        int get_height();
        void set (int w, int h);
        void display(); 
        Box (); 
        ~Box(); 
        Box (int w, int h);
        int get_area();
};
void Box :: set (int w, int h){
    width = w; 
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
    delete [] sides; 
}
//used to access static variable
int Box:: count; 


//inheritance example
class Triangle: public Box{
    public:
        double get_area(){return width* height * 0.5;}
        //Triangle();
};

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
    Triangle c; 
    cout << "Default Triangle area: " << c.get_area() << endl; // will override 
    //will print out 3 because Triangle is technically also a box
    cout << "Number of Boxes: " << Box::count << endl;
    // inherited from Box
    c.display();
    c.set(3,4); 
    cout << "New Triangle area: " << c.get_area() << endl; 
}