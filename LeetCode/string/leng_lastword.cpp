#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int last = s.size()-1; // last_idx
        
        while (last >= 0 && s[last] == ' ') {
            last --;
        } // trim spaces
        
        // when s[last] is not empty
        while (last >= 0 && s[last] != ' ') {
            count++;
            last--;
        }
        return count;
    }
};


int main() {
    Solution s = Solution();
    cout << s.lengthOfLastWord("Hello my friend  ");
}

