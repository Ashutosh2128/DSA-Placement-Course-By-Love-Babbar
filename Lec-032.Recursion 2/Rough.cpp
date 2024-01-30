#include <iostream>
using namespace std;

void sayDigit(int n, string *arr) {
    //Base case
    if(n == 0)
        return;

    //processing
    int digit = n % 10;
    n = n/10;

    sayDigit(n, arr);

    cout << arr[digit] << " ";
}

int main() {

    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int n;
    cin >> n;

    sayDigit(n, arr);

    return 0;
}






























/*void reachHome(int src, int dest) {
   
    //base case
    if(src == dest) {
        cout << "Pahanch gaya" << endl;
        return;
    }

    cout << "Source " << src << " Destination " << dest << endl;

    src++; // processing - ek step aage badh jao

    //recursive call
    reachHome(src,dest);
}

int main() {
    int src = 1;
    int dest;
    cin >> dest;

    reachHome(src, dest);

    return 0;
}*/

