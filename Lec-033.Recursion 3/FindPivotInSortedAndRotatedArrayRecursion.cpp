//This code is also written in lec-14 number code using loops 
//and here it is in using recursion

#include <iostream>
using namespace std;

int getPivot(int* arr, int s, int e) {
    //Base Case
    if(s >= e) return s;

    int mid = s + (e-s)/2;

    int ans = 0;

    if(arr[mid] >= arr[0]) {
        //First line
        ans = getPivot(arr, mid+1, e);
    } else if(arr[mid] < arr[0]) {
        //Second line
        ans = getPivot(arr, s, mid);
    }

    return ans;
}

int main() {
    int arr[10] = {7,8,9,10,11,12,1,2,3,4};
    int n = 10;

    int s = 0;
    int e = n-1;

    cout << "Pivot index is " << getPivot(arr, s, e) << endl;

    return 0;
}