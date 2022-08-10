#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void printArr(int arr[]) {
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

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
    int arr[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    bubbleSort(arr);

}