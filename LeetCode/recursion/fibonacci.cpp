#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int fib(int n) {
//         if (n == 0) {
//             return 0;
//         }
//         else if (n == 1) {
//             return 1;
//         }
//         return fib(n-1) + fib(n-2);
//     }
// };

class Solution {
    public:
    int fib(int n) {
        int *arr = new int[n+1];
        arr[0] = 0;
        arr[1] = 1;

        for (int i = 2; i <= n; i++) {
            arr[i] = arr[i-1] + arr[i-2];
        }

        int output = arr[n];
        delete []arr;
        return output;
    }
};

int main() {
    Solution s = Solution();
    vector <int> a;
    cout << s.fib(5, a) << endl;
}