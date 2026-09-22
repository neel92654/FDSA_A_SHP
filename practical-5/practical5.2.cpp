#include <iostream>
using namespace std;

class SinglyCircular {
    struct Node {
        string name;
        Node* next;
    };

    Node* head;

public:
    SinglyCircular() {
        head = NULL;
    }

    void insert(string name) {
        Node* newNode = new Node;
        newNode->name = name;

        if (head == NULL) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;

            while (temp->next != head)
                temp = temp->next;

            temp->next = newNode;
            newNode->next = head;
        }

        display();
    }

    void remove(string name) {
        if (head == NULL)
            return;

        Node* temp = head;
        Node* prev = NULL;

        do {
            if (temp->name == name)
                break;

            prev = temp;
            temp = temp->next;
        } while (temp != head);

        if (temp->name != name)
            return;

        if (temp == head) {
            if (head->next == head) {
                head = NULL;
            } else {
                Node* last = head;

                while (last->next != head)
                    last = last->next;

                head = head->next;
                last->next = head;
            }
        } else {
            prev->next = temp->next;
        }

        delete temp;
        display();
    }

    void display() {
        if (head == NULL) {
            cout << "Circle is empty\n";
            return;
        }

        Node* temp = head;

        cout << "Circle: ";

        do {
            cout << temp->name << " ";
            temp = temp->next;
        } while (temp != head);

        cout << endl;
    }
};

int main() {
    SinglyCircular c;

    c.insert("student1");
    c.insert("student2");
    c.insert("student3");

    c.remove("student2");
    c.insert("student4");
    c.remove("student1");
}