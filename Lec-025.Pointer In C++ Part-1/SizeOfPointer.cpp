#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int *ptr = &num;

    cout << "Size of variable " << sizeof(num) << endl;
    cout << "Size of pointer " << sizeof(ptr) << endl;
}