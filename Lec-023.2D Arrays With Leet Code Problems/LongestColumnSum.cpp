#include <iostream>
using namespace std;

int largestRowSum(int arr[][3], int row, int col) {
    int maxi = INT_MIN;
    int largeIndex = -1;

    for(int i = 0; i < row; i++) {
        int sum = 0;
        for(int j = 0; j < col; j++) {
            sum += arr[i][j];
        }

        if(sum > maxi) {
            maxi = sum;
            largeIndex = i;
        }
    }

    cout << "Maximum sum is " << maxi << endl;
    return largeIndex;
}

int main() {
    int arr[3][3];

    cout << "Enter array element" << endl;
    for(int col = 0; col < 3; col++) {
        for(int row = 0; row < 3; row++) {
            cin >> arr[row][col];
        }
    }

    int ansIndex = largestRowSum(arr,3,3);

    cout << "Largest column sum is " << ansIndex << endl;
}