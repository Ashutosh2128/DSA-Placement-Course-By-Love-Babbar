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
            if(this -> next != NULL) {
                delete next;
                this -> next = NULL;
            }
            cout << "memory is free for node with data " << value << endl;
        }
};

void insertNode(Node* &tail, int element, int d) {
    //empty list
    if(tail == NULL) {
        Node* temp = new Node(d); //first step
        tail = temp; //second step

        //set it as circular
        temp -> next = temp; //third step
    }
    else {
        //non-empty list
        //assuming that there is element is present in the list

        Node* curr = tail;

        //reach to the element through while loop
        while(curr -> data != element) {
            curr = curr -> next;
        }

        //if we reach here then we found the curr which representing element
        Node* temp = new Node(d); //first step create a node
        temp -> next = curr -> next; // second step
        curr -> next = temp; //third step
    }
}

void print(Node* tail) {
    //empty list
    if(tail == NULL) {
        cout << "List is empty" << endl;
    }

    //non-empty list
    Node* temp = tail;
    do {
        cout << temp -> data << " "; //cout << tail -> data << " ";
        temp = temp -> next; //tail = tail -> next;
    } while(temp != tail); //while(tail != temp);
    cout << endl;
}

void deleteNode(Node* &tail, int value) {
    //empty list
    if(tail == NULL) {
        cout << "List is empty, please check again" << endl;
        return;
    }
    else {
        //non-empty list
        //assuming that "value" is present in the list

        Node* prev = tail;
        Node* curr = prev -> next;

        //reach to the element through the loop
        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        //if we reach here then we found that value

        //1 node linked list
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 node linked list
        else if(tail == curr) {
            //if curr value is tail then, after deleting curr it will delete tail also
            //then we unable to print the list after deletion
            //so here we change tail value 
            tail = prev;
        }

        prev -> next = curr -> next; //first step
        curr -> next = NULL; //second step
        delete curr; //third step
    }
}

int main() {

    Node* tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 9, 10);
    print(tail);

    deleteNode(tail, 3);
    print(tail);

    deleteNode(tail, 5);
    print(tail);

    deleteNode(tail, 9);
    print(tail);

    return 0;
}