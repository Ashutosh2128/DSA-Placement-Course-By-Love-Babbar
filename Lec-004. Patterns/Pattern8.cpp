/* 
A B C
A B C
A B C
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while(i <= n) {
        char ch = 'A';
        int j = 1;
        while(j <= n) {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}

//We can also write like follows
/*
int main() {
    int n;
    cin >> n;

    int i = 1;
    while(i <= n) {
        int j = 1;
        while(j <= n) {
            char ch = 'A'+j-1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
*/