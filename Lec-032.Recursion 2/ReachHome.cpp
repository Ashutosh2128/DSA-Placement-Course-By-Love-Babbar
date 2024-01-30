#include <iostream>
using namespace std;

void reachHome(int src, int dest) {
    cout << "Source " << src << " Destination " << dest << endl;

    //Base case
    if(src == dest) {
        cout << "Pahuch gaya" << endl;
        return;
    }

    //Processing -> ek step aage badhjao
    src++;

    //Recursive call
    reachHome(src, dest);
}

int main() {
    int src = 1;
    int dest;
    cin >> dest;

    reachHome(src, dest);

    return 0;
}