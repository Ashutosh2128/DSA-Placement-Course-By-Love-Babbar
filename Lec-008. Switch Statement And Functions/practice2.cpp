#include <iostream>
using namespace std;

//Pass by value
void dummy(int n) {
    n++;
    cout << "n is " << n << endl;
}

int main() {
    
    int n;
    cin >> n;

    dummy(n);

    cout << "number n is " << n << endl;

    return 0;
}






/*//find fibonacci of n(Home Work)
int fib(int n) {
    if(n == 1 || n == 2) {
        return n-1;
    }

    int a = 0, b = 1, ans = 0;

    for(int i = 3; i <= n; i++) {
        ans = a + b;
        a = b;
        b = ans;
    }

    return ans;
}

int main() {

    int n;
    cin >> n;

    cout << "Fobonacci of count " << n << " = " << fib(n) << endl;

    return 0;
}












//Number of set bit count(Home Work)
int setBit(int n) {
    int num = 1;
    int cnt = 0;

    while(num <= n) {
        if(num & n) {
            cnt++;
        }

        num = num << 1;
    }

    return cnt;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << "Total number of set bit = " << setBit(a) + setBit(b) << endl;
}







bool isPrime(int n) {

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            //divide ho gaya
            return 0;
        }
    }

    return 1;
}

int main() {

    int n;
    cin >> n;

    if(isPrime(n)) {
        cout << "is a prime number" << endl;
    } else {
        cout << "not a prime number" << endl;
    }



    return 0;
}









void printCounting(int n) {
    for(int i = 1; i <= n; i++) {
        cout << i << " ";
    } cout << endl;
}

int main() {

    int n;
    cin >> n;

    printCounting(n);



    return 0;
}









int factorial(int n) {
    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int nCr(int n, int r) {
    int num = factorial(n);
    int denom = factorial(r) * factorial(n-r);

    return num / denom;
}

int main() {

    int n, r;

    cin >> n >> r;

    cout << "Answer = " << nCr(n, r) << endl;


    return 0;
}






//1 -> Even
//0 -> Odd
bool isEven(int a) {

    if(a & 1) { //Odd
        return 0;
    } 
    else { //Even
        return 1;
    }
}

int main() {
    int num;
    cin >> num;

    if(isEven(num)) {
        cout << "Number is Even" << endl;
    }
    else {
        cout << "Number is Odd" << endl;
    }
}*/










/*int power() {
    int a, b;
    cin >> a >> b;

    int ans = 1;

    for(int i = 1; i <= b; i++) {
        ans = ans * a;
    }

    return ans;
}

int main() {

    /*
    // int a, b;
    // cin >> a >> b;

    // int ans = power(a, b);
    // cout << "Answer is " << ans << endl;

    // int c, d;
    // cin >> c >> d;

    // ans = power(c, d);
    // cout << "Answer is " << ans << endl;

    int ans = power();
    cout << "Answer is " << ans << endl;

    ans = power();
    cout << "Answer is " << ans << endl;

    ans = power();
    cout << "Answer is " << ans << endl;


    return 0;
}*/