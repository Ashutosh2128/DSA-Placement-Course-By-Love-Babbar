#include <iostream>
using namespace std;

void reverse(int arr[], int n) {
    int start = 0;
    int end = n-1;

    while(start <= end) {
        swap(arr[start++], arr[end--]);
    }
}

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int main() {
    int arr[1000];

    int n;
    cout << endl << "Enter array size" << endl;
    cin >> n;

    cout << endl << "Enter array element" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << endl << "Printing array element before reversing" << endl;
    print(arr, n);

    //reverse function call
    reverse(arr, n);

    cout << endl << "printing array element after reversing" << endl;
    print(arr, n);

    return 0;
}







/*bool search(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    cout << "Enter the key" << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if(found) {
        cout << "Key is present" << endl;
    } else {
        cout << "Key is absent" << endl;
    }

}*/








/*int sumArray(int arr[], int n) {
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int arr[5];

    //taking input
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Sum of array elements = " << sumArray(arr, 5) << endl;
}*/









/*void update(int arr[], int n) {
    cout << "Inside the function" << endl;

    //update array's first element
    arr[0] = 120;

    //printing the array
    for(int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    cout << "Going back to main function" << endl;
}

int main() {
    int arr[3] = {1, 2, 3};

    update(arr, 3);

    //printing the array
    cout << endl << "Printing in main function" << endl;
    for(int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}*/







/*int getMin(int num[], int n) {
    int min = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(num[i] > min) {
            min = num[i];
        }
    }

    return min;
}

int getMax(int num[], int n) {
    int max = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(num[i] > max) {
            max = num[i];
        }
    }

    return max;
}

int main() {
    int size;
    cin >> size;

    int num[size];

    //taking input in array
    for(int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Maximun Value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;
}*/