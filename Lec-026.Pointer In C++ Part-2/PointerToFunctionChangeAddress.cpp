#include <iostream>
using namespace std;

void update(int *p) {
    p = p+1;
    
    cout << "Inside " << p << endl;
}

int main() {
    int value = 5;

    int *p = &value;

    cout << "Before " << p << endl;
    update(p);
    cout << "After " << p << endl;
}