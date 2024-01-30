#include <iostream>
using namespace std;

void insertionSort(int * arr, int n) {
    //Base case
    if(n <= 1) return;

    //Recursive call
    insertionSort(arr, n-1);

    int temp = arr[n-1];
    int j = n-2;

    while(j >= 0 && arr[j] > temp) {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = temp;
}

int main() {
    int arr[6] = {12, 32, 1, 0, 2, 3};

    insertionSort(arr, 6);

    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }cout << endl;
}