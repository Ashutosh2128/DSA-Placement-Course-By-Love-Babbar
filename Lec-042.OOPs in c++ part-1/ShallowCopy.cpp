#include <iostream>
#include <string.h>
using namespace std;

class Family {
    private:
    int member;

    public:
    char *head = new char[100];

    void setFamily(char head[], int member) {
        strcpy(this -> head, head);
        this -> member = member; 
    }

    void print() {
        cout << "[ Head: " << this -> head << ", ";
        cout << "Member: " << this -> member << " ]";
        cout << endl << endl;
    }
};

int main() {
    
    Family f1;

    char head[8] = {'A', 's', 'h', 't', 'o', 's', 'h'};
    f1.setFamily(head, 4);
    f1.print();

    Family f2(f1);
    f2.print();

    f1.head[0] = 'B';
    f1.print();
    f2.print();

    return 0;
}


// class Hero {
//     public:
    
//     int health;
//     char * name = new char[100];
//     char level;

//     void setHealth(int h) {
//         health = h;
//     }

//     void setLevel(char ch) {
//         level = ch;
//     }

//     void setName(char name[]) {
//         strcpy(this -> name, name);
//     }

//     void print() {
//         cout << endl << endl;
//         cout << "[ Name: " << this -> name << ", ";
//         cout << "Health: " << this -> health << ", ";
//         cout << "Level: " << this -> level << " ]";
//         cout << endl << endl;
//     }
// };

// int main() {
//     Hero a;
//     a.setHealth(16);
//     a.setLevel('A');

//     char name[7] = "Babbar";
//     a.setName(name);

//     a.print();

//     //Use default copy constructor
//     Hero b(a);
//     b.print();

//     a.name[0] = 'G';
//     a.print();

//     b.print(); //This is how shallow copy works
// }