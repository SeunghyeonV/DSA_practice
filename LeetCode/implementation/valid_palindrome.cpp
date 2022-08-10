#include <bits/stdc++.h>
using namespace std;

// Failed to pass
class Solution {
public:
    bool isPalindrome(string s) {
        // 65-90, 97-122
        string r = "";
        string ss = "";

        if (s.size() == 0 || s.size() == 1) {
            return true;
        }

        if (s.size() == 2) {
            if (s[0] != s[1]) {
                return false;
            }
        }

        if (s.size() > 2) {
            for (int i = s.size()-1; i >= 0; i--) {
                if((int) toupper(s[i]) >= 65 && (int) toupper(s[i]) <= 90) {
                    r += (char) toupper(s[i]);
                }
            }

            for (int i = 0; i < s.size(); i++) {
                if((int) toupper(s[i]) >= 65 && (int) toupper(s[i]) <= 90) {
                    ss += (char) toupper(s[i]);
                }
            }
        } 
        return bool(r == ss);
    }
};

int main() {
    Solution s = Solution();
    cout << s.isPalindrome("0P");
    return 0;
}