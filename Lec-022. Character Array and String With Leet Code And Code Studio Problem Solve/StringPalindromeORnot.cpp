#include <iostream>
using namespace std;

int getLength(char name[20]) {
    int count = 0;

    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    
    return count;
}

bool checkPalindrome(char name[],int n) {
    int s = 0;
    int e = n-1;

    while(s <= e) {
        if(name[s] == name[e]) {
            s++;
            e--;
        } else {
            return 0;
        }
    }

    return 1;
}

int main() {
    char name[20];

    cout << "Enter your name" << endl;
    cin >> name;

    int len =  getLength(name);
    cout << "Lenth of my name is : " << len << endl;

    cout << "Palindrome or Not - " << checkPalindrome(name,len) << endl;
}