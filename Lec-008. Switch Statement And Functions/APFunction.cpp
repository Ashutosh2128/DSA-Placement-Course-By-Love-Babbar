//Print A.P i.e- 3 * n + 7

#include <iostream>
using namespace std;

int ap(int n) {
    return 3 * n + 7;
}

int main() {
    int n;
    cin >> n;

    cout << ap(n);
}