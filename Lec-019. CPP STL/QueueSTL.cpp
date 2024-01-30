#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> q;

    q.push("Ashutosh");
    q.push("Prusty");
    q.push("Papun");

    cout << "Size before pop " << q.size() << endl;

    cout << "First element " << q.front() << endl;
    cout << "Last element " << q.back() << endl;

    q.pop();

    cout << "First element " << q.front() << endl;
    cout << "Last element " << q.back() << endl;

    cout << "Size after pop " << q.size() << endl;
}

