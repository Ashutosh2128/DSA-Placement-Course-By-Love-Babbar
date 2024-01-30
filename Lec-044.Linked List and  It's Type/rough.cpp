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

        ~Node() {
            int value = this -> data;
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
    Node* temp = new Node(d);

    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);;

    tail -> next = temp;
    tail = temp;
}

void insertAtAnyPoint(Node* &head, Node* &tail, int position, int d) {
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

    if(temp -> next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(Node* &head, Node* &tail, int position) {
    if(position == 1) {
        Node* temp = head;
        head = temp -> next;
        delete temp;
    }
    else {
        Node* prev = NULL;
        Node* curr = head;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        if(curr -> next == NULL) {
            tail = prev;
            prev -> next = curr -> next;
            delete curr;
        } else {
            prev -> next = curr -> next;
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

    insertAtAnyPoint(head, tail, 3, 12);
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








/*class Animal {
    public:
        int age;
        int weight;

    void print() {
        cout << this << endl;
        // cout << age << endl;
        // cout << weight << endl;
    }
};

int main() {

    Animal object;
    object.age = 1;
    object.print();
    cout << &object << endl;

    Animal obj;
    obj.age = 2;
    obj.print();
    cout << &obj << endl;

    Animal *obj1 = new Animal;
    obj1 -> age = 3;
    obj1 -> print();
    cout << obj1 << endl;


    return 0;
}*/