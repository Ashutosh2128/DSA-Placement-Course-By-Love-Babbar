#include <iostream>
using namespace std;

int getSum(int *arr, int n) {
    if(n == 0) return 0;

    int sum = arr[0];

    sum += getSum(arr+1, n-1);

    return sum;
}

int main() {
    int arr[5] = {1,2,3,4,5};

    int ans = getSum(arr, 5);

    cout << "Sum = " << ans << endl;
}