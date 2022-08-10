// https://leetcode.com/problems/merge-two-binary-trees/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        TreeNode *mergeTree(TreeNode *root1, TreeNode *root2) {
            if (root1 == NULL) return root2;
            if (root2 == NULL) return root1;
            root1 -> val += root2 -> val;
            root1 -> left = mergeTree(root1 -> left, root2 -> left);
            root1 -> right = mergeTree(root1 -> right, root2 -> right);

            return root1;
        }
};