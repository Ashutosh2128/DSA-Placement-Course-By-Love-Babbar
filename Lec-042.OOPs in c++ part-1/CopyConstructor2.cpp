#include <iostream>
using namespace std;

class Hero {
    public:
    int health;
    char level;

    Hero(int health, char level) {
        this -> health = health;
        this -> level = level;
    }

    //Create copy constructor
    Hero(Hero & temp) {
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print() {
        cout << "health " << health << endl;
        cout << "level " << level << endl;
    }
};

int main() {
    Hero a(16, 'A');
    a.print();

    //Copy constructor call
    Hero b(a);
    b.print();
}