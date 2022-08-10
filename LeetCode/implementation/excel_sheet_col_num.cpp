// https://leetcode.com/problems/excel-sheet-column-number/
#include <bits/stdc++.h>
using namespace std;

// SOLVED!
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int answer = 0;
        int powval = columnTitle.size() - 1;
        for (int i = 0; i < columnTitle.size(); i++) {
            answer += ((int)columnTitle[i] - 64) * pow(26, powval);
            powval--;
        }
        return answer;       
    }
};

int main() {
    Solution s = Solution();
    cout << s.titleToNumber("ABCD");
}