#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>> arr, int n, vector<vector<int>> visited, int x, int y) {
    if((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && arr[x][y] == 1) {
        return true;
    }
        
    return false;
}

void solve(vector<vector<int>> arr, int n, int x, int y, string path, vector<vector<int>> visited, vector<string>& ans) {
    visited[x][y] = 1;

    //Base Case
    if(x == n-1 && y == n-1) {
        ans.push_back(path);
        return;
    }

    //We can go to D/L/R/U

    //For D
    int newx = x+1;
    int newy = y;
    if(isSafe(arr, n, visited, newx, newy)) {
        path.push_back('D');
        solve(arr, n, newx, newy, path, visited, ans);
        path.pop_back();
    }

    //For L
    newx = x;
    newy = y-1;
    if(isSafe(arr, n, visited, newx, newy)) {
        path.push_back('L');
        solve(arr, n, newx, newy, path, visited, ans);
        path.pop_back();
    }

    //For R
    newx = x;
    newy = y+1;
    if(isSafe(arr, n, visited, newx, newy)) {
        path.push_back('R');
        solve(arr, n, newx, newy, path, visited, ans);
        path.pop_back();
    }

    //For U
    newx = x-1;
    newy = y;
    if(isSafe(arr, n, visited, newx, newy)) {
        path.push_back('U');
        solve(arr, n, newx, newy, path, visited, ans);
        path.pop_back();
    }

    visited[x][y] = 0;
}

int main() {
    vector<vector<int>> arr{{1, 0, 0, 0}, {1, 1, 0, 0}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    int n = arr.size();

    string path;
    vector<string> ans;

    int srcx = 0;
    int srcy = 0;

    vector<vector<int>> visited = arr;
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr.size(); j++) {
            visited[i][j] = 0;
        }
    }

    solve(arr, n, srcx, srcy, path, visited, ans);

    sort(ans.begin(), ans.end());
    
    for(auto i: ans) {
        cout << i << " ";
    } cout << endl;
}