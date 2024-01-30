#include <iostream>
using namespace std;

int main() {
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    //Printing i by 3 types
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    //Printing p by 3 types
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    //Printing p2 by 2 types
    cout << &p << endl;
    cout << p2 << endl;
}