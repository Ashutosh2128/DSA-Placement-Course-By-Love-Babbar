#include <iostream>
using namespace std;

int main() {
    int arr[10] = {2, 5, 6};

    cout << "1st " << *arr << endl;
    cout << "2nd " << *arr + 1 << endl;
    cout << "3rd " << *(arr + 1) << endl;
    cout << "4th " << *(arr) + 1 << endl;

    return 0;
}