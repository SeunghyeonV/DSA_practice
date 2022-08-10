// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
// Stack
// Runtime error

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "( a(b) (c) (d(e(f)g)h) I (j(k)l)m)"; // 4
    int l = 0;
    int r = 0;
    int result = 0;
    vector <int> resultvect;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            l += 1;
            result += 1;
            resultvect.push_back(result);
        }
        else if (s[i] == ')') {
            r += 1;
            result -= 1;
            resultvect.push_back(result);
        }
        
    }
    
    sort(resultvect.begin(), resultvect.end());
    cout << resultvect[resultvect.size()-1] << endl;

}