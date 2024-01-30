#include <iostream>
using namespace std;

void update(int **p2) {
    //p2 = p2 + 1;
    //kuch change hoga?? -> No

    //*p2 = *p2 + 1;
    //kuchh change hoga?? -> Yes

    **p2 = **p2 + 1;
    //kuchh change hoga?? -> Yes
}

int main() {

/*
    int i = 5;
    int* p = &i;
    int** p2 = &p;

    cout << endl << "sab sahi chal raha hee" << endl << endl;

    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout << &p << endl;
    cout << p2 << endl;


    cout << "Before " << i << endl;
    cout << "Before " << p << endl;
    cout << "Before " << p2 << endl;

    update(p2);

    cout << "after " << i << endl;
    cout << "after " << p << endl;
    cout << "after " << p2 << endl;
*/

    
    return 0;
}