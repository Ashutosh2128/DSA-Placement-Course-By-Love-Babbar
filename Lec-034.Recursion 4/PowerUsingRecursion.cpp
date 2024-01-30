#include <iostream>
using namespace std;

int power(int a, int b) {
    //Base case
    if(b == 0) return 1;

    if(b == 1) return a;

    //Recursive Call
    int ans = power(a, b/2);

    if(b % 2 == 0) {
        //Even
        return ans * ans;
    } else {
        //Odd
        return a * ans * ans;
    }
}

int main() {
    int a;
    int b;

    cin >> a >> b;

    int ans = power(a, b);

    cout << "Answer = " << ans << endl;
}



// int pow(int a, int b) {
//     if(b == 0) return 1;

//     if(b == 1) return a;

//     int ans = a * pow(a, b-1);

//     return ans;
// }

// int main() {
//     int a, b;
//     cin >> a >> b;

//     int ans = pow(a,b);

//     cout << "Power = " << ans << endl;
// }