#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";
        string s = *min_element(strs.begin(), strs.end());

        for (int i = 0; i < s.size(); i++) {
            for(int j = 0; j < strs.size(); j++) {
                if (s[i] != strs[j][i]) { // if no common prefix
                    return ans;
                }
            }
            ans.push_back(s[i]);
        }
        
        return ans;
    }
};

int main() {
    Solution s = Solution();
    vector <string> strs = {"flower","flow","flight"};
    cout << s.longestCommonPrefix(strs);
}