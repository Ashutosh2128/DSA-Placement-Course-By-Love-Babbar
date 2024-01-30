/* 
A 
B B
C C C
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char ch = 'A';

    int i = 1;
    while(i <= n) {
        int j = 1;
        while(j <= i) {
            cout << ch << " ";
            j++;
        }
        cout << endl;
        ch++;
        i++;
    }
}

//We can also write like this
/*
int main() {
    int n;
    cin >> n;
    char ch = 'A';

    int i = 1;
    while(i <= n) {
        int j = 1;
        while(j <= i) {
            char ch = 'A'+i-1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
*/