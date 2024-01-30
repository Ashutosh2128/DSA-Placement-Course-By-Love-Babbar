#include <iostream>
using namespace std;

int getSum(int *arr, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    char ch = 'q';
    cout << sizeof(ch) << endl;

    char *c = &ch;
    cout << sizeof(c) << endl;

    int n;
    cin >> n;

    //Variable size array is created
    int* arr = new int[n];

    //taking input in array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Sum is " << getSum(arr, n) << endl;

    //Case - 1
    while(true) {
        int i = 5;
    }

    //Case - 2
    while(true) {
        int* ptr = new int;
    }

    return 0;
}