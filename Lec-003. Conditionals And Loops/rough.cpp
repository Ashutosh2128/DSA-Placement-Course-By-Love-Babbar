#include <iostream>
using namespace std;

int main() {
    // int a;
    // cin >> a;
    
    // cout << "Value od n is : " << n << endl;

    //if a is positive
     /*
    if(a > 0) {
        cout << "a is positive" << endl;
    }
    else {
        cout << "a is negative" << endl;
    }

    int a, b;

    cout << "Enter the value of a " << endl;
    cin >> a;
    cout << "Enter the value of b " << endl;
    cin >> b;

    if(a > b) {
        cout << "a is grater" << endl;
    }
    if(b > a) {
        cout << "b is greater" << endl;
    }
    

    int a;

    cout << "Enter the value of a" << endl;
    cin >> a;

    if(a > 0) {
        cout << "a is positive" << endl;
    }
    else if(a < 0) {
        cout << "a is negative" << endl;
    }
    else {
        cout << "a is 0" << endl;
    }
    

    //Home work:-
    char ch;
    cout << "Enter the character: " << endl;
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z') {
        cout << "Entered character is in Upper case" << endl;
    } else if(ch >= 'a' && ch <= 'z') {
        cout << "Entered character is in Lower case" << endl;
    } else {
        cout << "Entered character is a numeric value" << endl;
    }
    


    int n;
    cin >> n;

    int i = 1;
    int sum = 0;

    while(i <= n) {
        sum = sum + i;
        i = i+1;
    }

    cout << "Sum of all numbers = " << sum << endl;
    



    //Sum of all n numbers(Home work)
    int n;
    cin >> n;

    int i = 2;
    int sum = 0;

    while(i <= n) {
        sum = sum + i;
        i = i + 2;
    }

    cout << "Sum = " << sum << endl;
    



    //Fahrenheit to celsius(Home work)
    //Formula: c = (5.0/9)(f-30) {where f = fahrenheit, c = celcius}
    float f;
    cin >> f;

    float c = (5.0/9) * (f-30);

    cout << "Fahrenheit " << f << " = " << c << " Celcius " << endl;
    

    int n;
    cin >> n;
    
    int i = 2;

    while(i < n) {
        if(n % i == 0) {
            cout << "Not Prime" << endl;
            return 0;
        }
        i = i+1;
    }

    cout << "Prime" << endl;
    



    //Pattern 1
    int n;
    cin >> n;

    int i = 1;

    while(i <= n) {
        int j = 1;

        while(j <= n) {
            cout << "*";
            j = j+1;
        }

        cout << endl;
        i = i+1;
    }
    */


    int n;
    cin >> n;

    int i = 1;

    while(i <= n) {
        int j = 1;

        while(j <= n) {
            cout << i;
            j = j+1;
        }

        cout << endl;
        i = i+1;
    }







    return 0;
}