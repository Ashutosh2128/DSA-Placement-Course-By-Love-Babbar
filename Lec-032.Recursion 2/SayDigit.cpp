#include <iostream>
using namespace std;

void sayDigit(int n, string arr[]) {
    //Base case
    if(n == 0)
        return;

    int digit = n % 10;
    n = n/10;

    //Rercursive Call
    sayDigit(n, arr);

    cout << arr[digit] << " ";
}

int main() {
    int n;
    cin >> n;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    sayDigit(n, arr);

    return 0;
}