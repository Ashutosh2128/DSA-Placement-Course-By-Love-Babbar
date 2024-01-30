#include <iostream>
using namespace std;

int firstOcc(int* arr, int s, int e, int k) {
    //Base case
    if(s > e) return -1;

    int ans = -1;
    int mid = s + (e-s)/2;

    if(arr[mid] == k) {
        ans = mid;
        int t = firstOcc(arr, s, mid-1, k);
        if(t != -1)
            ans = t;
    } else if(arr[mid] > k) {
        ans = firstOcc(arr, s, mid-1, k);
    } else {
        //arr[mid] < k
        ans = firstOcc(arr, mid+1, e, k);
    }

    return ans;
}

int lastOcc(int* arr, int s, int e, int k) {

    //Base case
    if(s > e) return -1;

    int ans = -1;
    int mid = s + (e-s)/2;

    if(arr[mid] == k) {
        ans = mid;
        int t = lastOcc(arr, mid+1, e, k);
        if(t != -1)
            ans = t;
    } else if(arr[mid] > k) {
        ans = lastOcc(arr, s, mid-1, k);
    } else {
        //arr[mid] < k
        ans = lastOcc(arr, mid+1, e, k);
    }

    return ans;
}

int main() {
    int arr[8] = {1,3,3,5,5,5,5,5};
    int n = 8;
    int k = 5;

    int s = 0;
    int e = n-1;

    int totalOcc = lastOcc(arr, s, e, k) - firstOcc(arr, s, e, k) + 1;

    cout << "Total Number of Occurance = " << totalOcc << endl;
}