/* 
1 2 3
2 3 4
3 4 5
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while(i <= n) {
        int j = 1;
        int count = i;
        while(j <= n) {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}