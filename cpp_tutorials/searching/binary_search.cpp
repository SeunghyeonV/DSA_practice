#include <iostream>
#include <vector>
using namespace std;

// recursion
int binarySearch(vector <int> &arr, int target, int start, int end) {
    if (start > end) return -1;
    int middle = (start + end) / 2;

    if (arr[middle] == target) {
        return middle;
    }

    else if (arr[middle] > target) {
        return binarySearch(arr, target, start, middle-1);
    }

    else {
        return binarySearch(arr, target, middle+1, end);
    }
}

//looping
int binarySearch_loop(vector <int> &arr, int target, int start, int end) {
    while (start <= end) {
        int middle = (start + end) / 2;
        if (arr[middle] == target) {
            return middle;
        }

        else if (arr[middle] > target) {
            end = middle - 1;
        }

        else {
            start = middle + 1;
        }
    }

    return -1;
}


int main() {
    vector <int> arr;
    int n, input;
    cout << "Enter the number of array: " << endl;
    cin >> n;
    cout << "Enter elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> input;
        arr.push_back(input);
    }

    int target;
    cout << "Enter the target: " << endl;
    cin >> target;

    int result = binarySearch(arr, target, 0, n-1);
    if (result == -1) {
        cout << "Element does not exist" << endl;
    }

    else {
        cout << "Element index: " << result+1 << endl;
    }
}