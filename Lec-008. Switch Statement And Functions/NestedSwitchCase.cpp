#include <iostream>
using namespace std;

int main() {

    char ch = '1';
    int num = 1;

    switch(ch) {

        case 1: cout << "First" << endl;
                break;

        case '1': switch(num) {

            case 0: cout << "num = 0" << endl;
                    break;

            case 1: cout << "num = 1" << endl;
                    break;

            case 2: cout << "num = 2" << endl;
                    break;

            default: cout << "Don't know what the num is" << endl;
        }
        break;

        default: cout << "Don't know what the ch is" << endl;
    }
}