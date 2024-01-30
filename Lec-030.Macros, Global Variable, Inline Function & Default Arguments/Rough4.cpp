#include <iostream>
using namespace std;

void print(int *arr, int n, int st = 0) {
    for(int i = st; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int main() {
    int arr[5] = {1,2,7,8,9};

    print(arr, 5, 3);

    print(arr, 5);

    return 0;
}