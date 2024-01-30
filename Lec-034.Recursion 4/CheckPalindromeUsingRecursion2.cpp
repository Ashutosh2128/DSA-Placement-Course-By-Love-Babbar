#include <iostream>
using namespace std;

bool isPalindrome(string str, int i) {
    //Base case
    if(i > str.length()/2) return true;

    if(str[i] != str[str.length()-i-1]) {
        return false;
    } else {
        //Rrecursive call
        return isPalindrome(str, i+1);
    }
}

int main() {
    string str = "abaacbba";

    if(isPalindrome(str, 0)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}