#include <iostream>
#include <vector>
using namespace std;

int sorted_arr[10];
void merge(int arr[], int first, int medium, int last) {
    int i = first;
    int j = medium + 1;
    int k = first;

    while (i <= medium && j <= last) {
        if (arr[i] <= arr[j]) {
            sorted_arr[k] = arr[i];
            i++;
        }
        else {
            sorted_arr[k] = arr[j];
            j++;
        }
        k++;
    }
    if (i > medium) {
        for (int t = j; t <= last; t++) {
            sorted_arr[k] = arr[t];
            k++;
        }
    }
    else {
        for (int t = i; t <= medium; t++) {
            sorted_arr[k] = arr[t];
            k++;
        }
    }
    for (int t=first; t <= last; t++) {
        arr[t] = sorted_arr[t];
    }
}

void mergeSort(int arr[], int first, int last) {
    if (first < last) {
        int medium = (first + last) / 2;
        mergeSort(arr, first, medium);
        mergeSort(arr, medium+1, last);
        merge(arr, first, medium, last);
    }
}

int main() {
    int arr[10] = {1,9,2,7,8,3,4,6,5,0};
    for (int i=0; i<10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    mergeSort(arr, 0, (sizeof(arr)/sizeof(arr[0])-1));
    for (int i=0; i<10; i++) {
        cout << arr[i] << " ";
    }

}