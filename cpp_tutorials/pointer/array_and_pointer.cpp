#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // if we can access to address of an array, we can also access to values of an array
    cout << "Address of an array: " << arr << &arr << &arr[0] << endl;
    int (*ptr)[10] = &arr;
    cout << "Address of an array: " << ptr << endl;

    cout << "First element of an array" << *arr << arr[0] << *(arr+0) << endl;

    //3d array pointer
    int newArr[2][3][2] =  { { {5, 10}, {6, 11}, {7, 12} }, 
                           { {20, 30}, {21, 31}, {22, 32} } };

    // *(*(*(newArr + i) + j) + k)
    cout << "Printing 3D array: " << endl;
    cout << *(*(*(newArr + 0) + 0) + 0) << endl; // print 5
    cout << *(*(*(newArr + 0) + 0) + 1) << endl; // print 10
    cout << *(*(*(newArr + 0) + 1) + 0) << endl; // print 6
    cout << *(*(*(newArr + 0) + 1) + 1) << endl; // print 11
    cout << *(*(*(newArr + 0) + 2) + 0) << endl; // print 7
    cout << *(*(*(newArr + 0) + 2) + 1) << endl; // print 12
    cout << *(*(*(newArr + 1) + 0) + 0) << endl; // print 20
    cout << *(*(*(newArr + 1) + 0) + 1) << endl; // print 30
    cout << *(*(*(newArr + 1) + 1) + 0) << endl; // print 21
    cout << *(*(*(newArr + 1) + 1) + 1) << endl; // print 31
    cout << *(*(*(newArr + 1) + 2) + 0) << endl; // print 22
    cout << *(*(*(newArr + 1) + 2) + 1) << endl; // print 32

    int var = 10;
    int *singlepointer;
    int **doublepointer;

    singlepointer = &var;
    doublepointer = &singlepointer;

    printf("Value of var = %d\n", var );
    printf("Value of var using single pointer = %d\n",  *singlepointer);
    printf("Value of var using double pointer = %d\n", **doublepointer);  

    *singlepointer = 20;
    printf("Value of var = %d\n", var );
    printf("Value of var using single pointer = %d\n",  *singlepointer);
    printf("Value of var using double pointer = %d\n", **doublepointer);  

    **doublepointer= 30;
    printf("Value of var = %d\n", var );
    printf("Value of var using single pointer = %d\n",  *singlepointer);
    printf("Value of var using double pointer = %d\n", **doublepointer);  

    return 0;
}