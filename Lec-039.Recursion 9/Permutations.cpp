#include <iostream>
#include <vector>
using namespace std;

void permutation(vector<int> arr, int ind, vector<vector<int>>& ans) {
    //Base case
    if(ind >= arr.size()) {
        ans.push_back(arr);
        return;
    }

    for(int i = ind; i < arr.size(); i++) {
        swap(arr[ind], arr[i]);
        permutation(arr, ind+1, ans);
        //back track
        swap(arr[ind], arr[i]);
    }
}

int main() {
    vector<int> arr = {1,2,3};
    vector<vector<int>> ans;

    int ind = 0;

    permutation(arr, ind, ans);

    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < 3; j++) {
            cout << ans[i][j];
        } cout << " ";
    } cout << endl;
}