/* 
1
2 1
3 2 1
4 3 2 1
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while(i <= n) {
        int count = i; //Without this we also can like follows 20 number line
        int j = 1;
        while(j <= i) {
            cout << count << " "; //cout << (i-j+1) << " ";
            count--; //Without this we also can like Upper 20 number line
            j++;
        }
        cout << endl;
        i++;
    }
}