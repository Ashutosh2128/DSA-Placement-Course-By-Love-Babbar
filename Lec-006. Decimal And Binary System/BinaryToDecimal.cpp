#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    int temp = n; //😉Not Mandatory to define temp, but for the line number 21 I was dicided to define it😁

    while(temp) {
        int last_digit = temp % 10;
        if(last_digit == 1) {
            ans = ans + pow(2,i);
        }
        temp /= 10;
        i++;
    }
    cout << "Binary to Decimal of " << n << " = " << ans << endl;
}