#include <iostream>
using namespace std;

void printArray(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) { //For Round 1 to (n-1) times
        bool swapped = false;
        
        //Process element till (n-1)th index
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false) {
            //Already Sorted
            break;
        }
    }
}

int main() {
    int arr[6] = {10,6,7,11,2,5};

    bubbleSort(arr,6);

    cout << "Sorting of the Array using Bubble Sort : ";

    printArray(arr,6);
}