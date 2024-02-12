#include <iostream>
#include <math.h>
using namespace std;

int main() {

    /*
    //Decimal to Binary representation
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;

    while(n != 0) {
        int bit = n & 1; //int bit = n % 2;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1; //n = n / 2;
        i++;
    }

    cout << "Answer is " << ans;




    //Binary to Decimal representation
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;

    while(n != 0) {
        int digit = n % 10;

        if(digit == 1) {
            ans = ans + pow(2, i);
        }

        n = n / 10;
        i++;
    }

    cout << "Answer is " << ans << endl;*/




    
    long long int n;
    cin >> n;

    unsigned long long int i = 0, ans = 0;

    if(n < 0) {
        n = pow(4, 16) + n;
    }

    cout << n << endl;

    while(n) {
        int lastBit = n & 1;
        ans = (lastBit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
        cout << ans << endl;
    }

    cout << ans << endl;

}