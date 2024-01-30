#include <iostream>
using namespace std;

int getMax(int arr[],int size) {
    int max = arr[0];

    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[],int size) {
    int min = arr[0];

    for(int i = 0; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int size;
    cin >> size;

    int arr[100];

    //Input in Array
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Minimum element in array = " << getMin(arr,size) << endl;
    cout << "Maximum element in array = " << getMax(arr,size) << endl; 
}