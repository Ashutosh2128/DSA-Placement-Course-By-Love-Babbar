#include <iostream>
using namespace std;

void update(int &n) {
    n++;
}

int main() {
    int i = 5;

    cout << "Before " << i << endl;
    update(i);
    cout << "After " << i << endl;
}