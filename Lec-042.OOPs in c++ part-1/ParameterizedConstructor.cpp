#include <iostream>
using namespace std;

class Hero {
    public:
    int health;

    Hero(int health) {
        cout << "this -> "<< this << endl;
        this -> health = health;
    }

    void print() {
        cout << "health " << health << endl;
    }
};

int main() {
    Hero a(8);

    a.print();

    cout << "Address of a " << &a << endl;
}