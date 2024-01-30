/*
* * * * 
* * *
* * 
*
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = n;
    while(i >= 1) {
        int j = 1;
        while(j <= i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i--;
    }
}

//We can also write like this
/*
int main() {
    int n;
    cin >> n;

    int i = 1;
    while(i <= n) {
        int j = 1;
        while(j <= n-i+1) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}
*/