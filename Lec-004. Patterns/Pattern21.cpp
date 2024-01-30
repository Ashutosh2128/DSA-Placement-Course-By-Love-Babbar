/*
       1
     1 2 1
   1 2 3 2 1
 1 2 3 4 3 2 1
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while(i <= n) {
        // Left Half
        int space = 1;
        while(space <= n-i) {
            cout << " ";
            space++;
        }
        int j = 1;
        while(j <= i) {
            cout << j;
            j++;
        }
        //Right Half
        int k = 1;
        int count = i-k;
        while(k < i) {
            cout << count;
            count--;
            k++;
        }
        cout << endl;
        i++;
    }
}