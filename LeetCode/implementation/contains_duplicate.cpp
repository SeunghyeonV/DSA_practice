// https://leetcode.com/problems/contains-duplicate/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set <int> a;
        for (auto elem : nums) {
            a.insert(elem);
        }
        
        if (nums.size() != a.size()) return true;
        return false;
    }
};

int main() {
    vector <int> a = {1,2,3,1};
    Solution s = Solution();
    cout << s.containsDuplicate(a);

}