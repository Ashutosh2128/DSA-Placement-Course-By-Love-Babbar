#include <iostream>
using namespace std;

int score = 5; //Global Variable

void a() {
    cout << score << " In a" << endl;
}

void b() {
    cout << score << " In b" << endl;
}

int main() {
    cout << score << " In main" << endl;
    a();
    b();
}