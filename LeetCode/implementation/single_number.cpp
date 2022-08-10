// https://leetcode.com/problems/single-number/
#include <bits/stdc++.h>
using namespace std;
//  unordered map Time complexity O(1)
// use xor -> cancels out the same element

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int answer = 0;
        for (int i = 0; i < nums.size(); i++) {
            answer = answer ^ nums[i];
        }
        return answer;
    }
};