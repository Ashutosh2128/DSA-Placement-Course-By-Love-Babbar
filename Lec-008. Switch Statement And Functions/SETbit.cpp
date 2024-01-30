#include <iostream>
using namespace std;

int setBits(int n) {
    int count = 0;
    while(n) {
        n = n & (n-1);
        count++;
    }
    return count;
}

int main() {
    int a,b;
    cin >> a >> b;

    cout << setBits(a) + setBits(b) << endl;
}