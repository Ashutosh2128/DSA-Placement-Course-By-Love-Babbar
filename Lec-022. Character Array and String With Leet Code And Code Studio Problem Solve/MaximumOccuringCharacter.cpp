#include <iostream>
using namespace std;

char getMaxOccCharater(string s) {
    int arr[26] = {0};

    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];
        int num = 0;

        //Upper Case
        if(ch >= 'A' && ch <= 'Z') {
            num = ch - 'A';
        }
        else { //Lower Case
            num = ch - 'a';
        }

        arr[num]++;
    }

    int max = -1;
    int ans = 0;

    for(int i = 0; i < 26; i++) {
        if(max < arr[i]) {
            ans = i;
            max = arr[i];
        }
    }

    return 'a' + ans;
}

int main() {
    string s;
    cin >> s;

    cout << getMaxOccCharater(s) << endl;
}