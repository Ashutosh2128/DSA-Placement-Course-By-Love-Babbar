#include <iostream>
using namespace std;

class Hero {
    //properties
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
    Hero ramesh;

    ramesh.setHealth(80);
    ramesh.setLevel('B');

    cout << "health is: " << ramesh.getHealth() << endl;
    cout << "level is: " << ramesh.getLevel() << endl;
}