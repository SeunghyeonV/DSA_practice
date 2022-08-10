#include <iostream>
using namespace std;

void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void quickSort(int *arr, int start, int end) {
    int pivot = start;
    int i = start + 1;
    int j = end;
    int temp;

    if (start >= end) return; //when only 1 element exists 

    while (i <= j) { // repeat until i and j cross

        while (i <= end && arr[i] <= arr[pivot]) {
            i++;
        }

        while (j > start && arr[j] >= arr[pivot]) {
            j--; 
        }

        if (i > j) {
            temp = arr[j];
            arr[j] = arr[pivot];
            arr[pivot] = temp;
        }
        
        else {
            swap (arr[i], arr[j]);
        }

        cout << "pivot: " << arr[pivot] << endl;
        for (int a = 0; a < 10; a++) {
            cout << arr[a] << " "; 
        }
        cout << endl;
    }

    quickSort(arr, start, j-1);
    quickSort(arr, j+1, end);
}

int main() {
    int arr[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    quickSort(arr, 0, 9);
    for (auto &elem : arr) {
        cout << elem << " ";
    }
    return 0;
}