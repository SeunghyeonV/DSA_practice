#include <iostream>
using namespace std;

void sequentialSearch(int arr[], int target, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << "target index: " << i << endl;
        }
    }

}

int main(){
    int arr[10] = {3,8,1,2,9,0,4,7,6,5};
    int target = 6;
    int size = sizeof(arr) / sizeof(arr[0]);
    sequentialSearch(arr, target, size);
}