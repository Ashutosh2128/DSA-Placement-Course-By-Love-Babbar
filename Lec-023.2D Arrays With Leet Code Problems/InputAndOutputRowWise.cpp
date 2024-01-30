#include <iostream>
using namespace std;

int main() {
    //Creating 2D Array
    int arr[3][4];

    cout << "Enter array element" << endl;

    //Taking input
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++) {
            cin >> arr[row][col];
        }
    }

    //Print Array
    for(int row = 0; row < 3; row++) {
        for(int  col = 0; col < 4; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}