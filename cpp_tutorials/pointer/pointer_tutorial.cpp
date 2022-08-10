#include <iostream>
using namespace std;

// pointer - a variable that saves address of certain data
// & - get the address of variable 
// * - get the value of variable

int main() {
    int a = 2;
    int *p = &a; 
    *p = 3; // update both a and p value as p references the value saved in a's address
    /*
    int *p; p=&a; or int *p = &a;
    both works
    */

    cout << "Address of variable 'a': " << &a << endl;
    cout << "Address of variable 'p': " << p << endl; 
    cout << "Value of variable 'a': " << a << endl; 
    cout << "Value of variable 'p': " << *p << endl; 

    // Another example
    int b;
    int c;
    int *ptr;

    ptr = &b;
    *ptr = 2;
    ptr = &c;
    *ptr = 4;

    cout << "Value of b is: " << b << endl;
    cout << "Value of c is: " << c << endl;


    return 0;
}