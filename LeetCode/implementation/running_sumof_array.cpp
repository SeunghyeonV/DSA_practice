// https://leetcode.com/problems/running-sum-of-1d-array/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> res;
        int elem = 0;
        for (int i = 0; i < nums.size(); i++) {
            elem += nums[i];
            res.push_back(elem);
        }
        
        return res;
        
    }
};