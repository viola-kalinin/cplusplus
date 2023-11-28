#include <iostream>
#include <string>
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
        virtual int get_area(); //virtual so overridden by pointer
};