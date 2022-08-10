// https://leetcode.com/problems/two-sum/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> solution;
        int idx = 0;
        while (idx < nums.size()) {
            int pivot = nums[idx];
            for (int i = idx+1; i < nums.size(); i++) {
                if (pivot + nums[i] == target) {
                    solution.push_back(idx);
                    solution.push_back(i);
                } 
            }
            idx++;
        }

        return solution;
    }
};


int main () {
    Solution s = Solution();
    vector <int> nums = {3,2,4};
    int target = 6;

    for (auto elem : s.twoSum(nums, target)) {
        cout << elem <<  " ";
    }
    return 0;
}