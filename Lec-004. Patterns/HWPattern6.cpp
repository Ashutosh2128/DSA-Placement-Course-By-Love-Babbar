/*
1 2 3 4
  2 3 4  
    3 4
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
        int count = n-i+1;
        while(j <= i) {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i--;
    }
}