#include <iostream>
using namespace std;

/* counting sort - fastest sorting algorithm when all numbers are in specific range
 such as sorting numbers in range 1 to 10
 if 100,000 is in the array, it will cause significant memory waste 
 as we need count array with the size of largest element
 count how many times each element appeared
 therefore quicksort is more often used unless the condition is met
*/ 

int main() {
    int temp;
    int count[6]; // since we have 5 elements, array size should be 5+1
    int array[30] = {1,3,2,4,3,2,5,3,1,2,
                     3,4,4,3,5,1,2,3,5,2,
                     3,1,4,3,5,1,2,1,1,1};

    // initialize count array with 0
    for (int i = 1; i <= 5; i++) {
        count[i] = 0;
    }

    // count how many times the numbers in array appeared and save them count array
    for (int i = 0; i < 30; i++) {
        count[array[i]]++;
    }

    // as the range of number is between 1 and 5, we loop between 1 and 5
    // if a huge number exists, don't use counting sort
    for (int i = 1; i <= 5; i++) { 
        if (count[i] != 0) {
            for(int j = 0; j < count[i]; j++) {
                cout << i << " ";
            }
        }
    }
}