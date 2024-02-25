#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

void sortOne(int arr[], int n) {
    int left = 0;
    int right = n-1;

    while(left < right) {
        if(arr[left] == 0) {
            left++;
        }
        else if(arr[right] == 1) {
            right--;
        }
        else {
            swap(arr[left++], arr[right--]);
        }
    }
}

int main() {
    int arr[8] = {1,1,0,0,0,0,1,0};

    sortOne(arr, 8);
    printArray(arr, 8);
}








/*//swap alternate
void swapAlternate(int arr[], int n) {
    for(int i = 0; i + 1 < n; i += 2) {
        //swap(arr[i], arr[i+1]);
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int main() {
    int arr[6];

    int n;
    cout << endl << "Enter array size" << endl;
    cin >> n;

    cout << endl << "Enter array element" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << endl << "Printing array element before swaping in alternative manner" << endl;
    print(arr, n);

    //swap Alternate function call
    swapAlternate(arr, n);

    cout << endl << "printing array element after swaping in alternative manner" << endl;
    print(arr, n);
    cout << endl;

    return 0;
}*/