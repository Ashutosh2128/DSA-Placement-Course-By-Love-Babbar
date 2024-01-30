// We have 1330 rupees, we have to find how much 100,50,20 and 1 rupees needed to fulfill 1330 rupees.

#include <iostream>
using namespace std;

int main() {

    int money;
    cin >> money;

    switch( 1 ) {

        case 1: cout << "Number of 100 rupee Notes = " << money / 100 << endl;
                money %= 100;

        case 2: cout << "Number of 50 rupee Notes = " << money / 50 << endl;
                money %= 50;

        case 3: cout << "Number of 20 rupee Notes = " << money / 20 << endl;
                money %= 20;

        case 4: cout << "Number of 1 rupee Notes = " << money / 1 << endl;
                money %= 1; //Not Necessary
    }
}