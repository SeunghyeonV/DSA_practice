#include <iostream>
using namespace std;

class Stack {
    private: 
    int top;
    int maxSize;
    char *stack;

    public: 
    Stack(int size);
    bool isFull();
    bool isEmpty();
    char pop();
    void push(char element);
    void print();
};

Stack::Stack(int size) {
    maxSize = size;
    stack = new char[maxSize];
    top = -1;
}

bool Stack::isFull(){
    if (top == maxSize - 1) {
        return 1;
    } 
    else return 0;
}

bool Stack::isEmpty(){
    if (top == -1) {
        return 1;
    } 
    else return 0;
}

char Stack::pop() {
    if (isEmpty() == 1) {
        cout << "Error: stack is empty." << endl; 
        return 0;
    }
    return stack[top--];
}

void Stack::push(char element) {
    if (isFull() == 1){
        cout << "Error: stack is full." << endl;
    }
    else {
        stack[++top] = element;
    }
}

void Stack::print() {
    for (int i = 0; i < top+1; i++) {
        cout << stack[i] << endl;
    }
}

int main() {
    Stack stack(5);
    stack.push('a');
    stack.push('b');
    stack.push('c');
    stack.push('d');
    stack.push('e');
    stack.isFull();
    
    stack.pop();
    stack.push('f');
    stack.print();
}