#include <iostream>
using namespace std;

class Hero {
    //properties
    int value;
    char name;
};

int main() {
    //create object of Hero class
    Hero h1;

    cout << "size " << sizeof(h1) << endl;
}