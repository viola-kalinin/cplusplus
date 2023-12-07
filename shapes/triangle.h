#include "box.h"
//inheritance example
class Triangle: public Box{
    public:
        int get_area(){return width* height * 0.5;}
        Triangle();
        Triangle(int w, int h); 
        using Box::display;
        void display(string type); 
};
