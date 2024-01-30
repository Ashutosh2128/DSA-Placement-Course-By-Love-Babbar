#include <iostream>
#include <vector>
using namespace std;

void solve(string keyNum, string output, int ind, vector<string>& ans, string* mapping) {
    //Base case
    if(ind >= keyNum.length()) {
        ans.push_back(output);
        return;
    }

    int num = keyNum[ind] - '0';
    string value = mapping[num];

    for(int i = 0; i < value.length(); i++) {
        output.push_back(value[i]);
        solve(keyNum, output, ind+1, ans, mapping);
        output.pop_back();
    }
}

int main() {
    string keyNum;
    cout << "Enter Keypad Number" << endl;
    cin >> keyNum;

    vector<string> ans;
    string output = "";
    int ind = 0;

    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    solve(keyNum, output, ind, ans, mapping);

    for(auto i: ans) {
        cout << i << " ";
    } cout << endl;
}