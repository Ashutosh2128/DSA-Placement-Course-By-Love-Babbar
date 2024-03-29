#include <iostream>
using namespace std;

void printArray(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[],int n) {
    for(int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = temp;
    }
}

int main() {
    int arr[6] = {10,6,7,11,2,5};

    insertionSort(arr,6); 

    cout << "Sorting of the Array using Insertion Sort : "; 
    
    printArray(arr,6);
}