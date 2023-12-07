#include "triangle.h"
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