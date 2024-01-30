#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int a = num;
    a++;

    cout << num << endl;

    int *p = &num;
    cout << "Before " << num << endl;
    (*p)++;
    cout << "After " << num << endl;

    return 0;
}