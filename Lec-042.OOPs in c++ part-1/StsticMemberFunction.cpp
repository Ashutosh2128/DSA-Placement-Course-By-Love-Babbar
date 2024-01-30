#include <iostream>
using namespace std;

class Hero {
    public:
    static int timeToComplete;

    static int random() {
        return timeToComplete;
    }
};

int Hero :: timeToComplete = 8;

int main() {
    cout << Hero :: random() << endl;
}