#include <iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key) {
    for(int i=0; i<size; i++) {
        if(arr[i] == key) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[6] = {4,26,85,-4,-17,65};

    int key;
    cin >> key;


    if(linearSearch(arr,6,key)) {
        cout << "Key is present" << endl;
    }
    else {
        cout << "Key is not found" << endl;
    }
}