#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arr << endl;
    cout << ch << endl; //Printing the entire array

    char *c = &ch[0];

    cout << c << endl; //Printing the entire array
}