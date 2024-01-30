#include <iostream>
using namespace std;

int partition(int* arr, int s, int e) {
    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1; i <= e; i++) {
        if(arr[i] < pivot) {
            cnt++;
        }
    }

    //place pivot at right place
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //left ans right wala part sambhalte he - all left element should less than pivot and right element is greater
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex) {
        if(arr[i] > arr[pivotIndex] && arr[j] <= arr[pivotIndex]) {
            swap(arr[i++], arr[j--]);
        } else if(arr[i] < arr[pivotIndex]) {
            i++;
        } else {
            j--;
        }
    }

    return pivotIndex;
}

void quickSort(int* arr, int s, int e) {
    //Base case
    if(s >= e)
        return;

    //find partition and its perfect position
    int p = partition(arr, s, e);

    //left wala sort kardo
    quickSort(arr, s, p-1);

    //right wala sort kardo
    quickSort(arr, p+1, e);
}

int main() {
    int arr[6] = {6,5,4,3,2,1};
    int n = 6;

    cout << "Before quick sort array is : ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    quickSort(arr, 0, n-1);

    cout << "After quick sort array is : ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}