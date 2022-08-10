#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// insertion sort
void insertionSort(int arr[], int arr_size) {
    int i, j;
    for (i=1; i < arr_size; i++) {
        for (j=i; j > 0; j--) {
            if (arr[j] <= arr[j-1]) {
                swap (arr[j], arr[j-1]);
            }
        }
    }
}

// bubble sort
void bubbleSort(int arr[]) {
    printArr(arr);
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
            printArr(arr);
        }
    }
}

int main() {
    int arr[10] = {9,7,4,2,1,3,5,6,8,0};
    insertionSort(arr, 10);
    for (auto &elem: arr) {
        cout << elem << " ";
    }

}