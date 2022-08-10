#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *left;
    Node *right;

    Node (int value) {
        data = value;
    }
};

Node* createNode(int value) {
    Node *newNode = new Node(value);
    if (!newNode) {
        cout << "Memory error!";
        return NULL;
    }

    newNode -> data = value;
    newNode -> left = newNode -> right = NULL;
    return newNode;

}

Node *insertNode(Node *root, int data) {
    if (root == NULL) {
        root = createNode(data);
        return root;
    }

    queue <Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node *temp = q.front();
        q.pop();

        if (temp -> left != NULL) {
            q.push(temp -> left);
        }
        else {
            temp -> left = createNode(data);
            return root;
        }

        if (temp -> right != NULL) {
            q.push(temp -> right);
        }
        else {
            temp -> right = createNode(data);
            return root;
        }
    }
}

void inOrder(Node *temp) {
    if (temp == NULL) return;

    inOrder(temp -> left);
    cout << temp -> data << ' ';
    inOrder(temp -> right);
}


int main() {
    Node *root = createNode(10);
    root -> left = createNode(11);
    root -> left -> left = createNode(7);
    root -> right = createNode(9);
    root -> right -> left = createNode(15);
    root -> right -> right = createNode(8);
    
    cout << "Inorder traversal before insertion: ";
    inOrder(root);
    cout << endl;

    int key = 12;
    root = insertNode(root, key);
    cout << "Inorder traversal after insertion: ";
    inOrder(root);
    cout << endl;
    return 0;
} 