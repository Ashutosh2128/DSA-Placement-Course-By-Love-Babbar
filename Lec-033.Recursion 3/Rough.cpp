#include <iostream>
using namespace std;

int sumArray(int* arr, int n, int s) {
    //Base case
    if(n == 0) return s;

    s += arr[0];

    return sumArray(arr+1, n-1, s);
}

int main() {
    int arr[5] = {1,2,3,4,6};
    int n = 5;
    int s = 0;

    int sum = sumArray(arr, n, s);

    cout << "Sum = " << sum << endl;
}

/*void print(int* arr, int s, int e) {
    for(int i = s; i < e; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

bool binarySearch(int* arr, int s, int e, int k) {

    cout << endl;

    print(arr, s, e);

    //Base case
    if(s > e) return false;

    int mid = s + (e-s)/2;
    cout << mid << "-> " << arr[mid] << endl;

    if(arr[mid] == k) 
        return true;

    else if(arr[mid] > k) 
        return binarySearch(arr, s, mid-1, k);

    else if(arr[mid] < k) 
        return binarySearch(arr, mid+1, e, k); 
}

int main() {
    int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
    int size = 11;
    int key = 222;

    bool ans = binarySearch(arr, 0, size, key);

    cout << endl;

    if(ans) {
        cout << "Found" << endl;
    } else {
        cout << "Not found" << endl;
    }
}*/





/*void print(int *arr, int n) {
    cout << "Size " << n << endl;

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

bool linearSearch(int *arr, int n, int k) {

    print(arr, n);
    //base case
    if(n < 0)
        return 0;

    if(arr[0] == k)
        return 1;
    else
        return linearSearch(arr+1, n-1, k);
}

int main() {
    int arr[6] = {4,3,5,7,8,1};
    int size = 6;
    int key = 10;

    bool ans = linearSearch(arr, size, key);

    if(ans) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }
}*/



/*int sumArray(int* arr, int n) {

    //base case
    if(n == 0) {
        return 0;
    }    
    
    int sum = arr[0];

    sum += sumArray(arr+1, n-1);

    return sum;
}

int main() {
    int arr[5] = {1,2,3,4,5};

    int size = 5;
    int sum = sumArray(arr, size);

    cout << "Sum is " << sum << endl;

    return 0;
}*/

