#include <iostream>
using namespace std;

int getPivot(int arr[],int n) {
    int s = 0, e = n-1;

    int mid = s + (e-s)/2;

    while(s <= e) {
        if(arr[mid] >= arr[0]) {  //Pivot is in First Line
            s = mid+1;
        }
        else { //(arr[mid] < arr[0]) (Pivot is in Second line)
            e = mid;
        }

        mid = s + (e-s)/2;
    }

    return s; //return e;
}

int main() {
    int arr[5] = {3,10,15,17,1};  //Sorted and rotated array. Rotated by 4 step

    int ans = getPivot(arr,5);
    cout << "Pivot index is " << ans;
}