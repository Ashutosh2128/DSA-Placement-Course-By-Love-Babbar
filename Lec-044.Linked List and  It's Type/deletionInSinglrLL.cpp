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

        //destructor
        ~Node() {
            int value = this -> data;
            //memory free
            if(this -> next != NULL) {
                // delete next;
                this -> next = NULL;
            }

            cout << "memory is free for node with data " << value << endl;
        }
};

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    } cout << endl;
}

void insertAtHead(Node* &head, int d) {
    //create a new node
    Node* temp = new Node(d);

    //set the new node at first
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
    //first create a new node
    Node* temp = new Node(d);

    //set the temp to the last position
    tail -> next = temp;
    tail = temp;
}

void insertAtAnyPosition(Node* &head, Node* &tail, int position, int d) {

    //if position is 1, then insert it at head
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    int cnt = 1;
    Node* temp = head;

    while(cnt < position-1) {
        temp = temp -> next;
        cnt++;
    }

    //if temp -> next = NULL means temp reach to the last position, then add node at tail
    if(temp -> next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    //If upper two conditions are not true then insert it at any middle position which was given
    //Create a new node
    Node* nodeToInsert = new Node(d);

    //then insert the node at the position
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(Node* &head, Node* &tail, int position) {
    
    if(position == 1) { //deleting first node
        Node* temp = head;
        head = head -> next; //head = temp -> next;
        
        //memory free of first node
        temp -> next = NULL;
        delete temp;
    }
    else { //deleting any middle node or last node
        Node * curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        if(curr -> next == NULL) { //If it is last node then change tail
            tail = prev;
            prev -> next = curr -> next;
            curr -> next = NULL;
            delete curr;
        } else {
            prev -> next = curr -> next;
            curr -> next = NULL;
            delete curr;
        }
    }
}

int main() {

    Node* node1 = new Node(11);

    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head, 10);
    print(head);

    insertAtTail(tail, 13);
    print(head);

    insertAtAnyPosition(head, tail, 3, 12);
    print(head);

    insertAtTail(tail, 14);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    deleteNode(head, tail, 4);
    print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    deleteNode(head, tail, 4);
    print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    deleteNode(head, tail, 4);
    print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    return 0;
}