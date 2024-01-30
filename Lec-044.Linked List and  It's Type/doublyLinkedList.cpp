#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* prev;
        Node* next;

        //consructor
        Node(int d) {
            this -> data = d;
            this -> prev = NULL;
            this -> next = NULL;
        }

        ~Node() {
            int value = this -> data;
            cout << "memory free for node with data " << value << endl;
        }
};

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    } cout << endl;
}

int getLength(Node* head) {
    int len = 0;
    Node* temp = head;

    while(temp != NULL) {
        len++;
        temp = temp -> next;
    }

    return len;
}

void insertAtHead(Node* &head, Node* &tail, int d) {
    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else {
        //create a new node
        Node* temp = new Node(d); //first step

        //then set it at first place and set it as head
        temp -> next = head; //second step
        head -> prev = temp; //third step
        head = temp; //fourth step
    }
}

void insertAtTail(Node* &head, Node* &tail, int d) {
    if(tail == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else {
        //create a new node
        Node* temp = new Node(d); //first step

        //then set it at last place and set it as tail
        temp -> prev = tail; //first step
        tail -> next = temp; //third step
        tail = temp; //fourth step
    }
}

void insertAtAnyPosition(Node* &head, Node* &tail, int position, int d) {
    //if the position is 1 then insert it at first place
    if(position == 1) {
        insertAtHead(head, tail, d);
        return;
    }

    //if we reach here that means position is greater than 1
    int cnt = 1;
    Node* temp = head;

    while(cnt < position-1) {
        temp = temp -> next;
        cnt++;
    }

    //then let's check if we are at last place then place it at last
    if(temp -> next == NULL) {
        insertAtTail(head, tail, d);
        return;
    }

    //If we reach here that means, we have to insert at any middle position
    //create a new node
    Node* nodeToInsert = new Node(d); //first step

    //then set this node is at it's right position
    nodeToInsert -> next = temp -> next; //second step
    temp -> next = nodeToInsert; //third step
    temp -> next -> prev = nodeToInsert; //fourth step
    nodeToInsert -> prev = temp; //fifth step
}

void deleteNode(Node* &head, Node* &tail, int position) {
    
    if(position == 1) {
        //delete first node
        Node* temp = head;
        temp -> next -> prev = NULL; //first step
        head = temp -> next; //second step
        temp -> next = NULL; //third step

        delete temp; //fourth step
    }
    else {
        //delete any middle node or last node
        Node* prev = NULL;
        Node* curr = head;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        if(curr -> next == NULL) { //if it is last node
            curr -> prev = NULL; //first step
            prev -> next = curr -> next; //second step
            curr -> next = NULL; //third step

            delete curr; //fourth step

            tail = prev; //change tail value to previous
        } else { //if it is any middle node
            curr -> prev = NULL; //first step
            prev -> next = curr -> next; //second step
            curr -> next = NULL; //third step

            delete curr; //fourth step
        }
    }
}

int main() {

    //Node* node1 = new Node(10);

    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    //cout << getLength(head) << endl;

    insertAtHead(head, tail, 11);
    print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl << endl;

    insertAtHead(head, tail, 13);
    print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl << endl;

    insertAtHead(head, tail, 8);
    print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl << endl;

    insertAtTail(head, tail, 25);
    print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl << endl;

    insertAtAnyPosition(head, tail, 2, 100);
    print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl << endl;

    insertAtAnyPosition(head, tail, 6, 200);
    print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl << endl;

    insertAtAnyPosition(head, tail, 1, 50);
    print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl << endl;

    deleteNode(head, tail, 1);
    print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl << endl;

    deleteNode(head, tail, 5);
    print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl << endl;

    deleteNode(head, tail, 5);
    print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl << endl;



    return 0;
}