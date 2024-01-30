//Formula = (5/9) * (fahrenheit-32)

#include <iostream>
using namespace std;

int main() {
    float fahrenheit;
    cin >> fahrenheit;

    float celcius = (5.0/9) * (fahrenheit-32);
    cout << fahrenheit << " f = " << celcius << " c" << endl;

    return 0;
}