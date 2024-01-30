#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,string> m;

    m[1] = "Ashutosh";
    m[13] = "Prusty";
    m[2] = "Papun";

    m.insert({5,"bheem"});

    cout << "Finding -13-> " << m.count(-13) << endl;
    
    cout << "Before erase" << endl;

    for(auto i:m) {
        cout << i.first << " " << i.second << endl;
    }cout << endl;

    m.erase(13);

    cout << "After erase" << endl;

    for(auto i:m) {
        cout << i.first << " " << i.second << endl;
    }cout << endl;

    auto it = m.find(5);
    for(auto i = it; i != m.end(); i++) {
        cout << (*i).first << endl;
    }
}