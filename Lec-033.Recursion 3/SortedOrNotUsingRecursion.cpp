#include <iostream>
using namespace std;

bool isSorted(int *arr, int n) {
    if(n == 0 || n == 1)
        return true;

    if(arr[0] > arr[1]) {
        return false;
    } else {
        return isSorted(arr + 1, n - 1);
    }
}

int main() {
    int arr[5] = {1,2,8,4,5};

    if(isSorted(arr, 5)) {
        cout << "Soretd" << endl;
    } else {
        cout << "Not Sorted" << endl;
    }
}