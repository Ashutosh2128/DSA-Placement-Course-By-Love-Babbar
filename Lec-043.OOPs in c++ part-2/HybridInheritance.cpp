#include <iostream>
using namespace std;

class A {
    public:
    A() {
        cout << "Inside class A" << endl;
    }
};

class B {
    public:
    B() {
        cout << "Inside class B" << endl;
    }
};

class C : public A {

};

class D : public A, public B {

};

int main() {
    D obj;
}