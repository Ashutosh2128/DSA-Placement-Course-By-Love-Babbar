#include <iostream>
using namespace std;

/*int power(int n) {
    //base case
    if(n == 0)
        return 1;

    return 2 * power(n-1);
}*/

void count(int n) {
    //Base case
    if(n == 0)
        return;

    //recursive call
    count(n-1);

    //processing - head recursion
    cout << n << " ";
}

int main() {
    /*int n;
    cin >> n;

    int ans = power(n);

    cout << ans << endl;*/
    
    int n;
    cin >> n;

    count(n);

    return 0;
}