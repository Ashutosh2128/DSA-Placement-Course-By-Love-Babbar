#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter the value of a : " << endl;
    cin >> a;

    cout << "Enter the value of b : " << endl;
    cin >> b;

    if(a > b) {
        cout << "a is greater than b" << endl;
    } else if(a < b) {
        cout << "b is greater than a" << endl;
    } else {
        cout << "a is equal to b" << endl;
    }

    return 0;
}