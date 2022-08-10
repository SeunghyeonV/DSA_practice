// https://leetcode.com/problems/richest-customer-wealth/submissions/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector <int> solution;
        
        
        for (int i = 0; i < accounts.size(); i++) {
            int sumval = 0;
            
            for (int j = 0; j < accounts[i].size(); j++) {
                sumval += accounts[i][j];
            }
            solution.push_back(sumval);
        }
        
        int maxval = *max_element(solution.begin(), solution.end());
        return maxval;
    }
};