#include <iostream>
using namespace std;

class Animal {
    public:
    int age;
    int weight;

    void speak() {
        cout << "Speaking" << endl;
    }
};

class Cat : public Animal {

};

class Dog : public Cat {

};

class Cow : public Dog {

};

int main() {
    Cow c;

    c.speak();
}