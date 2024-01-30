#include <iostream>
using namespace std;

void insertionSort(int* arr, int index, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    //Base case
    if(index >= n) return;

    int temp = arr[index];
    int i = index-1;

    while(i >= 0 && arr[i] > temp) {
        arr[i+1] = arr[i];
        i--;
    }

    arr[i+1] = temp;

    //recursive call
    insertionSort(arr, index+1, n);
}

int main() {
    int arr[6] = {7,6,5,8,9,4};

    insertionSort(arr, 1, 6);

    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}




/*void selectionSort(int* arr, int n) {
    //Base case
    if(n == 0 || n == 1) return;

    int minIndex = 0;

    for(int i = 1; i < n; i++) {
        if(arr[minIndex] > arr[i]) {
            minIndex = i;
        }
    }

    swap(arr[0], arr[minIndex]);

    //Recursive call
    selectionSort(arr+1, n-1);
}

int main() {
    int arr[6] = {7,6,5,4,3,2};

    selectionSort(arr, 6);

    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}*/


/*void bubbleSort(int* arr, int n) {
    //Base case
    if(n == 0 || n == 1) return;

    //ek case solve karna hee. This loop will put largest element to the last
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }

    //aab baki recursion sambhalega
    bubbleSort(arr, n-1);
}

int main() {
    int arr[6] = {4,6,3,1,8,5};

    bubbleSort(arr, 6);

    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}*/

/*int power(int a, int b) {
    //Base case
    if(b == 0) return 1;
    if(b == 1) return a;

    //Recursive call
    int ans = power(a, b/2);

    if(b % 2 == 0) {
        //b is even
        return ans * ans;
    } else {
        //b is odd
        return a * ans * ans;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    int ans = power(a,b);

    cout << a << " to the power " << b << " = " << ans << endl;
}*/

/*bool checkPalindrome(string str, int s, int e) {
    if(s > e) return true; //Base case

    if(str[s] != str[e])
        return false;
    else
        //recursive call
        return checkPalindrome(str, s+1, e-1);
}

int main() {
    string str = "abcdba";

    if(checkPalindrome(str, 0, str.size()-1)) {
        cout << endl << "It is a palindrome string" << endl << endl;
    } else {
        cout << endl << "It is not a palindrome string" << endl << endl;
    }
}*/


/*void reverse(string &str, int s, int e) {

    cout << "call recieved for " << str << endl;

    //Base case
    if(s > e) return;

    swap(str[s++], str[e--]);

    reverse(str, s, e);
}

void rev(char* ch, int s, int e) {

    cout << "call recieved for ";
    for(int i = 0; i < 5; i++) {
        cout << ch[i];
    } cout << endl;

    //Base case
    if(s > e) return;

    swap(ch[s++], ch[e--]);

    rev(ch, s, e);
}

int main() {
    string name = "Ashutosh";

    reverse(name, 0, name.length()-1);

    cout << name << endl;

    cout << endl << endl;

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};

    rev(ch, 0, 4);

    for(int i = 0; i < 5; i++) {
        cout << ch[i];
    } cout << endl;

    return 0;
}*/