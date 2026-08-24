**Problem Faced:** 

**Issues Faced While Solving Problem - 1:** 

Issue faced while solving the problem was just during like the insertion at a  certain point and how to handle the pointer for the same 

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

**Issues Faced While Solving Problem-2** 

The main problem faced was during reversing the linked list. 

ListNode* p3 = head;      
    ListNode* prev = nullptr;   
    ListNode* next_node = nullptr;  

    while (p3 != nullptr) { 

        next_node = p3->next;   
        p3->next = prev;        
        prev = p3;              
        p3 = next_node;         
    } 

    head = prev;