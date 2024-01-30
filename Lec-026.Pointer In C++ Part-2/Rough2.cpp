#include <iostream>
using namespace std;

/*
void update(int *p) {
    p = p+1;
    cout << "inside " << p << endl;
}

void update1(int *p) {
    *p = *p + 1;
    cout << "inside1 " << *p << endl;
}
*/

int getSum(int *arr, int n) {
    int sum = 0;

    cout << endl << "Size " << sizeof(arr) << endl;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    return sum;
}

int main() {
    /*
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout << arr << endl;

    cout << ch << endl;

    char *c = &ch[0];
    //print entire string -> cause implimentation 'cout' is different in case of char array
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;
    cout << p << endl;

    

    int val = 5;
    int *p = &val;

    cout << "before " << p << endl;
    update(p);
    cout << "after " << p << endl;

    cout << "before1 " << *p << endl;
    update1(p);
    cout << "after1 " << *p << endl;
    */

    int arr[5] = {1,2,3,4,5};

    cout << "sum is " << getSum(arr, 5) << endl;

    return 0;
}