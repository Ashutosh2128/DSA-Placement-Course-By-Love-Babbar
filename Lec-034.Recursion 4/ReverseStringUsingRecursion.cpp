#include <iostream>
using namespace std;

void reverse(string &str, int s, int e) {
    //base case
    if(s > e) return;

    swap(str[s], str[e]);
    s++;
    e--;

    //Recursive Call
    reverse(str, s, e);
}

int main() {
    string str = "Papun";

    reverse(str, 0, str.length()-1);

    cout << str << endl;

    return 0;
}