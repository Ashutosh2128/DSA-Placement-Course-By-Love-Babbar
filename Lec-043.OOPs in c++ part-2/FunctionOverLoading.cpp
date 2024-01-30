#include <iostream>
using namespace std;

class A {
    public:
    void sayHello() {
        cout << "Hello Love Babber" << endl;
    }

    int sayHello(int a) {
        cout << "Hello Love Babber" << endl;
        return 1;
    }

    void sayHello(string name) {
        cout << "Hello " << name << endl;
    }
};

int main() {
    A obj;

    obj.sayHello();
    obj.sayHello("Papun");
}