#include <iostream>
using namespace std;

bool linearSearch(int *arr, int n, int k) {
    if(n <= 0) return false;

    if(arr[0] == k) return true;

    return linearSearch(arr+1, n-1, k);
}

int main() {
    int arr[6] = {2,1,3,56,34,23};

    int n = 6;
    int key = 56;

    if(linearSearch(arr, n, key)) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}