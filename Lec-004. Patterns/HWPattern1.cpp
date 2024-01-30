/* 
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while(i <= n) {
        int j = n; //int j = 1;
        while(j >= 1) { //while(j <= n)
            cout << j << " "; //cout << n-j+1;
            j--; //j++;
        }
        cout << endl;
        i++;
    }
}