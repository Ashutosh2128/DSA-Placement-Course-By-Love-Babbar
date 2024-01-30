#include <iostream>
using namespace std;

int main() {
    int row = 3;

    int ** jaggedArr = new int*[row];

    jaggedArr[0] = new int[3] {1,2,3};
    jaggedArr[1] = new int[4] {4,5,6,7};
    jaggedArr[2] = new int[2] {2,3};

    cout << jaggedArr[0][0] << endl;
    cout << jaggedArr[1][1] << endl;
    cout << jaggedArr[2][1] << endl;

    return 0;
}