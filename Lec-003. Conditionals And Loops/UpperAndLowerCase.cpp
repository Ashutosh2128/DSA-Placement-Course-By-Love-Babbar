#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;

    //'A'-'Z' = 65-90
    //'a'-'z' = 97-122
    //'0'-'9' = 48-57

    if(a >= 'A' && a <= 'Z') {
        cout << "This is Upper Case" << endl;
    } else if (a >= 'a' && a <= 'z'){
        cout << "This is Lower Case" << endl;
    } else if(a >= '0' && a <= '9') {
        cout << "This is a Digit";
    }

    return 0;
}