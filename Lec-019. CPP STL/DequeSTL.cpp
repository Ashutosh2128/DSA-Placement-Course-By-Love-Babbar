#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;

    d.push_back(1);
    d.push_back(2);

    cout << "Print d" << endl;
    for(int i:d) {
        cout << i << " ";
    }cout << endl;

    d.pop_back(); //For pop front :- d.pop_front();
    cout << "Print d after pop" << endl;
    for(int i:d) {
        cout << i << " ";
    }cout << endl;

    d.push_back(1);

    cout << "First index element-> " << d.at(1) << endl;;

    cout << "Front " << d.front() << endl;
    cout << "Back " << d.back() << endl;

    cout << "Empty or not " << d.empty() << endl;

    cout << "Before erase " << d.size() << endl;
    d.erase(d.begin(),d.begin()+1); 
    cout << "After erase " << d.size() << endl;

    for(int i:d) {
        cout << i << " ";
    }
}