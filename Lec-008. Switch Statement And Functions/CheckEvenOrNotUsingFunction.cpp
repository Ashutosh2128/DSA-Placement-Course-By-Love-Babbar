#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n & 1) { //if 1 then odd, so return 0
        return 0;
    }
    else { //if 0 then even, so return 1
        return 1;
    }
}

int main() {
    int n;
    cin >> n;

    if(isPrime(n)) {
        cout << "Even" <<endl;
    }
    else {
        cout << "Odd" << endl;
    }
}