#include <iostream>
using namespace std;


class A {
    public:
        void func() {
            cout << "Hello" << endl;
        }

        int func(string name) {
            cout << "Hello Papun" << endl;
            return 1;
        }

        void func(int a) {
            cout << "Hello Everyone" << endl;
        }
};

int main() {
    A obj;

    obj.func("Ashu");
}







/*class A {
    public:
        void func() {
            cout << "I am A" << endl;
        }
};

class B {
    public:
    void func() {
        cout << "I am B" << endl;
    }   
};

class C : public A, public B {

};

int main() {
    C obj;

    obj.A::func();
    obj.B::func();
}*/








/*class A {
    public:
        void funcA() {
            cout << "Inside Function A" << endl;
        }
};

class D {
    public:
        void funcD() {
            cout << "Inside Function D" << endl;
        }
};

class B : public A {
    public:
        void funcB() {
            cout << "Inside Function B, which is inherit class A" << endl;
        }
};

class C : public A, public D {
    public:
        void funcC() {
            cout << "Inside Function C, which is inherit class A & D" << endl;
        }
};

int main() {
    A objA;
    objA.funcA();
    cout << endl;

    D objD;
    objD.funcD();
    cout << endl;

    B objB;
    objB.funcB();
    objB.funcA();
    cout << endl;

    C objC;
    objC.funcC();
    objC.funcA();
    objC.funcD();
    cout << endl;
}*/









/*class A {
    public:
        void func1() {
            cout << "Inside Function 1" << endl;
        }
};

class B : public A {
    public:
        void func2() {
            cout << "Inside Fuction 2" << endl;
        }
};

class C : public A {
    public:
        void func3() {
            cout << "Inside Function 3" << endl;
        }
};

class D : public A {
    public:
        void func4() {
            cout << "Inside Function 4" << endl;
        }
};

int main() {
    A obj;
    obj.func1();
    cout << endl;

    B obj2;
    obj2.func2();
    obj2.func1();
    cout << endl;

    C obj3;
    obj3.func3();
    obj3.func1();
    cout << endl;

    D obj4;
    obj4.func4();
    obj4.func1();
    cout << endl;
}*/








// class Human {
//     private:

//     protected:
//         int age;
//     public:
        
// };

// class Male : private Human {
//     private:

//     protected:

//     public:
//         string color;

//         int getAge() {
//             return age;
//         }
// };

// int main() {
//     Male obj;
//     //cout << obj.age << endl;
//     cout << obj.getAge() << endl;
// }




// class Student {
//     private:
//         string name;
//         int age;
//         int height;

//     public:
//         int getAge() {
//             return this -> age;
//         }
// };

// int main() {

//     Student first;

//     cout << "Sab shai chal rahaa he" << endl;


//     return 0;
// }