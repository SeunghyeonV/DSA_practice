// https://leetcode.com/problems/symmetric-tree/
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool isMirror(TreeNode *root1, TreeNode *root2) {
        if (root1 != NULL && root2 != NULL) {
            if (root1 -> val == root2 -> val) {
                return (isMirror(root1->left, root2->right) && isMirror(root1->right, root2->left));
            }
            else return false;
        }

        else if ((root1 == NULL && root2 != NULL) || (root1 != NULL && root2 == NULL)) {
            return false;
        } 
        return true;
    }

    bool isSymmetric(TreeNode *root) {
        return isMirror(root -> left, root -> right);
    }
};
