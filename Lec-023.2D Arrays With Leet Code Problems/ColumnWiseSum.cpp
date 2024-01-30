#include <iostream>
using namespace std;

void printRowSum(int arr[][3],int n,int m) {
    cout << "Sum of rows are" << endl;

    for(int i = 0; i < m; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}

int main() {
    int arr[3][3];

    cout << "Enter array element" << endl;

    for(int col = 0; col < 3; col++) {
        for(int row = 0; row < 3; row++) {
            cin >> arr[row][col];
        }
    }

    printRowSum(arr,3,3);
}