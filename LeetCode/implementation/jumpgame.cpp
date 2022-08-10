// https://leetcode.com/problems/jump-game/
#include <bits/stdc++.h>
using namespace std;

// good index - index from which we can reach last index
// bad index - index from which we cannot reach last index
// if (current_position + nums[i]) > (last most good index) returns good index

class Solution{ 
    public:
    bool canJump (vector <int> &nums) {
        int n = nums.size();
        int good = n - 1;
        for (int i = n-2; i >= 0; i--) {
            if (i + nums[i] >= good) {
                good = i;
            }
        }

        if (good == 0) return true;
        else return false;

    }
};


int main() {
    Solution s = Solution();
    vector <int> nums = {2,3,1,1,4};
    cout << s.canJump(nums) << endl;
}

// i = 3, nums[i] = 1;
// 3 + 1 >= 4
// goodposition = 3
// i = 2; nums[i] = 1;
// 2 + 1 >= 3
// goodposition = 2;
// i = 1; nums[i] = 3;
// 1 + 3 >= 2;
// goodposition = 1;
// i = 0; nums[i] = 2;
// 0 + 2 >= 1;
// goodposition = 0;
