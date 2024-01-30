#include <iostream>
using namespace std;

class B {
    public:
    int a;
    int b;

    void operator+ (B &obj) {
        int val1 = this -> a;
        int val2 = obj.a;

        cout << "Output " << val2 - val1 << endl;
    }

    void operator() () {
        cout << "Main Bracket hu" << endl;
    }
};

int main() {
    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    obj1();
    obj2();
}