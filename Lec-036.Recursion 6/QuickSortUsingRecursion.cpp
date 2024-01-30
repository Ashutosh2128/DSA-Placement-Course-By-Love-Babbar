#include <iostream>
using namespace std;

int partition(int arr[], int s, int e) {

    int pivot = arr[s];

    int count = 0;
    for(int i = s + 1; i <= e; i++) {
        if(arr[i] <= arr[s])
            count++;
    }

    //Find pivot right position and swap
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]); //Now pivot is at right position

    //Now we have to balance the left and right side of pivot i.e left <= pivot and right > pivot
    int i = s, j = e;
    while(i < pivotIndex && j > pivotIndex) {
        if(arr[i] > arr[pivotIndex] && arr[j] <= arr[pivotIndex]) {
            swap(arr[i++], arr[j--]);
        } else if(arr[i] <= arr[pivotIndex]) {
            i++;
        } else {
            j--;
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {

    //Base case
    if(s >= e) return;

    //For find the arr[partIndex] is at right position
    int partIndex = partition(arr, s, e);

    //Quick sort in left side of partIndex
    quickSort(arr, s, partIndex - 1);

    //Quick sort in right side of partIndex
    quickSort(arr, partIndex + 1, e);
}

int main() {
    
    int arr[6] = {4, 6, 2, 5, 3, 1};
    int n = 6;

    quickSort(arr, 0, n-1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}