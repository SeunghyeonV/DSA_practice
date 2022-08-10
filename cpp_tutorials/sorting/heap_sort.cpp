#include <iostream>
using namespace std;

void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void heapSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int child = i;
        do {
            int root = (child - 1) / 2;
            if (arr[root] < arr[child]) {
                swap(arr[root], arr[child]);
            }
            child = root;
        } while (child != 0);
    }

    for (int i = size-1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        int root = 0;
        int child = 1;

        do {
            child = 2 * root + 1;
            if (child < i - 1 && arr[child] < arr[child + 1]) {
                child ++;
            }

            if (child < i && arr[root] < arr[child]) {
                swap(arr[root], arr[child]);
            }
            root = child;
        } while (child < i);
    } 

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int size = 10;
    int arr[size] = {7,3,6,8,9,1,2,4,0,5}; 
    heapSort(arr, size);
    return 0;
}