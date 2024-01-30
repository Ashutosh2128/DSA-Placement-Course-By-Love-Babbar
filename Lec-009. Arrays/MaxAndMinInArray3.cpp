#include <iostream>
using namespace std;

int getMin(int arr[],int size) {
    int mini = INT_MAX;

    for(int i=0; i<size; i++) {
        mini = min(arr[i],mini);
        //if(arr[i] < min) {
            //min = arr[i];
        //}
    }
    //returning min
    return mini;
}

int getMax(int arr[],int size) {
    int maxi = INT_MIN;

    for(int i=0; i<size; i++) {
        maxi = max(arr[i],maxi);
        //if(arr[i] > max) {
            //max = arr[i];
        //}
    }
    //returning max
    return maxi;
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