#include <iostream>
using namespace std;

int main() {
    //Pointer to int is created, and pointing to some garbage address, It is a bad Practice
    int *p;

    cout << *p << endl;

    int *ptr = 0;
    cout << *ptr << endl;

    return 0;
}