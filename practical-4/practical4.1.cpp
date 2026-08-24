#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) { 
        data = value; 
        next = NULL; 
    }
};

void insertFront(Node*& head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void insertEnd(Node*& head, int value) {
    Node* newNode = new Node(value);
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void insertAtPosition(Node*& head, int value, int position) {
    if (position == 0) {
        insertFront(head, value);
        return;
    }

    Node* temp = head;

    for (int i = 0; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Invalid position!" << endl;
        return;
    }

    Node* newNode = new Node(value);

    newNode->next = temp->next;
    temp->next = newNode;
}

void display(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    Node* head = NULL;

    insertFront(head, 10);
    cout << "After front insertion: ";
    display(head);

    insertEnd(head, 20);
    cout << "After end insertion: ";
    display(head);

    insertAtPosition(head, 15, 1);
    cout << "After position insertion: ";
    display(head);

    return 0;
}