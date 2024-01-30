#include <iostream>
using namespace std;

class Hero {
    private:
    int health;
    char level;

    public:
    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }
};

int main() {
    //Create object statically
    Hero a;

    a.setHealth(70);
    a.setLevel('A');

    cout << "health " << a.getHealth() << endl;
    cout << "level " << a.getLevel() << endl;

    //Create objerct dynamically
    Hero *b = new Hero;

    //type-I
    b -> setHealth(80);
    b -> setLevel('B');

    cout << "health " << (*b).getHealth() << endl;
    cout << "level " << (*b).getLevel() << endl;

    //type-II
    cout << "health " << b -> getHealth() << endl;
    cout << "level " << b -> getLevel() << endl;
}