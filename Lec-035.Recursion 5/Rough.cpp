#include <iostream>
using namespace std;

void merge(int *arr, int s, int e) {
    int mid = s + (e-s)/2;

    int len1 = mid -s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy element into first array from main array
    int mainArrayIndex = s;
    for(int i = 0; i < len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    //copy element into second array from main array
    mainArrayIndex = mid+1;
    for(int i = 0; i < len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //now merge two sorted array and put it into main array
    mainArrayIndex = s;
    int i = 0;
    int j = 0;

    while(i < len1 && j < len2) {
        if(first[i] < second[j]) {
            arr[mainArrayIndex++] = first[i++];
        } else {
            arr[mainArrayIndex++] = second[j++];
        }
    }

    //if second array is reached to last and first is still having some element,
    //then no doubt all element of first array is greater than second and have also sorted manner
    //so put all first array element into the main array
    while(i < len1) {
        arr[mainArrayIndex++] = first[i++];
    }

    //if first array is reached to last and second is still having some element,
    //then no doubt all element of second array is greater than first and have also sorted manner
    //so put all second array element into the main array
    while(j < len2) {
        arr[mainArrayIndex++] = second[j++];
    }

    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e) {
    //Base case
    if(s >= e) return;

    int mid = s + (e-s)/2;

    //sort left side
    mergeSort(arr, s, mid);

    //sort right side
    mergeSort(arr, mid+1, e);

    //merge two sorted array
    merge(arr, s, e);
}

int main() {
    int arr[6] = {6,5,4,3,2,1};
    int n = 6;

    mergeSort(arr, 0, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}