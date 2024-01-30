#include <iostream>
#include <string.h>
using namespace std;

class Hero {


    
    private:
    //properties
    int health;

    public:
    string name;
    char level;
    static int timeToComplete;


    Hero() {
        cout << "Default Constructor called" << endl;
    }

    //Parameterize constructor
    Hero(int health, char level) {
        this -> health = health;
        this -> level = level;
    }

    //Copy Constructor
    // Hero(Hero& temp) {
    //     cout << "Copy Constructor called" << endl;
    //     this -> health = temp.health;
    //     this -> level = temp.level;
    // }

    void print() {
        cout << endl << endl;
        cout << "[ Name: " << this -> name << ", ";
        cout << "Health: " << this -> health <<", ";
        cout << "Level: " << this -> level << " ]";
        cout << endl << endl;
    }

    static int random() {
        return timeToComplete;
    }
    

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

    void setName(string name) {
        this -> name = name;
    }

};

int Hero :: timeToComplete = 5;

int main() {

    //cout << Hero :: timeToComplete << endl;
    cout << Hero::random() << endl;

    // Hero a;
    // cout << a.timeToComplete << endl;

    // Hero b;
    // b.timeToComplete = 10;
    // cout << a.timeToComplete << endl;
    // cout << b.timeToComplete << endl;

    return 0;

}


















    // Hero hero1;

    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // hero1.setName("Babber");

    // hero1.print();

    //use default copy constructor
    // Hero hero2(hero1); // Hero.hero2 = hero1;
    // hero2.print();

    // hero1.name[0] = 'G';

    // hero1.print();

    // hero2.print();












    // Hero ramesh(10);
    // cout << "Ramesh -> " << &ramesh << endl;

    // //Hero *h = new Hero();













/*  //Static allocation
    Hero a;
    a.setHealth(70);
    a.setLevel('B');
    cout << "Level is: " << a.level << endl;
    cout << "Health is: " << a.getHealth() << endl;

    //Dynamically
    Hero *b = new Hero;
    b->setHealth(80);
    b->setLevel('A');
    cout << "Level is: " << (*b).level << endl;
    cout << "Health is:" << (*b).getHealth() << endl;

    cout << "Level is: " << b->level << endl;
    cout << "Health is: " << b->getHealth() << endl;*/
    







    // //creation of object
    // Hero ramesh;
    // cout << "Size of ramesh is : " << sizeof(ramesh) << endl;

    // //ramesh.health = 70;
    // ramesh.setHealth(30);
    // ramesh.level = 'A';

    // cout << "Health is: " << ramesh.getHealth() << endl;
    // cout << "Level is: " << ramesh.getLevel() << endl;

    // //cout << "Size : " << sizeof(h1) << endl;

//     return 0;
// }