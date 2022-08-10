https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void preOrder(TreeNode *root, vector<int> &ans) {
        if (root == NULL) return;
        ans.push_back(root -> val);
        preOrder(root -> left, ans);
        preOrder(root -> right, ans);
    }


    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> ans;
        preOrder(root, ans);
        return ans;
    }
};

