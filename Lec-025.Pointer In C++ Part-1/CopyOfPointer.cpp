#include <iostream>
using namespace std;

int main() {
    int num = 5;

    int *p = &num;

    int *q = p; //Copy Pointer

    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;
}