#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        vector <char> vec = {"+", "-", "*", "/"};
        int i = 0;
        while (i < tokens.size()) {
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                i++;
            }
        }

};

int main() {
    vector <string> tokens = {"2", "1", "+", "3", "*"};
    Solution s = Solution();
    cout << s.evalRPN(tokens);
}