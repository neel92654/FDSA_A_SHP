#include <iostream>
using namespace std;

class Browser {
    struct Node {
        string page;
        Node *next;
    };
    Node *top;

public:
    Browser() {
        top = NULL;
    }

    void visit(string page) {
        Node *newNode = new Node;

        newNode->page = page;
        newNode->next = top;

        top = newNode;

        cout << "Current page = " << top->page << endl;
    }

    void back() {
        if (top == NULL) {
            cout << "No history" << endl;
            return;
        }
        Node *temp = top;
        top = top->next;

        delete temp;
        if (top != NULL)
            cout << "Current page = " << top->page << endl;
        else
            cout << "No page" << endl;
    }
};

int main() {
    Browser b;

    b.visit("Google");
    b.visit("YouTube");
    b.visit("GitHub");

    b.back();
    b.back();
    b.back();
    b.back();
}