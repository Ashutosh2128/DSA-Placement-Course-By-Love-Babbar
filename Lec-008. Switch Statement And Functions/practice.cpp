#include <iostream>
using namespace std;

int main() {
    /*
    int ch = '1';
    int num = 1;

    cout << endl;

    switch(ch) {
        case 1: cout << "First" << endl;
                cout << "First again" << endl;
                break;

        case '1': switch(num) {
                    case 1: cout << "Value of num is " << num << endl;
                            break;
                }
                break;
            
        default: cout << "It is default case" << endl;
    }

    cout << endl;





    int a, b;
    
    cout << endl;

    cout << "Enter the value of a " << endl;
    cin >> a;

    cout << "Enter the value of b " << endl;
    cin >> b;

    char op;
    cout << "Enter the operation you want to perform " << endl;
    cin >> op;

    switch(op) {
        case '+': cout << "Addtion of " << a << " and " << b << " = " << (a + b) << endl;
                  break;

        case '-': cout << "Subtraction of " << a << " and " << b << " = " << (a - b) << endl;
                  break;

        case '*': cout << "Multiplication of " << a << " and " << b << " = " << (a * b) << endl;
                  break;

        case '/': cout << "Division of " << a << " and " << b << " = " << (a / b) << endl;
                  break;

        case '%': cout << "Modulation of " << a << " and " << b << " = " << (a % b) << endl;
                  break;

        default: cout << "Please enter a valid operation" << endl;
    }

    cout << endl;*/
    


    //Home Work
    int totalAmount;
    cin >> totalAmount;

    switch(1) {
        case 1: cout << "Total number of 100 rupees needed: " << (totalAmount/100) << endl;
                totalAmount = (totalAmount % 100);

        case 2: cout << "Total number of 50 rupees needed: " << (totalAmount/50) << endl;
                totalAmount = (totalAmount % 50);

        case 3: cout << "Total number of 20 rupees needed: " << (totalAmount/20) << endl;
                totalAmount = (totalAmount % 20);

        case 4: cout << "Total number of 1 rupees needed: " << (totalAmount/1) << endl;
                totalAmount = (totalAmount % 1);
    }

    




    return 0;
}