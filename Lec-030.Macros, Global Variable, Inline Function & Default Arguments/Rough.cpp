#include <iostream>
using namespace std;

#define PI 3.14 //no need semicolon

int main() {
    int r = 5;
    //double pi = 3.14;

    //using macros
    double area = PI * r * r;

    cout << "Area is " << area << endl;

    return 0;
}