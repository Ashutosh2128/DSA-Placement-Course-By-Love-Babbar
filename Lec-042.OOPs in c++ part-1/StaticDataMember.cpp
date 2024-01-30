#include <iostream>
using namespace std;

class Hero {
    public:

    static int timeToComplete; //Declaration (Initially Zero)
};

int Hero :: timeToComplete = 16; //Initialization

int main() {
    cout << Hero :: timeToComplete << endl; //Access without using object
}