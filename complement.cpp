#include <iostream>
#include <string>
using namespace std;

int main(int argc, char * argv[]) {
    string dna = argv[1]; 
    string complement;

    for (char n: dna) {
        switch (n) {
            case 'A':
                complement += 'T';
                break;
            case 'T':
                complement += 'A';
                break;
            case 'C':
                complement += 'G';
                break;
            case 'G':
                complement += 'C';
                break;
            default:
                return 1; 
        }
    }
    cout << "Complement: " << complement << endl;
    return 0;
}
