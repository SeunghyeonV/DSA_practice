#include <iostream>
using namespace std;

// simple reverse
int *reverseArray(int arr[], int size) {
    int temp[size];
    int i = size-1;
    int j = 0;

    for (int j = 0; j < size; j++) {
        temp[j] = arr[i];
        i--;
    }

    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }

    return arr;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int *rArray(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    return arr;
}

int *leftRotate(int arr[], int d, int n) {
    if (d == 0) {
        return arr;
    }
    
    d = d % n;
    rArray(arr, 0, d-1);
    rArray(arr, d, n-1);
    rArray(arr, 0, n-1);
    return arr;
}



int main() {
    int size = 10;
    int arr [size] = {1,2,3,4,5,6,7,8,9,10};
    // reverseArray(arr, size);
    // rArray(arr, 0, size-1);
    leftRotate(arr, 5, size);
    // rotateArray(arr,size, 3);
    for (auto &elem : arr) {
        cout << elem << " ";
    }
    return 0;
}