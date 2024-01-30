#include <iostream>
using namespace std;

int main() {

    char ch = 'a';
    int num = 1;

    switch(num) {

        case 1: cout << "First" << endl;
                cout << "First Again" << endl;
                //break;

        case '1': cout << "Character one" << endl;
                  //break;

        default: cout << "It is a default case" << endl;
    }
}