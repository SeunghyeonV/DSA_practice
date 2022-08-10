#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void swap (int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void selectionSort(vector <int> arr) {
    for(int i=0; i<arr.size(); i++) {
        int min_index = i; // assume first element to be the smallest
        for (int j=i+1; j<arr.size(); j++) {
            if(arr[min_index] > arr[j]) {
                min_index = j; // change the index of smallest element by comparing with the next element
            }
        }
        swap(arr[min_index], arr[i]); // change the sequence
    }

    for (auto &elem : arr) {
        cout << elem << " ";
    }
}

int main() {
    vector <int> arr = {7,3,6,5,9,1,2,8,4};
    selectionSort(arr);
}