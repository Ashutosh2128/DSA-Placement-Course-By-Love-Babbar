#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key) {
    int start = 0;
    int end = size-1;

    int mid = start + (end-start) / 2;  //This one is more optimised than (start + end) / 2

    while(start <= end) {
        if(key == arr[mid]) {
            return mid;
        }
        //Right Wale Part Me Jao
        else if(key > arr[mid]) {
            start = mid+1;
        }
        //Left Wale Part Me Jao
        else if(key < arr[mid]) {
            end = mid-1;
        }
        mid = start + (end-start) / 2;  //This one is more optimised than (start + end) / 2 
    }
    return -1;
}

int main() {
    int even[6] = {1,3,4,6,9,10};
    int odd[5] = {3,12,19,25,35};

    int evenIndex = binarySearch(even,6,10);

    cout << "Index of 10 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd,5,3);

    cout << "Index of 3 is " << oddIndex << endl;
}