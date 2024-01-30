#include <iostream>
#include <queue>
using namespace std;

int main() {
    //Max heap
    priority_queue<int> maxi;

    //Min heap
    priority_queue<int,vector<int>,greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout << "Size of Max heap-> " << maxi.size() << endl;

    int n = maxi.size();

    for(int i=0; i<n; i++) {
        cout << maxi.top() << " ";
        maxi.pop();
    }cout << endl;

    cout << "Max heap khali he kya bhai-> " << maxi.empty() << endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    cout << "Size of Min heap-> " << mini.size() << endl;

    int m = mini.size();

    for(int i=0; i<m; i++) {
        cout << mini.top() << " ";
        mini.pop();
    }cout << endl;

    cout << "Min heap khali he kya bhai-> " << mini.empty() << endl;
}