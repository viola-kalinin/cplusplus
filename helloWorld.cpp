// Your First C++ Program

#include <iostream> //Before compilation, these directives are interpreted to determine which libraries or code to include. This is for input/ output
using namespace std; //allows use of names of objects and variables from the standard library

int main() { //All C++ programs begin with the execution of this function, regardless of its location in the source code
    cout << "Hello World!" << endl; //cout is the character output device. << is the insertion operator.
    //if not using namespace std, we would use std::cout and std::endl
    return 0; //because main is defined as returning int, we return 0 to signify that the program ran without errors
}
