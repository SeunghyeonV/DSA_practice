#include <iostream>
using namespace std;

struct Node {
    public:
    Node *next;
    int node_data;
};

void push(Node **head_ref, int data) {
    Node *node = new Node();
    node -> node_data = data;
    node -> next = *head_ref;
    *head_ref = node;
}

void insertAfter(Node *prev, int data) {
    Node *node = new Node();
    node -> node_data = data;

    if (prev == NULL) {
        cout << "Error";
    }

    node -> next = prev -> next;
    prev -> next = node;
}

void append (Node **head_ref, int data) {
    Node *node = new Node();
    Node *last = *head_ref;
    node -> node_data = data;
    node -> next = NULL;

    if (last == NULL) {
        *head_ref = node;
    }

    while (last -> next != NULL) {
        last = last -> next;
    }

    last -> next = node;

}

void deleteNode (Node **head_ref, int key) {
    Node *target = *head_ref;
    Node *prev = NULL;

    if (target == NULL) {
        return;
    }

    else if (target != NULL && target -> node_data == key) {
        *head_ref = target -> next;
        delete target;
    }

    else {
        while (target != NULL && target -> node_data != key) {
            prev = target;
            target = target -> next;
        }
    }

    prev -> next = target -> next;
    delete target;
}

void printList (Node *node) {
    while (node != NULL) {
        cout << " " << node -> node_data;
        node = node -> next;
    }
    cout << " " << endl;
}

int main() {
    Node *headNode = NULL;
    push (&headNode, 3);
    push (&headNode, 2);
    push (&headNode, 1);
    printList(headNode);
    insertAfter (headNode -> next -> next, 4);
    append (&headNode, 5);
    printList(headNode);
    deleteNode (&headNode, 5);
    printList(headNode);

}