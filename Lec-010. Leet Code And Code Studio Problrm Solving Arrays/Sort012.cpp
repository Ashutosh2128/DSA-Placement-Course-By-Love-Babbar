#include <iostream>
using namespace std;

void sortOne(int arr[],int n) {
    int i = 0, j = 0, k = n-1;

    while(j <= k) {
        if(arr[j] == 0) {
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else if(arr[j] == 1) {
            j++;
        }
        else {
            swap(arr[j],arr[k]);
            k--;
        }
    }
}

void printArray(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[9] = {0,1,2,2,0,1,1,2,0};

    sortOne(arr,9);
    printArray(arr,9);
}