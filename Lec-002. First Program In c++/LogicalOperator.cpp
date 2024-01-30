#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 0, c = 15;

    // &&
    cout << ((a > 5) && (b != 0) && (c >= 15)) << endl;

    // ||
    cout << ((a > 5) || (b != 0) || (c >= 15)) << endl;

    // !
    cout << !a << endl;
    cout << !b << endl;
}