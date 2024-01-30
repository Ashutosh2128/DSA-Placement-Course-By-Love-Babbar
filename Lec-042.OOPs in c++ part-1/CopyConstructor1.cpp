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

    void print() {
        cout << "health " << health << endl;
        cout << "level " << level << endl;
    }
};

int main() {
    Hero a(16, 'A');
    a.print();

    //Copy constructor
    Hero b(a);
    b.print();
}