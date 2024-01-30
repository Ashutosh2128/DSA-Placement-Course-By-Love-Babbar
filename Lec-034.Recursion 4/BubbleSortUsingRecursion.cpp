#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n) {
    //Base case
    if(n == 0 || n == 1) {
        return;
    }

    //1 case solve karlo - Largest element ko last me rakh do
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }

    //Recursive call
    bubbleSort(arr, n-1);
}

int main() {
    int arr[6] = {4,3,5,1,19,10};

    bubbleSort(arr, 6);

    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}