**Problem Faced:**

**Issues Faced While Solving Problem - 1:**

There were no major issues faced while solving this problem. The main
thing was to understand how to check whether the queue is full or empty.
The `count` variable is used to check these conditions. If the queue is
full, another token cannot be added.

``` cpp
if (count == n) {
    cout << "Error: Queue is full\n";
}
```

Before serving a token, the program checks whether the queue is empty.

``` cpp
if (count == 0) {
    cout << "Error: Queue is empty\n";
}
else {
    front = (front + 1) % n;
    count--;
}
```

**Issues Faced While Solving Problem - 2:**

There were no major issues faced while solving this problem. The main
thing was to understand how to manage the queue dynamically because it
does not have a fixed size. A new node is created whenever a patient
arrives and is added to the rear of the queue.

``` cpp
Node* newNode = new Node;
newNode->data = patient;
newNode->next = NULL;
```

If the queue is empty, both `front` and `rear` point to the new node.
Otherwise, the new node is connected at the rear.

``` cpp
if (rear == NULL) {
    front = rear = newNode;
}
else {
    rear->next = newNode;
    rear = newNode;
}
```

When a patient is attended, the front node is removed and its memory is
released.

``` cpp
if (front == NULL) {
    cout << "Error: Queue is empty\n";
}
else {
    Node* temp = front;
    front = front->next;
    delete temp;

    if (front == NULL)
        rear = NULL;
}
```
