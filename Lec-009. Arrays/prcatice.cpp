#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "Printing the array " << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    cout << "Printing done" << endl;
 }

int main() {
    //declare
    int number[15];

    cout << "Value at 14 index " << number[14] << endl;

    //cout << "Value at 20 index " << number[20] << endl;

    //initialising array
    int second[3] = {5, 7, 11};

    //accessing an element
    cout << "Value at 2 index " << second[2] << endl;

    int third[15] = {2, 7};

    int thirdSize = sizeof(third)/sizeof(int);
    cout << "Size of fifth is " << thirdSize << endl;

    int n = 15;
    cout << "Printing the array " << endl;
    //print the array
    //printArray(third, n);
    // for(int i = 0; i < n; i++) {
    //     cout << third[i] << " ";
    // }

    int fourth[10] = {0};

    n = 10;
    cout << endl << "Printing the array " << endl;
    //print the array
    //printArray(fourth, n);
    // for(int i = 0; i < n; i++) {
    //     cout << third[i] << " ";
    // }


    int fifth[10] = {1};

    n = 10;
    //printArray(fifth, 10);

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout << "Size of fifth is " << fifthSize << endl;

    char ch[5] = {'a', 'b', 'c', 'r', 'p'};
    cout << ch[3] << endl;

    //printArray(ch);

    cout << endl << "Everything is fine" << endl << endl;
}