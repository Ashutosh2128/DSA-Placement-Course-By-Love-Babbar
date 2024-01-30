#include <iostream>
using namespace std;

int main() {
    int num = 5;

    int *p = &num;

    *p = *p + 1;
    cout << *p << endl;

    cout << (*p)++ << endl;

    //Pointer Increament
    cout << "Before p " << p << endl;
    p = p + 1;
    cout << "After p " << p << endl;
}