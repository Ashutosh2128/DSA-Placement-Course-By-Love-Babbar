#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    int temp = n; //😉Not Mandatory to define temp, but for the line number 19 I was dicided to define it😁

    while(temp != 0) {
        int bit = temp & 1;
        ans = bit * pow(10,i) + ans;
        temp = temp >> 1;
        i++;
    }
    cout << "Decimal to Binary of " << n << " = " << ans << endl;
}