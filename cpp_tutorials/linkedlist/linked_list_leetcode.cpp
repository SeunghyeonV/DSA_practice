#include <iostream>
using namespace std;

class MyLinkedList {
    private:
    struct Node{
        int value;
        Node *next = NULL;
        Node (int val) {
            value = val;
            next = nullptr;
        }
    };

    Node *head;
    int size;
    public:
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index >= size || index < 0) {
            return -1;
        }

        else {
            Node *currentNode = head;
            for (int i = 0; i < index; i++) {
                currentNode = currentNode -> next;
            }
            cout << "value of current node: " << currentNode -> value << " ";
            cout << endl;
            return currentNode -> value;
        }
    }

    void addAtHead(int val) {
        addAtIndex(0, val);
    }

    void addAtTail(int val) {
        addAtIndex(size, val);
    }

    void addAtIndex(int index, int val) {
        if (index > size || index < 0) {
            return;
        }
        Node *newNode = new Node(val);
        Node *currentNode = head;
        if (index == 0) {
            newNode -> next = head;
            head = newNode;
            cout << "Value of head node: " << newNode -> value << endl;
        }

        else {
            for (int i = 0; i < index -1; i++) {
                currentNode = currentNode -> next;
            }
            newNode -> next = currentNode -> next;
            currentNode -> next = newNode;
            cout << "Node to be inserted: " << newNode -> value << endl;
        }
        size++;
    }

    void deleteAtIndex(int index) {
        if (index >= size || index < 0) return;

        else if (index == 0) {
            cout << "Deleting head value: " << head -> value << endl;
            Node *tempNode = head;
            head = head -> next;
            delete tempNode;
            cout << "New head value after head deletion: " << head -> value << endl;
        }

        else {
            Node *currentNode = head;
            for (int i = 0; i < index - 1; i++) {
                currentNode = currentNode -> next;
            }
            cout << "Deleting value " << currentNode -> next -> value 
            << " at index " << index << ":" << endl;

            Node *nextNode = currentNode -> next -> next;
            delete currentNode -> next;
            currentNode -> next = nextNode;
        }
        size--;
    }

    void printList() {
        Node *temp = head;
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }
        cout << "Printing node: ";
        while (temp != NULL) {
            cout << temp -> value << " ";
            temp = temp -> next;
        }
        cout << endl;
    }

    ~MyLinkedList() {
        Node *nodeToDelete = head;
        while (nodeToDelete != nullptr) {
            head = head -> next;
            delete nodeToDelete;
            nodeToDelete = head;
        }
    }
};

int main() {
    MyLinkedList *list = new MyLinkedList();
    list -> addAtHead(3);
    list -> addAtHead(2);
    list -> addAtHead(1);
    list -> addAtIndex(3,4);
    list -> addAtTail(5);
    // print 1 2 3 4 5
    list -> printList();

    list -> get(0);
    list -> get(1);
    list -> get(2);
    list -> get(3);
    list -> get(4);

    // delete head, head->next, return 2,4,5
    list -> deleteAtIndex(0);
    list -> deleteAtIndex(1);
    list -> get(0);
    list -> get(1);
    list -> get(2);
    list -> printList();
    return 0;
}