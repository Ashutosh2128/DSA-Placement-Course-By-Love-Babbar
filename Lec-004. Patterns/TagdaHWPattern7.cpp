/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = n;
    while(i >= 1) {
        //Left Side Number
        int j = 1;
        while(j <= i) {
            cout << j;
            j++;
        }
        //For Left Stars
        int k = 1;
        while(k < n-i+1) {
            cout << "*";
            k++;
        }
        //For Right Stars
        int l = 1;
        while(l < n-i+1) {
            cout << "*";
            l++;
        }
        //Right Side Number
        int m = 1;
        int count = i;
        while(m <= i) {
            cout << count;
            count--;
            m++;
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

    int i = n;
    while(i >= 1) {
        //Left Side Number
        int j = 1;
        while(j <= i) {
            cout << j;
            j++;
        }
        //For Stars
        int k = 2;
        while(k < (n-i+1) * 2) {
            cout << "*";
            k++;
        }
        //Right Side Number
        int m = 1;
        int count = i;
        while(m <= i) {
            cout << count;
            count--;
            m++;
        }
        cout << endl;
        i--;
    }
}
*/