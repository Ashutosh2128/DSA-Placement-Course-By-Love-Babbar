#include <iostream>
using namespace std;

void printArray(int arr[],int size) {
    cout << "Printing the array" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing done" << endl;
}

int main() {
    int size;
    cin >> size;

    int arr[100];

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    printArray(arr,size);
}