#include <iostream>
using namespace std;

class Family {
    public:
    string head;
    int member;

    void print() {
        cout << "Head: " << head << endl;
        cout << "Member: " << member << endl;
    }
};

int main() {
    Family f1; //First Object
    f1.head = "Ashutosh";
    f1.member = 4;
    f1.print();

    Family f2; //Second object
    f2.head = "Ashu";
    f2.member = 5;
    f2.print();

    //After use of copy assignment operator
    f1 = f2;
    f1.print();
    f2.print();
}



// class Hero {
//     public:

//     int health;
//     char level;

//     Hero(int h, char ch) {
//         health = h;
//         level = ch;
//     }

//     void print() {
//         cout << "Health: " << health << ", ";
//         cout << " Level: " << level << endl;
//     }
// };

// int main() {
//     Hero a(16, 'A');
//     a.print();

//     Hero b(8, 'B');
//     b.print();

//     //Use copy assignment operator
//     a = b;
//     a.print();
//     b.print();
// }