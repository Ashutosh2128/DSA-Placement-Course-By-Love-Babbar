#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int dec_value = 0;
    int temp = n;
    int base = 1;

    while(temp) {
        int last_digit = temp % 10;
        dec_value = dec_value + last_digit * base;
        temp = temp / 10;
        base = base * 2;
    }
    cout << "Binary to Decimal of " << n << " = " << dec_value << endl;
}