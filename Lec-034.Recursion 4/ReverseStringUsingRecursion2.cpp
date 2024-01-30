#include <iostream>
using namespace std;

void reverse(string &str, int i) {
    if(i > str.size()/2) return;

    swap(str[i], str[str.size()-i-1]);
    i++;

    //Recursive call
    reverse(str, i);
}

int main() {
    string name = "Babbar";

    reverse(name, 0);

    cout << name << endl;

    return 0;
}