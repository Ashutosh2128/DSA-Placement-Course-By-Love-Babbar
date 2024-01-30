/*
1 1 1 1 
  2 2 2 
    3 3 
      4
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = n;
    while(i >= 1) {
        int space = 1;
        while(space <= n-i) {
            cout << " ";
            space++;
        }
        int j = 1;
        while(j <= i) {
            cout << n-i+1;
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
        int space = 1;
        while(space < i) {
            cout << " ";
            space++;
        }
        int j = 1;
        while(j <= n-i+1) {
            cout << row;
            j++;
        }
        cout << endl;
        i++;
    }
}
*/