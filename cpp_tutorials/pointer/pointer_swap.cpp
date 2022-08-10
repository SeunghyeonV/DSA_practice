#include <iostream>
using namespace std;
// failed swap
void swap_fail (int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// passing by reference using pointers
void swap (int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// passing by reference without pointers
void swap_address (int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 1;
    int b = 2;

    swap_fail(a, b);
    cout << "value of a is: " << a << endl;
    cout << "value of b is: " << b << endl; 

    swap(&a, &b); // 주소값 전달 - a와 b의 값을 교환하는 게 아니라 a와 b 가 가리키는 두 변수의 값을 교환
    cout << "value of a is: " << a << endl;
    cout << "value of b is: " << b << endl; 

    swap_address(a, b);
    cout << "value of a is: " << a << endl;
    cout << "value of b is: " << b << endl; 

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // if we can access to address of an array, we can also access to values of an array
    cout << "Address of an array: " << arr << endl;
    cout << "Address of an array: " << &arr << endl;
    cout << "Address of an array: " << &arr[0] << endl;
    int (*ptr)[10] = &arr;
    cout << "Address of an array: " << ptr << endl;

    cout << "First element of an array through dereference: " << *arr << endl;
    cout << "First element of an array: " << arr[0] << endl;
    cout << "First element of an array: " << *(arr + 0) << endl;

    return 0;
}