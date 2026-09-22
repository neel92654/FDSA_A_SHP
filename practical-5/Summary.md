**Problem Faced:** 

**Issues Faced While Solving Problem - 1:** 

No major issues were faced while solving the problem but the insertion of a new song after a certain song and how to handle the `prev` and `next` pointers was to understand properly.

```cpp
Node* newNode = new Node;
newNode->song = newSong;

newNode->next = temp->next;
newNode->prev = temp;

if (temp->next != NULL)
    temp->next->prev = newNode;

temp->next = newNode;
```

**Issues Faced While Solving Problem - 2:** 

The main problem faced was during removing a student from the circular linked list and maintaining the circular connection without breaking the list.

```cpp
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
}
```
