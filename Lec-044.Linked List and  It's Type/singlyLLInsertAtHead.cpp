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

void insertAtHead(Node* &head, int d) {
    //creating new node temp
    Node* temp = new Node(d);

    //Now set temp as first node
    temp -> next = head;
    head = temp;
}

int main() {

    Node node1(10);

    Node* head = &node1;
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 14);
    print(head);

    //We can do between line 35-44 OR can do between line 48-57

    /*Node* node1 = new Node(10);

    Node* head = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 14);
    print(head);*/
    




    /*cout << node1 << endl;
    cout << &node1 << endl;
    cout << (*node1).data << endl;

    Node* head = node1;
    cout << head << endl;
    cout << &head << endl;
    cout << (*head).data << endl;*/
    
    // print();
}