**Problem Faced:**

**Issues Faced While Solving Problem - 1:**

There were no major issues faced while solving this problem. The main thing was to understand the different orders in which nodes are visited
during tree traversal. Inorder visits the left subtree, root, and right subtree; preorder visits the root first; and postorder visits the root
after its subtrees.

``` cpp
void inorder(Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
```

For level-order traversal, a queue is used to visit nodes level by level.

``` cpp
queue<Node*> q;
q.push(root);

while (!q.empty()) {
    Node* temp = q.front();
    q.pop();

    cout << temp->data << " ";

    if (temp->left != NULL)
        q.push(temp->left);

    if (temp->right != NULL)
        q.push(temp->right);
}
```

**Issues Faced While Solving Problem - 2:**

There were no major issues faced while solving this problem. The main thing was to understand how to insert each book code in the correct
position according to the Binary Search Tree rule. Smaller values are inserted to the left, while larger values are inserted to the right.

``` cpp
if (x < root->data)
    root->left = insert(root->left, x);
else if (x > root->data)
    root->right = insert(root->right, x);
```

After inserting all the codes, inorder traversal displays them in ascending order.

``` cpp
inorder(root->left);
cout << root->data << " ";
inorder(root->right);
```
