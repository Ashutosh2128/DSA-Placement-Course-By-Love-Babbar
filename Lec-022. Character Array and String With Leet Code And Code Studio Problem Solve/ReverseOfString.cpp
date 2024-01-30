#include <iostream>
using namespace std;

void reverse(char name[20],int n) {
    int s = 0;
    int e = n-1;

    while(s <= e) {
        swap(name[s++],name[e--]);
    }
}

int getLength(char name[20]) {
    int count = 0;

    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    
    return count;
}

int main() {
    char name[20];

    cout << "Enter your name" << endl;
    cin >> name;

    int len = getLength(name);
    cout << "Lenth of my name is : " << len << endl;

    reverse(name,len);
    cout << "Reverse of my name is : " << name << endl;
}