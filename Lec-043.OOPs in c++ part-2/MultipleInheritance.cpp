#include <iostream>
using namespace std;

class Animal {
    public:
    int age;

    void bark() {
        cout << "Barking" << endl;
    }
};

class Human {
    public:
    int weight;

    void speak() {
        cout << "Speaking" << endl;
    }
};

class Hybrid : public Animal, public Human {

};

int main() {
    Hybrid obj;

    obj.speak();
    obj.bark();

    cout << obj.age << endl;
    cout << obj.weight << endl;
}