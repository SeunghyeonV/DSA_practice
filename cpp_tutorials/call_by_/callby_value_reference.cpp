#include <iostream>
using namespace std;

/*
call by value: pass values by copying variables. copied variable is passed.
call by reference: use the address of variables to pass values. variable itself is passed.
*/

// Changes made in a copy of variable never modify the value of variable outside the function.
void swap_callbyvalue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// call by reference 1 - pointer
// Change in the variable also affects the value of the variable outside the function.
void swap_callbyreference1(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// call by reference 2 - reference
// Change in the variable also affects the value of the variable outside the function.
void swap_callbyreference2(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 1;
    int b = 2;

    swap_callbyvalue(a, b);
    cout << "a value: " << a << " b value: " << b << endl;

    swap_callbyreference1(&a, &b);
    cout << "a value: " << a << " b value: " << b << endl;

    swap_callbyreference2(a, b);
    cout << "a value: " << a << " b value: " << b << endl;
    
    return 0;
}