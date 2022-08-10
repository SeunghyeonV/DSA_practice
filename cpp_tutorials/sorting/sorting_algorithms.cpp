#include <bits/stdc++.h>
#include <chrono>

using namespace std;

class sorting {
    public:

    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

    void insertionSort(vector <int> &arr, int arr_size) {
        int i, j;
        for (i = 1; i < arr_size; i++) {
            for (j = i; j > 0; j--) {
                if (arr[j] <= arr[j-1]) {
                    swap(arr[j], arr[j-1]);
                }
            } 
        }
    }

    void bubbleSort(vector <int> &arr, int arr_size) {
        
        for (int i = 0; i < arr_size; i++) {
            for (int j = 0; j < arr_size - i; j++) {
                if (arr[j] > arr[j+1]) {
                    swap(arr[j], arr[j+1]);
                }
            }
        }
    }

    void selectionSort(vector <int> &arr, int arr_size) {
        int i, j, min_idx;
        for (i = 0; i < arr_size; i++) {
            min_idx = i;
            for (j = i+1; j < arr_size; j++) {
                if (arr[j] < arr[min_idx]) {
                    min_idx = j;
                }
            }
            swap(arr[i], arr[min_idx]);
        }
    }

    void merge(vector <int> &arr, int low,int mid,int high) {
        vector <int> temp(arr.size());
        int k = 0;
        int i = low, j = mid + 1;
        
        while(i <= mid && j <= high)
        {
            if(arr[i] <= arr[j])
            {
                temp[k] = arr[i];
                i++;
            }
            else{
                temp[k] = arr[j];
                j++;
            }
            k++;
        }

        while(i <= mid)
        {
            temp[k] = arr[i++];
            k++;
        }

        while(j <= high)
        {
            temp[k] = arr[j];
            k++;
            j++;
        }

        int p = low;
        for(int l = 0; l < k; l++)
        {
            arr[p] = temp[l];
            p++;
        }
    }

    void mergeSort(vector <int> &arr, int low, int high) {
        if(high <= low) return;
        int mid = (low + (high-low)/2);
        
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }

    void quickSort(vector <int> &arr, int start, int end) {
        if (start >= end) return;

        int key = start;
        int i = start + 1;
        int j = end;
        int temp;

        while (i <= j) {
            while (i <= end && arr[i] < arr[key]) {
                i++;
            }
            while (j > start && arr[j] >= arr[key]) {
                j--;
            }

            if (i > j) {
                swap(arr[j], arr[key]);
            } else {
                swap(arr[j], arr[i]);
            }
        }

        quickSort(arr, start, j-1);
        quickSort(arr, j+1, end);

    }

    void heapSort(vector <int> &arr, int arr_size) {
        // Heapify the tree
        for (int i = 1; i < arr_size; i++) {
            int child = i;
            while (child != 0) {
                int root = (child - 1) / 2;
                if (arr[root] < arr[child]) { // if child val is larger than parent val
                    swap(arr[root], arr[child]);
                }
                child = root;
            }
        }

        for (int i = arr_size-1; i >= 0; i--) {
            swap(arr[0], arr[i]);
            int root = 0;
            int child = 1;

            while (child < i) {
                child = 2 * root + 1;
                if (child < i-1 && arr[child] < arr[child+1]) {
                    child++;
                }
                if (child < i && arr[root] < arr[child]) {
                    swap(arr[root], arr[child]);
                }
                root = child;
            }
        }
    }

};



int main() {

    vector <int> unsorted_arr;
    for (int i = 0; i < 30000; i++) {
        int randomVal = (rand() % 30000) + 1;
        unsorted_arr.push_back(randomVal);
    }
    vector <int> stdSort = unsorted_arr;
    vector <int> insSort = unsorted_arr;
    vector <int> bubSort = unsorted_arr;
    vector <int> selSort = unsorted_arr;
    vector <int> merSort = unsorted_arr;
    vector <int> qSort = unsorted_arr;
    vector <int> hSort = unsorted_arr;
    

    sorting s = sorting(); // sorting class

    auto start1 = chrono::steady_clock::now();
    sort(stdSort.begin(), stdSort.end());
    auto end1 = chrono::steady_clock::now();

    cout << "C++ std::sort elapsed time: "
        << chrono::duration_cast<chrono::milliseconds>(end1 - start1).count() / 1000 << "."
        << chrono::duration_cast<chrono::milliseconds>(end1 - start1).count() % 1000 
        << "s, " << "BigO: O(NlogN)" << endl;
        
    auto start2 = chrono::steady_clock::now();
    s.insertionSort(insSort, insSort.size());
    auto end2 = chrono::steady_clock::now();

    cout << "Insertion sort elapsed time: "
        << chrono::duration_cast<chrono::milliseconds>(end2 - start2).count() / 1000 << "."
        << chrono::duration_cast<chrono::milliseconds>(end2 - start2).count() % 1000 
        << "s, " << "BigO: O(N^2)" << endl;

    auto start3 = chrono::steady_clock::now();
    s.bubbleSort(bubSort, bubSort.size());
    auto end3 = chrono::steady_clock::now();

    cout << "Bubble sort elapsed time: "
        << chrono::duration_cast<chrono::milliseconds>(end3 - start3).count() / 1000 << "."
        << chrono::duration_cast<chrono::milliseconds>(end3 - start3).count() % 1000 
        << "s, " << "BigO: O(N^2)" << endl;

    auto start4 = chrono::steady_clock::now();
    s.selectionSort(selSort, selSort.size());
    auto end4 = chrono::steady_clock::now();

    cout << "Selection sort elapsed time: "
        << chrono::duration_cast<chrono::milliseconds>(end4 - start4).count() / 1000 << "."
        << chrono::duration_cast<chrono::milliseconds>(end4 - start4).count() % 1000 
        << "s, " << "BigO: O(N^2)" << endl;

    auto start5 = chrono::steady_clock::now();
    s.mergeSort(merSort, 0, merSort.size()-1);
    auto end5 = chrono::steady_clock::now();

    cout << "Merge sort elapsed time: "
        << chrono::duration_cast<chrono::milliseconds>(end5 - start5).count() / 1000 << "."
        << chrono::duration_cast<chrono::milliseconds>(end5 - start5).count() % 1000 
        << "s, " << "BigO: O(NlogN)" << endl;

    auto start6 = chrono::steady_clock::now();
    s.quickSort(qSort, 0, qSort.size()-1);
    auto end6 = chrono::steady_clock::now();

    cout << "Quick sort elapsed time: "
        << chrono::duration_cast<chrono::milliseconds>(end6 - start6).count() / 1000 << "."
        << chrono::duration_cast<chrono::milliseconds>(end6 - start6).count() % 1000 
        << "s, " << "BigO: O(NlogN)" << endl;

    auto start7 = chrono::steady_clock::now();
    s.heapSort(hSort, hSort.size()-1);
    auto end7 = chrono::steady_clock::now();

    cout << "Heap sort elapsed time: "
        << chrono::duration_cast<chrono::milliseconds>(end7 - start7).count() / 1000 << "."
        << chrono::duration_cast<chrono::milliseconds>(end7 - start7).count() % 1000 
        << "s, " << "BigO: O(NlogN)" << endl;

    // use it to print sorted elements    
    // for (auto elem : hSort) {
    //     cout << elem << " ";
    // }

    return 0;
}