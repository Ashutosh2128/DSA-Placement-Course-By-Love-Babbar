#include <iostream>
using namespace std;

int getMin(int arr[],int size) {
    int min = INT_MAX;

    for(int i=0; i<size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    //returning min
    return min;
}

int getMax(int arr[],int size) {
    int max = INT_MIN;

    for(int i=0; i<size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    //returning max
    return max;
}

int main() {
    int size;
    cin >> size;

    int arr[100];

    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }

    cout << "Maximum element in array = " << getMax(arr,size) << endl;
    cout << "Minimum element in array = " << getMin(arr,size) << endl;
}