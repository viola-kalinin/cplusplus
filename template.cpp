#include <iostream>
using namespace std;

template <class T> 
class Twos{
    private:
        T x,y; 
    public:
        Twos(T a, T b){
            x = a; 
            y = b;
        }
        T maximum(){
            T v; 
            if (x>y){
                v = x; 
            }
            else{
                v = y; 
            }
            return v; 
        }
}; 
int main(){
    Twos<int> obj(10,20); 
    cout << obj.maximum() <<endl; 
    Twos<char> obj2('a','b'); 
    cout << obj2.maximum() << endl;

}