// https://leetcode.com/problems/binary-search/
// return the target index
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        
        while (left <= right) {
            int mid = (left + right) / 2;
            if (target < nums[mid]) {
                right = mid - 1;
            }
            else if (target > nums[mid]) {
                left = mid + 1;
            }
            else return mid;
        }
        return -1;
        
    }
};

int main() {
    vector <int> nums = {-1,0,3,5,9,12};
    int target = 12;
    Solution s = Solution();
    cout << s.search(nums, target) << endl;

}