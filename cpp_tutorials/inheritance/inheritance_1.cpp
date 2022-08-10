// C++ program to demonstrate the working of protected inheritance

#include <iostream>
using namespace std;

class Base {
   private:
    int pvt = 1;
   protected:
    int prot = 2;
   public:
    int pub = 3;

    // function to access private member
    int getPVT() {
        return pvt;
    }
};

class ProtectedDerived : protected Base {
   public:
    // function to access protected member from Base
    int getProt() {
        return prot;
    }
    // function to access public member from Base
    int getPub() {
        return pub;
    }
};

int main() {
    Base base;
    // can access directly from super class
    cout << "Private = " << base.getPVT() << endl;

    ProtectedDerived object1;
    // cout << object1.getPVT() << endl; // private - not accessible
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.getPub() << endl;
    return 0;
}