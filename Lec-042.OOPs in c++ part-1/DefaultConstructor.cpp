#include <iostream>
using namespace std;

class Hero {
    public:
    //create default constructor
    Hero() {
        cout << "Default constructor called" << endl;
    }
};

int main() {
    //statically
    Hero a;

    //dynamically
    Hero *b = new Hero;
}