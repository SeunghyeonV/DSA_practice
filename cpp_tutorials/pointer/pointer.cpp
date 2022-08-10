#include <iostream>
using namespace std;

int main() {
    // ptr == &a
    // *ptr == a

    int a = 5;
    int *ptr = &a;

    cout << a << endl; // value of a
    cout << &a << endl; // address of a

    cout << *ptr << endl; // value assigned to a
    cout << ptr << endl; // address of a

    /*
    address == name of array
    
    &score[0] == score
    &score[1] == score + 1
    &score[2] == score + 2
    */

    cout << "************************************" << endl;
    int score[3] = {1,2,3};

    for (int i=0; i<3; i++) {
        cout << "Address of score [" << i << "]: " << &score[i] << endl;
    }

    cout << "************************************" << endl;

    for (int i=0; i<3; i++) {
        cout << "Address of score [" << i << "]: " << score + i << endl;
    }


    return 0; 
}