#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;

    list<int> n(5,100);

    cout << "Printing n" << endl;
    for(int i:n) {
        cout << i << " ";
    }cout << endl;

    l.push_back(1);
    l.push_front(2);

    cout << "Printing l" << endl;
    for(int i:l) {
        cout << i << " ";
    }cout << endl;

    cout << "Before erase size of list-> " << l.size() << endl;
    l.erase(l.begin());
    cout << "After erase size of list-> " << l.size() << endl;

    for(int i:l) {
        cout << i << " ";
    }cout << endl;
}