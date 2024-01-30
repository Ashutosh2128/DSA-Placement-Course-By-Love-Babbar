#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j) {
    //Base case
    if(i > j) return true;

    if(str[i] != str[j]) {
        return false;
    } else {
        return checkPalindrome(str, i+1, j-1);
    }
}

int main() {
    string str = "abbcbba";

    if(checkPalindrome(str, 0, str.length()-1)) {
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not Palindrome" << endl;
    }
}