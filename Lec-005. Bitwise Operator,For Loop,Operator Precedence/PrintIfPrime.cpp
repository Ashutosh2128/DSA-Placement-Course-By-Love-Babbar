#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool isPrime = 1;

    for(int i=2; i<n; i++) {
        if((n % i) == 0) {
            //if rem = 0; then not prime
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 0) {
        cout << n << " is not a prime number" << endl;
    } else {
        cout << n << " is a prime number" << endl;
    }
}