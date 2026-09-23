**Problem Faced:** 

**Issues Faced While Solving Problem - 1:** 

There where not any issues faced just was to understand the checking of is the stack full or is empty conditions, which was done like this condition top == 4 checks whether the fixed-size stack is full, and if it is full, another element cannot be added.

```cpp
if (top == -1)
    cout << "Stack is empty" << endl;
else {
    cout << "Taken = " << a[top] << endl;
    top--;
}
```

**Issues Faced While Solving Problem - 2:** 

There were not any issues but to understand how to dynamically handle as the browser history does not have a fixed size.

```cpp
Node *newNode = new Node;

newNode->page = page;
newNode->next = top;

top = newNode;
```
A new node is created whenever a new page is visited and added to the top of the stack.

```cpp
if (top == NULL) {
    cout << "No history" << endl;
    return;
}

Node *temp = top;
top = top->next;

delete temp;
```

**Issues Faced While Solving Problem - 3:** 

There was an issue during handling the operators and brackets while converting the infix expression into postfix form.

```cpp
else if (x == ')') {
    while (s.peek() != '(')
        postfix += s.pop();

    s.pop();
}
```
