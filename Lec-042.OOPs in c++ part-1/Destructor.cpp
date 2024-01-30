#include <iostream>
using namespace std;

class Hero {
    public:

    //constructor
    Hero() {
        cout << "Constructor bhai called" << endl;
    }

    //Destructor
    ~Hero() {
        cout << "Detructor bhai called" << endl;
    }
};

int main() {
    //call statically
    Hero a;

    //call dynamically
    Hero *b = new Hero();
    //delete b; //We have to call destructor manually...
}