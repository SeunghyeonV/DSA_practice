// inheritance - overriding & overloading

#include <iostream>
using namespace std;

class Parent {
    public:
    void over() {
        cout << "Call over function of Parent class!" << endl;
    }
};

class Child : public Parent {
    public:
    // redefining the parent class function - overriding
    void over () {
        cout << "Call over function of child class!" << endl;
    }

    void over (char alphabet) {
        // same name but different parameter - overloading
        cout << "overloading example: _pple? " << alphabet << "pple" << endl;
    }

    void over2 () {
        // enable calling parent class function 
        // Call over function of Parent class!
        Parent::over();
        cout << "Call over function of child class!" << endl;
    }
};

int main() {
    Child c;
    c.over();
    c.over('a');
    c.over2();
    cout << "---------------------------" << endl;
    Child *c2; // can define class using pointer
    c2 -> over2(); 
    return 0;
}