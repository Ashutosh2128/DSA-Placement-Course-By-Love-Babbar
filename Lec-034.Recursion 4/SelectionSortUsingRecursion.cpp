#include <iostream>
using namespace std;

void selectionSort(int *arr, int beginIndex, int n) {
    //Base case
    if(beginIndex >= n) return;

    int minIndex = beginIndex;

    for(int i = beginIndex + 1; i < n; i++) {
        if(arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    swap(arr[minIndex], arr[beginIndex]);

    //Recursive call
    selectionSort(arr, beginIndex + 1, n);
}

int main() {
    int arr[6] = {4,3,5,1,19,10};

    selectionSort(arr, 0, 6);

    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}