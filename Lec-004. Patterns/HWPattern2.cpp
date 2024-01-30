/* 
9 8 7
6 5 4
3 2 1
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while(i <= n) {
        int count = (n-i+1) * n;
        int j = 1;
        while(j <= n) {
            cout << count << " ";
            count--;
            j++;
        }
        cout << endl;
        i++;
    }
}