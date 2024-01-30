#include <iostream>
using namespace std;

int fib(int n) {
    int a = 0, b = 1;
    
    //Base case
    if(n == 1 || n == 2)
        return n-1;
    
    //Recursive call
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cin >> n;

    cout << "nth fibonacci number is " << fib(n) << endl;

    return 0;
}