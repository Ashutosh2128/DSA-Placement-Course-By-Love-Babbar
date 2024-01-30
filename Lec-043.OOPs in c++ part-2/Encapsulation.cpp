#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;
    int height;

    int getAge() {
        return this -> age;
    }
};

int main() {
    Student first;
    cout << "Sab sahi chal raha he" << endl;
}