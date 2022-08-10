// https://leetcode.com/problems/first-bad-version/submissions/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstBadVersion(int n) {
        long long int left, right, position, mid;
        left = 1;
        right = n;
        position = 1;
        
        while (left <= right) {
            mid = left + (right - left)/2;
            if (isBadVersion(mid) == true) {
                right = mid - 1;
                position = mid;
            }
            
            else {
                left = mid + 1;
            }
        }
        return position;
    }
    
};
