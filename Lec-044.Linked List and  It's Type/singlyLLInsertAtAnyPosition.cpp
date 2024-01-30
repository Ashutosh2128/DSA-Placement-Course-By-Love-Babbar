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
    Node* temp = new Node(d);

    tail -> next = temp;
    tail = temp;
}

void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);

    temp -> next = head;
    head = temp;
}

void insertAtAnyPosition(Node* &tail, Node* &head, int position, int d) {

    //insert at start
    if(position <= 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp -> next;
        cnt++;
    }

    //inserting at last position
    if(temp -> next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    //create new node
    Node* nodeToInsert = new Node(d);

    //add the new node at the position
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
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

    insertAtAnyPosition(tail, head, 2, 22);
    print(head);

    insertAtAnyPosition(tail, head, 5, 30);
    print(head);

    insertAtAnyPosition(tail, head, 6, 40);
    print(head);

    insertAtTail(tail, 55);
    print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    return 0;
}