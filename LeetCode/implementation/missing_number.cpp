// https://leetcode.com/problems/missing-number/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector <int> &nums) {
        vector <int> temp;
        for (int i = 0; i <= nums.size(); i++) {
            temp.push_back(i);
        }
        sort(nums.begin(), nums.end());

        vector <int> diff;
        set_difference(
            temp.begin(), temp.end(),
            nums.begin(), nums.end(),
            std::back_inserter(diff)
        ); // returns the different element between two vectors

        return diff[0];
    }
};