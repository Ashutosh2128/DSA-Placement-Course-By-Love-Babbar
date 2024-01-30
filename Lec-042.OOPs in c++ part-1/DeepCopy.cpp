#include <iostream>
#include <string.h>
using namespace std;

class Family {
    private:
    int member;

    public:
    char *head = new char[100];

    void setFamily(int member, char head[]) {
        this -> member = member;
        strcpy(this -> head, head);
    }

    void print() {
        cout << "[ Member: " << this -> member << ", ";
        cout << "Head: " << this -> head << " ]";
        cout << endl << endl;
    }

    Family() {

    }

    Family(Family& obj) {
        char *ch = new char[strlen(obj.head)+1];
        strcpy(ch, obj.head);
        this -> head = ch;
        this -> member = obj.member;
    }
};

int main() {
    Family f1;

    char head[9] = "Ashutosh";
    f1.setFamily(4, head);

    f1.print();

    Family f2 = f1;
    f2.print();

    f1.head[0] = 'B';
    f1.print();
    f2.print();
    //f2 = f1 //If we do copy again then it will change again
    return 0;
}


// class Hero {
//     public:
//     int health;
//     char * name;
//     char level;

//     Hero() {
//         name = new char[100];
//     }

//     Hero(Hero & temp) {
//         char *ch = new char[strlen(temp.name) + 1];
//         strcpy(ch, temp.name);
//         this -> name = ch;
//         this -> health = temp.health;
//         this -> level = temp.level;
//     }

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
//         cout << endl;
//         cout << "[ Name: " << this -> name << " ,";
//         cout << "Health: " << this -> health << " ,";
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

//     Hero b(a);

//     b.print();

//     a.name[0] = 'G';

//     a.print();

//     b.print(); //This is deep copy
// }