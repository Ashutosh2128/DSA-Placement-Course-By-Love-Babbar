#include <iostream>
using namespace std;

int main() {
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "Printing p/Printing address of i " << p << endl; //We can also write &i
    cout << "Address of p/Printing p2 " << &p << endl; //We can also write p2
    cout << *p2 << endl;
}