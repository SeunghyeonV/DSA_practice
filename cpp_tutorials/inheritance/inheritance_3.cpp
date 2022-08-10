// inheritance - binding

#include <iostream>
using namespace std;

class Parent {
    public:
    void print() {
        cout << "This is parent. " << endl;
    }
};

class Child : public Parent {
    public:
    void print() {
        cout << "This is child." << endl;
    }
};

class newParent {
    public:
    virtual void print() {
        cout << "This is newParent. " << endl;
    }
};

class newChild : public newParent {
    public:
    void print () {
        cout << "This is newChild. " << endl;
    }
};



int main() {
    Parent *p = new Parent;
    Child *c = new Child;

    p -> print();
    p = c;
    p -> print(); // return "This is parent" !! why? 
    // static binding - the address of function is already determined when compile
    // need to perform dynamic binding - determine the function to be called during runtime
    // use virtual
    cout << "-----------------------------------" << endl;
    newParent *np = new newParent;
    newChild *nc = new newChild;

    np -> print();
    np = nc;
    nc -> print();
}