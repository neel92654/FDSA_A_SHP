#include <iostream>
using namespace std;

class Stack {
    char a[100];
    int top;

public:
    Stack() {
        top = -1;
    }
    void push(char x) {
        top++;
        a[top] = x;
    }
    char pop() {
        return a[top--];
    }
    char peek() {
        return a[top];
    }
    bool empty() {
        return top == -1;
    }
};

int priority(char x) {
    if (x == '+' || x == '-')
        return 1;

    if (x == '*' || x == '/')
        return 2;
    return 0;
}

int main() {
    Stack s;

    string infix = "(3+4)*2";
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {
        char x = infix[i];

        if (x >= '0' && x <= '9') {
            postfix += x;
        }
        else if (x == '(') {
            s.push(x);
        }
        else if (x == ')') {
            while (s.peek() != '(')
                postfix += s.pop();

            s.pop();
        }
        else {
            while (!s.empty() && priority(s.peek()) >= priority(x))
                postfix += s.pop();

            s.push(x);
        }
    }

    while (!s.empty())
        postfix += s.pop();

    cout << "Postfix = " << postfix << endl;
}