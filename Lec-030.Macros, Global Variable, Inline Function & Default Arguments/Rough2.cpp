#include <iostream>
using namespace std;

int score = 15;

void a(int &i) {
    cout << score << " In a" << endl;
    score++;
    cout << i << endl;
}

void b(int &i) {
    cout << score << " In b" << endl;
    cout << i << endl;

}

int main() {
    int i = 5;

    a(i);
    b(i);

    cout << score << " In main" << endl;

    return 0;
}