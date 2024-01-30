#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    } cout << endl;
}

void insertAtTail(Node* &tail, int d) {
    //creat a new node
    Node* temp = new Node(d);

    //now add node temp tail of the LL
    tail -> next = temp;
    tail = temp;
}

int main() {

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);


    return 0;
}