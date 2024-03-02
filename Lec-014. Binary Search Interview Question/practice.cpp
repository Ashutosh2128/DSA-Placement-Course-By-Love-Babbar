#include <iostream>
using namespace std;

int sqrtInteger(int n) {
    int s = 0;
    int e = n;

    long long int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e) {
        long long int square = mid * mid;

        if(square == n) {
            return mid;
        }
        else if(square < n) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}

double morePrecision(int n, int tempSoln, int precision) {
    float factor = 1;
    double ans = tempSoln;
    
    for(int i = 0; i < precision; i++) {
        factor = factor / 10;

        for(double j = ans; j*j < n; j += factor) {
            ans = j;
        }
    }

    return ans;
}

int main() {
    int n;

    cout << "Enter the value of n" << endl;
    cin >> n;

    int tempSoln = sqrtInteger(n);
    cout << "Square root of " << n << " = " << tempSoln << endl;

    cout << "Optimize square root of " << n << " = " << morePrecision(n, tempSoln, 6) << endl;
}








/*//find pivot in rotated sorted array
int pivot(int arr[], int n) {
    int s = 0, e = n-1;

    int mid = s + (e-s)/2;

    while(s < e) {
        if(arr[mid] >= arr[0]) {
            s = mid + 1;
        }
        else {
            e = mid;
        }

        mid = s + (e-s)/2;
    }

    return s; //return e;
}

int main() {
    int arr[5] = {2,3,7,9,1};

    cout << "Pivot index is " << pivot(arr, 5);
}*/