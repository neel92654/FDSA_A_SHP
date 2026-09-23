#include <iostream>
using namespace std;

class Stack {
    int a[5];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == 4)
            cout << "Stack is full" << endl;
        else {
            top++;
            a[top] = x;
            cout << "Top = " << a[top] << endl;
        }
    }
    void pop() {
        if (top == -1)
            cout << "Stack is empty" << endl;
        else {
            cout << "Taken = " << a[top] << endl;
            top--;
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.pop();
    s.pop();
}