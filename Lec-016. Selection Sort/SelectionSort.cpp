#include<iostream>
using namespace std;

void printArray(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n) {   
    for(int i = 0; i < n-1; i++) { //For Rounds 1 to (n-1)th times
        int minIndex = i;
        
        //For elements sort or not
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if(minIndex != i) {
            swap(arr[minIndex],arr[i]);
        }
    }
}

int main() {
    int arr[6] = {10,6,7,11,2,5};

    selectionSort(arr,6);

    cout << "Sorting of the Array using Selection Sort : ";

    printArray(arr,6);
}